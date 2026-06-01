__int64 __fastcall dwarf_get_ATCF_name(unsigned int a1, _QWORD *a2)
{
  if ( a1 > 0x48 )
  {
    if ( a1 == 255 )
    {
      *a2 = "DW_ATCF_hi_user";
      return 0;
    }
  }
  else if ( a1 > 0x3F )
  {
    switch ( a1 )
    {
      case 'A':
        *a2 = "DW_ATCF_SUN_mop_bitfield";
        break;
      case 'B':
        *a2 = "DW_ATCF_SUN_mop_spill";
        break;
      case 'C':
        *a2 = "DW_ATCF_SUN_mop_scopy";
        break;
      case 'D':
        *a2 = "DW_ATCF_SUN_func_start";
        break;
      case 'E':
        *a2 = "DW_ATCF_SUN_end_ctors";
        break;
      case 'F':
        *a2 = "DW_ATCF_SUN_branch_target";
        break;
      case 'G':
        *a2 = "DW_ATCF_SUN_mop_stack_probe";
        break;
      case 'H':
        *a2 = "DW_ATCF_SUN_func_epilog";
        break;
      default:
        *a2 = "DW_ATCF_lo_user";
        break;
    }
    return 0;
  }
  return 0xFFFFFFFFLL;
}

