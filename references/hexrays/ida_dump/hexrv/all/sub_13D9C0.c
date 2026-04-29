__int64 __fastcall sub_13D9C0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *exception; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int i; // eax
  int v10; // r13d
  int v11; // ebx
  unsigned int v12; // eax
  unsigned __int64 *v13; // rsi
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
  void *v46; // rbx
  unsigned __int64 v47; // r14
  __m128i v48; // xmm0
  __int64 v49; // rdi
  __int64 *v50; // r14
  __int128 v51; // rdi
  __int64 v52; // rax
  unsigned __int64 *v53; // r15
  unsigned int v54; // r13d
  __int64 v55; // rcx
  __m128i *v56; // rsi
  unsigned __int64 v57; // r13
  unsigned __int64 v58; // rbx
  __m128i *v59; // rdx
  __m128i *v60; // rax
  __int64 v61; // r13
  __int64 v62; // rbx
  __m128i *v63; // rax
  int v64; // r8d
  int v65; // r9d
  _QWORD *v66; // rdi
  const char *v67; // rcx
  _QWORD *v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rdx
  _DWORD *v72; // r14
  int v73; // eax
  __int64 v74; // rdi
  _QWORD *v75; // rdx
  int **v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 (__fastcall **v79)(); // rdx
  __int64 (__fastcall **v80)(); // rax
  _QWORD *v81; // rdx
  _QWORD *j; // rax
  _QWORD *v83; // rax
  __int64 v84; // rdx
  unsigned __int64 v85; // rdi
  __int64 v86; // rax
  __m128i v87; // xmm1
  __int64 v88; // rax
  __m128i v89; // xmm0
  _QWORD *v90; // rax
  _QWORD *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rax
  char *v94; // r14
  __int64 v95; // rcx
  __int128 v96; // rdi
  __int64 v97; // rax
  __m128i v98; // xmm0
  __m128i v99; // xmm1
  __int64 v100; // rsi
  _QWORD *v101; // r14
  _QWORD *v102; // rdi
  __int64 v103; // r13
  __int64 v104; // rax
  __int64 v105; // rsi
  __int64 v106; // rcx
  __int64 *v107; // rdx
  __int64 *v108; // rbx
  __int64 v109; // rdi
  __int64 v110; // r14
  __int32 v111; // eax
  size_t v112; // r13
  __int64 v113; // rax
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rdx
  _QWORD *v117; // rsi
  unsigned __int64 v118; // rcx
  __int64 v119; // [rsp+8h] [rbp-1D8h]
  __int64 v120; // [rsp+10h] [rbp-1D0h]
  _QWORD *v123; // [rsp+28h] [rbp-1B8h]
  unsigned int v124; // [rsp+34h] [rbp-1ACh]
  __int64 v125; // [rsp+38h] [rbp-1A8h]
  int v126; // [rsp+40h] [rbp-1A0h]
  unsigned int v127; // [rsp+44h] [rbp-19Ch]
  char v128; // [rsp+4Bh] [rbp-195h]
  int v129; // [rsp+4Ch] [rbp-194h]
  _QWORD *v130; // [rsp+50h] [rbp-190h]
  unsigned int v131; // [rsp+70h] [rbp-170h]
  int v132; // [rsp+74h] [rbp-16Ch]
  char v133; // [rsp+74h] [rbp-16Ch]
  unsigned __int8 *v134; // [rsp+78h] [rbp-168h] BYREF
  __m128i v135; // [rsp+80h] [rbp-160h] BYREF
  __m128i v136; // [rsp+90h] [rbp-150h] BYREF
  int v137; // [rsp+A0h] [rbp-140h]
  void *src; // [rsp+B0h] [rbp-130h] BYREF
  __int128 v139; // [rsp+B8h] [rbp-128h]
  __int64 *v140; // [rsp+D0h] [rbp-110h] BYREF
  __int128 v141; // [rsp+D8h] [rbp-108h]
  __int64 v142; // [rsp+F0h] [rbp-F0h] BYREF
  __int128 v143; // [rsp+F8h] [rbp-E8h]
  __int64 v144[2]; // [rsp+110h] [rbp-D0h] BYREF
  __int64 v145; // [rsp+120h] [rbp-C0h] BYREF
  __int128 v146; // [rsp+128h] [rbp-B8h]
  __m128i v147; // [rsp+140h] [rbp-A0h] BYREF
  __int64 v148; // [rsp+150h] [rbp-90h]
  __int128 v149; // [rsp+158h] [rbp-88h]
  __int64 (__fastcall **v150)(); // [rsp+170h] [rbp-70h] BYREF
  __int128 v151; // [rsp+178h] [rbp-68h]
  __int128 v152; // [rsp+188h] [rbp-58h]
  __int64 *v153; // [rsp+198h] [rbp-48h]
  char v154; // [rsp+1A0h] [rbp-40h]
  unsigned __int64 v155; // [rsp+1A8h] [rbp-38h]

  v155 = __readfsqword(0x28u);
  v127 = 0;
  v125 = *(_QWORD *)(a1[5] + 1504);
  if ( (*(_BYTE *)(v125 + 49) & 0x10) != 0 )
  {
    v120 = sub_10BE80((__int64)a1, 0);
    if ( v120 )
    {
      v136 = 0u;
      v6 = *(_QWORD *)(v120 + 8);
      ++*(_DWORD *)(v120 + 24);
      v137 = -1;
      v7 = 3 * v6;
      v8 = *(_QWORD *)v120;
      v147 = 0u;
      LODWORD(v148) = -1;
      v134 = (unsigned __int8 *)(v8 + 8 * v7 - 24);
      for ( i = sub_605E0((_QWORD *)a2, 0); ; i = sub_605E0((_QWORD *)a2, v10 + v14) )
      {
        v10 = i;
        if ( i == *(_DWORD *)(a2 + 8) )
          break;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v125 + 32LL))(v125, i);
        v12 = sub_60820((_QWORD *)a2, v10);
        v13 = (unsigned __int64 *)v147.m128i_i64[0];
        if ( v11 <= (int)v12 )
          v12 = v11;
        v150 = nullptr;
        *(_QWORD *)&v152 = v10;
        BYTE8(v152) = 1;
        v14 = v12;
        v153 = (__int64 *)(v12 | 0xFFFFFFFF00000000LL);
        v154 = 1;
        v144[0] = (__int64)&v150;
        v151 = 0;
        if ( !v147.m128i_i64[0] )
        {
          v86 = qalloc(80);
          v87 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v86, (__m128i)(unsigned __int64)v86);
          if ( !v86 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_OWORD *)(v86 + 16) = 0;
          *(_OWORD *)(v86 + 32) = 0;
          *(_OWORD *)(v86 + 48) = 0;
          *(_QWORD *)v86 = v86 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v86 + 64) = 0;
          *(__m128i *)(v86 + 8) = v87;
          v147.m128i_i64[0] = v86;
          *(_QWORD *)v86 = v86 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v86 & 3LL;
          v88 = v147.m128i_i64[0];
          v89 = (__m128i)v147.m128i_u64[0];
          *(_QWORD *)v147.m128i_i64[0] &= ~1uLL;
          *(__m128i *)(v88 + 8) = _mm_unpacklo_epi64(v89, v89);
          *(_QWORD *)v147.m128i_i64[0] |= 2uLL;
          v13 = (unsigned __int64 *)v147.m128i_i64[0];
LABEL_5:
          sub_102F10(&v147, v13, 1, v144);
          goto LABEL_6;
        }
        if ( !v147.m128i_i64[1] )
          goto LABEL_5;
        v15 = 1;
        v16 = *(_QWORD *)v147.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
        v13 = (unsigned __int64 *)v16;
LABEL_15:
        sub_102F10(&v147, v13, v15, v144);
LABEL_6:
        if ( v150 )
        {
          *(_QWORD *)&v151 = 0;
          qfree(v150);
        }
      }
      v19 = *(_QWORD **)v134;
      if ( *(_QWORD *)v134 )
      {
        if ( *((_QWORD *)v134 + 1) )
        {
          v20 = (_QWORD *)v19[1];
          if ( v19 != v20 )
          {
            do
            {
              v150 = nullptr;
              v135.m128i_i64[0] = (__int64)(v20 + 3);
              v151 = 0;
              v21 = sub_FFCE0((unsigned __int64 *)&v147, (__int64)(v20 + 3));
              v22 = v150;
              v23 = v151;
              v24 = v21;
              while ( (_QWORD *)v147.m128i_i64[0] != v24 )
              {
                v25 = (__int64 (__fastcall *)())(v24 + 3);
                v26 = *(_BYTE *)(v135.m128i_i64[0] + 32);
                v27 = *((_BYTE *)v24 + 56);
                if ( v27 >= v26
                  && (v26 < v27
                   || *(_QWORD *)(v135.m128i_i64[0] + 24) + *(int *)(v135.m128i_i64[0] + 40) <= (__int64)v24[6]) )
                {
                  break;
                }
                v79 = &v22[v23];
                if ( v79 == v22 )
                  goto LABEL_144;
                v80 = v22;
                while ( v25 != *v80 )
                {
                  if ( v79 == ++v80 )
                    goto LABEL_144;
                }
                if ( v79 == v80 )
                {
LABEL_144:
                  if ( *((_QWORD *)&v151 + 1) < (unsigned __int64)(v23 + 1) )
                  {
                    v150 = (__int64 (__fastcall **)())qvector_reserve(&v150, v22, v23 + 1, 8);
                    v79 = &v150[v151];
                  }
                  *v79 = v25;
                  v22 = v150;
                  v23 = v151 + 1;
                  *(_QWORD *)&v151 = v151 + 1;
                }
                if ( (*v24 & 2) == 0 )
                {
                  v81 = (_QWORD *)v24[2];
                  if ( (*(_BYTE *)v81 & 2) != 0 )
                  {
                    v83 = (_QWORD *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
                    v84 = *v83;
                    if ( (*v83 & 2) == 0 )
                    {
                      while ( (_QWORD *)v83[2] == v24 )
                      {
                        v24 = v83;
                        v85 = v84 & 0xFFFFFFFFFFFFFFFCLL;
                        v84 = *(_QWORD *)(v84 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v84 & 2) != 0 )
                        {
                          v24 = (_QWORD *)v85;
                          goto LABEL_142;
                        }
                        v83 = (_QWORD *)v85;
                      }
                    }
                    v24 = v83;
                  }
                  else
                  {
                    for ( j = (_QWORD *)v81[1]; (*(_BYTE *)j & 2) == 0; j = (_QWORD *)j[1] )
                      v81 = j;
                    v24 = v81;
                  }
                }
LABEL_142:
                ;
              }
              if ( v23 )
              {
                v28 = 0;
                v132 = 0;
                v29 = *(int **)v135.m128i_i64[0];
                v30 = *(int **)(v135.m128i_i64[0] + 8);
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
                          v77 = qvector_reserve(v31, *v31, v33 + 1, 4);
                          v78 = v31[1];
                          *v31 = v77;
                          v35 = (_DWORD *)(v77 + 4 * v78);
                        }
                        v76 = (int **)v135.m128i_i64[0];
                        *v35 = v34;
                        ++v31[1];
                        v29 = *v76;
                        v30 = v76[1];
                      }
                      ++v32;
                    }
                    while ( v32 != &v29[(_QWORD)v30] );
                    v22 = v150;
                  }
                  v28 = ++v132;
                }
                while ( v132 < (unsigned __int64)v151 );
              }
              if ( v22 )
              {
                *(_QWORD *)&v151 = 0;
                qfree(v22);
              }
              if ( (*v20 & 2) == 0 )
              {
                v37 = (_QWORD *)v20[2];
                if ( (*(_BYTE *)v37 & 2) != 0 )
                {
                  v90 = (_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFFCLL);
                  v91 = v20;
                  v92 = *v90;
                  if ( (*v90 & 2) == 0 )
                  {
                    while ( (_QWORD *)v90[2] == v91 )
                    {
                      v91 = v90;
                      v20 = (_QWORD *)(v92 & 0xFFFFFFFFFFFFFFFCLL);
                      v92 = *(_QWORD *)(v92 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v92 & 2) != 0 )
                        goto LABEL_49;
                      v90 = v20;
                    }
                  }
                  v20 = v90;
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
            while ( *(_QWORD **)v134 != v20 );
          }
        }
      }
      v38 = v147.m128i_i64[1];
      v119 = v147.m128i_i64[0];
      v136 = v147;
      v39 = *(__int64 (__fastcall **)(__int64))(*a1 + 88);
      v40 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
      if ( v39 == sub_12FD50 )
        v41 = (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) - 1;
      else
        v41 = (unsigned int)v39((__int64)a1);
      if ( v40 == sub_12FE50 )
        v124 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528) + 8LL * (int)v41) + 352LL);
      else
        v124 = v40((__int64)a1, v41);
      if ( v119 && v38 )
      {
        v127 = 0;
        v123 = *(_QWORD **)(v119 + 8);
        if ( v123 != (_QWORD *)v119 )
        {
          while ( 1 )
          {
            v130 = v123 + 3;
            if ( *((_BYTE *)v123 + 56) != 1 )
              ((void (__noreturn *)(void))sub_1301D0)();
            if ( !sub_605B0((_QWORD *)a2, *((_DWORD *)v123 + 12)) )
              break;
            v42 = v123[4];
            if ( v42 )
            {
              if ( v42 == 1 && !*(_DWORD *)*v130 )
                goto LABEL_124;
            }
            else if ( v124 )
            {
              goto LABEL_124;
            }
            if ( *((_BYTE *)v123 + 56) != 1 )
              ((void (__noreturn *)(void))sub_1301D0)();
            v126 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v125 + 32LL))(
                     v125,
                     *((unsigned int *)v123 + 12));
            v43 = *((_DWORD *)v123 + 16);
            if ( v43 > 0 )
            {
              v129 = 0;
              do
              {
                v44 = v43 - v129;
                if ( v44 > v126 )
                  v44 = v126;
                v131 = v44;
                if ( *((_BYTE *)v123 + 56) != 1 )
                {
                  if ( !under_debugger )
                    sub_37DDE0(51892);
                  goto LABEL_236;
                }
                v45 = *((_DWORD *)v123 + 12) + v129;
                v144[0] = 0;
                v144[1] = 0;
                sub_5FB00(v144, v45, v44);
                v145 = 0;
                src = nullptr;
                v140 = nullptr;
                v146 = 0;
                v139 = 0;
                v141 = 0;
                v128 = sub_133FB0(a1, v130, v144, (__int64 *)&src, (__int64 *)&v140);
                if ( !v128 )
                {
                  if ( v140 )
                  {
                    *(_QWORD *)&v141 = 0;
                    qfree(v140);
                  }
                  if ( src )
                  {
                    *(_QWORD *)&v139 = 0;
                    qfree(src);
                  }
                  if ( v145 )
                  {
                    *(_QWORD *)&v146 = 0;
                    qfree(v145);
                  }
                  goto LABEL_123;
                }
                v142 = 0;
                v143 = 0;
                if ( !v127 )
                {
                  if ( a3 )
                  {
                    v46 = nullptr;
                    v47 = v139;
                    if ( (_QWORD)v139 )
                    {
                      v112 = 16 * v139;
                      v46 = (void *)qalloc_or_throw(16 * v139);
                      memcpy(v46, src, v112);
                    }
                    v48 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
                    v49 = *a3;
                    if ( *a3 )
                    {
                      a3[1] = 0;
                      v135 = v48;
                      qfree(v49);
                      v48 = _mm_load_si128(&v135);
                    }
                    *a3 = v46;
                    *(__m128i *)(a3 + 1) = v48;
                  }
                  v127 = 1;
                }
                v50 = v140;
                if ( !(16LL * (_QWORD)v141) )
                {
                  if ( !v124 )
                  {
                    v94 = (char *)src;
                    if ( 16LL * (_QWORD)v139 )
                      goto LABEL_182;
                  }
                  goto LABEL_102;
                }
                do
                {
                  *((_QWORD *)&v51 + 1) = &v147;
                  v135.m128i_i32[0] = *(_DWORD *)(*v50 + 72);
                  v52 = v50[1];
                  v147 = 0u;
                  v148 = 0;
                  v149 = 0;
                  *(_QWORD *)&v51 = *v50;
                  v134 = (unsigned __int8 *)(v52 + 32);
                  sub_11F9E0(v51, v52 + 32, 1u, 0xFFFF0000);
                  v53 = (unsigned __int64 *)src;
                  if ( !(16LL * (_QWORD)v139) )
                    goto LABEL_97;
                  while ( 1 )
                  {
                    if ( !sub_1216A0(v134, v53[1] + 64, 0) )
                      goto LABEL_96;
                    v54 = *(_DWORD *)(*v53 + 72);
                    v150 = nullptr;
                    *(_QWORD *)&v151 = 0;
                    v133 = sub_6B8B0((__int64)a1, (__int64 *)&v150, v54, v135.m128i_u32[0]);
                    qfree(v150);
                    if ( !v133 )
                      goto LABEL_96;
                    v151 = 0u;
                    v150 = &off_4B0500;
                    v152 = 0u;
                    v153 = (__int64 *)&v140;
                    if ( (unsigned int)sub_175A00(
                                         (_DWORD)a1,
                                         (unsigned int)&v150,
                                         (unsigned int)&v147,
                                         v54,
                                         v135.m128i_i32[0],
                                         *(_QWORD *)(v53[1] + 8),
                                         v50[1],
                                         3,
                                         0)
                      || (unsigned int)sub_175A00(
                                         (_DWORD)a1,
                                         (unsigned int)&v150,
                                         (unsigned int)&v147,
                                         v135.m128i_i32[0],
                                         -1,
                                         *(_QWORD *)(v50[1] + 8),
                                         0,
                                         2,
                                         0)
                      || (unsigned __int8)sub_178020(
                                            (_DWORD)a1,
                                            (unsigned int)v144,
                                            v135.m128i_i32[0],
                                            -1,
                                            *(_QWORD *)(v53[1] + 8),
                                            0,
                                            2,
                                            0)
                      && (unsigned __int8)sub_178020(
                                            (_DWORD)a1,
                                            (unsigned int)v144,
                                            v54,
                                            v135.m128i_i32[0],
                                            *(_QWORD *)(v53[1] + 8),
                                            v50[1],
                                            1,
                                            0) )
                    {
                      break;
                    }
                    v55 = v143;
                    v56 = (__m128i *)v142;
                    v57 = *v53;
                    v58 = v53[1];
                    v59 = (__m128i *)(v142 + 16 * v143);
                    if ( (__m128i *)v142 != v59 )
                    {
                      v60 = (__m128i *)v142;
                      while ( *(_DWORD *)(v57 + 72) != *(_DWORD *)(v60->m128i_i64[0] + 72) || v58 != v60->m128i_i64[1] )
                      {
                        if ( v59 == ++v60 )
                          goto LABEL_159;
                      }
                      if ( v60 != v59 )
                      {
                        v61 = *v50;
                        v62 = v50[1];
LABEL_91:
                        v63 = v56;
                        do
                        {
                          if ( *(_DWORD *)(v61 + 72) == *(_DWORD *)(v63->m128i_i64[0] + 72) && v63->m128i_i64[1] == v62 )
                          {
                            if ( v63 == v59 )
                              goto LABEL_162;
                            goto LABEL_96;
                          }
                          ++v63;
                        }
                        while ( v63 != v59 );
                        v93 = v55 + 1;
                        if ( *((_QWORD *)&v143 + 1) >= (unsigned __int64)(v55 + 1) )
                          goto LABEL_163;
LABEL_165:
                        v142 = qvector_reserve(&v142, v56, v93, 16);
                        v59 = (__m128i *)(v142 + 16 * v143);
                        goto LABEL_163;
                      }
                    }
LABEL_159:
                    if ( *((_QWORD *)&v143 + 1) < (unsigned __int64)(v143 + 1) )
                    {
                      v142 = qvector_reserve(&v142, v142, v143 + 1, 16);
                      v59 = (__m128i *)(v142 + 16 * v143);
                    }
                    *v59 = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v58);
                    v56 = (__m128i *)v142;
                    *(_QWORD *)&v143 = v143 + 1;
                    v55 = v143;
                    v61 = *v50;
                    v62 = v50[1];
                    v59 = (__m128i *)(v142 + 16 * v143);
                    if ( v59 != (__m128i *)v142 )
                      goto LABEL_91;
LABEL_162:
                    v93 = v55 + 1;
                    if ( *((_QWORD *)&v143 + 1) < (unsigned __int64)(v55 + 1) )
                      goto LABEL_165;
LABEL_163:
                    *v59 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v61, (__m128i)(unsigned __int64)v62);
                    *(_QWORD *)&v143 = v143 + 1;
LABEL_96:
                    v53 += 2;
                    if ( v53 == (unsigned __int64 *)((char *)src + 16 * (_QWORD)v139) )
                      goto LABEL_97;
                  }
                  v128 = 0;
LABEL_97:
                  if ( v148 )
                  {
                    *(_QWORD *)&v149 = 0;
                    qfree(v148);
                  }
                  v50 += 2;
                  qfree(v147.m128i_i64[0]);
                }
                while ( v50 != &v140[2 * (_QWORD)v141] );
                if ( !v124 )
                {
                  v94 = (char *)src;
                  if ( 16LL * (_QWORD)v139 )
                  {
                    do
                    {
LABEL_182:
                      v95 = *((_QWORD *)v94 + 1);
                      *((_QWORD *)&v96 + 1) = &v150;
                      v150 = nullptr;
                      v151 = 0u;
                      v152 = 0;
                      *(_QWORD *)&v96 = *(_QWORD *)v94;
                      v135.m128i_i64[0] = v95;
                      sub_11F9E0(v96, v95 + 64, 1u, 0xFFFF0000);
                      if ( !(unsigned __int8)sub_178020(
                                               (_DWORD)a1,
                                               (unsigned int)&v150,
                                               *(_DWORD *)(*(_QWORD *)v94 + 72LL),
                                               -1,
                                               *(_QWORD *)(*((_QWORD *)v94 + 1) + 8LL),
                                               0,
                                               3,
                                               0) )
                      {
                        v97 = v143;
                        v98 = _mm_loadl_epi64((const __m128i *)v94);
                        v99 = _mm_loadl_epi64((const __m128i *)(v94 + 8));
                        v100 = v142;
                        if ( *((_QWORD *)&v143 + 1) < (unsigned __int64)(v143 + 1) )
                        {
                          v134 = (unsigned __int8 *)v99.m128i_i64[0];
                          v135.m128i_i64[0] = v98.m128i_i64[0];
                          v142 = qvector_reserve(&v142, v142, v143 + 1, 16);
                          v100 = v142;
                          v99 = _mm_loadl_epi64((const __m128i *)&v134);
                          v98 = _mm_loadl_epi64(&v135);
                          v97 = v143;
                        }
                        *(__m128i *)(v100 + 16 * v97) = _mm_unpacklo_epi64(v98, v99);
                        *(_QWORD *)&v143 = v143 + 1;
                      }
                      if ( *((_QWORD *)&v151 + 1) )
                      {
                        *(_QWORD *)&v152 = 0;
                        qfree(*((_QWORD *)&v151 + 1));
                      }
                      qfree(v150);
                      v94 += 16;
                    }
                    while ( v94 != (char *)src + 16 * (_QWORD)v139 );
                  }
                }
                if ( v128 )
                {
LABEL_102:
                  if ( !(_QWORD)v143 )
                    goto LABEL_103;
                  v101 = *(_QWORD **)(a1[5] + 920);
                  v102 = v101 + 1;
                  if ( *((_BYTE *)v123 + 56) != 1 )
                    sub_1301D0(v102);
                  v103 = v123[6];
                  LODWORD(v150) = v103;
                  v104 = v101[2];
                  v105 = v101[1];
                  if ( v101[3] < (unsigned __int64)(v104 + 1) )
                  {
                    v114 = qvector_reserve(v102, v105, v104 + 1, 4);
                    v101[1] = v114;
                    v105 = v114;
                    v104 = v101[2];
                  }
                  *(_DWORD *)(v105 + 4 * v104) = v103;
                  v106 = v143;
                  v107 = (__int64 *)v142;
                  ++v101[2];
                  v108 = v107;
                  if ( 16 * v106 )
                  {
                    while ( 1 )
                    {
                      v109 = v108[1];
                      if ( *(_DWORD *)v109 )
                      {
                        if ( *(_DWORD *)v109 != 4 )
                        {
                          if ( !under_debugger )
                            sub_37DDE0(50426);
                          goto LABEL_236;
                        }
                        if ( *(_DWORD *)(v109 + 36) < (signed int)v131 )
                        {
                          if ( !under_debugger )
                            sub_37DDE0(50427);
                          goto LABEL_236;
                        }
                        if ( *(_DWORD *)(v109 + 68) == v131 )
                          goto LABEL_198;
                        if ( *((_BYTE *)v123 + 56) != 1 )
                        {
                          if ( !under_debugger )
                            sub_37DDE0(51892);
                          goto LABEL_236;
                        }
                        if ( *(_BYTE *)(v109 + 64) == 1 && *(_DWORD *)(v109 + 72) == *((_DWORD *)v123 + 12) )
                        {
LABEL_198:
                          v110 = *v108;
                          sub_1190E0(v109);
                          v111 = *(_DWORD *)(v110 + 24);
                          v106 = v143;
                          v127 = 2;
                          v107 = (__int64 *)v142;
                          v135.m128i_i32[0] = v111;
                          BYTE1(v111) &= ~2u;
                          LOBYTE(v111) = v111 | 0x80;
                          *(_DWORD *)(v110 + 24) = v111;
                        }
                      }
                      v108 += 2;
                      v74 = (__int64)v107;
                      if ( v108 == &v107[2 * v106] )
                        goto LABEL_115;
                    }
                  }
                  v74 = (__int64)v107;
                }
                else
                {
LABEL_103:
                  if ( ((unsigned __int8)sub_60400(v144, (_QWORD *)(v125 + 224))
                     || (unsigned __int8)sub_313370(&v145, v125 + 240))
                    && v124 )
                  {
                    v150 = nullptr;
                    v151 = 0;
                    if ( *((_BYTE *)v123 + 56) != 1 )
                      sub_1301D0(v124);
                    sub_12F430((_DWORD *)v125, (__int64 *)&v150, *((_DWORD *)v123 + 12) + v129, v131);
                    v66 = (_QWORD *)a1[5];
                    v67 = s1;
                    if ( (_QWORD)v151 )
                      LODWORD(v67) = (_DWORD)v150;
                    sub_32BE10((_DWORD)v66, -1, 14, (_DWORD)v67, v64, v65);
                    v68 = *(_QWORD **)(a1[5] + 920);
                    v69 = v68[5];
                    v70 = v68[4];
                    v71 = v69 + 1;
                    if ( v68[6] < (unsigned __int64)(v69 + 1) )
                    {
                      v66 = v68 + 4;
                      v113 = qvector_reserve(v68 + 4, v70, v71, 8);
                      v68[4] = v113;
                      v70 = v113;
                      v69 = v68[5];
                      v71 = v69 + 1;
                    }
                    v68[5] = v71;
                    v72 = (_DWORD *)(v70 + 8 * v69);
                    v72[1] = v131;
                    if ( *((_BYTE *)v123 + 56) != 1 )
                      sub_1301D0(v66);
                    v73 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v125 + 176LL))(
                            v125,
                            (unsigned int)(*((_DWORD *)v123 + 12) + v129),
                            v131);
                    *v72 = v73;
                    if ( v73 == -1 )
                    {
                      if ( !under_debugger )
                        sub_37DDE0(50425);
                      goto LABEL_236;
                    }
                    if ( v150 )
                    {
                      *(_QWORD *)&v151 = 0;
                      qfree(v150);
                    }
                  }
                  v74 = v142;
                }
LABEL_115:
                if ( v74 )
                {
                  *(_QWORD *)&v143 = 0;
                  qfree(v74);
                }
                if ( v140 )
                {
                  *(_QWORD *)&v141 = 0;
                  qfree(v140);
                }
                if ( src )
                {
                  *(_QWORD *)&v139 = 0;
                  qfree(src);
                }
                if ( v145 )
                {
                  *(_QWORD *)&v146 = 0;
                  qfree(v145);
                }
LABEL_123:
                qfree(v144[0]);
                v129 += v126;
                v43 = *((_DWORD *)v123 + 16);
              }
              while ( v43 > v129 );
            }
LABEL_124:
            if ( (*v123 & 2) == 0 )
            {
              v75 = (_QWORD *)v123[2];
              if ( (*(_BYTE *)v75 & 2) != 0 )
              {
                v115 = (_QWORD *)(*v123 & 0xFFFFFFFFFFFFFFFCLL);
                v116 = *v115;
                if ( (*v115 & 2) == 0 )
                {
                  v117 = v123;
                  while ( v117 == (_QWORD *)v115[2] )
                  {
                    v117 = v115;
                    v118 = v116 & 0xFFFFFFFFFFFFFFFCLL;
                    v116 = *(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v116 & 2) != 0 )
                    {
                      v123 = (_QWORD *)v118;
                      goto LABEL_127;
                    }
                    v115 = (_QWORD *)v118;
                  }
                }
                v123 = v115;
              }
              else
              {
                do
                {
                  v123 = v75;
                  v75 = (_QWORD *)v75[1];
                }
                while ( (*(_BYTE *)v75 & 2) == 0 );
              }
            }
LABEL_127:
            if ( (_QWORD *)v119 == v123 )
              goto LABEL_211;
          }
          if ( !under_debugger )
            sub_37DDE0(50424);
LABEL_236:
          BUG();
        }
      }
      else
      {
        v127 = 0;
      }
LABEL_211:
      sub_DC970(v136.m128i_i64);
      sub_100950(v120);
      return v127;
    }
    if ( !under_debugger )
      sub_37DDE0(50446);
    goto LABEL_236;
  }
  return v127;
}
