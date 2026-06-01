__int64 __fastcall Z3_mk_or(__int64 a1, __int64 a2, int a3)
{
  char v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r14

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_295EF0();
  v6 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = sub_15DCAD0(v6, a3, 0);
  sub_251FD0(a1, v7);
  sub_24FE40(a1, v7);
  if ( v5 )
  {
    sub_2BB620(v7);
    byte_1C7EBA0 = 1;
  }
  return v7;
}

