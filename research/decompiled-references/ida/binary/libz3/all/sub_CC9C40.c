__int64 __fastcall sub_CC9C40(__int64 a1, __int64 a2)
{
  int v2; // eax
  void *v3; // r14
  int v4; // edx
  char v5; // cl
  void *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // si
  __int64 v10; // rax
  void *v11; // r15
  int v12; // eax
  int v13; // edx
  char v14; // cl
  void *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // si
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rdx
  void *v22; // r15
  char v23; // al
  bool v24; // r14
  __int64 result; // rax
  int v26; // edx
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // rdx
  char v30; // si
  __int64 v31; // rax
  void *v32; // rbx
  int v33; // eax
  __int64 v34; // [rsp+0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+8h] [rbp-50h]
  __int64 v36; // [rsp+10h] [rbp-48h] BYREF
  __int64 v37; // [rsp+18h] [rbp-40h]

  v2 = sub_1859960(a2, "diff_neq_max_k", 1024);
  v34 = 0;
  v35 = 0;
  v36 = 1;
  v3 = qword_1C7F2C0;
  v37 = 0;
  if ( v2 < 0 )
    sub_1830C40(qword_1C7F2C0, &v34, (unsigned int)v2);
  else
    LODWORD(v34) = v2;
  sub_182CBA0(v3, &v36);
  v4 = v34;
  v5 = BYTE4(v34);
  v6 = qword_1C7F2C0;
  LODWORD(v34) = *(_DWORD *)(a1 + 104);
  v7 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 104) = v4;
  v8 = v35;
  v35 = v7;
  LOBYTE(v7) = *(_BYTE *)(a1 + 108);
  *(_QWORD *)(a1 + 112) = v8;
  LOBYTE(v8) = v5;
  v5 &= ~2u;
  LOBYTE(v8) = v7 & 0xFC | v8 & 2;
  v9 = *(_BYTE *)(a1 + 124);
  BYTE4(v34) = v7 & 1 | v5 & 0xFE | v7 & 2;
  LODWORD(v7) = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(a1 + 108) = v5 & 1 | v8;
  LODWORD(v36) = v7;
  v10 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v37;
  v37 = v10;
  LOBYTE(v10) = BYTE4(v36);
  *(_DWORD *)(a1 + 120) = 1;
  *(_BYTE *)(a1 + 124) = v9 & 0xFC | v10 & 2;
  BYTE4(v36) = v9 & 1 | v9 & 2 | v10 & 0xFC;
  sub_182CBA0(v6, &v34);
  sub_182CBA0(v6, &v36);
  BYTE4(v34) &= 0xFCu;
  v11 = qword_1C7F2C0;
  BYTE4(v36) &= 0xFCu;
  LODWORD(v34) = 0;
  v35 = 0;
  LODWORD(v36) = 1;
  v37 = 0;
  if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v34, a1 + 104);
  else
    LODWORD(v34) = *(_DWORD *)(a1 + 104);
  if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
  {
    sub_182C690(v11, &v36, a1 + 120);
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 120);
    BYTE4(v36) &= ~1u;
    LODWORD(v36) = v12;
  }
  sub_1831620(qword_1C7F2C0, &v34);
  v13 = v34;
  v14 = BYTE4(v34);
  v15 = qword_1C7F2C0;
  LODWORD(v34) = *(_DWORD *)(a1 + 136);
  v16 = *(_QWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 136) = v13;
  v17 = v35;
  v35 = v16;
  LOBYTE(v16) = *(_BYTE *)(a1 + 140);
  *(_QWORD *)(a1 + 144) = v17;
  LOBYTE(v17) = v14;
  v14 &= ~2u;
  v18 = v16 & 0xFD;
  BYTE4(v34) = v16 & 1 | v14 & 0xFE | v16 & 2;
  LODWORD(v16) = *(_DWORD *)(a1 + 152);
  *(_BYTE *)(a1 + 140) = v14 & 1 | v18 & 0xFE | v17 & 2;
  LODWORD(v17) = v36;
  LODWORD(v36) = v16;
  v19 = *(_QWORD *)(a1 + 160);
  v20 = BYTE4(v36);
  *(_DWORD *)(a1 + 152) = v17;
  v21 = v37;
  v37 = v19;
  LOBYTE(v19) = *(_BYTE *)(a1 + 156);
  *(_QWORD *)(a1 + 160) = v21;
  LOBYTE(v21) = v20;
  v20 &= ~2u;
  BYTE4(v36) = v19 & 1 | v20 & 0xFE | v19 & 2;
  *(_BYTE *)(a1 + 156) = v20 & 1 | v19 & 0xFC | v21 & 2;
  sub_182CBA0(v15, &v34);
  sub_182CBA0(v15, &v36);
  v34 = 0x3FFFFFFF;
  v35 = 0;
  v36 = 1;
  v37 = 0;
  sub_182CBA0(qword_1C7F2C0, &v36);
  v22 = qword_1C7F2C0;
  LODWORD(v36) = 1;
  BYTE4(v36) &= ~1u;
  if ( (*(_BYTE *)(a1 + 124) & 1) == 0 && *(_DWORD *)(a1 + 120) == 1 )
  {
    if ( (*(_BYTE *)(a1 + 108) & 1) != 0 || (v34 & 0x100000000LL) != 0 )
    {
      v33 = sub_182C7B0(qword_1C7F2C0, a1 + 104, &v34);
      v22 = qword_1C7F2C0;
      v24 = v33 < 0;
    }
    else
    {
      v24 = *(_DWORD *)(a1 + 104) < (int)v34;
    }
  }
  else
  {
    v23 = sub_1848D40(qword_1C7F2C0, a1 + 104, &v34);
    v22 = qword_1C7F2C0;
    v24 = v23;
  }
  sub_182CBA0(v22, &v34);
  result = sub_182CBA0(v22, &v36);
  if ( !v24 )
  {
    v34 = 0x3FFFFFFF;
    v35 = 0;
    v36 = 1;
    v37 = 0;
    sub_182CBA0(qword_1C7F2C0, &v36);
    v26 = v34;
    v27 = BYTE4(v34);
    LODWORD(v34) = *(_DWORD *)(a1 + 104);
    v28 = *(_QWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 104) = v26;
    v29 = v35;
    v35 = v28;
    LOBYTE(v28) = *(_BYTE *)(a1 + 108);
    *(_QWORD *)(a1 + 112) = v29;
    LOBYTE(v29) = v27;
    v27 &= ~2u;
    LOBYTE(v29) = v28 & 0xFC | v29 & 2;
    v30 = *(_BYTE *)(a1 + 124);
    BYTE4(v34) = v28 & 1 | v27 & 0xFE | v28 & 2;
    LODWORD(v28) = *(_DWORD *)(a1 + 120);
    *(_BYTE *)(a1 + 108) = v27 & 1 | v29;
    LODWORD(v36) = v28;
    v31 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 128) = v37;
    v37 = v31;
    LOBYTE(v31) = BYTE4(v36);
    *(_DWORD *)(a1 + 120) = 1;
    *(_BYTE *)(a1 + 124) = v30 & 0xFC | v31 & 2;
    v32 = qword_1C7F2C0;
    BYTE4(v36) = v30 & 1 | v30 & 2 | v31 & 0xFC;
    sub_182CBA0(qword_1C7F2C0, &v34);
    return sub_182CBA0(v32, &v36);
  }
  return result;
}

