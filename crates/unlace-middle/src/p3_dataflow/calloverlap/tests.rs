use super::*;
use crate::dtype::{Datatype, type_class, type_metatype};
use crate::fspec::{FuncProto, ParamEntry, ProtoModel};
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, RegisterLookup, VarnodeStorage, spacetype,
};

struct Registers;
impl RegisterLookup for Registers {
    fn get_register(&self, _: &str) -> UnlaceResult<VarnodeStorage> {
        Err(unlace_base::error::UnlaceError::lowlevel(
            "name lookup unused",
        ))
    }
    fn get_register_name(&self, space: &Rc<AddrSpace>, off: u64, size: i32) -> String {
        self.get_exact_register_name(space, off, size)
    }
    fn get_exact_register_name(&self, _: &Rc<AddrSpace>, off: u64, size: i32) -> String {
        if (off == 0x20 && size == 8) || ([0x20, 0x24].contains(&off) && size == 4) {
            "register".to_string()
        } else {
            String::new()
        }
    }
}

fn sample(
    big: bool,
    truncated: bool,
    slots: &[(u64, type_class)],
) -> (AddrSpaceManager, FuncProto, Address) {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        big,
        8,
        1,
        1,
        0,
        0,
        0,
    ));
    if truncated {
        ram.truncate_space(4);
    }
    manager.insert_space(ram).unwrap();
    manager.set_default_code_space(1).unwrap();
    manager.set_default_data_space(1).unwrap();
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        big,
        4,
        1,
        2,
        0,
        0,
        0,
    ));
    manager.insert_space(register.clone()).unwrap();
    manager.set_register_lookup(Rc::new(Registers));
    let mut model = ProtoModel::new(&manager);
    model.build_param_list("standard").unwrap();
    for (group, &(offset, class)) in slots.iter().enumerate() {
        let entry = ParamEntry::seed(
            group as int4,
            class,
            register.clone(),
            offset,
            4,
            1,
            0,
            0,
            true,
            false,
            model.input().get_entry(),
            &manager,
        )
        .unwrap();
        model.input_mut().push_entry(entry);
    }
    model.input_mut().finish_decode();
    let mut proto = FuncProto::new();
    proto.set_internal(
        Rc::new(model),
        Rc::new(Datatype::new(0, type_metatype::TYPE_VOID)),
    );
    (manager, proto, Address::new(register, 0x20))
}

#[test]
fn auto_excludes_high_words_float_slots_and_multiple_slots() {
    use type_class::{TYPECLASS_FLOAT as FLOAT, TYPECLASS_GENERAL as GENERAL};
    for big in [false, true] {
        let low = if big { 0x24 } else { 0x20 };
        let high = if big { 0x20 } else { 0x24 };
        for (slots, expected) in [
            (vec![(low, GENERAL)], true),
            (vec![(high, GENERAL)], false),
            (vec![(low, FLOAT)], false),
            (vec![(low, GENERAL), (high, GENERAL)], false),
        ] {
            let (manager, proto, addr) = sample(big, true, &slots);
            assert_eq!(auto_register(&manager, &proto, &addr, 8, false), expected);
            assert!(!auto_register(&manager, &proto, &addr, 16, false));
            assert!(!auto_register(&manager, &proto, &(&addr + 8), 8, false));
            let memory = Address::new(manager.get_default_data_space().unwrap().clone(), 0x20);
            assert!(!auto_register(&manager, &proto, &memory, 8, false));
            let (manager, proto, addr) = sample(big, false, &slots);
            assert!(!auto_register(&manager, &proto, &addr, 8, false));
        }
    }
}

#[test]
fn levels_are_ordered_so_the_gate_can_use_a_threshold() {
    // Both guards read `level >= LEVEL_IN` / `level >= LEVEL_FULL`, and
    // `auto` enables a subset of `in`, so the vocabulary must stay monotone.
    const _: () = assert!(LEVEL_OFF < LEVEL_AUTO);
    const _: () = assert!(LEVEL_AUTO < LEVEL_IN);
    const _: () = assert!(LEVEL_IN < LEVEL_FULL);
}

#[test]
fn apply_parses_the_four_modes() {
    assert_eq!(OptionCallOverlap.apply("auto").expect("auto").0, LEVEL_AUTO);
    assert_eq!(OptionCallOverlap.apply("off").expect("off").0, LEVEL_OFF);
    assert_eq!(OptionCallOverlap.apply("in").expect("in").0, LEVEL_IN);
    assert_eq!(OptionCallOverlap.apply("full").expect("full").0, LEVEL_FULL);
    // `on` and the empty parameter are the full guard.
    assert_eq!(OptionCallOverlap.apply("on").expect("on").0, LEVEL_FULL);
    assert_eq!(OptionCallOverlap.apply("").expect("empty").0, LEVEL_FULL);
    assert!(OptionCallOverlap.apply("wide").is_err());
}
