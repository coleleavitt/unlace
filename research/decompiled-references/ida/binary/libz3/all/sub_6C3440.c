__int64 __fastcall sub_6C3440(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // si
  char v15; // di
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned int v18; // ebx
  int v19; // edx
  __int64 v20; // rdx
  char v21; // di
  char v22; // cl
  char v23; // si
  char v24; // di
  char v25; // si
  __int64 v26; // rdx
  char v27; // cl
  void *v28; // rdi
  __int64 v29; // rsi
  unsigned int i; // ebx
  int v31; // edx
  __int64 v32; // rdx
  char v33; // di
  char v34; // cl
  char v35; // si
  char v36; // di
  char v37; // si
  __int64 v38; // rdx
  char v39; // cl
  void *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  void *v43; // [rsp+0h] [rbp-78h]
  void *v44; // [rsp+0h] [rbp-78h]
  void *v45; // [rsp+0h] [rbp-78h]
  void *v46; // [rsp+0h] [rbp-78h]
  int *v47; // [rsp+8h] [rbp-70h]
  __int64 v50; // [rsp+20h] [rbp-58h] BYREF
  __int64 v51; // [rsp+28h] [rbp-50h]
  __int64 v52; // [rsp+30h] [rbp-48h] BYREF
  __int64 v53; // [rsp+38h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 272);
  if ( v6 )
  {
    v7 = *a4;
    if ( v6 != *a4 )
    {
      sub_6BFE10(v7, a4[1]);
      v7 = *(_QWORD *)(a1 + 272);
      *a4 = v7;
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
    }
    v9 = *(_QWORD *)(v7 + 32);
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    sub_6BFE10(*a3, a3[1]);
    *a3 = v9;
    sub_27B950((__int64)qword_1C7F2C0, a2, (int *)(a1 + 352));
    return 1;
  }
  v11 = *(_QWORD *)(a1 + 232);
  if ( !v11 || !*(_DWORD *)(v11 - 4) )
  {
    v42 = *(_QWORD *)(a1 + 296);
    if ( !v42 || !*(_DWORD *)(v42 - 4) )
      return 0;
  }
  v50 = 1;
  v51 = 0;
  v52 = 1;
  v53 = 0;
  sub_182CBA0(qword_1C7F2C0, &v52);
  LODWORD(v50) = *(_DWORD *)(a1 + 352);
  v12 = *(_QWORD *)(a1 + 360);
  *(_DWORD *)(a1 + 352) = 1;
  v13 = v51;
  v51 = v12;
  LOBYTE(v12) = *(_BYTE *)(a1 + 356);
  *(_QWORD *)(a1 + 360) = v13;
  LOBYTE(v13) = BYTE4(v50) & 1;
  v14 = v12 & 0xFC | BYTE4(v50) & 2;
  v15 = *(_BYTE *)(a1 + 372);
  BYTE4(v50) = v12 & 1 | BYTE4(v50) & 0xFC | v12 & 2;
  LODWORD(v12) = *(_DWORD *)(a1 + 368);
  *(_BYTE *)(a1 + 356) = v14 | v13;
  LODWORD(v52) = v12;
  v16 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 376) = v53;
  v53 = v16;
  LOBYTE(v16) = BYTE4(v52);
  *(_DWORD *)(a1 + 368) = 1;
  *(_BYTE *)(a1 + 372) = v15 & 0xFC | v16 & 2;
  BYTE4(v52) = v15 & 1 | v15 & 2 | v16 & 0xFC;
  sub_25A130((char *)&v50);
  v17 = *(_QWORD *)(a1 + 248);
  if ( v17 )
  {
    v18 = 0;
    v47 = (int *)(a1 + 352);
    do
    {
      if ( v18 >= *(_DWORD *)(v17 - 4) )
        break;
      BYTE4(v50) &= 0xFCu;
      BYTE4(v52) &= 0xFCu;
      v43 = qword_1C7F2C0;
      LODWORD(v50) = 0;
      v51 = 0;
      LODWORD(v52) = 1;
      v53 = 0;
      sub_1836B00(qword_1C7F2C0, 32LL * v18 + v17, v47, &v50);
      sub_182CBA0(v43, &v52);
      v19 = *(_DWORD *)(a1 + 352);
      ++v18;
      *(_DWORD *)(a1 + 352) = v50;
      LODWORD(v50) = v19;
      v20 = *(_QWORD *)(a1 + 360);
      *(_QWORD *)(a1 + 360) = v51;
      v51 = v20;
      v21 = *(_BYTE *)(a1 + 356);
      LOBYTE(v20) = v21 & 2;
      v21 &= ~2u;
      v22 = BYTE4(v50) & 1;
      LOBYTE(v20) = v21 & 1 | BYTE4(v50) & 0xFC | v20 & 0xFE;
      v23 = v21 & 0xFE | BYTE4(v50) & 2;
      v24 = *(_BYTE *)(a1 + 372);
      BYTE4(v50) = v20;
      LODWORD(v20) = *(_DWORD *)(a1 + 368);
      *(_BYTE *)(a1 + 356) = v23 | v22;
      LODWORD(v52) = v20;
      v25 = v24 & 0xFD;
      v26 = *(_QWORD *)(a1 + 376);
      *(_QWORD *)(a1 + 376) = v53;
      v53 = v26;
      LOBYTE(v26) = BYTE4(v52);
      *(_DWORD *)(a1 + 368) = 1;
      v27 = v26;
      LOBYTE(v26) = v24 & 2 | v26 & 0xFC;
      v28 = qword_1C7F2C0;
      v44 = qword_1C7F2C0;
      *(_BYTE *)(a1 + 372) = v25 & 0xFE | v27 & 2;
      BYTE4(v52) = v25 & 1 | v26;
      sub_182CBA0(v28, &v50);
      sub_182CBA0(v44, &v52);
      v17 = *(_QWORD *)(a1 + 248);
    }
    while ( v17 );
  }
  else
  {
    v47 = (int *)(a1 + 352);
  }
  v29 = *(_QWORD *)(a1 + 312);
  for ( i = 0; v29; v29 = *(_QWORD *)(a1 + 312) )
  {
    if ( i >= *(_DWORD *)(v29 - 4) )
      break;
    BYTE4(v50) &= 0xFCu;
    BYTE4(v52) &= 0xFCu;
    v45 = qword_1C7F2C0;
    LODWORD(v50) = 0;
    v51 = 0;
    LODWORD(v52) = 1;
    v53 = 0;
    sub_1836B00(qword_1C7F2C0, 32LL * i + v29, v47, &v50);
    sub_182CBA0(v45, &v52);
    v31 = *(_DWORD *)(a1 + 352);
    ++i;
    *(_DWORD *)(a1 + 352) = v50;
    LODWORD(v50) = v31;
    v32 = *(_QWORD *)(a1 + 360);
    *(_QWORD *)(a1 + 360) = v51;
    v51 = v32;
    v33 = *(_BYTE *)(a1 + 356);
    LOBYTE(v32) = v33 & 2;
    v33 &= ~2u;
    v34 = BYTE4(v50) & 1;
    LOBYTE(v32) = v33 & 1 | BYTE4(v50) & 0xFC | v32 & 0xFE;
    v35 = v33 & 0xFE | BYTE4(v50) & 2;
    v36 = *(_BYTE *)(a1 + 372);
    BYTE4(v50) = v32;
    LODWORD(v32) = *(_DWORD *)(a1 + 368);
    *(_BYTE *)(a1 + 356) = v35 | v34;
    LODWORD(v52) = v32;
    v37 = v36 & 0xFD;
    v38 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 376) = v53;
    v53 = v38;
    LOBYTE(v38) = BYTE4(v52);
    *(_DWORD *)(a1 + 368) = 1;
    v39 = v38;
    LOBYTE(v38) = v36 & 2 | v38 & 0xFC;
    v40 = qword_1C7F2C0;
    v46 = qword_1C7F2C0;
    *(_BYTE *)(a1 + 372) = v37 & 0xFE | v39 & 2;
    BYTE4(v52) = v37 & 1 | v38;
    sub_182CBA0(v40, &v50);
    sub_182CBA0(v46, &v52);
  }
  sub_3EC020((__int64)&v50, (__int64)v47);
  if ( (v50 & 0x100000000LL) != 0 || (_DWORD)v50 != 1 || (v52 & 0x100000000LL) != 0 || (_DWORD)v52 != 1 )
  {
    sub_25A130((char *)&v50);
    sub_6C2570(*(__int64 **)a1, (__int64)v47, (int)a3, a1 + 272);
    if ( *a4 != *(_QWORD *)(a1 + 272) )
    {
      sub_6BFE10(*a4, a4[1]);
      v41 = *(_QWORD *)(a1 + 272);
      *a4 = v41;
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
    }
    sub_27B950((__int64)qword_1C7F2C0, a2, v47);
    return 1;
  }
  sub_25A130((char *)&v50);
  return 0;
}

