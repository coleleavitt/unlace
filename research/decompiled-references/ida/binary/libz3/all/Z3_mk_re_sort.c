__int64 __fastcall Z3_mk_re_sort(__int64 a1, __int64 a2)
{
  char v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  char v10; // [rsp+8h] [rbp-40h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_297980();
  v5 = *(unsigned int *)(a1 + 504);
  v9 = a2;
  v10 = 1;
  v6 = *(_QWORD *)(a1 + 496);
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = sub_15D2CD0(v6, v5, 1, 1, &v9);
  sub_15D0DF0(&v9);
  sub_251FD0(a1, v7);
  if ( v4 )
  {
    sub_2BB620(v7);
    byte_1C7EBA0 = 1;
  }
  return v7;
}

