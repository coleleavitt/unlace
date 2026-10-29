__int64 __fastcall Z3_mk_bound(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // r12
  __int64 v5; // rbp

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_298B90();
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = sub_15DB5C0(*(_QWORD *)(a1 + 232), a2, a3);
  sub_251FD0(a1, v5);
  if ( v4 )
  {
    sub_2BB620(v5);
    byte_1C7EBA0 = 1;
  }
  return v5;
}

