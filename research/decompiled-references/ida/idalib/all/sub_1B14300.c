__int64 __fastcall sub_1B14300(__int64 *a1, unsigned __int64 a2, __int64 *a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // ebx
  __int64 v19; // rax
  __int64 *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // edi
  bool v26; // zf
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rbp
  void *v34; // r12
  __int64 v35; // r15
  __m128 v36; // rax
  bool v37; // r15
  __int64 v38; // rax
  __int64 *v39; // r12
  __int64 *v40; // rbp
  unsigned int **v41; // rax
  unsigned int *v42; // r13
  unsigned int *v43; // r14
  unsigned int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // edi
  __int64 v48; // rax
  unsigned int v49; // edi
  unsigned int v50; // r12d
  __int64 v51; // rax
  __int64 v52; // rdi
  void *v53; // rdx
  __m128 *v54; // r14
  int v55; // r13d
  char *v56; // rbp
  __m128 **v57; // r14
  char *v58; // rbx
  __int64 *v59; // rdx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned int *v63; // rdx
  __int64 *v64; // r12
  __int64 v65; // r15
  __int64 v66; // rdx
  __int64 *v67; // rbp
  __int64 *v68; // r14
  _DWORD *v69; // r12
  int v70; // edx
  __int64 v71; // r13
  __int64 *j; // r12
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 *v75; // r13
  __int64 *v76; // rbx
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  __int64 *v79; // r13
  __int64 v80; // rbp
  int v81; // r12d
  int i; // r15d
  __int64 v83; // rax
  bool v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 *v87; // r15
  __int64 *v88; // r12
  unsigned int **v89; // r13
  unsigned int **v90; // r15
  unsigned int *v91; // rax
  unsigned int v92; // edx
  __int64 v93; // r13
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 *v96; // [rsp+8h] [rbp-1E0h]
  bool v97; // [rsp+10h] [rbp-1D8h]
  char *v98; // [rsp+10h] [rbp-1D8h]
  __int64 v99; // [rsp+18h] [rbp-1D0h]
  _DWORD *v100; // [rsp+20h] [rbp-1C8h]
  bool v101; // [rsp+20h] [rbp-1C8h]
  int v102; // [rsp+20h] [rbp-1C8h]
  __int64 v103; // [rsp+20h] [rbp-1C8h]
  bool v104; // [rsp+20h] [rbp-1C8h]
  __int64 v106; // [rsp+30h] [rbp-1B8h]
  char *v107; // [rsp+30h] [rbp-1B8h]
  bool v108; // [rsp+38h] [rbp-1B0h]
  __int64 *v109; // [rsp+38h] [rbp-1B0h]
  bool v110; // [rsp+38h] [rbp-1B0h]
  unsigned int v111; // [rsp+44h] [rbp-1A4h]
  __int64 v112; // [rsp+48h] [rbp-1A0h]
  __m128 *v113; // [rsp+50h] [rbp-198h]
  __m128 *v114; // [rsp+50h] [rbp-198h]
  __int64 v115; // [rsp+50h] [rbp-198h]
  char *v116; // [rsp+70h] [rbp-178h] BYREF
  void *v117; // [rsp+78h] [rbp-170h] BYREF
  void *v118; // [rsp+80h] [rbp-168h] BYREF
  __int64 v119; // [rsp+88h] [rbp-160h]
  _BYTE v120[16]; // [rsp+90h] [rbp-158h] BYREF
  void *v121[2]; // [rsp+A0h] [rbp-148h] BYREF
  _QWORD v122[2]; // [rsp+B0h] [rbp-138h] BYREF
  void *v123; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v124; // [rsp+C8h] [rbp-120h]
  _BYTE v125[32]; // [rsp+D0h] [rbp-118h] BYREF
  void *ptr; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v127; // [rsp+F8h] [rbp-F0h]
  _BYTE v128[32]; // [rsp+100h] [rbp-E8h] BYREF
  __m128i v129; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v130; // [rsp+130h] [rbp-B8h]
  void *v131; // [rsp+138h] [rbp-B0h]
  __int64 v132; // [rsp+140h] [rbp-A8h]

  v8 = a1;
  v99 = a2;
  v9 = sub_1AE5FF0(a1[1]);
  if ( v9 )
    v11 = *(unsigned int *)(v9 + 976);
  else
    v11 = 103;
  sub_1AEBC50(v10, v11, 0);
  v12 = sub_1AE5FF0(a1[1]);
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 976);
  else
    v13 = 103;
  v14 = a2;
  v97 = sub_FFF130(v13);
  if ( !v97 )
    return v14;
  v15 = sub_1AE5FF0(v8[1]);
  if ( v15 )
    v111 = *(_DWORD *)(v15 + 976);
  else
    v111 = 103;
  v14 = 1;
  v112 = *v8;
  if ( a2 <= 1 )
    goto LABEL_9;
  v118 = v120;
  v119 = 0x400000000LL;
  v19 = sub_1AE5FF0(v16);
  v11 = 103;
  if ( v19 )
    v11 = *(unsigned int *)(v19 + 976);
  sub_FFF220((__int64)&v118, v11);
  v123 = v125;
  v124 = 0x400000000LL;
  v127 = 0x400000000LL;
  ptr = v128;
  v96 = &a3[a4];
  if ( v96 == a3 )
  {
    v95 = sub_1AE5FF0(v8[1]);
    v39 = *(__int64 **)(v95 + 1160);
    v40 = &v39[*(unsigned int *)(v95 + 1168)];
    if ( v39 == v40 )
    {
      v106 = 0;
      v37 = 0;
      v108 = 0;
      goto LABEL_80;
    }
    v106 = 0;
    v37 = 0;
    v100 = nullptr;
    do
    {
LABEL_54:
      v11 = *v39++;
      sub_1912220(*v8, v11, 0, nullptr, 0, a5, a6);
    }
    while ( v40 != v39 );
    if ( v100 )
      goto LABEL_56;
LABEL_165:
    v108 = 0;
    goto LABEL_58;
  }
  v20 = a3;
  v100 = nullptr;
  v106 = 0;
  while ( 1 )
  {
LABEL_40:
    v33 = *v20;
    if ( (*(_BYTE *)(sub_168B6E0((__int64)v8) + 68) & 2) == 0 )
    {
      v21 = sub_1AE5FF0(v8[1]);
      if ( v21 )
        v24 = *(unsigned int *)(v21 + 976);
      else
        v24 = 103;
      if ( (unsigned __int8)sub_FFEF70(v24, v11, v22, v23) )
      {
        v25 = *(_DWORD *)(v33 + 8);
      }
      else
      {
        v45 = sub_1AE5FF0(v8[1]);
        v25 = *(_DWORD *)(v33 + 8);
        if ( !v45 || *(_DWORD *)(v45 + 976) != 70 )
        {
LABEL_24:
          v26 = (unsigned __int8)sub_FFEF20(v25) == 0;
          v27 = *(_DWORD *)(v33 + 8);
          if ( !v26 )
            goto LABEL_42;
          goto LABEL_25;
        }
      }
      if ( v25 != 45 )
        goto LABEL_24;
      v86 = *(unsigned int *)(v33 + 16);
      v87 = (__int64 *)(v33 + 40 * v86 + 96);
      v88 = &v87[v86];
      if ( v88 == v87 )
        goto LABEL_24;
      do
      {
        v11 = *v87;
        if ( *v87 )
          sub_1912220(*v8, v11, 0, nullptr, 0, a5, a6);
        ++v87;
      }
      while ( v88 != v87 );
    }
    v26 = (unsigned __int8)sub_FFEF20(*(_DWORD *)(v33 + 8)) == 0;
    v27 = *(_DWORD *)(v33 + 8);
    if ( !v26 )
      goto LABEL_42;
LABEL_25:
    if ( v27 != 18 )
    {
      if ( (*(_BYTE *)(sub_168B6E0((__int64)v8) + 68) & 4) == 0 )
        break;
      if ( !*(_BYTE *)(*(_QWORD *)(sub_168B6C0((__int64)v8) + 17448) + 273LL) )
        break;
      v27 = *(_DWORD *)(v33 + 8);
      if ( v27 != 19 )
        break;
    }
LABEL_42:
    v11 = v33;
    *(_BYTE *)(v8[1] + 27472) = v27 == 19;
    sub_EB4EB0(&v129, v33);
    a5 = (__m128)_mm_load_si128(&v129);
    v34 = v131;
    v35 = v132;
    *(__m128 *)v121 = a5;
    v122[0] = v130;
    v36 = a5;
LABEL_43:
    if ( v34 == (void *)v36.m128_u64[0] )
      goto LABEL_50;
    do
    {
      do
      {
        if ( (v36.m128_i8[8] & 3) == 0 )
        {
          v11 = *(_QWORD *)v36.m128_u64[0];
          if ( !*(_QWORD *)v36.m128_u64[0] )
            goto LABEL_66;
LABEL_46:
          sub_1912220(*v8, v11, 0, nullptr, 0, a5, a6);
          goto LABEL_47;
        }
        v11 = *(_QWORD *)sub_EF2B30((__int64)v121);
        if ( v11 )
          goto LABEL_46;
LABEL_47:
        v36.m128_u64[1] = (unsigned __int64)v121[1];
        if ( ((__int64)v121[1] & 3) == 0 )
        {
          v36.m128_u64[0] = (unsigned __int64)v121[0];
LABEL_66:
          v36.m128_u64[0] += 8LL;
          v121[0] = (void *)v36.m128_u64[0];
          goto LABEL_43;
        }
        if ( ((unsigned __int64)v121[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        {
          v11 = 1;
          sub_EF2750((unsigned __int64 *)v121, 1);
          v36 = *(__m128 *)v121;
          goto LABEL_43;
        }
        sub_EF2960((__int64)v121);
        v36 = *(__m128 *)v121;
      }
      while ( v34 != v121[0] );
LABEL_50:
      ;
    }
    while ( v35 != v36.m128_u64[1] );
    *(_BYTE *)(v8[1] + 27472) = 0;
    v32 = *(_DWORD *)(v33 + 8);
    if ( v32 != 90 )
      goto LABEL_37;
LABEL_52:
    v100 = (_DWORD *)v33;
    if ( v96 == ++v20 )
      goto LABEL_53;
  }
  if ( (unsigned int)v119 > 1uLL || *((_DWORD *)v118 + (unsigned int)v119 - 1) != 103 )
  {
    v28 = sub_EB5210(v33);
    if ( v28 )
    {
      v29 = (unsigned int)v127;
      v11 = HIDWORD(v127);
      v30 = (unsigned int)v127 + 1LL;
      if ( v30 > HIDWORD(v127) )
      {
        v115 = v28;
        v11 = (__int64)v128;
        sub_2237220(&ptr, v128, v30, 8);
        v29 = (unsigned int)v127;
        v28 = v115;
      }
      *((_QWORD *)ptr + v29) = v28;
      LODWORD(v127) = v127 + 1;
    }
    v31 = sub_EB5250(v33);
    if ( v31 )
    {
      v11 = *(_QWORD *)(v31 + 16);
      if ( v11 )
        sub_1912220(*v8, v11, 0, nullptr, 0, a5, a6);
    }
  }
  v32 = *(_DWORD *)(v33 + 8);
  if ( v32 == 90 )
    goto LABEL_52;
LABEL_37:
  if ( v32 == 77 )
  {
    v106 = v33;
  }
  else if ( v32 == 53 )
  {
    v77 = (unsigned int)v124;
    v78 = (unsigned int)v124 + 1LL;
    if ( v78 > HIDWORD(v124) )
    {
      v11 = (__int64)v125;
      sub_2237220(&v123, v125, v78, 8);
      v77 = (unsigned int)v124;
    }
    *((_QWORD *)v123 + v77) = v33;
    LODWORD(v124) = v124 + 1;
  }
  if ( v96 != ++v20 )
    goto LABEL_40;
LABEL_53:
  v37 = v106 != 0;
  v38 = sub_1AE5FF0(v8[1]);
  v39 = *(__int64 **)(v38 + 1160);
  v40 = &v39[*(unsigned int *)(v38 + 1168)];
  if ( v40 != v39 )
    goto LABEL_54;
  if ( !v100 )
  {
    v108 = 0;
    goto LABEL_59;
  }
LABEL_56:
  if ( v100[9] == 7 )
  {
    if ( v106 )
    {
      v92 = v100[11];
      goto LABEL_172;
    }
    goto LABEL_165;
  }
  v108 = v37 && v100[10] == 7;
  if ( !v108 )
    goto LABEL_58;
  v92 = v100[12];
LABEL_172:
  sub_168B9F0((__int64)&v129, v8, v92, 0x1208u, 0);
  sub_1AF81E0((__m128i *)v121, 0x5Au);
  v93 = sub_1682AF0((__int64)&v129, (__int64)v121);
  v116 = sub_FFDD70(90, 7);
  v94 = sub_15AFC70(v93, &v116);
  v11 = (__int64)&v117;
  v117 = *(void **)v106;
  sub_1587DB0(v94, (__int64 *)&v117);
  if ( v121[0] != v122 )
    operator delete(v121[0]);
  sub_15F7200(&v129);
  v108 = v97;
LABEL_58:
  if ( v96 == a3 )
    goto LABEL_80;
LABEL_59:
  v41 = (unsigned int **)a3;
  v42 = nullptr;
  v43 = nullptr;
  v11 = (__int64)v96;
  while ( 2 )
  {
    v44 = (*v41)[2];
    if ( v44 == 77 )
    {
      v43 = *v41;
      break;
    }
    if ( v44 == 76 )
    {
      v42 = *v41;
      if ( (*v41)[4] )
      {
        v42 = nullptr;
LABEL_62:
        if ( v96 == (__int64 *)++v41 )
          goto LABEL_80;
        continue;
      }
    }
    break;
  }
  if ( v42 == nullptr || v43 == nullptr )
    goto LABEL_62;
  v109 = (__int64 *)(*v8 + 8);
  sub_168B9F0((__int64)&v129, v109, v42[5], 0x1208u, 0);
  sub_1AF81E0((__m128i *)v121, 0x4Cu);
  v103 = sub_1682AF0((__int64)&v129, (__int64)v121);
  v116 = sub_FFDD70(76, 0);
  v83 = sub_15AFC70(v103, &v116);
  v117 = *(void **)v42;
  sub_1587DB0(v83, (__int64 *)&v117);
  v84 = v42 != nullptr && v43 != nullptr;
  if ( v121[0] != v122 )
  {
    operator delete(v121[0]);
    v84 = v42 != nullptr && v43 != nullptr;
  }
  v104 = v84;
  sub_15F7200(&v129);
  sub_168B9F0((__int64)&v129, v109, *v43, 0x1826u, 0);
  LODWORD(v117) = 0;
  v85 = sub_1587D10((__int64)&v129, (int *)&v117);
  v11 = (__int64)v121;
  v121[0] = *(void **)v43;
  sub_1587DB0(v85, (__int64 *)v121);
  sub_15F7200(&v129);
  v108 = v104;
LABEL_80:
  v101 = v37 && (_DWORD)v124 != 0;
  if ( v101 && *(_QWORD *)(v106 + 16) )
  {
    v110 = v37;
    v89 = (unsigned int **)((char *)v123 + 8 * (unsigned int)v124);
    v90 = (unsigned int **)v123;
    do
    {
      v91 = *v90++;
      sub_168B9F0((__int64)&v129, v8, *v91, 0x11B9u, 0);
      v11 = (__int64)v121;
      v121[0] = *(void **)v106;
      sub_1587DB0((__int64)&v129, (__int64 *)v121);
      sub_15F7200(&v129);
    }
    while ( v89 != v90 );
    v37 = v110;
    v108 = v101;
  }
  v46 = sub_1AE5FF0(v8[1]);
  if ( v46 )
    v47 = *(_DWORD *)(v46 + 976);
  else
    v47 = 103;
  if ( !sub_FFE580(v47)
    || ((v48 = sub_1AE5FF0(v8[1])) == 0 ? (v49 = 103) : (v49 = *(_DWORD *)(v48 + 976)),
        !(unsigned __int8)sub_FFEBC0(v49, v11) || !v37 || !*(_QWORD *)(v106 + 16)) )
  {
    if ( v108 )
      goto LABEL_92;
    v107 = (char *)v118;
    v98 = (char *)v118 + 4 * (unsigned int)v119;
    if ( v118 == v98 )
    {
LABEL_99:
      v14 = v99;
      goto LABEL_100;
    }
    v102 = 0;
    v54 = (__m128 *)&v129;
    while ( 1 )
    {
      v55 = *((_DWORD *)v98 - 1);
      if ( v55 == 103 )
        goto LABEL_97;
      v56 = (char *)ptr;
      if ( ptr != (char *)ptr + 8 * (unsigned int)v127 )
      {
        v113 = v54;
        v57 = (__m128 **)v8;
        v58 = (char *)ptr + 8 * (unsigned int)v127;
        while ( 1 )
        {
          v59 = *(__int64 **)v56;
          v60 = *(_DWORD *)(*(_QWORD *)v56 + 8LL);
          if ( v55 != v60 && v60 != 103 )
            goto LABEL_110;
          v61 = *v59;
          if ( !*v59 )
            goto LABEL_110;
          v62 = *(_QWORD *)(v61 + 8);
          if ( (v62 & 1) != 0 )
          {
            v63 = (unsigned int *)(v62 & 0xFFFFFFFFFFFFFFFELL);
            v64 = (__int64 *)(v63 + 2);
            v65 = (__int64)&v63[2 * *v63 + 2];
          }
          else
          {
            v65 = v61 + 16;
            v64 = (__int64 *)(v61 + 8);
            if ( !v62 )
              goto LABEL_110;
          }
          if ( v64 == (__int64 *)v65 )
          {
LABEL_110:
            v56 += 8;
            if ( v58 == v56 )
              goto LABEL_119;
          }
          else
          {
            do
            {
              v66 = *v64++;
              sub_1907590(*v57, *(_DWORD *)(v66 + 24), v66);
            }
            while ( (__int64 *)v65 != v64 );
            v56 += 8;
            if ( v58 == v56 )
            {
LABEL_119:
              v8 = (__int64 *)v57;
              v54 = v113;
              break;
            }
          }
        }
      }
      if ( v55 == 70 )
      {
        if ( v96 == a3 )
          goto LABEL_97;
        v79 = a3;
        do
        {
          while ( 1 )
          {
            v80 = *v79;
            if ( *(_DWORD *)(*v79 + 8) == 112 )
            {
              v81 = *(_DWORD *)(v80 + 16);
              if ( v81 )
                break;
            }
LABEL_151:
            if ( v96 == ++v79 )
              goto LABEL_97;
          }
          for ( i = 0; i != v81; ++i )
          {
            while ( 1 )
            {
              sub_EB5BF0(v54, v80, i);
              if ( !v129.m128i_i64[1] )
                break;
              ++i;
              sub_1912220(*v8, v129.m128i_i64[1], 0, nullptr, 0, a5, a6);
              if ( v81 == i )
                goto LABEL_151;
            }
          }
          ++v79;
        }
        while ( v96 != v79 );
      }
      else if ( v55 == 48 && v96 != a3 )
      {
        v114 = v54;
        v67 = a3;
        v68 = v8;
        while ( 1 )
        {
          v69 = (_DWORD *)*v67;
          v70 = *(_DWORD *)(*v67 + 8);
          if ( v70 != 85 )
            goto LABEL_127;
          if ( v69[12] == 1 )
          {
            v74 = (unsigned int)v69[4];
            v75 = (__int64 *)&v69[12 * v74 + 26];
            v76 = &v75[v74];
            if ( v75 != v76 )
              break;
          }
LABEL_125:
          if ( v96 == ++v67 )
          {
            v8 = v68;
            v54 = v114;
            goto LABEL_97;
          }
        }
        do
        {
          if ( *v75 )
            sub_1912220(*v68, *v75, 0, nullptr, 0, a5, a6);
          ++v75;
        }
        while ( v76 != v75 );
        v70 = v69[2];
LABEL_127:
        if ( v70 == 6 )
        {
          v71 = (__int64)&v69[2 * v69[4] + 6];
          for ( j = (__int64 *)(v69 + 6); (__int64 *)v71 != j; ++j )
          {
            v73 = *j;
            sub_1912220(*v68, v73, 0, nullptr, 0, a5, a6);
          }
        }
        goto LABEL_125;
      }
LABEL_97:
      if ( ++v102 == (_DWORD)v119 )
      {
        *(_BYTE *)(sub_1AE5FF0(v8[1]) + 1108) = 1;
        v11 = v99 & 0xFFFFFFFFFFFFFFFELL;
        v98 -= 4;
        v99 = sub_1C37DC0(*v8, v99 & 0xFFFFFFFFFFFFFFFELL);
        if ( v98 == v107 )
          goto LABEL_99;
      }
      else
      {
        v11 = v99 & 0xFFFFFFFFFFFFFFFELL;
        v98 -= 4;
        v99 = sub_1C37DC0(*v8, v99 & 0xFFFFFFFFFFFFFFFELL);
        if ( v107 == v98 )
          goto LABEL_99;
      }
    }
  }
  v50 = *(_DWORD *)(sub_168B6E0((__int64)v8) + 64);
  sub_168B9F0((__int64)&v129, v8, *(_DWORD *)v106, 0x11DAu, 0);
  v51 = sub_1AE5FF0(v8[1]);
  if ( v51 )
    v52 = *(unsigned int *)(v51 + 976);
  else
    v52 = 103;
  v11 = (__int64)v121;
  v121[0] = (void *)sub_20EAB70(v52, v50);
  v121[1] = v53;
  sub_166BAF0((__int64)&v129, (__int64)v121);
  sub_15F7200(&v129);
LABEL_92:
  v14 = 1;
  v108 = v97;
LABEL_100:
  if ( ptr != v128 )
    free(ptr);
  if ( v123 != v125 )
    free(v123);
  if ( v118 != v120 )
    free(v118);
  if ( v108 )
  {
LABEL_9:
    v17 = sub_1AF3CF0(v111) - 1;
    if ( v17 >= 0 )
    {
      do
      {
        --v17;
        sub_1C37B90(v112, v11);
      }
      while ( v17 != -1 );
    }
  }
  return v14;
}
