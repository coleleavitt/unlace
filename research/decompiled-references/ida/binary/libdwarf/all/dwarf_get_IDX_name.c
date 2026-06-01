__int64 __fastcall dwarf_get_IDX_name(__int64 a1, _QWORD *a2)
{
  if ( (unsigned int)a1 > 0x2004 )
  {
    if ( (_DWORD)a1 == 0x3FFF )
    {
      *a2 = "DW_IDX_hi_user";
      return 0;
    }
  }
  else
  {
    if ( (unsigned int)a1 > 0x1FFF )
    {
      switch ( (int)a1 )
      {
        case 8193:
          *a2 = "DW_IDX_GNU_external";
          break;
        case 8194:
          *a2 = "DW_IDX_GNU_main";
          break;
        case 8195:
          *a2 = "DW_IDX_GNU_language";
          break;
        case 8196:
          *a2 = "DW_IDX_GNU_linkage_name";
          break;
        default:
          *a2 = "DW_IDX_GNU_internal";
          break;
      }
      return 0;
    }
    if ( (unsigned int)(a1 - 1) <= 4 )
    {
      switch ( a1 )
      {
        case 2LL:
          *a2 = "DW_IDX_type_unit";
          break;
        case 3LL:
          *a2 = "DW_IDX_die_offset";
          break;
        case 4LL:
          *a2 = "DW_IDX_parent";
          break;
        case 5LL:
          *a2 = "DW_IDX_type_hash";
          break;
        default:
          *a2 = "DW_IDX_compile_unit";
          break;
      }
      return 0;
    }
  }
  return 0xFFFFFFFFLL;
}

