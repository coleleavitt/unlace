use super::*;
use unlace_base::marshal::{ELEM_DATA, Encoder, PackedEncode};

fn encoded(tpl: &ConstructTpl, section: i32) -> Vec<u8> {
    let mut out = Vec::new();
    let mut enc = PackedEncode::new(&mut out);
    tpl.encode(&mut enc, section);
    out
}

#[test]
fn a_kept_template_decodes_on_first_use_to_the_encoded_one() {
    let manager = AddrSpaceManager::new();
    let mut tpl = ConstructTpl::new();
    tpl.set_num_labels(3);
    let mut stream = Vec::new();
    let mut enc = PackedEncode::new(&mut stream);
    enc.open_element(&ELEM_DATA);
    tpl.encode(&mut enc, 2);
    tpl.encode(&mut enc, -1);
    enc.close_element(&ELEM_DATA);

    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&stream).unwrap();
    let el = dec.open_element_id(&ELEM_DATA).unwrap();
    let mut store = LazyTemplates::new();
    assert_eq!(store.take(&mut dec).unwrap(), (2, 0));
    assert_eq!(store.take(&mut dec).unwrap(), (-1, 1));
    dec.close_element(el).unwrap();
    assert_eq!(dec.peek_element().unwrap(), 0);
    assert!(store.slots.iter().all(|slot| slot.tpl.get().is_none()));
    assert_eq!(store.delay_slot(1).unwrap(), 0);
    for (handle, section) in [(0, 2), (1, -1)] {
        let got = store.get(handle, &manager).unwrap();
        assert_eq!(got.num_labels(), 3);
        assert_eq!(encoded(got, section), encoded(&tpl, section));
    }
    assert!(store.get(2, &manager).is_err());
}
