__int64 __fastcall calc_func_metadata(__int64 a1, __int64 a2, __int64 a3, void (__fastcall *a4)(void **, __int64))
{
  void **v4; // rax
  void **v6; // rdx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 flags; // r15
  int v14; // r12d
  void **v15; // r14
  unsigned int j; // ebp
  char *v17; // rdx
  size_t v18; // r9
  char *v19; // r13
  char *v20; // r10
  __int64 v21; // rsi
  unsigned __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  void *v28; // rdx
  __m128i v29; // xmm0
  void *v30; // rdi
  void *v31; // rcx
  __int64 v32; // rsi
  unsigned int v33; // ebp
  _QWORD *v34; // r13
  char v35; // r12
  unsigned __int64 item_end; // r12
  int v37; // eax
  int v38; // ebp
  int v39; // eax
  __int64 v40; // rax
  size_t v41; // rbp
  void *wide_byte; // rax
  char *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r14
  unsigned __int64 v46; // r9
  char *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // r8
  unsigned __int64 v51; // r9
  char *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // r9
  char *v56; // rsi
  __int64 v57; // rax
  char v58; // bl
  void *v59; // rdi
  void *v60; // rdi
  void *v61; // rax
  int v62; // eax
  __int64 v63; // rbx
  __int16 v64; // ax
  unsigned int v65; // r13d
  __int64 v66; // rcx
  const char *v67; // rdx
  unsigned int v68; // eax
  _QWORD *v69; // r14
  int v70; // ecx
  unsigned __int64 v71; // rbx
  __int64 v72; // rcx
  int func_chunknum; // eax
  int v74; // r13d
  __int64 v75; // rax
  char *v76; // rsi
  char *v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rax
  void *v81; // rdi
  _QWORD *v82; // rsi
  __int64 v83; // rax
  unsigned __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // r12
  __int64 v88; // r13
  __int64 v89; // rax
  unsigned __int64 v90; // r14
  unsigned __int64 v91; // r13
  unsigned __int64 v92; // r15
  _BYTE *v93; // r13
  unsigned __int64 v94; // r14
  _BYTE *v95; // r15
  __int64 v96; // rax
  _BYTE *v97; // rsi
  int v98; // eax
  char v99; // r13
  __int64 v100; // rax
  _BYTE *v101; // rsi
  char v102; // r10
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rsi
  __int64 v106; // r12
  __int64 v107; // r13
  __int64 v108; // rax
  __int64 v109; // rax
  void *v110; // rbp
  void *v111; // rax
  void *v112; // rbp
  void *v113; // rax
  char *v114; // rdi
  __int64 v115; // r13
  __int64 v116; // r12
  __int64 v117; // rbp
  char *v118; // rbx
  void *v119; // rdi
  void *v120; // rdi
  char *v121; // rdi
  __int64 v122; // rbp
  __int64 v123; // rbx
  char *v124; // rax
  void *v125; // rdx
  char *v126; // rdi
  __int64 v127; // rbp
  __int64 v128; // rbx
  char *v129; // rax
  void *v130; // rdx
  char *v132; // rdi
  void *v133; // r14
  void *v134; // rbp
  char *v135; // rbx
  void *v136; // rdi
  void *v137; // rdi
  char *v138; // rbx
  __int64 v139; // rax
  const void *v140; // rbp
  char *v141; // r15
  unsigned __int64 v142; // r14
  unsigned __int64 v143; // rbp
  int aflags; // eax
  bool v145; // bl
  void *v146; // rdi
  __int64 v147; // rbp
  unsigned __int64 v148; // rbx
  _BYTE *v149; // rsi
  unsigned __int64 v150; // rax
  unsigned __int64 v151; // rdx
  char *v152; // rdx
  unsigned __int64 v153; // rdx
  void *v154; // rax
  unsigned __int64 v155; // rbp
  const void *v156; // r13
  const void *v157; // r13
  __m128i v158; // xmm1
  void *v159; // rax
  __m128i v160; // xmm0
  char *v161; // rdi
  __int64 v162; // r15
  __int64 v163; // rbp
  __int64 v164; // rbx
  char *v165; // r13
  void *v166; // rdi
  void *v167; // rdi
  void *v168; // rdi
  void *v169; // rdi
  void *v170; // rdi
  char v171; // [rsp+0h] [rbp-B48h]
  void *v172; // [rsp+0h] [rbp-B48h]
  void *v173; // [rsp+0h] [rbp-B48h]
  char *v174; // [rsp+0h] [rbp-B48h]
  int v175; // [rsp+0h] [rbp-B48h]
  void *v176; // [rsp+0h] [rbp-B48h]
  void *v177; // [rsp+0h] [rbp-B48h]
  __int64 *v178; // [rsp+8h] [rbp-B40h]
  int v179; // [rsp+10h] [rbp-B38h]
  unsigned __int64 v180; // [rsp+10h] [rbp-B38h]
  unsigned __int64 v181; // [rsp+10h] [rbp-B38h]
  __int64 v182; // [rsp+10h] [rbp-B38h]
  __int64 v183; // [rsp+10h] [rbp-B38h]
  unsigned __int64 v184; // [rsp+10h] [rbp-B38h]
  unsigned __int64 v185; // [rsp+10h] [rbp-B38h]
  char v186; // [rsp+10h] [rbp-B38h]
  __int64 v187; // [rsp+10h] [rbp-B38h]
  __int64 v188; // [rsp+10h] [rbp-B38h]
  char *v189; // [rsp+18h] [rbp-B30h]
  size_t v190; // [rsp+28h] [rbp-B20h]
  char *v191; // [rsp+30h] [rbp-B18h]
  unsigned __int64 v192; // [rsp+38h] [rbp-B10h]
  unsigned __int64 *fchunk; // [rsp+48h] [rbp-B00h]
  __int64 v194; // [rsp+58h] [rbp-AF0h]
  __int64 *v197; // [rsp+70h] [rbp-AD8h]
  int i; // [rsp+78h] [rbp-AD0h]
  __int64 v199; // [rsp+88h] [rbp-AC0h]
  __int64 v202; // [rsp+A8h] [rbp-AA0h] BYREF
  void *v203; // [rsp+B0h] [rbp-A98h] BYREF
  __m128i v204; // [rsp+B8h] [rbp-A90h] BYREF
  void *v205; // [rsp+D0h] [rbp-A78h] BYREF
  __int128 v206; // [rsp+D8h] [rbp-A70h]
  void *v207; // [rsp+F0h] [rbp-A58h] BYREF
  __int128 v208; // [rsp+F8h] [rbp-A50h]
  void *src; // [rsp+110h] [rbp-A38h] BYREF
  __int128 v210; // [rsp+118h] [rbp-A30h]
  void *v211; // [rsp+130h] [rbp-A18h] BYREF
  __int128 v212; // [rsp+138h] [rbp-A10h]
  void *v213; // [rsp+150h] [rbp-9F8h] BYREF
  __m128i v214; // [rsp+158h] [rbp-9F0h]
  void *v215; // [rsp+170h] [rbp-9D8h] BYREF
  __int128 v216; // [rsp+178h] [rbp-9D0h]
  void *v217; // [rsp+188h] [rbp-9C0h]
  __int128 v218; // [rsp+190h] [rbp-9B8h]
  void *v219; // [rsp+1A0h] [rbp-9A8h] BYREF
  __int128 v220; // [rsp+1A8h] [rbp-9A0h] BYREF
  void *v221; // [rsp+1B8h] [rbp-990h] BYREF
  __int128 v222; // [rsp+1C0h] [rbp-988h]
  void *v223[6]; // [rsp+1D0h] [rbp-978h] BYREF
  int v224; // [rsp+200h] [rbp-948h]
  void *v225; // [rsp+210h] [rbp-938h] BYREF
  __int128 v226; // [rsp+218h] [rbp-930h]
  void *v227; // [rsp+228h] [rbp-920h]
  __int128 v228; // [rsp+230h] [rbp-918h]
  void *v229; // [rsp+240h] [rbp-908h]
  __int128 v230; // [rsp+248h] [rbp-900h]
  void *v231; // [rsp+258h] [rbp-8F0h]
  __int128 v232; // [rsp+260h] [rbp-8E8h]
  _QWORD v233[283]; // [rsp+270h] [rbp-8D8h] BYREF

  v233[275] = __readfsqword(0x28u);
  v4 = nullptr;
  if ( !a3 )
    return 0;
  v215 = nullptr;
  v6 = &v215;
  v217 = nullptr;
  if ( !a1 )
    v6 = nullptr;
  v225 = nullptr;
  v199 = qword_2CCB598;
  v197 = (__int64 *)v6;
  if ( a2 )
    v4 = &v225;
  v227 = nullptr;
  v229 = nullptr;
  v178 = (__int64 *)v4;
  v231 = nullptr;
  v223[0] = nullptr;
  v216 = 0;
  v218 = 0;
  v226 = 0;
  v228 = 0;
  v230 = 0;
  v232 = 0;
  *(_OWORD *)&v223[2] = 0;
  func_tail_iterator_set(v223, a3, -1);
  v7 = v223[0];
  LODWORD(v223[1]) = -1;
  v194 = 0;
  if ( v223[0] )
  {
    for ( i = 0; ; ++i )
    {
      v194 = v7[1] + v194 - *v7;
      fchunk = (unsigned __int64 *)get_fchunk(*v7);
      if ( !fchunk )
        break;
      v8 = *fchunk;
      v9 = fchunk[1];
      v206 = 0;
      v205 = nullptr;
      v192 = v9;
      v207 = nullptr;
      v208 = 0;
      v205 = (void *)qvector_reserve(&v205, 0, 256, 1);
      if ( *((_QWORD *)&v208 + 1) <= 0xFFu )
        v207 = (void *)qvector_reserve(&v207, v207, 256, 1);
      src = nullptr;
      v211 = nullptr;
      v210 = 0;
      v212 = 0;
      if ( v8 >= v192 )
      {
        if ( v197 )
        {
LABEL_89:
          if ( (_QWORD)v206 )
            sub_7D9620(v197, v205, v206);
          if ( (_QWORD)v208 )
            sub_7D9620(v197 + 3, v207, v208);
          goto LABEL_93;
        }
        v59 = v207;
        v58 = 1;
        if ( v207 )
          goto LABEL_99;
        v60 = v205;
        if ( v205 )
          goto LABEL_101;
        v7 = v223[0];
        goto LABEL_103;
      }
      do
      {
        v10 = 0;
        flags = get_flags_ex(v8, 0);
        if ( v178 )
        {
          v179 = v8 - *(_DWORD *)fchunk;
          if ( (flags & 0x800) != 0 )
          {
            *(_QWORD *)&v210 = 0;
            if ( (((unsigned __int16)get_aflags(v8) >> 8) & 0x80u) == 0 && get_cmt(&src, v8, 0) > 0 )
            {
              v104 = v178[1];
              v105 = *v178;
              if ( v178[2] < (unsigned __int64)(v104 + 1) )
              {
                v109 = qvector_reserve(v178, v105, v104 + 1, 32);
                *v178 = v109;
                v104 = v178[1];
                v105 = v109;
              }
              v106 = v105 + 32 * v104;
              *(_QWORD *)v106 = -1;
              *(_QWORD *)(v106 + 8) = 0;
              *(_OWORD *)(v106 + 16) = 0;
              ++v178[1];
              *(_DWORD *)v106 = i;
              *(_DWORD *)(v106 + 4) = v179;
              if ( (void **)(v106 + 8) != &src )
              {
                v107 = v210;
                if ( (unsigned __int64)v210 > 1 )
                {
                  v112 = src;
                  v113 = *(void **)(v106 + 8);
                  if ( *(_QWORD *)(v106 + 24) < (unsigned __int64)v210 )
                  {
                    v113 = (void *)qvector_reserve(v106 + 8, *(_QWORD *)(v106 + 8), v210, 1);
                    *(_QWORD *)(v106 + 8) = v113;
                  }
                  *(_QWORD *)(v106 + 16) = v107;
                  memmove(v113, v112, v107 - 1);
                  *(_BYTE *)(*(_QWORD *)(v106 + 8) + v107 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v106 + 16) = 0;
                }
              }
            }
            *(_QWORD *)&v210 = 0;
            if ( get_cmt(&src, v8, 1) > 0 )
            {
              v85 = v178[4];
              v86 = v178[3];
              if ( v178[5] < (unsigned __int64)(v85 + 1) )
              {
                v108 = qvector_reserve(v178 + 3, v86, v85 + 1, 32);
                v178[3] = v108;
                v85 = v178[4];
                v86 = v108;
              }
              v87 = v86 + 32 * v85;
              *(_QWORD *)v87 = -1;
              *(_QWORD *)(v87 + 8) = 0;
              *(_OWORD *)(v87 + 16) = 0;
              ++v178[4];
              *(_DWORD *)v87 = i;
              *(_DWORD *)(v87 + 4) = v179;
              if ( (void **)(v87 + 8) != &src )
              {
                v88 = v210;
                if ( (unsigned __int64)v210 > 1 )
                {
                  v110 = src;
                  v111 = *(void **)(v87 + 8);
                  if ( *(_QWORD *)(v87 + 24) < (unsigned __int64)v210 )
                  {
                    v111 = (void *)qvector_reserve(v87 + 8, *(_QWORD *)(v87 + 8), v210, 1);
                    *(_QWORD *)(v87 + 8) = v111;
                  }
                  *(_QWORD *)(v87 + 16) = v88;
                  memmove(v111, v110, v88 - 1);
                  *(_BYTE *)(*(_QWORD *)(v87 + 8) + v88 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v87 + 16) = 0;
                }
              }
            }
          }
          if ( (flags & 0x2000) != 0 )
          {
            v213 = nullptr;
            v219 = nullptr;
            v214 = 0;
            v220 = 0;
            v14 = 1000;
            v15 = &v213;
            if ( v8 == getinf(19) )
            {
              v14 = 2000;
              v15 = &v219;
            }
            while ( 1 )
            {
              for ( j = v14; ; ++j )
              {
                *(_QWORD *)&v210 = 0;
                if ( get_extra_cmt(&src, v8, j) <= 0 )
                  break;
                v22 = (unsigned __int64)v15[1];
                if ( v22 > 1 )
                {
                  v23 = (__int64)*v15;
                  if ( (unsigned __int64)v15[2] < v22 + 1 )
                  {
                    v24 = qvector_reserve(v15, v23, v22 + 1, 1);
                    *v15 = (void *)v24;
                    v23 = v24;
                  }
                  v15[1] = (void *)(v22 + 1);
                  *(_BYTE *)(v23 + v22 - 1) = 10;
                  *((_BYTE *)*v15 + v22) = 0;
                }
                v17 = (char *)v210;
                if ( (_QWORD)v210 )
                {
                  v18 = v210 - 1;
                  if ( (_QWORD)v210 != 1 )
                  {
                    v19 = (char *)v15[1];
                    v20 = (char *)(v210 - 1);
                    if ( v19 )
                    {
                      --v19;
                      v20 = &v19[v18];
                      v17 = &v19[v210];
                    }
                    v21 = (__int64)*v15;
                    if ( v15[2] < v17 )
                    {
                      v191 = v20;
                      v190 = v210 - 1;
                      v174 = v17;
                      v83 = qvector_reserve(v15, v21, v17, 1);
                      v20 = v191;
                      v18 = v190;
                      *v15 = (void *)v83;
                      v21 = v83;
                      v17 = v174;
                    }
                    v15[1] = v17;
                    v20[v21] = 0;
                    memcpy((char *)*v15 + (_QWORD)v19, src, v18);
                  }
                }
              }
              v15 = &v219;
              if ( v14 == 2000 )
                break;
              v14 = 2000;
            }
            v25 = v178[7];
            v26 = v178[6];
            if ( v178[8] < (unsigned __int64)(v25 + 1) )
            {
              v89 = qvector_reserve(v178 + 6, v26, v25 + 1, 56);
              v178[6] = v89;
              v25 = v178[7];
              v26 = v89;
            }
            v27 = v26 + 56 * v25;
            *(_QWORD *)(v27 + 8) = 0;
            *(_QWORD *)v27 = -1;
            *(_QWORD *)(v27 + 32) = 0;
            *(_OWORD *)(v27 + 16) = 0;
            *(_OWORD *)(v27 + 40) = 0;
            ++v178[7];
            *(_DWORD *)v27 = i;
            *(_DWORD *)(v27 + 4) = v179;
            if ( v214.m128i_i64[0] > 1uLL )
            {
              v28 = *(void **)(v27 + 8);
              v29 = _mm_loadu_si128((const __m128i *)(v27 + 16));
              *(_QWORD *)(v27 + 8) = v213;
              *(__m128i *)(v27 + 16) = v214;
              v213 = v28;
              v214 = v29;
            }
            v30 = v219;
            if ( (unsigned __int64)v220 > 1 )
            {
              v31 = *(void **)(v27 + 32);
              *(_QWORD *)(v27 + 32) = v219;
              v32 = *(_QWORD *)(v27 + 48);
              v30 = v31;
              *(__m128 *)(v27 + 40) = _mm_loadh_ps((const double *)&v220 + 1);
              v219 = v31;
              *((_QWORD *)&v220 + 1) = v32;
            }
            if ( v30 )
            {
              *(_QWORD *)&v220 = 0;
              qfree(v30);
            }
            if ( v213 )
            {
              v214.m128i_i64[0] = 0;
              qfree(v213);
            }
          }
          v171 = 0;
          v33 = 0;
          v34 = &v233[2];
          memset(v233, 0, 0x890u);
          do
          {
            v10 = v33;
            v35 = is_defarg(flags, v33);
            if ( v35 )
            {
              v10 = v33;
              if ( !(unsigned __int8)is_enum(flags, v33) )
              {
                v10 = v33;
                if ( !(unsigned __int8)is_stroff(flags, v33) )
                {
                  v10 = v33;
                  if ( !(unsigned __int8)is_custfmt(flags, v33) )
                  {
                    v10 = v33;
                    if ( (unsigned __int8)is_off(flags, v33) )
                    {
                      v10 = v8;
                      if ( get_opinfo(v34, v8, v33, flags) && !v34[1] )
                        v171 |= (v34[3] & 0x40) == 0;
                    }
                    else
                    {
                      v171 = v35;
                    }
                  }
                }
              }
            }
            ++v33;
            v34 += 34;
          }
          while ( v33 != 8 );
          if ( v171 )
          {
            v233[1] = flags;
            v78 = v178[10];
            v79 = v178[9];
            if ( v178[11] < (unsigned __int64)(v78 + 1) )
            {
              v103 = qvector_reserve(v178 + 9, v79, v78 + 1, 2192);
              v178[9] = v103;
              v78 = v178[10];
              v79 = v103;
            }
            v11 = v79 + 2192 * v78;
            *(_QWORD *)v11 = 0;
            *(_QWORD *)(v11 + 2184) = 0;
            memset(
              (void *)((v11 + 8) & 0xFFFFFFFFFFFFFFF8LL),
              0,
              8LL * (((unsigned int)v11 - (((_DWORD)v11 + 8) & 0xFFFFFFF8) + 2192) >> 3));
            ++v178[10];
            *(_DWORD *)v11 = i;
            *(_DWORD *)(v11 + 4) = v179;
            v80 = 2;
            do
            {
              v81 = (void *)(v11 + v80 * 8);
              v82 = &v233[v80];
              v80 += 34;
              qmemcpy(v81, v82, 0x110u);
              v10 = (unsigned __int64)(v82 + 34);
              v12 = 0;
            }
            while ( v80 != 274 );
            *(_QWORD *)(v11 + 8) = v233[1];
          }
        }
        item_end = get_item_end(v8, v10, v11, v12);
        v37 = nbits(v8);
        v38 = v37 + 14;
        v39 = v37 + 7;
        if ( v39 >= 0 )
          v38 = v39;
        v40 = flags & 0x600;
        v41 = v38 >> 3;
        if ( v40 != 1536 )
        {
          if ( v40 != 1024 || (flags & 0xF00000) != 0x500000 )
          {
LABEL_56:
            if ( v8 >= item_end )
              continue;
            while ( 1 )
            {
              wide_byte = (void *)get_wide_byte(v8);
              if ( v41 )
                break;
              if ( ++v8 == item_end )
                goto LABEL_86;
            }
            v219 = wide_byte;
            while ( 2 )
            {
              v49 = v206;
              v84 = v206 + v41;
              if ( __CFADD__((_QWORD)v206, v41) )
              {
                if ( (unsigned __int64)v206 > 0x7FFFFFFFFFFFFFFELL )
                {
                  if ( (_QWORD)v206 != 0x7FFFFFFFFFFFFFFFLL )
                    *(_QWORD *)&v206 = 0x7FFFFFFFFFFFFFFFLL;
                  goto LABEL_64;
                }
                v84 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v43 = (char *)v205;
              v44 = v206;
              if ( *((_QWORD *)&v206 + 1) < v84 )
              {
                v185 = v84;
                v205 = (void *)qvector_reserve(&v205, v205, v84, 1);
                v43 = (char *)v205;
                v84 = v185;
                v44 = v206;
              }
              v180 = v84;
              memset(&v43[v44], 0, v84 - v44);
              *(_QWORD *)&v206 = v180;
LABEL_64:
              memcpy((char *)v205 + v49, &v219, v41);
              v45 = v208;
              v46 = v208 + v41;
              if ( __CFADD__((_QWORD)v208, v41) )
              {
                if ( (unsigned __int64)v208 <= 0x7FFFFFFFFFFFFFFELL )
                {
                  v46 = 0x7FFFFFFFFFFFFFFFLL;
                  goto LABEL_65;
                }
                if ( (_QWORD)v208 != 0x7FFFFFFFFFFFFFFFLL )
                  *(_QWORD *)&v208 = 0x7FFFFFFFFFFFFFFFLL;
              }
              else
              {
LABEL_65:
                v47 = (char *)v207;
                v48 = v208;
                if ( *((_QWORD *)&v208 + 1) < v46 )
                {
                  v184 = v46;
                  v207 = (void *)qvector_reserve(&v207, v207, v46, 1);
                  v47 = (char *)v207;
                  v46 = v184;
                  v48 = v208;
                }
                v181 = v46;
                memset(&v47[v48], 0, v46 - v48);
                *(_QWORD *)&v208 = v181;
              }
              ++v8;
              memcpy((char *)v207 + v45, &unk_23BA618, v41);
              if ( item_end == v8 )
                goto LABEL_86;
              v219 = (void *)get_wide_byte(v8);
              continue;
            }
          }
          if ( v8 >= item_end )
            continue;
          if ( !v41 )
          {
            do
              ++v8;
            while ( item_end != v8 );
            v8 = item_end;
            continue;
          }
          while ( 2 )
          {
            v50 = v206;
            v51 = v206 + v41;
            if ( __CFADD__((_QWORD)v206, v41) )
            {
              if ( (unsigned __int64)v206 <= 0x7FFFFFFFFFFFFFFELL )
              {
                v51 = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_78;
              }
              if ( (_QWORD)v206 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v206 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else
            {
LABEL_78:
              v52 = (char *)v205;
              v53 = v206;
              if ( *((_QWORD *)&v206 + 1) < v51 )
              {
                v177 = (void *)v51;
                v188 = v206;
                v205 = (void *)qvector_reserve(&v205, v205, v51, 1);
                v52 = (char *)v205;
                v50 = v188;
                v53 = v206;
                v51 = (unsigned __int64)v177;
              }
              v182 = v50;
              v172 = (void *)v51;
              memset(&v52[v53], 0, v51 - v53);
              v50 = v182;
              *(_QWORD *)&v206 = v172;
            }
            memcpy((char *)v205 + v50, &unk_23BA618, v41);
            v54 = v208;
            v55 = v208 + v41;
            if ( __CFADD__((_QWORD)v208, v41) )
            {
              if ( (unsigned __int64)v208 <= 0x7FFFFFFFFFFFFFFELL )
              {
                v55 = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_82;
              }
              if ( (_QWORD)v208 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v208 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else
            {
LABEL_82:
              v56 = (char *)v207;
              v57 = v208;
              if ( *((_QWORD *)&v208 + 1) < v55 )
              {
                v176 = (void *)v55;
                v187 = v208;
                v207 = (void *)qvector_reserve(&v207, v207, v55, 1);
                v56 = (char *)v207;
                v54 = v187;
                v57 = v208;
                v55 = (unsigned __int64)v176;
              }
              v183 = v54;
              v173 = (void *)v55;
              memset(&v56[v57], 0, v55 - v57);
              v54 = v183;
              *(_QWORD *)&v208 = v173;
            }
            ++v8;
            memcpy((char *)v207 + v54, &unk_23BA610, v41);
            if ( item_end == v8 )
              goto LABEL_86;
            continue;
          }
        }
        v90 = v8;
        v91 = 0;
        v92 = v41 * (item_end - v8);
        *(_QWORD *)&v212 = 0;
        do
        {
          if ( sub_3792E0(0x52u, &v211, &v213, v90) <= 0 )
            goto LABEL_162;
          if ( !v213 || (unsigned __int64)v213 % v41 )
          {
            if ( !under_debugger )
              interr(1507);
            goto LABEL_359;
          }
          v91 += (unsigned __int64)v213;
          v90 += (unsigned __int64)v213 / v41;
        }
        while ( v91 < v92 );
        if ( v92 >= v91 )
          goto LABEL_162;
        if ( (get_flags_ex(v90, 4) & 0x600) == 0x200 )
        {
          v58 = 0;
          goto LABEL_94;
        }
        item_end = v90;
LABEL_162:
        if ( (unsigned __int64)v212 < v92 )
          goto LABEL_56;
        if ( v8 < item_end )
        {
          v93 = v211;
          while ( 1 )
          {
            v94 = get_wide_byte(v8);
            if ( v41 )
              break;
            if ( ++v8 == item_end )
            {
              v8 = item_end;
              goto LABEL_87;
            }
          }
          while ( 1 )
          {
            v95 = v93;
            v175 = 1 - (_DWORD)v93;
            do
            {
              v99 = *v95;
              v100 = v206;
              v101 = v205;
              v102 = v94 & ~*v95;
              if ( *((_QWORD *)&v206 + 1) < (unsigned __int64)(v206 + 1) )
              {
                v186 = v94 & ~*v95;
                v205 = (void *)qvector_reserve(&v205, v205, v206 + 1, 1);
                v101 = v205;
                v102 = v186;
                v100 = v206;
              }
              v101[v100] = v102;
              v96 = v208;
              *(_QWORD *)&v206 = v206 + 1;
              v97 = v207;
              if ( *((_QWORD *)&v208 + 1) < (unsigned __int64)(v208 + 1) )
              {
                v207 = (void *)qvector_reserve(&v207, v207, v208 + 1, 1);
                v97 = v207;
                v96 = v208;
              }
              v97[v96] = v99;
              v94 >>= 8;
              *(_QWORD *)&v208 = v208 + 1;
              v98 = (_DWORD)v95++ + v175;
            }
            while ( v98 < v41 );
            if ( item_end == ++v8 )
              break;
            v94 = get_wide_byte(v8);
            v93 = v95;
          }
LABEL_86:
          v8 = item_end;
        }
LABEL_87:
        ;
      }
      while ( v8 < v192 );
      if ( v197 )
        goto LABEL_89;
LABEL_93:
      v58 = 1;
LABEL_94:
      if ( v211 )
      {
        *(_QWORD *)&v212 = 0;
        qfree(v211);
      }
      if ( src )
      {
        *(_QWORD *)&v210 = 0;
        qfree(src);
      }
      v59 = v207;
      if ( v207 )
      {
LABEL_99:
        *(_QWORD *)&v208 = 0;
        qfree(v59);
      }
      v60 = v205;
      if ( v205 )
      {
LABEL_101:
        *(_QWORD *)&v206 = 0;
        qfree(v60);
      }
      v61 = v223[0];
      v7 = v223[0];
      if ( !v58 )
        goto LABEL_203;
LABEL_103:
      if ( !v7 )
        goto LABEL_259;
      v62 = LODWORD(v223[1]) + 1;
      if ( *((_DWORD *)v7 + 32) <= LODWORD(v223[1]) + 1 )
      {
        if ( (_QWORD)v218 == (_QWORD)v216 )
        {
          lock_func_range(v7, 0);
          goto LABEL_107;
        }
LABEL_260:
        if ( !under_debugger )
          interr(1510);
LABEL_359:
        BUG();
      }
      ++LODWORD(v223[1]);
      if ( v62 >= 0 )
        v7 = (_QWORD *)(v7[17] + 16LL * v62);
    }
    v61 = v223[0];
LABEL_203:
    if ( v61 )
      lock_func_range(v61, 0);
    v194 = 0;
    goto LABEL_206;
  }
LABEL_259:
  if ( (_QWORD)v218 != (_QWORD)v216 )
    goto LABEL_260;
LABEL_107:
  if ( v178 )
  {
    v63 = *(_QWORD *)a3;
    v64 = get_flags_ex(*(_QWORD *)a3, 4);
    v203 = nullptr;
    *(_DWORD *)(a2 + 24) = v194;
    v204 = 0;
    if ( (v64 & 0xC000) == 0x4000 && get_ea_name(&v203, v63, 512, 0) )
    {
      v158 = _mm_loadu_si128(&v204);
      v159 = *(void **)a2;
      v160 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      *(_QWORD *)a2 = v203;
      *(__m128i *)(a2 + 8) = v158;
      v203 = v159;
      v204 = v160;
    }
    v202 = 0;
    if ( !(unsigned __int8)get_tinfo(&v202, v63) )
      goto LABEL_110;
    aflags = get_aflags(v63);
    v213 = nullptr;
    v214 = 0;
    v145 = (aflags & 0x2000000) != 0;
    v219 = nullptr;
    memset(v223, 0, 24);
    v220 = 0;
    v219 = (void *)qvector_reserve(&v219, 0, 2, 1);
    *(_QWORD *)&v220 = 2;
    *(_WORD *)v219 = v145;
    if ( !(unsigned __int8)sub_7D8F80((__int64)&v219, (__int64)v223) )
    {
      if ( v223[0] )
      {
        v223[1] = nullptr;
        qfree(v223[0]);
      }
      if ( v219 )
      {
        *(_QWORD *)&v220 = 0;
        qfree(v219);
      }
      goto LABEL_300;
    }
    if ( (unsigned __int64)v220 >= 2 )
      sub_7D9620((__int64 *)&v213, v219, v220 - 1);
    if ( v223[1] <= (char *)&dword_0 + 1 )
      goto LABEL_293;
    v147 = v214.m128i_i64[0];
    LOBYTE(v211) = 0;
    v148 = v214.m128i_i64[0] + 1;
    if ( v214.m128i_i64[0] == -1 )
    {
      v146 = v223[0];
      v152 = (char *)v223[1] - 1;
      v214.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_319:
      sub_7D9620((__int64 *)&v213, v146, (size_t)v152);
LABEL_293:
      v146 = v223[0];
      goto LABEL_294;
    }
    v149 = v213;
    if ( &v211 < v213 )
    {
      v150 = v214.m128i_i64[0];
      if ( v214.m128i_i64[1] >= v148 )
        goto LABEL_308;
    }
    else
    {
      v150 = v214.m128i_i64[0];
      if ( &v211 < (void **)((char *)v213 + v214.m128i_i64[1]) )
      {
        if ( v214.m128i_i64[1] >= v148
          || (v154 = (void *)qvector_reserve(&v213, v213, v214.m128i_i64[0] + 1, 1),
              v213 = v154,
              v149 = v154,
              v150 = v214.m128i_i64[0],
              v214.m128i_i64[0] < v148) )
        {
          while ( 1 )
          {
            v153 = v150;
            v149[v150++] = 0;
            if ( v153 == v147 )
              break;
            v149 = v213;
          }
        }
        goto LABEL_309;
      }
      if ( v214.m128i_i64[1] >= v148 )
      {
LABEL_306:
        if ( v150 < v148 )
        {
          do
          {
            v149 = v213;
LABEL_308:
            v149[v150] = (_BYTE)v211;
            v151 = v150++;
          }
          while ( v151 != v147 );
        }
LABEL_309:
        v214.m128i_i64[0] = v148;
        v146 = v223[0];
        if ( !v223[1] )
        {
          if ( !v223[0] )
            goto LABEL_297;
          goto LABEL_296;
        }
        v152 = (char *)v223[1] - 1;
        if ( v223[1] == (char *)&dword_0 + 1 )
        {
LABEL_294:
          if ( !v146 )
          {
LABEL_297:
            if ( v219 )
            {
              *(_QWORD *)&v220 = 0;
              qfree(v219);
            }
            sub_7E3F90(a2 + 32, 1, v213, v214.m128i_i64[0]);
LABEL_300:
            if ( v213 )
            {
              v214.m128i_i64[0] = 0;
              qfree(v213);
            }
LABEL_110:
            v65 = 0;
            do
            {
              v204.m128i_i64[0] = 0;
              if ( get_func_cmt(&v203, a3, v65) > 0 )
              {
                v66 = v204.m128i_i64[0];
                v67 = haystack;
                if ( v204.m128i_i64[0] )
                {
                  v67 = (const char *)v203;
                  v66 = v204.m128i_i64[0] - 1;
                }
                sub_7E3F90(a2 + 32, v65 + 3, v67, v66);
              }
              v68 = v65 + 1;
              v65 = 1;
            }
            while ( v68 != 2 );
            if ( v178[1] )
              sub_7E4060(a2 + 32, v178, 0);
            if ( v178[4] )
              sub_7E4060(a2 + 32, v178 + 3, 1);
            if ( v178[7] )
              sub_7E4250(a2 + 32, v178 + 6);
            v69 = (_QWORD *)sub_5B9D70(v199, a3);
            if ( v69 )
            {
              v70 = *(_DWORD *)(a3 + 68);
              v219 = nullptr;
              v220 = 0;
              if ( v70 )
              {
                v71 = 0;
                do
                {
                  if ( (get_aflags(*v69) & 2) != 0 )
                  {
                    func_chunknum = get_func_chunknum(a3, *v69);
                    v74 = func_chunknum;
                    if ( func_chunknum && (func_chunknum <= 0 || func_chunknum - 1 >= *(_DWORD *)(a3 + 128)) )
                    {
                      if ( !under_debugger )
                        interr(1573);
                      goto LABEL_359;
                    }
                    v75 = v220;
                    v76 = (char *)v219;
                    if ( *((_QWORD *)&v220 + 1) < (unsigned __int64)(v220 + 1) )
                    {
                      v219 = (void *)qvector_reserve(&v219, v219, v220 + 1, 16);
                      v76 = (char *)v219;
                      v75 = v220;
                    }
                    v77 = &v76[16 * v75];
                    *(_QWORD *)v77 = -1;
                    *((_QWORD *)v77 + 1) = 0;
                    *(_QWORD *)&v220 = v220 + 1;
                    *(_DWORD *)v77 = v74;
                    if ( v74 )
                      v72 = *(_QWORD *)(*(_QWORD *)(a3 + 136) + 16LL * (v74 - 1));
                    else
                      v72 = *(_QWORD *)a3;
                    *((_DWORD *)v77 + 1) = *v69 - v72;
                    *((_QWORD *)v77 + 1) = get_sp_delta(a3, *v69);
                  }
                  ++v71;
                  v69 += 2;
                }
                while ( v71 < *(unsigned int *)(a3 + 68) );
                if ( (_QWORD)v220 )
                  sub_7E44D0(a2 + 32, &v219);
                if ( v219 )
                {
                  *(_QWORD *)&v220 = 0;
                  qfree(v219);
                }
              }
            }
            v211 = nullptr;
            memset(v223, 0, sizeof(v223));
            v224 = 1;
            if ( (unsigned __int8)tinfo_get_func_frame(&v211, a3) && (unsigned __int8)get_tinfo_details(v211, 13, v223) )
            {
              v221 = nullptr;
              v222 = 0;
              v219 = *(void **)(a3 + 32);
              WORD4(v220) = *(_WORD *)(a3 + 40);
              *(_QWORD *)&v220 = *(_QWORD *)(a3 + 48);
              v189 = (char *)v223[0] + 144 * (__int64)v223[1];
              v138 = (char *)v223[0] + 40;
              if ( v189 != v223[0] )
              {
                while ( 1 )
                {
                  if ( (v138[93] & 0x30) == 0 )
                  {
                    v139 = sub_7D9E30((__int64 *)&v221);
                    v140 = *((const void **)v138 - 3);
                    v141 = (char *)v139;
                    if ( v140
                      && strncmp(*((const char **)v138 - 3), "arg_", 4u)
                      && strncmp((const char *)v140, "var_", 4u)
                      && strncmp((const char *)v140, "anonymous", 9u)
                      && v141 != v138 - 24 )
                    {
                      v142 = *((_QWORD *)v138 - 2);
                      if ( v142 > 1 )
                      {
                        if ( *((_QWORD *)v141 + 2) < v142 )
                          *(_QWORD *)v141 = qvector_reserve(v141, *(_QWORD *)v141, *((_QWORD *)v138 - 2), 1);
                        *((_QWORD *)v141 + 1) = v142;
                        memmove(*(void **)v141, v140, v142 - 1);
                        *(_BYTE *)(*(_QWORD *)v141 + v142 - 1) = 0;
                      }
                      else
                      {
                        *((_QWORD *)v141 + 1) = 0;
                      }
                    }
                    sub_7D8F80((__int64)(v141 + 24), (__int64)(v141 + 48));
                    if ( (v138[93] & 8) != 0 )
                    {
                      if ( v141 + 72 != v138 )
                      {
                        v143 = *((_QWORD *)v138 + 1);
                        if ( v143 > 1 )
                        {
                          v157 = *(const void **)v138;
                          if ( *((_QWORD *)v141 + 11) < v143 )
                            *((_QWORD *)v141 + 9) = qvector_reserve(
                                                      v141 + 72,
                                                      *((_QWORD *)v141 + 9),
                                                      *((_QWORD *)v138 + 1),
                                                      1);
                          *((_QWORD *)v141 + 10) = v143;
                          memmove(*((void **)v141 + 9), v157, v143 - 1);
                          *(_BYTE *)(*((_QWORD *)v141 + 9) + v143 - 1) = 0;
                        }
                        else
                        {
                          *((_QWORD *)v141 + 10) = 0;
                        }
                      }
                    }
                    else if ( v141 + 96 != v138 )
                    {
                      v155 = *((_QWORD *)v138 + 1);
                      if ( v155 > 1 )
                      {
                        v156 = *(const void **)v138;
                        if ( *((_QWORD *)v141 + 14) < v155 )
                          *((_QWORD *)v141 + 12) = qvector_reserve(
                                                     v141 + 96,
                                                     *((_QWORD *)v141 + 12),
                                                     *((_QWORD *)v138 + 1),
                                                     1);
                        *((_QWORD *)v141 + 13) = v155;
                        memmove(*((void **)v141 + 12), v156, v155 - 1);
                        *(_BYTE *)(*((_QWORD *)v141 + 12) + v155 - 1) = 0;
                      }
                      else
                      {
                        *((_QWORD *)v141 + 13) = 0;
                      }
                    }
                    *((_QWORD *)v141 + 15) = *((_QWORD *)v138 - 5) >> 3;
                    *((_QWORD *)v141 + 51) = *((_QWORD *)v138 - 4) >> 3;
                  }
                  if ( v189 == v138 + 104 )
                    break;
                  v138 += 144;
                }
              }
              v213 = nullptr;
              v214 = 0;
              sub_7E5FB0(&v219, &v213, 6);
              sub_7E3F90(a2 + 32, 9, v213, v214.m128i_i64[0]);
              if ( v213 )
              {
                v214.m128i_i64[0] = 0;
                qfree(v213);
              }
              v161 = (char *)v221;
              if ( v221 )
              {
                v162 = v222;
                v163 = 0;
                v164 = 0;
                if ( (_QWORD)v222 )
                {
                  do
                  {
                    v165 = &v161[v163];
                    v166 = *(void **)&v161[v163 + 96];
                    if ( v166 )
                    {
                      *((_QWORD *)v165 + 13) = 0;
                      qfree(v166);
                    }
                    v167 = *((void **)v165 + 9);
                    if ( v167 )
                    {
                      *((_QWORD *)v165 + 10) = 0;
                      qfree(v167);
                    }
                    v168 = *((void **)v165 + 6);
                    if ( v168 )
                    {
                      *((_QWORD *)v165 + 7) = 0;
                      qfree(v168);
                    }
                    v169 = *((void **)v165 + 3);
                    if ( v169 )
                    {
                      *((_QWORD *)v165 + 4) = 0;
                      qfree(v169);
                    }
                    v170 = *(void **)v165;
                    if ( *(_QWORD *)v165 )
                    {
                      *((_QWORD *)v165 + 1) = 0;
                      qfree(v170);
                    }
                    ++v164;
                    v161 = (char *)v221;
                    v163 += 416;
                  }
                  while ( v162 != v164 );
                }
                *(_QWORD *)&v222 = 0;
                qfree(v161);
              }
            }
            if ( v178[10] )
              sub_7E4620(a2 + 32, v178 + 9);
            if ( a4 )
            {
              v219 = off_2B3B580;
              *(_QWORD *)&v220 = a2 + 32;
              a4(&v219, a3);
            }
            v132 = (char *)v223[0];
            if ( v223[0] )
            {
              v133 = v223[1];
              if ( v223[1] )
              {
                v134 = nullptr;
                do
                {
                  v135 = &v132[144 * (_QWORD)v134];
                  clear_tinfo_t(v135 + 64);
                  v136 = *((void **)v135 + 5);
                  if ( v136 )
                  {
                    *((_QWORD *)v135 + 6) = 0;
                    qfree(v136);
                  }
                  v137 = *((void **)v135 + 2);
                  if ( v137 )
                  {
                    *((_QWORD *)v135 + 3) = 0;
                    qfree(v137);
                  }
                  v134 = (char *)v134 + 1;
                  v132 = (char *)v223[0];
                }
                while ( v133 != v134 );
              }
              v223[1] = nullptr;
              qfree(v132);
            }
            clear_tinfo_t(&v211);
            clear_tinfo_t(&v202);
            if ( v203 )
            {
              v204.m128i_i64[0] = 0;
              qfree(v203);
            }
            goto LABEL_256;
          }
          v223[1] = nullptr;
LABEL_296:
          qfree(v146);
          goto LABEL_297;
        }
        goto LABEL_319;
      }
    }
    v213 = (void *)qvector_reserve(&v213, v213, v214.m128i_i64[0] + 1, 1);
    v150 = v214.m128i_i64[0];
    goto LABEL_306;
  }
LABEL_256:
  if ( a1 )
  {
    memset(v233, 0, 0x58u);
    MD5Init(v233);
    MD5Update(v233, v215, v216);
    MD5Update(v233, v217, v218);
    MD5Final(a1, v233);
  }
LABEL_206:
  if ( v231 )
  {
    *(_QWORD *)&v232 = 0;
    qfree(v231);
  }
  v114 = (char *)v229;
  if ( v229 )
  {
    v115 = v230;
    if ( (_QWORD)v230 )
    {
      v116 = 0;
      v117 = 0;
      do
      {
        v118 = &v114[v116];
        v119 = *(void **)&v114[v116 + 32];
        if ( v119 )
        {
          *((_QWORD *)v118 + 5) = 0;
          qfree(v119);
        }
        v120 = *((void **)v118 + 1);
        if ( v120 )
        {
          *((_QWORD *)v118 + 2) = 0;
          qfree(v120);
        }
        ++v117;
        v114 = (char *)v229;
        v116 += 56;
      }
      while ( v115 != v117 );
    }
    *(_QWORD *)&v230 = 0;
    qfree(v114);
  }
  v121 = (char *)v227;
  if ( v227 )
  {
    v122 = v228;
    if ( (_QWORD)v228 )
    {
      v123 = 0;
      do
      {
        v124 = &v121[32 * v123];
        v125 = *((void **)v124 + 1);
        if ( v125 )
        {
          *((_QWORD *)v124 + 2) = 0;
          qfree(v125);
          v121 = (char *)v227;
        }
        ++v123;
      }
      while ( v122 != v123 );
    }
    *(_QWORD *)&v228 = 0;
    qfree(v121);
  }
  v126 = (char *)v225;
  if ( v225 )
  {
    v127 = v226;
    if ( (_QWORD)v226 )
    {
      v128 = 0;
      do
      {
        v129 = &v126[32 * v128];
        v130 = *((void **)v129 + 1);
        if ( v130 )
        {
          *((_QWORD *)v129 + 2) = 0;
          qfree(v130);
          v126 = (char *)v225;
        }
        ++v128;
      }
      while ( v127 != v128 );
    }
    *(_QWORD *)&v226 = 0;
    qfree(v126);
  }
  if ( v217 )
  {
    *(_QWORD *)&v218 = 0;
    qfree(v217);
  }
  if ( v215 )
  {
    *(_QWORD *)&v216 = 0;
    qfree(v215);
  }
  return v194;
}
