__int64 __fastcall Z3_mk_seq_sort(__int64 a1, __int64 a2)
{
  char v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  char v9; // [rsp+8h] [rbp-40h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_2978C0();
  v4 = *(_QWORD *)(a1 + 472);
  v8 = a2;
  v5 = *(unsigned int *)(a1 + 480);
  v9 = 1;
  *(_DWORD *)(a1 + 1520) = 0;
  v6 = sub_15D2CD0(v4, v5, 0, 1, &v8);
  sub_15D0DF0(&v8);
  sub_251FD0(a1, v6);
  if ( v3 )
  {
    sub_2BB620(v6);
    byte_1C7EBA0 = 1;
  }
  return v6;
}

