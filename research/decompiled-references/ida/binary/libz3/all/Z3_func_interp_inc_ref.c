void __fastcall Z3_func_interp_inc_ref(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29B8A0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
      sub_24E8F0(a2);
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
      sub_24E8F0(a2);
  }
}

