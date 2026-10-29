__int64 __fastcall dwarf_get_SECT_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 1LL:
      *a2 = "DW_SECT_INFO";
      result = 0;
      break;
    case 2LL:
      *a2 = "DW_SECT_TYPES";
      result = 0;
      break;
    case 3LL:
      *a2 = "DW_SECT_ABBREV";
      result = 0;
      break;
    case 4LL:
      *a2 = "DW_SECT_LINE";
      result = 0;
      break;
    case 5LL:
      *a2 = "DW_SECT_LOCLISTS";
      result = 0;
      break;
    case 6LL:
      *a2 = "DW_SECT_STR_OFFSETS";
      result = 0;
      break;
    case 7LL:
      *a2 = "DW_SECT_MACRO";
      result = 0;
      break;
    case 8LL:
      *a2 = "DW_SECT_RNGLISTS";
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

