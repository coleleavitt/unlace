__int64 __fastcall Z3_mk_char(__int64 a1, unsigned int a2)
{
  char v2; // r12
  __int64 v3; // rbp

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_298880();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_163B0D0(a1 + 464, a2);
  sub_251FD0(a1, v3);
  if ( v2 )
  {
    sub_2BB620(v3);
    byte_1C7EBA0 = 1;
  }
  return v3;
}

