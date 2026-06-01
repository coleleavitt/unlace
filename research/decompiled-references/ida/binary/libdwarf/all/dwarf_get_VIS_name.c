__int64 __fastcall dwarf_get_VIS_name(int a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a1 == 2 )
  {
    *a2 = "DW_VIS_exported";
    return 0;
  }
  else if ( a1 == 3 )
  {
    *a2 = "DW_VIS_qualified";
    return 0;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( a1 == 1 )
    {
      *a2 = "DW_VIS_local";
      return 0;
    }
  }
  return result;
}

