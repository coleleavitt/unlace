use super::{is_data_import, minted_name};

#[test]
fn objc_objects_are_data() {
    assert!(is_data_import(b"_OBJC_CLASS_$_NSMutableData"));
    assert!(is_data_import(b"_OBJC_METACLASS_$_NSObject"));
    assert!(!is_data_import(b"_objc_msgSend"));
    assert!(!is_data_import(b"_NSConcreteStackBlock"));
}

#[test]
fn swift_metadata_is_data_and_swift_code_is_not() {
    assert!(is_data_import(b"_$sSSN"));
    assert!(is_data_import(b"_$s8StoreKit10StorefrontVMn"));
    assert!(is_data_import(b"_$s5UIKit13UIContentViewMp"));
    assert!(is_data_import(
        b"_$s5UIKit19UITraitDisplayScaleVAA0B10DefinitionAAWP"
    ));
    assert!(is_data_import(b"_$s8StoreKit03AppA0O11EnvironmentVSQAAMc"));
    assert!(is_data_import(b"_$ss7KeyPathCMo"));
    assert!(is_data_import(
        b"_$s12CoreGraphics14CGPathFillRuleO7evenOddyA2CmFWC"
    ));
    assert!(is_data_import(b"_$sSY8rawValue03RawB0QzvgTq"));
    assert!(is_data_import(
        b"_$s8StoreKit10StorefrontV7currentACSgvgZTu"
    ));
    assert!(!is_data_import(b"_$s8StoreKit10StorefrontVMa"));
    assert!(!is_data_import(
        b"_$s8StoreKit10StorefrontV11countryCodeSSvg"
    ));
    assert!(!is_data_import(
        b"_$s8StoreKit03AppA0O11EnvironmentV10productionAEvgZ"
    ));
    assert!(!is_data_import(
        b"_$s10Foundation11JSONDecoderC19keyDecodingStrategyAC03KeydE0OvsTj"
    ));
    assert!(!is_data_import(
        b"_$s5UIKit17UIApplicationMainys5Int32VAD_SpySpys4Int8VGGSgSSSgAJtF"
    ));
}

#[test]
fn itanium_data_members_and_tables_are_data() {
    assert!(is_data_import(b"__ZNSt3__15ctypeIcE2idE"));
    assert!(is_data_import(b"__ZTVN10__cxxabiv117__class_type_infoE"));
    assert!(is_data_import(b"__ZTISt9exception"));
    assert!(is_data_import(b"__ZNSt3__14coutE"));
    assert!(!is_data_import(b"__ZNKSt3__16locale9use_facetERNS0_2idE"));
    assert!(!is_data_import(b"__ZNSt11logic_errorC2EPKc"));
    assert!(!is_data_import(b"__ZNSt12length_errorD1Ev"));
    assert!(!is_data_import(b"__ZTHN3foo3barE"));
}

#[test]
fn slot_name_is_the_demangled_sanitized_import() {
    assert_eq!(
        minted_name(b"$s8StoreKit10StorefrontVMn"),
        "StoreKit.Storefront.nominal_type_descriptor"
    );
    assert_eq!(
        minted_name(b"OBJC_CLASS_$_NSMutableData"),
        "OBJC_CLASS_$_NSMutableData"
    );
}
