__int64 __fastcall sub_836A60(__int64 a1, _QWORD *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int *v12; // rdx
  unsigned int *v13; // r14
  unsigned int v14; // r15d
  _QWORD *v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 *v18; // rax
  unsigned __int64 v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // ebp
  unsigned int v23; // edx
  unsigned int *v24; // rax
  __int64 *v25; // r15
  unsigned int *v26; // r14
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // r9
  __int64 *v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __m128i v33; // xmm0
  unsigned __int64 v34; // rax
  __int64 v35; // rsi
  __int64 *v36; // r12
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // edx
  __int64 *v42; // r15
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  _QWORD *v46; // rbp
  __int64 v47; // r14
  _QWORD *v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  __int64 *v52; // rcx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  unsigned int *v55; // rax
  __int64 v56; // r12
  __int64 v57; // rax
  _QWORD *v58; // rbp
  _QWORD *v59; // rdx
  unsigned int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  _QWORD *v63; // rcx
  __int64 v64; // rbp
  __int32 v65; // r12d
  __m128i *v66; // rbx
  unsigned int v67; // ecx
  __int64 v68; // r8
  __m128i *v69; // rbp
  __int64 v70; // rax
  __m128i *v71; // rcx
  __m128i *v72; // rax
  __m128i *v73; // rsi
  int v74; // edx
  _QWORD *v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // rcx
  int v78; // eax
  __int64 *v79; // rcx
  unsigned __int64 v80; // rcx
  __int64 v81; // rdx
  __int32 v82; // eax
  _QWORD *v83; // rax
  unsigned int v84; // ebx
  size_t v85; // rsi
  unsigned int *v86; // rax
  __int64 v87; // rcx
  unsigned int v88; // ecx
  size_t v89; // rsi
  unsigned int *v90; // rax
  unsigned int v91; // r12d
  size_t v92; // rsi
  unsigned int *v93; // rax
  __int64 v94; // rcx
  unsigned int v95; // ebp
  size_t v96; // rsi
  unsigned int *v97; // rax
  __int64 v98; // rax
  __m128i *v99; // rax
  int v100; // r9d
  __m128i *v101; // rdx
  const __m128i *v102; // rax
  __m128i *v103; // r11
  __int64 v104; // rdx
  __m128i *v105; // rsi
  __m128i *v106; // rdx
  __m128i v107; // xmm0
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  _QWORD *v112; // rax
  __int64 *v113; // rbx
  __int64 v114; // rcx
  __int64 v115; // rsi
  __int64 *v116; // rbp
  __int64 v117; // rax
  unsigned int v118; // [rsp+4h] [rbp-D4h]
  unsigned int v119; // [rsp+4h] [rbp-D4h]
  unsigned int v120; // [rsp+8h] [rbp-D0h]
  __int64 v121; // [rsp+8h] [rbp-D0h]
  unsigned int v122; // [rsp+10h] [rbp-C8h]
  unsigned int v123; // [rsp+10h] [rbp-C8h]
  unsigned int v124; // [rsp+10h] [rbp-C8h]
  __int64 *v125; // [rsp+18h] [rbp-C0h]
  __int64 v126; // [rsp+20h] [rbp-B8h]
  size_t v127; // [rsp+30h] [rbp-A8h]
  __int64 v128; // [rsp+38h] [rbp-A0h]
  unsigned int *v129; // [rsp+40h] [rbp-98h]
  int v131; // [rsp+58h] [rbp-80h]
  __int64 v132; // [rsp+68h] [rbp-70h]
  unsigned int *v133; // [rsp+78h] [rbp-60h] BYREF
  __int64 v134[11]; // [rsp+80h] [rbp-58h] BYREF

  v7 = sub_186B270(0x3E8u);
  sub_835BE0(v7, a2, *(_DWORD *)(a1 + 12));
  v8 = *(_QWORD *)(v7 + 88);
  if ( v8 )
  {
    v9 = 0;
    v129 = nullptr;
    if ( *(_DWORD *)(v8 - 4) )
    {
LABEL_3:
      v133 = v129;
      sub_2FD3F0(&v133);
      v10 = *(_QWORD *)(v7 + 88);
      v129 = v133;
      v11 = *(v133 - 1);
      while ( 1 )
      {
        v129[v11] = v9++;
        ++*(v129 - 1);
        if ( !v10 )
          break;
        if ( v9 >= *(_DWORD *)(v10 - 4) )
        {
          v12 = *(unsigned int **)(a1 + 88);
          v13 = v12;
          if ( v12 )
          {
            v14 = *(_DWORD *)(v10 - 4);
            goto LABEL_10;
          }
          v18 = *(__int64 **)(v7 + 320);
          if ( !v18 )
            goto LABEL_133;
          goto LABEL_142;
        }
        v11 = *(v129 - 1);
        if ( (_DWORD)v11 == *(v129 - 2) )
          goto LABEL_3;
      }
      v12 = *(unsigned int **)(a1 + 88);
      v13 = v12;
      if ( !v12 )
      {
LABEL_14:
        v18 = *(__int64 **)(v7 + 320);
        if ( !v18 )
          goto LABEL_134;
        goto LABEL_142;
      }
      v14 = 0;
LABEL_10:
      while ( v14 < *(v12 - 1) )
      {
        v15 = (_QWORD *)sub_7CC270(*(_QWORD *)(a1 + 80), a2, *(unsigned int ***)&v12[2 * v14]);
        v16 = sub_852C00(v7, *v15);
        if ( !v129 || (v17 = *(v129 - 1), (_DWORD)v17 == *(v129 - 2)) )
        {
          v133 = v129;
          sub_2FD3F0(&v133);
          v129 = v133;
          v17 = *(v133 - 1);
        }
        ++v14;
        v129[v17] = v16;
        ++*(v129 - 1);
        v12 = *(unsigned int **)(a1 + 88);
        v13 = v12;
        if ( !v12 )
          goto LABEL_14;
      }
      v19 = *(_QWORD *)(v7 + 320);
      v18 = (__int64 *)v19;
      v118 = *(v12 - 1);
      if ( v19 )
      {
        v120 = *(_DWORD *)(v19 - 4);
        if ( v120 >= *(v12 - 1) )
        {
          v114 = 8LL * v118;
          v113 = (__int64 *)(v19 + v114);
          goto LABEL_143;
        }
      }
      else
      {
        if ( !v118 )
        {
          v40 = *(_QWORD *)(a1 + 320);
          goto LABEL_39;
        }
        v120 = 0;
        v112 = (_QWORD *)sub_186B270(0x18u);
        *v112 = 2;
        v19 = (unsigned __int64)(v112 + 1);
        *(_QWORD *)(v7 + 320) = v112 + 1;
      }
      while ( 1 )
      {
        v20 = *(_DWORD *)(v19 - 8);
        v21 = v118;
        if ( v20 >= v118 )
          break;
        while ( 1 )
        {
          v22 = (3 * v20 + 1) >> 1;
          v23 = 8 * v22 + 8;
          if ( 8 * v20 + 8 >= v23 || v20 >= v22 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v134, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v134);
            sub_233E40((__int64)v134);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v24 = (unsigned int *)sub_186B270(v23);
          v25 = *(__int64 **)(v7 + 320);
          v26 = v24;
          v19 = (unsigned __int64)(v24 + 2);
          if ( !v25 )
            break;
          v27 = *((unsigned int *)v25 - 1);
          v28 = 8 * v27;
          v24[1] = v27;
          v29 = &v25[v27];
          if ( v25 != v29 )
          {
            v30 = v25;
            if ( (unsigned __int64)(v28 - 8) <= 8 || v19 < (unsigned __int64)(v25 + 2) && v25 < (__int64 *)v26 + 3 )
            {
              v80 = v19;
              do
              {
                v81 = *v30;
                *v30++ = 0;
                v80 += 8LL;
                *(_QWORD *)(v80 - 8) = v81;
              }
              while ( v30 != v29 );
            }
            else
            {
              v31 = 0;
              v32 = ((unsigned __int64)(v28 - 8) >> 3) + 1;
              do
              {
                v33 = _mm_loadu_si128((const __m128i *)&v25[v31 / 2]);
                *(_OWORD *)&v25[v31 / 2] = 0;
                *(__m128i *)&v26[v31 + 2] = v33;
                v31 += 4LL;
              }
              while ( v31 != 4 * (v32 >> 1) );
              if ( (v32 & 1) != 0 )
              {
                v34 = 2 * (v32 & 0xFFFFFFFFFFFFFFFELL);
                v35 = v25[v34 / 2];
                v25[v34 / 2] = 0;
                *(_QWORD *)&v26[v34 + 2] = v35;
              }
            }
          }
          v36 = &v25[v27];
          if ( (_DWORD)v27 )
          {
            do
            {
              while ( 1 )
              {
                v37 = *v25;
                if ( !*v25 )
                  break;
                ++v25;
                sub_186B220((void *)(v37 - 8));
                if ( v25 == v36 )
                  goto LABEL_34;
              }
              ++v25;
            }
            while ( v25 != v36 );
LABEL_34:
            v25 = *(__int64 **)(v7 + 320);
          }
          sub_186B220(v25 - 1);
          *v26 = v22;
          v21 = v118;
          v20 = *(_DWORD *)(v19 - 8);
          *(_QWORD *)(v7 + 320) = v19;
          if ( v20 >= v118 )
            goto LABEL_36;
        }
        v24[1] = 0;
        *(_QWORD *)(v7 + 320) = v19;
        *v24 = v22;
      }
LABEL_36:
      *(_DWORD *)(v19 - 4) = v21;
      v38 = 8LL * v21;
      v39 = 8LL * v120;
      v13 = *(unsigned int **)(a1 + 88);
      if ( v39 != v38 )
        memset((void *)(v19 + v39), 0, v38 - v39);
      goto LABEL_38;
    }
    v12 = *(unsigned int **)(a1 + 88);
    v129 = v12;
    if ( v12 )
    {
      v129 = nullptr;
      v14 = 0;
      v13 = *(unsigned int **)(a1 + 88);
      goto LABEL_10;
    }
  }
  else
  {
    v14 = 0;
    v129 = nullptr;
    v12 = *(unsigned int **)(a1 + 88);
    v13 = v12;
    if ( v12 )
      goto LABEL_10;
  }
  v18 = *(__int64 **)(v7 + 320);
  if ( !v18 )
    return v7;
LABEL_142:
  v118 = 0;
  v113 = v18;
  v114 = 0;
  v120 = *((_DWORD *)v18 - 1);
LABEL_143:
  v115 = 8LL * v120;
  v116 = &v18[(unsigned __int64)v115 / 8];
  if ( v115 != v114 )
  {
    do
    {
      while ( 1 )
      {
        v117 = *v113;
        if ( !*v113 )
          break;
        ++v113;
        sub_186B220((void *)(v117 - 8));
        if ( v113 == v116 )
          goto LABEL_146;
      }
      ++v113;
    }
    while ( v116 != v113 );
LABEL_146:
    v12 = *(unsigned int **)(a1 + 88);
    v18 = *(__int64 **)(v7 + 320);
  }
  v13 = v12;
  *((_DWORD *)v18 - 1) = v118;
LABEL_38:
  v40 = *(_QWORD *)(a1 + 320);
  if ( !v13 )
    goto LABEL_133;
LABEL_39:
  v41 = *(v13 - 1);
  if ( !v40 )
    goto LABEL_133;
  if ( v41 > *(_DWORD *)(v40 - 4) )
    v41 = *(_DWORD *)(v40 - 4);
  if ( !v41 )
    goto LABEL_133;
  v128 = 0;
  v132 = v41;
  while ( 2 )
  {
    v42 = *(__int64 **)(v40 + 8 * v128);
    if ( !v42 )
      goto LABEL_71;
    v125 = &v42[*((unsigned int *)v42 - 1)];
    if ( v125 == v42 )
      goto LABEL_71;
    v43 = v129[v128];
    v119 = v129[v128];
    v121 = 4 * v43;
    v126 = 8 * v43;
    do
    {
      v44 = *v42;
      v45 = sub_88BFD0(v7);
      v46 = (_QWORD *)(*(_QWORD *)(v7 + 320) + v126);
      v47 = v45;
      v48 = (_QWORD *)*v46;
      if ( *v46 )
      {
        v49 = *((_DWORD *)v48 - 1);
        if ( v49 == *((_DWORD *)v48 - 2) )
        {
          v91 = (3 * v49 + 1) >> 1;
          v92 = 8 * v91 + 8;
          if ( 8 * v49 + 8 >= (unsigned int)v92 || v49 >= v91 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v134, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v134);
            sub_233E40((__int64)v134);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v93 = (unsigned int *)sub_186B300(v48 - 1, v92);
          v94 = v93[1];
          v48 = v93 + 2;
          *v46 = v93 + 2;
          *v93 = v91;
          LODWORD(v93) = v94;
          v52 = &v48[v94];
          v51 = (_DWORD)v93 + 1;
        }
        else
        {
          v50 = v49;
          v51 = v49 + 1;
          v52 = &v48[v50];
        }
      }
      else
      {
        v108 = (_QWORD *)sub_186B270(0x18u);
        v48 = v108 + 1;
        *v108 = 2;
        v51 = 1;
        *v46 = v48;
        v52 = v48;
      }
      *v52 = v47;
      *((_DWORD *)v48 - 1) = v51;
      v53 = *(_QWORD **)(v7 + 336);
      if ( v53 )
      {
        v54 = *((unsigned int *)v53 - 1);
        if ( (_DWORD)v54 == *((_DWORD *)v53 - 2) )
        {
          v95 = (unsigned int)(3 * v54 + 1) >> 1;
          v96 = 4 * v95 + 8;
          if ( 4 * (int)v54 + 8 >= (unsigned int)v96 || (unsigned int)v54 >= v95 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v134, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v134);
            sub_233E40((__int64)v134);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v97 = (unsigned int *)sub_186B300(v53 - 1, v96);
          v53 = v97 + 2;
          *v97 = v95;
          v98 = v97[1];
          *(_QWORD *)(v7 + 336) = v53;
          v55 = (unsigned int *)v53 + v98;
        }
        else
        {
          v55 = (unsigned int *)v53 + v54;
        }
      }
      else
      {
        v109 = (_QWORD *)sub_186B270(0x10u);
        v53 = v109 + 1;
        *v109 = 2;
        *(_QWORD *)(v7 + 336) = v109 + 1;
        v55 = (unsigned int *)(v109 + 1);
      }
      v56 = *(_QWORD *)(v7 + 80);
      *v55 = v119;
      v57 = *(_QWORD *)(v7 + 328);
      ++*((_DWORD *)v53 - 1);
      v122 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(_DWORD *)(v57 + v121)));
      v58 = (_QWORD *)sub_180C100(v56 + 2144, 24);
      *v58 = off_1C55270;
      v59 = *(_QWORD **)(v56 + 2128);
      v58[2] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v119), _mm_cvtsi32_si128(v122)).m128i_u64[0];
      v58[1] = v7 + 328;
      if ( v59 )
      {
        v60 = *((_DWORD *)v59 - 1);
        if ( v60 == *((_DWORD *)v59 - 2) )
        {
          v88 = (3 * v60 + 1) >> 1;
          v89 = 8 * v88 + 8;
          if ( 8 * v60 + 8 >= (unsigned int)v89 || v60 >= v88 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v134, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v134);
            sub_233E40((__int64)v134);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v123 = (3 * v60 + 1) >> 1;
          v90 = (unsigned int *)sub_186B300(v59 - 1, v89);
          v59 = v90 + 2;
          *(_QWORD *)(v56 + 2128) = v90 + 2;
          *v90 = v123;
          LODWORD(v90) = v90[1];
          v63 = &v59[(unsigned int)v90];
          v62 = (_DWORD)v90 + 1;
        }
        else
        {
          v61 = v60;
          v62 = v60 + 1;
          v63 = &v59[v61];
        }
      }
      else
      {
        v110 = (_QWORD *)sub_186B270(0x18u);
        v59 = v110 + 1;
        v63 = v59;
        *v110 = 2;
        v62 = 1;
        *(_QWORD *)(v56 + 2128) = v59;
      }
      *v63 = v58;
      *((_DWORD *)v59 - 1) = v62;
      ++*(_DWORD *)(*(_QWORD *)(v7 + 328) + v121);
      v64 = *(unsigned int *)(v7 + 304);
      v65 = *(_DWORD *)(v44 + 8) >> 1;
      if ( 3 * (int)v64 < (unsigned int)(4 * (*(_DWORD *)(v7 + 308) + *(_DWORD *)(v7 + 312))) )
      {
        v127 = 24LL * (unsigned int)(2 * v64);
        v99 = (__m128i *)sub_186B270(v127);
        v100 = 2 * v64;
        v66 = v99;
        v68 = v127;
        if ( 2 * (_DWORD)v64 )
        {
          v101 = &v99[3 * (v64 & 0x7FFFFFFF)];
          do
          {
            v99->m128i_i64[0] = 0;
            v99 += 3;
            v99[-2].m128i_i64[1] = 0;
          }
          while ( v99 != v101 );
        }
        v102 = *(const __m128i **)(v7 + 296);
        v67 = v100 - 1;
        v69 = (__m128i *)((char *)v66 + v127);
        v103 = (__m128i *)((char *)v102 + 24 * *(unsigned int *)(v7 + 304));
        if ( v102 != v103 )
        {
          do
          {
            while ( v102->m128i_i32[1] != 2 )
            {
              v102 = (const __m128i *)((char *)v102 + 24);
              if ( v103 == v102 )
                goto LABEL_115;
            }
            v104 = 24LL * (v102->m128i_i32[0] & v67);
            v105 = (__m128i *)((char *)v66 + v104);
            if ( v127 == v104 )
            {
LABEL_120:
              if ( v66 == v105 )
              {
LABEL_127:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v106 = v66;
              while ( v106->m128i_i32[1] )
              {
                v106 = (__m128i *)((char *)v106 + 24);
                if ( v105 == v106 )
                  goto LABEL_127;
              }
            }
            else
            {
              v106 = (__m128i *)((char *)v66 + v104);
              while ( v106->m128i_i32[1] )
              {
                v106 = (__m128i *)((char *)v106 + 24);
                if ( v69 == v106 )
                  goto LABEL_120;
              }
            }
            v107 = _mm_loadu_si128(v102);
            v102 = (const __m128i *)((char *)v102 + 24);
            *v106 = v107;
            v106[1].m128i_i64[0] = v102[-1].m128i_i64[1];
          }
          while ( v103 != v102 );
LABEL_115:
          v103 = *(__m128i **)(v7 + 296);
        }
        if ( v103 )
        {
          v131 = v100;
          v124 = v100 - 1;
          sub_186B220(v103);
          v100 = v131;
          v68 = v127;
          v67 = v124;
        }
        *(_QWORD *)(v7 + 296) = v66;
        *(_DWORD *)(v7 + 304) = v100;
        *(_DWORD *)(v7 + 312) = 0;
      }
      else
      {
        v66 = *(__m128i **)(v7 + 296);
        v67 = v64 - 1;
        v68 = 24 * v64;
        v69 = (__m128i *)((char *)v66 + 24 * v64);
      }
      v70 = 24LL * (v65 & v67);
      v71 = (__m128i *)((char *)v66 + v70);
      if ( v70 != v68 )
      {
        v72 = (__m128i *)((char *)v66 + v70);
        v73 = nullptr;
        while ( 1 )
        {
          v74 = v72->m128i_i32[1];
          if ( v74 == 2 )
          {
            if ( v65 == v72->m128i_i32[0] && v65 == v72->m128i_i32[2] )
            {
              v72->m128i_i32[2] = v65;
              v72[1].m128i_i64[0] = v47;
              v72->m128i_i32[1] = 2;
              goto LABEL_67;
            }
          }
          else
          {
            if ( !v74 )
            {
              if ( v73 )
                goto LABEL_101;
              v73 = v72;
              goto LABEL_102;
            }
            v73 = v72;
          }
          v72 = (__m128i *)((char *)v72 + 24);
          if ( v72 == v69 )
            goto LABEL_82;
        }
      }
      v73 = nullptr;
      while ( 1 )
      {
LABEL_82:
        if ( v71 == v66 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v82 = v66->m128i_i32[1];
        if ( v82 == 2 )
          break;
        if ( !v82 )
        {
          if ( v73 )
LABEL_101:
            --*(_DWORD *)(v7 + 312);
          else
            v73 = v66;
LABEL_102:
          v73->m128i_i32[2] = v65;
          v73[1].m128i_i64[0] = v47;
          v73->m128i_i32[1] = 2;
          v73->m128i_i32[0] = v65;
          ++*(_DWORD *)(v7 + 308);
LABEL_67:
          v75 = *(_QWORD **)(v7 + 520);
          if ( !v75 )
            goto LABEL_87;
          goto LABEL_68;
        }
        v73 = v66;
LABEL_81:
        v66 = (__m128i *)((char *)v66 + 24);
      }
      if ( v65 != v66->m128i_i32[0] || v65 != v66->m128i_i32[2] )
        goto LABEL_81;
      v75 = *(_QWORD **)(v7 + 520);
      v66->m128i_i32[2] = v65;
      v66[1].m128i_i64[0] = v47;
      v66->m128i_i32[1] = 2;
      if ( !v75 )
      {
LABEL_87:
        v83 = (_QWORD *)sub_186B270(0x18u);
        v75 = v83 + 1;
        *(_QWORD *)(v7 + 520) = v83 + 1;
        v79 = v83 + 1;
        *v83 = 2;
        v78 = 1;
        goto LABEL_70;
      }
LABEL_68:
      v76 = *((_DWORD *)v75 - 1);
      if ( v76 == *((_DWORD *)v75 - 2) )
      {
        v84 = (3 * v76 + 1) >> 1;
        v85 = 8 * v84 + 8;
        if ( 8 * v76 + 8 >= (unsigned int)v85 || v76 >= v84 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v134, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v134);
          sub_233E40((__int64)v134);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v86 = (unsigned int *)sub_186B300(v75 - 1, v85);
        v87 = v86[1];
        v75 = v86 + 2;
        *v86 = v84;
        *(_QWORD *)(v7 + 520) = v86 + 2;
        LODWORD(v86) = v87;
        v79 = &v75[v87];
        v78 = (_DWORD)v86 + 1;
      }
      else
      {
        v77 = v76;
        v78 = v76 + 1;
        v79 = &v75[v77];
      }
LABEL_70:
      *v79 = v47;
      ++v42;
      *((_DWORD *)v75 - 1) = v78;
    }
    while ( v125 != v42 );
LABEL_71:
    if ( v132 != ++v128 )
    {
      v40 = *(_QWORD *)(a1 + 320);
      continue;
    }
    break;
  }
LABEL_133:
  if ( v129 )
LABEL_134:
    sub_186B220(v129 - 2);
  return v7;
}

