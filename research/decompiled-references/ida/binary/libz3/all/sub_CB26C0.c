__int64 __fastcall sub_CB26C0(__int64 *a1, __int64 a2)
{
  void *v3; // r15
  int *v4; // rax
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r13
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  void *v14; // r14
  int v16; // [rsp+18h] [rbp-98h]
  _QWORD *v17; // [rsp+28h] [rbp-88h]
  void *v18; // [rsp+38h] [rbp-78h]
  int v19[2]; // [rsp+40h] [rbp-70h] BYREF
  __int64 v20; // [rsp+48h] [rbp-68h]
  _QWORD v21[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v22; // [rsp+60h] [rbp-50h] BYREF
  __int64 v23; // [rsp+68h] [rbp-48h]
  __int64 v24; // [rsp+70h] [rbp-40h] BYREF
  __int64 v25; // [rsp+78h] [rbp-38h]

  v17 = a1 + 2;
  v22 = 1;
  v23 = 0;
  v24 = 1;
  v25 = 0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  BYTE4(v24) &= ~1u;
  LODWORD(v24) = 1;
  sub_1674520(a1 + 2, &v22, 1);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v3, &v24);
  v4 = *(int **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( *((_BYTE *)v4 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v5 = *v4;
  v6 = *a1;
  *(_QWORD *)v19 = a2;
  v7 = a1[3];
  LOBYTE(v23) = 0;
  v16 = v6;
  LODWORD(v22) = v5 - 1;
  LODWORD(v24) = v5 - 1;
  LOBYTE(v25) = 0;
  sub_15DCAD0(v7, (int)v19, 0);
  sub_15D0DF0(&v24);
  sub_15D0DF0(&v22);
  sub_15E1B70(v16);
  LODWORD(v22) = v5 - 2;
  v8 = a1[3];
  *(_QWORD *)v19 = a2;
  LOBYTE(v23) = 0;
  v24 = 0;
  v25 = 0;
  v9 = sub_15DCAD0(v8, (int)v19, 0);
  sub_15D0DF0(&v24);
  sub_15D0DF0(&v22);
  sub_16747F0(v17, v9);
  *(_QWORD *)v19 = 2;
  v20 = 0;
  v21[0] = 1;
  v21[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v21);
  LODWORD(v21[0]) = 1;
  LODWORD(v22) = 0;
  BYTE4(v21[0]) &= ~1u;
  BYTE4(v22) &= 0xFCu;
  BYTE4(v24) &= 0xFCu;
  v23 = 0;
  LODWORD(v24) = 1;
  v25 = 0;
  sub_184BE60(qword_1C7F2C0, v19, (unsigned int)(v5 - 1), &v22);
  v13 = a1[6];
  if ( !v13 )
  {
    sub_16669E0(a1 + 5);
    v13 = a1[6];
  }
  sub_166A700(v13, (unsigned int)&v22, 1, v10, v11, v12);
  sub_15E1B70(a1[5]);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v18, &v24);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v14, v21);
  return sub_15E1BF0(*a1);
}

