__int64 __fastcall sub_C81DF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  void *v5; // rdi
  int v6; // edx
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // cl
  void *v13; // rdi
  int v14; // edx
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // cl
  void *v21; // rdi
  void *v22; // r12
  __int64 v24; // [rsp+0h] [rbp-98h]
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
  *(_QWORD *)v2 = &off_1C58B38;
  *(_DWORD *)(v2 + 8) = 0;
  v24 = a1 + 24;
  sub_1858590(v2 + 24, a1 + 24);
  v3 = (_QWORD *)sub_186B270(0x48u);
  *v3 = a2;
  v4 = v3;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 1;
  v5 = qword_1C7F2C0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 1;
  v3[8] = 0;
  v26 = 4294967294LL;
  v27 = 0;
  v28 = 1;
  v29 = 0;
  sub_182CBA0(v5, &v28);
  BYTE4(v28) &= ~1u;
  LODWORD(v28) = 1;
  sub_185A5B0(&v30, v24, "add_bound_lower", &v26);
  v6 = v30;
  v7 = v31;
  v30 = *((_DWORD *)v4 + 2);
  v8 = v4[2];
  *((_DWORD *)v4 + 2) = v6;
  v9 = v32;
  v32 = v8;
  LOBYTE(v8) = *((_BYTE *)v4 + 12);
  v4[2] = v9;
  LOBYTE(v9) = v7;
  v7 &= ~2u;
  LOBYTE(v5) = v8;
  v31 = v8 & 1 | v7 & 0xFE | v8 & 2;
  LODWORD(v8) = *((_DWORD *)v4 + 6);
  *((_BYTE *)v4 + 12) = v7 & 1 | (unsigned __int8)v5 & 0xFC | v9 & 2;
  LODWORD(v9) = v33;
  v33 = v8;
  v10 = v4[4];
  *((_DWORD *)v4 + 6) = v9;
  v11 = v35;
  v35 = v10;
  LOBYTE(v10) = *((_BYTE *)v4 + 28);
  v12 = v34;
  v4[4] = v11;
  LOBYTE(v11) = v12;
  v12 &= ~2u;
  v13 = qword_1C7F2C0;
  v34 = v10 & 1 | v12 & 0xFE | v10 & 2;
  *((_BYTE *)v4 + 28) = v12 & 1 | v10 & 0xFC | v11 & 2;
  sub_182CBA0(v13, &v30);
  sub_182CBA0(v13, &v33);
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
  sub_185A5B0(&v30, v24, "add_bound_upper", &v26);
  v14 = v30;
  v15 = v31;
  v30 = *((_DWORD *)v4 + 10);
  v16 = v4[6];
  *((_DWORD *)v4 + 10) = v14;
  v17 = v32;
  v32 = v16;
  LOBYTE(v16) = *((_BYTE *)v4 + 44);
  v4[6] = v17;
  LOBYTE(v17) = v15;
  v15 &= ~2u;
  LOBYTE(v13) = v16;
  v31 = v16 & 1 | v15 & 0xFE | v16 & 2;
  LODWORD(v16) = *((_DWORD *)v4 + 14);
  *((_BYTE *)v4 + 44) = v15 & 1 | (unsigned __int8)v13 & 0xFC | v17 & 2;
  LODWORD(v17) = v33;
  v33 = v16;
  v18 = v4[8];
  *((_DWORD *)v4 + 14) = v17;
  v19 = v35;
  v35 = v18;
  LOBYTE(v18) = *((_BYTE *)v4 + 60);
  v20 = v34;
  v4[8] = v19;
  LOBYTE(v19) = v20;
  v20 &= ~2u;
  v21 = qword_1C7F2C0;
  v34 = v18 & 1 | v20 & 0xFE | v18 & 2;
  *((_BYTE *)v4 + 60) = v20 & 1 | v18 & 0xFC | v19 & 2;
  sub_182CBA0(v21, &v30);
  sub_182CBA0(v21, &v33);
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v26);
  sub_182CBA0(v22, &v28);
  *(_QWORD *)(v2 + 16) = v4;
  return v2;
}

