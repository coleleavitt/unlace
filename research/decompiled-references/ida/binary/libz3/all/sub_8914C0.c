__int64 __fastcall sub_8914C0(__int64 a1, std::chrono::_V2::steady_clock *a2, int a3, __int64 a4, __int64 a5)
{
  char **exception; // rbp
  char **v6; // r12
  char **v7; // rbp
  char **v8; // rbp
  char **v9; // rbp
  __m128 v10; // xmm0
  __m128i si128; // xmm1
  _OWORD *v12; // rax
  __m128 v13; // xmm0
  __int64 v14; // rbp
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rax
  unsigned int *v20; // rax
  __m128 ***v21; // r12
  __m128 **v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __m128 **v26; // rcx
  _QWORD *v27; // rdx
  unsigned int v28; // r12d
  unsigned int *v29; // rax
  unsigned int v30; // r13d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r13d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rbx
  __int64 v39; // rbp
  void *v40; // r13
  std::chrono::_V2::steady_clock *v41; // r12
  __int64 v42; // r14
  int v43; // eax
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rax
  _DWORD *v47; // rax
  unsigned int v48; // r14d
  std::chrono::_V2::steady_clock *v49; // rdi
  std::chrono::_V2::steady_clock *v50; // rdi
  std::chrono::_V2::steady_clock *v51; // rdi
  std::chrono::_V2::steady_clock *v52; // rdi
  __int64 v53; // rdi
  unsigned int v55; // r13d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rax
  unsigned int v59; // r13d
  size_t v60; // rsi
  unsigned int *v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  std::chrono::_V2::steady_clock *v67; // rdi
  std::chrono::_V2::steady_clock *v68; // rdi
  std::chrono::_V2::steady_clock *v69; // rdi
  std::chrono::_V2::steady_clock *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // r13
  __int64 v74; // r15
  unsigned int v75; // ebx
  unsigned int v76; // r10d
  __int64 v77; // rcx
  char *v78; // rbx
  char *v79; // rdi
  int v80; // esi
  __int64 v81; // rax
  char *v82; // rdi
  __int64 *v83; // rdx
  __int64 *v84; // r12
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int64 *v87; // rbp
  __int64 v88; // rax
  __m128 *v89; // rax
  bool v90; // zf
  char *v91; // r12
  __int64 v92; // r8
  __int64 v93; // rcx
  __int64 v94; // r9
  unsigned int v95; // edi
  unsigned int v96; // esi
  unsigned int v97; // eax
  unsigned int v98; // edx
  char *v99; // rax
  void (__fastcall ***v100)(_QWORD); // rbx
  unsigned int v101; // r12d
  unsigned int v102; // ecx
  unsigned int v103; // r12d
  unsigned int v104; // ecx
  __int64 v105; // rax
  unsigned __int64 *v106; // rdx
  char *v107; // r9
  _QWORD *v108; // r15
  const __m128i *v109; // r8
  __int64 v110; // rax
  _QWORD *v111; // rcx
  const __m128i *v112; // r10
  const __m128i *i; // rax
  __m128i v114; // xmm0
  __int64 v115; // rax
  __int64 *v116; // rbp
  __int64 *v117; // rbx
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rcx
  unsigned __int64 *v122; // r11
  unsigned __int64 *v123; // rdx
  unsigned __int64 *v124; // rax
  char *v125; // r8
  __int32 v126; // r10d
  unsigned __int64 *v127; // r12
  unsigned __int64 *v128; // rdx
  unsigned __int64 v129; // rdx
  __int64 v130; // rdi
  unsigned __int64 *v131; // rsi
  unsigned __int64 *v132; // rbp
  __int64 *v133; // rdx
  __int64 v134; // rsi
  __int64 *v135; // rbx
  __int64 *v136; // rbp
  __int64 v137; // rsi
  __int64 v138; // rdi
  char *v139; // r12
  __int64 v140; // rsi
  __int64 *v141; // rbx
  __int64 *v142; // rbp
  __int64 v143; // rsi
  __int64 v144; // rdi
  __int64 *v145; // rbp
  __int64 v146; // rax
  __int64 *v147; // r15
  __int64 v148; // rsi
  __int64 v149; // rdi
  __int64 v150; // rax
  _QWORD *v151; // rax
  __int64 v152; // rax
  __int64 *v153; // r15
  __int64 v154; // rsi
  __int64 v155; // rdi
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  void *v174[2]; // [rsp+0h] [rbp-1F8h] BYREF
  struct _Unwind_Exception *v175; // [rsp+10h] [rbp-1E8h]
  __int64 v176; // [rsp+18h] [rbp-1E0h]
  __m128i v177; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v178; // [rsp+30h] [rbp-1C8h]
  int v179; // [rsp+38h] [rbp-1C0h]
  int v180; // [rsp+3Ch] [rbp-1BCh]
  void **p_ptr; // [rsp+40h] [rbp-1B8h]
  unsigned __int64 v182; // [rsp+48h] [rbp-1B0h]
  __int64 v183; // [rsp+50h] [rbp-1A8h]
  void *v184; // [rsp+58h] [rbp-1A0h]
  _QWORD *v185; // [rsp+60h] [rbp-198h]
  unsigned __int64 *v186; // [rsp+68h] [rbp-190h]
  __int128 *v187; // [rsp+70h] [rbp-188h]
  __m128i *v188; // [rsp+78h] [rbp-180h] BYREF
  _BYTE *v189; // [rsp+80h] [rbp-178h]
  char *v190; // [rsp+88h] [rbp-170h]
  unsigned __int64 *v191; // [rsp+90h] [rbp-168h]
  __int64 v192; // [rsp+98h] [rbp-160h]
  unsigned int v193; // [rsp+A0h] [rbp-158h]
  __int32 v194; // [rsp+A4h] [rbp-154h]
  unsigned __int64 *v195; // [rsp+A8h] [rbp-150h]
  __int64 v196; // [rsp+B8h] [rbp-140h] BYREF
  __int64 v197; // [rsp+C0h] [rbp-138h] BYREF
  void *ptr; // [rsp+C8h] [rbp-130h] BYREF
  __int64 v199[4]; // [rsp+D0h] [rbp-128h] BYREF
  int v200[2]; // [rsp+F0h] [rbp-108h] BYREF
  std::chrono::_V2::steady_clock *v201; // [rsp+F8h] [rbp-100h]
  __int128 v202; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE v203[40]; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v204; // [rsp+138h] [rbp-C0h] BYREF
  __int128 v205; // [rsp+148h] [rbp-B0h]
  _QWORD *v206; // [rsp+158h] [rbp-A0h]
  __m128 v207; // [rsp+160h] [rbp-98h] BYREF
  int v208[4]; // [rsp+170h] [rbp-88h] BYREF
  __int128 v209; // [rsp+180h] [rbp-78h]
  char v210; // [rsp+190h] [rbp-68h]
  int v211; // [rsp+198h] [rbp-60h]
  __int128 v212; // [rsp+1A0h] [rbp-58h]
  char v213; // [rsp+1B0h] [rbp-48h]

  *(_QWORD *)v200 = a1;
  v188 = &v204;
  LODWORD(v175) = a3;
  v187 = &v202;
  v10 = _mm_loadh_ps((const double *)&v188);
  v176 = a4;
  v183 = a5;
  v201 = a2;
  v189 = v203;
  v177 = (__m128i)v10;
  *(__m128i *)v174 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v202, (__m128i)(unsigned __int64)&v202);
  v202 = 0;
  sub_180C0A0(v203);
  si128 = _mm_load_si128((const __m128i *)v174);
  v13 = (__m128)_mm_load_si128(&v177);
  v206 = nullptr;
  v204 = si128;
  v205 = 0;
  v207 = v13;
  sub_1684300(v208, a1);
  v210 = 0;
  v211 = 0;
  v213 = 0;
  v196 = 0;
  v184 = &v196;
  v209 = 0;
  v212 = 0;
  sub_1862300(&v196, "produce_models", 1);
  (*(void (__fastcall **)(std::chrono::_V2::steady_clock *, void *))(*(_QWORD *)v201 + 88LL))(v201, v184);
  v12 = (_OWORD *)sub_186B270((size_t)&qword_80);
  v13.m128_u64[0] = 0;
  v174[0] = v12;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  v192 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&qword_80);
  if ( !byte_1C7EC10 )
  {
    v157 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&qword_80);
    byte_1C7EC10 = 1;
    *(_QWORD *)&xmmword_1C7EC00 = v157;
    if ( (_DWORD)v175 )
      goto LABEL_3;
LABEL_206:
    (*(void (__fastcall **)(std::chrono::_V2::steady_clock *))(*(_QWORD *)v201 + 192LL))(v201);
    goto LABEL_28;
  }
  if ( !(_DWORD)v175 )
    goto LABEL_206;
LABEL_3:
  LODWORD(v14) = 0;
  do
  {
    while ( 1 )
    {
      v27 = (_QWORD *)v205;
      if ( (_QWORD)v205 )
      {
        v28 = *(_DWORD *)(v205 - 4);
        v29 = (unsigned int *)(v205 + 4LL * v28);
        if ( v28 == *(_DWORD *)(v205 - 8) )
        {
          v30 = (3 * v28 + 1) >> 1;
          v31 = 4 * v30 + 8;
          if ( 4 * v28 + 8 >= (unsigned int)v31 || v28 >= v30 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v199, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v199);
            sub_233E40((__int64)v199);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v32 = (unsigned int *)sub_186B300((void *)(v205 - 8), v31);
          v27 = v32 + 2;
          *v32 = v30;
          v33 = v32[1];
          *(_QWORD *)&v205 = v27;
          v29 = (unsigned int *)v27 + v33;
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x10u);
        v27 = v64 + 1;
        *v64 = 2;
        v28 = 0;
        *(_QWORD *)&v205 = v64 + 1;
        v29 = (unsigned int *)(v64 + 1);
      }
      *v29 = v28;
      ++*((_DWORD *)v27 - 1);
      v15 = *((_QWORD **)&v205 + 1);
      if ( *((_QWORD *)&v205 + 1) )
      {
        v16 = *(unsigned int *)(*((_QWORD *)&v205 + 1) - 4LL);
        if ( (_DWORD)v16 == *(_DWORD *)(*((_QWORD *)&v205 + 1) - 8LL) )
        {
          v59 = (unsigned int)(3 * v16 + 1) >> 1;
          v60 = 4 * v59 + 8;
          if ( 4 * (int)v16 + 8 >= (unsigned int)v60 || (unsigned int)v16 >= v59 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v199, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v199);
            sub_233E40((__int64)v199);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (unsigned int *)sub_186B300((void *)(*((_QWORD *)&v205 + 1) - 8LL), v60);
          v15 = v61 + 2;
          *v61 = v59;
          v62 = v61[1];
          *((_QWORD *)&v205 + 1) = v15;
          v17 = (_DWORD *)v15 + v62;
        }
        else
        {
          v17 = (_DWORD *)(*((_QWORD *)&v205 + 1) + 4 * v16);
        }
      }
      else
      {
        v63 = (_QWORD *)sub_186B270(0x10u);
        v15 = v63 + 1;
        *v63 = 2;
        *((_QWORD *)&v205 + 1) = v63 + 1;
        v17 = v63 + 1;
      }
      *v17 = 1;
      ++*((_DWORD *)v15 - 1);
      v18 = v206;
      if ( v206 )
      {
        v19 = *((unsigned int *)v206 - 1);
        if ( (_DWORD)v19 == *((_DWORD *)v206 - 2) )
        {
          v55 = (unsigned int)(3 * v19 + 1) >> 1;
          v56 = 4 * v55 + 8;
          if ( 4 * (int)v19 + 8 >= (unsigned int)v56 || (unsigned int)v19 >= v55 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v199, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v199);
            sub_233E40((__int64)v199);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = (unsigned int *)sub_186B300(v206 - 1, v56);
          v18 = v57 + 2;
          *v57 = v55;
          v58 = v57[1];
          v206 = v18;
          v20 = (unsigned int *)v18 + v58;
        }
        else
        {
          v20 = (unsigned int *)v206 + v19;
        }
      }
      else
      {
        v66 = (_QWORD *)sub_186B270(0x10u);
        v18 = v66 + 1;
        *v66 = 2;
        v206 = v66 + 1;
        v20 = (unsigned int *)(v66 + 1);
      }
      *v20 = v28;
      v21 = (__m128 ***)v204.m128i_i64[1];
      ++*((_DWORD *)v18 - 1);
      v22 = *v21;
      if ( !*v21 )
      {
        v65 = (_QWORD *)sub_186B270(0x18u);
        v22 = (__m128 **)(v65 + 1);
        *v65 = 2;
        v25 = 1;
        *v21 = v22;
        v26 = v22;
        goto LABEL_13;
      }
      v23 = *((_DWORD *)v22 - 1);
      if ( v23 == *((_DWORD *)v22 - 2) )
        break;
      v24 = v23;
      v25 = v23 + 1;
      v26 = &v22[v24];
LABEL_13:
      *v26 = &v207;
      v14 = (unsigned int)(v14 + 1);
      *((_DWORD *)v22 - 1) = v25;
      if ( (_DWORD)v175 == (_DWORD)v14 )
        goto LABEL_22;
    }
    v34 = (3 * v23 + 1) >> 1;
    v35 = 8 * v34 + 8;
    if ( 8 * v23 + 8 >= (unsigned int)v35 || v23 >= v34 )
    {
      v9 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v199, "Overflow encountered when expanding vector");
      *v9 = (char *)off_1C63128;
      sub_2333C0(v9 + 1, v199);
      sub_233E40((__int64)v199);
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v36 = (unsigned int *)sub_186B300(v22 - 1, v35);
    v37 = v36[1];
    v14 = (unsigned int)(v14 + 1);
    *v21 = (__m128 **)(v36 + 2);
    *v36 = v34;
    *(_QWORD *)&v36[2 * v37 + 2] = &v207;
    v36[1] = v37 + 1;
  }
  while ( (_DWORD)v175 != (_DWORD)v14 );
LABEL_22:
  (*(void (__fastcall **)(std::chrono::_V2::steady_clock *))(*(_QWORD *)v201 + 192LL))(v201);
  v38 = (_QWORD *)v176;
  v177.m128i_i64[0] = v176 + 8 * v14;
  do
  {
    while ( 1 )
    {
      v197 = sub_15D1F10(*v38);
      v47 = *(_DWORD **)(v197 + 24);
      if ( v47 )
      {
        if ( v208[0] == *v47 && !v47[1] )
          break;
      }
      v39 = *(_QWORD *)v200;
      v40 = (void *)*v38;
      v41 = v201;
      v42 = *(_QWORD *)(*(_QWORD *)v200 + 840LL);
      sub_180C5A0(v199, "Relevant!");
      v43 = sub_15E3510(v39, v199, 1, &v197, v42, 0);
      ptr = v40;
      v46 = sub_15DC610(
              v39,
              v43,
              1,
              (int)&ptr,
              v44,
              v45,
              (int)v174[0],
              (int)v174[1],
              (int)v175,
              v176,
              v177.m128i_i32[0],
              v177.m128i_i8[8],
              v178,
              v179,
              (int)p_ptr,
              (void *)v182);
      sub_E5EBF0(v41, v46);
      if ( (_QWORD *)v177.m128i_i64[0] == ++v38 )
        goto LABEL_28;
    }
    ++v38;
  }
  while ( (_QWORD *)v177.m128i_i64[0] != v38 );
LABEL_28:
  v193 = sub_E60CB0(v201, 0, 0);
  v48 = 8;
  if ( v193 != -1 )
  {
    v70 = v201;
    p_ptr = &ptr;
    v71 = *(_QWORD *)v201;
    ptr = nullptr;
    (*(void (__fastcall **)(std::chrono::_V2::steady_clock *, void **))(v71 + 32))(v201, &ptr);
    if ( ptr )
    {
      v72 = *((_QWORD *)v70 + 7);
      if ( v72 )
        (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v72 + 32LL))(v72, p_ptr);
    }
    if ( !(_DWORD)v175 )
    {
      v48 = 8;
      v78 = (char *)v174[0] + 128;
LABEL_105:
      v91 = (char *)v174[0];
      if ( v174[0] != v78 )
      {
        while ( *(_QWORD *)v91 <= 1u )
        {
          v91 += 16;
          if ( v91 == v78 )
            goto LABEL_121;
        }
        if ( v91 != v78 )
        {
          do
          {
            sub_88FC60(v200, (int)p_ptr, (__int64 *)v91 + 1);
            v92 = *((_QWORD *)v91 + 1);
            if ( v92 )
            {
              v93 = v205;
              if ( *(_DWORD *)(v92 - 4) )
              {
                v94 = v183;
                v95 = 0;
                do
                {
                  v96 = *(_DWORD *)(v92 + 24LL * v95 + 16);
                  v97 = v96;
                  do
                  {
                    v98 = v97;
                    v97 = *(_DWORD *)(v93 + 4LL * v97);
                  }
                  while ( v98 != v97 );
                  ++v95;
                  *(_DWORD *)(v94 + 4LL * v96) = v97;
                }
                while ( v95 < *(_DWORD *)(v92 - 4) );
              }
            }
            v99 = v91 + 16;
            if ( v91 + 16 == v78 )
              break;
            while ( 1 )
            {
              v91 = v99;
              if ( *(_QWORD *)v99 > 1u )
                break;
              v99 += 16;
              if ( v78 == v99 )
                goto LABEL_121;
            }
          }
          while ( v99 != v78 );
        }
      }
LABEL_121:
      v100 = (void (__fastcall ***)(_QWORD))ptr;
      if ( ptr )
      {
        v90 = (*((_DWORD *)ptr + 4))-- == 1;
        if ( v90 )
        {
          (**v100)(v100);
          sub_186B220(v100);
        }
      }
      goto LABEL_29;
    }
    v182 = (unsigned int)v175;
    v73 = 0;
    v48 = 8;
    LODWORD(v178) = 0;
    v180 = 0;
    while ( 1 )
    {
      v179 = v73;
      v74 = sub_15D1F10(*(_QWORD *)(v176 + 8 * v73));
      v75 = 2 * v48;
      v177.m128i_i32[0] = 2 * v48;
      if ( 3 * v48 >= 4 * (v180 + (int)v178) )
      {
        v76 = v48 - 1;
        v77 = 16LL * v48;
        v78 = (char *)v174[0] + v77;
        v79 = (char *)v174[0];
        goto LABEL_79;
      }
      v178 = 16LL * v75;
      v120 = sub_186B270(v178);
      v121 = v178;
      v122 = (unsigned __int64 *)v120;
      v123 = (unsigned __int64 *)v120;
      v124 = (unsigned __int64 *)(v178 + v120);
      if ( v75 )
      {
        if ( (((_BYTE)v124 - (_BYTE)v122) & 0x10) == 0 || (v123 = v122 + 2, *(_OWORD *)v122 = 0, v124 != v122 + 2) )
        {
          do
          {
            v123 += 4;
            *((_OWORD *)v123 - 2) = 0;
            *((_OWORD *)v123 - 1) = 0;
          }
          while ( v124 != v123 );
        }
      }
      v125 = (char *)v174[0] + 16 * v48;
      v126 = v177.m128i_i32[0] - 1;
      v127 = (unsigned __int64 *)((char *)v174[0] + 8);
      v78 = (char *)v124;
      if ( v125 != v174[0] )
        break;
LABEL_162:
      LODWORD(v186) = v126;
      v185 = v122;
      v178 = v121;
      sub_88F0A0((char *)v174[0], v48);
      v77 = v178;
      LODWORD(v178) = 0;
      v76 = (unsigned int)v186;
      v48 = v177.m128i_i32[0];
      v174[0] = v185;
      v79 = (char *)v185;
LABEL_79:
      v80 = *(_DWORD *)(v74 + 12);
      v81 = 16LL * (v80 & v76);
      v82 = &v79[v81];
      if ( v81 == v77 )
      {
        v84 = nullptr;
LABEL_87:
        if ( v82 == v174[0] )
        {
LABEL_95:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v83 = (__int64 *)v174[0];
        while ( 1 )
        {
          while ( 1 )
          {
            v86 = *v83;
            if ( (unsigned __int64)*v83 <= 1 )
              break;
            if ( *(_DWORD *)(v86 + 12) == v80 && v74 == v86 )
              goto LABEL_203;
            v83 += 2;
            if ( v82 == (char *)v83 )
              goto LABEL_95;
          }
          if ( !v86 )
            break;
          v84 = v83;
          v83 += 2;
          if ( v82 == (char *)v83 )
            goto LABEL_95;
        }
        if ( v84 )
          LODWORD(v178) = v178 - 1;
        else
          v84 = v83;
        v145 = (__int64 *)v84[1];
        *v84 = v74;
        if ( !v145 )
          goto LABEL_188;
        v152 = *((unsigned int *)v145 - 1);
        if ( (_DWORD)v152 )
        {
          v153 = &v145[3 * v152];
          do
          {
            while ( 1 )
            {
              v154 = *v145;
              if ( *v145 )
              {
                v155 = v145[1];
                v90 = (*(_DWORD *)(v154 + 8))-- == 1;
                if ( v90 )
                  break;
              }
              v145 += 3;
              if ( v145 == v153 )
                goto LABEL_201;
            }
            sub_15D7BC0(v155, v154);
            v145 += 3;
          }
          while ( v145 != v153 );
LABEL_201:
          v145 = (__int64 *)v84[1];
        }
      }
      else
      {
        v83 = (__int64 *)v82;
        v84 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v85 = *v83;
            if ( (unsigned __int64)*v83 <= 1 )
              break;
            if ( *(_DWORD *)(v85 + 12) == v80 && v74 == v85 )
            {
LABEL_203:
              v108 = (_QWORD *)v83[1];
              v177.m128i_i64[0] = *(_QWORD *)v200;
              v87 = *(unsigned __int64 **)(v176 + 8 * v73);
              if ( v87 )
                *((_DWORD *)v87 + 2) += 2;
              if ( !v108 )
              {
                v84 = v83;
                goto LABEL_190;
              }
              v88 = *((unsigned int *)v108 - 1);
              if ( (_DWORD)v88 == *((_DWORD *)v108 - 2) )
              {
                v101 = 3 * v88 + 1;
                v102 = v101 & 0xFFFFFFFE;
                v103 = v101 >> 1;
                v104 = 8 * (v103 + v102) + 8;
                if ( 24 * (int)v88 + 8 >= v104 || (unsigned int)v88 >= v103 )
                {
                  v6 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v199, "Overflow encountered when expanding vector");
                  *v6 = (char *)off_1C63128;
                  sub_2333C0(v6 + 1, v199);
                  sub_233E40((__int64)v199);
                  __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v185 = v83;
                v105 = sub_186B270(v104);
                v106 = v185;
                v107 = (char *)v105;
                v108 = (_QWORD *)(v105 + 8);
                v109 = (const __m128i *)v185[1];
                if ( v109 )
                {
                  v110 = v109[-1].m128i_u32[3];
                  v111 = v108;
                  *((_DWORD *)v107 + 1) = v110;
                  v112 = (const __m128i *)((char *)v109 + 24 * v110);
                  for ( i = v109; v112 != i; *((_DWORD *)v111 - 2) = i[-1].m128i_i32[2] )
                  {
                    v114 = _mm_loadu_si128(i);
                    i->m128i_i64[0] = 0;
                    i = (const __m128i *)((char *)i + 24);
                    v111 += 3;
                    *(__m128i *)(v111 - 3) = v114;
                  }
                  v115 = v109[-1].m128i_u32[3];
                  if ( (_DWORD)v115 )
                  {
                    v185 = v78;
                    v191 = v87;
                    v116 = (__int64 *)v109;
                    v186 = v106;
                    v117 = &v109->m128i_i64[3 * v115];
                    v190 = v107;
                    do
                    {
                      while ( 1 )
                      {
                        v118 = *v116;
                        if ( *v116 )
                        {
                          v119 = v116[1];
                          v90 = (*(_DWORD *)(v118 + 8))-- == 1;
                          if ( v90 )
                            break;
                        }
                        v116 += 3;
                        if ( v117 == v116 )
                          goto LABEL_135;
                      }
                      sub_15D7BC0(v119, v118);
                      v116 += 3;
                    }
                    while ( v117 != v116 );
LABEL_135:
                    v106 = v186;
                    v78 = (char *)v185;
                    v107 = v190;
                    v87 = v191;
                    v109 = (const __m128i *)v186[1];
                  }
                  v186 = (unsigned __int64 *)v107;
                  v185 = v106;
                  sub_186B220(&v109[-1].m128i_u64[1]);
                  v107 = (char *)v186;
                  v106 = v185;
                  v89 = (__m128 *)&v108[3 * *((unsigned int *)v186 + 1)];
                }
                else
                {
                  *(_DWORD *)(v105 + 4) = 0;
                  v89 = (__m128 *)(v105 + 8);
                }
                v106[1] = (unsigned __int64)v108;
                *(_DWORD *)v107 = v103;
              }
              else
              {
                v89 = (__m128 *)&v108[3 * v88];
              }
              goto LABEL_101;
            }
            v83 += 2;
            if ( v78 == (char *)v83 )
              goto LABEL_87;
          }
          if ( !v85 )
            break;
          v84 = v83;
          v83 += 2;
          if ( v78 == (char *)v83 )
            goto LABEL_87;
        }
        if ( v84 )
          LODWORD(v178) = v178 - 1;
        else
          v84 = v83;
        v145 = (__int64 *)v84[1];
        *v84 = v74;
        if ( !v145 )
          goto LABEL_188;
        v146 = *((unsigned int *)v145 - 1);
        if ( (_DWORD)v146 )
        {
          v147 = &v145[3 * v146];
          do
          {
            while ( 1 )
            {
              v148 = *v145;
              if ( *v145 )
              {
                v149 = v145[1];
                v90 = (*(_DWORD *)(v148 + 8))-- == 1;
                if ( v90 )
                  break;
              }
              v145 += 3;
              if ( v145 == v147 )
                goto LABEL_186;
            }
            sub_15D7BC0(v149, v148);
            v145 += 3;
          }
          while ( v145 != v147 );
LABEL_186:
          v145 = (__int64 *)v84[1];
        }
      }
      sub_186B220(v145 - 1);
LABEL_188:
      v150 = *(_QWORD *)v200;
      v84[1] = 0;
      ++v180;
      v177.m128i_i64[0] = v150;
      v87 = *(unsigned __int64 **)(v176 + 8 * v73);
      if ( v87 )
        *((_DWORD *)v87 + 2) += 2;
LABEL_190:
      v151 = (_QWORD *)sub_186B270(0x38u);
      v108 = v151 + 1;
      *v151 = 2;
      v84[1] = (__int64)(v151 + 1);
      v89 = (__m128 *)(v151 + 1);
LABEL_101:
      v13 = _mm_loadh_ps((const double *)v177.m128i_i64);
      v89[1].m128_i32[0] = v179;
      *v89 = v13;
      ++*((_DWORD *)v108 - 1);
      if ( v87 )
      {
        v90 = (*((_DWORD *)v87 + 2))-- == 1;
        if ( v90 )
          sub_15D7BC0(v177.m128i_i64[0], v87);
      }
      if ( v182 == ++v73 )
        goto LABEL_105;
    }
    while ( 1 )
    {
      v129 = *(v127 - 1);
      if ( v129 <= 1 )
      {
LABEL_144:
        v128 = v127 + 2;
        if ( v125 == (char *)(v127 + 1) )
          goto LABEL_162;
        goto LABEL_145;
      }
      v130 = 16LL * (*(_DWORD *)(v129 + 12) & (unsigned int)v126);
      v131 = &v122[(unsigned __int64)v130 / 8];
      if ( v121 == v130 )
      {
LABEL_163:
        if ( v122 == v131 )
        {
LABEL_191:
          v191 = v124;
          LODWORD(v190) = v126;
          v186 = (unsigned __int64 *)v125;
          v185 = v122;
          v178 = v121;
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v132 = v122;
        while ( *v132 )
        {
          v132 += 2;
          if ( v131 == v132 )
            goto LABEL_191;
        }
        *v132 = v129;
        if ( v127 == v132 + 1 )
          goto LABEL_144;
        v133 = (__int64 *)v132[1];
        if ( v133 )
        {
          v140 = *((unsigned int *)v133 - 1);
          if ( (_DWORD)v140 )
          {
            v178 = (__int64)v78;
            v141 = v133;
            v186 = v132;
            v185 = (_QWORD *)v121;
            v142 = &v133[3 * v140];
            v190 = (char *)v122;
            v191 = (unsigned __int64 *)v125;
            v194 = v126;
            v195 = v124;
            do
            {
              while ( 1 )
              {
                v143 = *v141;
                if ( *v141 )
                {
                  v144 = v141[1];
                  v90 = (*(_DWORD *)(v143 + 8))-- == 1;
                  if ( v90 )
                    break;
                }
                v141 += 3;
                if ( v141 == v142 )
                  goto LABEL_175;
              }
              sub_15D7BC0(v144, v143);
              v141 += 3;
            }
            while ( v141 != v142 );
LABEL_175:
            v132 = v186;
            v78 = (char *)v178;
            v121 = (__int64)v185;
            v122 = (unsigned __int64 *)v190;
            v125 = (char *)v191;
            v126 = v194;
            v124 = v195;
            v133 = (__int64 *)v186[1];
          }
          goto LABEL_160;
        }
      }
      else
      {
        v132 = &v122[(unsigned __int64)v130 / 8];
        while ( *v132 )
        {
          v132 += 2;
          if ( v124 == v132 )
            goto LABEL_163;
        }
        *v132 = v129;
        if ( v127 == v132 + 1 )
          goto LABEL_144;
        v133 = (__int64 *)v132[1];
        if ( v133 )
        {
          v134 = *((unsigned int *)v133 - 1);
          if ( (_DWORD)v134 )
          {
            v178 = (__int64)v78;
            v135 = v133;
            v191 = v132;
            v185 = (_QWORD *)v121;
            v136 = &v133[3 * v134];
            v186 = v122;
            v190 = v125;
            v194 = v126;
            v195 = v124;
            do
            {
              while ( 1 )
              {
                v137 = *v135;
                if ( *v135 )
                {
                  v138 = v135[1];
                  v90 = (*(_DWORD *)(v137 + 8))-- == 1;
                  if ( v90 )
                    break;
                }
                v135 += 3;
                if ( v135 == v136 )
                  goto LABEL_159;
              }
              sub_15D7BC0(v138, v137);
              v135 += 3;
            }
            while ( v135 != v136 );
LABEL_159:
            v132 = v191;
            v78 = (char *)v178;
            v121 = (__int64)v185;
            v122 = v186;
            v125 = v190;
            v126 = v194;
            v124 = v195;
            v133 = (__int64 *)v191[1];
          }
LABEL_160:
          v191 = v124;
          LODWORD(v190) = v126;
          v186 = (unsigned __int64 *)v125;
          v185 = v122;
          v178 = v121;
          sub_186B220(v133 - 1);
          v124 = v191;
          v126 = (int)v190;
          v125 = (char *)v186;
          v122 = v185;
          v121 = v178;
        }
      }
      v132[1] = 0;
      v132[1] = *v127;
      v128 = v127 + 2;
      v139 = (char *)(v127 + 1);
      *((_QWORD *)v139 - 1) = 0;
      if ( v125 == v139 )
        goto LABEL_162;
LABEL_145:
      v127 = v128;
    }
  }
LABEL_29:
  v49 = v201;
  (*(void (__fastcall **)(std::chrono::_V2::steady_clock *, __int64))(*(_QWORD *)v201 + 200LL))(v201, 1);
  std::chrono::_V2::steady_clock::now(v49);
  if ( byte_1C7EC10 )
  {
    v156 = std::chrono::_V2::steady_clock::now(v49);
    byte_1C7EC10 = 0;
    *((_QWORD *)&xmmword_1C7EC00 + 1) += v156 - xmmword_1C7EC00;
  }
  if ( (unsigned int)sub_180B130(v49) )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)v13.m128_u64) )
    {
      sub_186A4C0(*(double *)v13.m128_u64);
      sub_180B150(v49, 1);
      if ( byte_1C7EC10 )
      {
        v170 = std::chrono::_V2::steady_clock::now(v49);
        byte_1C7EC10 = 0;
        *((_QWORD *)&xmmword_1C7EC00 + 1) += v170 - xmmword_1C7EC00;
        v171 = std::chrono::_V2::steady_clock::now(v49);
        byte_1C7EC10 = 1;
        *(_QWORD *)&xmmword_1C7EC00 = v171;
      }
      v176 = 0x408F400000000000LL;
      std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v50 = (std::chrono::_V2::steady_clock *)std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v210 )
      {
        v168 = std::chrono::_V2::steady_clock::now(v50);
        v210 = 0;
        *((_QWORD *)&v209 + 1) += v168 - v209;
        v169 = std::chrono::_V2::steady_clock::now(v50);
        v210 = 1;
        *(_QWORD *)&v209 = v169;
      }
      v51 = (std::chrono::_V2::steady_clock *)std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v213 )
      {
        v166 = std::chrono::_V2::steady_clock::now(v51);
        v213 = 0;
        *((_QWORD *)&v212 + 1) += v166 - v212;
        v167 = std::chrono::_V2::steady_clock::now(v51);
        v213 = 1;
        *(_QWORD *)&v212 = v167;
      }
      v52 = (std::chrono::_V2::steady_clock *)std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( byte_1C7EBF0 )
      {
        v164 = std::chrono::_V2::steady_clock::now(v52);
        byte_1C7EBF0 = 0;
        *((_QWORD *)&xmmword_1C7EBE0 + 1) += v164 - xmmword_1C7EBE0;
        v165 = std::chrono::_V2::steady_clock::now(v52);
        byte_1C7EBF0 = 1;
        *(_QWORD *)&xmmword_1C7EBE0 = v165;
      }
      v53 = std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v53, "\n");
    }
    else
    {
      sub_180B150(v49, 1);
      if ( byte_1C7EC10 )
      {
        v172 = std::chrono::_V2::steady_clock::now(v49);
        byte_1C7EC10 = 0;
        *((_QWORD *)&xmmword_1C7EC00 + 1) += v172 - xmmword_1C7EC00;
        v173 = std::chrono::_V2::steady_clock::now(v49);
        byte_1C7EC10 = 1;
        *(_QWORD *)&xmmword_1C7EC00 = v173;
      }
      v176 = 0x408F400000000000LL;
      std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v67 = (std::chrono::_V2::steady_clock *)std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v210 )
      {
        v162 = std::chrono::_V2::steady_clock::now(v67);
        v210 = 0;
        *((_QWORD *)&v209 + 1) += v162 - v209;
        v163 = std::chrono::_V2::steady_clock::now(v67);
        v210 = 1;
        *(_QWORD *)&v209 = v163;
      }
      v68 = (std::chrono::_V2::steady_clock *)std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v213 )
      {
        v160 = std::chrono::_V2::steady_clock::now(v68);
        v213 = 0;
        *((_QWORD *)&v212 + 1) += v160 - v212;
        v161 = std::chrono::_V2::steady_clock::now(v68);
        v213 = 1;
        *(_QWORD *)&v212 = v161;
      }
      v69 = (std::chrono::_V2::steady_clock *)std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( byte_1C7EBF0 )
      {
        v158 = std::chrono::_V2::steady_clock::now(v69);
        byte_1C7EBF0 = 0;
        *((_QWORD *)&xmmword_1C7EBE0 + 1) += v158 - xmmword_1C7EBE0;
        v159 = std::chrono::_V2::steady_clock::now(v69);
        byte_1C7EBF0 = 1;
        *(_QWORD *)&xmmword_1C7EBE0 = v159;
      }
      std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_88F0A0((char *)v174[0], v48);
  sub_18572D0(v184);
  if ( v206 )
    sub_186B220(v206 - 1);
  if ( *((_QWORD *)&v205 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v205 + 1) - 8LL));
  if ( (_QWORD)v205 )
    sub_186B220((void *)(v205 - 8));
  sub_180C0E0(v189);
  if ( *((_QWORD *)&v202 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v202 + 1) - 8LL));
  if ( (_QWORD)v202 )
    sub_186B220((void *)(v202 - 8));
  return v193;
}

