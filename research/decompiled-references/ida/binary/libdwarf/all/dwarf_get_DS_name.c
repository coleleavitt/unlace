__int64 __fastcall dwarf_get_DS_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 1LL:
      *a2 = "DW_DS_unsigned";
      result = 0;
      break;
    case 2LL:
      *a2 = "DW_DS_leading_overpunch";
      result = 0;
      break;
    case 3LL:
      *a2 = "DW_DS_trailing_overpunch";
      result = 0;
      break;
    case 4LL:
      *a2 = "DW_DS_leading_separate";
      result = 0;
      break;
    case 5LL:
      *a2 = "DW_DS_trailing_separate";
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

