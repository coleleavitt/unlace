__int64 __fastcall Z3_mk_re_concat(__int64 a1, __int64 a2, int a3)
{
  char v4; // r12
  __int64 v5; // r14

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_2985B0();
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = sub_15DCAD0(*(_QWORD *)(a1 + 232), a3, 0);
  sub_251FD0(a1, v5);
  sub_24FE40(a1, v5);
  if ( v4 )
  {
    sub_2BB620(v5);
    byte_1C7EBA0 = 1;
  }
  return v5;
}

