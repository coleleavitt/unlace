__int64 __fastcall Z3_mk_array_sort(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  char v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  char v14; // [rsp+18h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_295290();
  v7 = *(unsigned int *)(a1 + 1440);
  v8 = *(_QWORD *)(a1 + 232);
  v13 = a3;
  *(_DWORD *)(a1 + 1520) = 0;
  v11 = a2;
  v12 = 1;
  v14 = 1;
  v9 = sub_15D2CD0(v8, v7, 0, 2, &v11);
  sub_251FD0(a1, v9);
  if ( v6 )
  {
    sub_2BB620(v9);
    sub_15D0DF0(&v13);
    sub_15D0DF0(&v11);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_15D0DF0(&v13);
    sub_15D0DF0(&v11);
  }
  return v9;
}

