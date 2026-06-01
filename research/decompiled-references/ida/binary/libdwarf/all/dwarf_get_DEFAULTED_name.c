__int64 __fastcall dwarf_get_DEFAULTED_name(int a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a1 == 1 )
  {
    *a2 = "DW_DEFAULTED_in_class";
    return 0;
  }
  else if ( a1 == 2 )
  {
    *a2 = "DW_DEFAULTED_out_of_class";
    return 0;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( !a1 )
    {
      *a2 = "DW_DEFAULTED_no";
      return 0;
    }
  }
  return result;
}

