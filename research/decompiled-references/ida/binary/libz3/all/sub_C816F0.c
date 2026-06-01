__int64 __fastcall sub_C816F0(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rax
  int v5; // edx
  char v6; // cl
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // cl
  void *v12; // rdi
  int v13; // edx
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // cl
  void *v20; // rdi
  void *v21; // r15
  __int64 result; // rax
  char *v23; // r13
  void *v24; // rbx
  void *v25; // rbx
  __int64 v26; // [rsp+8h] [rbp-90h]
  void *v27; // [rsp+18h] [rbp-80h]
  __int64 v28; // [rsp+20h] [rbp-78h] BYREF
  __int64 v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h] BYREF
  __int64 v31; // [rsp+38h] [rbp-60h]
  int v32; // [rsp+40h] [rbp-58h] BYREF
  char v33; // [rsp+44h] [rbp-54h]
  __int64 v34; // [rsp+48h] [rbp-50h]
  int v35; // [rsp+50h] [rbp-48h] BYREF
  char v36; // [rsp+54h] [rbp-44h]
  __int64 v37; // [rsp+58h] [rbp-40h]

  v2 = sub_186B270(0x48u);
  v26 = a1 + 24;
  v3 = qword_1C7F2C0;
  v4 = **(_QWORD **)(a1 + 16);
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = v4;
  *(_QWORD *)(v2 + 24) = 1;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = 1;
  *(_QWORD *)(v2 + 64) = 0;
  v28 = 4294967294LL;
  v29 = 0;
  v30 = 1;
  v31 = 0;
  sub_182CBA0(v3, &v30);
  BYTE4(v30) &= ~1u;
  LODWORD(v30) = 1;
  sub_185A5B0(&v32, v26, "add_bound_lower", &v28);
  v5 = v32;
  v6 = v33;
  v32 = *(_DWORD *)(v2 + 8);
  v7 = *(_QWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 8) = v5;
  v8 = v34;
  v34 = v7;
  LOBYTE(v7) = *(_BYTE *)(v2 + 12);
  *(_QWORD *)(v2 + 16) = v8;
  LOBYTE(v8) = v6;
  v6 &= ~2u;
  LOBYTE(v3) = v7;
  v33 = v7 & 1 | v6 & 0xFE | v7 & 2;
  LODWORD(v7) = *(_DWORD *)(v2 + 24);
  *(_BYTE *)(v2 + 12) = v6 & 1 | (unsigned __int8)v3 & 0xFC | v8 & 2;
  LODWORD(v8) = v35;
  v35 = v7;
  v9 = *(_QWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 24) = v8;
  v10 = v37;
  v37 = v9;
  LOBYTE(v9) = *(_BYTE *)(v2 + 28);
  v11 = v36;
  *(_QWORD *)(v2 + 32) = v10;
  LOBYTE(v10) = v11;
  v11 &= ~2u;
  v12 = qword_1C7F2C0;
  v36 = v9 & 1 | v11 & 0xFE | v9 & 2;
  *(_BYTE *)(v2 + 28) = v11 & 1 | v9 & 0xFC | v10 & 2;
  sub_182CBA0(v12, &v32);
  sub_182CBA0(v12, &v35);
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v28);
  sub_182CBA0(v27, &v30);
  v28 = 2;
  v29 = 0;
  v30 = 1;
  v31 = 0;
  sub_182CBA0(qword_1C7F2C0, &v30);
  BYTE4(v30) &= ~1u;
  LODWORD(v30) = 1;
  sub_185A5B0(&v32, v26, "add_bound_upper", &v28);
  v13 = v32;
  v14 = v33;
  v32 = *(_DWORD *)(v2 + 40);
  v15 = *(_QWORD *)(v2 + 48);
  *(_DWORD *)(v2 + 40) = v13;
  v16 = v34;
  v34 = v15;
  LOBYTE(v15) = *(_BYTE *)(v2 + 44);
  *(_QWORD *)(v2 + 48) = v16;
  LOBYTE(v16) = v14;
  v14 &= ~2u;
  LOBYTE(v12) = v15;
  v33 = v15 & 1 | v14 & 0xFE | v15 & 2;
  LODWORD(v15) = *(_DWORD *)(v2 + 56);
  *(_BYTE *)(v2 + 44) = v14 & 1 | (unsigned __int8)v12 & 0xFC | v16 & 2;
  LODWORD(v16) = v35;
  v35 = v15;
  v17 = *(_QWORD *)(v2 + 64);
  *(_DWORD *)(v2 + 56) = v16;
  v18 = v37;
  v37 = v17;
  LOBYTE(v17) = *(_BYTE *)(v2 + 60);
  v19 = v36;
  *(_QWORD *)(v2 + 64) = v18;
  LOBYTE(v18) = v19;
  v19 &= ~2u;
  v20 = qword_1C7F2C0;
  v36 = v17 & 1 | v19 & 0xFE | v17 & 2;
  *(_BYTE *)(v2 + 60) = v19 & 1 | v17 & 0xFC | v18 & 2;
  sub_182CBA0(v20, &v32);
  sub_182CBA0(v20, &v35);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v28);
  result = sub_182CBA0(v21, &v30);
  v23 = *(char **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v2;
  if ( v23 )
  {
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v23 + 40);
    sub_182CBA0(v24, v23 + 56);
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v23 + 8);
    sub_182CBA0(v25, v23 + 24);
    return sub_186B220(v23);
  }
  return result;
}

