__int64 __fastcall dwarf_get_GNUIKIND_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
      *a2 = "DW_GNUIKIND_none";
      result = 0;
      break;
    case 1LL:
      *a2 = "DW_GNUIKIND_type";
      result = 0;
      break;
    case 2LL:
      *a2 = "DW_GNUIKIND_variable";
      result = 0;
      break;
    case 3LL:
      *a2 = "DW_GNUIKIND_function";
      result = 0;
      break;
    case 4LL:
      *a2 = "DW_GNUIKIND_other";
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

