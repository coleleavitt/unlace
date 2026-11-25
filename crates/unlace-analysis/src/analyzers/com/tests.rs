use super::*;

fn make_factory(ptr: i32) -> unlace_decomp::dtype::TypeFactoryImpl {
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(ptr), ptr, 4);
    types.cache_core_types().unwrap();
    types
}

#[test]
fn tables_parse() {
    assert!(interfaces().len() > 4000);
    let unknown = [
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x46,
    ];
    assert_eq!(guid_names().get(&unknown), Some(&"IID_IUnknown"));
    let shell_link = [
        0x01, 0x14, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x46,
    ];
    assert_eq!(guid_names().get(&shell_link), Some(&"CLSID_ShellLink"));
}

#[test]
fn methods_start_with_the_base_interfaces() {
    let m = methods_of("IShellLinkW").unwrap();
    let names: Vec<&str> = m.iter().map(|(n, _)| *n).collect();
    assert_eq!(
        &names[..4],
        &["QueryInterface", "AddRef", "Release", "GetPath"]
    );
    assert_eq!(names.last(), Some(&"SetPath"));
    let d = methods_of("IDispatch").unwrap();
    assert_eq!(d.len(), 7);
    assert_eq!(d[6].0, "Invoke");
    let s = methods_of("IStream").unwrap();
    assert_eq!(s[3].0, "Read");
    assert_eq!(s[4].0, "Write");
    assert_eq!(s[5].0, "Seek");
}

#[test]
fn interfaces_have_a_table_of_methods() {
    for ptr in [8, 4] {
        let factory = make_factory(ptr);
        let com = ComTypes::new(&factory, ptr);
        let link = com.interface("IShellLinkW").expect("IShellLinkW builds");
        assert_eq!(link.get_size(), ptr);
        let vtbl = factory.find_by_name("IShellLinkWVtbl").unwrap().unwrap();
        assert_eq!(vtbl.get_size(), 21 * ptr);
        assert_eq!(com.guid().unwrap().get_size(), 16);
        assert!(com.interface("INoSuchInterface").is_none());
        let again = com.interface("IShellLinkW").unwrap();
        assert!(Rc::ptr_eq(&link, &again));
    }
}

#[test]
fn clsid_cfg_lines_parse() {
    let ids = parse_clsid_cfg(
        "; header\nDUMMY 0   ; kernel\n\
             guid {00000000-0000-0000-C000-000000000046} IUnknown\n\
             guid {000214F9-0000-0000-C000-000000000046} IID_IShellLinkW ; trailing\n\
             guid {00020020-0000-0000-C000-000000000046} AVIFile Interface 1.22\n\
             guid {0000-bad} X\n\
             guid {00000000-0000-0000-0000-000000000000} GUID_NULL\n",
    );
    assert_eq!(ids.len(), 3);
    let mut unknown = [0u8; 16];
    unknown[8] = 0xc0;
    unknown[15] = 0x46;
    assert_eq!(ids.get(&unknown).map(String::as_str), Some("IID_IUnknown"));
    let mut link = unknown;
    link[..4].copy_from_slice(&[0xf9, 0x14, 0x02, 0x00]);
    assert_eq!(ids.get(&link).map(String::as_str), Some("IID_IShellLinkW"));
    let mut avi = unknown;
    avi[..4].copy_from_slice(&[0x20, 0x00, 0x02, 0x00]);
    assert_eq!(
        ids.get(&avi).map(String::as_str),
        Some("AVIFile_Interface_1_22")
    );
}

#[test]
fn request_prototypes_have_their_arity() {
    let factory = make_factory(4);
    let com = ComTypes::new(&factory, 4);
    for (name, kinds) in REQUESTS {
        let p = com.pieces(name, None, kinds).expect("request builds");
        assert_eq!(p.intypes.len(), kinds.len() - 1, "{name}");
    }
    let create = com.pieces("CoCreateInstance", None, REQUESTS[0].1).unwrap();
    assert_eq!(create.intypes.len(), 5);
    let qi = com.multi_qi().expect("MULTI_QI builds");
    assert_eq!(qi.get_size(), 12);
    let ex = com.pieces("CoCreateInstanceEx", None, "hgpupuq").unwrap();
    assert_eq!(ex.intypes[5].get_size(), 4);
}
