__int64 __fastcall Z3_mk_re_full(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rbp

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_298840();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_163D390(a1 + 488, a2);
  sub_251FD0(a1, v3);
  if ( v2 )
  {
    sub_2BB620(v3);
    byte_1C7EBA0 = 1;
  }
  return v3;
}

