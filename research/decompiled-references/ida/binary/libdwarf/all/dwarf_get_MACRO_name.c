__int64 __fastcall dwarf_get_MACRO_name(__int64 a1, _QWORD *a2)
{
  if ( (unsigned int)a1 > 0xC )
  {
    if ( (_DWORD)a1 == 224 )
    {
      *a2 = "DW_MACRO_lo_user";
    }
    else
    {
      if ( (_DWORD)a1 != 255 )
        return 0xFFFFFFFFLL;
      *a2 = "DW_MACRO_hi_user";
    }
    return 0;
  }
  if ( (_DWORD)a1 )
  {
    switch ( a1 )
    {
      case 2LL:
        *a2 = "DW_MACRO_undef";
        break;
      case 3LL:
        *a2 = "DW_MACRO_start_file";
        break;
      case 4LL:
        *a2 = "DW_MACRO_end_file";
        break;
      case 5LL:
        *a2 = "DW_MACRO_define_strp";
        break;
      case 6LL:
        *a2 = "DW_MACRO_undef_strp";
        break;
      case 7LL:
        *a2 = "DW_MACRO_import";
        break;
      case 8LL:
        *a2 = "DW_MACRO_define_sup";
        break;
      case 9LL:
        *a2 = "DW_MACRO_undef_sup";
        break;
      case 10LL:
        *a2 = "DW_MACRO_import_sup";
        break;
      case 11LL:
        *a2 = "DW_MACRO_define_strx";
        break;
      case 12LL:
        *a2 = "DW_MACRO_undef_strx";
        break;
      default:
        *a2 = "DW_MACRO_define";
        break;
    }
    return 0;
  }
  return 0xFFFFFFFFLL;
}

