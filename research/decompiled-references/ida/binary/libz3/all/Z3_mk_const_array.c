__int64 __fastcall Z3_mk_const_array(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r15
  int v16; // [rsp+0h] [rbp-80h]
  int v17; // [rsp+8h] [rbp-78h]
  char v18; // [rsp+Fh] [rbp-71h]
  int v19[2]; // [rsp+10h] [rbp-70h] BYREF
  __int64 v20; // [rsp+18h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  char v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  int v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  void *v26; // [rsp+48h] [rbp-38h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_2971F0();
  *(_QWORD *)v19 = a3;
  v7 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v8 = sub_15D1F10(a3);
  v9 = *(unsigned int *)(a1 + 1440);
  v20 = v8;
  v10 = *(_QWORD *)(a1 + 232);
  v23 = a2;
  LOBYTE(v24) = 1;
  v25 = v8;
  LOBYTE(v26) = 1;
  v21 = sub_15D2CD0(v10, v9, 0, 2, &v23);
  v22 = 1;
  v11 = sub_15D2D10(v7, *(_DWORD *)(a1 + 1440), 2, 1, (unsigned int)&v21, 1, (__int64)&v20, 0);
  v14 = sub_15DC610(v7, v11, 1, (int)v19, v12, v13, v16, v17, v19[0], v20, v21, v22, v23, v24, v25, v26);
  sub_251FD0(a1, v14);
  sub_24FE40(a1, v14);
  if ( v18 )
  {
    sub_2BB620(v14);
    sub_15D0DF0(&v21);
    sub_15D0DF0(&v25);
    sub_15D0DF0(&v23);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_15D0DF0(&v21);
    sub_15D0DF0(&v25);
    sub_15D0DF0(&v23);
  }
  return v14;
}

