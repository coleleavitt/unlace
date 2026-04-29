__int64 __fastcall sub_399C00(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *exception; // rdi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 *v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // r13
  __m128i *v9; // rbp
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  int v15; // eax
  __int64 item_end; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 *v21; // rsi
  unsigned __int64 v22; // rbx
  char v23; // r13
  unsigned __int64 v24; // r14
  __int64 v25; // rdi
  __int64 flags; // r13
  char v27; // al
  unsigned __int64 v28; // rdi
  __int64 (*v29)(); // rcx
  __int64 (*v30)(); // rax
  char *v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // r14
  __int64 (*v34)(); // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r13
  __int64 v38; // r14
  unsigned __int64 v39; // rax
  _QWORD *v40; // rsi
  __int64 v41; // r15
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __m128i *v44; // r12
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rbx
  _QWORD *v47; // rax
  _QWORD *v48; // r15
  __int64 *v49; // rbx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 *v52; // rsi
  char v53; // r8
  char v54; // r9
  __int64 *v55; // rax
  __int64 v56; // r15
  __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // r8
  unsigned __int64 v61; // rax
  __m128i v62; // xmm0
  unsigned __int64 v63; // rax
  __m128i v64; // xmm0
  unsigned __int64 v65; // rdi
  _QWORD *v66; // r14
  __int64 v67; // rax
  __int64 v68; // rsi
  unsigned __int64 v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v73; // rax
  __int64 *v74; // rcx
  unsigned __int64 v75; // rdx
  __int64 *v76; // rdx
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  _QWORD *v79; // rax
  __int64 v80; // rdx
  _QWORD *v81; // rcx
  __int64 *v82; // rax
  __int64 *v83; // rdx
  __int64 v84; // rax
  char v85; // dl
  unsigned __int64 v86; // rax
  _BYTE *v87; // rax
  __int64 v88; // rcx
  _QWORD *v89; // rax
  __int64 v90; // rdx
  __int64 i; // rax
  unsigned __int64 v92; // rdi
  __int64 v93; // r13
  __int64 v94; // rax
  __int64 *v95; // rdx
  __int64 v96; // rax
  unsigned __int64 v97; // rdi
  __int64 v98; // rcx
  __int64 v99; // rdi
  unsigned int v100; // eax
  unsigned int v101; // eax
  _BYTE *v102; // rax
  __int64 v103; // rcx
  char *v104; // rdi
  unsigned int v105; // eax
  unsigned int v106; // eax
  __int64 v107; // rax
  __m128i v108; // xmm0
  _QWORD *v109; // rdx
  unsigned __int64 v110; // rcx
  int v111; // eax
  __int64 v112; // rbx
  __int64 v113; // rdx
  _QWORD *v114; // rax
  _QWORD *v115; // r8
  __int64 v116; // rsi
  __int64 v117; // rbx
  __int64 v118; // rdx
  _QWORD *v119; // rsi
  __int64 v120; // r8
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // rdx
  _QWORD *v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rax
  __m128i v126; // xmm1
  unsigned __int64 v127; // r14
  __int64 v128; // r13
  __int64 *v129; // rdi
  __int64 *v130; // rdi
  __int64 v131; // r13
  __int64 *v132; // rdi
  __int64 *v133; // rdi
  __int64 v134; // rax
  __int64 v135; // rdi
  __int64 v136; // rdi
  __int64 v137; // rdi
  __int64 v138; // [rsp+0h] [rbp-288h] BYREF
  char **v139; // [rsp+8h] [rbp-280h]
  __int64 v140; // [rsp+10h] [rbp-278h]
  __int64 *v141; // [rsp+18h] [rbp-270h]
  _QWORD *v142; // [rsp+20h] [rbp-268h]
  __int64 *v143; // [rsp+28h] [rbp-260h]
  __int64 v144; // [rsp+30h] [rbp-258h] BYREF
  __int64 *v145; // [rsp+38h] [rbp-250h] BYREF
  __int64 *v146; // [rsp+40h] [rbp-248h] BYREF
  __m128 *v147; // [rsp+48h] [rbp-240h] BYREF
  __int64 v148; // [rsp+50h] [rbp-238h] BYREF
  __int128 v149; // [rsp+58h] [rbp-230h]
  __m128 v150; // [rsp+70h] [rbp-218h] BYREF
  __m128i v151; // [rsp+80h] [rbp-208h] BYREF
  __int128 v152; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v153; // [rsp+A0h] [rbp-1E8h]
  __int64 v154; // [rsp+A8h] [rbp-1E0h] BYREF
  int v155; // [rsp+B0h] [rbp-1D8h]
  __int128 v156; // [rsp+B8h] [rbp-1D0h]
  __int64 v157; // [rsp+C8h] [rbp-1C0h]
  char v158; // [rsp+D0h] [rbp-1B8h]
  __int128 v159; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v160; // [rsp+F0h] [rbp-198h]
  __int64 v161; // [rsp+F8h] [rbp-190h]
  __int64 v162; // [rsp+100h] [rbp-188h]
  char v163; // [rsp+108h] [rbp-180h] BYREF
  _QWORD v164[8]; // [rsp+248h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v164[0] = __readfsqword(0x28u);
  v5 = a1;
  v6 = sub_1CA620(*(_QWORD *)(v4 + 8));
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  v9 = *(__m128i **)(v7 + 112);
  v140 = *(_QWORD *)(*(_QWORD *)(v7 + 216) + 112LL);
  sub_397CC0(v9->m128i_i64, v7, 0);
  v10 = v9->m128i_i64[0];
  if ( v9->m128i_i64[0] )
  {
    if ( v9->m128i_i64[1] )
    {
      v11 = *(__int64 **)(v10 + 8);
      if ( v11 != (__int64 *)v10 )
      {
        v138 = a1;
        while ( 1 )
        {
          v12 = v11[5];
          v13 = v11[4];
          v14 = v13;
          if ( 8 * v12 )
            break;
LABEL_14:
          v17 = *v11;
          v18 = *v11 & 2;
          if ( v12 )
          {
            if ( !v18 )
            {
              v55 = (__int64 *)v11[2];
              if ( (*(_BYTE *)v55 & 2) != 0 )
              {
                v76 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
                v77 = *v76;
                if ( (*v76 & 2) == 0 )
                {
                  while ( (__int64 *)v76[2] == v11 )
                  {
                    v11 = v76;
                    v78 = v77 & 0xFFFFFFFFFFFFFFFCLL;
                    v77 = *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v77 & 2) != 0 )
                    {
                      v11 = (__int64 *)v78;
                      goto LABEL_19;
                    }
                    v76 = (__int64 *)v78;
                  }
                }
                v11 = v76;
              }
              else
              {
                do
                {
                  v11 = v55;
                  v55 = (__int64 *)v55[1];
                }
                while ( (*(_BYTE *)v55 & 2) == 0 );
              }
            }
          }
          else
          {
            v19 = (unsigned __int64)v11;
            if ( !v18 )
            {
              v20 = v11[2];
              if ( (*(_BYTE *)v20 & 2) != 0 )
              {
                v19 = v17 & 0xFFFFFFFFFFFFFFFCLL;
                v73 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v73 & 2) == 0 )
                {
                  v74 = v11;
                  do
                  {
                    if ( *(__int64 **)(v19 + 16) != v74 )
                      break;
                    v74 = (__int64 *)v19;
                    v75 = v73 & 0xFFFFFFFFFFFFFFFCLL;
                    v73 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFCLL);
                    v19 = v75;
                  }
                  while ( (v73 & 2) == 0 );
                }
              }
              else
              {
                do
                {
                  v19 = v20;
                  v20 = *(_QWORD *)(v20 + 8);
                }
                while ( (*(_BYTE *)v20 & 2) == 0 );
              }
            }
            v21 = v11;
            v11 = (__int64 *)v19;
            sub_3445A0((unsigned __int64 **)v9, v21);
          }
LABEL_19:
          if ( (__int64 *)v9->m128i_i64[0] == v11 )
          {
            v5 = v138;
            goto LABEL_21;
          }
        }
        while ( 1 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)v14 + 8LL);
          if ( (unsigned int)(v15 - 78) <= 1 || v15 == 81 )
          {
            item_end = get_item_end(v11[3]);
            if ( (get_flags_ex(item_end, 4) & 0x10000) != 0 )
            {
              memmove((void *)v14, (const void *)(v14 + 8), v11[4] + 8 * v11[5] - v14 - 8);
              v13 = v11[4];
              v12 = v11[5] - 1;
              v11[5] = v12;
              goto LABEL_9;
            }
            v13 = v11[4];
          }
          v12 = v11[5];
          v14 += 8;
LABEL_9:
          if ( v14 == v13 + 8 * v12 )
            goto LABEL_14;
        }
      }
    }
  }
LABEL_21:
  v148 = 0;
  v144 = -1;
  v153 = -1;
  v154 = 0;
  v155 = -1;
  v157 = -1;
  v158 = 1;
  v149 = 0;
  v152 = 0;
  v156 = 0;
  v22 = v9->m128i_i64[0];
  if ( v9->m128i_i64[0] && v9->m128i_i64[1] )
    v22 = *(_QWORD *)(v22 + 8);
  v150 = (__m128)(unsigned __int64)v8;
  v151 = 0;
  v157 = *v8;
  v141 = &v154;
  v23 = func_tail_iterator_set(&v154, v8, -1);
  if ( v23 )
    v158 = 0;
  v139 = (char **)&v152;
  LOBYTE(v142) = v23 | sub_32D520(&v152, (__int64)&v150.m128_i64[1]);
  if ( v150.m128_u64[1] )
  {
    v151.m128i_i64[0] = 0;
    qfree(v150.m128_u64[1]);
  }
  if ( !(_BYTE)v142 )
    goto LABEL_52;
  while ( 2 )
  {
    while ( 2 )
    {
      v24 = v144;
      if ( v158 )
        v25 = v153;
      else
        v25 = v157;
      v144 = v25;
      flags = get_flags_ex(v25, 4);
      if ( (~BYTE1(flags) & 6) != 0 )
        goto LABEL_48;
      v138 = v9->m128i_i64[0];
      if ( v138 != v22 && *(_QWORD *)(v22 + 24) == v144 )
        goto LABEL_99;
      v27 = netnode_charval(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 216LL) + 104LL), v144, 256);
      v28 = v144;
      if ( v27 == 1 )
      {
        v56 = *(_QWORD *)(v5 + 8) + 16LL;
        goto LABEL_85;
      }
      if ( v27 == 2 )
      {
        v56 = 1;
        goto LABEL_85;
      }
      if ( v27 != 3 || v138 == v22 || (v82 = *(__int64 **)(v22 + 32), v83 = &v82[*(_QWORD *)(v22 + 40)], v83 == v82) )
      {
LABEL_38:
        v29 = sub_D68F0;
        v30 = *(__int64 (**)())(*(_QWORD *)v140 + 280LL);
        if ( v30 == sub_D68F0 )
          goto LABEL_39;
        v28 = v144;
        if ( ((unsigned int (__fastcall *)(__int64, __int64))v30)(v140, v144) != 1 )
          goto LABEL_39;
        v119 = (_QWORD *)v9->m128i_i64[0];
        if ( !v9->m128i_i64[0] )
          goto LABEL_39;
        v120 = 24;
        v121 = *v119 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v121 )
          goto LABEL_234;
        if ( (*(_BYTE *)(*v119 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_39;
        while ( 1 )
        {
          v122 = *(_QWORD *)(v121 + 24);
          v120 = v121 + 24;
          if ( v24 >= v122 )
          {
            if ( v122 >= v24 )
            {
              if ( v119 != (_QWORD *)v121 )
              {
LABEL_234:
                v56 = **(_QWORD **)(v120 + 8);
                goto LABEL_85;
              }
LABEL_39:
              v31 = &v163;
              v160 = -1;
              v161 = 0;
              v162 = 0;
              v159 = -1;
              do
              {
                *(_WORD *)v31 = 0;
                v31 += 40;
                *((_WORD *)v31 - 19) = 0;
                *((_WORD *)v31 - 18) = 0;
                *((_DWORD *)v31 - 2) = 0;
                *((_WORD *)v31 - 17) = 0;
                *((_OWORD *)v31 - 2) = 0;
                *((_QWORD *)v31 - 2) = 0;
              }
              while ( v164 != (_QWORD *)v31 );
              v32 = v28;
              if ( (int)decode_insn(&v159, v28, v164, v29, 0, 0, 0.0) > 0 )
              {
                v32 = 3;
                if ( (unsigned __int8)is_ret_insn(&v159, 3) )
                {
                  v28 = v144;
                  v56 = 1;
                  goto LABEL_85;
                }
              }
              v33 = v144;
              if ( v138 == v22
                || (v34 = *(__int64 (**)())(*(_QWORD *)v140 + 288LL), v34 == sub_334090)
                || (v32 = v144, v33 = v144, !((unsigned __int8 (__fastcall *)(__int64, __int64))v34)(v140, v144)) )
              {
                if ( (flags & 0x10000) == 0 )
                  goto LABEL_45;
                v88 = v9->m128i_i64[0];
                v89 = (_QWORD *)v22;
                while ( 1 )
                {
                  v90 = 0;
                  if ( v88 )
                  {
                    v90 = v9->m128i_i64[0];
                    if ( v9->m128i_i64[1] )
                      v90 = *(_QWORD *)(v88 + 8);
                  }
                  if ( v89 == (_QWORD *)v90 )
                    break;
                  if ( (*v89 & 2) != 0 )
                  {
                    v89 = (_QWORD *)v89[2];
                  }
                  else
                  {
                    v32 = v89[1];
                    if ( (*(_BYTE *)v32 & 2) != 0 )
                    {
                      v95 = (__int64 *)(*v89 & 0xFFFFFFFFFFFFFFFCLL);
                      v32 = *v95;
                      if ( (*v95 & 2) == 0 )
                      {
                        while ( v89 == (_QWORD *)v95[1] )
                        {
                          v89 = v95;
                          v97 = v32 & 0xFFFFFFFFFFFFFFFCLL;
                          v32 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
                          if ( (v32 & 2) != 0 )
                          {
                            v89 = (_QWORD *)v97;
                            goto LABEL_148;
                          }
                          v95 = (__int64 *)v97;
                        }
                      }
                      v89 = v95;
                    }
                    else
                    {
                      for ( i = *(_QWORD *)(v32 + 16); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 16) )
                        v32 = i;
                      v89 = (_QWORD *)v32;
                    }
                  }
LABEL_148:
                  if ( v89[3] < v33 )
                  {
                    v90 = (__int64)v89;
                    break;
                  }
                }
                if ( v90 == v88 )
                {
LABEL_45:
                  v35 = v149;
                  v36 = v148;
                  if ( *((_QWORD *)&v149 + 1) < (unsigned __int64)(v149 + 1) )
                  {
                    v148 = qvector_reserve(&v148, v148, v149 + 1, 8);
                    v36 = v148;
                    v35 = v149;
                  }
                  *(_QWORD *)(v36 + 8 * v35) = v33;
                  *(_QWORD *)&v149 = v149 + 1;
                  goto LABEL_48;
                }
                v92 = *(_QWORD *)(v90 + 24);
                v93 = v90 + 24;
                while ( 1 )
                {
                  if ( v92 >= v33 )
                    goto LABEL_45;
                  v94 = get_item_end(v92);
                  v28 = v94;
                  if ( v144 == v94 )
                    break;
                  v32 = 4;
                  v138 = v94;
                  v33 = v144;
                  v92 = v94;
                  if ( (get_flags_ex(v94, 4) & 0x10000) == 0 )
                    goto LABEL_45;
                }
                if ( *(_QWORD *)(v93 + 16) )
                {
                  v56 = **(_QWORD **)(v93 + 8);
                  goto LABEL_85;
                }
                if ( !under_debugger )
                  sub_37E160(0xC733u, v32, 0.0);
              }
              else
              {
                if ( *(_QWORD *)(v22 + 40) )
                {
                  v28 = v144;
                  v56 = **(_QWORD **)(v22 + 32);
                  goto LABEL_85;
                }
                if ( !under_debugger )
                  sub_37E160(0xC732u, v144, 0.0);
              }
              BUG();
            }
            v121 = *(_QWORD *)(v121 + 16);
          }
          else
          {
            v121 = *(_QWORD *)(v121 + 8);
          }
          if ( (*(_BYTE *)v121 & 2) != 0 )
            goto LABEL_39;
        }
      }
      while ( 1 )
      {
        v56 = *v82;
        if ( *v82 != 1 && *(_DWORD *)(v56 + 8) == 77 )
          break;
        if ( v83 == ++v82 )
          goto LABEL_38;
      }
LABEL_85:
      v150 = (__m128)v28;
      v151 = 0;
      v57 = v9->m128i_i64[0];
      v147 = &v150;
      if ( !v57 )
      {
        v125 = qalloc(56);
        v126 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v125, (__m128i)(unsigned __int64)v125);
        if ( !v125 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v125 + 48) = 0;
        *(_OWORD *)(v125 + 16) = 0;
        *(_OWORD *)(v125 + 32) = 0;
        *(__m128i *)(v125 + 8) = v126;
        *(_QWORD *)v125 = v125 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v9->m128i_i64[0] = v125;
        *(_QWORD *)v125 = v125 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v125 & 3LL;
        *(__m128i *)(v9->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v9->m128i_u64[0], (__m128i)v9->m128i_u64[0]);
        *(_QWORD *)v9->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v9->m128i_i64[0] |= 2uLL;
        v57 = v9->m128i_i64[0];
LABEL_87:
        v58 = qalloc(56);
        v22 = v58;
        if ( !v58 )
        {
          v3 = __cxa_allocate_exception(8u);
          *v3 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v58 + 48) = 0;
        *(_OWORD *)v58 = 0;
        *(_OWORD *)(v58 + 16) = 0;
        *(_OWORD *)(v58 + 32) = 0;
        *(_QWORD *)(v58 + 24) = v150.m128_u64[0];
        v61 = v150.m128_u64[1];
        v62 = _mm_load_si128(&v151);
        v150.m128_u64[1] = 0;
        *(_QWORD *)(v22 + 32) = v61;
        *(__m128i *)(v22 + 40) = v62;
        v151 = 0;
        v63 = v57 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v22 & 1LL;
        *(_QWORD *)v22 = v63;
        v64 = _mm_loadl_epi64(v9);
        *(_QWORD *)v22 = v63 | 1;
        *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v64, v64);
        if ( v57 == v9->m128i_i64[0] )
        {
          *(_QWORD *)v57 = v22 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v57 & 3LL;
          *(_QWORD *)(v9->m128i_i64[0] + 8) = v22;
          *(_QWORD *)(v9->m128i_i64[0] + 16) = v22;
          v124 = *(_QWORD *)v22 & 2LL;
          *(_QWORD *)v22 &= ~1uLL;
          *(_QWORD *)v22 = v124 | v9->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          *(_QWORD *)(v57 + 8) = v22;
          if ( v57 == *(_QWORD *)(v9->m128i_i64[0] + 8) )
            *(_QWORD *)(v9->m128i_i64[0] + 8) = v22;
          sub_343A60(v9, (__int64 *)v22, v57 & 0xFFFFFFFFFFFFFFFCLL, v59, v60);
        }
        ++v9->m128i_i64[1];
        v65 = v150.m128_u64[1];
LABEL_93:
        if ( v65 )
        {
          v151.m128i_i64[0] = 0;
          qfree(v65);
        }
        v66 = (_QWORD *)(v22 + 24);
        goto LABEL_96;
      }
      if ( !v9->m128i_i64[1] )
        goto LABEL_87;
      v22 = *(_QWORD *)v57 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v22 & 2) != 0 )
      {
        v85 = 1;
LABEL_163:
        v96 = sub_343CA0(v9, (unsigned __int64 *)v57, v85, (const __m128i **)&v147);
        v65 = v150.m128_u64[1];
        v22 = v96;
        goto LABEL_93;
      }
      v85 = (char)v142;
      while ( 1 )
      {
        v86 = *(_QWORD *)(v22 + 24);
        v66 = (_QWORD *)(v22 + 24);
        if ( v28 < v86 )
        {
          v87 = *(_BYTE **)(v22 + 8);
          v85 = (char)v142;
          if ( (*v87 & 2) != 0 )
            goto LABEL_136;
          goto LABEL_223;
        }
        if ( v86 >= v28 )
          break;
        v87 = *(_BYTE **)(v22 + 16);
        v85 = 0;
        if ( (*v87 & 2) != 0 )
          goto LABEL_136;
LABEL_223:
        v22 = (unsigned __int64)v87;
      }
      if ( !v22 )
      {
LABEL_136:
        v57 = v22;
        goto LABEL_163;
      }
LABEL_96:
      v150.m128_u64[0] = v56;
      v67 = v66[2];
      v68 = v66[1];
      if ( v66[3] < (unsigned __int64)(v67 + 1) )
      {
        v84 = qvector_reserve(v22 + 32, v68, v67 + 1, 8);
        v66[1] = v84;
        v68 = v84;
        v67 = v66[2];
      }
      *(_QWORD *)(v68 + 8 * v67) = v56;
      ++v66[2];
LABEL_99:
      if ( (*(_QWORD *)v22 & 2) == 0 )
      {
        v69 = *(_QWORD *)(v22 + 16);
        if ( (*(_BYTE *)v69 & 2) != 0 )
        {
          v79 = (_QWORD *)(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFFCLL);
          v80 = *v79;
          if ( (*v79 & 2) == 0 )
          {
            while ( v79[2] == v22 )
            {
              v22 = v80 & 0xFFFFFFFFFFFFFFFCLL;
              v80 = *(_QWORD *)(v80 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v80 & 2) != 0 )
                goto LABEL_48;
              v81 = v79;
              v79 = (_QWORD *)v22;
              v22 = (unsigned __int64)v81;
            }
          }
          v22 = (unsigned __int64)v79;
        }
        else
        {
          do
          {
            v22 = v69;
            v69 = *(_QWORD *)(v69 + 8);
          }
          while ( (*(_BYTE *)v69 & 2) == 0 );
        }
      }
LABEL_48:
      if ( !v158 )
      {
        if ( !(unsigned __int8)func_item_iterator_next(v141, sub_1B3DF0, 0) )
        {
          v158 = 1;
          break;
        }
        continue;
      }
      break;
    }
    if ( (unsigned __int8)sub_32D540(v139) )
      continue;
    break;
  }
LABEL_52:
  v37 = (unsigned int)(v149 - 1);
  v38 = 8 * v37;
  if ( (int)v37 < 0 )
    goto LABEL_60;
  while ( 2 )
  {
    v144 = *(_QWORD *)(v148 + v38);
    v39 = get_item_end(v144);
    v40 = (_QWORD *)v9->m128i_i64[0];
    if ( !v9->m128i_i64[0] )
      goto LABEL_59;
    v41 = 24;
    v42 = *v40 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v42 )
    {
LABEL_197:
      v110 = *(_QWORD *)(v41 + 16);
      if ( v110 )
      {
        v111 = 0;
        v112 = 0;
        while ( 1 )
        {
          v113 = *(_QWORD *)(*(_QWORD *)(v41 + 8) + 8 * v112);
          if ( v113 != 1 && *(_DWORD *)(v113 + 8) == 77 )
            break;
          v112 = ++v111;
          if ( v111 >= v110 )
            goto LABEL_59;
        }
        v145 = &v144;
        v114 = (_QWORD *)sub_396E80(v9, (unsigned __int64 *)&v144, &v145);
        v115 = v114 + 3;
        v116 = v114[4];
        v117 = *(_QWORD *)(*(_QWORD *)(v41 + 8) + 8 * v112);
        v118 = v114[5];
        if ( v114[6] < (unsigned __int64)(v118 + 1) )
        {
          v138 = (__int64)(v114 + 3);
          v134 = qvector_reserve(v114 + 4, v116, v118 + 1, 8);
          v115 = (_QWORD *)v138;
          v116 = v134;
          *(_QWORD *)(v138 + 8) = v134;
          v118 = v115[2];
        }
        *(_QWORD *)(v116 + 8 * v118) = v117;
        ++v115[2];
      }
      goto LABEL_59;
    }
    if ( (*(_BYTE *)(*v40 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_59;
    while ( 2 )
    {
      v43 = *(_QWORD *)(v42 + 24);
      v41 = v42 + 24;
      if ( v39 < v43 )
      {
        v42 = *(_QWORD *)(v42 + 8);
        goto LABEL_58;
      }
      if ( v43 < v39 )
      {
        v42 = *(_QWORD *)(v42 + 16);
LABEL_58:
        if ( (*(_BYTE *)v42 & 2) != 0 )
          goto LABEL_59;
        continue;
      }
      break;
    }
    if ( v40 != (_QWORD *)v42 )
      goto LABEL_197;
LABEL_59:
    LODWORD(v37) = v37 - 1;
    v38 -= 8;
    if ( (_DWORD)v37 != -1 )
      continue;
    break;
  }
LABEL_60:
  v44 = *(__m128i **)(*(_QWORD *)(v5 + 8) + 120LL);
  v45 = v44->m128i_i64[0];
  if ( !v44->m128i_i64[0] )
  {
LABEL_258:
    v44->m128i_i64[1] = 0;
    goto LABEL_63;
  }
  v46 = *(_QWORD *)v45;
  if ( v44->m128i_i64[1] )
  {
    v127 = v46 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v46 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_257:
      *(_QWORD *)v45 = v46 & 3 | v45 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v44->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v44->m128i_u64[0], (__m128i)v44->m128i_u64[0]);
      *(_QWORD *)v44->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v44->m128i_i64[0] |= 2uLL;
      goto LABEL_258;
    }
    v128 = *(_QWORD *)(v127 + 8);
    if ( (*(_BYTE *)v128 & 2) != 0 )
    {
      v131 = *(_QWORD *)(v127 + 16);
      if ( (*(_BYTE *)v131 & 2) != 0 )
        goto LABEL_260;
      goto LABEL_247;
    }
    v129 = *(__int64 **)(v128 + 8);
    if ( (*(_BYTE *)v129 & 2) != 0 )
    {
      v130 = *(__int64 **)(v128 + 16);
      if ( (*(_BYTE *)v130 & 2) != 0 )
      {
LABEL_268:
        v137 = *(_QWORD *)(v128 + 32);
        if ( v137 )
        {
          *(_QWORD *)(v128 + 40) = 0;
          qfree(v137);
        }
        *(_QWORD *)v128 |= 2uLL;
LABEL_244:
        if ( v128 )
          qfree(v128);
        v131 = *(_QWORD *)(v127 + 16);
        if ( (*(_BYTE *)v131 & 2) != 0 )
        {
LABEL_253:
          if ( (*(_BYTE *)v127 & 2) != 0 )
          {
LABEL_254:
            if ( v46 > 3 )
              qfree(v46 & 0xFFFFFFFFFFFFFFFCLL);
            v45 = v44->m128i_i64[0];
            v46 = *(_QWORD *)v44->m128i_i64[0];
            goto LABEL_257;
          }
LABEL_260:
          v135 = *(_QWORD *)(v127 + 32);
          if ( v135 )
          {
            *(_QWORD *)(v127 + 40) = 0;
            qfree(v135);
          }
          *(_QWORD *)v127 |= 2uLL;
          goto LABEL_254;
        }
LABEL_247:
        v132 = *(__int64 **)(v131 + 8);
        if ( (*(_BYTE *)v132 & 2) != 0 )
        {
          v133 = *(__int64 **)(v131 + 16);
          if ( (*(_BYTE *)v133 & 2) != 0 )
            goto LABEL_264;
        }
        else
        {
          sub_380BC0(v132);
          v133 = *(__int64 **)(v131 + 16);
          if ( (*(_BYTE *)v133 & 2) != 0 )
            goto LABEL_250;
        }
        sub_380BC0(v133);
LABEL_250:
        if ( (*(_BYTE *)v131 & 2) != 0 )
        {
LABEL_251:
          if ( v131 )
            qfree(v131);
          goto LABEL_253;
        }
LABEL_264:
        v136 = *(_QWORD *)(v131 + 32);
        if ( v136 )
        {
          *(_QWORD *)(v131 + 40) = 0;
          qfree(v136);
        }
        *(_QWORD *)v131 |= 2uLL;
        goto LABEL_251;
      }
    }
    else
    {
      sub_380BC0(v129);
      v130 = *(__int64 **)(v128 + 16);
      if ( (*(_BYTE *)v130 & 2) != 0 )
        goto LABEL_243;
    }
    sub_380BC0(v130);
LABEL_243:
    if ( (*(_BYTE *)v128 & 2) != 0 )
      goto LABEL_244;
    goto LABEL_268;
  }
  *(_QWORD *)v45 = *(_QWORD *)v45 & 3LL | v45 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v44->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v44->m128i_u64[0], (__m128i)v44->m128i_u64[0]);
  *(_QWORD *)v44->m128i_i64[0] &= ~1uLL;
  *(_QWORD *)v44->m128i_i64[0] |= 2uLL;
LABEL_63:
  v47 = (_QWORD *)v9->m128i_i64[0];
  if ( v9->m128i_i64[0] )
  {
    if ( v9->m128i_i64[1] )
    {
      v48 = (_QWORD *)v47[1];
      if ( v47 != v48 )
      {
        while ( 1 )
        {
          v144 = v48[3];
          v138 = get_item_end(v144);
          v49 = (__int64 *)v48[4];
          if ( 8LL * v48[5] )
            break;
LABEL_192:
          if ( (*v48 & 2) == 0 )
          {
            v109 = (_QWORD *)v48[2];
            if ( (*(_BYTE *)v109 & 2) != 0 )
            {
              v70 = (_QWORD *)(*v48 & 0xFFFFFFFFFFFFFFFCLL);
              v71 = *v70;
              if ( (*v70 & 2) != 0 || v48 != (_QWORD *)v70[2] )
              {
LABEL_104:
                v48 = v70;
              }
              else
              {
                while ( 1 )
                {
                  v48 = (_QWORD *)(v71 & 0xFFFFFFFFFFFFFFFCLL);
                  v71 = *(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v71 & 2) != 0 )
                    break;
                  v123 = v70;
                  v70 = v48;
                  if ( v123 != (_QWORD *)v48[2] )
                    goto LABEL_104;
                }
              }
            }
            else
            {
              do
              {
                v48 = v109;
                v109 = (_QWORD *)v109[1];
              }
              while ( (*(_BYTE *)v109 & 2) == 0 );
            }
          }
          if ( (_QWORD *)v9->m128i_i64[0] == v48 )
            goto LABEL_106;
        }
LABEL_71:
        v52 = (unsigned __int64 *)v44->m128i_i64[0];
        v146 = v49;
        if ( !v52 )
        {
          v107 = qalloc(72);
          v108 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v107, (__m128i)(unsigned __int64)v107);
          if ( !v107 )
          {
            v1 = __cxa_allocate_exception(8u);
            *v1 = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              v1,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v107 + 64) = 0;
          *(_OWORD *)(v107 + 16) = 0;
          *(__m128i *)(v107 + 8) = v108;
          *(_OWORD *)(v107 + 32) = 0;
          *(_QWORD *)v107 = v107 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v107 + 48) = 0;
          v44->m128i_i64[0] = v107;
          *(_QWORD *)v107 = v107 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v107 & 3LL;
          *(__m128i *)(v44->m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                  (__m128i)v44->m128i_u64[0],
                                                  (__m128i)v44->m128i_u64[0]);
          *(_QWORD *)v44->m128i_i64[0] &= ~1uLL;
          *(_QWORD *)v44->m128i_i64[0] |= 2uLL;
          v52 = (unsigned __int64 *)v44->m128i_i64[0];
LABEL_68:
          v50 = sub_399A80(v44, v52, 1, &v146);
LABEL_69:
          v51 = v50;
          goto LABEL_70;
        }
        if ( !v44->m128i_i64[1] )
          goto LABEL_68;
        v53 = 1;
        v51 = *v52 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v51 & 2) != 0 )
        {
          v54 = 1;
LABEL_75:
          v50 = sub_399A80(v44, v52, v54, &v146);
          goto LABEL_69;
        }
        while ( 1 )
        {
          v98 = *(_QWORD *)(v51 + 24);
          v99 = *v49;
          v139 = (char **)(v51 + 24);
          if ( v98 == v99 )
          {
LABEL_188:
            if ( !v51 )
            {
LABEL_179:
              v54 = v53;
              v52 = (unsigned __int64 *)v51;
              goto LABEL_75;
            }
LABEL_70:
            v150 = _mm_loadh_ps((const double *)&v138);
            rangeset_t_add(v51 + 32, &v150);
            if ( ++v49 == (__int64 *)(v48[4] + 8LL * v48[5]) )
              goto LABEL_192;
            goto LABEL_71;
          }
          if ( v99 == 1 || !v98 )
          {
            if ( v98 == 1 || !v99 )
              goto LABEL_188;
          }
          else
          {
            LOBYTE(v140) = v53;
            if ( v98 == 1
              || !v99
              || ((v143 = (__int64 *)v51,
                   v142 = (_QWORD *)v98,
                   v141 = (__int64 *)v99,
                   v100 = sub_254E20(v99, v98),
                   v51 = (unsigned __int64)v143,
                   v53 = v140,
                   v100)
                ? (v101 = v100 >> 31)
                : (LOBYTE(v101) = (unsigned __int64)*v141 < *v142),
                  (_BYTE)v101) )
            {
              v102 = *(_BYTE **)(v51 + 8);
              v53 = 1;
              goto LABEL_178;
            }
            v103 = *v49;
            v104 = *v139;
            if ( (char *)*v49 == *v139 || v104 == &byte_1 || !v103 )
              goto LABEL_188;
            LOBYTE(v142) = v140;
            if ( v103 != 1 && v104 )
            {
              v141 = v143;
              v140 = v103;
              v139 = (char **)v104;
              v105 = sub_254E20((__int64)v104, v103);
              v51 = (unsigned __int64)v141;
              v53 = (char)v142;
              if ( v105 )
                v106 = v105 >> 31;
              else
                LOBYTE(v106) = (unsigned __int64)*v139 < *(_QWORD *)v140;
              if ( !(_BYTE)v106 )
                goto LABEL_188;
            }
          }
          v102 = *(_BYTE **)(v51 + 16);
          v53 = 0;
LABEL_178:
          if ( (*v102 & 2) != 0 )
            goto LABEL_179;
          v51 = (unsigned __int64)v102;
        }
      }
    }
  }
LABEL_106:
  if ( v154 )
    lock_func_range(v154, 0);
  if ( v148 )
  {
    *(_QWORD *)&v149 = 0;
    qfree(v148);
  }
  return 0;
}
