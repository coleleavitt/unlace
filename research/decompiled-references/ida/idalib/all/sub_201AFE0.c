const char *__fastcall sub_201AFE0(unsigned int a1)
{
  if ( a1 == 64 )
  {
    j__strlen("DW_TAG_shared_type");
    return "DW_TAG_shared_type";
  }
  if ( a1 <= 0x40 )
  {
    if ( a1 == 34 )
    {
      j__strlen("DW_TAG_with_stmt");
      return "DW_TAG_with_stmt";
    }
    if ( a1 <= 0x22 )
    {
      if ( a1 == 18 )
      {
        j__strlen("DW_TAG_string_type");
        return "DW_TAG_string_type";
      }
      if ( a1 <= 0x12 )
      {
        if ( a1 == 8 )
        {
          j__strlen("DW_TAG_imported_declaration");
          return "DW_TAG_imported_declaration";
        }
        if ( a1 > 8 )
        {
          if ( a1 == 13 )
          {
            j__strlen("DW_TAG_member");
            return "DW_TAG_member";
          }
          if ( a1 <= 0xD )
          {
            if ( a1 == 10 )
            {
              j__strlen("DW_TAG_label");
              return "DW_TAG_label";
            }
            if ( a1 == 11 )
            {
              j__strlen("DW_TAG_lexical_block");
              return "DW_TAG_lexical_block";
            }
          }
          else
          {
            if ( a1 == 16 )
            {
              j__strlen("DW_TAG_reference_type");
              return "DW_TAG_reference_type";
            }
            if ( a1 > 0x10 )
            {
              j__strlen("DW_TAG_compile_unit");
              return "DW_TAG_compile_unit";
            }
            if ( a1 == 15 )
            {
              j__strlen("DW_TAG_pointer_type");
              return "DW_TAG_pointer_type";
            }
          }
          return nullptr;
        }
        if ( a1 == 2 )
        {
          j__strlen("DW_TAG_class_type");
          return "DW_TAG_class_type";
        }
        if ( a1 > 2 )
        {
          if ( a1 == 4 )
          {
            j__strlen("DW_TAG_enumeration_type");
            return "DW_TAG_enumeration_type";
          }
          if ( a1 < 4 )
          {
            j__strlen("DW_TAG_entry_point");
            return "DW_TAG_entry_point";
          }
          if ( a1 == 5 )
          {
            j__strlen("DW_TAG_formal_parameter");
            return "DW_TAG_formal_parameter";
          }
          return nullptr;
        }
        if ( a1 )
        {
          j__strlen("DW_TAG_array_type");
          return "DW_TAG_array_type";
        }
        else
        {
          j__strlen("DW_TAG_null");
          return "DW_TAG_null";
        }
      }
      else
      {
        if ( a1 == 26 )
        {
          j__strlen("DW_TAG_common_block");
          return "DW_TAG_common_block";
        }
        if ( a1 <= 0x1A )
        {
          if ( a1 == 22 )
          {
            j__strlen("DW_TAG_typedef");
            return "DW_TAG_typedef";
          }
          if ( a1 <= 0x16 )
          {
            if ( a1 == 19 )
            {
              j__strlen("DW_TAG_structure_type");
              return "DW_TAG_structure_type";
            }
            if ( a1 == 21 )
            {
              j__strlen("DW_TAG_subroutine_type");
              return "DW_TAG_subroutine_type";
            }
            return nullptr;
          }
          if ( a1 == 24 )
          {
            j__strlen("DW_TAG_unspecified_parameters");
            return "DW_TAG_unspecified_parameters";
          }
          else if ( a1 > 0x18 )
          {
            j__strlen("DW_TAG_variant");
            return "DW_TAG_variant";
          }
          else
          {
            j__strlen("DW_TAG_union_type");
            return "DW_TAG_union_type";
          }
        }
        else if ( a1 == 30 )
        {
          j__strlen("DW_TAG_module");
          return "DW_TAG_module";
        }
        else if ( a1 > 0x1E )
        {
          if ( a1 == 32 )
          {
            j__strlen("DW_TAG_set_type");
            return "DW_TAG_set_type";
          }
          else if ( a1 > 0x20 )
          {
            j__strlen("DW_TAG_subrange_type");
            return "DW_TAG_subrange_type";
          }
          else
          {
            j__strlen("DW_TAG_ptr_to_member_type");
            return "DW_TAG_ptr_to_member_type";
          }
        }
        else if ( a1 == 28 )
        {
          j__strlen("DW_TAG_inheritance");
          return "DW_TAG_inheritance";
        }
        else if ( a1 > 0x1C )
        {
          j__strlen("DW_TAG_inlined_subroutine");
          return "DW_TAG_inlined_subroutine";
        }
        else
        {
          j__strlen("DW_TAG_common_inclusion");
          return "DW_TAG_common_inclusion";
        }
      }
    }
    else
    {
      if ( a1 == 48 )
      {
        j__strlen("DW_TAG_template_value_parameter");
        return "DW_TAG_template_value_parameter";
      }
      if ( a1 <= 0x30 )
      {
        if ( a1 == 41 )
        {
          j__strlen("DW_TAG_file_type");
          return "DW_TAG_file_type";
        }
        else if ( a1 > 0x29 )
        {
          if ( a1 == 44 )
          {
            j__strlen("DW_TAG_namelist_item");
            return "DW_TAG_namelist_item";
          }
          else if ( a1 <= 0x2C )
          {
            if ( a1 == 42 )
            {
              j__strlen("DW_TAG_friend");
              return "DW_TAG_friend";
            }
            else
            {
              j__strlen("DW_TAG_namelist");
              return "DW_TAG_namelist";
            }
          }
          else if ( a1 == 46 )
          {
            j__strlen("DW_TAG_subprogram");
            return "DW_TAG_subprogram";
          }
          else if ( a1 > 0x2E )
          {
            j__strlen("DW_TAG_template_type_parameter");
            return "DW_TAG_template_type_parameter";
          }
          else
          {
            j__strlen("DW_TAG_packed_type");
            return "DW_TAG_packed_type";
          }
        }
        else if ( a1 == 37 )
        {
          j__strlen("DW_TAG_catch_block");
          return "DW_TAG_catch_block";
        }
        else if ( a1 <= 0x25 )
        {
          if ( a1 == 35 )
          {
            j__strlen("DW_TAG_access_declaration");
            return "DW_TAG_access_declaration";
          }
          else
          {
            j__strlen("DW_TAG_base_type");
            return "DW_TAG_base_type";
          }
        }
        else if ( a1 == 39 )
        {
          j__strlen("DW_TAG_constant");
          return "DW_TAG_constant";
        }
        else if ( a1 > 0x27 )
        {
          j__strlen("DW_TAG_enumerator");
          return "DW_TAG_enumerator";
        }
        else
        {
          j__strlen("DW_TAG_const_type");
          return "DW_TAG_const_type";
        }
      }
      else
      {
        if ( a1 == 55 )
        {
          j__strlen("DW_TAG_restrict_type");
          return "DW_TAG_restrict_type";
        }
        if ( a1 <= 0x37 )
        {
          if ( a1 == 51 )
          {
            j__strlen("DW_TAG_variant_part");
            return "DW_TAG_variant_part";
          }
          else if ( a1 <= 0x33 )
          {
            if ( a1 == 49 )
            {
              j__strlen("DW_TAG_thrown_type");
              return "DW_TAG_thrown_type";
            }
            else
            {
              j__strlen("DW_TAG_try_block");
              return "DW_TAG_try_block";
            }
          }
          else if ( a1 == 53 )
          {
            j__strlen("DW_TAG_volatile_type");
            return "DW_TAG_volatile_type";
          }
          else if ( a1 > 0x35 )
          {
            j__strlen("DW_TAG_dwarf_procedure");
            return "DW_TAG_dwarf_procedure";
          }
          else
          {
            j__strlen("DW_TAG_variable");
            return "DW_TAG_variable";
          }
        }
        else
        {
          if ( a1 == 59 )
          {
            j__strlen("DW_TAG_unspecified_type");
            return "DW_TAG_unspecified_type";
          }
          if ( a1 > 0x3B )
          {
            if ( a1 == 61 )
            {
              j__strlen("DW_TAG_imported_unit");
              return "DW_TAG_imported_unit";
            }
            if ( a1 < 0x3D )
            {
              j__strlen("DW_TAG_partial_unit");
              return "DW_TAG_partial_unit";
            }
            if ( a1 == 63 )
            {
              j__strlen("DW_TAG_condition");
              return "DW_TAG_condition";
            }
            return nullptr;
          }
          if ( a1 == 57 )
          {
            j__strlen("DW_TAG_namespace");
            return "DW_TAG_namespace";
          }
          else if ( a1 > 0x39 )
          {
            j__strlen("DW_TAG_imported_module");
            return "DW_TAG_imported_module";
          }
          else
          {
            j__strlen("DW_TAG_interface_type");
            return "DW_TAG_interface_type";
          }
        }
      }
    }
  }
  else
  {
    if ( a1 == 16902 )
    {
      j__strlen("DW_TAG_SUN_codeflags");
      return "DW_TAG_SUN_codeflags";
    }
    if ( a1 > 0x4206 )
    {
      if ( a1 == 24576 )
      {
        j__strlen("DW_TAG_LLVM_annotation");
        return "DW_TAG_LLVM_annotation";
      }
      if ( a1 > 0x6000 )
      {
        if ( a1 == 34663 )
        {
          j__strlen("DW_TAG_UPC_relaxed");
          return "DW_TAG_UPC_relaxed";
        }
        if ( a1 <= 0x8767 )
        {
          if ( a1 == 32774 )
          {
            j__strlen("DW_TAG_GHS_using_declaration");
            return "DW_TAG_GHS_using_declaration";
          }
          if ( a1 <= 0x8006 )
          {
            if ( a1 == 32772 )
            {
              j__strlen("DW_TAG_GHS_namespace");
              return "DW_TAG_GHS_namespace";
            }
            if ( a1 == 32773 )
            {
              j__strlen("DW_TAG_GHS_using_namespace");
              return "DW_TAG_GHS_using_namespace";
            }
          }
          else
          {
            if ( a1 == 34661 )
            {
              j__strlen("DW_TAG_UPC_shared_type");
              return "DW_TAG_UPC_shared_type";
            }
            if ( a1 > 0x8765 )
            {
              j__strlen("DW_TAG_UPC_strict_type");
              return "DW_TAG_UPC_strict_type";
            }
            if ( a1 == 32775 )
            {
              j__strlen("DW_TAG_GHS_template_templ_param");
              return "DW_TAG_GHS_template_templ_param";
            }
          }
        }
        else
        {
          if ( a1 == 45057 )
          {
            j__strlen("DW_TAG_BORLAND_Delphi_string");
            return "DW_TAG_BORLAND_Delphi_string";
          }
          if ( a1 > 0xB001 )
          {
            if ( a1 == 45059 )
            {
              j__strlen("DW_TAG_BORLAND_Delphi_set");
              return "DW_TAG_BORLAND_Delphi_set";
            }
            if ( a1 < 0xB003 )
            {
              j__strlen("DW_TAG_BORLAND_Delphi_dynamic_array");
              return "DW_TAG_BORLAND_Delphi_dynamic_array";
            }
            if ( a1 == 45060 )
            {
              j__strlen("DW_TAG_BORLAND_Delphi_variant");
              return "DW_TAG_BORLAND_Delphi_variant";
            }
          }
          else
          {
            switch ( a1 )
            {
              case 0xA020u:
                j__strlen("DW_TAG_PGI_interface_block");
                return "DW_TAG_PGI_interface_block";
              case 0xB000u:
                j__strlen("DW_TAG_BORLAND_property");
                return "DW_TAG_BORLAND_property";
              case 0xA000u:
                j__strlen("DW_TAG_PGI_kanji_type");
                return "DW_TAG_PGI_kanji_type";
            }
          }
        }
        return nullptr;
      }
      if ( a1 == 16909 )
      {
        j__strlen("DW_TAG_SUN_fortran_vax_structure");
        return "DW_TAG_SUN_fortran_vax_structure";
      }
      if ( a1 <= 0x420D )
      {
        if ( a1 == 16905 )
        {
          j__strlen("DW_TAG_SUN_rtti_descriptor");
          return "DW_TAG_SUN_rtti_descriptor";
        }
        else if ( a1 <= 0x4209 )
        {
          if ( a1 == 16903 )
          {
            j__strlen("DW_TAG_SUN_memop_info");
            return "DW_TAG_SUN_memop_info";
          }
          else
          {
            j__strlen("DW_TAG_SUN_omp_child_func");
            return "DW_TAG_SUN_omp_child_func";
          }
        }
        else if ( a1 == 16907 )
        {
          j__strlen("DW_TAG_SUN_dtor");
          return "DW_TAG_SUN_dtor";
        }
        else if ( a1 > 0x420B )
        {
          j__strlen("DW_TAG_SUN_f90_interface");
          return "DW_TAG_SUN_f90_interface";
        }
        else
        {
          j__strlen("DW_TAG_SUN_dtor_info");
          return "DW_TAG_SUN_dtor_info";
        }
      }
      if ( a1 == 20737 )
      {
        j__strlen("DW_TAG_ALTIUM_circ_type");
        return "DW_TAG_ALTIUM_circ_type";
      }
      if ( a1 <= 0x5101 )
      {
        if ( a1 == 17151 )
        {
          j__strlen("DW_TAG_SUN_hi");
          return "DW_TAG_SUN_hi";
        }
        if ( a1 == 17152 )
        {
          j__strlen("DW_TAG_LLVM_ptrauth_type");
          return "DW_TAG_LLVM_ptrauth_type";
        }
      }
      else
      {
        if ( a1 == 20739 )
        {
          j__strlen("DW_TAG_ALTIUM_rev_carry_type");
          return "DW_TAG_ALTIUM_rev_carry_type";
        }
        if ( a1 < 0x5103 )
        {
          j__strlen("DW_TAG_ALTIUM_mwa_circ_type");
          return "DW_TAG_ALTIUM_mwa_circ_type";
        }
        if ( a1 == 20753 )
        {
          j__strlen("DW_TAG_ALTIUM_rom");
          return "DW_TAG_ALTIUM_rom";
        }
      }
      return nullptr;
    }
    if ( a1 == 16642 )
    {
      j__strlen("DW_TAG_function_template");
      return "DW_TAG_function_template";
    }
    if ( a1 <= 0x4102 )
    {
      if ( a1 == 71 )
      {
        j__strlen("DW_TAG_atomic_type");
        return "DW_TAG_atomic_type";
      }
      if ( a1 > 0x47 )
      {
        if ( a1 == 74 )
        {
          j__strlen("DW_TAG_skeleton_unit");
          return "DW_TAG_skeleton_unit";
        }
        if ( a1 > 0x4A )
        {
          switch ( a1 )
          {
            case 0x4081u:
              j__strlen("DW_TAG_MIPS_loop");
              return "DW_TAG_MIPS_loop";
            case 0x4101u:
              j__strlen("DW_TAG_format_label");
              return "DW_TAG_format_label";
            case 0x4Bu:
              j__strlen("DW_TAG_immutable_type");
              return "DW_TAG_immutable_type";
          }
          return nullptr;
        }
        if ( a1 == 72 )
        {
          j__strlen("DW_TAG_call_site");
          return "DW_TAG_call_site";
        }
        else
        {
          j__strlen("DW_TAG_call_site_parameter");
          return "DW_TAG_call_site_parameter";
        }
      }
      else if ( a1 == 67 )
      {
        j__strlen("DW_TAG_template_alias");
        return "DW_TAG_template_alias";
      }
      else if ( a1 <= 0x43 )
      {
        if ( a1 == 65 )
        {
          j__strlen("DW_TAG_type_unit");
          return "DW_TAG_type_unit";
        }
        else
        {
          j__strlen("DW_TAG_rvalue_reference_type");
          return "DW_TAG_rvalue_reference_type";
        }
      }
      else if ( a1 == 69 )
      {
        j__strlen("DW_TAG_generic_subrange");
        return "DW_TAG_generic_subrange";
      }
      else if ( a1 > 0x45 )
      {
        j__strlen("DW_TAG_dynamic_type");
        return "DW_TAG_dynamic_type";
      }
      else
      {
        j__strlen("DW_TAG_coarray_type");
        return "DW_TAG_coarray_type";
      }
    }
    else
    {
      if ( a1 == 16649 )
      {
        j__strlen("DW_TAG_GNU_call_site");
        return "DW_TAG_GNU_call_site";
      }
      if ( a1 <= 0x4109 )
      {
        if ( a1 == 16645 )
        {
          j__strlen("DW_TAG_GNU_EINCL");
          return "DW_TAG_GNU_EINCL";
        }
        else if ( a1 <= 0x4105 )
        {
          if ( a1 == 16643 )
          {
            j__strlen("DW_TAG_class_template");
            return "DW_TAG_class_template";
          }
          else
          {
            j__strlen("DW_TAG_GNU_BINCL");
            return "DW_TAG_GNU_BINCL";
          }
        }
        else if ( a1 == 16647 )
        {
          j__strlen("DW_TAG_GNU_template_parameter_pack");
          return "DW_TAG_GNU_template_parameter_pack";
        }
        else if ( a1 > 0x4107 )
        {
          j__strlen("DW_TAG_GNU_formal_parameter_pack");
          return "DW_TAG_GNU_formal_parameter_pack";
        }
        else
        {
          j__strlen("DW_TAG_GNU_template_template_param");
          return "DW_TAG_GNU_template_template_param";
        }
      }
      else
      {
        if ( a1 == 16898 )
        {
          j__strlen("DW_TAG_SUN_class_template");
          return "DW_TAG_SUN_class_template";
        }
        if ( a1 <= 0x4202 )
        {
          if ( a1 == 16896 )
          {
            j__strlen("DW_TAG_APPLE_property");
            return "DW_TAG_APPLE_property";
          }
          if ( a1 > 0x4200 )
          {
            j__strlen("DW_TAG_SUN_function_template");
            return "DW_TAG_SUN_function_template";
          }
          if ( a1 == 16650 )
          {
            j__strlen("DW_TAG_GNU_call_site_parameter");
            return "DW_TAG_GNU_call_site_parameter";
          }
          return nullptr;
        }
        if ( a1 == 16900 )
        {
          j__strlen("DW_TAG_SUN_union_template");
          return "DW_TAG_SUN_union_template";
        }
        else if ( a1 > 0x4204 )
        {
          j__strlen("DW_TAG_SUN_indirect_inheritance");
          return "DW_TAG_SUN_indirect_inheritance";
        }
        else
        {
          j__strlen("DW_TAG_SUN_struct_template");
          return "DW_TAG_SUN_struct_template";
        }
      }
    }
  }
}
