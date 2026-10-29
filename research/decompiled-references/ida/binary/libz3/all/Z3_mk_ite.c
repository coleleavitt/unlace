__int64 __fastcall Z3_mk_ite(__int64 a1)
{
  char v2; // r12
  __int64 v3; // rdi
  __int64 v4; // rbp

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_295D80();
  v3 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v4 = sub_15E1BF0(v3);
  sub_251FD0(a1, v4);
  sub_24FE40(a1, v4);
  if ( v2 )
  {
    sub_2BB620(v4);
    byte_1C7EBA0 = 1;
  }
  return v4;
}

