__int64 __fastcall Z3_mk_fpa_rtp(__int64 a1)
{
  char v1; // r12
  __int64 v2; // rbp

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_2A0BD0();
  *(_DWORD *)(a1 + 1520) = 0;
  v2 = sub_15E1AF0(*(_QWORD *)(a1 + 368));
  sub_251FD0(a1, v2);
  if ( v1 )
  {
    sub_2BB620(v2);
    byte_1C7EBA0 = 1;
  }
  return v2;
}

