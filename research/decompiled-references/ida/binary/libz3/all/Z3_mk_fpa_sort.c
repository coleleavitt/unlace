__int64 __fastcall Z3_mk_fpa_sort(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // r12
  __int64 v5; // rbp

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_2A0C70();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 <= 1 || a3 <= 2 )
    sub_24EA30(a1, 3u, "ebits should be at least 2, sbits at least 3");
  v5 = sub_15C54E0(a1 + 368, a2, a3);
  sub_251FD0(a1, v5);
  if ( v4 )
  {
    sub_2BB620(v5);
    byte_1C7EBA0 = 1;
  }
  return v5;
}

