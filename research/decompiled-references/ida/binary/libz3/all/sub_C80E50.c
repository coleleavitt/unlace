__int64 __fastcall sub_C80E50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  void *v6; // rdi
  int v7; // edx
  char v8; // cl
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // cl
  void *v14; // rdi
  int v15; // edx
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  char v21; // cl
  void *v22; // rdi
  void *v23; // r12
  void *v25; // [rsp+10h] [rbp-88h]
  __int64 v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+38h] [rbp-60h]
  int v30; // [rsp+40h] [rbp-58h] BYREF
  char v31; // [rsp+44h] [rbp-54h]
  __int64 v32; // [rsp+48h] [rbp-50h]
  int v33; // [rsp+50h] [rbp-48h] BYREF
  char v34; // [rsp+54h] [rbp-44h]
  __int64 v35; // [rsp+58h] [rbp-40h]

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C58B38;
  sub_1858590(v2 + 24, a2);
  v4 = (_QWORD *)sub_186B270(0x48u);
  *v4 = a1;
  v5 = v4;
  v4[1] = 0;
  v4[2] = 0;
  v6 = qword_1C7F2C0;
  v4[3] = 1;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 1;
  v4[8] = 0;
  v26 = 4294967294LL;
  v27 = 0;
  v28 = 1;
  v29 = 0;
  sub_182CBA0(v6, &v28);
  BYTE4(v28) &= ~1u;
  LODWORD(v28) = 1;
  sub_185A5B0(&v30, a2, "add_bound_lower", &v26);
  v7 = v30;
  v8 = v31;
  v30 = *((_DWORD *)v5 + 2);
  v9 = v5[2];
  *((_DWORD *)v5 + 2) = v7;
  v10 = v32;
  v32 = v9;
  LOBYTE(v9) = *((_BYTE *)v5 + 12);
  v5[2] = v10;
  LOBYTE(v10) = v8;
  v8 &= ~2u;
  LOBYTE(v6) = v9;
  v31 = v9 & 1 | v8 & 0xFE | v9 & 2;
  LODWORD(v9) = *((_DWORD *)v5 + 6);
  *((_BYTE *)v5 + 12) = v8 & 1 | (unsigned __int8)v6 & 0xFC | v10 & 2;
  LODWORD(v10) = v33;
  v33 = v9;
  v11 = v5[4];
  *((_DWORD *)v5 + 6) = v10;
  v12 = v35;
  v35 = v11;
  LOBYTE(v11) = *((_BYTE *)v5 + 28);
  v13 = v34;
  v5[4] = v12;
  LOBYTE(v12) = v13;
  v13 &= ~2u;
  v14 = qword_1C7F2C0;
  v34 = v11 & 1 | v13 & 0xFE | v11 & 2;
  *((_BYTE *)v5 + 28) = v13 & 1 | v11 & 0xFC | v12 & 2;
  sub_182CBA0(v14, &v30);
  sub_182CBA0(v14, &v33);
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v26);
  sub_182CBA0(v25, &v28);
  v26 = 2;
  v27 = 0;
  v28 = 1;
  v29 = 0;
  sub_182CBA0(qword_1C7F2C0, &v28);
  BYTE4(v28) &= ~1u;
  LODWORD(v28) = 1;
  sub_185A5B0(&v30, a2, "add_bound_upper", &v26);
  v15 = v30;
  v16 = v31;
  v30 = *((_DWORD *)v5 + 10);
  v17 = v5[6];
  *((_DWORD *)v5 + 10) = v15;
  v18 = v32;
  v32 = v17;
  LOBYTE(v17) = *((_BYTE *)v5 + 44);
  v5[6] = v18;
  LOBYTE(v18) = v16;
  v16 &= ~2u;
  LOBYTE(v14) = v17;
  v31 = v17 & 1 | v16 & 0xFE | v17 & 2;
  LODWORD(v17) = *((_DWORD *)v5 + 14);
  *((_BYTE *)v5 + 44) = v16 & 1 | (unsigned __int8)v14 & 0xFC | v18 & 2;
  LODWORD(v18) = v33;
  v33 = v17;
  v19 = v5[8];
  *((_DWORD *)v5 + 14) = v18;
  v20 = v35;
  v35 = v19;
  LOBYTE(v19) = *((_BYTE *)v5 + 60);
  v21 = v34;
  v5[8] = v20;
  LOBYTE(v20) = v21;
  v21 &= ~2u;
  v22 = qword_1C7F2C0;
  v34 = v19 & 1 | v21 & 0xFE | v19 & 2;
  *((_BYTE *)v5 + 60) = v21 & 1 | v19 & 0xFC | v20 & 2;
  sub_182CBA0(v22, &v30);
  sub_182CBA0(v22, &v33);
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v26);
  sub_182CBA0(v23, &v28);
  *(_QWORD *)(v3 + 16) = v5;
  return sub_EE8D70(v3);
}

