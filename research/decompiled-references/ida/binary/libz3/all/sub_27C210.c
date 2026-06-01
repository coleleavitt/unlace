__int64 __fastcall sub_27C210(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r14
  int v13[2]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v14; // [rsp+8h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-50h] BYREF
  int v16; // [rsp+18h] [rbp-48h]
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  char v18; // [rsp+28h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+38h] [rbp-28h]
  int v21; // [rsp+40h] [rbp-20h]
  void *v22; // [rsp+48h] [rbp-18h]

  *(_QWORD *)v13 = a3;
  v4 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = sub_15D1F10(a3);
  v17 = a2;
  v6 = *(unsigned int *)(a1 + 1440);
  v7 = *(_QWORD *)(a1 + 232);
  v14 = v5;
  v18 = 1;
  v19 = v5;
  LOBYTE(v20) = 1;
  v15 = sub_15D2CD0(v7, v6, 0, 2, &v17);
  LOBYTE(v16) = 1;
  v8 = sub_15D2D10(v4, *(_DWORD *)(a1 + 1440), 2, 1, (unsigned int)&v15, 1, (__int64)&v14, 0);
  v11 = sub_15DC610(v4, v8, 1, (int)v13, v9, v10, v13[0], v14, v15, v16, v17, v18, v19, v20, v21, v22);
  sub_251FD0(a1, v11);
  sub_24FE40(a1, v11);
  sub_15D0DF0(&v15);
  sub_15D0DF0(&v19);
  sub_15D0DF0(&v17);
  return v11;
}

