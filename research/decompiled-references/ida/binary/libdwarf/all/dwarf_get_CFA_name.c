__int64 __fastcall dwarf_get_CFA_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
      *a2 = "DW_CFA_nop";
      goto LABEL_4;
    case 1LL:
      *a2 = "DW_CFA_set_loc";
      goto LABEL_4;
    case 2LL:
      *a2 = "DW_CFA_advance_loc1";
      goto LABEL_4;
    case 3LL:
      *a2 = "DW_CFA_advance_loc2";
      goto LABEL_4;
    case 4LL:
      *a2 = "DW_CFA_advance_loc4";
      goto LABEL_4;
    case 5LL:
      *a2 = "DW_CFA_offset_extended";
      goto LABEL_4;
    case 6LL:
      *a2 = "DW_CFA_restore_extended";
      goto LABEL_4;
    case 7LL:
      *a2 = "DW_CFA_undefined";
      goto LABEL_4;
    case 8LL:
      *a2 = "DW_CFA_same_value";
      goto LABEL_4;
    case 9LL:
      *a2 = "DW_CFA_register";
      goto LABEL_4;
    case 10LL:
      *a2 = "DW_CFA_remember_state";
      goto LABEL_4;
    case 11LL:
      *a2 = "DW_CFA_restore_state";
      goto LABEL_4;
    case 12LL:
      *a2 = "DW_CFA_def_cfa";
      goto LABEL_4;
    case 13LL:
      *a2 = "DW_CFA_def_cfa_register";
      goto LABEL_4;
    case 14LL:
      *a2 = "DW_CFA_def_cfa_offset";
      goto LABEL_4;
    case 15LL:
      *a2 = "DW_CFA_def_cfa_expression";
      goto LABEL_4;
    case 16LL:
      *a2 = "DW_CFA_expression";
      goto LABEL_4;
    case 17LL:
      *a2 = "DW_CFA_offset_extended_sf";
      goto LABEL_4;
    case 18LL:
      *a2 = "DW_CFA_def_cfa_sf";
      goto LABEL_4;
    case 19LL:
      *a2 = "DW_CFA_def_cfa_offset_sf";
      goto LABEL_4;
    case 20LL:
      *a2 = "DW_CFA_val_offset";
      goto LABEL_4;
    case 21LL:
      *a2 = "DW_CFA_val_offset_sf";
      goto LABEL_4;
    case 22LL:
      *a2 = "DW_CFA_val_expression";
      goto LABEL_4;
    case 28LL:
      *a2 = "DW_CFA_TI_soffset_extended";
      goto LABEL_4;
    case 29LL:
      *a2 = "DW_CFA_MIPS_advance_loc8";
      goto LABEL_4;
    case 45LL:
      *a2 = "DW_CFA_GNU_window_save";
      goto LABEL_4;
    case 46LL:
      *a2 = "DW_CFA_GNU_args_size";
      goto LABEL_4;
    case 47LL:
      *a2 = "DW_CFA_GNU_negative_offset_extended";
      goto LABEL_4;
    case 48LL:
      *a2 = "DW_CFA_LLVM_def_aspace_cfa";
      goto LABEL_4;
    case 49LL:
      *a2 = "DW_CFA_LLVM_def_aspace_cfa_sf";
      goto LABEL_4;
    case 52LL:
      *a2 = "DW_CFA_METAWARE_info";
      goto LABEL_4;
    case 63LL:
      *a2 = "DW_CFA_hi_user";
      goto LABEL_4;
    case 64LL:
      *a2 = "DW_CFA_advance_loc";
      goto LABEL_4;
    case 128LL:
      *a2 = "DW_CFA_offset";
      goto LABEL_4;
    case 192LL:
      *a2 = "DW_CFA_restore";
LABEL_4:
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

