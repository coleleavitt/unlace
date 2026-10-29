char __fastcall Z3_params_validate(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rdi
  char result; // al
  __int64 v7; // rdi

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_294ED0(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    v7 = a2 + 24;
    if ( a3 )
      sub_18632D0(v7, a3 + 24);
    else
      sub_18632D0(v7, 0);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    v5 = a2 + 24;
    if ( a3 )
      return sub_18632D0(v5, a3 + 24);
    else
      return sub_18632D0(v5, 0);
  }
  return result;
}

