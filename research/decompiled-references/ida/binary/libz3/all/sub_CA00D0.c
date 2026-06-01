__int64 __fastcall sub_CA00D0(__int64 a1, __int64 a2)
{
  void *v2; // r12
  int v3; // eax
  void *v4; // r13
  int v5; // edx
  void *v6; // r13
  __int64 v7; // rdx
  char v8; // cl
  __int64 v9; // rax
  void *v10; // rdi
  unsigned int v11; // r13d
  void *v12; // r14
  int v13; // edx
  void *v14; // r14
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rax
  void *v18; // rbx
  __int64 v20; // [rsp+10h] [rbp-78h] BYREF
  __int64 v21; // [rsp+18h] [rbp-70h]
  __int64 v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h]
  int v24; // [rsp+30h] [rbp-58h] BYREF
  char v25; // [rsp+34h] [rbp-54h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+40h] [rbp-48h] BYREF
  char v28; // [rsp+44h] [rbp-44h]
  __int64 v29; // [rsp+48h] [rbp-40h]

  v20 = 0;
  v2 = qword_1C7F2C0;
  v21 = 0;
  v22 = 1;
  v23 = 0;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v20, a1);
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v20) = *(_DWORD *)a1;
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
    {
LABEL_3:
      v3 = *(_DWORD *)(a1 + 16);
      BYTE4(v22) &= ~1u;
      LODWORD(v22) = v3;
      goto LABEL_4;
    }
  }
  sub_182C690(v2, &v22, a1 + 16);
LABEL_4:
  v4 = qword_1C7F2C0;
  v25 &= 0xFCu;
  v28 &= 0xFCu;
  v24 = 0;
  v26 = 0;
  v27 = 1;
  v29 = 0;
  sub_1833EB0(qword_1C7F2C0, &v20, a2, &v24);
  sub_182CBA0(v4, &v27);
  v5 = v24;
  v6 = qword_1C7F2C0;
  v24 = v20;
  LODWORD(v20) = v5;
  v7 = v26;
  v26 = v21;
  v21 = v7;
  v8 = v25 & 1;
  LOBYTE(v7) = BYTE4(v20) & 0xFC | v25 & 2;
  v25 = BYTE4(v20) & 1 | v25 & 0xFC | BYTE4(v20) & 2;
  BYTE4(v20) = v8 | v7;
  v27 = v22;
  v9 = v23;
  v23 = v29;
  v29 = v9;
  LODWORD(v22) = 1;
  LOBYTE(v9) = BYTE4(v22) & 1 | BYTE4(v22) & 2 | v28 & 0xFC;
  BYTE4(v22) = BYTE4(v22) & 0xFC | v28 & 2;
  v28 = v9;
  sub_182CBA0(qword_1C7F2C0, &v24);
  v10 = v6;
  v11 = 1;
  sub_182CBA0(v10, &v27);
  while ( (int)v20 > 0 )
  {
    v12 = qword_1C7F2C0;
    v25 &= 0xFCu;
    ++v11;
    v28 &= 0xFCu;
    v24 = 0;
    v26 = 0;
    v27 = 1;
    v29 = 0;
    sub_1833EB0(qword_1C7F2C0, &v20, a2, &v24);
    sub_182CBA0(v12, &v27);
    v13 = v24;
    v14 = qword_1C7F2C0;
    v24 = v20;
    LODWORD(v20) = v13;
    v15 = v26;
    v26 = v21;
    v21 = v15;
    v16 = v25 & 1;
    LOBYTE(v15) = BYTE4(v20) & 0xFC | v25 & 2;
    v25 = BYTE4(v20) & 1 | v25 & 0xFC | BYTE4(v20) & 2;
    BYTE4(v20) = v16 | v15;
    v27 = v22;
    v17 = v23;
    v23 = v29;
    v29 = v17;
    LODWORD(v22) = 1;
    LOBYTE(v15) = BYTE4(v22) & 0xFC | v28 & 2;
    v28 = BYTE4(v22) & 1 | BYTE4(v22) & 2 | v28 & 0xFC;
    BYTE4(v22) = v15;
    sub_182CBA0(qword_1C7F2C0, &v24);
    sub_182CBA0(v14, &v27);
  }
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v20);
  sub_182CBA0(v18, &v22);
  return v11;
}

