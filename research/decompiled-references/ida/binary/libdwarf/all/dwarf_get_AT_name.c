__int64 __fastcall dwarf_get_AT_name(__int64 a1, _QWORD *a2)
{
  if ( (unsigned int)a1 <= 0x2305 )
  {
    if ( (unsigned int)a1 > 0x1FFF )
    {
      switch ( (int)a1 )
      {
        case 8192:
          *a2 = "DW_AT_HP_block_index";
          return 0;
        case 8193:
          *a2 = "DW_AT_MIPS_fde";
          return 0;
        case 8194:
          *a2 = "DW_AT_MIPS_loop_begin";
          return 0;
        case 8195:
          *a2 = "DW_AT_MIPS_tail_loop_begin";
          return 0;
        case 8196:
          *a2 = "DW_AT_MIPS_epilog_begin";
          return 0;
        case 8197:
          *a2 = "DW_AT_MIPS_loop_unroll_factor";
          return 0;
        case 8198:
          *a2 = "DW_AT_MIPS_software_pipeline_depth";
          return 0;
        case 8199:
          *a2 = "DW_AT_MIPS_linkage_name";
          return 0;
        case 8200:
          *a2 = "DW_AT_MIPS_stride";
          return 0;
        case 8201:
          *a2 = "DW_AT_MIPS_abstract_name";
          return 0;
        case 8202:
          *a2 = "DW_AT_MIPS_clone_origin";
          return 0;
        case 8203:
          *a2 = "DW_AT_MIPS_has_inlines";
          return 0;
        case 8204:
          *a2 = "DW_AT_MIPS_stride_byte";
          return 0;
        case 8205:
          *a2 = "DW_AT_MIPS_stride_elem";
          return 0;
        case 8206:
          *a2 = "DW_AT_MIPS_ptr_dopetype";
          return 0;
        case 8207:
          *a2 = "DW_AT_MIPS_allocatable_dopetype";
          return 0;
        case 8208:
          *a2 = "DW_AT_MIPS_assumed_shape_dopetype";
          return 0;
        case 8209:
          *a2 = "DW_AT_MIPS_assumed_size";
          return 0;
        case 8210:
          *a2 = "DW_AT_HP_raw_data_ptr";
          return 0;
        case 8211:
          *a2 = "DW_AT_HP_pass_by_reference";
          return 0;
        case 8212:
          *a2 = "DW_AT_HP_opt_level";
          return 0;
        case 8213:
          *a2 = "DW_AT_HP_prof_version_id";
          return 0;
        case 8214:
          *a2 = "DW_AT_HP_opt_flags";
          return 0;
        case 8215:
          *a2 = "DW_AT_HP_cold_region_low_pc";
          return 0;
        case 8216:
          *a2 = "DW_AT_HP_cold_region_high_pc";
          return 0;
        case 8217:
          *a2 = "DW_AT_HP_all_variables_modifiable";
          return 0;
        case 8218:
          *a2 = "DW_AT_HP_linkage_name";
          return 0;
        case 8219:
          *a2 = "DW_AT_HP_prof_flags";
          return 0;
        case 8223:
          *a2 = "DW_AT_HP_unit_name";
          return 0;
        case 8224:
          *a2 = "DW_AT_HP_unit_size";
          return 0;
        case 8225:
          *a2 = "DW_AT_HP_widened_byte_size";
          return 0;
        case 8226:
          *a2 = "DW_AT_HP_definition_points";
          return 0;
        case 8227:
          *a2 = "DW_AT_HP_default_location";
          return 0;
        case 8230:
          *a2 = "DW_AT_INTEL_other_endian";
          return 0;
        case 8233:
          *a2 = "DW_AT_HP_is_result_param";
          return 0;
        case 8323:
          *a2 = "DW_AT_ghs_rsm";
          return 0;
        case 8325:
          *a2 = "DW_AT_ghs_frsm";
          return 0;
        case 8326:
          *a2 = "DW_AT_ghs_frames";
          return 0;
        case 8327:
          *a2 = "DW_AT_ghs_rso";
          return 0;
        case 8338:
          *a2 = "DW_AT_ghs_subcpu";
          return 0;
        case 8339:
          *a2 = "DW_AT_ghs_lbrace_line";
          return 0;
        case 8449:
          *a2 = "DW_AT_sf_names";
          return 0;
        case 8450:
          *a2 = "DW_AT_src_info";
          return 0;
        case 8451:
          *a2 = "DW_AT_mac_info";
          return 0;
        case 8452:
          *a2 = "DW_AT_src_coords";
          return 0;
        case 8453:
          *a2 = "DW_AT_body_begin";
          return 0;
        case 8454:
          *a2 = "DW_AT_body_end";
          return 0;
        case 8455:
          *a2 = "DW_AT_GNU_vector";
          return 0;
        case 8456:
          *a2 = "DW_AT_GNU_guarded_by";
          return 0;
        case 8457:
          *a2 = "DW_AT_GNU_pt_guarded_by";
          return 0;
        case 8458:
          *a2 = "DW_AT_GNU_guarded";
          return 0;
        case 8459:
          *a2 = "DW_AT_GNU_pt_guarded";
          return 0;
        case 8460:
          *a2 = "DW_AT_GNU_locks_excluded";
          return 0;
        case 8461:
          *a2 = "DW_AT_GNU_exclusive_locks_required";
          return 0;
        case 8462:
          *a2 = "DW_AT_GNU_shared_locks_required";
          return 0;
        case 8463:
          *a2 = "DW_AT_GNU_odr_signature";
          return 0;
        case 8464:
          *a2 = "DW_AT_GNU_template_name";
          return 0;
        case 8465:
          *a2 = "DW_AT_GNU_call_site_value";
          return 0;
        case 8466:
          *a2 = "DW_AT_GNU_call_site_data_value";
          return 0;
        case 8467:
          *a2 = "DW_AT_GNU_call_site_target";
          return 0;
        case 8468:
          *a2 = "DW_AT_GNU_call_site_target_clobbered";
          return 0;
        case 8469:
          *a2 = "DW_AT_GNU_tail_call";
          return 0;
        case 8470:
          *a2 = "DW_AT_GNU_all_tail_call_sites";
          return 0;
        case 8471:
          *a2 = "DW_AT_GNU_all_call_sites";
          return 0;
        case 8472:
          *a2 = "DW_AT_GNU_all_source_call_sites";
          return 0;
        case 8473:
          *a2 = "DW_AT_GNU_macros";
          return 0;
        case 8474:
          *a2 = "DW_AT_GNU_deleted";
          return 0;
        case 8496:
          *a2 = "DW_AT_GNU_dwo_name";
          return 0;
        case 8497:
          *a2 = "DW_AT_GNU_dwo_id";
          return 0;
        case 8498:
          *a2 = "DW_AT_GNU_ranges_base";
          return 0;
        case 8499:
          *a2 = "DW_AT_GNU_addr_base";
          return 0;
        case 8500:
          *a2 = "DW_AT_GNU_pubnames";
          return 0;
        case 8501:
          *a2 = "DW_AT_GNU_pubtypes";
          return 0;
        case 8502:
          *a2 = "DW_AT_GNU_discriminator";
          return 0;
        case 8503:
          *a2 = "DW_AT_GNU_locviews";
          return 0;
        case 8504:
          *a2 = "DW_AT_GNU_entry_view";
          return 0;
        case 8705:
          *a2 = "DW_AT_SUN_template";
          return 0;
        case 8706:
          *a2 = "DW_AT_SUN_alignment";
          return 0;
        case 8707:
          *a2 = "DW_AT_SUN_vtable";
          return 0;
        case 8708:
          *a2 = "DW_AT_SUN_count_guarantee";
          return 0;
        case 8709:
          *a2 = "DW_AT_SUN_command_line";
          return 0;
        case 8710:
          *a2 = "DW_AT_SUN_vbase";
          return 0;
        case 8711:
          *a2 = "DW_AT_SUN_compile_options";
          return 0;
        case 8712:
          *a2 = "DW_AT_SUN_language";
          return 0;
        case 8713:
          *a2 = "DW_AT_SUN_browser_file";
          return 0;
        case 8720:
          *a2 = "DW_AT_SUN_vtable_abi";
          return 0;
        case 8721:
          *a2 = "DW_AT_SUN_func_offsets";
          return 0;
        case 8722:
          *a2 = "DW_AT_SUN_cf_kind";
          return 0;
        case 8723:
          *a2 = "DW_AT_SUN_vtable_index";
          return 0;
        case 8724:
          *a2 = "DW_AT_SUN_omp_tpriv_addr";
          return 0;
        case 8725:
          *a2 = "DW_AT_SUN_omp_child_func";
          return 0;
        case 8726:
          *a2 = "DW_AT_SUN_func_offset";
          return 0;
        case 8727:
          *a2 = "DW_AT_SUN_memop_type_ref";
          return 0;
        case 8728:
          *a2 = "DW_AT_SUN_profile_id";
          return 0;
        case 8729:
          *a2 = "DW_AT_SUN_memop_signature";
          return 0;
        case 8736:
          *a2 = "DW_AT_SUN_obj_dir";
          return 0;
        case 8737:
          *a2 = "DW_AT_SUN_obj_file";
          return 0;
        case 8738:
          *a2 = "DW_AT_SUN_original_name";
          return 0;
        case 8739:
          *a2 = "DW_AT_SUN_hwcprof_signature";
          return 0;
        case 8740:
          *a2 = "DW_AT_SUN_amd64_parmdump";
          return 0;
        case 8741:
          *a2 = "DW_AT_SUN_part_link_name";
          return 0;
        case 8742:
          *a2 = "DW_AT_SUN_link_name";
          return 0;
        case 8743:
          *a2 = "DW_AT_SUN_pass_with_const";
          return 0;
        case 8744:
          *a2 = "DW_AT_SUN_return_with_const";
          return 0;
        case 8745:
          *a2 = "DW_AT_SUN_import_by_name";
          return 0;
        case 8746:
          *a2 = "DW_AT_SUN_f90_pointer";
          return 0;
        case 8747:
          *a2 = "DW_AT_SUN_pass_by_ref";
          return 0;
        case 8748:
          *a2 = "DW_AT_SUN_f90_allocatable";
          return 0;
        case 8749:
          *a2 = "DW_AT_SUN_f90_assumed_shape_array";
          return 0;
        case 8750:
          *a2 = "DW_AT_SUN_c_vla";
          return 0;
        case 8752:
          *a2 = "DW_AT_SUN_return_value_ptr";
          return 0;
        case 8753:
          *a2 = "DW_AT_SUN_dtor_start";
          return 0;
        case 8754:
          *a2 = "DW_AT_SUN_dtor_length";
          return 0;
        case 8755:
          *a2 = "DW_AT_SUN_dtor_state_initial";
          return 0;
        case 8756:
          *a2 = "DW_AT_SUN_dtor_state_final";
          return 0;
        case 8757:
          *a2 = "DW_AT_SUN_dtor_state_deltas";
          return 0;
        case 8758:
          *a2 = "DW_AT_SUN_import_by_lname";
          return 0;
        case 8759:
          *a2 = "DW_AT_SUN_f90_use_only";
          return 0;
        case 8760:
          *a2 = "DW_AT_SUN_namelist_spec";
          return 0;
        case 8761:
          *a2 = "DW_AT_SUN_is_omp_child_func";
          return 0;
        case 8762:
          *a2 = "DW_AT_SUN_fortran_main_alias";
          return 0;
        case 8763:
          *a2 = "DW_AT_SUN_fortran_based";
          return 0;
        case 8960:
          *a2 = "DW_AT_ALTIUM_loclist";
          return 0;
        case 8961:
          *a2 = "DW_AT_use_GNAT_descriptive_type";
          return 0;
        case 8962:
          *a2 = "DW_AT_GNAT_descriptive_type";
          return 0;
        case 8963:
          *a2 = "DW_AT_GNU_numerator";
          return 0;
        case 8964:
          *a2 = "DW_AT_GNU_denominator";
          return 0;
        case 8965:
          *a2 = "DW_AT_GNU_bias";
          return 0;
        default:
          return 0xFFFFFFFFLL;
      }
    }
    if ( (unsigned int)a1 <= 0x91 )
    {
      if ( (_DWORD)a1 )
      {
        switch ( a1 )
        {
          case 1LL:
            *a2 = "DW_AT_sibling";
            return 0;
          case 2LL:
            *a2 = "DW_AT_location";
            return 0;
          case 3LL:
            *a2 = "DW_AT_name";
            return 0;
          case 9LL:
            *a2 = "DW_AT_ordering";
            return 0;
          case 10LL:
            *a2 = "DW_AT_subscr_data";
            return 0;
          case 11LL:
            *a2 = "DW_AT_byte_size";
            return 0;
          case 12LL:
            *a2 = "DW_AT_bit_offset";
            return 0;
          case 13LL:
            *a2 = "DW_AT_bit_size";
            return 0;
          case 15LL:
            *a2 = "DW_AT_element_list";
            return 0;
          case 16LL:
            *a2 = "DW_AT_stmt_list";
            return 0;
          case 17LL:
            *a2 = "DW_AT_low_pc";
            return 0;
          case 18LL:
            *a2 = "DW_AT_high_pc";
            return 0;
          case 19LL:
            *a2 = "DW_AT_language";
            return 0;
          case 20LL:
            *a2 = "DW_AT_member";
            return 0;
          case 21LL:
            *a2 = "DW_AT_discr";
            return 0;
          case 22LL:
            *a2 = "DW_AT_discr_value";
            return 0;
          case 23LL:
            *a2 = "DW_AT_visibility";
            return 0;
          case 24LL:
            *a2 = "DW_AT_import";
            return 0;
          case 25LL:
            *a2 = "DW_AT_string_length";
            return 0;
          case 26LL:
            *a2 = "DW_AT_common_reference";
            return 0;
          case 27LL:
            *a2 = "DW_AT_comp_dir";
            return 0;
          case 28LL:
            *a2 = "DW_AT_const_value";
            return 0;
          case 29LL:
            *a2 = "DW_AT_containing_type";
            return 0;
          case 30LL:
            *a2 = "DW_AT_default_value";
            return 0;
          case 32LL:
            *a2 = "DW_AT_inline";
            return 0;
          case 33LL:
            *a2 = "DW_AT_is_optional";
            return 0;
          case 34LL:
            *a2 = "DW_AT_lower_bound";
            return 0;
          case 37LL:
            *a2 = "DW_AT_producer";
            return 0;
          case 39LL:
            *a2 = "DW_AT_prototyped";
            return 0;
          case 42LL:
            *a2 = "DW_AT_return_addr";
            return 0;
          case 44LL:
            *a2 = "DW_AT_start_scope";
            return 0;
          case 46LL:
            *a2 = "DW_AT_bit_stride";
            return 0;
          case 47LL:
            *a2 = "DW_AT_upper_bound";
            return 0;
          case 49LL:
            *a2 = "DW_AT_abstract_origin";
            return 0;
          case 50LL:
            *a2 = "DW_AT_accessibility";
            return 0;
          case 51LL:
            *a2 = "DW_AT_address_class";
            return 0;
          case 52LL:
            *a2 = "DW_AT_artificial";
            return 0;
          case 53LL:
            *a2 = "DW_AT_base_types";
            return 0;
          case 54LL:
            *a2 = "DW_AT_calling_convention";
            return 0;
          case 55LL:
            *a2 = "DW_AT_count";
            return 0;
          case 56LL:
            *a2 = "DW_AT_data_member_location";
            return 0;
          case 57LL:
            *a2 = "DW_AT_decl_column";
            return 0;
          case 58LL:
            *a2 = "DW_AT_decl_file";
            return 0;
          case 59LL:
            *a2 = "DW_AT_decl_line";
            return 0;
          case 60LL:
            *a2 = "DW_AT_declaration";
            return 0;
          case 61LL:
            *a2 = "DW_AT_discr_list";
            return 0;
          case 62LL:
            *a2 = "DW_AT_encoding";
            return 0;
          case 63LL:
            *a2 = "DW_AT_external";
            return 0;
          case 64LL:
            *a2 = "DW_AT_frame_base";
            return 0;
          case 65LL:
            *a2 = "DW_AT_friend";
            return 0;
          case 66LL:
            *a2 = "DW_AT_identifier_case";
            return 0;
          case 67LL:
            *a2 = "DW_AT_macro_info";
            return 0;
          case 68LL:
            *a2 = "DW_AT_namelist_item";
            return 0;
          case 69LL:
            *a2 = "DW_AT_priority";
            return 0;
          case 70LL:
            *a2 = "DW_AT_segment";
            return 0;
          case 71LL:
            *a2 = "DW_AT_specification";
            return 0;
          case 72LL:
            *a2 = "DW_AT_static_link";
            return 0;
          case 73LL:
            *a2 = "DW_AT_type";
            return 0;
          case 74LL:
            *a2 = "DW_AT_use_location";
            return 0;
          case 75LL:
            *a2 = "DW_AT_variable_parameter";
            return 0;
          case 76LL:
            *a2 = "DW_AT_virtuality";
            return 0;
          case 77LL:
            *a2 = "DW_AT_vtable_elem_location";
            return 0;
          case 78LL:
            *a2 = "DW_AT_allocated";
            return 0;
          case 79LL:
            *a2 = "DW_AT_associated";
            return 0;
          case 80LL:
            *a2 = "DW_AT_data_location";
            return 0;
          case 81LL:
            *a2 = "DW_AT_byte_stride";
            return 0;
          case 82LL:
            *a2 = "DW_AT_entry_pc";
            return 0;
          case 83LL:
            *a2 = "DW_AT_use_UTF8";
            return 0;
          case 84LL:
            *a2 = "DW_AT_extension";
            return 0;
          case 85LL:
            *a2 = "DW_AT_ranges";
            return 0;
          case 86LL:
            *a2 = "DW_AT_trampoline";
            return 0;
          case 87LL:
            *a2 = "DW_AT_call_column";
            return 0;
          case 88LL:
            *a2 = "DW_AT_call_file";
            return 0;
          case 89LL:
            *a2 = "DW_AT_call_line";
            return 0;
          case 90LL:
            *a2 = "DW_AT_description";
            return 0;
          case 91LL:
            *a2 = "DW_AT_binary_scale";
            return 0;
          case 92LL:
            *a2 = "DW_AT_decimal_scale";
            return 0;
          case 93LL:
            *a2 = "DW_AT_small";
            return 0;
          case 94LL:
            *a2 = "DW_AT_decimal_sign";
            return 0;
          case 95LL:
            *a2 = "DW_AT_digit_count";
            return 0;
          case 96LL:
            *a2 = "DW_AT_picture_string";
            return 0;
          case 97LL:
            *a2 = "DW_AT_mutable";
            return 0;
          case 98LL:
            *a2 = "DW_AT_threads_scaled";
            return 0;
          case 99LL:
            *a2 = "DW_AT_explicit";
            return 0;
          case 100LL:
            *a2 = "DW_AT_object_pointer";
            return 0;
          case 101LL:
            *a2 = "DW_AT_endianity";
            return 0;
          case 102LL:
            *a2 = "DW_AT_elemental";
            return 0;
          case 103LL:
            *a2 = "DW_AT_pure";
            return 0;
          case 104LL:
            *a2 = "DW_AT_recursive";
            return 0;
          case 105LL:
            *a2 = "DW_AT_signature";
            return 0;
          case 106LL:
            *a2 = "DW_AT_main_subprogram";
            return 0;
          case 107LL:
            *a2 = "DW_AT_data_bit_offset";
            return 0;
          case 108LL:
            *a2 = "DW_AT_const_expr";
            return 0;
          case 109LL:
            *a2 = "DW_AT_enum_class";
            return 0;
          case 110LL:
            *a2 = "DW_AT_linkage_name";
            return 0;
          case 111LL:
            *a2 = "DW_AT_string_length_bit_size";
            return 0;
          case 112LL:
            *a2 = "DW_AT_string_length_byte_size";
            return 0;
          case 113LL:
            *a2 = "DW_AT_rank";
            return 0;
          case 114LL:
            *a2 = "DW_AT_str_offsets_base";
            return 0;
          case 115LL:
            *a2 = "DW_AT_addr_base";
            return 0;
          case 116LL:
            *a2 = "DW_AT_rnglists_base";
            return 0;
          case 117LL:
            *a2 = "DW_AT_dwo_id";
            return 0;
          case 118LL:
            *a2 = "DW_AT_dwo_name";
            return 0;
          case 119LL:
            *a2 = "DW_AT_reference";
            return 0;
          case 120LL:
            *a2 = "DW_AT_rvalue_reference";
            return 0;
          case 121LL:
            *a2 = "DW_AT_macros";
            return 0;
          case 122LL:
            *a2 = "DW_AT_call_all_calls";
            return 0;
          case 123LL:
            *a2 = "DW_AT_call_all_source_calls";
            return 0;
          case 124LL:
            *a2 = "DW_AT_call_all_tail_calls";
            return 0;
          case 125LL:
            *a2 = "DW_AT_call_return_pc";
            return 0;
          case 126LL:
            *a2 = "DW_AT_call_value";
            return 0;
          case 127LL:
            *a2 = "DW_AT_call_origin";
            return 0;
          case 128LL:
            *a2 = "DW_AT_call_parameter";
            return 0;
          case 129LL:
            *a2 = "DW_AT_call_pc";
            return 0;
          case 130LL:
            *a2 = "DW_AT_call_tail_call";
            return 0;
          case 131LL:
            *a2 = "DW_AT_call_target";
            return 0;
          case 132LL:
            *a2 = "DW_AT_call_target_clobbered";
            return 0;
          case 133LL:
            *a2 = "DW_AT_call_data_location";
            return 0;
          case 134LL:
            *a2 = "DW_AT_call_data_value";
            return 0;
          case 135LL:
            *a2 = "DW_AT_noreturn";
            return 0;
          case 136LL:
            *a2 = "DW_AT_alignment";
            return 0;
          case 137LL:
            *a2 = "DW_AT_export_symbols";
            return 0;
          case 138LL:
            *a2 = "DW_AT_deleted";
            return 0;
          case 139LL:
            *a2 = "DW_AT_defaulted";
            return 0;
          case 140LL:
            *a2 = "DW_AT_loclists_base";
            return 0;
          case 144LL:
            *a2 = "DW_AT_language_name";
            return 0;
          case 145LL:
            *a2 = "DW_AT_language_version";
            return 0;
          default:
            return 0xFFFFFFFFLL;
        }
      }
      return 0xFFFFFFFFLL;
    }
    switch ( (_DWORD)a1 )
    {
      case 0x807:
        *a2 = "DW_AT_ghs_using_namespace";
        return 0;
      case 0x808:
        *a2 = "DW_AT_ghs_using_declaration";
        return 0;
      case 0x806:
        *a2 = "DW_AT_ghs_namespace_alias";
        return 0;
    }
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)a1 > 0x3B31 )
  {
    if ( (unsigned int)a1 > 0x3E0C )
    {
      switch ( (int)a1 )
      {
        case 0x3FE1:
          *a2 = "DW_AT_APPLE_optimized";
          return 0;
        case 0x3FE2:
          *a2 = "DW_AT_APPLE_flags";
          return 0;
        case 0x3FE3:
          *a2 = "DW_AT_APPLE_isa";
          return 0;
        case 0x3FE4:
          *a2 = "DW_AT_APPLE_block";
          return 0;
        case 0x3FE5:
          *a2 = "DW_AT_APPLE_major_runtime_vers";
          return 0;
        case 0x3FE6:
          *a2 = "DW_AT_APPLE_runtime_class";
          return 0;
        case 0x3FE7:
          *a2 = "DW_AT_APPLE_omit_frame_ptr";
          return 0;
        case 0x3FE8:
          *a2 = "DW_AT_APPLE_property_name";
          return 0;
        case 0x3FE9:
          *a2 = "DW_AT_APPLE_property_getter";
          return 0;
        case 0x3FEA:
          *a2 = "DW_AT_APPLE_property_setter";
          return 0;
        case 0x3FEB:
          *a2 = "DW_AT_APPLE_property_attribute";
          return 0;
        case 0x3FEC:
          *a2 = "DW_AT_APPLE_objc_complete_type";
          return 0;
        case 0x3FED:
          *a2 = "DW_AT_APPLE_property";
          return 0;
        case 0x3FEE:
          *a2 = "DW_AT_APPLE_objc_direct";
          return 0;
        case 0x3FEF:
          *a2 = "DW_AT_APPLE_sdk";
          return 0;
        case 0x3FF0:
          *a2 = "DW_AT_APPLE_origin";
          return 0;
        case 0x3FFF:
          *a2 = "DW_AT_hi_user";
          return 0;
        default:
          return 0xFFFFFFFFLL;
      }
    }
    if ( (unsigned int)a1 > 0x3DFF )
    {
      switch ( (int)a1 )
      {
        case 15872:
          *a2 = "DW_AT_LLVM_include_path";
          return 0;
        case 15873:
          *a2 = "DW_AT_LLVM_config_macros";
          return 0;
        case 15874:
          *a2 = "DW_AT_LLVM_sysroot";
          return 0;
        case 15875:
          *a2 = "DW_AT_LLVM_tag_offset";
          return 0;
        case 15879:
          *a2 = "DW_AT_LLVM_apinotes";
          return 0;
        case 15880:
          *a2 = "DW_AT_LLVM_active_lane";
          return 0;
        case 15881:
          *a2 = "DW_AT_LLVM_augmentation";
          return 0;
        case 15882:
          *a2 = "DW_AT_LLVM_lanes";
          return 0;
        case 15883:
          *a2 = "DW_AT_LLVM_lane_pc";
          return 0;
        case 15884:
          *a2 = "DW_AT_LLVM_vector_size";
          return 0;
        default:
          return 0xFFFFFFFFLL;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)a1 > 0x3B10 )
  {
    switch ( (int)a1 )
    {
      case 15121:
        *a2 = "DW_AT_BORLAND_property_read";
        return 0;
      case 15122:
        *a2 = "DW_AT_BORLAND_property_write";
        return 0;
      case 15123:
        *a2 = "DW_AT_BORLAND_property_implements";
        return 0;
      case 15124:
        *a2 = "DW_AT_BORLAND_property_index";
        return 0;
      case 15125:
        *a2 = "DW_AT_BORLAND_property_default";
        return 0;
      case 15136:
        *a2 = "DW_AT_BORLAND_Delphi_unit";
        return 0;
      case 15137:
        *a2 = "DW_AT_BORLAND_Delphi_class";
        return 0;
      case 15138:
        *a2 = "DW_AT_BORLAND_Delphi_record";
        return 0;
      case 15139:
        *a2 = "DW_AT_BORLAND_Delphi_metaclass";
        return 0;
      case 15140:
        *a2 = "DW_AT_BORLAND_Delphi_constructor";
        return 0;
      case 15141:
        *a2 = "DW_AT_BORLAND_Delphi_destructor";
        return 0;
      case 15142:
        *a2 = "DW_AT_BORLAND_Delphi_anonymous_method";
        return 0;
      case 15143:
        *a2 = "DW_AT_BORLAND_Delphi_interface";
        return 0;
      case 15144:
        *a2 = "DW_AT_BORLAND_Delphi_ABI";
        return 0;
      case 15152:
        *a2 = "DW_AT_BORLAND_Delphi_frameptr";
        return 0;
      case 15153:
        *a2 = "DW_AT_BORLAND_closure";
        return 0;
      default:
        return 0xFFFFFFFFLL;
    }
  }
  if ( (_DWORD)a1 == 14654 )
  {
    *a2 = "DW_AT_IBM_wsa_addr";
    return 0;
  }
  if ( (unsigned int)a1 <= 0x393E )
  {
    if ( (unsigned int)a1 > 0x2904 )
    {
      if ( (_DWORD)a1 == 12816 )
      {
        *a2 = "DW_AT_upc_threads_scaled";
        return 0;
      }
    }
    else if ( (unsigned int)a1 > 0x28FF )
    {
      switch ( (int)a1 )
      {
        case 10497:
          *a2 = "DW_AT_go_key";
          break;
        case 10498:
          *a2 = "DW_AT_go_elem";
          break;
        case 10499:
          *a2 = "DW_AT_go_embedded_field";
          break;
        case 10500:
          *a2 = "DW_AT_go_runtime_type";
          break;
        default:
          *a2 = "DW_AT_go_kind";
          break;
      }
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)a1 == 14848 )
  {
    *a2 = "DW_AT_PGI_lbase";
    return 0;
  }
  if ( (unsigned int)a1 > 0x3A00 )
  {
    if ( (_DWORD)a1 == 14849 )
    {
      *a2 = "DW_AT_PGI_soffset";
      return 0;
    }
    if ( (_DWORD)a1 == 14850 )
    {
      *a2 = "DW_AT_PGI_lstride";
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)a1 == 14655 )
  {
    *a2 = "DW_AT_IBM_home_location";
    return 0;
  }
  if ( (_DWORD)a1 != 14656 )
    return 0xFFFFFFFFLL;
  *a2 = "DW_AT_IBM_alt_srcview";
  return 0;
}

