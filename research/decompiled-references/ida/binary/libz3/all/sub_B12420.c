__int64 __fastcall sub_B12420(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // r12
  unsigned int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r12
  _DWORD *v14; // rsi
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // r15
  int *v18; // rbx
  __int64 v19; // rax
  int *v20; // r13
  int v21; // r12d
  void *v22; // rbp
  int *v23; // rsi
  unsigned __int64 v24; // rax
  int *v25; // r15
  char v26; // r8
  __int64 v27; // rbp
  char v28; // bl
  int v29; // r12d
  char v30; // al
  bool v31; // si
  char v32; // di
  char v33; // al
  __int64 v34; // r10
  int v35; // r11d
  char v36; // r9
  bool v37; // di
  int *v38; // rax
  int v39; // ecx
  char v40; // r8
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rdx
  char v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  char v47; // r8
  int *v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  char v51; // r8
  __int64 v52; // rax
  char v53; // si
  char v54; // si
  void *v55; // rbx
  char v56; // cl
  char v57; // cl
  __int64 v58; // r13
  unsigned int v59; // r14d
  int *v60; // rdx
  int *v61; // rsi
  void *v62; // rdi
  int *v63; // rdx
  __int64 v64; // rsi
  __int64 result; // rax
  __int64 v66; // r15
  __int64 v67; // r14
  __int64 v68; // rdx
  __int64 v69; // rbx
  unsigned int v70; // r12d
  __int64 v71; // rdx
  __int64 v72; // rcx
  int *v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // r12
  __int64 v76; // rdx
  __int64 v77; // rax
  unsigned int v78; // edx
  __int64 v79; // rdx
  char v80; // si
  __int64 v81; // rdx
  char v82; // si
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  int *v89; // r14
  int *v90; // rbx
  char *v91; // rdi
  __int64 v92; // r13
  __int64 v93; // rcx
  __int64 v94; // r12
  char *v95; // rdi
  int *v96; // [rsp+8h] [rbp-90h]
  void *v97; // [rsp+8h] [rbp-90h]
  void *v98; // [rsp+10h] [rbp-88h]
  int *v99; // [rsp+20h] [rbp-78h]
  int **v100; // [rsp+28h] [rbp-70h]
  unsigned int v101; // [rsp+30h] [rbp-68h] BYREF
  char v102; // [rsp+34h] [rbp-64h]
  __int64 v103; // [rsp+38h] [rbp-60h] BYREF
  __int64 v104; // [rsp+40h] [rbp-58h]
  __int64 v105; // [rsp+48h] [rbp-50h] BYREF
  __int64 v106; // [rsp+50h] [rbp-48h]

  v2 = a1;
  v3 = *a1;
  if ( !*a1 )
    goto LABEL_52;
  v5 = 0;
  if ( *(_DWORD *)(v3 - 4) )
  {
    while ( 1 )
    {
      v6 = 40LL * v5;
      v7 = v3 + v6;
      v8 = *(_DWORD *)(v3 + v6);
      if ( (v8 & 1) != 0 )
      {
        *(_DWORD *)v7 = v8 ^ 1;
        if ( (*(_BYTE *)(a2 + 20) & 1) != 0
          || *(_DWORD *)(a2 + 16) != 1
          || (*(_BYTE *)(v7 + 28) & 1) != 0
          || *(_DWORD *)(v7 + 24) != 1 )
        {
          sub_1852000(qword_1C7F2C0, a2, v7 + 8);
        }
        else
        {
          v98 = qword_1C7F2C0;
          sub_1832A70(qword_1C7F2C0, a2, v7 + 8);
          sub_182CBA0(v98, a2 + 16);
          *(_BYTE *)(a2 + 20) &= ~1u;
          *(_DWORD *)(a2 + 16) = 1;
        }
        v76 = *a1;
        v101 = 0;
        v102 &= 0xFCu;
        BYTE4(v104) &= 0xFCu;
        v103 = 0;
        LODWORD(v104) = 1;
        v105 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v101, (int *)(v6 + v76 + 8));
        sub_1831620(qword_1C7F2C0, &v101);
        v77 = v6 + *a1;
        v78 = *(_DWORD *)(v77 + 8);
        *(_DWORD *)(v77 + 8) = v101;
        v101 = v78;
        v79 = *(_QWORD *)(v77 + 16);
        *(_QWORD *)(v77 + 16) = v103;
        v103 = v79;
        LOBYTE(v79) = *(_BYTE *)(v77 + 12);
        *(_BYTE *)(v77 + 12) = v102 & 2 | v79 & 0xFD;
        v102 = v79 & 2 | v102 & 0xFD;
        v80 = *(_BYTE *)(v77 + 12);
        *(_BYTE *)(v77 + 12) = v102 & 1 | v80 & 0xFE;
        v102 = v80 & 1 | v102 & 0xFE;
        LODWORD(v79) = *(_DWORD *)(v77 + 24);
        *(_DWORD *)(v77 + 24) = v104;
        LODWORD(v104) = v79;
        v81 = *(_QWORD *)(v77 + 32);
        *(_QWORD *)(v77 + 32) = v105;
        v105 = v81;
        LOBYTE(v81) = *(_BYTE *)(v77 + 28);
        *(_BYTE *)(v77 + 28) = BYTE4(v104) & 2 | v81 & 0xFD;
        BYTE4(v104) = v81 & 2 | BYTE4(v104) & 0xFD;
        v82 = *(_BYTE *)(v77 + 28) & 1;
        *(_BYTE *)(v77 + 28) = BYTE4(v104) & 1 | *(_BYTE *)(v77 + 28) & 0xFE;
        BYTE4(v104) = v82 | BYTE4(v104) & 0xFE;
        sub_25A130((char *)&v101);
        v3 = *a1;
        if ( !*a1 )
          break;
      }
      if ( ++v5 >= *(_DWORD *)(v3 - 4) )
        goto LABEL_5;
    }
LABEL_52:
    result = 0;
    v67 = 40;
    v66 = 0;
    LODWORD(v58) = 1;
LABEL_37:
    while ( !result || *(_DWORD *)(result - 8) < (unsigned int)v58 )
    {
LABEL_36:
      sub_B15E00(v2);
      result = *v2;
    }
    *(_DWORD *)(result - 4) = v58;
    v68 = result + v66;
    if ( v66 != v67 )
    {
      do
      {
        *(_OWORD *)(v68 + 24) = 0;
        v68 += 40;
        *(_OWORD *)(v68 - 32) = 0;
        *(_DWORD *)(v68 - 40) = -2;
        *(_BYTE *)(v68 - 28) = 0;
        *(_DWORD *)(v68 - 16) = 1;
        *(_BYTE *)(v68 - 12) = 0;
      }
      while ( v68 != result + v67 );
    }
    goto LABEL_41;
  }
LABEL_5:
  v9 = *(unsigned int *)(v3 - 4);
  if ( !(_DWORD)v9 )
    goto LABEL_15;
  v10 = v3;
  v11 = 0;
  v12 = 40 * v9;
  v13 = 0;
  do
  {
    while ( 1 )
    {
      v15 = v10 + v11;
      v16 = *(_DWORD *)(v10 + v11);
      if ( v16 != dword_1C7ED24 )
      {
        if ( v16 != dword_1C7ED20 )
        {
          v14 = (_DWORD *)(v10 + 40 * v13);
          v13 = (unsigned int)(v13 + 1);
          *v14 = v16;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)(v14 + 2), (int *)(v15 + 8));
          v10 = *a1;
        }
        goto LABEL_9;
      }
      if ( (*(_BYTE *)(a2 + 20) & 1) != 0
        || *(_DWORD *)(a2 + 16) != 1
        || (*(_BYTE *)(v15 + 28) & 1) != 0
        || *(_DWORD *)(v15 + 24) != 1 )
      {
        break;
      }
      v97 = qword_1C7F2C0;
      sub_1832A70(qword_1C7F2C0, a2, v15 + 8);
      sub_182CBA0(v97, a2 + 16);
      *(_BYTE *)(a2 + 20) &= ~1u;
      v10 = *a1;
      *(_DWORD *)(a2 + 16) = 1;
LABEL_9:
      v11 += 40;
      if ( v11 == v12 )
        goto LABEL_14;
    }
    v11 += 40;
    sub_1852000(qword_1C7F2C0, a2, v15 + 8);
    v10 = *a1;
  }
  while ( v11 != v12 );
LABEL_14:
  LODWORD(v9) = v13;
  v3 = v10;
  if ( !v10 )
    goto LABEL_52;
LABEL_15:
  v17 = 40LL * (unsigned int)v9;
  v18 = (int *)(v3 + v17);
  v19 = 40LL * *(unsigned int *)(v3 - 4);
  v20 = (int *)(v3 + v19);
  if ( v17 != v19 )
  {
    v21 = v9;
    do
    {
      v22 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v18 + 2);
      v23 = v18 + 6;
      v18 += 10;
      sub_182CBA0(v22, v23);
    }
    while ( v20 != v18 );
    v2 = a1;
    LODWORD(v9) = v21;
    v3 = *a1;
    v18 = (int *)(*a1 + v17);
  }
  *(_DWORD *)(v3 - 4) = v9;
  if ( (int *)v3 == v18 )
    goto LABEL_30;
  if ( !v17 )
  {
    sub_B162C0(v3, v18, -2);
    goto LABEL_68;
  }
  _BitScanReverse64(&v24, 0xCCCCCCCCCCCCCCCDLL * (v17 >> 3));
  sub_B162C0(v3, v18, 2LL * (int)v24);
  if ( (unsigned __int64)v17 <= 0x280 )
  {
LABEL_68:
    sub_B03E00(v3, v18);
    v3 = *v2;
    v18 = (int *)*v2;
    goto LABEL_29;
  }
  v25 = (int *)(v3 + 640);
  sub_B03E00(v3, (int *)(v3 + 640));
  v99 = v18;
  v100 = (int **)v2;
  do
  {
    v26 = *((_BYTE *)v25 + 12);
    v27 = *((_QWORD *)v25 + 2);
    v101 = *v25;
    v28 = v26 & 1;
    v104 = v27;
    v29 = v25[2];
    v30 = BYTE4(v103) & 0xFC;
    v31 = (v26 & 2) != 0;
    *((_QWORD *)v25 + 2) = 0;
    LODWORD(v103) = v29;
    BYTE4(v103) = (2 * v31) | v26 & 1 | v30;
    v32 = *((_BYTE *)v25 + 28);
    v33 = BYTE4(v105);
    v34 = *((_QWORD *)v25 + 4);
    *((_QWORD *)v25 + 4) = 0;
    v35 = v25[6];
    v36 = v32 & 1;
    v37 = (v32 & 2) != 0;
    v106 = v34;
    LODWORD(v105) = v35;
    BYTE4(v105) = (2 * v37) | v36 | v33 & 0xFC;
    v38 = v25 - 10;
    if ( v101 >= *(v25 - 10) )
    {
      v48 = v25;
      v49 = 0;
    }
    else
    {
      v96 = v25;
      do
      {
        v39 = v38[2];
        v40 = *((_BYTE *)v38 + 12);
        v38[10] = *v38;
        v41 = v38[12];
        v38[12] = v39;
        v42 = *((_QWORD *)v38 + 2);
        v40 &= ~2u;
        v38[2] = v41;
        v43 = *((_QWORD *)v38 + 7);
        *((_QWORD *)v38 + 7) = v42;
        LOBYTE(v42) = *((_BYTE *)v38 + 12);
        *((_QWORD *)v38 + 2) = v43;
        v44 = *((_BYTE *)v38 + 52);
        LOBYTE(v43) = v44 & 2;
        v44 &= ~2u;
        *((_BYTE *)v38 + 12) = v44 & 1 | (v40 | v43) & 0xFE;
        LODWORD(v43) = v38[16];
        *((_BYTE *)v38 + 52) = v40 & 1 | v44 & 0xFE | v42 & 2;
        LODWORD(v42) = v38[6];
        v38[6] = v43;
        v45 = *((_QWORD *)v38 + 9);
        v38[16] = v42;
        v46 = *((_QWORD *)v38 + 4);
        v47 = *((_BYTE *)v38 + 28);
        *((_QWORD *)v38 + 4) = v45;
        LOBYTE(v45) = *((_BYTE *)v38 + 68);
        *((_QWORD *)v38 + 9) = v46;
        v47 &= ~2u;
        LOBYTE(v46) = v45 & 0xFD | v38[7] & 2;
        *((_BYTE *)v38 + 28) = v45 & 1 | v47 & 0xFE | v45 & 2;
        v48 = v38;
        v38 -= 10;
        *((_BYTE *)v38 + 108) = v47 & 1 | v46 & 0xFE;
      }
      while ( v101 < *(v48 - 10) );
      v25 = v96;
      v49 = *((_QWORD *)v48 + 4);
    }
    v25 += 10;
    *v48 = v101;
    v50 = v48[2];
    v51 = 2 * v31;
    v48[2] = v29;
    LODWORD(v103) = v50;
    v52 = *((_QWORD *)v48 + 2);
    *((_QWORD *)v48 + 2) = v27;
    v104 = v52;
    v53 = *((_BYTE *)v48 + 12);
    *((_BYTE *)v48 + 12) = v51 | v53 & 0xFD;
    BYTE4(v103) = v53 & 2 | BYTE4(v103) & 0xFD;
    v54 = *((_BYTE *)v48 + 12);
    LOBYTE(v52) = v28 | v54 & 0xFE;
    v55 = qword_1C7F2C0;
    *((_BYTE *)v48 + 12) = v52;
    BYTE4(v103) = v54 & 1 | BYTE4(v103) & 0xFE;
    LODWORD(v52) = v48[6];
    v48[6] = v35;
    LODWORD(v105) = v52;
    *((_QWORD *)v48 + 4) = v34;
    v106 = v49;
    v56 = *((_BYTE *)v48 + 28);
    *((_BYTE *)v48 + 28) = (2 * v37) | v56 & 0xFD;
    BYTE4(v105) = v56 & 2 | BYTE4(v105) & 0xFD;
    v57 = v48[7] & 1;
    *((_BYTE *)v48 + 28) = v36 | v48[7] & 0xFE;
    BYTE4(v105) = v57 | BYTE4(v105) & 0xFE;
    sub_182CBA0(v55, &v103);
    sub_182CBA0(v55, &v105);
  }
  while ( v25 != v99 );
  v2 = (__int64 *)v100;
  v18 = *v100;
  v3 = (__int64)*v100;
LABEL_29:
  if ( !v3 )
    goto LABEL_52;
LABEL_30:
  LODWORD(v58) = 0;
  v59 = 1;
  while ( v59 < *(v18 - 1) )
  {
    while ( 1 )
    {
      v60 = &v18[10 * v59];
      v61 = &v18[10 * (unsigned int)v58];
      v62 = qword_1C7F2C0;
      if ( *v61 != *v60 )
        break;
      ++v59;
      sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(v61 + 2), (__int64)(v60 + 2), (__int64)(v61 + 2));
      v3 = *v2;
      v18 = (int *)*v2;
      if ( !*v2 )
        goto LABEL_34;
      if ( v59 >= *(v18 - 1) )
        goto LABEL_65;
    }
    v63 = v60 + 2;
    ++v59;
    v58 = (unsigned int)(v58 + 1);
    v64 = (__int64)&v18[10 * v58 + 2];
    *(_DWORD *)(v64 - 8) = *(v63 - 2);
    sub_27B950((__int64)v62, v64, v63);
    v18 = (int *)*v2;
    v3 = *v2;
    if ( !*v2 )
    {
LABEL_34:
      result = 0;
      LODWORD(v58) = v58 + 1;
      if ( !(_DWORD)v58 )
        return result;
      v66 = 0;
      v67 = 40LL * (unsigned int)v58;
      goto LABEL_36;
    }
  }
LABEL_65:
  v58 = (unsigned int)(v58 + 1);
  v86 = (unsigned int)*(v18 - 1);
  v87 = 40 * v58;
  v88 = 40 * v86;
  v67 = 40 * v58;
  v66 = 40 * v86;
  if ( (unsigned int)v86 < (unsigned int)v58 )
  {
    result = v3;
    goto LABEL_37;
  }
  v89 = &v18[(unsigned __int64)v87 / 4];
  v90 = &v18[(unsigned __int64)v88 / 4];
  if ( v87 != v88 )
  {
    do
    {
      v91 = (char *)(v89 + 2);
      v89 += 10;
      sub_25A130(v91);
    }
    while ( v90 != v89 );
    v3 = *v2;
  }
  *(_DWORD *)(v3 - 4) = v58;
  result = v3;
LABEL_41:
  v69 = 0;
  v70 = 0;
  while ( v70 < *(_DWORD *)(result - 4) )
  {
    v71 = result + 40LL * v70;
    if ( !*(_DWORD *)(v71 + 8) )
      goto LABEL_61;
    if ( v70 != (_DWORD)v69 )
    {
      v72 = (unsigned int)v69;
      v73 = (int *)(v71 + 8);
      v69 = (unsigned int)(v69 + 1);
      v74 = result + 40 * v72 + 8;
      *(_DWORD *)(v74 - 8) = *(v73 - 2);
      sub_27B950((__int64)qword_1C7F2C0, v74, v73);
      result = *v2;
      if ( !*v2 )
      {
        if ( !(_DWORD)v69 )
          return result;
        v75 = 0;
        goto LABEL_56;
      }
LABEL_61:
      ++v70;
      continue;
    }
    v69 = ++v70;
  }
  v83 = *(unsigned int *)(result - 4);
  v84 = 40 * v83;
  v75 = 40 * v83;
  if ( (unsigned int)v83 < (unsigned int)v69 )
  {
LABEL_56:
    while ( !result || *(_DWORD *)(result - 8) < (unsigned int)v69 )
    {
      sub_B15E00(v2);
      result = *v2;
    }
    *(_DWORD *)(result - 4) = v69;
    v85 = result + v75;
    result += 40 * v69;
    if ( 40 * v69 != v75 )
    {
      do
      {
        *(_OWORD *)(v85 + 24) = 0;
        v85 += 40;
        *(_OWORD *)(v85 - 32) = 0;
        *(_DWORD *)(v85 - 40) = -2;
        *(_BYTE *)(v85 - 28) = 0;
        *(_DWORD *)(v85 - 16) = 1;
        *(_BYTE *)(v85 - 12) = 0;
      }
      while ( result != v85 );
    }
    return result;
  }
  v92 = result + v84;
  v93 = 40LL * (unsigned int)v69;
  v94 = result + v93;
  if ( v93 != v84 )
  {
    do
    {
      v95 = (char *)(v94 + 8);
      v94 += 40;
      sub_25A130(v95);
    }
    while ( v92 != v94 );
    result = *v2;
  }
  *(_DWORD *)(result - 4) = v69;
  return result;
}

