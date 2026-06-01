__int64 __fastcall dwarf_get_UT_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( (unsigned int)a1 > 6 )
  {
    if ( (_DWORD)a1 == 128 )
    {
      *a2 = "DW_UT_lo_user";
      return 0;
    }
    if ( (_DWORD)a1 == 255 )
    {
      *a2 = "DW_UT_hi_user";
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
  if ( !(_DWORD)a1 )
    return 0xFFFFFFFFLL;
  switch ( a1 )
  {
    case 2LL:
      *a2 = "DW_UT_type";
      result = 0;
      break;
    case 3LL:
      *a2 = "DW_UT_partial";
      result = 0;
      break;
    case 4LL:
      *a2 = "DW_UT_skeleton";
      result = 0;
      break;
    case 5LL:
      *a2 = "DW_UT_split_compile";
      result = 0;
      break;
    case 6LL:
      *a2 = "DW_UT_split_type";
      result = 0;
      break;
    default:
      *a2 = "DW_UT_compile";
      result = 0;
      break;
  }
  return result;
}

