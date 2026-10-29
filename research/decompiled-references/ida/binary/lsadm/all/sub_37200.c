__int64 __fastcall sub_37200(unsigned int a1, _BYTE *a2, double a3)
{
  __int64 v3; // rax
  int v4; // r15d
  size_t v5; // rax
  int v6; // edx
  unsigned int v7; // r12d
  _QWORD *v8; // rcx
  unsigned int v9; // esi
  int v10; // edi
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // r10
  __int64 v14; // rbx
  unsigned __int128 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned __int128 v18; // rax
  __int64 v19; // r8
  __int64 *v20; // r15
  _BYTE *v21; // r8
  __int64 v22; // rcx
  unsigned __int128 v23; // kr00_16
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r11
  unsigned int v26; // r10d
  __int64 v27; // rdi
  unsigned int v28; // edx
  int v29; // eax
  __int64 v30; // rdi
  unsigned int v31; // esi
  __int64 v32; // rcx
  __int64 *v33; // rcx
  int v34; // eax
  __int64 v35; // r12
  char v36; // bp
  int v37; // ebx
  __int64 v38; // r9
  unsigned __int128 v39; // rax
  __int64 v40; // r12
  __int64 v41; // r13
  unsigned __int128 v42; // rax
  __int64 *v43; // r10
  unsigned __int64 v44; // r8
  unsigned __int128 v45; // kr10_16
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // r13
  unsigned int v48; // r12d
  _BYTE *v49; // rdx
  __int16 v50; // ax
  __int64 v51; // rax
  __int64 v52; // rax
  size_t v53; // rdx
  unsigned int v54; // ebx
  __int64 v55; // rdi
  unsigned int v56; // r15d
  _WORD *v58; // r8
  unsigned int v59; // ebx
  __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // r10
  unsigned int v63; // esi
  unsigned int v64; // r9d
  int v65; // edx
  unsigned int v66; // esi
  __int64 v67; // r13
  unsigned int v68; // r9d
  unsigned int v69; // esi
  unsigned int v70; // edi
  unsigned int v71; // eax
  unsigned int v72; // r9d
  int v73; // edx
  unsigned int v74; // ecx
  unsigned int v75; // eax
  unsigned int v76; // ecx
  int v77; // r8d
  unsigned int v78; // ecx
  __int64 v79; // rsi
  char *v80; // rdx
  char v81; // al
  int v82; // eax
  int v83; // ecx
  _BYTE *v84; // rcx
  unsigned int v85; // r10d
  unsigned int v86; // edx
  __int64 v87; // rbp
  unsigned int v88; // r9d
  __int64 v89; // r10
  unsigned int v90; // edx
  _BYTE *v91; // rax
  __int64 v92; // rax
  unsigned int v93; // edx
  bool v94; // [rsp+0h] [rbp-8Ch]
  unsigned int v95; // [rsp+0h] [rbp-8Ch]
  __int64 *v97; // [rsp+Ch] [rbp-80h]
  unsigned int v98; // [rsp+14h] [rbp-78h]
  __int64 v99; // [rsp+14h] [rbp-78h]
  unsigned int v100; // [rsp+24h] [rbp-68h]
  char v101; // [rsp+24h] [rbp-68h]
  int v102; // [rsp+28h] [rbp-64h]
  unsigned int v103; // [rsp+28h] [rbp-64h]
  unsigned int v104; // [rsp+2Ch] [rbp-60h]
  __int64 *v105; // [rsp+2Ch] [rbp-60h]
  __int64 v106; // [rsp+34h] [rbp-58h]
  __int64 v107; // [rsp+44h] [rbp-48h]
  int n_4; // [rsp+50h] [rbp-3Ch]

  v107 = *(_QWORD *)&a3 & 0xFFFFFFFFFFFFFLL;
  v3 = (*(_QWORD *)&a3 >> 52) & 0x7FFLL;
  if ( (_DWORD)v3 == 2047 || (v94 = v107 == 0 && (_DWORD)v3 == 0) )
    abort();
  if ( !(_DWORD)v3 )
  {
    if ( a3 >= 0.0 )
    {
      *a2 = 48;
      if ( !a1 )
      {
        v4 = 1;
        v27 = 1;
        v5 = 0;
        goto LABEL_65;
      }
      a2[1] = 46;
      v4 = 2;
      goto LABEL_7;
    }
    *(_WORD *)a2 = 12333;
    if ( a1 )
    {
      a2[2] = 46;
      v4 = 3;
LABEL_7:
      v5 = a1;
      v100 = a1 / 9;
      v98 = a1 / 9 + 1;
      if ( v98 > 0x22 )
      {
        v102 = -1074;
        v6 = 67;
        v7 = 34;
LABEL_9:
        v8 = &a2[v4];
        v4 += 9 * v7;
        *v8 = 0x3030303030303030LL;
        *(_QWORD *)((char *)v8 + 9 * v7 - 8) = 0x3030303030303030LL;
        v9 = v7;
        memset(
          (void *)((unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL),
          0x30u,
          8LL * ((9 * v7 + (_DWORD)v8 - (((_DWORD)v8 + 8) & 0xFFFFFFF8)) >> 3));
        goto LABEL_10;
      }
      goto LABEL_25;
    }
    v4 = 2;
    v5 = 0;
LABEL_25:
    v27 = v4;
LABEL_65:
    memset(&a2[v27], 48, v5);
    return v4 + a1;
  }
  v107 |= 0x10000000000000uLL;
  v4 = 0;
  v102 = v3 - 1075;
  if ( a3 < 0.0 )
  {
    v4 = 1;
    *a2 = 45;
  }
  if ( v102 < -52 )
  {
    v82 = v4 + 1;
    a2[v4] = 48;
    if ( a1 )
    {
      v4 += 2;
      a2[v82] = 46;
    }
    else
    {
      ++v4;
    }
    goto LABEL_94;
  }
  if ( v102 < 0 )
  {
    v29 = 0;
    v32 = 3;
    v30 = 0;
    v31 = 1;
  }
  else
  {
    v28 = v3 - 1060;
    v29 = (v3 - 1060) & 0xFFFFFFF0;
    v30 = *((unsigned __int16 *)qword_6AE20 + (v28 >> 4));
    v31 = (((unsigned int)(78913 * v29) >> 18) + 25) / 9 - 1;
    v32 = 3LL * (int)(v31 + v30);
  }
  v33 = &qword_63B60[v32];
  v34 = v29 - v102;
  v35 = v33[1];
  v36 = v34 + 120;
  v37 = v34 + 128;
  v99 = v107 << 8;
  v38 = ((unsigned __int64)*v33 * (unsigned __int128)(unsigned __int64)(v107 << 8)) >> 64;
  v39 = (unsigned __int64)v35 * (unsigned __int128)(unsigned __int64)(v107 << 8);
  v40 = v35 * (v107 << 8);
  v41 = *((_QWORD *)&v39 + 1);
  v42 = (unsigned __int64)(v107 << 8) * (unsigned __int128)(unsigned __int64)v33[2];
  if ( v37 <= 127 )
LABEL_136:
    __assert_fail(
      "j >= 128",
      "../../../../../libstdc++-v3/src/nonshared17/../c++17/ryu/d2fixed.c",
      0x63u,
      "uint32_t {anonymous}::ryu::mulShift_mod1e9(uint64_t, const uint64_t*, int32_t)");
  if ( v37 > 180 )
LABEL_135:
    __assert_fail(
      "j <= 180",
      "../../../../../libstdc++-v3/src/nonshared17/../c++17/ryu/d2fixed.c",
      0x64u,
      "uint32_t {anonymous}::ryu::mulShift_mod1e9(uint64_t, const uint64_t*, int32_t)");
  v101 = v36 - 120;
  v43 = &qword_63B60[3 * v30 + 3 * (int)v31];
  v97 = &qword_63B60[3 * v30];
  while ( 1 )
  {
    v45 = v42 + (unsigned __int64)__CFADD__(v38, v40) + v41;
    v46 = ((unsigned __int64)v45 >> v101) | (*((_QWORD *)&v45 + 1) << (64 - v101));
    v47 = *((_QWORD *)&v45 + 1) >> v101;
    if ( (v101 & 0x40) != 0 )
    {
      v46 = *((_QWORD *)&v45 + 1) >> v101;
      v47 = 0;
    }
    v48 = v46
        - 1000000000
        * ((unsigned __int64)(((0x89705F4136B4A597LL * (unsigned __int128)v46) >> 64)
                            + __CFADD__(
                                0x89705F4136B4A597LL * v46,
                                (__PAIR128__(v47, v46) * 0x31680A88F8953031LL) >> 64)
                            + ((((0x31680A88F8953031LL * (unsigned __int128)v46) >> 64)
                              + 0x31680A88F8953031LL * (unsigned __int128)v47) >> 64)
                            - 0x768FA0BEC94B5A69LL * v47) >> 29);
    if ( v94 )
      break;
    if ( !v48 )
      goto LABEL_35;
    if ( v48 > 0x3B9AC9FF )
      sub_36E50(qword_6D860);
    v58 = &a2[v4];
    if ( v48 > 0x5F5E0FF )
    {
      v60 = 9;
      v59 = 9;
LABEL_70:
      LODWORD(v61) = 0;
      v105 = v43;
      do
      {
        v62 = v60 - (unsigned int)v61;
        v63 = v48 % 0x2710;
        v64 = v48;
        v48 /= 0x2710u;
        *(_WORD *)((char *)v58 + v62 - 2) = *((_WORD *)qword_6D860 + v63 % 0x64);
        *(_WORD *)((char *)v58 + v62 - 4) = *((_WORD *)qword_6D860 + v63 / 0x64);
        v65 = v61;
        v61 = (unsigned int)(v61 + 4);
      }
      while ( v64 > 0x5F5E0FF );
      v43 = v105;
      if ( v64 > 0xF423F )
      {
        v66 = v48;
        v67 = v60 - 2 - v61;
        v61 = (unsigned int)(v65 + 6);
        v68 = 100 * (v48 / 0x64);
        v48 /= 0x64u;
        *(_WORD *)((char *)v58 + v67) = *((_WORD *)qword_6D860 + v66 - v68);
      }
      if ( v48 > 9 )
        goto LABEL_75;
      goto LABEL_60;
    }
    if ( v48 > 0x98967F )
    {
      v60 = 8;
      v59 = 8;
      goto LABEL_70;
    }
    if ( v48 > 0xF423F )
    {
      v60 = 7;
      v59 = 7;
      goto LABEL_70;
    }
    if ( v48 > 0x1869F )
    {
      v60 = 6;
      v59 = 6;
      goto LABEL_70;
    }
    if ( v48 > 0x270F )
    {
      v60 = 5;
      v59 = 5;
      goto LABEL_70;
    }
    if ( v48 > 0x3E7 )
    {
      v90 = v48;
      v59 = 4;
      v48 /= 0x64u;
      v58[1] = *((_WORD *)qword_6D860 + v90 - 100 * v48);
      v61 = 2;
LABEL_75:
      v58 = (_WORD *)((char *)v58 + v59 - 2LL - v61);
LABEL_76:
      *v58 = *((_WORD *)qword_6D860 + v48);
      goto LABEL_61;
    }
    if ( v48 > 0x63 )
    {
      v93 = v48;
      v59 = 3;
      v48 /= 0x64u;
      *(_WORD *)((char *)v58 + 1) = *((_WORD *)qword_6D860 + v93 - 100 * v48);
    }
    else
    {
      v59 = 1;
      if ( v48 > 9 )
      {
        v59 = 2;
        goto LABEL_76;
      }
    }
LABEL_60:
    *(_BYTE *)v58 = v48 + 48;
LABEL_61:
    v94 = 1;
    v4 += v59;
LABEL_35:
    if ( v43 == v97 )
      goto LABEL_43;
LABEL_36:
    v44 = *(v43 - 3);
    v43 -= 3;
    v38 = (v44 * (unsigned __int128)(unsigned __int64)v99) >> 64;
    v40 = v43[1] * v99;
    v41 = ((unsigned __int64)v43[1] * (unsigned __int128)(unsigned __int64)v99) >> 64;
    v42 = (unsigned __int64)v99 * (unsigned __int128)(unsigned __int64)v43[2];
  }
  v49 = &a2[v4];
  if ( v48 )
  {
    *(_WORD *)(v49 + 7) = *((_WORD *)qword_6D860 + v48 % 0x2710 % 0x64);
    *(_WORD *)(v49 + 5) = *((_WORD *)qword_6D860 + v48 % 0x2710 / 0x64);
    *(_WORD *)(v49 + 3) = *((_WORD *)qword_6D860 + v48 / 0x2710 % 0x2710 % 0x64);
    v50 = *((_WORD *)qword_6D860 + v48 / 0x2710 % 0x2710 / 0x64);
    *v49 = v48 / 0x2710 / 0x2710 + 48;
    *(_WORD *)(v49 + 1) = v50;
  }
  else
  {
    v49[8] = 48;
    *(_QWORD *)v49 = 0x3030303030303030LL;
  }
  v4 += 9;
  if ( v43 != v97 )
    goto LABEL_36;
LABEL_43:
  if ( !v94 )
  {
    v51 = v4++;
    a2[v51] = 48;
  }
  if ( a1 )
  {
    v52 = v4++;
    a2[v52] = 46;
  }
  if ( v102 >= 0 )
  {
    v53 = a1;
    v54 = a1;
    goto LABEL_49;
  }
LABEL_94:
  v5 = a1;
  v6 = -((v102 + 15) >> 4);
  v100 = a1 / 9;
  v7 = *((unsigned __int8 *)qword_63A60 + v6);
  v98 = a1 / 9 + 1;
  if ( v7 >= v98 )
    goto LABEL_25;
  if ( (_BYTE)v7 )
    goto LABEL_9;
  v9 = 0;
  v7 = 0;
LABEL_10:
  n_4 = -v102;
  v10 = -v102 - 16 * v6;
  v104 = *((unsigned __int16 *)qword_63AC0 + v6) - v9;
  v11 = v104 + v7;
  v103 = *((unsigned __int16 *)qword_63AC0 + v6 + 1);
  if ( (unsigned int)v11 >= v103 )
  {
LABEL_68:
    v54 = a1 - 9 * v7;
    v53 = v54;
LABEL_49:
    v55 = v4;
    v56 = v54 + v4;
    memset(&a2[v55], 48, v53);
    return v56;
  }
  v12 = &qword_514A0[3 * v11];
  v13 = v12[1];
  v106 = v107 << 8;
  v14 = ((unsigned __int64)*v12 * (unsigned __int128)(unsigned __int64)(v107 << 8)) >> 64;
  v15 = (unsigned __int64)v13 * (unsigned __int128)(unsigned __int64)(v107 << 8);
  v16 = v13 * (v107 << 8);
  v17 = *((_QWORD *)&v15 + 1);
  v18 = (unsigned __int64)(v107 << 8) * (unsigned __int128)(unsigned __int64)v12[2];
  if ( v10 + 128 <= 127 )
    goto LABEL_136;
  if ( v10 + 128 > 180 )
    goto LABEL_135;
  v19 = v4;
  v95 = v4;
  v20 = &qword_514A0[3 * v7 + 3 + 3 * v104];
  v21 = &a2[v19];
  while ( 1 )
  {
    v23 = v18 + (unsigned __int64)__CFADD__(v14, v16) + v17;
    v24 = ((unsigned __int64)v23 >> v10) | (*((_QWORD *)&v23 + 1) << (64 - (unsigned __int8)v10));
    v25 = *((_QWORD *)&v23 + 1) >> v10;
    if ( (v10 & 0x40) != 0 )
    {
      v24 = *((_QWORD *)&v23 + 1) >> v10;
      v25 = 0;
    }
    v26 = v24
        - 1000000000
        * ((unsigned __int64)(((0x89705F4136B4A597LL * (unsigned __int128)v24) >> 64)
                            + __CFADD__(
                                0x89705F4136B4A597LL * v24,
                                (__PAIR128__(v25, v24) * 0x31680A88F8953031LL) >> 64)
                            + 0x89705F4136B4A597LL * v25
                            + ((((0x31680A88F8953031LL * (unsigned __int128)v24) >> 64)
                              + 0x31680A88F8953031LL * (unsigned __int128)v25) >> 64)) >> 29);
    if ( v7 >= v100 )
      break;
    if ( v26 )
    {
      *(_WORD *)(v21 + 7) = *((_WORD *)qword_6D860 + v26 % 0x2710 % 0x64);
      *(_WORD *)(v21 + 5) = *((_WORD *)qword_6D860 + v26 % 0x2710 / 0x64);
      *(_WORD *)(v21 + 3) = *((_WORD *)qword_6D860 + v26 / 0x2710 % 0x2710 % 0x64);
      *(_WORD *)(v21 + 1) = *((_WORD *)qword_6D860 + v26 / 0x2710 % 0x2710 / 0x64);
      *v21 = v26 / 0x2710 / 0x2710 + 48;
    }
    else
    {
      v21[8] = 48;
      *(_QWORD *)v21 = 0x3030303030303030LL;
    }
    ++v7;
    v95 += 9;
    if ( v7 >= v98 )
      return v95;
    v21 += 9;
    if ( v7 + v104 >= v103 )
    {
      v4 = v95;
      goto LABEL_68;
    }
    v22 = *v20;
    v20 += 3;
    v14 = ((unsigned __int64)v22 * (unsigned __int128)(unsigned __int64)v106) >> 64;
    v16 = *(v20 - 2) * v106;
    v17 = ((unsigned __int64)*(v20 - 2) * (unsigned __int128)(unsigned __int64)v106) >> 64;
    v18 = (unsigned __int64)v106 * (unsigned __int128)(unsigned __int64)*(v20 - 1);
  }
  v56 = v95;
  v69 = v26;
  v70 = a1 - 9 * v7;
  v71 = 9 * v7 - a1;
  v72 = v71 + 9;
  if ( v71 == -9 )
  {
    if ( !v70 )
      return v56;
    v77 = 0;
LABEL_124:
    v84 = &a2[v95];
    if ( v70 == 1 )
    {
      v89 = 0;
LABEL_126:
      v84[v89] = v69 % 0xA + 48;
LABEL_107:
      v56 = v70 + v95;
      goto LABEL_82;
    }
LABEL_104:
    v85 = v70 - 1;
    v86 = 0;
    do
    {
      v87 = v86;
      v86 += 2;
      v88 = v69 % 0x64;
      v69 /= 0x64u;
      *(_WORD *)&v84[v70 - 2LL - v87] = *((_WORD *)qword_6D860 + v88);
    }
    while ( v86 < v85 );
    v89 = v85 - v86;
    if ( v86 >= v70 )
      goto LABEL_107;
    goto LABEL_126;
  }
  v73 = 0;
  do
  {
    ++v73;
    v74 = v69;
    v75 = v69 / 0xA;
    v69 /= 0xAu;
  }
  while ( v73 != v72 );
  v76 = v74 % 0xA;
  if ( v76 == 5 )
  {
    v83 = n_4 - a1 - 1;
    if ( v83 > 0 )
    {
      if ( v83 > 59 )
      {
        v77 = 1;
        if ( !v70 )
          goto LABEL_83;
        v84 = &a2[v95];
        if ( v70 != 1 )
          goto LABEL_104;
        goto LABEL_132;
      }
      if ( !v107 )
        __assert_fail(
          "value != 0",
          "../../../../../libstdc++-v3/src/nonshared17/../c++17/ryu/d2s_intrinsics.h",
          0xCDu,
          "bool {anonymous}::ryu::multipleOfPowerOf2(uint64_t, uint32_t)");
      if ( (~(-1LL << v83) & v107) != 0 )
      {
        v77 = 1;
        if ( !v70 )
          goto LABEL_83;
        v77 = 1;
        v84 = &a2[v95];
        if ( v70 != 1 )
          goto LABEL_104;
LABEL_132:
        v56 = v95 + 1;
        *v84 = v69 % 0xA + 48;
        goto LABEL_83;
      }
    }
    v77 = 2;
    if ( !v70 )
      goto LABEL_83;
    v77 = 2;
    v84 = &a2[v95];
    if ( v70 == 1 )
    {
      v56 = v95 + 1;
      *v84 = v75 % 0xA + 48;
      goto LABEL_83;
    }
    goto LABEL_104;
  }
  v77 = v76 > 5;
  if ( v70 )
    goto LABEL_124;
LABEL_82:
  if ( !v77 )
    return v56;
LABEL_83:
  v78 = v56 - 1;
  if ( v56 )
  {
    v79 = 0;
    v80 = &a2[v78];
    while ( 1 )
    {
      v81 = *v80;
      if ( *v80 == 45 )
        break;
      if ( v81 == 46 )
      {
        v79 = (int)v78;
      }
      else
      {
        if ( v81 != 57 )
        {
          if ( v77 != 2 || (v81 & 1) != 0 )
            *v80 = v81 + 1;
          return v56;
        }
        *v80 = 48;
        v77 = 1;
      }
      --v78;
      --v80;
      if ( v78 == -1 )
      {
        v91 = a2;
        goto LABEL_114;
      }
    }
    v91 = &a2[v78 + 1];
LABEL_114:
    *v91 = 49;
    if ( (int)v79 > 0 )
      *(_WORD *)&a2[v79] = 11824;
  }
  else
  {
    *a2 = 49;
  }
  v92 = (int)v56++;
  a2[v92] = 48;
  return v56;
}

