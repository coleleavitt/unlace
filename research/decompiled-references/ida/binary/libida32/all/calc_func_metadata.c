__int64 __fastcall calc_func_metadata(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        void (__fastcall *a4)(void **, unsigned int *))
{
  void **v4; // rax
  void **v6; // rdx
  unsigned int *v7; // rdi
  unsigned int v8; // ebp
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 flags; // r12
  int v14; // r13d
  void **v15; // r15
  unsigned int j; // ebx
  char *v17; // rdx
  size_t v18; // r9
  char *v19; // r14
  char *v20; // r10
  __int64 v21; // rsi
  unsigned __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  void *v28; // rdx
  __m128i v29; // xmm0
  void *v30; // rdi
  void *v31; // rcx
  void *v32; // rsi
  unsigned int v33; // ebx
  _QWORD *v34; // r14
  char v35; // r13
  unsigned int item_end; // r13d
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  __int64 v40; // rax
  size_t v41; // rbx
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
  unsigned int *v61; // rax
  int v62; // eax
  unsigned int v63; // ebx
  __int16 v64; // ax
  unsigned int v65; // r13d
  __int64 v66; // rcx
  const char *v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // r14
  unsigned int v70; // ecx
  unsigned __int64 v71; // r13
  unsigned int v72; // ecx
  int func_chunknum; // eax
  int v74; // ebp
  void *v75; // rax
  char *v76; // rsi
  char *v77; // r15
  __int64 v78; // rdx
  __int64 k; // rax
  __int64 v80; // rax
  unsigned __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // r13
  __int64 v85; // r14
  __int64 v86; // rax
  unsigned int v87; // r14d
  unsigned __int64 v88; // r12
  unsigned __int64 v89; // r15
  char *v90; // r12
  unsigned __int64 v91; // r14
  char *v92; // r15
  __int64 v93; // rax
  _BYTE *v94; // rsi
  __int64 v95; // rax
  _BYTE *v96; // rsi
  char v97; // r8
  char v98; // r10
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rsi
  __int64 v102; // r13
  __int64 v103; // r14
  __int64 v104; // rax
  __int64 v105; // rax
  void *v106; // rbx
  void *v107; // rax
  void *v108; // rbx
  void *v109; // rax
  char *v110; // rdi
  __int64 v111; // r13
  __int64 v112; // r12
  __int64 v113; // rbp
  char *v114; // rbx
  void *v115; // rdi
  void *v116; // rdi
  char *v117; // rdi
  __int64 v118; // rbp
  __int64 v119; // rbx
  char *v120; // rax
  void *v121; // rdx
  char *v122; // rdi
  __int64 v123; // rbp
  __int64 v124; // rbx
  char *v125; // rax
  void *v126; // rdx
  char *v128; // rdi
  void *v129; // r13
  void *v130; // rbp
  char *v131; // rbx
  void *v132; // rdi
  void *v133; // rdi
  char *v134; // rbx
  __int64 v135; // rax
  const void *v136; // rbp
  char *v137; // r14
  unsigned __int64 v138; // r13
  unsigned __int64 v139; // rbp
  int aflags; // eax
  bool v141; // bl
  void *v142; // rdi
  __int64 v143; // rbp
  unsigned __int64 v144; // rbx
  _BYTE *v145; // rsi
  unsigned __int64 v146; // rax
  unsigned __int64 v147; // rdx
  char *v148; // rdx
  unsigned __int64 v149; // rdx
  void *v150; // rax
  unsigned __int64 v151; // rbp
  const void *v152; // r13
  void *v153; // rdi
  const void *v154; // r13
  void *v155; // rdi
  __m128i v156; // xmm1
  void *v157; // rax
  __m128i v158; // xmm0
  char *v159; // rdi
  __int64 v160; // r14
  __int64 v161; // rbp
  __int64 v162; // rbx
  char *v163; // r13
  void *v164; // rdi
  void *v165; // rdi
  void *v166; // rdi
  void *v167; // rdi
  void *v168; // rdi
  void *v169; // rdi
  char v170; // [rsp+0h] [rbp-6F8h]
  void *v171; // [rsp+0h] [rbp-6F8h]
  void *v172; // [rsp+0h] [rbp-6F8h]
  char *v173; // [rsp+0h] [rbp-6F8h]
  char v174; // [rsp+0h] [rbp-6F8h]
  char v175; // [rsp+0h] [rbp-6F8h]
  void *v176; // [rsp+0h] [rbp-6F8h]
  void *v177; // [rsp+0h] [rbp-6F8h]
  __int64 *v178; // [rsp+8h] [rbp-6F0h]
  unsigned int v179; // [rsp+10h] [rbp-6E8h]
  unsigned __int64 v180; // [rsp+10h] [rbp-6E8h]
  unsigned __int64 v181; // [rsp+10h] [rbp-6E8h]
  __int64 v182; // [rsp+10h] [rbp-6E8h]
  __int64 v183; // [rsp+10h] [rbp-6E8h]
  unsigned __int64 v184; // [rsp+10h] [rbp-6E8h]
  unsigned __int64 v185; // [rsp+10h] [rbp-6E8h]
  char v186; // [rsp+10h] [rbp-6E8h]
  __int64 v187; // [rsp+10h] [rbp-6E8h]
  __int64 v188; // [rsp+10h] [rbp-6E8h]
  char *v189; // [rsp+10h] [rbp-6E8h]
  size_t v190; // [rsp+28h] [rbp-6D0h]
  char *v191; // [rsp+30h] [rbp-6C8h]
  unsigned int v192; // [rsp+3Ch] [rbp-6BCh]
  unsigned int *fchunk; // [rsp+40h] [rbp-6B8h]
  unsigned int v194; // [rsp+54h] [rbp-6A4h]
  __int64 *v197; // [rsp+68h] [rbp-690h]
  int i; // [rsp+70h] [rbp-688h]
  __int64 v199; // [rsp+78h] [rbp-680h]
  __int64 v202; // [rsp+98h] [rbp-660h] BYREF
  unsigned int *v203; // [rsp+A0h] [rbp-658h] BYREF
  int v204; // [rsp+A8h] [rbp-650h]
  __int64 v205; // [rsp+ACh] [rbp-64Ch]
  void *v206; // [rsp+C0h] [rbp-638h] BYREF
  __m128i v207; // [rsp+C8h] [rbp-630h] BYREF
  void *v208; // [rsp+E0h] [rbp-618h] BYREF
  __int128 v209; // [rsp+E8h] [rbp-610h]
  void *v210; // [rsp+100h] [rbp-5F8h] BYREF
  __int128 v211; // [rsp+108h] [rbp-5F0h]
  void *src; // [rsp+120h] [rbp-5D8h] BYREF
  __int128 v213; // [rsp+128h] [rbp-5D0h]
  void *v214; // [rsp+140h] [rbp-5B8h] BYREF
  __int128 v215; // [rsp+148h] [rbp-5B0h]
  void *v216; // [rsp+160h] [rbp-598h] BYREF
  void *v217[2]; // [rsp+168h] [rbp-590h] BYREF
  __int128 v218; // [rsp+178h] [rbp-580h]
  void *v219; // [rsp+190h] [rbp-568h] BYREF
  __int128 v220; // [rsp+198h] [rbp-560h]
  void *v221; // [rsp+1A8h] [rbp-550h]
  __int128 v222; // [rsp+1B0h] [rbp-548h]
  void *v223[6]; // [rsp+1C0h] [rbp-538h] BYREF
  int v224; // [rsp+1F0h] [rbp-508h]
  void *v225; // [rsp+200h] [rbp-4F8h] BYREF
  __int128 v226; // [rsp+208h] [rbp-4F0h]
  void *v227; // [rsp+218h] [rbp-4E0h]
  __int128 v228; // [rsp+220h] [rbp-4D8h]
  void *v229; // [rsp+230h] [rbp-4C8h]
  __int128 v230; // [rsp+238h] [rbp-4C0h]
  void *v231; // [rsp+248h] [rbp-4B0h]
  __int128 v232; // [rsp+250h] [rbp-4A8h]
  _QWORD v233[147]; // [rsp+260h] [rbp-498h] BYREF

  v233[139] = __readfsqword(0x28u);
  v4 = nullptr;
  if ( !a3 )
    return 0;
  v219 = nullptr;
  v6 = &v219;
  v221 = nullptr;
  if ( !a1 )
    v6 = nullptr;
  v225 = nullptr;
  v199 = qword_2CA1698;
  v197 = (__int64 *)v6;
  if ( a2 )
    v4 = &v225;
  v227 = nullptr;
  v229 = nullptr;
  v231 = nullptr;
  v178 = (__int64 *)v4;
  v203 = nullptr;
  v205 = 0;
  v220 = 0;
  v222 = 0;
  v226 = 0;
  v228 = 0;
  v230 = 0;
  v232 = 0;
  func_tail_iterator_set(&v203, a3, 0xFFFFFFFFLL);
  v7 = v203;
  v194 = 0;
  v204 = -1;
  if ( v203 )
  {
    for ( i = 0; ; ++i )
    {
      v194 = v7[1] + v194 - *v7;
      fchunk = (unsigned int *)get_fchunk(*v7);
      if ( !fchunk )
        break;
      v8 = *fchunk;
      v9 = fchunk[1];
      v209 = 0;
      v208 = nullptr;
      v192 = v9;
      v210 = nullptr;
      v211 = 0;
      v208 = (void *)qvector_reserve(&v208, 0, 256, 1);
      if ( *((_QWORD *)&v211 + 1) <= 0xFFu )
        v210 = (void *)qvector_reserve(&v210, v210, 256, 1);
      src = nullptr;
      v214 = nullptr;
      v213 = 0;
      v215 = 0;
      if ( v8 >= v192 )
      {
        if ( v197 )
        {
LABEL_89:
          if ( (_QWORD)v209 )
            sub_7B6220(v197, v208, v209);
          if ( (_QWORD)v211 )
            sub_7B6220(v197 + 3, v210, v211);
          goto LABEL_93;
        }
        v59 = v210;
        v58 = 1;
        if ( v210 )
          goto LABEL_99;
        v60 = v208;
        if ( v208 )
          goto LABEL_101;
        v7 = v203;
        goto LABEL_103;
      }
      do
      {
        v10 = 0;
        flags = get_flags_ex(v8, 0);
        if ( v178 )
        {
          v179 = v8 - *fchunk;
          if ( (flags & 0x800) != 0 )
          {
            *(_QWORD *)&v213 = 0;
            if ( (((unsigned __int16)get_aflags(v8) >> 8) & 0x80u) == 0 && get_cmt(&src, v8, 0) > 0 )
            {
              v100 = v178[1];
              v101 = *v178;
              if ( v178[2] < (unsigned __int64)(v100 + 1) )
              {
                v105 = qvector_reserve(v178, v101, v100 + 1, 32);
                *v178 = v105;
                v100 = v178[1];
                v101 = v105;
              }
              v102 = v101 + 32 * v100;
              *(_QWORD *)v102 = -1;
              *(_QWORD *)(v102 + 8) = 0;
              *(_OWORD *)(v102 + 16) = 0;
              ++v178[1];
              *(_DWORD *)v102 = i;
              *(_DWORD *)(v102 + 4) = v179;
              if ( (void **)(v102 + 8) != &src )
              {
                v103 = v213;
                if ( (unsigned __int64)v213 > 1 )
                {
                  v108 = src;
                  v109 = *(void **)(v102 + 8);
                  if ( *(_QWORD *)(v102 + 24) < (unsigned __int64)v213 )
                  {
                    v109 = (void *)qvector_reserve(v102 + 8, *(_QWORD *)(v102 + 8), v213, 1);
                    *(_QWORD *)(v102 + 8) = v109;
                  }
                  *(_QWORD *)(v102 + 16) = v103;
                  memmove(v109, v108, v103 - 1);
                  *(_BYTE *)(*(_QWORD *)(v102 + 8) + v103 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v102 + 16) = 0;
                }
              }
            }
            *(_QWORD *)&v213 = 0;
            if ( get_cmt(&src, v8, 1) > 0 )
            {
              v82 = v178[4];
              v83 = v178[3];
              if ( v178[5] < (unsigned __int64)(v82 + 1) )
              {
                v104 = qvector_reserve(v178 + 3, v83, v82 + 1, 32);
                v178[3] = v104;
                v82 = v178[4];
                v83 = v104;
              }
              v84 = v83 + 32 * v82;
              *(_QWORD *)v84 = -1;
              *(_QWORD *)(v84 + 8) = 0;
              *(_OWORD *)(v84 + 16) = 0;
              ++v178[4];
              *(_DWORD *)v84 = i;
              *(_DWORD *)(v84 + 4) = v179;
              if ( (void **)(v84 + 8) != &src )
              {
                v85 = v213;
                if ( (unsigned __int64)v213 > 1 )
                {
                  v106 = src;
                  v107 = *(void **)(v84 + 8);
                  if ( *(_QWORD *)(v84 + 24) < (unsigned __int64)v213 )
                  {
                    v107 = (void *)qvector_reserve(v84 + 8, *(_QWORD *)(v84 + 8), v213, 1);
                    *(_QWORD *)(v84 + 8) = v107;
                  }
                  *(_QWORD *)(v84 + 16) = v85;
                  memmove(v107, v106, v85 - 1);
                  *(_BYTE *)(*(_QWORD *)(v84 + 8) + v85 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v84 + 16) = 0;
                }
              }
            }
          }
          if ( (flags & 0x2000) != 0 )
          {
            v216 = nullptr;
            memset(v223, 0, 24);
            *(_OWORD *)v217 = 0;
            v14 = 1000;
            v15 = &v216;
            if ( v8 == (unsigned int)getinf(19) )
            {
              v14 = 2000;
              v15 = v223;
            }
            while ( 1 )
            {
              for ( j = v14; ; ++j )
              {
                *(_QWORD *)&v213 = 0;
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
                v17 = (char *)v213;
                if ( (_QWORD)v213 )
                {
                  v18 = v213 - 1;
                  if ( (_QWORD)v213 != 1 )
                  {
                    v19 = (char *)v15[1];
                    v20 = (char *)(v213 - 1);
                    if ( v19 )
                    {
                      --v19;
                      v20 = &v19[v18];
                      v17 = &v19[v213];
                    }
                    v21 = (__int64)*v15;
                    if ( v15[2] < v17 )
                    {
                      v191 = v20;
                      v190 = v213 - 1;
                      v173 = v17;
                      v80 = qvector_reserve(v15, v21, v17, 1);
                      v20 = v191;
                      v18 = v190;
                      *v15 = (void *)v80;
                      v21 = v80;
                      v17 = v173;
                    }
                    v15[1] = v17;
                    v20[v21] = 0;
                    memcpy((char *)*v15 + (_QWORD)v19, src, v18);
                  }
                }
              }
              v15 = v223;
              if ( v14 == 2000 )
                break;
              v14 = 2000;
            }
            v25 = v178[7];
            v26 = v178[6];
            if ( v178[8] < (unsigned __int64)(v25 + 1) )
            {
              v86 = qvector_reserve(v178 + 6, v26, v25 + 1, 56);
              v178[6] = v86;
              v25 = v178[7];
              v26 = v86;
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
            if ( v217[0] > (char *)&dword_0 + 1 )
            {
              v28 = *(void **)(v27 + 8);
              v29 = _mm_loadu_si128((const __m128i *)(v27 + 16));
              *(_QWORD *)(v27 + 8) = v216;
              *(void **)(v27 + 16) = v217[0];
              *(void **)(v27 + 24) = v217[1];
              v216 = v28;
              *(__m128i *)v217 = v29;
            }
            v30 = v223[0];
            if ( v223[1] > (char *)&dword_0 + 1 )
            {
              v31 = *(void **)(v27 + 32);
              *(void **)(v27 + 32) = v223[0];
              v32 = *(void **)(v27 + 48);
              v30 = v31;
              *(__m128 *)(v27 + 40) = _mm_loadh_ps((const double *)&v223[2]);
              v223[0] = v31;
              v223[2] = v32;
            }
            if ( v30 )
            {
              v223[1] = nullptr;
              qfree(v30);
            }
            if ( v216 )
            {
              v217[0] = nullptr;
              qfree(v216);
            }
          }
          v170 = 0;
          v33 = 0;
          v34 = &v233[2];
          memset(v233, 0, 0x450u);
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
                      if ( get_opinfo(v34, v8, v33, flags) && !*((_DWORD *)v34 + 1) )
                        v170 |= (*((_BYTE *)v34 + 12) & 0x40) == 0;
                    }
                    else
                    {
                      v170 = v35;
                    }
                  }
                }
              }
            }
            ++v33;
            v34 += 17;
          }
          while ( v33 != 8 );
          if ( v170 )
          {
            v233[1] = flags;
            v78 = v178[10];
            v10 = v178[9];
            if ( v178[11] < (unsigned __int64)(v78 + 1) )
            {
              v99 = qvector_reserve(v178 + 9, v10, v78 + 1, 1104);
              v178[9] = v99;
              v78 = v178[10];
              v10 = v99;
            }
            v11 = v10 + 1104 * v78;
            *(_QWORD *)v11 = 0;
            *(_QWORD *)(v11 + 1096) = 0;
            memset(
              (void *)((v11 + 8) & 0xFFFFFFFFFFFFFFF8LL),
              0,
              8LL * (((unsigned int)v11 - (((_DWORD)v11 + 8) & 0xFFFFFFF8) + 1104) >> 3));
            ++v178[10];
            *(_DWORD *)v11 = i;
            *(_DWORD *)(v11 + 4) = v179;
            for ( k = 2; k != 138; k += 17 )
            {
              *(__m128i *)(v11 + k * 8) = _mm_loadu_si128((const __m128i *)&v233[k]);
              *(__m128i *)(v11 + k * 8 + 16) = _mm_loadu_si128((const __m128i *)&v233[k + 2]);
              *(__m128i *)(v11 + k * 8 + 32) = _mm_loadu_si128((const __m128i *)&v233[k + 4]);
              *(__m128i *)(v11 + k * 8 + 48) = _mm_loadu_si128((const __m128i *)&v233[k + 6]);
              *(__m128i *)(v11 + k * 8 + 64) = _mm_loadu_si128((const __m128i *)&v233[k + 8]);
              *(__m128i *)(v11 + k * 8 + 80) = _mm_loadu_si128((const __m128i *)&v233[k + 10]);
              *(__m128i *)(v11 + k * 8 + 96) = _mm_loadu_si128((const __m128i *)&v233[k + 12]);
              *(__m128i *)(v11 + k * 8 + 112) = _mm_loadu_si128((const __m128i *)&v233[k + 14]);
              v12 = v233[k + 16];
              *(_QWORD *)(v11 + k * 8 + 128) = v12;
            }
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
        v41 = (unsigned int)(v38 >> 3);
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
              if ( (_DWORD)v41 )
                break;
              if ( ++v8 == item_end )
                goto LABEL_86;
            }
            v223[0] = wide_byte;
            while ( 2 )
            {
              v49 = v209;
              v81 = v209 + v41;
              if ( __CFADD__((_QWORD)v209, v41) )
              {
                if ( (unsigned __int64)v209 > 0x7FFFFFFFFFFFFFFELL )
                {
                  if ( (_QWORD)v209 != 0x7FFFFFFFFFFFFFFFLL )
                    *(_QWORD *)&v209 = 0x7FFFFFFFFFFFFFFFLL;
                  goto LABEL_64;
                }
                v81 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v43 = (char *)v208;
              v44 = v209;
              if ( *((_QWORD *)&v209 + 1) < v81 )
              {
                v185 = v81;
                v208 = (void *)qvector_reserve(&v208, v208, v81, 1);
                v43 = (char *)v208;
                v81 = v185;
                v44 = v209;
              }
              v180 = v81;
              memset(&v43[v44], 0, v81 - v44);
              *(_QWORD *)&v209 = v180;
LABEL_64:
              memcpy((char *)v208 + v49, v223, v41);
              v45 = v211;
              v46 = v211 + v41;
              if ( __CFADD__((_QWORD)v211, v41) )
              {
                if ( (unsigned __int64)v211 <= 0x7FFFFFFFFFFFFFFELL )
                {
                  v46 = 0x7FFFFFFFFFFFFFFFLL;
                  goto LABEL_65;
                }
                if ( (_QWORD)v211 != 0x7FFFFFFFFFFFFFFFLL )
                  *(_QWORD *)&v211 = 0x7FFFFFFFFFFFFFFFLL;
              }
              else
              {
LABEL_65:
                v47 = (char *)v210;
                v48 = v211;
                if ( *((_QWORD *)&v211 + 1) < v46 )
                {
                  v184 = v46;
                  v210 = (void *)qvector_reserve(&v210, v210, v46, 1);
                  v47 = (char *)v210;
                  v46 = v184;
                  v48 = v211;
                }
                v181 = v46;
                memset(&v47[v48], 0, v46 - v48);
                *(_QWORD *)&v211 = v181;
              }
              ++v8;
              memcpy((char *)v210 + v45, &unk_23964B8, v41);
              if ( item_end == v8 )
                goto LABEL_86;
              v223[0] = (void *)get_wide_byte(v8);
              continue;
            }
          }
          if ( v8 >= item_end )
            continue;
          if ( !(_DWORD)v41 )
          {
            do
              ++v8;
            while ( item_end != v8 );
            v8 = item_end;
            continue;
          }
          while ( 2 )
          {
            v50 = v209;
            v51 = v41 + v209;
            if ( __CFADD__(v41, (_QWORD)v209) )
            {
              if ( (unsigned __int64)v209 <= 0x7FFFFFFFFFFFFFFELL )
              {
                v51 = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_78;
              }
              if ( (_QWORD)v209 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v209 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else
            {
LABEL_78:
              v52 = (char *)v208;
              v53 = v209;
              if ( *((_QWORD *)&v209 + 1) < v51 )
              {
                v177 = (void *)v51;
                v188 = v209;
                v208 = (void *)qvector_reserve(&v208, v208, v51, 1);
                v52 = (char *)v208;
                v50 = v188;
                v53 = v209;
                v51 = (unsigned __int64)v177;
              }
              v182 = v50;
              v171 = (void *)v51;
              memset(&v52[v53], 0, v51 - v53);
              v50 = v182;
              *(_QWORD *)&v209 = v171;
            }
            memcpy((char *)v208 + v50, &unk_23964B8, v41);
            v54 = v211;
            v55 = v41 + v211;
            if ( __CFADD__(v41, (_QWORD)v211) )
            {
              if ( (unsigned __int64)v211 <= 0x7FFFFFFFFFFFFFFELL )
              {
                v55 = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_82;
              }
              if ( (_QWORD)v211 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v211 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else
            {
LABEL_82:
              v56 = (char *)v210;
              v57 = v211;
              if ( *((_QWORD *)&v211 + 1) < v55 )
              {
                v176 = (void *)v55;
                v187 = v211;
                v210 = (void *)qvector_reserve(&v210, v210, v55, 1);
                v56 = (char *)v210;
                v54 = v187;
                v57 = v211;
                v55 = (unsigned __int64)v176;
              }
              v183 = v54;
              v172 = (void *)v55;
              memset(&v56[v57], 0, v55 - v57);
              v54 = v183;
              *(_QWORD *)&v211 = v172;
            }
            ++v8;
            memcpy((char *)v210 + v54, &unk_23964B0, v41);
            if ( item_end == v8 )
              goto LABEL_86;
            continue;
          }
        }
        v87 = v8;
        v88 = 0;
        v89 = (unsigned int)v41 * (item_end - v8);
        *(_QWORD *)&v215 = 0;
        do
        {
          if ( sub_375980(0x52u, &v214, &v216, v87) <= 0 )
            goto LABEL_162;
          if ( !v216 || (unsigned __int64)v216 % (unsigned int)v41 )
          {
            if ( !under_debugger )
              interr(1507);
            goto LABEL_359;
          }
          v88 += (unsigned __int64)v216;
          v87 += (unsigned __int64)v216 / (unsigned int)v41;
        }
        while ( v88 < v89 );
        if ( v89 >= v88 )
          goto LABEL_162;
        if ( (get_flags_ex(v87, 4) & 0x600) == 0x200 )
        {
          v58 = 0;
          goto LABEL_94;
        }
        item_end = v87;
LABEL_162:
        if ( (unsigned __int64)v215 < v89 )
          goto LABEL_56;
        if ( v8 < item_end )
        {
          v90 = (char *)v214;
          while ( 1 )
          {
            v91 = get_wide_byte(v8);
            if ( (_DWORD)v41 )
              break;
            if ( ++v8 == item_end )
            {
              v8 = item_end;
              goto LABEL_87;
            }
          }
          while ( 1 )
          {
            v92 = v90;
            v90 += v41;
            do
            {
              v98 = *v92;
              v95 = v209;
              v96 = v208;
              v97 = v91 & ~*v92;
              if ( *((_QWORD *)&v209 + 1) < (unsigned __int64)(v209 + 1) )
              {
                v186 = v91 & ~*v92;
                v174 = *v92;
                v208 = (void *)qvector_reserve(&v208, v208, v209 + 1, 1);
                v96 = v208;
                v97 = v186;
                v95 = v209;
                v98 = v174;
              }
              v96[v95] = v97;
              v93 = v211;
              *(_QWORD *)&v209 = v209 + 1;
              v94 = v210;
              if ( *((_QWORD *)&v211 + 1) < (unsigned __int64)(v211 + 1) )
              {
                v175 = v98;
                v210 = (void *)qvector_reserve(&v210, v210, v211 + 1, 1);
                v94 = v210;
                v98 = v175;
                v93 = v211;
              }
              ++v92;
              v94[v93] = v98;
              v91 >>= 8;
              *(_QWORD *)&v211 = v211 + 1;
            }
            while ( v92 != v90 );
            if ( item_end == ++v8 )
              break;
            v91 = get_wide_byte(v8);
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
      if ( v214 )
      {
        *(_QWORD *)&v215 = 0;
        qfree(v214);
      }
      if ( src )
      {
        *(_QWORD *)&v213 = 0;
        qfree(src);
      }
      v59 = v210;
      if ( v210 )
      {
LABEL_99:
        *(_QWORD *)&v211 = 0;
        qfree(v59);
      }
      v60 = v208;
      if ( v208 )
      {
LABEL_101:
        *(_QWORD *)&v209 = 0;
        qfree(v60);
      }
      v61 = v203;
      v7 = v203;
      if ( !v58 )
        goto LABEL_203;
LABEL_103:
      if ( !v7 )
        goto LABEL_259;
      v62 = v204 + 1;
      if ( (int)v7[26] <= v204 + 1 )
      {
        if ( (_QWORD)v222 == (_QWORD)v220 )
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
      ++v204;
      if ( v62 >= 0 )
        v7 = (unsigned int *)(*((_QWORD *)v7 + 14) + 8LL * v62);
    }
    v61 = v203;
LABEL_203:
    if ( v61 )
      lock_func_range(v61, 0);
    v194 = 0;
    goto LABEL_206;
  }
LABEL_259:
  if ( (_QWORD)v220 != (_QWORD)v222 )
    goto LABEL_260;
LABEL_107:
  if ( v178 )
  {
    v63 = *a3;
    v64 = get_flags_ex(*a3, 4);
    v206 = nullptr;
    *(_DWORD *)(a2 + 24) = v194;
    v207 = 0;
    if ( (v64 & 0xC000) == 0x4000 && get_ea_name(&v206, v63, 512, 0) )
    {
      v156 = _mm_loadu_si128(&v207);
      v157 = *(void **)a2;
      v158 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      *(_QWORD *)a2 = v206;
      *(__m128i *)(a2 + 8) = v156;
      v206 = v157;
      v207 = v158;
    }
    v202 = 0;
    if ( !(unsigned __int8)get_tinfo(&v202, v63) )
      goto LABEL_110;
    aflags = get_aflags(v63);
    v214 = nullptr;
    v215 = 0;
    v141 = (aflags & 0x2000000) != 0;
    v216 = nullptr;
    memset(v223, 0, 24);
    *(_OWORD *)v217 = 0;
    v216 = (void *)qvector_reserve(&v216, 0, 2, 1);
    v217[0] = &dword_0 + 2;
    *(_WORD *)v216 = v141;
    if ( !(unsigned __int8)sub_7B5BB0((__int64)&v216, (__int64)v223) )
    {
      if ( v223[0] )
      {
        v223[1] = nullptr;
        qfree(v223[0]);
      }
      if ( v216 )
      {
        v217[0] = nullptr;
        qfree(v216);
      }
      goto LABEL_300;
    }
    if ( v217[0] >= (char *)&dword_0 + 2 )
      sub_7B6220((__int64 *)&v214, v216, (size_t)v217[0] - 1);
    if ( v223[1] <= (char *)&dword_0 + 1 )
      goto LABEL_293;
    v143 = v215;
    LOBYTE(src) = 0;
    v144 = v215 + 1;
    if ( (_QWORD)v215 == -1 )
    {
      v142 = v223[0];
      v148 = (char *)v223[1] - 1;
      *(_QWORD *)&v215 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_319:
      sub_7B6220((__int64 *)&v214, v142, (size_t)v148);
LABEL_293:
      v142 = v223[0];
      goto LABEL_294;
    }
    v145 = v214;
    if ( &src < v214 )
    {
      v146 = v215;
      if ( *((_QWORD *)&v215 + 1) >= v144 )
        goto LABEL_308;
    }
    else
    {
      v146 = v215;
      if ( &src < (void **)((char *)v214 + *((_QWORD *)&v215 + 1)) )
      {
        if ( *((_QWORD *)&v215 + 1) >= v144
          || (v150 = (void *)qvector_reserve(&v214, v214, v215 + 1, 1),
              v214 = v150,
              v145 = v150,
              v146 = v215,
              (unsigned __int64)v215 < v144) )
        {
          while ( 1 )
          {
            v149 = v146;
            v145[v146++] = 0;
            if ( v149 == v143 )
              break;
            v145 = v214;
          }
        }
        goto LABEL_309;
      }
      if ( *((_QWORD *)&v215 + 1) >= v144 )
      {
LABEL_306:
        if ( v146 < v144 )
        {
          do
          {
            v145 = v214;
LABEL_308:
            v145[v146] = (_BYTE)src;
            v147 = v146++;
          }
          while ( v147 != v143 );
        }
LABEL_309:
        *(_QWORD *)&v215 = v144;
        v142 = v223[0];
        if ( !v223[1] )
        {
          if ( !v223[0] )
            goto LABEL_297;
          goto LABEL_296;
        }
        v148 = (char *)v223[1] - 1;
        if ( v223[1] == (char *)&dword_0 + 1 )
        {
LABEL_294:
          if ( !v142 )
          {
LABEL_297:
            if ( v216 )
            {
              v217[0] = nullptr;
              qfree(v216);
            }
            sub_7C0C50(a2 + 32, 1, v214, v215);
LABEL_300:
            if ( v214 )
            {
              *(_QWORD *)&v215 = 0;
              qfree(v214);
            }
LABEL_110:
            v65 = 0;
            do
            {
              v207.m128i_i64[0] = 0;
              if ( get_func_cmt(&v206, a3, v65) > 0 )
              {
                v66 = v207.m128i_i64[0];
                v67 = haystack;
                if ( v207.m128i_i64[0] )
                {
                  v67 = (const char *)v206;
                  v66 = v207.m128i_i64[0] - 1;
                }
                sub_7C0C50(a2 + 32, v65 + 3, v67, v66);
              }
              v68 = v65 + 1;
              v65 = 1;
            }
            while ( v68 != 2 );
            if ( v178[1] )
              sub_7C0D20(a2 + 32, v178, 0);
            if ( v178[4] )
              sub_7C0D20(a2 + 32, v178 + 3, 1);
            if ( v178[7] )
              sub_7C0F10(a2 + 32, v178 + 6);
            v69 = sub_59F910(v199, (__int64)a3);
            if ( v69 )
            {
              v70 = a3[10];
              memset(v223, 0, 24);
              if ( v70 )
              {
                v71 = 0;
                do
                {
                  if ( (get_aflags(*(unsigned int *)(v69 + 8 * v71)) & 2) != 0 )
                  {
                    func_chunknum = get_func_chunknum(a3, *(unsigned int *)(v69 + 8 * v71));
                    v74 = func_chunknum;
                    if ( func_chunknum && (func_chunknum <= 0 || func_chunknum - 1 >= (int)a3[26]) )
                    {
                      if ( !under_debugger )
                        interr(1573);
                      goto LABEL_359;
                    }
                    v75 = v223[1];
                    v76 = (char *)v223[0];
                    if ( v223[2] < (char *)v223[1] + 1 )
                    {
                      v223[0] = (void *)qvector_reserve(v223, v223[0], (char *)v223[1] + 1, 16);
                      v76 = (char *)v223[0];
                      v75 = v223[1];
                    }
                    v77 = &v76[16 * (_QWORD)v75];
                    *(_QWORD *)v77 = -1;
                    *((_QWORD *)v77 + 1) = 0;
                    ++v223[1];
                    *(_DWORD *)v77 = v74;
                    if ( v74 )
                      v72 = *(_DWORD *)(*((_QWORD *)a3 + 14) + 8LL * (v74 - 1));
                    else
                      v72 = *a3;
                    *((_DWORD *)v77 + 1) = *(_DWORD *)(v69 + 8 * v71) - v72;
                    *((_QWORD *)v77 + 1) = (int)get_sp_delta(a3, *(unsigned int *)(v69 + 8 * v71));
                  }
                  ++v71;
                }
                while ( v71 < a3[10] );
                if ( v223[1] )
                  sub_7C1190(a2 + 32, v223);
                if ( v223[0] )
                {
                  v223[1] = nullptr;
                  qfree(v223[0]);
                }
              }
            }
            src = nullptr;
            memset(v223, 0, sizeof(v223));
            v224 = 1;
            if ( (unsigned __int8)tinfo_get_func_frame(&src, a3) && (unsigned __int8)get_tinfo_details(src, 13, v223) )
            {
              v217[1] = nullptr;
              v218 = 0;
              LODWORD(v216) = a3[5];
              LOWORD(v217[0]) = *((_WORD *)a3 + 12);
              HIDWORD(v216) = a3[7];
              v134 = (char *)v223[0] + 40;
              v189 = (char *)v223[0] + 128 * (__int64)v223[1];
              if ( v189 != v223[0] )
              {
                while ( 1 )
                {
                  if ( (v134[77] & 0x30) == 0 )
                  {
                    v135 = sub_7B6A40((__int64 *)&v217[1]);
                    v136 = *((const void **)v134 - 3);
                    v137 = (char *)v135;
                    if ( v136
                      && strncmp(*((const char **)v134 - 3), "arg_", 4u)
                      && strncmp((const char *)v136, "var_", 4u)
                      && strncmp((const char *)v136, "anonymous", 9u)
                      && v137 != v134 - 24 )
                    {
                      v138 = *((_QWORD *)v134 - 2);
                      if ( v138 > 1 )
                      {
                        if ( *((_QWORD *)v137 + 2) < v138 )
                          *(_QWORD *)v137 = qvector_reserve(v137, *(_QWORD *)v137, v138, 1);
                        v169 = *(void **)v137;
                        *((_QWORD *)v137 + 1) = v138;
                        memmove(v169, v136, v138 - 1);
                        *(_BYTE *)(*(_QWORD *)v137 + v138 - 1) = 0;
                      }
                      else
                      {
                        *((_QWORD *)v137 + 1) = 0;
                      }
                    }
                    sub_7B5BB0((__int64)(v137 + 24), (__int64)(v137 + 48));
                    if ( (v134[77] & 8) != 0 )
                    {
                      if ( v137 + 72 != v134 )
                      {
                        v139 = *((_QWORD *)v134 + 1);
                        if ( v139 > 1 )
                        {
                          v154 = *(const void **)v134;
                          if ( *((_QWORD *)v137 + 11) < v139 )
                            *((_QWORD *)v137 + 9) = qvector_reserve(v137 + 72, *((_QWORD *)v137 + 9), v139, 1);
                          v155 = *((void **)v137 + 9);
                          *((_QWORD *)v137 + 10) = v139;
                          memmove(v155, v154, v139 - 1);
                          *(_BYTE *)(*((_QWORD *)v137 + 9) + v139 - 1) = 0;
                        }
                        else
                        {
                          *((_QWORD *)v137 + 10) = 0;
                        }
                      }
                    }
                    else if ( v137 + 96 != v134 )
                    {
                      v151 = *((_QWORD *)v134 + 1);
                      if ( v151 > 1 )
                      {
                        v152 = *(const void **)v134;
                        if ( *((_QWORD *)v137 + 14) < v151 )
                          *((_QWORD *)v137 + 12) = qvector_reserve(v137 + 96, *((_QWORD *)v137 + 12), v151, 1);
                        v153 = *((void **)v137 + 12);
                        *((_QWORD *)v137 + 13) = v151;
                        memmove(v153, v152, v151 - 1);
                        *(_BYTE *)(*((_QWORD *)v137 + 12) + v151 - 1) = 0;
                      }
                      else
                      {
                        *((_QWORD *)v137 + 13) = 0;
                      }
                    }
                    *((_QWORD *)v137 + 15) = *((_QWORD *)v134 - 5) >> 3;
                    *((_DWORD *)v137 + 68) = *((_QWORD *)v134 - 4) >> 3;
                  }
                  if ( v189 == v134 + 88 )
                    break;
                  v134 += 128;
                }
              }
              v214 = nullptr;
              v215 = 0;
              sub_7C2C20(&v216, &v214, 6);
              sub_7C0C50(a2 + 32, 9, v214, v215);
              if ( v214 )
              {
                *(_QWORD *)&v215 = 0;
                qfree(v214);
              }
              v159 = (char *)v217[1];
              if ( v217[1] )
              {
                v160 = v218;
                v161 = 0;
                v162 = 0;
                if ( (_QWORD)v218 )
                {
                  do
                  {
                    v163 = &v159[v161];
                    v164 = *(void **)&v159[v161 + 96];
                    if ( v164 )
                    {
                      *((_QWORD *)v163 + 13) = 0;
                      qfree(v164);
                    }
                    v165 = *((void **)v163 + 9);
                    if ( v165 )
                    {
                      *((_QWORD *)v163 + 10) = 0;
                      qfree(v165);
                    }
                    v166 = *((void **)v163 + 6);
                    if ( v166 )
                    {
                      *((_QWORD *)v163 + 7) = 0;
                      qfree(v166);
                    }
                    v167 = *((void **)v163 + 3);
                    if ( v167 )
                    {
                      *((_QWORD *)v163 + 4) = 0;
                      qfree(v167);
                    }
                    v168 = *(void **)v163;
                    if ( *(_QWORD *)v163 )
                    {
                      *((_QWORD *)v163 + 1) = 0;
                      qfree(v168);
                    }
                    ++v162;
                    v159 = (char *)v217[1];
                    v161 += 280;
                  }
                  while ( v160 != v162 );
                }
                *(_QWORD *)&v218 = 0;
                qfree(v159);
              }
            }
            if ( v178[10] )
              sub_7C12E0(a2 + 32, v178 + 9);
            if ( a4 )
            {
              v216 = off_2B115E0;
              v217[0] = (void *)(a2 + 32);
              a4(&v216, a3);
            }
            v128 = (char *)v223[0];
            if ( v223[0] )
            {
              v129 = v223[1];
              if ( v223[1] )
              {
                v130 = nullptr;
                do
                {
                  v131 = &v128[128 * (_QWORD)v130];
                  clear_tinfo_t(v131 + 64);
                  v132 = *((void **)v131 + 5);
                  if ( v132 )
                  {
                    *((_QWORD *)v131 + 6) = 0;
                    qfree(v132);
                  }
                  v133 = *((void **)v131 + 2);
                  if ( v133 )
                  {
                    *((_QWORD *)v131 + 3) = 0;
                    qfree(v133);
                  }
                  v130 = (char *)v130 + 1;
                  v128 = (char *)v223[0];
                }
                while ( v129 != v130 );
              }
              v223[1] = nullptr;
              qfree(v128);
            }
            clear_tinfo_t(&src);
            clear_tinfo_t(&v202);
            if ( v206 )
            {
              v207.m128i_i64[0] = 0;
              qfree(v206);
            }
            goto LABEL_256;
          }
          v223[1] = nullptr;
LABEL_296:
          qfree(v142);
          goto LABEL_297;
        }
        goto LABEL_319;
      }
    }
    v214 = (void *)qvector_reserve(&v214, v214, v215 + 1, 1);
    v146 = v215;
    goto LABEL_306;
  }
LABEL_256:
  if ( a1 )
  {
    memset(v233, 0, 0x58u);
    MD5Init(v233);
    MD5Update();
    MD5Update();
    MD5Final(a1, v233);
  }
LABEL_206:
  if ( v231 )
  {
    *(_QWORD *)&v232 = 0;
    qfree(v231);
  }
  v110 = (char *)v229;
  if ( v229 )
  {
    v111 = v230;
    if ( (_QWORD)v230 )
    {
      v112 = 0;
      v113 = 0;
      do
      {
        v114 = &v110[v112];
        v115 = *(void **)&v110[v112 + 32];
        if ( v115 )
        {
          *((_QWORD *)v114 + 5) = 0;
          qfree(v115);
        }
        v116 = *((void **)v114 + 1);
        if ( v116 )
        {
          *((_QWORD *)v114 + 2) = 0;
          qfree(v116);
        }
        ++v113;
        v110 = (char *)v229;
        v112 += 56;
      }
      while ( v111 != v113 );
    }
    *(_QWORD *)&v230 = 0;
    qfree(v110);
  }
  v117 = (char *)v227;
  if ( v227 )
  {
    v118 = v228;
    if ( (_QWORD)v228 )
    {
      v119 = 0;
      do
      {
        v120 = &v117[32 * v119];
        v121 = *((void **)v120 + 1);
        if ( v121 )
        {
          *((_QWORD *)v120 + 2) = 0;
          qfree(v121);
          v117 = (char *)v227;
        }
        ++v119;
      }
      while ( v118 != v119 );
    }
    *(_QWORD *)&v228 = 0;
    qfree(v117);
  }
  v122 = (char *)v225;
  if ( v225 )
  {
    v123 = v226;
    if ( (_QWORD)v226 )
    {
      v124 = 0;
      do
      {
        v125 = &v122[32 * v124];
        v126 = *((void **)v125 + 1);
        if ( v126 )
        {
          *((_QWORD *)v125 + 2) = 0;
          qfree(v126);
          v122 = (char *)v225;
        }
        ++v124;
      }
      while ( v123 != v124 );
    }
    *(_QWORD *)&v226 = 0;
    qfree(v122);
  }
  if ( v221 )
  {
    *(_QWORD *)&v222 = 0;
    qfree(v221);
  }
  if ( v219 )
  {
    *(_QWORD *)&v220 = 0;
    qfree(v219);
  }
  return v194;
}

