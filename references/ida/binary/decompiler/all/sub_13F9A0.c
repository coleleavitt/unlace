__int64 __fastcall sub_13F9A0(__int64 *a1, __int64 a2, _QWORD *a3)
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
  __int64 *v49; // r14
  __int128 v50; // rdi
  __int64 v51; // rax
  unsigned __int64 *v52; // r15
  unsigned int v53; // r13d
  __int64 v54; // rcx
  __m128i *v55; // rsi
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // rbx
  __m128i *v58; // rdx
  __m128i *v59; // rax
  __int64 v60; // r13
  __int64 v61; // rbx
  __m128i *v62; // rax
  int v63; // r8d
  int v64; // r9d
  _QWORD *v65; // rdi
  const char *v66; // rcx
  _QWORD *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rdx
  _DWORD *v71; // r14
  int v72; // eax
  __int64 v73; // rdi
  _QWORD *v74; // rdx
  int **v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 (__fastcall **v78)(); // rdx
  __int64 (__fastcall **v79)(); // rax
  _QWORD *v80; // rdx
  _QWORD *j; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  unsigned __int64 v84; // rdi
  __int64 v85; // rax
  __m128i v86; // xmm1
  __int64 v87; // rax
  __m128i v88; // xmm0
  _QWORD *v89; // rax
  _QWORD *v90; // rcx
  __int64 v91; // rdx
  char *v92; // r14
  __int64 v93; // rcx
  __int128 v94; // rdi
  __int64 v95; // rax
  __m128i v96; // xmm0
  __m128i v97; // xmm1
  __int64 v98; // rsi
  _QWORD *v99; // r14
  __int64 v100; // r13
  __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rcx
  __int64 *v104; // rdx
  __int64 *v105; // rbx
  __int64 v106; // rdi
  __int64 v107; // r14
  __int32 v108; // eax
  size_t v109; // r13
  __int64 v110; // rax
  __int64 v111; // rax
  _QWORD *v112; // rax
  __int64 v113; // rdx
  _QWORD *v114; // rsi
  unsigned __int64 v115; // rcx
  __int64 v116; // [rsp+8h] [rbp-1D8h]
  __int64 v117; // [rsp+10h] [rbp-1D0h]
  _QWORD *v120; // [rsp+28h] [rbp-1B8h]
  unsigned int v121; // [rsp+34h] [rbp-1ACh]
  __int64 v122; // [rsp+38h] [rbp-1A8h]
  int v123; // [rsp+40h] [rbp-1A0h]
  unsigned int v124; // [rsp+44h] [rbp-19Ch]
  char v125; // [rsp+4Bh] [rbp-195h]
  int v126; // [rsp+4Ch] [rbp-194h]
  _QWORD *v127; // [rsp+50h] [rbp-190h]
  unsigned int v128; // [rsp+70h] [rbp-170h]
  int v129; // [rsp+74h] [rbp-16Ch]
  char v130; // [rsp+74h] [rbp-16Ch]
  unsigned __int8 *v131; // [rsp+78h] [rbp-168h] BYREF
  __m128i v132; // [rsp+80h] [rbp-160h] BYREF
  __m128i v133; // [rsp+90h] [rbp-150h] BYREF
  int v134; // [rsp+A0h] [rbp-140h]
  void *src; // [rsp+B0h] [rbp-130h] BYREF
  __int128 v136; // [rsp+B8h] [rbp-128h]
  __int64 *v137; // [rsp+D0h] [rbp-110h] BYREF
  __int128 v138; // [rsp+D8h] [rbp-108h]
  __int64 v139; // [rsp+F0h] [rbp-F0h]
  __int128 v140; // [rsp+F8h] [rbp-E8h]
  __int64 v141[2]; // [rsp+110h] [rbp-D0h] BYREF
  __int64 v142; // [rsp+120h] [rbp-C0h] BYREF
  __int128 v143; // [rsp+128h] [rbp-B8h]
  __m128i v144; // [rsp+140h] [rbp-A0h] BYREF
  __int64 v145; // [rsp+150h] [rbp-90h]
  __int128 v146; // [rsp+158h] [rbp-88h]
  __int64 (__fastcall **v147)(); // [rsp+170h] [rbp-70h] BYREF
  __int128 v148; // [rsp+178h] [rbp-68h]
  __int128 v149; // [rsp+188h] [rbp-58h]
  __int64 *v150; // [rsp+198h] [rbp-48h]
  char v151; // [rsp+1A0h] [rbp-40h]
  unsigned __int64 v152; // [rsp+1A8h] [rbp-38h]

  v152 = __readfsqword(0x28u);
  v124 = 0;
  v122 = *(_QWORD *)(a1[5] + 1504);
  if ( (*(_BYTE *)(v122 + 49) & 0x10) != 0 )
  {
    v117 = sub_10EF10((__int64)a1, 0);
    if ( v117 )
    {
      v133 = 0u;
      v6 = *(_QWORD *)(v117 + 8);
      ++*(_DWORD *)(v117 + 24);
      v134 = -1;
      v7 = 3 * v6;
      v8 = *(_QWORD *)v117;
      v144 = 0u;
      LODWORD(v145) = -1;
      v131 = (unsigned __int8 *)(v8 + 8 * v7 - 24);
      for ( i = sub_64060((_QWORD *)a2, 0); ; i = sub_64060((_QWORD *)a2, v10 + v14) )
      {
        v10 = i;
        if ( i == *(_DWORD *)(a2 + 8) )
          break;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v122 + 32LL))(v122, i);
        v12 = sub_642A0((_QWORD *)a2, v10);
        v13 = (unsigned __int64 *)v144.m128i_i64[0];
        if ( v11 <= (int)v12 )
          v12 = v11;
        v147 = 0;
        *(_QWORD *)&v149 = v10;
        BYTE8(v149) = 1;
        v14 = v12;
        v150 = (__int64 *)(v12 | 0xFFFFFFFF00000000LL);
        v151 = 1;
        v141[0] = (__int64)&v147;
        v148 = 0;
        if ( !v144.m128i_i64[0] )
        {
          v85 = qalloc();
          v86 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v85, (__m128i)(unsigned __int64)v85);
          if ( !v85 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_OWORD *)(v85 + 16) = 0;
          *(_OWORD *)(v85 + 32) = 0;
          *(_OWORD *)(v85 + 48) = 0;
          *(_QWORD *)v85 = v85 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v85 + 64) = 0;
          *(__m128i *)(v85 + 8) = v86;
          v144.m128i_i64[0] = v85;
          *(_QWORD *)v85 = v85 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v85 & 3LL;
          v87 = v144.m128i_i64[0];
          v88 = (__m128i)v144.m128i_u64[0];
          *(_QWORD *)v144.m128i_i64[0] &= ~1uLL;
          *(__m128i *)(v87 + 8) = _mm_unpacklo_epi64(v88, v88);
          *(_QWORD *)v144.m128i_i64[0] |= 2uLL;
          v13 = (unsigned __int64 *)v144.m128i_i64[0];
LABEL_5:
          sub_105F40(&v144, v13, 1, v141);
          goto LABEL_6;
        }
        if ( !v144.m128i_i64[1] )
          goto LABEL_5;
        v15 = 1;
        v16 = *(_QWORD *)v144.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
        sub_105F40(&v144, v13, v15, v141);
LABEL_6:
        if ( v147 )
        {
          *(_QWORD *)&v148 = 0;
          qfree();
        }
      }
      v19 = *(_QWORD **)v131;
      if ( *(_QWORD *)v131 )
      {
        if ( *((_QWORD *)v131 + 1) )
        {
          v20 = (_QWORD *)v19[1];
          if ( v19 != v20 )
          {
            do
            {
              v147 = 0;
              v132.m128i_i64[0] = (__int64)(v20 + 3);
              v148 = 0;
              v21 = sub_102CA0((unsigned __int64 *)&v144, (__int64)(v20 + 3));
              v22 = v147;
              v23 = v148;
              v24 = v21;
              while ( (_QWORD *)v144.m128i_i64[0] != v24 )
              {
                v25 = (__int64 (__fastcall *)())(v24 + 3);
                v26 = *(_BYTE *)(v132.m128i_i64[0] + 32);
                v27 = *((_BYTE *)v24 + 56);
                if ( v27 >= v26
                  && (v26 < v27
                   || *(_QWORD *)(v132.m128i_i64[0] + 24) + *(int *)(v132.m128i_i64[0] + 40) <= (__int64)v24[6]) )
                {
                  break;
                }
                v78 = &v22[v23];
                if ( v78 == v22 )
                  goto LABEL_144;
                v79 = v22;
                while ( v25 != *v79 )
                {
                  if ( v78 == ++v79 )
                    goto LABEL_144;
                }
                if ( v78 == v79 )
                {
LABEL_144:
                  if ( *((_QWORD *)&v148 + 1) < (unsigned __int64)(v23 + 1) )
                  {
                    v147 = (__int64 (__fastcall **)())qvector_reserve();
                    v78 = &v147[v148];
                  }
                  *v78 = v25;
                  v22 = v147;
                  v23 = v148 + 1;
                  *(_QWORD *)&v148 = v148 + 1;
                }
                if ( (*v24 & 2) == 0 )
                {
                  v80 = (_QWORD *)v24[2];
                  if ( (*(_BYTE *)v80 & 2) != 0 )
                  {
                    v82 = (_QWORD *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
                    v83 = *v82;
                    if ( (*v82 & 2) == 0 )
                    {
                      while ( (_QWORD *)v82[2] == v24 )
                      {
                        v24 = v82;
                        v84 = v83 & 0xFFFFFFFFFFFFFFFCLL;
                        v83 = *(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v83 & 2) != 0 )
                        {
                          v24 = (_QWORD *)v84;
                          goto LABEL_142;
                        }
                        v82 = (_QWORD *)v84;
                      }
                    }
                    v24 = v82;
                  }
                  else
                  {
                    for ( j = (_QWORD *)v80[1]; (*(_BYTE *)j & 2) == 0; j = (_QWORD *)j[1] )
                      v80 = j;
                    v24 = v80;
                  }
                }
LABEL_142:
                ;
              }
              if ( v23 )
              {
                v28 = 0;
                v129 = 0;
                v29 = *(int **)v132.m128i_i64[0];
                v30 = *(int **)(v132.m128i_i64[0] + 8);
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
                          v76 = qvector_reserve();
                          v77 = v31[1];
                          *v31 = v76;
                          v35 = (_DWORD *)(v76 + 4 * v77);
                        }
                        v75 = (int **)v132.m128i_i64[0];
                        *v35 = v34;
                        ++v31[1];
                        v29 = *v75;
                        v30 = v75[1];
                      }
                      ++v32;
                    }
                    while ( v32 != &v29[(_QWORD)v30] );
                    v22 = v147;
                  }
                  v28 = ++v129;
                }
                while ( v129 < (unsigned __int64)v148 );
              }
              if ( v22 )
              {
                *(_QWORD *)&v148 = 0;
                qfree();
              }
              if ( (*v20 & 2) == 0 )
              {
                v37 = (_QWORD *)v20[2];
                if ( (*(_BYTE *)v37 & 2) != 0 )
                {
                  v89 = (_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFFCLL);
                  v90 = v20;
                  v91 = *v89;
                  if ( (*v89 & 2) == 0 )
                  {
                    while ( (_QWORD *)v89[2] == v90 )
                    {
                      v90 = v89;
                      v20 = (_QWORD *)(v91 & 0xFFFFFFFFFFFFFFFCLL);
                      v91 = *(_QWORD *)(v91 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v91 & 2) != 0 )
                        goto LABEL_49;
                      v89 = v20;
                    }
                  }
                  v20 = v89;
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
            while ( *(_QWORD **)v131 != v20 );
          }
        }
      }
      v38 = v144.m128i_i64[1];
      v116 = v144.m128i_i64[0];
      v133 = v144;
      v39 = *(__int64 (__fastcall **)(__int64))(*a1 + 88);
      v40 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
      if ( v39 == sub_131CE0 )
        v41 = (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) - 1;
      else
        v41 = (unsigned int)v39((__int64)a1);
      if ( v40 == sub_131DE0 )
        v121 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528) + 8LL * (int)v41) + 352LL);
      else
        v121 = v40((__int64)a1, v41);
      if ( v116 && v38 )
      {
        v124 = 0;
        v120 = *(_QWORD **)(v116 + 8);
        if ( v120 != (_QWORD *)v116 )
        {
          while ( 1 )
          {
            v127 = v120 + 3;
            if ( *((_BYTE *)v120 + 56) != 1 )
              ((void (__noreturn *)(void))sub_132160)();
            if ( !sub_64030((_QWORD *)a2, *((_DWORD *)v120 + 12)) )
              break;
            v42 = v120[4];
            if ( v42 )
            {
              if ( v42 == 1 && !*(_DWORD *)*v127 )
                goto LABEL_124;
            }
            else if ( v121 )
            {
              goto LABEL_124;
            }
            if ( *((_BYTE *)v120 + 56) != 1 )
              ((void (__noreturn *)(void))sub_132160)();
            v123 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v122 + 32LL))(
                     v122,
                     *((unsigned int *)v120 + 12));
            v43 = *((_DWORD *)v120 + 16);
            if ( v43 > 0 )
            {
              v126 = 0;
              do
              {
                v44 = v43 - v126;
                if ( v44 > v123 )
                  v44 = v123;
                v128 = v44;
                if ( *((_BYTE *)v120 + 56) != 1 )
                {
                  if ( !under_debugger )
                    sub_37EA20(51892);
                  goto LABEL_236;
                }
                v45 = *((_DWORD *)v120 + 12) + v126;
                v141[0] = 0;
                v141[1] = 0;
                sub_63580(v141, v45, v44);
                v142 = 0;
                src = 0;
                v137 = 0;
                v143 = 0;
                v136 = 0;
                v138 = 0;
                v125 = sub_135F70(a1, v127, v141, (__int64 *)&src, (__int64 *)&v137);
                if ( !v125 )
                {
                  if ( v137 )
                  {
                    *(_QWORD *)&v138 = 0;
                    qfree();
                  }
                  if ( src )
                  {
                    *(_QWORD *)&v136 = 0;
                    qfree();
                  }
                  if ( v142 )
                  {
                    *(_QWORD *)&v143 = 0;
                    qfree();
                  }
                  goto LABEL_123;
                }
                v139 = 0;
                v140 = 0;
                if ( !v124 )
                {
                  if ( a3 )
                  {
                    v46 = 0;
                    v47 = v136;
                    if ( (_QWORD)v136 )
                    {
                      v109 = 16 * v136;
                      v46 = (void *)qalloc_or_throw();
                      memcpy(v46, src, v109);
                    }
                    v48 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
                    if ( *a3 )
                    {
                      a3[1] = 0;
                      v132 = v48;
                      qfree();
                      v48 = _mm_load_si128(&v132);
                    }
                    *a3 = v46;
                    *(__m128i *)(a3 + 1) = v48;
                  }
                  v124 = 1;
                }
                v49 = v137;
                if ( !(16LL * (_QWORD)v138) )
                {
                  if ( !v121 )
                  {
                    v92 = (char *)src;
                    if ( 16LL * (_QWORD)v136 )
                      goto LABEL_182;
                  }
                  goto LABEL_102;
                }
                do
                {
                  *((_QWORD *)&v50 + 1) = &v144;
                  v132.m128i_i32[0] = *(_DWORD *)(*v49 + 72);
                  v51 = v49[1];
                  v144 = 0u;
                  v145 = 0;
                  v146 = 0;
                  *(_QWORD *)&v50 = *v49;
                  v131 = (unsigned __int8 *)(v51 + 32);
                  sub_1219A0(v50, v51 + 32, 1u, 0xFFFF0000);
                  v52 = (unsigned __int64 *)src;
                  if ( !(16LL * (_QWORD)v136) )
                    goto LABEL_97;
                  while ( 1 )
                  {
                    if ( !sub_123660(v131, v52[1] + 64, 0) )
                      goto LABEL_96;
                    v53 = *(_DWORD *)(*v52 + 72);
                    v147 = 0;
                    *(_QWORD *)&v148 = 0;
                    v130 = sub_6F170((__int64)a1, (__int64 *)&v147, v53, v132.m128i_u32[0]);
                    qfree();
                    if ( !v130 )
                      goto LABEL_96;
                    v148 = 0u;
                    v147 = off_4DD1B8;
                    v149 = 0u;
                    v150 = (__int64 *)&v137;
                    if ( (unsigned int)sub_177680(
                                         (_DWORD)a1,
                                         (unsigned int)&v147,
                                         (unsigned int)&v144,
                                         v53,
                                         v132.m128i_i32[0],
                                         *(_QWORD *)(v52[1] + 8),
                                         v49[1],
                                         3,
                                         0)
                      || (unsigned int)sub_177680(
                                         (_DWORD)a1,
                                         (unsigned int)&v147,
                                         (unsigned int)&v144,
                                         v132.m128i_i32[0],
                                         -1,
                                         *(_QWORD *)(v49[1] + 8),
                                         0,
                                         2,
                                         0)
                      || (unsigned __int8)sub_179CA0(
                                            (_DWORD)a1,
                                            (unsigned int)v141,
                                            v132.m128i_i32[0],
                                            -1,
                                            *(_QWORD *)(v52[1] + 8),
                                            0,
                                            2,
                                            0)
                      && (unsigned __int8)sub_179CA0(
                                            (_DWORD)a1,
                                            (unsigned int)v141,
                                            v53,
                                            v132.m128i_i32[0],
                                            *(_QWORD *)(v52[1] + 8),
                                            v49[1],
                                            1,
                                            0) )
                    {
                      break;
                    }
                    v54 = v140;
                    v55 = (__m128i *)v139;
                    v56 = *v52;
                    v57 = v52[1];
                    v58 = (__m128i *)(v139 + 16 * v140);
                    if ( (__m128i *)v139 != v58 )
                    {
                      v59 = (__m128i *)v139;
                      while ( *(_DWORD *)(v56 + 72) != *(_DWORD *)(v59->m128i_i64[0] + 72) || v57 != v59->m128i_i64[1] )
                      {
                        if ( v58 == ++v59 )
                          goto LABEL_159;
                      }
                      if ( v59 != v58 )
                      {
                        v60 = *v49;
                        v61 = v49[1];
LABEL_91:
                        v62 = v55;
                        do
                        {
                          if ( *(_DWORD *)(v60 + 72) == *(_DWORD *)(v62->m128i_i64[0] + 72) && v62->m128i_i64[1] == v61 )
                          {
                            if ( v62 == v58 )
                              goto LABEL_162;
                            goto LABEL_96;
                          }
                          ++v62;
                        }
                        while ( v62 != v58 );
                        if ( *((_QWORD *)&v140 + 1) >= (unsigned __int64)(v54 + 1) )
                          goto LABEL_163;
LABEL_165:
                        v139 = qvector_reserve();
                        v58 = (__m128i *)(v139 + 16 * v140);
                        goto LABEL_163;
                      }
                    }
LABEL_159:
                    if ( *((_QWORD *)&v140 + 1) < (unsigned __int64)(v140 + 1) )
                    {
                      v139 = qvector_reserve();
                      v58 = (__m128i *)(v139 + 16 * v140);
                    }
                    *v58 = _mm_unpacklo_epi64((__m128i)v56, (__m128i)v57);
                    v55 = (__m128i *)v139;
                    *(_QWORD *)&v140 = v140 + 1;
                    v54 = v140;
                    v60 = *v49;
                    v61 = v49[1];
                    v58 = (__m128i *)(v139 + 16 * v140);
                    if ( v58 != (__m128i *)v139 )
                      goto LABEL_91;
LABEL_162:
                    if ( *((_QWORD *)&v140 + 1) < (unsigned __int64)(v54 + 1) )
                      goto LABEL_165;
LABEL_163:
                    *v58 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v60, (__m128i)(unsigned __int64)v61);
                    *(_QWORD *)&v140 = v140 + 1;
LABEL_96:
                    v52 += 2;
                    if ( v52 == (unsigned __int64 *)((char *)src + 16 * (_QWORD)v136) )
                      goto LABEL_97;
                  }
                  v125 = 0;
LABEL_97:
                  if ( v145 )
                  {
                    *(_QWORD *)&v146 = 0;
                    qfree();
                  }
                  v49 += 2;
                  qfree();
                }
                while ( v49 != &v137[2 * (_QWORD)v138] );
                if ( !v121 )
                {
                  v92 = (char *)src;
                  if ( 16LL * (_QWORD)v136 )
                  {
                    do
                    {
LABEL_182:
                      v93 = *((_QWORD *)v92 + 1);
                      *((_QWORD *)&v94 + 1) = &v147;
                      v147 = 0;
                      v148 = 0u;
                      v149 = 0;
                      *(_QWORD *)&v94 = *(_QWORD *)v92;
                      v132.m128i_i64[0] = v93;
                      sub_1219A0(v94, v93 + 64, 1u, 0xFFFF0000);
                      if ( !(unsigned __int8)sub_179CA0(
                                               (_DWORD)a1,
                                               (unsigned int)&v147,
                                               *(_DWORD *)(*(_QWORD *)v92 + 72LL),
                                               -1,
                                               *(_QWORD *)(*((_QWORD *)v92 + 1) + 8LL),
                                               0,
                                               3,
                                               0) )
                      {
                        v95 = v140;
                        v96 = _mm_loadl_epi64((const __m128i *)v92);
                        v97 = _mm_loadl_epi64((const __m128i *)(v92 + 8));
                        v98 = v139;
                        if ( *((_QWORD *)&v140 + 1) < (unsigned __int64)(v140 + 1) )
                        {
                          v131 = (unsigned __int8 *)v97.m128i_i64[0];
                          v132.m128i_i64[0] = v96.m128i_i64[0];
                          v139 = qvector_reserve();
                          v98 = v139;
                          v97 = _mm_loadl_epi64((const __m128i *)&v131);
                          v96 = _mm_loadl_epi64(&v132);
                          v95 = v140;
                        }
                        *(__m128i *)(v98 + 16 * v95) = _mm_unpacklo_epi64(v96, v97);
                        *(_QWORD *)&v140 = v140 + 1;
                      }
                      if ( *((_QWORD *)&v148 + 1) )
                      {
                        *(_QWORD *)&v149 = 0;
                        qfree();
                      }
                      qfree();
                      v92 += 16;
                    }
                    while ( v92 != (char *)src + 16 * (_QWORD)v136 );
                  }
                }
                if ( v125 )
                {
LABEL_102:
                  if ( !(_QWORD)v140 )
                    goto LABEL_103;
                  v99 = *(_QWORD **)(a1[5] + 920);
                  if ( *((_BYTE *)v120 + 56) != 1 )
                    sub_132160(v99 + 1);
                  v100 = v120[6];
                  LODWORD(v147) = v100;
                  v101 = v99[2];
                  v102 = v99[1];
                  if ( v99[3] < (unsigned __int64)(v101 + 1) )
                  {
                    v111 = qvector_reserve();
                    v99[1] = v111;
                    v102 = v111;
                    v101 = v99[2];
                  }
                  *(_DWORD *)(v102 + 4 * v101) = v100;
                  v103 = v140;
                  v104 = (__int64 *)v139;
                  ++v99[2];
                  v105 = v104;
                  if ( 16 * v103 )
                  {
                    while ( 1 )
                    {
                      v106 = v105[1];
                      if ( *(_DWORD *)v106 )
                      {
                        if ( *(_DWORD *)v106 != 4 )
                        {
                          if ( !under_debugger )
                            sub_37EA20(50426);
                          goto LABEL_236;
                        }
                        if ( *(_DWORD *)(v106 + 36) < (signed int)v128 )
                        {
                          if ( !under_debugger )
                            sub_37EA20(50427);
                          goto LABEL_236;
                        }
                        if ( *(_DWORD *)(v106 + 68) == v128 )
                          goto LABEL_198;
                        if ( *((_BYTE *)v120 + 56) != 1 )
                        {
                          if ( !under_debugger )
                            sub_37EA20(51892);
                          goto LABEL_236;
                        }
                        if ( *(_BYTE *)(v106 + 64) == 1 && *(_DWORD *)(v106 + 72) == *((_DWORD *)v120 + 12) )
                        {
LABEL_198:
                          v107 = *v105;
                          sub_11B160(v106);
                          v108 = *(_DWORD *)(v107 + 24);
                          v103 = v140;
                          v124 = 2;
                          v104 = (__int64 *)v139;
                          v132.m128i_i32[0] = v108;
                          BYTE1(v108) &= ~2u;
                          LOBYTE(v108) = v108 | 0x80;
                          *(_DWORD *)(v107 + 24) = v108;
                        }
                      }
                      v105 += 2;
                      v73 = (__int64)v104;
                      if ( v105 == &v104[2 * v103] )
                        goto LABEL_115;
                    }
                  }
                  v73 = (__int64)v104;
                }
                else
                {
LABEL_103:
                  if ( ((unsigned __int8)sub_63E80(v141, (_QWORD *)(v122 + 224))
                     || (unsigned __int8)sub_314F20(&v142, v122 + 240))
                    && v121 )
                  {
                    v147 = 0;
                    v148 = 0;
                    if ( *((_BYTE *)v120 + 56) != 1 )
                      sub_132160(v121);
                    sub_1313D0((_DWORD *)v122, (__int64 *)&v147, *((_DWORD *)v120 + 12) + v126, v128);
                    v65 = (_QWORD *)a1[5];
                    v66 = s1;
                    if ( (_QWORD)v148 )
                      LODWORD(v66) = (_DWORD)v147;
                    sub_32DD50((_DWORD)v65, -1, 14, (_DWORD)v66, v63, v64);
                    v67 = *(_QWORD **)(a1[5] + 920);
                    v68 = v67[5];
                    v69 = v67[4];
                    v70 = v68 + 1;
                    if ( v67[6] < (unsigned __int64)(v68 + 1) )
                    {
                      v65 = v67 + 4;
                      v110 = qvector_reserve();
                      v67[4] = v110;
                      v69 = v110;
                      v68 = v67[5];
                      v70 = v68 + 1;
                    }
                    v67[5] = v70;
                    v71 = (_DWORD *)(v69 + 8 * v68);
                    v71[1] = v128;
                    if ( *((_BYTE *)v120 + 56) != 1 )
                      sub_132160(v65);
                    v72 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v122 + 176LL))(
                            v122,
                            (unsigned int)(*((_DWORD *)v120 + 12) + v126),
                            v128);
                    *v71 = v72;
                    if ( v72 == -1 )
                    {
                      if ( !under_debugger )
                        sub_37EA20(50425);
                      goto LABEL_236;
                    }
                    if ( v147 )
                    {
                      *(_QWORD *)&v148 = 0;
                      qfree();
                    }
                  }
                  v73 = v139;
                }
LABEL_115:
                if ( v73 )
                {
                  *(_QWORD *)&v140 = 0;
                  qfree();
                }
                if ( v137 )
                {
                  *(_QWORD *)&v138 = 0;
                  qfree();
                }
                if ( src )
                {
                  *(_QWORD *)&v136 = 0;
                  qfree();
                }
                if ( v142 )
                {
                  *(_QWORD *)&v143 = 0;
                  qfree();
                }
LABEL_123:
                qfree();
                v126 += v123;
                v43 = *((_DWORD *)v120 + 16);
              }
              while ( v43 > v126 );
            }
LABEL_124:
            if ( (*v120 & 2) == 0 )
            {
              v74 = (_QWORD *)v120[2];
              if ( (*(_BYTE *)v74 & 2) != 0 )
              {
                v112 = (_QWORD *)(*v120 & 0xFFFFFFFFFFFFFFFCLL);
                v113 = *v112;
                if ( (*v112 & 2) == 0 )
                {
                  v114 = v120;
                  while ( v114 == (_QWORD *)v112[2] )
                  {
                    v114 = v112;
                    v115 = v113 & 0xFFFFFFFFFFFFFFFCLL;
                    v113 = *(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v113 & 2) != 0 )
                    {
                      v120 = (_QWORD *)v115;
                      goto LABEL_127;
                    }
                    v112 = (_QWORD *)v115;
                  }
                }
                v120 = v112;
              }
              else
              {
                do
                {
                  v120 = v74;
                  v74 = (_QWORD *)v74[1];
                }
                while ( (*(_BYTE *)v74 & 2) == 0 );
              }
            }
LABEL_127:
            if ( (_QWORD *)v116 == v120 )
              goto LABEL_211;
          }
          if ( !under_debugger )
            sub_37EA20(50424);
LABEL_236:
          BUG();
        }
      }
      else
      {
        v124 = 0;
      }
LABEL_211:
      sub_E9B00(v133.m128i_i64);
      sub_103910(v117);
      return v124;
    }
    if ( !under_debugger )
      sub_37EA20(50446);
    goto LABEL_236;
  }
  return v124;
}
