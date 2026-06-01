__int64 __fastcall sub_75B620(_QWORD *a1, _QWORD *a2, const char *a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  _BYTE *v12; // rax
  _BYTE *v13; // rdx
  int v14; // r12d
  unsigned __int64 v15; // r14
  char *v16; // r13
  char *v17; // r15
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r15
  unsigned int v20; // r13d
  int v21; // r9d
  _DWORD *v22; // rax
  void *v23; // rcx
  unsigned int *v24; // rdx
  char v25; // al
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  char *v28; // rax
  char v29; // al
  char v30; // r13
  __int64 v31; // r14
  __int64 v32; // r14
  char *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r15
  char v36; // r14
  __int64 v37; // rsi
  int v38; // ebx
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  void *v41; // rdi
  __m128i v42; // xmm0
  __int64 v43; // rax
  unsigned __int64 v45; // rcx
  signed __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r10
  __int64 v49; // rax
  __int64 v50; // r10
  __int64 v51; // r11
  __int64 v52; // rax
  __int64 v53; // r11
  unsigned __int64 v54; // rax
  int v55; // esi
  unsigned __int64 v56; // r11
  __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // r10
  unsigned int v61; // edx
  __int64 v62; // rsi
  unsigned int v63; // eax
  __int64 v64; // r11
  __int64 v65; // rdx
  __int64 v66; // rax
  _BYTE *v67; // rdx
  _BYTE *v68; // rax
  char v69; // al
  void *v70; // rax
  bool v71; // zf
  __int64 v72; // r14
  __int32 v73; // r15d
  __int64 v74; // r11
  __m128i *v75; // rdx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rbx
  unsigned int *v79; // r11
  unsigned int v80; // r11d
  __m128i *v81; // r9
  char v82; // r8
  unsigned int v83; // r10d
  __int64 v84; // rdx
  __int64 v85; // rdx
  char *v86; // r15
  char *i; // r14
  void *v88; // rax
  __m128i v89; // xmm0
  __m128i v90; // xmm1
  char v91; // r9
  int v92; // r8d
  char *v93; // rsi
  char *v94; // rax
  __int64 v95; // rax
  char *v96; // rsi
  char *v97; // r10
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r11
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // rax
  unsigned int v105; // [rsp+8h] [rbp-148h]
  __int64 v106; // [rsp+10h] [rbp-140h]
  unsigned int v107; // [rsp+10h] [rbp-140h]
  __int64 v109; // [rsp+18h] [rbp-138h]
  void *v110; // [rsp+20h] [rbp-130h]
  unsigned int *v111; // [rsp+20h] [rbp-130h]
  void *v112; // [rsp+20h] [rbp-130h]
  void *v113; // [rsp+20h] [rbp-130h]
  __int64 v114; // [rsp+20h] [rbp-130h]
  char v115; // [rsp+20h] [rbp-130h]
  char v116; // [rsp+20h] [rbp-130h]
  __int64 v117; // [rsp+30h] [rbp-120h]
  int v119; // [rsp+40h] [rbp-110h]
  unsigned __int64 v120; // [rsp+40h] [rbp-110h]
  int v121; // [rsp+40h] [rbp-110h]
  int v123; // [rsp+50h] [rbp-100h]
  void *v124; // [rsp+50h] [rbp-100h]
  __int64 v125; // [rsp+58h] [rbp-F8h]
  unsigned int v126; // [rsp+58h] [rbp-F8h]
  int v127; // [rsp+60h] [rbp-F0h]
  unsigned __int64 v128; // [rsp+60h] [rbp-F0h]
  unsigned __int64 v129; // [rsp+68h] [rbp-E8h]
  unsigned __int64 v130; // [rsp+70h] [rbp-E0h]
  int v131; // [rsp+78h] [rbp-D8h]
  unsigned int v132; // [rsp+78h] [rbp-D8h]
  unsigned __int64 v133; // [rsp+80h] [rbp-D0h]
  int v134; // [rsp+94h] [rbp-BCh] BYREF
  void *v135; // [rsp+98h] [rbp-B8h] BYREF
  __int128 v136; // [rsp+A0h] [rbp-B0h]
  void *v137; // [rsp+B8h] [rbp-98h] BYREF
  __int128 v138; // [rsp+C0h] [rbp-90h]
  void *ptr; // [rsp+D8h] [rbp-78h] BYREF
  __m128i v140; // [rsp+E0h] [rbp-70h] BYREF
  char *v141; // [rsp+F8h] [rbp-58h] BYREF
  void *v142[2]; // [rsp+100h] [rbp-50h]
  unsigned __int64 v143; // [rsp+110h] [rbp-40h]

  v7 = a2[1];
  v143 = __readfsqword(0x28u);
  v136 = 0;
  v135 = nullptr;
  if ( v7 )
  {
    v70 = (void *)qvector_reserve(&v135, 0, v7, 16);
    v71 = a2[1] == 0;
    v135 = v70;
    if ( !v71 )
    {
      v72 = v136;
      v73 = 0;
      v74 = 0;
      do
      {
        v76 = sub_758300((__int64)a1, (unsigned int *)(*a2 + 16 * v74));
        v77 = v72 + 1;
        LOWORD(ptr) = v76;
        BYTE2(ptr) = BYTE2(v76);
        v78 = HIDWORD(v76);
        BYTE4(ptr) = BYTE4(v76);
        BYTE3(ptr) = BYTE3(v76);
        v83 = (unsigned int)ptr;
        v80 = *v79;
        LOBYTE(v142[0]) = BYTE4(v76);
        v141 = (char *)__PAIR64__((unsigned int)ptr, v80);
        v82 = 2 * ((_DWORD)ptr == -1);
        HIDWORD(v142[0]) = v73;
        BYTE1(v142[0]) = v82;
        if ( &v141 < (char **)v81 || &v141 >= (char **)&v81[*((_QWORD *)&v136 + 1)] )
        {
          if ( *((_QWORD *)&v136 + 1) < v77 )
          {
            v135 = (void *)qvector_reserve(&v135, v81, v77, 16);
            v72 = v136;
            v81 = (__m128i *)v135;
          }
          v81[v72] = _mm_load_si128((const __m128i *)&v141);
        }
        else
        {
          if ( *((_QWORD *)&v136 + 1) < v77 )
          {
            v115 = 2 * ((_DWORD)ptr == -1);
            v132 = (unsigned int)ptr;
            v107 = v80;
            v135 = (void *)qvector_reserve(&v135, v81, v77, 16);
            v80 = v107;
            v81 = (__m128i *)v135;
            v72 = v136;
            v82 = v115;
            v83 = v132;
          }
          v75 = &v81[v72];
          v75->m128i_i8[8] = v78;
          v75->m128i_i8[9] = v82;
          v75->m128i_i32[3] = v73;
          v75->m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v80), _mm_cvtsi32_si128(v83)).m128i_u64[0];
        }
        v74 = ++v73;
        v72 = v136 + 1;
        *(_QWORD *)&v136 = v136 + 1;
      }
      while ( (unsigned __int64)v73 < a2[1] );
    }
  }
  v134 = -1;
  v8 = sub_75B150((__int64)a1, a3, &v134);
  v9 = v8;
  if ( (_BYTE)v8 == 1 )
  {
    v105 = v134;
    if ( v134 == -1 )
    {
      v9 = 3;
      goto LABEL_57;
    }
  }
  else
  {
    if ( (_BYTE)v8 )
      goto LABEL_57;
    v105 = v134;
  }
  v117 = 176LL * v105;
  v106 = a1[6] + v117;
  v10 = *(_QWORD *)(v106 + 24);
  v11 = v10 + 5LL * *(_QWORD *)(v106 + 32);
  if ( v10 == v11 )
  {
    v14 = 0;
  }
  else
  {
    v12 = (_BYTE *)(v10 + 4);
    v13 = (_BYTE *)(v11 + 4);
    v14 = 0;
    do
    {
      if ( !*v12 )
        break;
      v12 += 5;
      ++v14;
    }
    while ( v12 != v13 );
  }
  v15 = v136;
  v16 = (char *)v135;
  v17 = (char *)v135 + 16 * v136;
  if ( v135 != v17 )
  {
    while ( 1 )
    {
      if ( v16[9] )
        goto LABEL_14;
      if ( v16[8] )
      {
        if ( (unsigned __int8)sub_755E90((__int64)a1, *((_DWORD *)v16 + 1), v105) )
        {
          v16[9] = 7;
          goto LABEL_14;
        }
        if ( (*(_BYTE *)(v106 + 164) & 4) == 0 || a4 == -1 )
          goto LABEL_14;
        if ( v14 < a4 )
          goto LABEL_13;
        v16 += 16;
        if ( v17 == v16 )
        {
LABEL_22:
          v15 = v136;
          break;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v106 + 164) & 4) != 0 && a4 != -1 )
        {
LABEL_13:
          if ( (unsigned __int8)sub_7597A0(a1, v105, 0, 0) )
          {
            if ( !under_debugger )
              interr(3429);
            goto LABEL_181;
          }
        }
LABEL_14:
        v16 += 16;
        if ( v17 == v16 )
          goto LABEL_22;
      }
    }
  }
  if ( (*(_BYTE *)(v106 + 164) & 4) != 0 || a4 == -1 )
  {
    a4 = -1;
  }
  else if ( (unsigned __int64)a4 > *(_QWORD *)(v106 + 32) )
  {
    a4 = *(_QWORD *)(v106 + 32);
  }
  v137 = nullptr;
  v138 = 0;
  if ( !v15 )
  {
    ptr = nullptr;
    v140 = 0;
LABEL_133:
    if ( a5 )
      goto LABEL_51;
    goto LABEL_54;
  }
  v131 = 0;
  v18 = 0;
  v19 = 0;
  do
  {
    v23 = v135;
    v33 = (char *)v135 + 16 * v19;
    v30 = v33[9];
    if ( v30 )
    {
LABEL_42:
      if ( a6 )
      {
        v34 = a6[1];
        v35 = *(_QWORD *)v33;
        v36 = v33[8];
        v37 = *a6;
        v38 = *((_DWORD *)v33 + 3);
        if ( a6[2] < (unsigned __int64)(v34 + 1) )
        {
          v37 = qvector_reserve(a6, v37, v34 + 1, 16);
          *a6 = v37;
          v34 = a6[1];
        }
        v39 = v37 + 16 * v34;
        *(_BYTE *)(v39 + 8) = v36;
        *(_BYTE *)(v39 + 9) = v30;
        *(_DWORD *)(v39 + 12) = v38;
        *(_QWORD *)v39 = v35;
        ++a6[1];
      }
      goto LABEL_40;
    }
    v20 = *(_DWORD *)v33;
    v21 = *(_DWORD *)(a1[5] + 8LL) & 0xB;
    if ( *(_DWORD *)v33 == v105 )
    {
      if ( v21 )
        goto LABEL_67;
      goto LABEL_62;
    }
    if ( v33[8] )
    {
      if ( v21 )
      {
        v27 = a4;
        v28 = nullptr;
        v26 = (__int64)(v33 + 4);
LABEL_36:
        v29 = sub_7571C0(a1, v20, v105, v26, v28, v27);
        v33[9] = v29;
        v30 = v29;
        v31 = 1;
        goto LABEL_37;
      }
LABEL_62:
      v24 = (unsigned int *)(v33 + 4);
LABEL_34:
      v111 = v24;
      v25 = sub_758570((__int64)a1, (__int64 *)&v137, v24, 0);
      v20 = *(_DWORD *)v33;
      v26 = (__int64)v111;
      if ( v25 )
      {
        if ( (_QWORD)v138 )
        {
          if ( v105 != v20 )
          {
            v28 = (char *)v137;
            v27 = a4;
            goto LABEL_36;
          }
        }
        else
        {
          v27 = a4;
          v28 = (char *)haystack;
          if ( v105 != v20 )
            goto LABEL_36;
        }
      }
      else
      {
        v27 = a4;
        v28 = nullptr;
        if ( v105 != v20 )
          goto LABEL_36;
      }
LABEL_67:
      if ( (*(_BYTE *)(v106 + 164) & 4) != 0 && !v33[8] )
        goto LABEL_40;
      v45 = a4;
      if ( a4 == -1 )
      {
        if ( v33[8] )
        {
          v65 = *(_QWORD *)(v106 + 24);
          v66 = v65 + 5LL * *(_QWORD *)(v106 + 32);
          if ( v65 == v66 )
          {
            v45 = 0;
          }
          else
          {
            v67 = (_BYTE *)(v65 + 4);
            v68 = (_BYTE *)(v66 + 4);
            v45 = 0;
            do
            {
              if ( !*v67 )
                break;
              v67 += 5;
              ++v45;
            }
            while ( v67 != v68 );
          }
        }
        else
        {
          v45 = sub_7548E0(v106, *((_DWORD *)v33 + 1));
        }
      }
      v46 = sub_7591B0(a1, v105, (__int64)(v33 + 4), v45, 0);
      v30 = v33[9];
      v31 = 1;
      a4 -= v46 < a4;
      goto LABEL_37;
    }
    if ( !v21 )
    {
      if ( (*(_BYTE *)(v106 + 164) & 4) != 0 )
      {
        v119 = *(_DWORD *)(a1[5] + 8LL) & 0xB;
        v112 = v135;
        v47 = sub_7534D0(
                *(_QWORD *)(v106 + 24),
                *(_QWORD *)(v106 + 24) + 5LL * *(_QWORD *)(v106 + 32),
                (__int64)(v33 + 4));
        v23 = v112;
        v21 = v119;
        if ( v48 != v47 && *(_DWORD *)v47 == *((_DWORD *)v33 + 1) && !*(_BYTE *)(v47 + 4) )
          goto LABEL_34;
      }
      else
      {
        v110 = v135;
        v22 = sub_7539C0((_QWORD *)(v106 + 48), *((_DWORD *)v33 + 1));
        v23 = v110;
        v21 = 0;
        v24 = (unsigned int *)(v33 + 4);
        if ( v22 )
          goto LABEL_34;
      }
    }
    v49 = a1[6] + 176LL * v20;
    v50 = *(_QWORD *)(v49 + 24);
    v120 = *(_QWORD *)(v49 + 32);
    v51 = v50 + 5 * v120;
    if ( (*(_BYTE *)(v49 + 164) & 4) != 0 )
    {
      v123 = v21;
      v113 = v23;
      v52 = sub_7534D0(v50, v50 + 5 * v120, (__int64)(v33 + 4));
      if ( v52 == v53 )
        goto LABEL_77;
      v23 = v113;
      v21 = v123;
      if ( *(_DWORD *)v52 != *((_DWORD *)v33 + 1) || *(_BYTE *)(v52 + 4) )
        goto LABEL_77;
    }
    else
    {
      if ( v50 == v51 )
        goto LABEL_77;
      v52 = *(_QWORD *)(v49 + 24);
      while ( *((_DWORD *)v33 + 1) != *(_DWORD *)v52 || *(_BYTE *)(v52 + 4) )
      {
        v52 += 5;
        if ( v52 == v51 )
          goto LABEL_77;
      }
      if ( v52 == v51 )
      {
LABEL_77:
        if ( !under_debugger )
          interr(3430);
        goto LABEL_181;
      }
    }
    v114 = 0xCCCCCCCCCCCCCCCDLL * (v52 - v50);
    if ( v114 == -1 )
      goto LABEL_77;
    if ( a4 == -1 )
    {
      v127 = v21;
      v125 = v50;
      v124 = v23;
      v54 = sub_7548E0(v106, *((_DWORD *)v33 + 1));
      v26 = (__int64)(v33 + 4);
      v27 = v54;
      v28 = nullptr;
      if ( v27 == -1 )
        goto LABEL_36;
      v23 = v124;
      v50 = v125;
      v21 = v127;
    }
    else
    {
      v27 = a4;
    }
    v55 = -1;
    if ( v27 < *(_QWORD *)(v106 + 32) )
      v55 = *(_DWORD *)(*(_QWORD *)(v106 + 24) + 5 * v27);
    v56 = v18 + 1;
    if ( v18 + 1 >= v15 )
      goto LABEL_177;
    v57 = (__int64)v23 + 16 * v56 + 4;
    v58 = v50 + 5 * (v114 + v18 - v19);
    v59 = v57;
    v60 = v114 - v19;
    v61 = v55;
    v62 = v59;
    do
    {
      if ( *(_BYTE *)(v62 + 4) )
        break;
      if ( v20 != *(_DWORD *)(v62 - 4) )
        break;
      if ( *(_BYTE *)(v62 + 5) )
        break;
      if ( v60 + v56 >= v120 )
        break;
      v63 = *(_DWORD *)v62;
      if ( *(_DWORD *)v62 != *(_DWORD *)(v58 + 5)
        || *(_BYTE *)(v58 + 9)
        || (*(_BYTE *)(v106 + 164) & 4) != 0 && (*(_DWORD *)(v62 - 16) >= v63 || v63 >= v61) )
      {
        break;
      }
      if ( !v21 )
      {
        v133 = v60;
        v130 = v27;
        v129 = v56;
        v128 = v58;
        v126 = v61;
        v69 = sub_754800(v106, v62);
        v61 = v126;
        v58 = v128;
        v56 = v129;
        v27 = v130;
        v21 = 0;
        v60 = v133;
        if ( v69 )
          break;
      }
      ++v56;
      v62 += 16;
      v58 += 5LL;
    }
    while ( v56 < v15 );
    v64 = v56 - v18;
    v31 = v64;
    if ( v64 == 1 )
    {
LABEL_177:
      v28 = nullptr;
      v26 = (__int64)(v33 + 4);
      goto LABEL_36;
    }
    sub_756500(a1, v20, v105, v114, v27, v64);
    v30 = v33[9];
LABEL_37:
    if ( v30 )
      goto LABEL_42;
    v131 += v31;
    v18 = v19 + v31 - 1;
    v32 = a4 + v31;
    if ( a4 != -1 )
      a4 = v32;
LABEL_40:
    v15 = v136;
    v19 = ++v18;
  }
  while ( v18 < (unsigned __int64)v136 );
  ptr = nullptr;
  v140 = 0;
  if ( v131 <= 0 )
    goto LABEL_133;
  v141 = nullptr;
  LODWORD(v40) = a4;
  *(_OWORD *)v142 = 0;
  if ( (_QWORD)v136 )
  {
    v141 = (char *)qvector_reserve(&v141, 0, v136, 16);
    v84 = v136;
    if ( v140.m128i_i64[1] < (unsigned __int64)v136 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v136, 16);
      v84 = v136;
    }
    v85 = 16 * v84;
    v86 = (char *)v135 + v85;
    if ( (char *)v135 + v85 != v135 )
    {
      for ( i = (char *)v135 + 4; ; i += 16 )
      {
        if ( !i[5] )
        {
          v88 = v142[0];
          v89 = _mm_cvtsi32_si128(*((_DWORD *)i - 1));
          v90 = _mm_cvtsi32_si128(*(_DWORD *)i);
          v91 = i[4];
          v92 = *((_DWORD *)i + 2);
          v93 = v141;
          if ( v142[1] < (char *)v142[0] + 1 )
          {
            v121 = *((_DWORD *)i + 2);
            v116 = i[4];
            v141 = (char *)qvector_reserve(&v141, v141, (char *)v142[0] + 1, 16);
            v93 = v141;
            v92 = v121;
            v88 = v142[0];
            v91 = v116;
            v90 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v90));
            v89 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v89));
          }
          v94 = &v93[16 * (_QWORD)v88];
          v94[8] = v91;
          v94[9] = 0;
          *((_DWORD *)v94 + 3) = v92;
          *(_QWORD *)v94 = _mm_unpacklo_epi32(v89, v90).m128i_u64[0];
          v95 = v140.m128i_i64[0];
          v96 = (char *)ptr;
          ++v142[0];
          if ( v140.m128i_i64[1] < (unsigned __int64)(v140.m128i_i64[0] + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v140.m128i_i64[0] + 1, 16);
            v96 = (char *)ptr;
            v95 = v140.m128i_i64[0];
          }
          v97 = &v96[16 * v95];
          *(_QWORD *)v97 = 0xFFFFFFFFLL;
          *((_QWORD *)v97 + 1) = -1;
          ++v140.m128i_i64[0];
          *(_DWORD *)v97 = v105;
          if ( (unsigned __int64)(unsigned int)v40 < *(_QWORD *)(v106 + 32)
            && (v98 = *(_QWORD *)(v106 + 24) + 5LL * (unsigned int)v40, *(_DWORD *)v98 == *(_DWORD *)i)
            && *(_BYTE *)(v98 + 4) == i[4] )
          {
            *((_QWORD *)v97 + 1) = (unsigned int)v40;
          }
          else
          {
            if ( (unsigned __int64)v105 >= a1[7] )
              goto LABEL_161;
            v99 = a1[6] + v117;
            v100 = *(_QWORD *)(v99 + 32);
            v101 = *(_QWORD *)(v99 + 24);
            v102 = v101 + 5 * v100;
            if ( (*(_BYTE *)(v99 + 164) & 4) != 0 )
            {
              if ( i[4] )
              {
                if ( v100 )
                {
                  v103 = *(_QWORD *)(v99 + 24);
                  do
                  {
                    if ( !*(_BYTE *)(v103 + 4) )
                      break;
                    if ( *(_DWORD *)v103 == *(_DWORD *)i )
                      goto LABEL_153;
                    v103 += 5;
                  }
                  while ( v103 != v102 );
                }
LABEL_161:
                *((_QWORD *)v97 + 1) = -1;
LABEL_162:
                if ( !under_debugger )
                  interr(3431);
LABEL_181:
                BUG();
              }
              v109 = v101 + 5 * v100;
              v104 = sub_7534D0(*(_QWORD *)(v99 + 24), v109, (__int64)i);
              v103 = v104;
              if ( v104 == v109 || *(_DWORD *)v104 != *(_DWORD *)i || *(_BYTE *)(v104 + 4) )
                goto LABEL_161;
            }
            else
            {
              if ( v101 == v102 )
                goto LABEL_161;
              v103 = *(_QWORD *)(v99 + 24);
              while ( *(_DWORD *)i != *(_DWORD *)v103 || i[4] != *(_BYTE *)(v103 + 4) )
              {
                v103 += 5;
                if ( v103 == v102 )
                  goto LABEL_161;
              }
LABEL_153:
              if ( v103 == v102 )
                goto LABEL_161;
            }
            v40 = 0xCCCCCCCCCCCCCCCDLL * (v103 - v101);
            *((_QWORD *)v97 + 1) = v40;
            if ( v40 == -1 )
              goto LABEL_162;
          }
          LODWORD(v40) = v40 + 1;
        }
        if ( v86 == i + 12 )
          break;
      }
    }
  }
  sub_396090(0x5Bu, a1[4], &v141, &ptr, a3, a4);
  sub_754740((__int64)a1, 91, &v141, &ptr, a3, a4);
  if ( v141 )
  {
    v142[0] = nullptr;
    qfree(v141);
  }
  v41 = ptr;
  if ( a5 )
  {
LABEL_51:
    v42 = _mm_loadu_si128(&v140);
    v41 = *(void **)a5;
    v43 = *(_QWORD *)(a5 + 16);
    *(_QWORD *)a5 = ptr;
    *(__m128i *)(a5 + 8) = v42;
    ptr = v41;
    v140.m128i_i64[1] = v43;
  }
  if ( v41 )
  {
    v140.m128i_i64[0] = 0;
    qfree(v41);
  }
LABEL_54:
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree(v137);
  }
  v9 = 0;
LABEL_57:
  if ( v135 )
  {
    *(_QWORD *)&v136 = 0;
    qfree(v135);
  }
  return v9;
}

