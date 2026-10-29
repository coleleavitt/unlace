__int64 __fastcall sub_CB86D0(__int64 a1)
{
  void *v1; // r12
  int v2; // eax
  void *v3; // r13
  int v4; // edx
  void *v5; // r13
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rax
  void *v9; // rdi
  unsigned int v10; // r13d
  void *v11; // r15
  int v12; // edx
  void *v13; // r15
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rax
  void *v17; // rbp
  void *v18; // rbx
  _QWORD v20[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v21[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v22; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h]
  __int64 v24; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+48h] [rbp-60h]
  int v26; // [rsp+50h] [rbp-58h] BYREF
  char v27; // [rsp+54h] [rbp-54h]
  __int64 v28; // [rsp+58h] [rbp-50h]
  int v29; // [rsp+60h] [rbp-48h] BYREF
  char v30; // [rsp+64h] [rbp-44h]
  __int64 v31; // [rsp+68h] [rbp-40h]

  v20[0] = 2;
  v20[1] = 0;
  v21[0] = 1;
  v21[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v21);
  BYTE4(v21[0]) &= ~1u;
  v1 = qword_1C7F2C0;
  LODWORD(v21[0]) = 1;
  v22 = 0;
  v23 = 0;
  v24 = 1;
  v25 = 0;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v22, a1);
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v22) = *(_DWORD *)a1;
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
    {
LABEL_3:
      v2 = *(_DWORD *)(a1 + 16);
      BYTE4(v24) &= ~1u;
      LODWORD(v24) = v2;
      goto LABEL_4;
    }
  }
  sub_182C690(v1, &v24, a1 + 16);
LABEL_4:
  v3 = qword_1C7F2C0;
  v27 &= 0xFCu;
  v30 &= 0xFCu;
  v26 = 0;
  v28 = 0;
  v29 = 1;
  v31 = 0;
  sub_1833EB0(qword_1C7F2C0, &v22, v20, &v26);
  sub_182CBA0(v3, &v29);
  v4 = v26;
  v5 = qword_1C7F2C0;
  v26 = v22;
  LODWORD(v22) = v4;
  v6 = v28;
  v28 = v23;
  v23 = v6;
  v7 = v27 & 1;
  LOBYTE(v6) = BYTE4(v22) & 0xFC | v27 & 2;
  v27 = BYTE4(v22) & 1 | v27 & 0xFC | BYTE4(v22) & 2;
  BYTE4(v22) = v7 | v6;
  v29 = v24;
  v8 = v25;
  v25 = v31;
  v31 = v8;
  LODWORD(v24) = 1;
  LOBYTE(v8) = BYTE4(v24) & 1 | BYTE4(v24) & 2 | v30 & 0xFC;
  BYTE4(v24) = BYTE4(v24) & 0xFC | v30 & 2;
  v30 = v8;
  sub_182CBA0(qword_1C7F2C0, &v26);
  v9 = v5;
  v10 = 1;
  sub_182CBA0(v9, &v29);
  while ( (int)v22 > 0 )
  {
    v11 = qword_1C7F2C0;
    v27 &= 0xFCu;
    ++v10;
    v30 &= 0xFCu;
    v26 = 0;
    v28 = 0;
    v29 = 1;
    v31 = 0;
    sub_1833EB0(qword_1C7F2C0, &v22, v20, &v26);
    sub_182CBA0(v11, &v29);
    v12 = v26;
    v13 = qword_1C7F2C0;
    v26 = v22;
    LODWORD(v22) = v12;
    v14 = v28;
    v28 = v23;
    v23 = v14;
    v15 = v27 & 1;
    LOBYTE(v14) = BYTE4(v22) & 0xFC | v27 & 2;
    v27 = BYTE4(v22) & 1 | v27 & 0xFC | BYTE4(v22) & 2;
    BYTE4(v22) = v15 | v14;
    v29 = v24;
    v16 = v25;
    v25 = v31;
    v31 = v16;
    LODWORD(v24) = 1;
    LOBYTE(v14) = BYTE4(v24) & 0xFC | v30 & 2;
    v30 = BYTE4(v24) & 1 | BYTE4(v24) & 2 | v30 & 0xFC;
    BYTE4(v24) = v14;
    sub_182CBA0(qword_1C7F2C0, &v26);
    sub_182CBA0(v13, &v29);
  }
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v17, &v24);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v20);
  sub_182CBA0(v18, v21);
  return v10;
}

