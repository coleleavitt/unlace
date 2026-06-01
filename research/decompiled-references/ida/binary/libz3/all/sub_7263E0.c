__int64 __fastcall sub_7263E0(__int64 a1, _QWORD *a2, __int64 a3, int *a4)
{
  int *v5; // rax
  unsigned int v6; // r15d
  int v7; // edx
  char v8; // cl
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rax
  char v13; // cl
  __int64 v14; // rdx
  void *v15; // rbx
  void *v16; // rbx
  _QWORD v18[2]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-68h] BYREF
  int v20; // [rsp+20h] [rbp-58h] BYREF
  char v21; // [rsp+24h] [rbp-54h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  int v23; // [rsp+30h] [rbp-48h] BYREF
  char v24; // [rsp+34h] [rbp-44h]
  __int64 v25; // [rsp+38h] [rbp-40h]

  v5 = *(int **)(*(_QWORD *)(sub_15D1F10(*a2) + 24) + 8LL);
  if ( *((_BYTE *)v5 + 8) )
    sub_DBF6E(0);
  v6 = *v5;
  v18[0] = 2;
  v18[1] = 0;
  v19[0] = 1;
  v19[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v19);
  BYTE4(v19[0]) &= ~1u;
  v21 &= 0xFCu;
  v24 &= 0xFCu;
  LODWORD(v19[0]) = 1;
  v20 = 0;
  v22 = 0;
  v23 = 1;
  v25 = 0;
  sub_184BE60(qword_1C7F2C0, v18, v6, &v20);
  v7 = v20;
  v8 = v21;
  v20 = *a4;
  v9 = *((_QWORD *)a4 + 1);
  *a4 = v7;
  v10 = v22;
  v22 = v9;
  LOBYTE(v9) = *((_BYTE *)a4 + 4);
  *((_QWORD *)a4 + 1) = v10;
  LOBYTE(v10) = v8;
  v8 &= ~2u;
  v11 = v9 & 0xFD;
  v21 = v9 & 1 | v8 & 0xFE | v9 & 2;
  LODWORD(v9) = a4[4];
  *((_BYTE *)a4 + 4) = v8 & 1 | v11 & 0xFE | v10 & 2;
  LODWORD(v10) = v23;
  v23 = v9;
  v12 = *((_QWORD *)a4 + 3);
  v13 = v24;
  a4[4] = v10;
  v14 = v25;
  v25 = v12;
  LOBYTE(v12) = *((_BYTE *)a4 + 20);
  *((_QWORD *)a4 + 3) = v14;
  LOBYTE(v14) = v13;
  v13 &= ~2u;
  v24 = v12 & 1 | v13 & 0xFE | v12 & 2;
  *((_BYTE *)a4 + 20) = v13 & 1 | v12 & 0xFC | v14 & 2;
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v20);
  sub_182CBA0(v15, &v23);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v18);
  sub_182CBA0(v16, v19);
  return 1;
}

