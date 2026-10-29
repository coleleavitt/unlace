void __fastcall sub_CA4120(const __m128i *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rbx
  void *v11; // rbx
  char v12; // bl
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // r13
  int v21; // edx
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  int *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rdx
  int v28; // eax
  void *v29; // rbx
  unsigned __int32 v30; // ebx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // ebx
  int v36; // r13d
  bool v37; // al
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  unsigned int v42; // ebx
  int *v43; // rbp
  unsigned int v44; // r13d
  __int64 v45; // rax
  __int64 v46; // rax
  __int8 *v47; // rdi
  int v48; // eax
  __m128i v49; // xmm0
  __int64 v50; // rbx
  __int64 v51; // r14
  __int64 v52; // r15
  void *v53; // r13
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rsi
  int v59; // ecx
  __int64 v60; // rax
  int v61; // r8d
  int v62; // r9d
  _QWORD *v63; // rbx
  char *v64; // rdi
  unsigned int v65; // r13d
  int v66; // eax
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // r12
  void *v70; // r13
  __int64 v71; // rsi
  __int64 v72; // rbx
  int *v73; // rax
  int *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rbx
  int v83; // ecx
  _QWORD *v84; // r13
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rbx
  int *v88; // rdi
  char *v89; // rax
  int *v90; // rdi
  unsigned __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 *v96; // rdx
  __int64 v97; // rbx
  unsigned int v98; // eax
  __int64 v99; // rcx
  int v100; // eax
  __int64 *v101; // rcx
  void *v102; // rdi
  _DWORD *v103; // rax
  _DWORD *v104; // r12
  int v105; // ebp
  unsigned int v106; // eax
  __int64 v107; // rax
  __int64 v108; // rbx
  __int64 v109; // rax
  __int64 v110; // rbx
  __int64 v111; // rax
  unsigned __int64 v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rbp
  __int64 v115; // r13
  int v116; // eax
  int v117; // r9d
  _DWORD *v118; // rbx
  __int64 v119; // rsi
  _QWORD *v121; // rax
  __int64 v122; // rax
  unsigned int v123; // r12d
  unsigned int v124; // ecx
  unsigned int *v125; // rax
  __int64 v126; // rcx
  char *v127; // rax
  int *v128; // rdi
  unsigned __int64 v129; // rax
  __int64 v130; // rcx
  int v131; // r12d
  _QWORD *v132; // rdx
  unsigned __int64 v133; // rax
  __int64 v134; // rsi
  char **exception; // r12
  __int64 v136; // [rsp+0h] [rbp-188h]
  int v137; // [rsp+0h] [rbp-188h]
  __int64 *v138; // [rsp+8h] [rbp-180h]
  void **v139; // [rsp+8h] [rbp-180h]
  void *v140; // [rsp+8h] [rbp-180h]
  __int64 v141; // [rsp+10h] [rbp-178h]
  int v142[2]; // [rsp+10h] [rbp-178h]
  int v143[2]; // [rsp+10h] [rbp-178h]
  __int64 v144; // [rsp+10h] [rbp-178h]
  __int64 *v145; // [rsp+18h] [rbp-170h]
  void *v146; // [rsp+20h] [rbp-168h]
  void *v147; // [rsp+28h] [rbp-160h]
  int v148[2]; // [rsp+28h] [rbp-160h]
  int v149; // [rsp+28h] [rbp-160h]
  __int64 v150; // [rsp+28h] [rbp-160h]
  void *v151; // [rsp+30h] [rbp-158h]
  unsigned int v152; // [rsp+30h] [rbp-158h]
  __int64 v153; // [rsp+30h] [rbp-158h]
  int v154; // [rsp+38h] [rbp-150h]
  __int8 *v155; // [rsp+38h] [rbp-150h]
  __int64 v156; // [rsp+38h] [rbp-150h]
  __int64 v157; // [rsp+40h] [rbp-148h]
  __int128 v158; // [rsp+48h] [rbp-140h] BYREF
  __int128 v159; // [rsp+58h] [rbp-130h]
  __int64 v160; // [rsp+68h] [rbp-120h]
  int v161[2]; // [rsp+70h] [rbp-118h] BYREF
  int v162[2]; // [rsp+78h] [rbp-110h]
  int v163[2]; // [rsp+80h] [rbp-108h] BYREF
  int v164[2]; // [rsp+88h] [rbp-100h]
  int v165[2]; // [rsp+90h] [rbp-F8h] BYREF
  int v166[2]; // [rsp+98h] [rbp-F0h] BYREF
  __int64 v167; // [rsp+A0h] [rbp-E8h] BYREF
  int v168[2]; // [rsp+A8h] [rbp-E0h]
  int v169[2]; // [rsp+B0h] [rbp-D8h]
  char v170; // [rsp+B8h] [rbp-D0h]
  void *ptr[2]; // [rsp+C0h] [rbp-C8h] BYREF
  int v172[2]; // [rsp+D0h] [rbp-B8h] BYREF
  int v173[2]; // [rsp+D8h] [rbp-B0h]
  int v174[2]; // [rsp+E0h] [rbp-A8h] BYREF
  int v175[2]; // [rsp+E8h] [rbp-A0h] BYREF
  int v176[2]; // [rsp+F0h] [rbp-98h]
  int v177[2]; // [rsp+F8h] [rbp-90h]
  int v178[2]; // [rsp+100h] [rbp-88h] BYREF
  int v179[2]; // [rsp+108h] [rbp-80h] BYREF
  int v180; // [rsp+110h] [rbp-78h]
  int v181; // [rsp+118h] [rbp-70h]
  int v182; // [rsp+120h] [rbp-68h]
  int v183; // [rsp+128h] [rbp-60h]
  int v184; // [rsp+130h] [rbp-58h]
  int v185; // [rsp+138h] [rbp-50h]
  int v186; // [rsp+140h] [rbp-48h]
  char v187; // [rsp+148h] [rbp-40h]

  v6 = *a2;
  v141 = a3;
  v145 = a4;
  if ( !*a2 || (v7 = *(_DWORD *)(v6 - 4)) == 0 )
  {
    v7 = 0;
    ptr[0] = nullptr;
    ptr[1] = nullptr;
    *(_QWORD *)v172 = 1;
    v11 = qword_1C7F2C0;
    *(_QWORD *)v173 = 0;
    goto LABEL_16;
  }
  v8 = *a2;
  do
  {
    if ( (*(_BYTE *)(v8 + 4) & 1) != 0
      || *(_DWORD *)v8 != 1
      || (*(_BYTE *)(v8 + 20) & 1) != 0
      || *(_DWORD *)(v8 + 16) != 1 )
    {
      if ( a1[30].m128i_i32[1] < v7 )
      {
        *((_QWORD *)&v158 + 1) = 0;
        *(_QWORD *)&v159 = 0;
        *((_QWORD *)&v159 + 1) = 1;
        v160 = 0;
LABEL_8:
        v9 = 0;
        do
        {
          if ( v9 >= *(_DWORD *)(v6 - 4) )
            break;
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v158 + 8, v6 + 40LL * v9, (__int64)&v158 + 8);
          v6 = *a2;
          ++v9;
        }
        while ( *a2 );
LABEL_11:
        if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v158 + 8, v141) )
        {
          v10 = *(_QWORD *)(a1->m128i_i64[0] + 864);
          if ( v10 )
            ++*(_DWORD *)(v10 + 8);
          sub_C9E940(*v145, v145[1]);
          *v145 = v10;
          sub_25A130((char *)&v158 + 8);
        }
        else
        {
          ptr[0] = &dword_0 + 2;
          ptr[1] = nullptr;
          *(_QWORD *)v172 = 1;
          *(_QWORD *)v173 = 0;
          sub_182CBA0(qword_1C7F2C0, v172);
          LOBYTE(v172[1]) &= ~1u;
          v139 = ptr;
          v172[0] = 1;
          v152 = sub_CA00D0((__int64)&v158 + 8, (__int64)ptr);
          sub_25A130((char *)ptr);
          ptr[0] = v172;
          ptr[1] = (void *)0x1000000000LL;
          v76 = *a2;
          if ( *a2 )
          {
            LODWORD(v139) = 0;
            v155 = &a1[23].m128i_i8[8];
            while ( 1 )
            {
              *(_QWORD *)v148 = a1->m128i_i64[0];
              if ( (unsigned int)v139 >= *(_DWORD *)(v76 - 4) )
                break;
              *(_QWORD *)v161 = 0;
              *(_QWORD *)v162 = 0;
              *(_QWORD *)v163 = 1;
              *(_QWORD *)v164 = 0;
              v77 = v76 + 40LL * (unsigned int)v139;
              sub_182CBA0(qword_1C7F2C0, v163);
              v163[0] = 1;
              LOBYTE(v163[1]) &= ~1u;
              sub_1674520(v155, v161, v152);
              v78 = sub_1674520(v155, v77, v152);
              v79 = *(_QWORD *)(v77 + 32);
              *(_QWORD *)&v158 = v78;
              *(_QWORD *)v165 = 1;
              *(_QWORD *)v166 = 0;
              v167 = 1;
              *(_QWORD *)v168 = 0;
              sub_182CBA0(qword_1C7F2C0, &v167);
              BYTE4(v167) &= ~1u;
              *(_QWORD *)v169 = v79;
              LODWORD(v167) = 1;
              sub_C9E9F0(
                a1,
                *(_QWORD *)((v79 & 0xFFFFFFFFFFFFFFF8LL) + 16),
                (v79 & 7) == 1,
                v79 & 7,
                v80,
                v81,
                v136,
                v139,
                v141);
              v82 = sub_15E1BF0(v148[0]);
              sub_25A130((char *)v165);
              sub_25A130((char *)v161);
              v83 = (int)ptr[1];
              if ( LODWORD(ptr[1]) >= HIDWORD(ptr[1]) )
              {
                v149 = 2 * HIDWORD(ptr[1]);
                v89 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(ptr[1])));
                v83 = (int)ptr[1];
                v90 = (int *)ptr[0];
                v84 = v89;
                if ( LODWORD(ptr[1]) )
                {
                  if ( (unsigned int)(LODWORD(ptr[1]) - 1) <= 2 || v89 == (char *)ptr[0] + 8 )
                  {
                    v112 = 0;
                    v113 = 8LL * LODWORD(ptr[1]);
                    do
                    {
                      v84[v112 / 8] = *(_QWORD *)&v90[v112 / 4];
                      v112 += 8LL;
                    }
                    while ( v112 != v113 );
                  }
                  else
                  {
                    v91 = 0;
                    v92 = 16LL * (LODWORD(ptr[1]) >> 1);
                    do
                    {
                      *(__m128i *)&v84[v91 / 8] = _mm_loadu_si128((const __m128i *)&v90[v91 / 4]);
                      v91 += 16LL;
                    }
                    while ( v92 != v91 );
                    if ( (v83 & 1) != 0 )
                      v84[v83 & 0xFFFFFFFE] = *(_QWORD *)&v90[2 * (v83 & 0xFFFFFFFE)];
                  }
                }
                if ( v90 && v90 != v172 )
                {
                  sub_186B220(v90);
                  v83 = (int)ptr[1];
                }
                ptr[0] = v84;
                HIDWORD(ptr[1]) = v149;
              }
              else
              {
                v84 = ptr[0];
              }
              LODWORD(v139) = (_DWORD)v139 + 1;
              v84[v83] = v82;
              v76 = *a2;
              LODWORD(ptr[1]) = v83 + 1;
              if ( !v76 )
                goto LABEL_120;
            }
            LODWORD(v85) = a1->m128i_i64[0];
          }
          else
          {
LABEL_120:
            v85 = a1->m128i_i64[0];
          }
          sub_15E1AF0(v85);
          sub_1674520(&a1[23].m128i_u64[1], v141, v152);
          v86 = sub_15E1B70(a1[24].m128i_i64[0]);
          v87 = v86;
          if ( v86 )
            ++*(_DWORD *)(v86 + 8);
          sub_C9E940(*v145, v145[1]);
          v88 = (int *)ptr[0];
          *v145 = v87;
          if ( v88 && v88 != v172 )
            sub_186B220(v88);
          sub_25A130((char *)&v158 + 8);
        }
        return;
      }
      v138 = (__int64 *)ptr;
LABEL_68:
      v49 = _mm_loadl_epi64(a1);
      *(_QWORD *)v173 = 0;
      *(_QWORD *)v175 = 0;
      *(_QWORD *)v176 = 0;
      *(_QWORD *)v179 = 0;
      *(_QWORD *)v177 = a2;
      *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, v49);
      *(_QWORD *)v174 = v49.m128i_i64[0];
      *(_QWORD *)v178 = v49.m128i_i64[0];
      sub_CA21C0((__int64)ptr, a2);
      v50 = *a2;
      if ( *a2 )
      {
        v51 = v50 + 40LL * *(unsigned int *)(v50 - 4);
        if ( v50 != v51 )
        {
          v146 = &v167;
          do
          {
            v52 = *(_QWORD *)(v50 + 32);
            v53 = ptr[0];
            *(_QWORD *)v165 = 1;
            *(_QWORD *)v166 = 0;
            v167 = 1;
            *(_QWORD *)v168 = 0;
            sub_182CBA0(qword_1C7F2C0, &v167);
            BYTE4(v167) &= ~1u;
            *(_QWORD *)v169 = v52;
            LODWORD(v167) = 1;
            v57 = sub_C9E9F0(
                    v53,
                    *(_QWORD *)((v52 & 0xFFFFFFFFFFFFFFF8LL) + 16),
                    (v52 & 7) == 1,
                    v54,
                    v55,
                    v56,
                    v136,
                    v138,
                    v141);
            *(_QWORD *)v161 = v57;
            if ( v57 )
              ++*(_DWORD *)(v57 + 8);
            sub_C9F390(v175, v161);
            v50 += 40;
            sub_25A130((char *)v165);
          }
          while ( v51 != v50 );
        }
      }
      *(_QWORD *)v161 = 0;
      *(_QWORD *)v162 = 0;
      *(_QWORD *)v163 = 1;
      *(_QWORD *)v164 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v161, (int *)v141);
      if ( v161[0] <= 0 )
        goto LABEL_83;
      if ( v172[0] )
      {
        v58 = *(_QWORD *)v173;
        if ( !sub_3ED700((__int64)qword_1C7F2C0, *(__int64 *)v173, (__int64)v161) )
        {
          sub_CA2040((__int64)ptr[0], v58);
          v96 = *(__int64 **)v176;
          v97 = **(_QWORD **)v175;
          if ( *(_QWORD *)v176 )
          {
            v98 = *(_DWORD *)(*(_QWORD *)v176 - 4LL);
            if ( v98 == *(_DWORD *)(*(_QWORD *)v176 - 8LL) )
            {
              v123 = (3 * v98 + 1) >> 1;
              v124 = 8 * v123 + 8;
              if ( 8 * v98 + 8 >= v124 || v98 >= v123 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_C9E960((__int64 *)v165, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v165);
                sub_233E40((__int64)v165);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v125 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v176 - 8LL), v124);
              v126 = v125[1];
              v96 = (__int64 *)(v125 + 2);
              *v125 = v123;
              *(_QWORD *)v176 = v96;
              LODWORD(v125) = v126;
              v101 = &v96[v126];
              v100 = (_DWORD)v125 + 1;
            }
            else
            {
              v99 = v98;
              v100 = v98 + 1;
              v101 = (__int64 *)(*(_QWORD *)v176 + 8 * v99);
            }
          }
          else
          {
            v132 = (_QWORD *)sub_186B270(0x18u);
            *v132 = 2;
            v100 = 1;
            v96 = v132 + 1;
            *(_QWORD *)v176 = v96;
            v101 = v96;
          }
          *v101 = v97;
          v102 = qword_1C7F2C0;
          *((_DWORD *)v96 - 1) = v100;
          *(_QWORD *)v165 = 0;
          *(_QWORD *)v166 = 0;
          v167 = 1;
          *(_QWORD *)v168 = 0;
          sub_27B950((__int64)v102, (__int64)v165, v161);
          sub_CA3CE0(v138, 1u, (__int64)v165);
          sub_25A130((char *)v165);
          --*(_DWORD *)(*(_QWORD *)v176 - 4LL);
          sub_3EBB80((__int64)v165, (__int64)v161, **(_QWORD **)v177);
          sub_CA3CE0(v138, 1u, (__int64)v165);
          sub_25A130((char *)v165);
          goto LABEL_83;
        }
      }
      if ( *(_QWORD *)v176 && (v59 = *(_DWORD *)(*(_QWORD *)v176 - 4LL)) != 0 )
      {
        if ( v59 == 1 )
        {
          v111 = **(_QWORD **)v176;
          *((_QWORD *)&v158 + 1) = v111;
          if ( v111 )
            ++*(_DWORD *)(v111 + 8);
          sub_C9F390(v179, (_QWORD *)&v158 + 1);
          goto LABEL_83;
        }
        v60 = sub_15E1AF0((int)ptr[1]);
        *(_QWORD *)v165 = v60;
        if ( !v60 )
        {
LABEL_82:
          sub_C9F390(v179, v165);
LABEL_83:
          sub_25A130((char *)v161);
          v63 = ptr[0];
          v64 = (char *)ptr[0] + 136;
          if ( *(_QWORD *)v179 )
            v65 = *(_DWORD *)(*(_QWORD *)v179 - 4LL);
          else
            v65 = 0;
          if ( *((_BYTE *)ptr[0] + 147) )
          {
            sub_14E1930((int)v64, v136, (int)v138, v141, (__int64)v145, (__int64)v146, (__int64)v147, v151, v154);
          }
          else
          {
            if ( *((_BYTE *)ptr[0] + 144) )
              v66 = sub_14DD000(v64, v65, *(_QWORD *)v179, v145);
            else
              v66 = sub_14DC740(
                      (int)v64,
                      v65,
                      v179[0],
                      (int)v145,
                      v61,
                      v62,
                      v136,
                      (int)v138,
                      v141,
                      (int)v145,
                      (int)v146,
                      v147,
                      (int)v151,
                      v154,
                      v157,
                      v158,
                      SDWORD2(v158),
                      v159,
                      SDWORD2(v159),
                      v160,
                      v161[0],
                      v162[0],
                      v163[0],
                      v164[0],
                      v165[0],
                      v166[0],
                      v167,
                      v168[0],
                      v169[0],
                      v170,
                      (int)ptr[0],
                      (int)ptr[1],
                      v172[0],
                      v173[0],
                      v174[0],
                      v175[0],
                      v176[0],
                      v177[0],
                      v178[0],
                      v179[0],
                      v180,
                      v181,
                      v182,
                      v183,
                      v184,
                      v185,
                      v186,
                      v187);
            if ( v66 == 5 )
            {
              v109 = sub_15E1AF0(v63[17]);
              v110 = v109;
              if ( v109 )
                ++*(_DWORD *)(v109 + 8);
              sub_C9E940(*v145, v145[1]);
              *v145 = v110;
            }
          }
          sub_2334C0((__int64 *)v178);
          if ( *(_QWORD *)v176 )
            sub_186B220((void *)(*(_QWORD *)v176 - 8LL));
          sub_2334C0((__int64 *)v174);
          v67 = *(_QWORD *)v173;
          if ( *(_QWORD *)v173 )
          {
            v68 = *(unsigned int *)(*(_QWORD *)v173 - 4LL);
            if ( (_DWORD)v68 )
            {
              v69 = *(_QWORD *)v173 + 32 * v68;
              do
              {
                v70 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v67);
                v71 = v67 + 16;
                v67 += 32;
                sub_182CBA0(v70, v71);
              }
              while ( v67 != v69 );
              v67 = *(_QWORD *)v173;
            }
            sub_186B220((void *)(v67 - 8));
          }
          return;
        }
      }
      else
      {
        v60 = *((_QWORD *)ptr[1] + 108);
        *(_QWORD *)v165 = v60;
        if ( !v60 )
          goto LABEL_82;
      }
      ++*(_DWORD *)(v60 + 8);
      goto LABEL_82;
    }
    v8 += 40;
  }
  while ( v6 + 40LL * v7 != v8 );
  ptr[0] = nullptr;
  ptr[1] = nullptr;
  *(_QWORD *)v172 = 1;
  v11 = qword_1C7F2C0;
  *(_QWORD *)v173 = 0;
  if ( (v7 & 0x80000000) == 0 )
  {
LABEL_16:
    LODWORD(ptr[0]) = v7;
    v138 = (__int64 *)ptr;
    goto LABEL_17;
  }
  v138 = (__int64 *)ptr;
  sub_1830C40(qword_1C7F2C0, ptr, v7);
LABEL_17:
  sub_182CBA0(v11, v172);
  v172[0] = 1;
  LOBYTE(v172[1]) &= ~1u;
  v12 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)ptr, v141);
  sub_25A130((char *)ptr);
  if ( v12 )
  {
    v15 = *(_QWORD *)(a1->m128i_i64[0] + 864);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    sub_C9E940(*v145, v145[1]);
    *v145 = v15;
    return;
  }
  v16 = *a2;
  if ( (*(_BYTE *)(v141 + 4) & 1) == 0
    && *(_DWORD *)v141 == 1
    && (*(_BYTE *)(v141 + 20) & 1) == 0
    && *(_DWORD *)(v141 + 16) == 1 )
  {
    ptr[0] = v172;
    ptr[1] = (void *)0x1000000000LL;
    if ( v16 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        if ( v18 >= *(_DWORD *)(v16 - 4) )
          break;
        v19 = *(_QWORD *)(v16 + 40LL * v18 + 32);
        v20 = sub_C9E9F0(
                a1,
                *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 16),
                (v19 & 7) == 1,
                v17,
                v13,
                v14,
                v136,
                v138,
                v141);
        v21 = (int)ptr[1];
        if ( LODWORD(ptr[1]) >= HIDWORD(ptr[1]) )
        {
          LODWORD(v138) = 2 * HIDWORD(ptr[1]);
          v127 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(ptr[1])));
          v21 = (int)ptr[1];
          v128 = (int *)ptr[0];
          v22 = v127;
          v13 = (unsigned int)v138;
          if ( LODWORD(ptr[1]) )
          {
            if ( (unsigned int)(LODWORD(ptr[1]) - 1) <= 2 || v127 == (char *)ptr[0] + 8 )
            {
              v133 = 0;
              v134 = 8LL * LODWORD(ptr[1]);
              do
              {
                v22[v133 / 8] = *(_QWORD *)&v128[v133 / 4];
                v133 += 8LL;
              }
              while ( v133 != v134 );
            }
            else
            {
              v129 = 0;
              v130 = 16LL * (LODWORD(ptr[1]) >> 1);
              do
              {
                *(__m128i *)&v22[v129 / 8] = _mm_loadu_si128((const __m128i *)&v128[v129 / 4]);
                v129 += 16LL;
              }
              while ( v129 != v130 );
              if ( (v21 & 1) != 0 )
                v22[v21 & 0xFFFFFFFE] = *(_QWORD *)&v128[2 * (v21 & 0xFFFFFFFE)];
            }
          }
          if ( v128 != v172 && v128 )
          {
            sub_186B220(v128);
            v21 = (int)ptr[1];
            v13 = (unsigned int)v138;
          }
          ptr[0] = v22;
          HIDWORD(ptr[1]) = v13;
        }
        else
        {
          v22 = ptr[0];
        }
        v17 = (unsigned int)(v21 + 1);
        ++v18;
        v22[v21] = v20;
        v16 = *a2;
        LODWORD(ptr[1]) = v21 + 1;
      }
      while ( v16 );
    }
    v23 = sub_15E1AF0(a1->m128i_i64[0]);
    v24 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    sub_C9E940(*v145, v145[1]);
    v25 = (int *)ptr[0];
    *v145 = v24;
    if ( v25 == v172 || !v25 )
      return;
    goto LABEL_36;
  }
  v26 = qword_1C7F2C0;
  if ( v16 )
  {
    v27 = *(unsigned int *)(v16 - 4);
    ptr[0] = nullptr;
    ptr[1] = nullptr;
    *(_QWORD *)v172 = 1;
    v28 = v27;
    *(_QWORD *)v173 = 0;
    if ( (int)v27 >= 0 )
      goto LABEL_39;
    v146 = qword_1C7F2C0;
    sub_1830C40(qword_1C7F2C0, ptr, v27);
  }
  else
  {
    ptr[0] = nullptr;
    v28 = 0;
    ptr[1] = nullptr;
    *(_QWORD *)v172 = 1;
    *(_QWORD *)v173 = 0;
LABEL_39:
    LODWORD(ptr[0]) = v28;
  }
  sub_182CBA0(v26, v172);
  v29 = qword_1C7F2C0;
  v172[0] = 1;
  LOBYTE(v172[1]) &= ~1u;
  if ( (*(_BYTE *)(v141 + 4) & 1) != 0 || (BYTE4(ptr[0]) & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v141, ptr) )
      goto LABEL_43;
  }
  else if ( *(_DWORD *)v141 != LODWORD(ptr[0]) )
  {
    goto LABEL_43;
  }
  if ( (*(_BYTE *)(v141 + 20) & 1) != 0 || (v172[1] & 1) != 0 )
    v37 = (unsigned int)sub_182C7B0(v29, v141 + 16, v172) == 0;
  else
    v37 = *(_DWORD *)(v141 + 16) == v172[0];
  if ( v37 )
  {
    sub_25A130((char *)ptr);
    ptr[0] = v172;
    ptr[1] = (void *)0x1000000000LL;
    v41 = *a2;
    if ( *a2 )
    {
      v42 = 0;
      v43 = v172;
      v44 = 0;
      do
      {
        if ( v44 >= *(_DWORD *)(v41 - 4) )
          break;
        v45 = *(_QWORD *)(v41 + 40LL * v44 + 32);
        v46 = sub_C9E9F0(
                a1,
                *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFF8LL) + 16),
                (v45 & 7) == 1,
                v38,
                v39,
                v40,
                v136,
                v138,
                v141);
        v38 = LODWORD(ptr[1]);
        v39 = v46;
        if ( LODWORD(ptr[1]) >= HIDWORD(ptr[1]) )
        {
          v138 = (__int64 *)v46;
          v72 = (unsigned int)(2 * HIDWORD(ptr[1]));
          v73 = (int *)sub_186B270(8 * v72);
          v38 = LODWORD(ptr[1]);
          v74 = (int *)ptr[0];
          v43 = v73;
          v39 = (__int64)v138;
          if ( LODWORD(ptr[1]) )
          {
            if ( (unsigned int)(LODWORD(ptr[1]) - 1) <= 2 || v73 == (int *)((char *)ptr[0] + 8) )
            {
              v95 = 0;
              do
              {
                *(_QWORD *)&v43[v95] = *(_QWORD *)&v74[v95];
                v95 += 2;
              }
              while ( v95 != 2LL * (unsigned int)v38 );
            }
            else
            {
              v75 = 0;
              do
              {
                *(__m128i *)&v43[v75] = _mm_loadu_si128((const __m128i *)&v74[v75]);
                v75 += 4;
              }
              while ( 4LL * ((unsigned int)v38 >> 1) != v75 );
              if ( (v38 & 1) != 0 )
                *(_QWORD *)&v43[2 * (v38 & 0xFFFFFFFE)] = *(_QWORD *)&v74[2 * (v38 & 0xFFFFFFFE)];
            }
          }
          if ( v74 != v172 && v74 )
          {
            sub_186B220(v74);
            v38 = LODWORD(ptr[1]);
            v39 = (__int64)v138;
          }
          ptr[0] = v43;
          HIDWORD(ptr[1]) = v72;
        }
        else
        {
          v43 = (int *)ptr[0];
        }
        v42 = v38 + 1;
        ++v44;
        *(_QWORD *)&v43[2 * (unsigned int)v38] = v39;
        v41 = *a2;
        LODWORD(ptr[1]) = v38 + 1;
      }
      while ( v41 );
    }
    else
    {
      v43 = v172;
      v42 = 0;
    }
    v47 = &a1[8].m128i_i8[8];
    if ( a1[9].m128i_i8[3] )
    {
      sub_14E1930((int)v47, v136, (int)v138, v141, (__int64)v145, (__int64)v146, (__int64)v147, v151, v154);
    }
    else
    {
      if ( a1[9].m128i_i8[0] )
        v48 = sub_14DD000(v47, v42, v43, v145);
      else
        v48 = sub_14DC740(
                (int)v47,
                v42,
                (int)v43,
                (int)v145,
                v39,
                v40,
                v136,
                (int)v138,
                v141,
                (int)v145,
                (int)v146,
                v147,
                (int)v151,
                v154,
                v157,
                v158,
                SDWORD2(v158),
                v159,
                SDWORD2(v159),
                v160,
                v161[0],
                v162[0],
                v163[0],
                v164[0],
                v165[0],
                v166[0],
                v167,
                v168[0],
                v169[0],
                v170,
                (int)ptr[0],
                (int)ptr[1],
                v172[0],
                v173[0],
                v174[0],
                v175[0],
                v176[0],
                v177[0],
                v178[0],
                v179[0],
                v180,
                v181,
                v182,
                v183,
                v184,
                v185,
                v186,
                v187);
      if ( v48 == 5 )
      {
        v93 = sub_15E1AF0(a1[8].m128i_i64[1]);
        v94 = v93;
        if ( v93 )
          ++*(_DWORD *)(v93 + 8);
        sub_C9E940(*v145, v145[1]);
        *v145 = v94;
      }
    }
    v25 = (int *)ptr[0];
    if ( ptr[0] == v172 || !ptr[0] )
      return;
LABEL_36:
    sub_186B220(v25);
    return;
  }
LABEL_43:
  sub_25A130((char *)ptr);
  if ( !*a2 )
    goto LABEL_68;
  v30 = *(_DWORD *)(*a2 - 4);
  if ( a1[30].m128i_i32[1] >= v30 )
    goto LABEL_68;
  v31 = sub_182D020(qword_1C7F2C0, v141);
  v35 = v30 + 1 - v31;
  v36 = v31;
  LODWORD(v157) = v31;
  if ( a1[30].m128i_i32[2] < v31 * v35 )
  {
    *((_QWORD *)&v158 + 1) = 0;
    v6 = *a2;
    *(_QWORD *)&v159 = 0;
    *((_QWORD *)&v159 + 1) = 1;
    v160 = 0;
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_8;
  }
  v156 = a1->m128i_i64[0];
  v103 = *(_DWORD **)(a1->m128i_i64[0] + 856);
  if ( v35 )
  {
    if ( v103 )
    {
      v104 = nullptr;
      v105 = 0;
      v146 = v166;
      do
      {
        *(_QWORD *)v142 = v103;
        ptr[0] = v103;
        ++v103[2];
        *(_QWORD *)v166 = v104;
        *(_QWORD *)v165 = v156;
        sub_C9F390(v166, ptr);
        ++v105;
        v104 = *(_DWORD **)v166;
        v103 = *(_DWORD **)v142;
      }
      while ( v35 != v105 );
    }
    else
    {
      v131 = 0;
      v146 = v166;
      do
      {
        ptr[0] = nullptr;
        *(_QWORD *)v166 = v103;
        *(_QWORD *)v165 = v156;
        sub_C9F390(v166, ptr);
        ++v131;
        v103 = *(_DWORD **)v166;
      }
      while ( v35 != v131 );
      v104 = *(_DWORD **)v166;
    }
    if ( !v36 )
      goto LABEL_162;
  }
  else
  {
    v104 = nullptr;
    v107 = 0x1FFFFFFFELL;
    if ( !v36 )
      goto LABEL_164;
  }
  LODWORD(v146) = 0;
  if ( !v35 )
  {
    v106 = 0;
    do
      ++v106;
    while ( v106 < (unsigned int)v157 );
    goto LABEL_162;
  }
  v150 = (__int64)&a1[8].m128i_i64[1];
  v153 = v35;
  while ( 2 )
  {
    v114 = 0;
    while ( 2 )
    {
      v121 = (_QWORD *)a1->m128i_i64[0];
      ptr[0] = nullptr;
      ptr[1] = v121;
      if ( v114 )
        *(_QWORD *)v143 = *(_QWORD *)&v104[2 * (unsigned int)(v114 - 1)];
      else
        *(_QWORD *)v143 = v121[108];
      v115 = *(_QWORD *)&v104[2 * v114];
      v116 = sub_C9E9F0(
               a1,
               *(_QWORD *)((*(_QWORD *)(*a2 + 40LL * (unsigned int)(v114 + (_DWORD)v146) + 32) & 0xFFFFFFFFFFFFFFF8LL)
                         + 16),
               (*(_QWORD *)(*a2 + 40LL * (unsigned int)(v114 + (_DWORD)v146) + 32) & 7LL) == 1,
               v32,
               v33,
               v34,
               v136,
               v138,
               *(_QWORD *)v143);
      if ( (unsigned int)sub_14E2530(
                           v150,
                           v116,
                           v115,
                           v144,
                           (_DWORD)v140,
                           v117,
                           v137,
                           (__int64)v140,
                           v144,
                           (__int64)v145,
                           (__int64)v146,
                           v150,
                           v153,
                           v156,
                           v157,
                           v158,
                           v159) == 5 )
      {
        v122 = sub_15E1BF0(a1[8].m128i_i64[1]);
        v118 = (_DWORD *)v122;
        if ( !v122 )
        {
          sub_C9E940((__int64)ptr[0], (__int64)ptr[1]);
          ptr[0] = nullptr;
          goto LABEL_198;
        }
        ++*(_DWORD *)(v122 + 8);
        sub_C9E940((__int64)ptr[0], (__int64)ptr[1]);
        ptr[0] = v118;
LABEL_186:
        ++v118[2];
      }
      else
      {
        v118 = ptr[0];
        if ( ptr[0] )
          goto LABEL_186;
LABEL_198:
        v118 = nullptr;
      }
      v119 = *(_QWORD *)&v104[2 * v114];
      if ( v119 )
      {
        if ( (*(_DWORD *)(v119 + 8))-- == 1 )
          sub_15D7BC0(v156, v119);
      }
      *(_QWORD *)&v104[2 * v114++] = v118;
      sub_C9E940((__int64)ptr[0], (__int64)ptr[1]);
      if ( v153 != v114 )
        continue;
      break;
    }
    LODWORD(v146) = (_DWORD)v146 + 1;
    v32 = (unsigned int)v157;
    if ( (unsigned int)v146 < (unsigned int)v157 )
      continue;
    break;
  }
LABEL_162:
  v107 = 0x1FFFFFFFELL;
  if ( v104 )
    v107 = 2LL * (unsigned int)(*(v104 - 1) - 1);
LABEL_164:
  v108 = *(_QWORD *)&v104[v107];
  if ( v108 )
    ++*(_DWORD *)(v108 + 8);
  sub_C9E940(*v145, v145[1]);
  *v145 = v108;
  *(_QWORD *)v166 = v104;
  *(_QWORD *)v165 = v156;
  sub_2334C0((__int64 *)v165);
}

