__int64 __fastcall dwarf_get_VIRTUALITY_name(int a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a1 == 1 )
  {
    *a2 = "DW_VIRTUALITY_virtual";
    return 0;
  }
  else if ( a1 == 2 )
  {
    *a2 = "DW_VIRTUALITY_pure_virtual";
    return 0;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( !a1 )
    {
      *a2 = "DW_VIRTUALITY_none";
      return 0;
    }
  }
  return result;
}

