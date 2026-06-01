__int64 __fastcall sub_DB6A40(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  char **exception; // rbp
  __int64 v11; // rax
  char *v12; // rbp
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 *v17; // rdx
  _QWORD *v18; // rcx
  char *v19; // rdi
  __int64 v20; // r15
  __int64 v21; // r14
  unsigned int v22; // r13d
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rbx
  unsigned int v26; // r9d
  __int64 v27; // r8
  __int64 v28; // rax
  char *v29; // rdx
  int v30; // esi
  unsigned int v31; // ecx
  __int64 v32; // r11
  char *v33; // rcx
  __int64 v34; // r11
  char *v35; // r10
  char *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rdx
  int v40; // esi
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned int v43; // edx
  unsigned int v44; // ebx
  __int64 v45; // r14
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rbx
  _QWORD *v49; // rdi
  __int64 v50; // rax
  unsigned int v51; // r13d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rsi
  unsigned int v56; // r11d
  unsigned int v57; // r10d
  __int64 v58; // rdx
  char ***v59; // rax
  char *v60; // r8
  char ***v61; // r14
  __m128i v62; // xmm0
  _QWORD *v63; // rax
  char **v64; // rdi
  _QWORD *v65; // rsi
  size_t v66; // rdx
  char **v67; // rax
  __int64 v68; // rax
  unsigned int v69; // ebp
  __int64 v70; // rax
  __int64 v71; // rax
  char *v72; // rcx
  __m128i v73; // xmm0
  _DWORD *v74; // rsi
  size_t v75; // rdx
  char *v76; // rax
  unsigned int v77; // eax
  __int64 v78; // rdx
  int v79; // eax
  char **v80; // rdx
  _DWORD *v81; // rdx
  unsigned int v82; // r8d
  unsigned int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned int v86; // eax
  __int64 v87; // rdx
  int v88; // eax
  char *v89; // rdx
  bool v90; // cc
  unsigned int v91; // eax
  unsigned int v92; // eax
  __int64 v93; // rdx
  _QWORD *v94; // rax
  _QWORD *v95; // rdi
  unsigned int v96; // ebx
  unsigned int v97; // edx
  unsigned int *v98; // rax
  __int64 v99; // rdx
  unsigned int v100; // ebp
  unsigned int v101; // edx
  unsigned int *v102; // rax
  __int64 v103; // rdx
  unsigned int v104; // ebx
  unsigned int v105; // edx
  unsigned int *v106; // rax
  unsigned int v107; // ebp
  unsigned int v108; // r13d
  unsigned int v109; // ebx
  size_t v110; // rsi
  unsigned int *v111; // rax
  unsigned int v112; // eax
  char *v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rdx
  _DWORD *v116; // rax
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  unsigned int v119; // ebx
  unsigned int v120; // edx
  unsigned int *v121; // rax
  __int64 i; // rax
  __int64 v123; // rax
  _QWORD *v124; // rbp
  __int64 v126; // [rsp+10h] [rbp-98h]
  char *v127; // [rsp+18h] [rbp-90h]
  char *v128; // [rsp+20h] [rbp-88h]
  unsigned int v129; // [rsp+28h] [rbp-80h]
  unsigned int v130; // [rsp+2Ch] [rbp-7Ch]
  _QWORD *v131; // [rsp+30h] [rbp-78h]
  unsigned int v132; // [rsp+38h] [rbp-70h]
  unsigned int v133; // [rsp+3Ch] [rbp-6Ch]
  __int64 v134[11]; // [rsp+50h] [rbp-58h] BYREF

  v132 = a2;
  v131 = a3;
  v11 = sub_186B270(0x18u);
  v12 = *(char **)(a1 + 288);
  *(_DWORD *)(v11 + 16) = 0;
  v13 = v11;
  *(_OWORD *)v11 = 0;
  if ( v12 )
  {
    v14 = *((_DWORD *)v12 - 1);
    if ( v14 == *((_DWORD *)v12 - 2) )
    {
      v51 = (3 * v14 + 1) >> 1;
      v52 = 8 * v51 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v52 || v14 >= v51 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v134, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v134);
        sub_233E40((__int64)v134);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (unsigned int *)sub_186B300(v12 - 8, v52);
      v54 = v53[1];
      v12 = (char *)(v53 + 2);
      *v53 = v51;
      *(_QWORD *)(a1 + 288) = v53 + 2;
      LODWORD(v53) = v54;
      v17 = (__int64 *)&v12[8 * v54];
      result = (unsigned int)((_DWORD)v53 + 1);
    }
    else
    {
      v15 = v14;
      result = v14 + 1;
      v17 = (__int64 *)&v12[8 * v15];
    }
  }
  else
  {
    v118 = (_QWORD *)sub_186B270(0x18u);
    v12 = (char *)(v118 + 1);
    *v118 = 2;
    result = 1;
    *(_QWORD *)(a1 + 288) = v12;
    v17 = (__int64 *)v12;
  }
  v18 = v131;
  *v17 = v13;
  *((_DWORD *)v12 - 1) = result;
  if ( *v18 )
    v130 = *(_DWORD *)(*v18 - 4LL);
  else
    v130 = 0;
  v129 = 0;
  v133 = 0;
  while ( v129 < (unsigned int)result )
  {
    v19 = &v12[8 * v129];
    v126 = v129;
    v20 = *(_QWORD *)v19;
    v21 = *(_QWORD *)(*(_QWORD *)v19 + 8LL);
    if ( v21 )
    {
      v22 = *(_DWORD *)(v21 - 4);
      if ( v22 )
      {
        v23 = v22;
        v127 = &v12[8 * v129];
        v22 = 0;
        v128 = v12;
        v24 = v21;
        v25 = v21 + 4 * v23;
        do
        {
          v24 += 4;
          v22 += __popcountdi2();
        }
        while ( v25 != v24 );
        v19 = v127;
        v12 = v128;
      }
    }
    else
    {
      v22 = 0;
    }
    if ( *(_DWORD *)(a1 + 96) == v22 )
    {
      v39 = *(_QWORD **)v20;
      if ( *(_QWORD *)v20 )
        v40 = *((_DWORD *)v39 - 1);
      else
        v40 = 0;
      v41 = sub_15E1EC0(*(_QWORD *)a1, v40, (int)v39);
      v42 = v41;
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
      v43 = *(_DWORD *)(a4 + 16);
      v44 = *(_DWORD *)(a4 + 20);
      if ( v43 >= v44 )
      {
        v48 = 2 * v44;
        v45 = sub_186B270(8 * v48);
        v43 = *(_DWORD *)(a4 + 16);
        v49 = *(_QWORD **)(a4 + 8);
        if ( v43 )
        {
          if ( v43 - 1 <= 2 || (_QWORD *)v45 == v49 + 1 )
          {
            for ( i = 0; i != v43; ++i )
              *(_QWORD *)(v45 + i * 8) = v49[i];
          }
          else
          {
            v50 = 0;
            do
            {
              *(__m128i *)(v45 + v50 * 8) = _mm_loadu_si128((const __m128i *)&v49[v50]);
              v50 += 2;
            }
            while ( 2LL * (v43 >> 1) != v50 );
            if ( (v43 & 1) != 0 )
              *(_QWORD *)(v45 + 8LL * (v43 & 0xFFFFFFFE)) = v49[v43 & 0xFFFFFFFE];
          }
        }
        if ( v49 != (_QWORD *)(a4 + 24) && v49 )
        {
          sub_186B220(v49);
          v43 = *(_DWORD *)(a4 + 16);
        }
        *(_QWORD *)(a4 + 8) = v45;
        *(_DWORD *)(a4 + 20) = v48;
      }
      else
      {
        v45 = *(_QWORD *)(a4 + 8);
      }
      v46 = v43;
      v47 = v43 + 1;
      *(_QWORD *)(v45 + 8 * v46) = v42;
      *(_DWORD *)(a4 + 16) = v47;
      result = v132;
      if ( v47 >= v132 )
        return result;
LABEL_37:
      v12 = *(char **)(a1 + 288);
      if ( !v12 )
        return result;
      goto LABEL_38;
    }
    v26 = *(_DWORD *)(v20 + 16);
    result = v130;
    if ( v26 >= v130 )
      goto LABEL_37;
    v27 = *(_QWORD *)(*v131 + 8LL * v26);
    v28 = *(unsigned int *)(a1 + 128);
    v29 = *(char **)(a1 + 120);
    v30 = *(_DWORD *)(v27 + 12);
    v31 = v28 - 1;
    v28 *= 24;
    v32 = 3LL * (v30 & v31);
    v33 = &v29[v28];
    v34 = 8 * v32;
    v35 = &v29[v34];
    if ( v34 == v28 )
    {
LABEL_22:
      while ( v35 != v29 )
      {
        v38 = *(_QWORD *)v29;
        if ( *(_QWORD *)v29 > 1u )
        {
          if ( *(_DWORD *)(v38 + 12) == v30 && v27 == v38 )
          {
            v36 = v29;
            goto LABEL_58;
          }
        }
        else if ( !v38 )
        {
          break;
        }
        v29 += 24;
      }
LABEL_154:
      BUG();
    }
    v36 = &v29[v34];
    while ( 1 )
    {
      while ( 1 )
      {
        v37 = *(_QWORD *)v36;
        if ( *(_QWORD *)v36 > 1u )
          break;
        if ( !v37 )
          goto LABEL_154;
        v36 += 24;
        if ( v33 == v36 )
          goto LABEL_22;
      }
      if ( *(_DWORD *)(v37 + 12) == v30 && v27 == v37 )
        break;
      v36 += 24;
      if ( v33 == v36 )
        goto LABEL_22;
    }
LABEL_58:
    v55 = *((_QWORD *)v36 + 1);
    if ( !v55 )
    {
LABEL_96:
      *(_QWORD *)v19 = 0;
      *(_DWORD *)(v20 + 16) = v26 + 1;
      v92 = *((_DWORD *)v12 - 2);
      if ( *((_DWORD *)v12 - 1) == v92 )
      {
        v104 = (3 * v92 + 1) >> 1;
        v105 = 8 * v104 + 8;
        if ( 8 * v92 + 8 >= v105 || v92 >= v104 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v134, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v134);
          sub_233E40((__int64)v134);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v106 = (unsigned int *)sub_186B300(v12 - 8, v105);
        v12 = (char *)(v106 + 2);
        *v106 = v104;
        *(_QWORD *)(a1 + 288) = v106 + 2;
      }
      else
      {
        v12 = *(char **)(a1 + 288);
      }
      v93 = *((unsigned int *)v12 - 1);
      ++v129;
      *(_QWORD *)&v12[8 * v93] = v20;
      *((_DWORD *)v12 - 1) = v93 + 1;
      goto LABEL_39;
    }
    if ( v21 )
    {
      v56 = *(_DWORD *)(v55 - 4);
      v57 = *(_DWORD *)(v21 - 4);
      if ( v56 <= v57 )
        v57 = *(_DWORD *)(v55 - 4);
      if ( v57 )
      {
        v58 = 0;
        while ( (*(_DWORD *)(v55 + v58) & ~*(_DWORD *)(v21 + v58)) == 0 )
        {
          v58 += 4;
          if ( 4LL * v57 == v58 )
            goto LABEL_125;
        }
        goto LABEL_66;
      }
    }
    else
    {
      v56 = *(_DWORD *)(v55 - 4);
      v57 = 0;
    }
LABEL_125:
    if ( v57 >= v56 )
      goto LABEL_96;
    v116 = (_DWORD *)(v55 + 4LL * v57);
    while ( !*v116 )
    {
      if ( ++v116 == (_DWORD *)(v55 + 4 * (v57 + (unsigned __int64)(v56 - 1 - v57)) + 4) )
        goto LABEL_96;
    }
LABEL_66:
    v127 = *(char **)(*v131 + 8LL * v26);
    v59 = (char ***)sub_186B270(0x18u);
    v60 = v127;
    *v59 = nullptr;
    v61 = v59;
    if ( !*(_QWORD *)v20 )
    {
      v68 = *(_QWORD *)(v20 + 8);
      v61[1] = nullptr;
      if ( !v68 )
      {
        *((_DWORD *)v61 + 4) = *(_DWORD *)(v20 + 16);
LABEL_101:
        v127 = v60;
        v94 = (_QWORD *)sub_186B270(0x18u);
        v72 = (char *)v61[1];
        v60 = v127;
        v95 = v94;
        *v94 = 2;
        v79 = 1;
        v64 = (char **)(v95 + 1);
        *v61 = v64;
        v80 = v64;
        goto LABEL_76;
      }
      goto LABEL_70;
    }
    v62 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)v20 - 8LL));
    v128 = v60;
    v127 = (char *)v62.m128i_i64[0];
    v63 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v62) + 8);
    v62.m128i_i64[0] = (__int64)v127;
    v60 = v128;
    v64 = (char **)(v63 + 1);
    *v61 = (char **)(v63 + 1);
    v65 = *(_QWORD **)v20;
    *v63 = v62.m128i_i64[0];
    if ( v65 )
    {
      v66 = 8LL * *((unsigned int *)v65 - 1);
      if ( v66 > 8 )
      {
        v127 = v60;
        v67 = (char **)memmove(v64, v65, v66);
        v61[1] = nullptr;
        v60 = v127;
        v64 = v67;
        v68 = *(_QWORD *)(v20 + 8);
        if ( !v68 )
          goto LABEL_115;
        goto LABEL_70;
      }
      if ( v66 == 8 )
        v63[1] = *v65;
    }
    v61[1] = nullptr;
    v68 = *(_QWORD *)(v20 + 8);
    if ( !v68 )
    {
LABEL_115:
      v72 = nullptr;
      *((_DWORD *)v61 + 4) = *(_DWORD *)(v20 + 16);
      goto LABEL_74;
    }
LABEL_70:
    v69 = *(_DWORD *)(v68 - 4);
    v70 = *(unsigned int *)(v68 - 8);
    v128 = v60;
    LODWORD(v127) = v70;
    v71 = sub_186B270(4 * v70 + 8);
    v72 = (char *)(v71 + 8);
    v73 = _mm_cvtsi32_si128((unsigned int)v127);
    v60 = v128;
    v61[1] = (char **)(v71 + 8);
    v74 = *(_DWORD **)(v20 + 8);
    *(_QWORD *)v71 = _mm_unpacklo_epi32(v73, _mm_cvtsi32_si128(v69)).m128i_u64[0];
    if ( v74 )
    {
      v75 = 4LL * (unsigned int)*(v74 - 1);
      if ( v75 <= 4 )
      {
        v64 = *v61;
        if ( v75 == 4 )
          *(_DWORD *)(v71 + 8) = *v74;
      }
      else
      {
        v127 = v60;
        v76 = (char *)memmove((void *)(v71 + 8), v74, v75);
        v64 = *v61;
        v60 = v127;
        v72 = v76;
      }
    }
    else
    {
      v64 = *v61;
    }
    *((_DWORD *)v61 + 4) = *(_DWORD *)(v20 + 16);
    if ( !v64 )
      goto LABEL_101;
LABEL_74:
    v77 = *((_DWORD *)v64 - 1);
    if ( v77 == *((_DWORD *)v64 - 2) )
    {
      v100 = (3 * v77 + 1) >> 1;
      v101 = 8 * v100 + 8;
      if ( 8 * v77 + 8 >= v101 || v77 >= v100 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v134, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v134);
        sub_233E40((__int64)v134);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v127 = v60;
      v102 = (unsigned int *)sub_186B300(v64 - 1, v101);
      v72 = (char *)v61[1];
      v60 = v127;
      v103 = v102[1];
      v64 = (char **)(v102 + 2);
      *v102 = v100;
      *v61 = (char **)(v102 + 2);
      LODWORD(v102) = v103;
      v80 = &v64[v103];
      v79 = (_DWORD)v102 + 1;
    }
    else
    {
      v78 = v77;
      v79 = v77 + 1;
      v80 = &v64[v78];
    }
LABEL_76:
    *v80 = v60;
    v81 = *((_DWORD **)v36 + 1);
    *((_DWORD *)v64 - 1) = v79;
    if ( !v81 )
      goto LABEL_90;
    v82 = *(v81 - 1);
    if ( !v72 )
    {
      if ( !v82 )
        goto LABEL_90;
      v107 = v82 + 1;
      if ( v82 == -1 )
      {
        v82 = -1;
        if ( (unsigned __int64)-(__int64)(v81 + 1) <= 8 )
          goto LABEL_143;
        goto LABEL_83;
      }
      LODWORD(v128) = *(v81 - 1);
      v117 = (_QWORD *)sub_186B270(0x10u);
      v127 = v36;
      v72 = (char *)(v117 + 1);
      *v117 = 2;
      v61[1] = (char **)(v117 + 1);
      v108 = 0;
      goto LABEL_121;
    }
    v83 = *((_DWORD *)v72 - 1);
    if ( v83 >= v82 )
    {
      if ( !v82 )
        goto LABEL_90;
      goto LABEL_80;
    }
    v107 = v82 + 1;
    if ( v83 < v82 + 1 )
    {
      v127 = v36;
      v108 = v83;
      LODWORD(v128) = v82;
LABEL_121:
      while ( 1 )
      {
        v112 = *((_DWORD *)v72 - 2);
        if ( v112 >= v107 )
          break;
        v109 = (3 * v112 + 1) >> 1;
        v110 = 4 * v109 + 8;
        if ( 4 * v112 + 8 >= (unsigned int)v110 || v112 >= v109 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v134, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v134);
          sub_233E40((__int64)v134);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v111 = (unsigned int *)sub_186B300(v72 - 8, v110);
        v72 = (char *)(v111 + 2);
        *v111 = v109;
        v61[1] = (char **)(v111 + 2);
      }
      *((_DWORD *)v72 - 1) = v107;
      v113 = v127;
      v114 = 4LL * v108;
      v115 = 4LL * v107;
      v82 = (unsigned int)v128;
      if ( v114 == v115 )
      {
        v81 = *((_DWORD **)v127 + 1);
      }
      else
      {
        v128 = v72;
        LODWORD(v127) = v82;
        memset(&v72[v114], 0, v115 - v114);
        v81 = *((_DWORD **)v113 + 1);
        v82 = (unsigned int)v127;
        v72 = v128;
      }
      goto LABEL_80;
    }
    *((_DWORD *)v72 - 1) = v107;
LABEL_80:
    if ( v82 <= 1 )
    {
      *(_DWORD *)v72 |= *v81;
      goto LABEL_90;
    }
    if ( (unsigned __int64)(v72 - (char *)(v81 + 1)) <= 8 )
    {
LABEL_143:
      v123 = 0;
      do
      {
        *(_DWORD *)&v72[4 * v123] |= v81[v123];
        ++v123;
      }
      while ( (unsigned int)v123 < v82 );
      goto LABEL_90;
    }
    if ( v82 <= 3 )
    {
      LODWORD(v85) = 0;
LABEL_87:
      *(_QWORD *)&v72[4 * (unsigned int)v85] = _mm_or_si128(
                                                 _mm_loadl_epi64((const __m128i *)&v81[(unsigned int)v85]),
                                                 _mm_loadl_epi64((const __m128i *)&v72[4 * (unsigned int)v85])).m128i_u64[0];
      if ( (v82 & 1) == 0 )
        goto LABEL_90;
      v85 = (v82 & 0xFFFFFFFE) + (unsigned int)v85;
LABEL_89:
      *(_DWORD *)&v72[4 * v85] |= v81[v85];
      goto LABEL_90;
    }
LABEL_83:
    v84 = 0;
    do
    {
      *(__m128i *)&v72[v84 * 4] = _mm_or_si128(
                                    _mm_loadu_si128((const __m128i *)&v72[v84 * 4]),
                                    _mm_loadu_si128((const __m128i *)&v81[v84]));
      v84 += 4;
    }
    while ( 4LL * (v82 >> 2) != v84 );
    if ( (v82 & 3) != 0 )
    {
      v85 = v82 & 0xFFFFFFFC;
      v82 -= v85;
      if ( v82 != 1 )
        goto LABEL_87;
      goto LABEL_89;
    }
LABEL_90:
    v12 = *(char **)(a1 + 288);
    ++*((_DWORD *)v61 + 4);
    if ( v12 )
    {
      v86 = *((_DWORD *)v12 - 1);
      if ( v86 == *((_DWORD *)v12 - 2) )
      {
        v96 = (3 * v86 + 1) >> 1;
        v97 = 8 * v96 + 8;
        if ( 8 * v86 + 8 >= v97 || v86 >= v96 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v134, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v134);
          sub_233E40((__int64)v134);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v98 = (unsigned int *)sub_186B300(v12 - 8, v97);
        v99 = v98[1];
        v12 = (char *)(v98 + 2);
        *v98 = v96;
        *(_QWORD *)(a1 + 288) = v98 + 2;
        LODWORD(v98) = v99;
        v89 = &v12[8 * v99];
        v88 = (_DWORD)v98 + 1;
      }
      else
      {
        v87 = v86;
        v88 = v86 + 1;
        v89 = &v12[8 * v87];
      }
    }
    else
    {
      v124 = (_QWORD *)sub_186B270(0x18u);
      *v124 = 2;
      v88 = 1;
      v12 = (char *)(v124 + 1);
      *(_QWORD *)(a1 + 288) = v12;
      v89 = v12;
    }
    v90 = v133 <= 0x1F;
    *(_QWORD *)v89 = v61;
    *((_DWORD *)v12 - 1) = v88;
    if ( v90 )
    {
      *(_QWORD *)&v12[8 * v126] = 0;
      ++*(_DWORD *)(v20 + 16);
      v91 = *((_DWORD *)v12 - 1);
      if ( v91 == *((_DWORD *)v12 - 2) )
      {
        v119 = (3 * v91 + 1) >> 1;
        v120 = 8 * v119 + 8;
        if ( 8 * v91 + 8 >= v120 || v91 >= v119 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v134, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v134);
          sub_233E40((__int64)v134);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v121 = (unsigned int *)sub_186B300(v12 - 8, v120);
        v12 = (char *)(v121 + 2);
        *v121 = v119;
        v91 = v121[1];
        *(_QWORD *)(a1 + 288) = v12;
      }
      ++v133;
      *(_QWORD *)&v12[8 * v91] = v20;
      ++v129;
      *((_DWORD *)v12 - 1) = v91 + 1;
      goto LABEL_39;
    }
LABEL_38:
    ++v129;
LABEL_39:
    result = *((unsigned int *)v12 - 1);
  }
  return result;
}

