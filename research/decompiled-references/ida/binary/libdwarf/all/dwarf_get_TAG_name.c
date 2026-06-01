__int64 __fastcall dwarf_get_TAG_name(__int64 a1, _QWORD *a2)
{
  if ( (unsigned int)a1 <= 0x4B )
  {
    if ( (_DWORD)a1 )
    {
      switch ( a1 )
      {
        case 1LL:
          *a2 = "DW_TAG_array_type";
          return 0;
        case 2LL:
          *a2 = "DW_TAG_class_type";
          return 0;
        case 3LL:
          *a2 = "DW_TAG_entry_point";
          return 0;
        case 4LL:
          *a2 = "DW_TAG_enumeration_type";
          return 0;
        case 5LL:
          *a2 = "DW_TAG_formal_parameter";
          return 0;
        case 8LL:
          *a2 = "DW_TAG_imported_declaration";
          return 0;
        case 10LL:
          *a2 = "DW_TAG_label";
          return 0;
        case 11LL:
          *a2 = "DW_TAG_lexical_block";
          return 0;
        case 13LL:
          *a2 = "DW_TAG_member";
          return 0;
        case 15LL:
          *a2 = "DW_TAG_pointer_type";
          return 0;
        case 16LL:
          *a2 = "DW_TAG_reference_type";
          return 0;
        case 17LL:
          *a2 = "DW_TAG_compile_unit";
          return 0;
        case 18LL:
          *a2 = "DW_TAG_string_type";
          return 0;
        case 19LL:
          *a2 = "DW_TAG_structure_type";
          return 0;
        case 21LL:
          *a2 = "DW_TAG_subroutine_type";
          return 0;
        case 22LL:
          *a2 = "DW_TAG_typedef";
          return 0;
        case 23LL:
          *a2 = "DW_TAG_union_type";
          return 0;
        case 24LL:
          *a2 = "DW_TAG_unspecified_parameters";
          return 0;
        case 25LL:
          *a2 = "DW_TAG_variant";
          return 0;
        case 26LL:
          *a2 = "DW_TAG_common_block";
          return 0;
        case 27LL:
          *a2 = "DW_TAG_common_inclusion";
          return 0;
        case 28LL:
          *a2 = "DW_TAG_inheritance";
          return 0;
        case 29LL:
          *a2 = "DW_TAG_inlined_subroutine";
          return 0;
        case 30LL:
          *a2 = "DW_TAG_module";
          return 0;
        case 31LL:
          *a2 = "DW_TAG_ptr_to_member_type";
          return 0;
        case 32LL:
          *a2 = "DW_TAG_set_type";
          return 0;
        case 33LL:
          *a2 = "DW_TAG_subrange_type";
          return 0;
        case 34LL:
          *a2 = "DW_TAG_with_stmt";
          return 0;
        case 35LL:
          *a2 = "DW_TAG_access_declaration";
          return 0;
        case 36LL:
          *a2 = "DW_TAG_base_type";
          return 0;
        case 37LL:
          *a2 = "DW_TAG_catch_block";
          return 0;
        case 38LL:
          *a2 = "DW_TAG_const_type";
          return 0;
        case 39LL:
          *a2 = "DW_TAG_constant";
          return 0;
        case 40LL:
          *a2 = "DW_TAG_enumerator";
          return 0;
        case 41LL:
          *a2 = "DW_TAG_file_type";
          return 0;
        case 42LL:
          *a2 = "DW_TAG_friend";
          return 0;
        case 43LL:
          *a2 = "DW_TAG_namelist";
          return 0;
        case 44LL:
          *a2 = "DW_TAG_namelist_item";
          return 0;
        case 45LL:
          *a2 = "DW_TAG_packed_type";
          return 0;
        case 46LL:
          *a2 = "DW_TAG_subprogram";
          return 0;
        case 47LL:
          *a2 = "DW_TAG_template_type_parameter";
          return 0;
        case 48LL:
          *a2 = "DW_TAG_template_value_parameter";
          return 0;
        case 49LL:
          *a2 = "DW_TAG_thrown_type";
          return 0;
        case 50LL:
          *a2 = "DW_TAG_try_block";
          return 0;
        case 51LL:
          *a2 = "DW_TAG_variant_part";
          return 0;
        case 52LL:
          *a2 = "DW_TAG_variable";
          return 0;
        case 53LL:
          *a2 = "DW_TAG_volatile_type";
          return 0;
        case 54LL:
          *a2 = "DW_TAG_dwarf_procedure";
          return 0;
        case 55LL:
          *a2 = "DW_TAG_restrict_type";
          return 0;
        case 56LL:
          *a2 = "DW_TAG_interface_type";
          return 0;
        case 57LL:
          *a2 = "DW_TAG_namespace";
          return 0;
        case 58LL:
          *a2 = "DW_TAG_imported_module";
          return 0;
        case 59LL:
          *a2 = "DW_TAG_unspecified_type";
          return 0;
        case 60LL:
          *a2 = "DW_TAG_partial_unit";
          return 0;
        case 61LL:
          *a2 = "DW_TAG_imported_unit";
          return 0;
        case 62LL:
          *a2 = "DW_TAG_mutable_type";
          return 0;
        case 63LL:
          *a2 = "DW_TAG_condition";
          return 0;
        case 64LL:
          *a2 = "DW_TAG_shared_type";
          return 0;
        case 65LL:
          *a2 = "DW_TAG_type_unit";
          return 0;
        case 66LL:
          *a2 = "DW_TAG_rvalue_reference_type";
          return 0;
        case 67LL:
          *a2 = "DW_TAG_template_alias";
          return 0;
        case 68LL:
          *a2 = "DW_TAG_coarray_type";
          return 0;
        case 69LL:
          *a2 = "DW_TAG_generic_subrange";
          return 0;
        case 70LL:
          *a2 = "DW_TAG_dynamic_type";
          return 0;
        case 71LL:
          *a2 = "DW_TAG_atomic_type";
          return 0;
        case 72LL:
          *a2 = "DW_TAG_call_site";
          return 0;
        case 73LL:
          *a2 = "DW_TAG_call_site_parameter";
          return 0;
        case 74LL:
          *a2 = "DW_TAG_skeleton_unit";
          return 0;
        case 75LL:
          *a2 = "DW_TAG_immutable_type";
          return 0;
        default:
          return 0xFFFFFFFFLL;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)a1 <= 0x420D )
  {
    if ( (unsigned int)a1 > 0x4200 )
    {
      switch ( (int)a1 )
      {
        case 16898:
          *a2 = "DW_TAG_SUN_class_template";
          break;
        case 16899:
          *a2 = "DW_TAG_SUN_struct_template";
          break;
        case 16900:
          *a2 = "DW_TAG_SUN_union_template";
          break;
        case 16901:
          *a2 = "DW_TAG_SUN_indirect_inheritance";
          break;
        case 16902:
          *a2 = "DW_TAG_SUN_codeflags";
          break;
        case 16903:
          *a2 = "DW_TAG_SUN_memop_info";
          break;
        case 16904:
          *a2 = "DW_TAG_SUN_omp_child_func";
          break;
        case 16905:
          *a2 = "DW_TAG_SUN_rtti_descriptor";
          break;
        case 16906:
          *a2 = "DW_TAG_SUN_dtor_info";
          break;
        case 16907:
          *a2 = "DW_TAG_SUN_dtor";
          break;
        case 16908:
          *a2 = "DW_TAG_SUN_f90_interface";
          break;
        case 16909:
          *a2 = "DW_TAG_SUN_fortran_vax_structure";
          break;
        default:
          *a2 = "DW_TAG_SUN_function_template";
          break;
      }
      return 0;
    }
    if ( (unsigned int)a1 <= 0x4090 )
    {
      if ( (unsigned int)a1 > 0x407F )
      {
        switch ( (int)a1 )
        {
          case 16512:
            *a2 = "DW_TAG_TI_far_type";
            return 0;
          case 16513:
            *a2 = "DW_TAG_MIPS_loop";
            return 0;
          case 16514:
            *a2 = "DW_TAG_TI_assign_register";
            return 0;
          case 16515:
            *a2 = "DW_TAG_TI_ioport_type";
            return 0;
          case 16516:
            *a2 = "DW_TAG_TI_restrict_type";
            return 0;
          case 16517:
            *a2 = "DW_TAG_TI_onchip_type";
            return 0;
          case 16528:
            *a2 = "DW_TAG_HP_array_descriptor";
            return 0;
          default:
            return 0xFFFFFFFFLL;
        }
      }
      return 0xFFFFFFFFLL;
    }
    if ( (unsigned int)(a1 - 16641) <= 9 )
    {
      switch ( (int)a1 )
      {
        case 16642:
          *a2 = "DW_TAG_function_template";
          break;
        case 16643:
          *a2 = "DW_TAG_class_template";
          break;
        case 16644:
          *a2 = "DW_TAG_GNU_BINCL";
          break;
        case 16645:
          *a2 = "DW_TAG_GNU_EINCL";
          break;
        case 16646:
          *a2 = "DW_TAG_GNU_template_template_parameter";
          break;
        case 16647:
          *a2 = "DW_TAG_GNU_template_parameter_pack";
          break;
        case 16648:
          *a2 = "DW_TAG_GNU_formal_parameter_pack";
          break;
        case 16649:
          *a2 = "DW_TAG_GNU_call_site";
          break;
        case 16650:
          *a2 = "DW_TAG_GNU_call_site_parameter";
          break;
        default:
          *a2 = "DW_TAG_format_label";
          break;
      }
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)a1 == 34661 )
  {
    *a2 = "DW_TAG_upc_shared_type";
  }
  else if ( (unsigned int)a1 > 0x8765 )
  {
    if ( (unsigned int)a1 > 0xB004 )
    {
      if ( (_DWORD)a1 != 0xFFFF )
        return 0xFFFFFFFFLL;
      *a2 = "DW_TAG_hi_user";
    }
    else
    {
      if ( (unsigned int)a1 > 0xAFFF )
      {
        switch ( (int)a1 )
        {
          case 45057:
            *a2 = "DW_TAG_BORLAND_Delphi_string";
            break;
          case 45058:
            *a2 = "DW_TAG_BORLAND_Delphi_dynamic_array";
            break;
          case 45059:
            *a2 = "DW_TAG_BORLAND_Delphi_set";
            break;
          case 45060:
            *a2 = "DW_TAG_BORLAND_Delphi_variant";
            break;
          default:
            *a2 = "DW_TAG_BORLAND_property";
            break;
        }
        return 0;
      }
      if ( (_DWORD)a1 == 40960 )
      {
        *a2 = "DW_TAG_PGI_kanji_type";
      }
      else if ( (unsigned int)a1 > 0xA000 )
      {
        if ( (_DWORD)a1 != 40992 )
          return 0xFFFFFFFFLL;
        *a2 = "DW_TAG_PGI_interface_block";
      }
      else if ( (_DWORD)a1 == 34662 )
      {
        *a2 = "DW_TAG_upc_strict_type";
      }
      else
      {
        if ( (_DWORD)a1 != 34663 )
          return 0xFFFFFFFFLL;
        *a2 = "DW_TAG_upc_relaxed_type";
      }
    }
  }
  else if ( (_DWORD)a1 == 24576 )
  {
    *a2 = "DW_TAG_LLVM_annotation";
  }
  else if ( (unsigned int)a1 > 0x6000 )
  {
    if ( (_DWORD)a1 == 32774 )
    {
      *a2 = "DW_TAG_ghs_using_declaration";
    }
    else if ( (unsigned int)a1 > 0x8006 )
    {
      if ( (_DWORD)a1 != 32775 )
        return 0xFFFFFFFFLL;
      *a2 = "DW_TAG_ghs_template_templ_param";
    }
    else if ( (_DWORD)a1 == 32772 )
    {
      *a2 = "DW_TAG_ghs_namespace";
    }
    else
    {
      if ( (_DWORD)a1 != 32773 )
        return 0xFFFFFFFFLL;
      *a2 = "DW_TAG_ghs_using_namespace";
    }
  }
  else if ( (_DWORD)a1 == 20738 )
  {
    *a2 = "DW_TAG_ALTIUM_mwa_circ_type";
  }
  else if ( (unsigned int)a1 > 0x5102 )
  {
    if ( (_DWORD)a1 == 20739 )
    {
      *a2 = "DW_TAG_ALTIUM_rev_carry_type";
    }
    else
    {
      if ( (_DWORD)a1 != 20753 )
        return 0xFFFFFFFFLL;
      *a2 = "DW_TAG_ALTIUM_rom";
    }
  }
  else if ( (_DWORD)a1 == 17151 )
  {
    *a2 = "DW_TAG_SUN_hi";
  }
  else
  {
    if ( (_DWORD)a1 != 20737 )
      return 0xFFFFFFFFLL;
    *a2 = "DW_TAG_ALTIUM_circ_type";
  }
  return 0;
}

