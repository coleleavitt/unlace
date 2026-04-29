__int64 __fastcall sub_141E80(unsigned __int64 *a1, __int64 a2, __int64 *a3)
{
  _QWORD *exception; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int i; // eax
  int v10; // r13d
  int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // r14d
  char v15; // dl
  unsigned __int64 v16; // rax
  _BYTE *v17; // rsi
  unsigned __int8 v18; // di
  _QWORD *v19; // rax
  _QWORD *v20; // r13
  _QWORD *v21; // rax
  __int64 (__fastcall **v22)(); // rsi
  __int64 v23; // rcx
  _QWORD *v24; // r15
  __int64 (__fastcall *v25)(); // r14
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // al
  __int64 v28; // rax
  int *v29; // r8
  int *v30; // rdi
  __int64 *v31; // r15
  int *v32; // r14
  __int64 v33; // rcx
  int v34; // ebx
  _DWORD *v35; // rdx
  _DWORD *v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rbx
  __int64 (__fastcall *v39)(__int64); // rdx
  __int64 (__fastcall *v40)(__int64, int); // r14
  __int64 v41; // rsi
  __int64 v42; // rax
  int v43; // eax
  int v44; // eax
  int v45; // esi
  __int64 v46; // rdx
  __int64 v47; // rcx
  void *v48; // rbx
  unsigned __int64 v49; // r14
  __m128i v50; // xmm0
  __int64 v51; // rdi
  __int64 *v52; // r14
  __int128 v53; // rdi
  __int64 v54; // rax
  unsigned __int64 *v55; // r15
  unsigned int v56; // r13d
  __int64 v57; // rcx
  __int64 v58; // rsi
  unsigned __int64 v59; // r13
  unsigned __int64 v60; // rbx
  __m128i *v61; // rdx
  __m128i *v62; // rax
  __int64 v63; // r13
  __int64 v64; // rbx
  __m128i *v65; // rax
  int v66; // r8d
  int v67; // r9d
  _QWORD *v68; // rdi
  const char *v69; // rcx
  _QWORD *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rdx
  _DWORD *v74; // r14
  int v75; // eax
  __int64 v76; // rdi
  _QWORD *v77; // rdx
  int **v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 (__fastcall **v81)(); // rdx
  __int64 (__fastcall **v82)(); // rax
  _QWORD *v83; // rdx
  _QWORD *j; // rax
  _QWORD *v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // rdi
  __int64 v88; // rax
  __m128i v89; // xmm1
  __int64 v90; // rax
  __m128i v91; // xmm0
  _QWORD *v92; // rax
  _QWORD *v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rax
  char *v96; // r14
  __int64 v97; // rcx
  __int128 v98; // rdi
  __int64 v99; // rax
  __m128i v100; // xmm0
  __m128i v101; // xmm1
  __int64 v102; // rsi
  _QWORD *v103; // r14
  __int64 v104; // rdi
  __int64 v105; // r13
  __int64 v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 *v110; // rbx
  __int64 v111; // rdi
  __int64 v112; // r14
  __int32 v113; // eax
  size_t v114; // r13
  __int64 v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rdx
  _QWORD *v119; // rsi
  unsigned __int64 v120; // rcx
  __int64 v121; // [rsp+8h] [rbp-1D8h]
  __int64 v122; // [rsp+10h] [rbp-1D0h]
  _QWORD *v125; // [rsp+28h] [rbp-1B8h]
  unsigned int v126; // [rsp+34h] [rbp-1ACh]
  __int64 v127; // [rsp+38h] [rbp-1A8h]
  int v128; // [rsp+40h] [rbp-1A0h]
  unsigned int v129; // [rsp+44h] [rbp-19Ch]
  char v130; // [rsp+4Bh] [rbp-195h]
  int v131; // [rsp+4Ch] [rbp-194h]
  _QWORD *v132; // [rsp+50h] [rbp-190h]
  unsigned int v133; // [rsp+70h] [rbp-170h]
  int v134; // [rsp+74h] [rbp-16Ch]
  char v135; // [rsp+74h] [rbp-16Ch]
  unsigned __int8 *v136; // [rsp+78h] [rbp-168h] BYREF
  __m128i v137; // [rsp+80h] [rbp-160h] BYREF
  __m128i v138; // [rsp+90h] [rbp-150h] BYREF
  int v139; // [rsp+A0h] [rbp-140h]
  void *src; // [rsp+B0h] [rbp-130h] BYREF
  __int128 v141; // [rsp+B8h] [rbp-128h]
  __int64 v142; // [rsp+D0h] [rbp-110h] BYREF
  __int128 v143; // [rsp+D8h] [rbp-108h]
  __m128i *v144; // [rsp+F0h] [rbp-F0h] BYREF
  __int128 v145; // [rsp+F8h] [rbp-E8h]
  __int64 v146[2]; // [rsp+110h] [rbp-D0h] BYREF
  __int64 v147; // [rsp+120h] [rbp-C0h] BYREF
  __int128 v148; // [rsp+128h] [rbp-B8h]
  __m128i v149; // [rsp+140h] [rbp-A0h] BYREF
  __int64 v150; // [rsp+150h] [rbp-90h]
  __int128 v151; // [rsp+158h] [rbp-88h]
  __int64 (__fastcall **v152)(); // [rsp+170h] [rbp-70h] BYREF
  __int128 v153; // [rsp+178h] [rbp-68h]
  __int128 v154; // [rsp+188h] [rbp-58h]
  __int64 *v155; // [rsp+198h] [rbp-48h]
  char v156; // [rsp+1A0h] [rbp-40h]
  unsigned __int64 v157; // [rsp+1A8h] [rbp-38h]

  v157 = __readfsqword(0x28u);
  v129 = 0;
  v127 = *(_QWORD *)(a1[5] + 1504);
  if ( (*(_BYTE *)(v127 + 49) & 0x10) != 0 )
  {
    v122 = sub_110340((__int64)a1, 0);
    if ( v122 )
    {
      v138 = 0u;
      v6 = *(_QWORD *)(v122 + 8);
      ++*(_DWORD *)(v122 + 24);
      v139 = -1;
      v7 = 3 * v6;
      v8 = *(_QWORD *)v122;
      v149 = 0u;
      LODWORD(v150) = -1;
      v136 = (unsigned __int8 *)(v8 + 8 * v7 - 24);
      for ( i = sub_64960((_QWORD *)a2, 0); ; i = sub_64960((_QWORD *)a2, v10 + v14) )
      {
        v10 = i;
        if ( i == *(_DWORD *)(a2 + 8) )
          break;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v127 + 32LL))(v127, i);
        v12 = sub_64BA0((_QWORD *)a2, v10);
        v13 = v149.m128i_i64[0];
        if ( v11 <= (int)v12 )
          v12 = v11;
        v152 = nullptr;
        *(_QWORD *)&v154 = v10;
        BYTE8(v154) = 1;
        v14 = v12;
        v155 = (__int64 *)(v12 | 0xFFFFFFFF00000000LL);
        v156 = 1;
        v146[0] = (__int64)&v152;
        v153 = 0;
        if ( !v149.m128i_i64[0] )
        {
          v88 = qalloc();
          v89 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v88, (__m128i)(unsigned __int64)v88);
          if ( !v88 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_OWORD *)(v88 + 16) = 0;
          *(_OWORD *)(v88 + 32) = 0;
          *(_OWORD *)(v88 + 48) = 0;
          *(_QWORD *)v88 = v88 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v88 + 64) = 0;
          *(__m128i *)(v88 + 8) = v89;
          v149.m128i_i64[0] = v88;
          *(_QWORD *)v88 = v88 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v88 & 3LL;
          v90 = v149.m128i_i64[0];
          v91 = (__m128i)v149.m128i_u64[0];
          *(_QWORD *)v149.m128i_i64[0] &= ~1uLL;
          *(__m128i *)(v90 + 8) = _mm_unpacklo_epi64(v91, v91);
          *(_QWORD *)v149.m128i_i64[0] |= 2uLL;
          v13 = v149.m128i_i64[0];
LABEL_5:
          sub_1073D0(&v149, v13, 1, v146);
          goto LABEL_6;
        }
        if ( !v149.m128i_i64[1] )
          goto LABEL_5;
        v15 = 1;
        v16 = *(_QWORD *)v149.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v16 & 2) != 0 )
          goto LABEL_15;
        while ( 1 )
        {
          v18 = *(_BYTE *)(v16 + 56);
          if ( v18 <= 1u )
          {
            if ( !v18 )
              goto LABEL_16;
            if ( v10 >= *(_QWORD *)(v16 + 48) )
              break;
          }
          v17 = *(_BYTE **)(v16 + 8);
          v15 = 1;
          if ( (*v17 & 2) != 0 )
            goto LABEL_25;
LABEL_17:
          v16 = (unsigned __int64)v17;
        }
        if ( v10 > *(_QWORD *)(v16 + 48) )
        {
LABEL_16:
          v17 = *(_BYTE **)(v16 + 16);
          v15 = 0;
          if ( (*v17 & 2) != 0 )
            goto LABEL_25;
          goto LABEL_17;
        }
        if ( v16 )
          continue;
LABEL_25:
        v13 = v16;
LABEL_15:
        sub_1073D0(&v149, v13, v15, v146);
LABEL_6:
        if ( v152 )
        {
          *(_QWORD *)&v153 = 0;
          qfree((__int64)v152);
        }
      }
      v19 = *(_QWORD **)v136;
      if ( *(_QWORD *)v136 )
      {
        if ( *((_QWORD *)v136 + 1) )
        {
          v20 = (_QWORD *)v19[1];
          if ( v19 != v20 )
          {
            do
            {
              v152 = nullptr;
              v137.m128i_i64[0] = (__int64)(v20 + 3);
              v153 = 0;
              v21 = sub_1041A0((unsigned __int64 *)&v149, (__int64)(v20 + 3));
              v22 = v152;
              v23 = v153;
              v24 = v21;
              while ( (_QWORD *)v149.m128i_i64[0] != v24 )
              {
                v25 = (__int64 (__fastcall *)())(v24 + 3);
                v26 = *(_BYTE *)(v137.m128i_i64[0] + 32);
                v27 = *((_BYTE *)v24 + 56);
                if ( v27 >= v26
                  && (v26 < v27
                   || *(_QWORD *)(v137.m128i_i64[0] + 24) + *(int *)(v137.m128i_i64[0] + 40) <= (__int64)v24[6]) )
                {
                  break;
                }
                v81 = &v22[v23];
                if ( v81 == v22 )
                  goto LABEL_144;
                v82 = v22;
                while ( v25 != *v82 )
                {
                  if ( v81 == ++v82 )
                    goto LABEL_144;
                }
                if ( v81 == v82 )
                {
LABEL_144:
                  if ( *((_QWORD *)&v153 + 1) < (unsigned __int64)(v23 + 1) )
                  {
                    v152 = (__int64 (__fastcall **)())qvector_reserve((__int64)&v152, (__int64)v22, v23 + 1, 8);
                    v81 = &v152[v153];
                  }
                  *v81 = v25;
                  v22 = v152;
                  v23 = v153 + 1;
                  *(_QWORD *)&v153 = v153 + 1;
                }
                if ( (*v24 & 2) == 0 )
                {
                  v83 = (_QWORD *)v24[2];
                  if ( (*(_BYTE *)v83 & 2) != 0 )
                  {
                    v85 = (_QWORD *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
                    v86 = *v85;
                    if ( (*v85 & 2) == 0 )
                    {
                      while ( (_QWORD *)v85[2] == v24 )
                      {
                        v24 = v85;
                        v87 = v86 & 0xFFFFFFFFFFFFFFFCLL;
                        v86 = *(_QWORD *)(v86 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v86 & 2) != 0 )
                        {
                          v24 = (_QWORD *)v87;
                          goto LABEL_142;
                        }
                        v85 = (_QWORD *)v87;
                      }
                    }
                    v24 = v85;
                  }
                  else
                  {
                    for ( j = (_QWORD *)v83[1]; (*(_BYTE *)j & 2) == 0; j = (_QWORD *)j[1] )
                      v83 = j;
                    v24 = v83;
                  }
                }
LABEL_142:
                ;
              }
              if ( v23 )
              {
                v28 = 0;
                v134 = 0;
                v29 = *(int **)v137.m128i_i64[0];
                v30 = *(int **)(v137.m128i_i64[0] + 8);
                do
                {
                  v31 = (__int64 *)v22[v28];
                  v32 = v29;
                  if ( 4LL * (_QWORD)v30 )
                  {
                    do
                    {
                      v33 = v31[1];
                      v34 = *v32;
                      v35 = (_DWORD *)(*v31 + 4 * v33);
                      if ( (_DWORD *)*v31 == v35 )
                        goto LABEL_129;
                      v36 = (_DWORD *)*v31;
                      while ( v34 != *v36 )
                      {
                        if ( v35 == ++v36 )
                          goto LABEL_129;
                      }
                      if ( v35 == v36 )
                      {
LABEL_129:
                        if ( v31[2] < (unsigned __int64)(v33 + 1) )
                        {
                          v79 = qvector_reserve((__int64)v31, *v31, v33 + 1, 4);
                          v80 = v31[1];
                          *v31 = v79;
                          v35 = (_DWORD *)(v79 + 4 * v80);
                        }
                        v78 = (int **)v137.m128i_i64[0];
                        *v35 = v34;
                        ++v31[1];
                        v29 = *v78;
                        v30 = v78[1];
                      }
                      ++v32;
                    }
                    while ( v32 != &v29[(_QWORD)v30] );
                    v22 = v152;
                  }
                  v28 = ++v134;
                }
                while ( v134 < (unsigned __int64)v153 );
              }
              if ( v22 )
              {
                *(_QWORD *)&v153 = 0;
                qfree((__int64)v22);
              }
              if ( (*v20 & 2) == 0 )
              {
                v37 = (_QWORD *)v20[2];
                if ( (*(_BYTE *)v37 & 2) != 0 )
                {
                  v92 = (_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFFCLL);
                  v93 = v20;
                  v94 = *v92;
                  if ( (*v92 & 2) == 0 )
                  {
                    while ( (_QWORD *)v92[2] == v93 )
                    {
                      v93 = v92;
                      v20 = (_QWORD *)(v94 & 0xFFFFFFFFFFFFFFFCLL);
                      v94 = *(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v94 & 2) != 0 )
                        goto LABEL_49;
                      v92 = v20;
                    }
                  }
                  v20 = v92;
                }
                else
                {
                  do
                  {
                    v20 = v37;
                    v37 = (_QWORD *)v37[1];
                  }
                  while ( (*(_BYTE *)v37 & 2) == 0 );
                }
              }
LABEL_49:
              ;
            }
            while ( *(_QWORD **)v136 != v20 );
          }
        }
      }
      v38 = v149.m128i_i64[1];
      v121 = v149.m128i_i64[0];
      v138 = v149;
      v39 = *(__int64 (__fastcall **)(__int64))(*a1 + 88);
      v40 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
      if ( v39 == sub_134210 )
        v41 = (*(unsigned int (__fastcall **)(unsigned __int64 *))(*a1 + 56))(a1) - 1;
      else
        v41 = (unsigned int)v39((__int64)a1);
      if ( v40 == sub_134310 )
        v126 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528) + 8LL * (int)v41) + 352LL);
      else
        v126 = v40((__int64)a1, v41);
      if ( v121 && v38 )
      {
        v129 = 0;
        v125 = *(_QWORD **)(v121 + 8);
        if ( v125 != (_QWORD *)v121 )
        {
          while ( 1 )
          {
            v132 = v125 + 3;
            if ( *((_BYTE *)v125 + 56) != 1 )
              ((void (__noreturn *)(void))sub_134690)();
            if ( !sub_64930((_QWORD *)a2, *((_DWORD *)v125 + 12)) )
              break;
            v42 = v125[4];
            if ( v42 )
            {
              if ( v42 == 1 && !*(_DWORD *)*v132 )
                goto LABEL_124;
            }
            else if ( v126 )
            {
              goto LABEL_124;
            }
            if ( *((_BYTE *)v125 + 56) != 1 )
              ((void (__noreturn *)(void))sub_134690)();
            v128 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v127 + 32LL))(
                     v127,
                     *((unsigned int *)v125 + 12));
            v43 = *((_DWORD *)v125 + 16);
            if ( v43 > 0 )
            {
              v131 = 0;
              do
              {
                v44 = v43 - v131;
                if ( v44 > v128 )
                  v44 = v128;
                v133 = v44;
                if ( *((_BYTE *)v125 + 56) != 1 )
                {
                  if ( !under_debugger )
                    sub_383060(51892);
                  goto LABEL_236;
                }
                v45 = *((_DWORD *)v125 + 12) + v131;
                v146[0] = 0;
                v146[1] = 0;
                sub_63E80(v146, v45, v44);
                v147 = 0;
                src = nullptr;
                v142 = 0;
                v148 = 0;
                v141 = 0;
                v143 = 0;
                v130 = sub_138470(a1, v132, v146, (__int64 *)&src, (unsigned __int64 *)&v142);
                if ( !v130 )
                {
                  if ( v142 )
                  {
                    *(_QWORD *)&v143 = 0;
                    qfree(v142);
                  }
                  if ( src )
                  {
                    *(_QWORD *)&v141 = 0;
                    qfree((__int64)src);
                  }
                  if ( v147 )
                  {
                    *(_QWORD *)&v148 = 0;
                    qfree(v147);
                  }
                  goto LABEL_123;
                }
                v144 = nullptr;
                v145 = 0;
                if ( !v129 )
                {
                  if ( a3 )
                  {
                    v48 = nullptr;
                    v49 = v141;
                    if ( (_QWORD)v141 )
                    {
                      v114 = 16 * v141;
                      v48 = (void *)qalloc_or_throw(16 * v141, v129, v46, v47);
                      memcpy(v48, src, v114);
                    }
                    v50 = _mm_unpacklo_epi64((__m128i)v49, (__m128i)v49);
                    v51 = *a3;
                    if ( *a3 )
                    {
                      a3[1] = 0;
                      v137 = v50;
                      qfree(v51);
                      v50 = _mm_load_si128(&v137);
                    }
                    *a3 = (__int64)v48;
                    *(__m128i *)(a3 + 1) = v50;
                  }
                  v129 = 1;
                }
                v52 = (__int64 *)v142;
                if ( !(16LL * (_QWORD)v143) )
                {
                  if ( !v126 )
                  {
                    v96 = (char *)src;
                    if ( 16LL * (_QWORD)v141 )
                      goto LABEL_182;
                  }
                  goto LABEL_102;
                }
                do
                {
                  *((_QWORD *)&v53 + 1) = &v149;
                  v137.m128i_i32[0] = *(_DWORD *)(*v52 + 72);
                  v54 = v52[1];
                  v149 = 0u;
                  v150 = 0;
                  v151 = 0;
                  *(_QWORD *)&v53 = *v52;
                  v136 = (unsigned __int8 *)(v54 + 32);
                  sub_123EA0(v53, v54 + 32, 1, 0xFFFF0000);
                  v55 = (unsigned __int64 *)src;
                  if ( !(16LL * (_QWORD)v141) )
                    goto LABEL_97;
                  while ( 1 )
                  {
                    if ( !sub_125B60(v136, v55[1] + 64, 0) )
                      goto LABEL_96;
                    v56 = *(_DWORD *)(*v55 + 72);
                    v152 = nullptr;
                    *(_QWORD *)&v153 = 0;
                    v135 = sub_6FC30((__int64)a1, (__int64 *)&v152, v56, v137.m128i_u32[0]);
                    qfree((__int64)v152);
                    if ( !v135 )
                      goto LABEL_96;
                    v153 = 0u;
                    v152 = &off_4DDA80;
                    v154 = 0u;
                    v155 = &v142;
                    if ( (unsigned int)sub_179EC0(
                                         (_DWORD)a1,
                                         (unsigned int)&v152,
                                         (unsigned int)&v149,
                                         v56,
                                         v137.m128i_i32[0],
                                         *(_QWORD *)(v55[1] + 8),
                                         v52[1],
                                         3,
                                         0)
                      || (unsigned int)sub_179EC0(
                                         (_DWORD)a1,
                                         (unsigned int)&v152,
                                         (unsigned int)&v149,
                                         v137.m128i_i32[0],
                                         -1,
                                         *(_QWORD *)(v52[1] + 8),
                                         0,
                                         2,
                                         0)
                      || (unsigned __int8)sub_17C4E0(
                                            (_DWORD)a1,
                                            (unsigned int)v146,
                                            v137.m128i_i32[0],
                                            -1,
                                            *(_QWORD *)(v55[1] + 8),
                                            0,
                                            2,
                                            0)
                      && (unsigned __int8)sub_17C4E0(
                                            (_DWORD)a1,
                                            (unsigned int)v146,
                                            v56,
                                            v137.m128i_i32[0],
                                            *(_QWORD *)(v55[1] + 8),
                                            v52[1],
                                            1,
                                            0) )
                    {
                      break;
                    }
                    v57 = v145;
                    v58 = (__int64)v144;
                    v59 = *v55;
                    v60 = v55[1];
                    v61 = &v144[v145];
                    if ( v144 != v61 )
                    {
                      v62 = v144;
                      while ( *(_DWORD *)(v59 + 72) != *(_DWORD *)(v62->m128i_i64[0] + 72) || v60 != v62->m128i_i64[1] )
                      {
                        if ( v61 == ++v62 )
                          goto LABEL_159;
                      }
                      if ( v62 != v61 )
                      {
                        v63 = *v52;
                        v64 = v52[1];
LABEL_91:
                        v65 = (__m128i *)v58;
                        do
                        {
                          if ( *(_DWORD *)(v63 + 72) == *(_DWORD *)(v65->m128i_i64[0] + 72) && v65->m128i_i64[1] == v64 )
                          {
                            if ( v65 == v61 )
                              goto LABEL_162;
                            goto LABEL_96;
                          }
                          ++v65;
                        }
                        while ( v65 != v61 );
                        v95 = v57 + 1;
                        if ( *((_QWORD *)&v145 + 1) >= (unsigned __int64)(v57 + 1) )
                          goto LABEL_163;
LABEL_165:
                        v144 = (__m128i *)qvector_reserve((__int64)&v144, v58, v95, 16);
                        v61 = &v144[v145];
                        goto LABEL_163;
                      }
                    }
LABEL_159:
                    if ( *((_QWORD *)&v145 + 1) < (unsigned __int64)(v145 + 1) )
                    {
                      v144 = (__m128i *)qvector_reserve((__int64)&v144, (__int64)v144, v145 + 1, 16);
                      v61 = &v144[v145];
                    }
                    *v61 = _mm_unpacklo_epi64((__m128i)v59, (__m128i)v60);
                    v58 = (__int64)v144;
                    *(_QWORD *)&v145 = v145 + 1;
                    v57 = v145;
                    v63 = *v52;
                    v64 = v52[1];
                    v61 = &v144[v145];
                    if ( v61 != v144 )
                      goto LABEL_91;
LABEL_162:
                    v95 = v57 + 1;
                    if ( *((_QWORD *)&v145 + 1) < (unsigned __int64)(v57 + 1) )
                      goto LABEL_165;
LABEL_163:
                    *v61 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v63, (__m128i)(unsigned __int64)v64);
                    *(_QWORD *)&v145 = v145 + 1;
LABEL_96:
                    v55 += 2;
                    if ( v55 == (unsigned __int64 *)((char *)src + 16 * (_QWORD)v141) )
                      goto LABEL_97;
                  }
                  v130 = 0;
LABEL_97:
                  if ( v150 )
                  {
                    *(_QWORD *)&v151 = 0;
                    qfree(v150);
                  }
                  v52 += 2;
                  qfree(v149.m128i_i64[0]);
                }
                while ( v52 != (__int64 *)(v142 + 16 * v143) );
                if ( !v126 )
                {
                  v96 = (char *)src;
                  if ( 16LL * (_QWORD)v141 )
                  {
                    do
                    {
LABEL_182:
                      v97 = *((_QWORD *)v96 + 1);
                      *((_QWORD *)&v98 + 1) = &v152;
                      v152 = nullptr;
                      v153 = 0u;
                      v154 = 0;
                      *(_QWORD *)&v98 = *(_QWORD *)v96;
                      v137.m128i_i64[0] = v97;
                      sub_123EA0(v98, v97 + 64, 1, 0xFFFF0000);
                      if ( !(unsigned __int8)sub_17C4E0(
                                               (_DWORD)a1,
                                               (unsigned int)&v152,
                                               *(_DWORD *)(*(_QWORD *)v96 + 72LL),
                                               -1,
                                               *(_QWORD *)(*((_QWORD *)v96 + 1) + 8LL),
                                               0,
                                               3,
                                               0) )
                      {
                        v99 = v145;
                        v100 = _mm_loadl_epi64((const __m128i *)v96);
                        v101 = _mm_loadl_epi64((const __m128i *)(v96 + 8));
                        v102 = (__int64)v144;
                        if ( *((_QWORD *)&v145 + 1) < (unsigned __int64)(v145 + 1) )
                        {
                          v136 = (unsigned __int8 *)v101.m128i_i64[0];
                          v137.m128i_i64[0] = v100.m128i_i64[0];
                          v144 = (__m128i *)qvector_reserve((__int64)&v144, (__int64)v144, v145 + 1, 16);
                          v102 = (__int64)v144;
                          v101 = _mm_loadl_epi64((const __m128i *)&v136);
                          v100 = _mm_loadl_epi64(&v137);
                          v99 = v145;
                        }
                        *(__m128i *)(v102 + 16 * v99) = _mm_unpacklo_epi64(v100, v101);
                        *(_QWORD *)&v145 = v145 + 1;
                      }
                      if ( *((_QWORD *)&v153 + 1) )
                      {
                        *(_QWORD *)&v154 = 0;
                        qfree(*((__int64 *)&v153 + 1));
                      }
                      qfree((__int64)v152);
                      v96 += 16;
                    }
                    while ( v96 != (char *)src + 16 * (_QWORD)v141 );
                  }
                }
                if ( v130 )
                {
LABEL_102:
                  if ( !(_QWORD)v145 )
                    goto LABEL_103;
                  v103 = *(_QWORD **)(a1[5] + 920);
                  v104 = (__int64)(v103 + 1);
                  if ( *((_BYTE *)v125 + 56) != 1 )
                    sub_134690(v104);
                  v105 = v125[6];
                  LODWORD(v152) = v105;
                  v106 = v103[2];
                  v107 = v103[1];
                  if ( v103[3] < (unsigned __int64)(v106 + 1) )
                  {
                    v116 = qvector_reserve(v104, v107, v106 + 1, 4);
                    v103[1] = v116;
                    v107 = v116;
                    v106 = v103[2];
                  }
                  *(_DWORD *)(v107 + 4 * v106) = v105;
                  v108 = v145;
                  v109 = (__int64)v144;
                  ++v103[2];
                  v110 = (__int64 *)v109;
                  if ( 16 * v108 )
                  {
                    while ( 1 )
                    {
                      v111 = v110[1];
                      if ( *(_DWORD *)v111 )
                      {
                        if ( *(_DWORD *)v111 != 4 )
                        {
                          if ( !under_debugger )
                            sub_383060(50426);
                          goto LABEL_236;
                        }
                        if ( *(_DWORD *)(v111 + 36) < (signed int)v133 )
                        {
                          if ( !under_debugger )
                            sub_383060(50427);
                          goto LABEL_236;
                        }
                        if ( *(_DWORD *)(v111 + 68) == v133 )
                          goto LABEL_198;
                        if ( *((_BYTE *)v125 + 56) != 1 )
                        {
                          if ( !under_debugger )
                            sub_383060(51892);
                          goto LABEL_236;
                        }
                        if ( *(_BYTE *)(v111 + 64) == 1 && *(_DWORD *)(v111 + 72) == *((_DWORD *)v125 + 12) )
                        {
LABEL_198:
                          v112 = *v110;
                          sub_11D5A0(v111);
                          v113 = *(_DWORD *)(v112 + 24);
                          v108 = v145;
                          v129 = 2;
                          v109 = (__int64)v144;
                          v137.m128i_i32[0] = v113;
                          BYTE1(v113) &= ~2u;
                          LOBYTE(v113) = v113 | 0x80;
                          *(_DWORD *)(v112 + 24) = v113;
                        }
                      }
                      v110 += 2;
                      v76 = v109;
                      if ( v110 == (__int64 *)(v109 + 16 * v108) )
                        goto LABEL_115;
                    }
                  }
                  v76 = v109;
                }
                else
                {
LABEL_103:
                  if ( ((unsigned __int8)sub_64780(v146, (_QWORD *)(v127 + 224))
                     || (unsigned __int8)sub_318470(&v147, v127 + 240))
                    && v126 )
                  {
                    v152 = nullptr;
                    v153 = 0;
                    if ( *((_BYTE *)v125 + 56) != 1 )
                      sub_134690(v126);
                    sub_1338F0((_DWORD *)v127, (__int64 *)&v152, *((_DWORD *)v125 + 12) + v131, v133);
                    v68 = (_QWORD *)a1[5];
                    v69 = s1;
                    if ( (_QWORD)v153 )
                      LODWORD(v69) = (_DWORD)v152;
                    sub_3311F0((_DWORD)v68, -1, 14, (_DWORD)v69, v66, v67);
                    v70 = *(_QWORD **)(a1[5] + 920);
                    v71 = v70[5];
                    v72 = v70[4];
                    v73 = v71 + 1;
                    if ( v70[6] < (unsigned __int64)(v71 + 1) )
                    {
                      v68 = v70 + 4;
                      v115 = qvector_reserve((__int64)(v70 + 4), v72, v73, 8);
                      v70[4] = v115;
                      v72 = v115;
                      v71 = v70[5];
                      v73 = v71 + 1;
                    }
                    v70[5] = v73;
                    v74 = (_DWORD *)(v72 + 8 * v71);
                    v74[1] = v133;
                    if ( *((_BYTE *)v125 + 56) != 1 )
                      sub_134690(v68);
                    v75 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v127 + 176LL))(
                            v127,
                            (unsigned int)(*((_DWORD *)v125 + 12) + v131),
                            v133);
                    *v74 = v75;
                    if ( v75 == -1 )
                    {
                      if ( !under_debugger )
                        sub_383060(50425);
                      goto LABEL_236;
                    }
                    if ( v152 )
                    {
                      *(_QWORD *)&v153 = 0;
                      qfree((__int64)v152);
                    }
                  }
                  v76 = (__int64)v144;
                }
LABEL_115:
                if ( v76 )
                {
                  *(_QWORD *)&v145 = 0;
                  qfree(v76);
                }
                if ( v142 )
                {
                  *(_QWORD *)&v143 = 0;
                  qfree(v142);
                }
                if ( src )
                {
                  *(_QWORD *)&v141 = 0;
                  qfree((__int64)src);
                }
                if ( v147 )
                {
                  *(_QWORD *)&v148 = 0;
                  qfree(v147);
                }
LABEL_123:
                qfree(v146[0]);
                v131 += v128;
                v43 = *((_DWORD *)v125 + 16);
              }
              while ( v43 > v131 );
            }
LABEL_124:
            if ( (*v125 & 2) == 0 )
            {
              v77 = (_QWORD *)v125[2];
              if ( (*(_BYTE *)v77 & 2) != 0 )
              {
                v117 = (_QWORD *)(*v125 & 0xFFFFFFFFFFFFFFFCLL);
                v118 = *v117;
                if ( (*v117 & 2) == 0 )
                {
                  v119 = v125;
                  while ( v119 == (_QWORD *)v117[2] )
                  {
                    v119 = v117;
                    v120 = v118 & 0xFFFFFFFFFFFFFFFCLL;
                    v118 = *(_QWORD *)(v118 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v118 & 2) != 0 )
                    {
                      v125 = (_QWORD *)v120;
                      goto LABEL_127;
                    }
                    v117 = (_QWORD *)v120;
                  }
                }
                v125 = v117;
              }
              else
              {
                do
                {
                  v125 = v77;
                  v77 = (_QWORD *)v77[1];
                }
                while ( (*(_BYTE *)v77 & 2) == 0 );
              }
            }
LABEL_127:
            if ( (_QWORD *)v121 == v125 )
              goto LABEL_211;
          }
          if ( !under_debugger )
            sub_383060(50424);
LABEL_236:
          BUG();
        }
      }
      else
      {
        v129 = 0;
      }
LABEL_211:
      sub_E0E30(v138.m128i_i64);
      sub_104E10(v122);
      return v129;
    }
    if ( !under_debugger )
      sub_383060(50446);
    goto LABEL_236;
  }
  return v129;
}
