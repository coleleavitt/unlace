__int64 __fastcall Z3_param_descrs_size(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_294FD0(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
      result = sub_1858490(a2 + 24);
    else
      result = sub_1858490(0);
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
      return sub_1858490(a2 + 24);
    else
      return sub_1858490(0);
  }
  return result;
}

