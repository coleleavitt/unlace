__int64 __fastcall dwarf_get_ADDR_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
      *a2 = "DW_ADDR_none";
      result = 0;
      break;
    case 8LL:
      *a2 = "DW_ADDR_TI_PTR8";
      result = 0;
      break;
    case 16LL:
      *a2 = "DW_ADDR_TI_PTR16";
      result = 0;
      break;
    case 22LL:
      *a2 = "DW_ADDR_TI_PTR22";
      result = 0;
      break;
    case 23LL:
      *a2 = "DW_ADDR_TI_PTR23";
      result = 0;
      break;
    case 24LL:
      *a2 = "DW_ADDR_TI_PTR24";
      result = 0;
      break;
    case 32LL:
      *a2 = "DW_ADDR_TI_PTR32";
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

