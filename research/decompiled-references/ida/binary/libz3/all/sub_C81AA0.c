__int64 __fastcall sub_C81AA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // edx
  __int64 v4; // rdx
  char v5; // si
  __int64 v6; // rdx
  char v7; // si
  int v8; // edx
  __int64 v9; // rdx
  char v10; // di
  __int64 v11; // rdx
  char v12; // di
  void *v13; // r14
  void *v14; // rbx
  void *v16; // [rsp+8h] [rbp-80h]
  void *v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19; // [rsp+18h] [rbp-70h]
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+30h] [rbp-58h] BYREF
  char v23; // [rsp+34h] [rbp-54h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+40h] [rbp-48h] BYREF
  char v26; // [rsp+44h] [rbp-44h]
  __int64 v27; // [rsp+48h] [rbp-40h]

  sub_1863170(a1 + 24, a2);
  v2 = *(_QWORD *)(a1 + 16);
  v19 = 0;
  v18 = 4294967294LL;
  v20 = 1;
  v21 = 0;
  sub_182CBA0(qword_1C7F2C0, &v20);
  BYTE4(v20) &= ~1u;
  LODWORD(v20) = 1;
  sub_185A5B0(&v22, a1 + 24, "add_bound_lower", &v18);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = v22;
  v22 = v3;
  v4 = *(_QWORD *)(v2 + 16);
  *(_QWORD *)(v2 + 16) = v24;
  v24 = v4;
  LOBYTE(v4) = *(_BYTE *)(v2 + 12);
  *(_BYTE *)(v2 + 12) = v23 & 2 | v4 & 0xFD;
  v23 = v4 & 2 | v23 & 0xFD;
  v5 = *(_BYTE *)(v2 + 12);
  *(_BYTE *)(v2 + 12) = v23 & 1 | v5 & 0xFE;
  v23 = v5 & 1 | v23 & 0xFE;
  LODWORD(v4) = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = v25;
  v25 = v4;
  v6 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 32) = v27;
  v27 = v6;
  LOBYTE(v6) = *(_BYTE *)(v2 + 28);
  *(_BYTE *)(v2 + 28) = v26 & 2 | v6 & 0xFD;
  v26 = v6 & 2 | v26 & 0xFD;
  v7 = *(_BYTE *)(v2 + 28) & 1;
  *(_BYTE *)(v2 + 28) = v26 & 1 | *(_BYTE *)(v2 + 28) & 0xFE;
  v16 = qword_1C7F2C0;
  v26 = v7 | v26 & 0xFE;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v16, &v25);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v18);
  sub_182CBA0(v17, &v20);
  v18 = 2;
  v19 = 0;
  v20 = 1;
  v21 = 0;
  sub_182CBA0(qword_1C7F2C0, &v20);
  BYTE4(v20) &= ~1u;
  LODWORD(v20) = 1;
  sub_185A5B0(&v22, a1 + 24, "add_bound_upper", &v18);
  v8 = *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v2 + 40) = v22;
  v22 = v8;
  v9 = *(_QWORD *)(v2 + 48);
  *(_QWORD *)(v2 + 48) = v24;
  v24 = v9;
  LOBYTE(v9) = *(_BYTE *)(v2 + 44);
  *(_BYTE *)(v2 + 44) = v23 & 2 | v9 & 0xFD;
  v23 = v9 & 2 | v23 & 0xFD;
  v10 = *(_BYTE *)(v2 + 44);
  *(_BYTE *)(v2 + 44) = v23 & 1 | v10 & 0xFE;
  v23 = v10 & 1 | v23 & 0xFE;
  LODWORD(v9) = *(_DWORD *)(v2 + 56);
  *(_DWORD *)(v2 + 56) = v25;
  v25 = v9;
  v11 = *(_QWORD *)(v2 + 64);
  *(_QWORD *)(v2 + 64) = v27;
  v27 = v11;
  LOBYTE(v11) = *(_BYTE *)(v2 + 60);
  *(_BYTE *)(v2 + 60) = v26 & 2 | v11 & 0xFD;
  v26 = v11 & 2 | v26 & 0xFD;
  v12 = *(_BYTE *)(v2 + 60) & 1;
  *(_BYTE *)(v2 + 60) = v26 & 1 | *(_BYTE *)(v2 + 60) & 0xFE;
  v13 = qword_1C7F2C0;
  v26 = v12 | v26 & 0xFE;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v13, &v25);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v18);
  return sub_182CBA0(v14, &v20);
}

