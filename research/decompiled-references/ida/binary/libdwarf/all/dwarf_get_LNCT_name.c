__int64 __fastcall dwarf_get_LNCT_name(__int64 a1, _QWORD *a2)
{
  if ( (unsigned int)a1 > 8 )
  {
    if ( (_DWORD)a1 == 8194 )
    {
      *a2 = "DW_LNCT_LLVM_is_MD5";
    }
    else if ( (unsigned int)a1 > 0x2002 )
    {
      if ( (_DWORD)a1 != 0x3FFF )
        return 0xFFFFFFFFLL;
      *a2 = "DW_LNCT_hi_user";
    }
    else if ( (_DWORD)a1 == 0x2000 )
    {
      *a2 = "DW_LNCT_lo_user";
    }
    else
    {
      if ( (_DWORD)a1 != 8193 )
        return 0xFFFFFFFFLL;
      *a2 = "DW_LNCT_LLVM_source";
    }
    return 0;
  }
  if ( (_DWORD)a1 )
  {
    switch ( a1 )
    {
      case 2LL:
        *a2 = "DW_LNCT_directory_index";
        break;
      case 3LL:
        *a2 = "DW_LNCT_timestamp";
        break;
      case 4LL:
        *a2 = "DW_LNCT_size";
        break;
      case 5LL:
        *a2 = "DW_LNCT_MD5";
        break;
      case 6LL:
        *a2 = "DW_LNCT_GNU_subprogram_name";
        break;
      case 7LL:
        *a2 = "DW_LNCT_GNU_decl_file";
        break;
      case 8LL:
        *a2 = "DW_LNCT_GNU_decl_line";
        break;
      default:
        *a2 = "DW_LNCT_path";
        break;
    }
    return 0;
  }
  return 0xFFFFFFFFLL;
}

