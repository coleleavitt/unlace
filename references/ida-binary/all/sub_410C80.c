QT::QString *__fastcall sub_410C80(
        QT::QString *this,
        const char *a2,
        __int64 a3,
        _BYTE *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // r14
  const char *v7; // r12
  QT::QString *v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v11; // rax
  const char *v12; // r13
  signed __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdx
  void **v16; // r9
  char v18; // r13
  unsigned __int64 v19; // r12
  void **v20; // rsi
  char arg_addrs; // al
  __int64 v22; // rdi
  __m128i v23; // xmm0
  _BYTE *v24; // rdx
  __int64 v25; // r12
  __m128i v26; // xmm0
  double v27; // xmm0_8
  unsigned __int64 v28; // rdx
  size_t v29; // rax
  const char *v30; // r13
  double v31; // xmm0_8
  double v32; // xmm0_8
  __m128i si128; // xmm0
  __int64 v34; // rdx
  int v35; // eax
  __int64 func; // rax
  __int64 (__fastcall *hexdsp)(__int64, _BYTE *, _BYTE *, _QWORD); // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r12
  void (__fastcall *v41)(__int64, _BYTE *, __int64, _QWORD); // rax
  __int64 v42; // rax
  bool v43; // zf
  void (__fastcall *v44)(__int64, __int64); // rax
  const char *v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  void **v49; // r9
  const char *v50; // rdi
  unsigned int v51; // eax
  __int64 v52; // r12
  __int64 v53; // rbx
  const char *v54; // rax
  __int64 v55; // rdi
  void (__fastcall *v56)(__int64, __int64); // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  void (__fastcall *v61)(__int64, __int64); // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  void (__fastcall *v66)(__int64, const char *); // rax
  __int64 v67; // rdi
  void (__fastcall *v68)(__int64, __int64); // rax
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rdi
  void **v74; // r9
  __int64 v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // rbx
  __int64 *v78; // rax
  __int64 v79; // rdi
  void (__fastcall *v80)(__int64, __int64); // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  void (__fastcall *v85)(__int64, __int64); // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  void (__fastcall *v90)(__int64, __int64); // rax
  __int64 v91; // rax
  __int64 v92; // r13
  void (__fastcall *v93)(__int64, __int64, _BYTE *, __int64); // rax
  void **v94; // rsi
  __int64 v95; // rax
  __m128i v96; // xmm0
  char *v97; // rax
  int v98; // eax
  int v99; // edx
  char v100; // al
  const char *v101; // rsi
  void **v102; // r9
  size_t v103; // rax
  const char *v104; // r13
  unsigned __int64 v105; // rdx
  double v106; // xmm0_8
  void *v107; // rcx
  void *v108; // rsi
  __m128i v109; // xmm0
  char v110; // al
  char reg_value_info; // al
  const char *v112; // rsi
  __int64 v113; // rdx
  void **v114; // r9
  const char *v115; // rdx
  double v116; // xmm0_8
  size_t v117; // rax
  unsigned int v118; // [rsp+Ch] [rbp-2B4h]
  QT::QString *v119; // [rsp+10h] [rbp-2B0h]
  void **v120; // [rsp+10h] [rbp-2B0h]
  unsigned int v121; // [rsp+10h] [rbp-2B0h]
  void **v122; // [rsp+18h] [rbp-2A8h]
  __int64 v123; // [rsp+18h] [rbp-2A8h]
  void **v124; // [rsp+18h] [rbp-2A8h]
  const char *v125; // [rsp+18h] [rbp-2A8h]
  QT::QString *v126; // [rsp+18h] [rbp-2A8h]
  __int64 v127; // [rsp+20h] [rbp-2A0h]
  void **v128; // [rsp+20h] [rbp-2A0h]
  void **v129; // [rsp+20h] [rbp-2A0h]
  void **v130; // [rsp+20h] [rbp-2A0h]
  _BYTE *v131; // [rsp+28h] [rbp-298h]
  __int64 v132; // [rsp+28h] [rbp-298h]
  void **v133; // [rsp+28h] [rbp-298h]
  unsigned int v134; // [rsp+28h] [rbp-298h]
  void **v135; // [rsp+30h] [rbp-290h]
  void **v136; // [rsp+30h] [rbp-290h]
  void **v137; // [rsp+30h] [rbp-290h]
  void **v138; // [rsp+30h] [rbp-290h]
  __int64 v139; // [rsp+30h] [rbp-290h]
  void **v140; // [rsp+30h] [rbp-290h]
  __int64 v141; // [rsp+30h] [rbp-290h]
  __int64 v142; // [rsp+30h] [rbp-290h]
  void **v143; // [rsp+30h] [rbp-290h]
  void **v144; // [rsp+30h] [rbp-290h]
  void **v145; // [rsp+30h] [rbp-290h]
  void **v146; // [rsp+30h] [rbp-290h]
  void **v147; // [rsp+30h] [rbp-290h]
  void **v148; // [rsp+30h] [rbp-290h]
  void **v149; // [rsp+30h] [rbp-290h]
  void **v150; // [rsp+30h] [rbp-290h]
  void **v151; // [rsp+30h] [rbp-290h]
  void **v152; // [rsp+30h] [rbp-290h]
  void **v153; // [rsp+30h] [rbp-290h]
  void **v154; // [rsp+30h] [rbp-290h]
  void **v155; // [rsp+30h] [rbp-290h]
  void **v156; // [rsp+30h] [rbp-290h]
  void **v157; // [rsp+30h] [rbp-290h]
  void **v158; // [rsp+30h] [rbp-290h]
  const char *v159; // [rsp+30h] [rbp-290h]
  unsigned int v160; // [rsp+38h] [rbp-288h]
  __int64 v161; // [rsp+38h] [rbp-288h]
  __int64 v162; // [rsp+38h] [rbp-288h]
  void *v163[2]; // [rsp+40h] [rbp-280h] BYREF
  _BYTE *v164; // [rsp+50h] [rbp-270h]
  void *v165[2]; // [rsp+60h] [rbp-260h] BYREF
  _BYTE *v166; // [rsp+70h] [rbp-250h]
  __m128i v167[2]; // [rsp+80h] [rbp-240h] BYREF
  _BYTE v168[24]; // [rsp+A0h] [rbp-220h] BYREF
  __int128 v169; // [rsp+B8h] [rbp-208h]
  _BYTE ptr[40]; // [rsp+D0h] [rbp-1F0h] BYREF
  __int64 v171; // [rsp+F8h] [rbp-1C8h]
  __int128 v172; // [rsp+100h] [rbp-1C0h]
  void **v173; // [rsp+110h] [rbp-1B0h]
  __int64 v174; // [rsp+118h] [rbp-1A8h]
  __int128 v175; // [rsp+120h] [rbp-1A0h] BYREF
  __int64 v176; // [rsp+130h] [rbp-190h]
  __int64 v177; // [rsp+138h] [rbp-188h]
  __int64 v178; // [rsp+140h] [rbp-180h]
  char v179; // [rsp+148h] [rbp-178h] BYREF
  _BYTE v180[319]; // [rsp+149h] [rbp-177h] BYREF
  _QWORD v181[7]; // [rsp+288h] [rbp-38h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = this;
  v160 = a5;
  v9 = a5 & 4;
  v131 = a4;
  v181[0] = __readfsqword(0x28u);
  *((_QWORD *)this + 2) = 0;
  *(_OWORD *)this = 0;
  if ( !(_DWORD)v9 )
  {
    if ( (v160 & 8) == 0 )
      goto LABEL_15;
    goto LABEL_3;
  }
  memset(v167, 0, 24);
  print_tinfo(v167, 0, 0, 0, 32, a3 + 64, 0, 0);
  if ( v167[0].m128i_i64[1] )
  {
    v29 = v167[0].m128i_i64[1] - 1;
    v30 = (const char *)v167[0].m128i_i64[0];
    v28 = (unsigned __int64)(v167[0].m128i_i64[1] - 1) >> 63;
  }
  else
  {
    LOBYTE(v28) = 0;
    v29 = 0;
    v30 = &s1;
  }
  if ( !v30 || (_BYTE)v28 )
  {
    v29 = 0;
    if ( v30 )
      v29 = strlen(v30);
  }
  v31 = QT::QString::fromUtf8(v168, v29, v30);
  sub_40C430((__m128i *)ptr, (const __m128i *)v168, 32, v160, a6);
  a2 = ptr;
  QT::QString::append(this, (const QT::QString *)ptr);
  if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
    free(*(void **)ptr);
  if ( *(_QWORD *)v168 && !_InterlockedSub(*(volatile signed __int32 **)v168, 1u) )
    free(*(void **)v168);
  if ( (v160 & 8) != 0 )
  {
    QT::QString::append(this, " ", 1);
    if ( v167[0].m128i_i64[0] )
    {
      v167[0].m128i_i64[1] = 0;
      qfree(v167[0].m128i_i64[0], " ", v31);
    }
LABEL_3:
    v11 = *(_QWORD *)(v6 + 24);
    memset(v167, 0, 24);
    if ( v11 <= 1 )
    {
      v32 = QT::QString::fromUtf8(v168, 5, "arg%1", a4, v9);
      QT::QString::arg(ptr, v168, v131 + 1, 0, 10, 32, v32);
      si128 = _mm_load_si128(v167);
      v34 = v167[1].m128i_i64[0];
      v167[0] = _mm_load_si128((const __m128i *)ptr);
      v167[1].m128i_i64[0] = *(_QWORD *)&ptr[16];
      *(_QWORD *)&ptr[16] = v34;
      *(__m128i *)ptr = si128;
      if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
        free(*(void **)ptr);
      if ( *(_QWORD *)v168 && !_InterlockedSub(*(volatile signed __int32 **)v168, 1u) )
        free(*(void **)v168);
    }
    else
    {
      v12 = *(const char **)(v6 + 16);
      v13 = v11 - 1;
      if ( !v12 || v13 < 0 )
      {
        v13 = 0;
        if ( v12 )
          v13 = strlen(*(const char **)(v6 + 16));
      }
      QT::QString::fromUtf8(ptr, v13, v12, a4, v9);
      v14 = _mm_load_si128(v167);
      v15 = v167[1].m128i_i64[0];
      v167[0] = _mm_load_si128((const __m128i *)ptr);
      v167[1].m128i_i64[0] = *(_QWORD *)&ptr[16];
      *(_QWORD *)&ptr[16] = v15;
      *(__m128i *)ptr = v14;
      if ( v14.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v14.m128i_i64[0], 1u) )
        free(*(void **)ptr);
    }
    sub_40C430((__m128i *)ptr, v167, 25, v160, a6);
    a2 = ptr;
    QT::QString::append(this, (const QT::QString *)ptr);
    if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
    {
      this = *(QT::QString **)ptr;
      free(*(void **)ptr);
    }
    if ( v167[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v167[0].m128i_i64[0], 1u) )
    {
      this = (QT::QString *)v167[0].m128i_i64[0];
      free((void *)v167[0].m128i_i64[0]);
    }
    goto LABEL_15;
  }
  this = (QT::QString *)v167[0].m128i_i64[0];
  if ( v167[0].m128i_i64[0] )
  {
    v167[0].m128i_i64[1] = 0;
    qfree(v167[0].m128i_i64[0], ptr, v31);
  }
LABEL_15:
  if ( (v160 & 0x80u) == 0 )
    return v8;
  v16 = *((void ***)v7 + 1);
  if ( v16 == (void **)-1LL )
    return v8;
  v18 = HIBYTE(word_8BDEB8);
  if ( v16 != (void **)qword_8BDEA0 )
  {
    qword_8BDEA0 = *((_QWORD *)v7 + 1);
    v137 = v16;
    LOBYTE(word_8BDEB8) = 1;
    callui(7, 4, (unsigned int)ptr, 0, (unsigned int)&callui, (_DWORD)v16);
    v16 = v137;
    if ( v35 != 14598366 )
      goto LABEL_67;
    func = get_func(v137);
    v16 = v137;
    if ( !func )
      goto LABEL_67;
    *(_QWORD *)v168 = 0;
    *(_QWORD *)&v168[8] = -1;
    *(_QWORD *)&v168[16] = 0;
    *(_QWORD *)ptr = func;
    memset(&ptr[8], 0, 24);
    v169 = 0;
    hexdsp = (__int64 (__fastcall *)(__int64, _BYTE *, _BYTE *, _QWORD))get_hexdsp(
                                                                          v137,
                                                                          0xDEC0DE00000004LL,
                                                                          a3,
                                                                          a4,
                                                                          v9,
                                                                          v137);
    v38 = hexdsp(566, ptr, v168, 0);
    v39 = *(_QWORD *)&ptr[8];
    v167[0].m128i_i64[0] = v38;
    v40 = v38;
    v16 = v137;
    if ( *(_QWORD *)&ptr[8] )
    {
      *(_QWORD *)&ptr[16] = 0;
      qfree(*(_QWORD *)&ptr[8], ptr, a3, a4, v9, v137);
      v16 = v137;
    }
    if ( v40 )
    {
      *(_DWORD *)&ptr[8] = 0;
      *(_QWORD *)ptr = &try_get_decompiler_call_info;
      memset(&ptr[16], 0, 24);
      v171 = 0;
      v173 = v16;
      v138 = v16;
      v174 = 0;
      v127 = v40 + 16;
      v172 = 0;
      v41 = (void (__fastcall *)(__int64, _BYTE *, __int64, _QWORD))get_hexdsp(v39, ptr, a3, a4, v9, v16);
      a2 = ptr;
      v41(455, ptr, v40 + 16, 0);
      v42 = v174;
      v16 = v138;
      if ( v174 && *(_QWORD *)(v174 + 32) )
      {
        a3 = xmmword_8BDEA8;
        if ( (_QWORD)xmmword_8BDEA8 )
        {
          v43 = (*(_DWORD *)(xmmword_8BDEA8 + 104))-- == 1;
          v139 = a3;
          if ( v43 )
          {
            v122 = v16;
            v44 = (void (__fastcall *)(__int64, __int64))get_hexdsp(455, ptr, a3, a4, v9, v16);
            v45 = (const char *)v139;
            v44(564, v139);
            v48 = v139;
            v49 = v122;
            v50 = *(const char **)(v139 + 160);
            if ( v50 )
            {
              *(_QWORD *)(v139 + 168) = 0;
              qfree(v50, (const char *)v139, v139, v46, v47, v122);
              v49 = v122;
              v48 = v139;
            }
            if ( *(_QWORD *)(v48 + 128) )
            {
              if ( *(_QWORD *)(v48 + 136) )
              {
                v51 = v160;
                v140 = v49;
                v161 = 0;
                v45 = *(const char **)(v48 + 128);
                v118 = v51;
                v123 = v40;
                v52 = v48;
                v119 = v8;
                v53 = *(_QWORD *)(v48 + 136);
                do
                {
                  v54 = &v45[32 * v161];
                  v55 = *(_QWORD *)v54;
                  if ( *(_QWORD *)v54 )
                  {
                    *((_QWORD *)v54 + 1) = 0;
                    qfree(v55, v45);
                    v45 = *(const char **)(v52 + 128);
                  }
                  ++v161;
                }
                while ( v53 != v161 );
                v48 = v52;
                v49 = v140;
                v40 = v123;
                v8 = v119;
                v160 = v118;
              }
              else
              {
                v45 = *(const char **)(v48 + 128);
              }
              v50 = v45;
              v124 = v49;
              *(_QWORD *)(v48 + 136) = 0;
              v141 = v48;
              qfree(v45, v45);
              v48 = v141;
              v49 = v124;
            }
            v120 = v49;
            v125 = (const char *)v48;
            v142 = v48 + 16;
            v56 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v50, v45, v48, v46, v47, v49);
            v56(493, v142);
            v61 = (void (__fastcall *)(__int64, __int64))get_hexdsp(493, v142, v57, v58, v59, v60);
            v61(444, v142);
            v66 = (void (__fastcall *)(__int64, const char *))get_hexdsp(444, v142, v62, v63, v64, v65);
            a2 = v125;
            v66(130, v125);
            v42 = v174;
            v16 = v120;
          }
        }
        ++*(_DWORD *)(v40 + 104);
        v18 = 1;
        xmmword_8BDEA8 = (__int128)_mm_loadh_ps((const double *)(v42 + 32));
      }
      else
      {
        v18 = 0;
      }
      *(_QWORD *)ptr = ctree_visitor_t___vtable;
      if ( v171 )
      {
        v143 = v16;
        *(_QWORD *)&v172 = 0;
        qfree(v171, a2);
        v16 = v143;
      }
      v67 = *(_QWORD *)&ptr[16];
      if ( *(_QWORD *)&ptr[16] )
      {
        v144 = v16;
        *(_QWORD *)&ptr[24] = 0;
        qfree(*(_QWORD *)&ptr[16], a2);
        v16 = v144;
      }
      v43 = (*(_DWORD *)(v40 + 104))-- == 1;
      if ( v43 )
      {
        v145 = v16;
        v68 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v67, a2, a3, a4, v9, v16);
        v69 = v40;
        v68(564, v40);
        v73 = *(_QWORD *)(v40 + 160);
        v74 = v145;
        if ( v73 )
        {
          *(_QWORD *)(v40 + 168) = 0;
          qfree(v73, (const char *)v40, v70, v71, v72, v145);
          v74 = v145;
        }
        v75 = *(_QWORD *)(v40 + 128);
        if ( v75 )
        {
          v69 = 0;
          if ( *(_QWORD *)(v40 + 136) )
          {
            v76 = v160;
            v146 = v74;
            v162 = 0;
            v121 = v76;
            v126 = v8;
            v77 = *(_QWORD *)(v40 + 136);
            do
            {
              v78 = (__int64 *)(v75 + 32 * v162);
              v79 = *v78;
              if ( *v78 )
              {
                v78[1] = 0;
                qfree(v79, nullptr);
                v75 = *(_QWORD *)(v40 + 128);
              }
              ++v162;
            }
            while ( v77 != v162 );
            v74 = v146;
            v8 = v126;
            v160 = v121;
          }
          *(_QWORD *)(v40 + 136) = 0;
          v73 = v75;
          v147 = v74;
          qfree(v75, nullptr);
          v74 = v147;
        }
        v148 = v74;
        v80 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v73, v69, v75, v71, v72, v74);
        v80(493, v127);
        v85 = (void (__fastcall *)(__int64, __int64))get_hexdsp(493, v127, v81, v82, v83, v84);
        v85(444, v127);
        v90 = (void (__fastcall *)(__int64, __int64))get_hexdsp(444, v127, v86, v87, v88, v89);
        a2 = (const char *)v40;
        v90(130, v40);
        v16 = v148;
      }
      this = *(QT::QString **)&v168[16];
      if ( *(_QWORD *)&v168[16] )
      {
        v149 = v16;
        *(_QWORD *)&v169 = 0;
        qfree(*(_QWORD *)&v168[16], a2);
        v16 = v149;
      }
      HIBYTE(word_8BDEB8) = v18;
      goto LABEL_19;
    }
    if ( *(_QWORD *)&v168[16] )
    {
      v154 = v16;
      *(_QWORD *)&v169 = 0;
      qfree(*(_QWORD *)&v168[16], ptr);
      HIBYTE(word_8BDEB8) = 0;
      v19 = (int)v131;
      v16 = v154;
    }
    else
    {
LABEL_67:
      HIBYTE(word_8BDEB8) = 0;
      v19 = (int)v131;
    }
LABEL_21:
    v164 = nullptr;
    *(_OWORD *)v163 = 0;
    goto LABEL_22;
  }
LABEL_19:
  v19 = (int)v131;
  if ( !v18 )
    goto LABEL_21;
  a3 = *((_QWORD *)&xmmword_8BDEA8 + 1);
  if ( (unsigned __int64)(int)v131 >= *(_QWORD *)(*((_QWORD *)&xmmword_8BDEA8 + 1) + 8LL) )
    goto LABEL_21;
  v91 = **((_QWORD **)&xmmword_8BDEA8 + 1);
  v128 = v16;
  memset(v168, 0, sizeof(v168));
  v92 = v91 + 72LL * (int)v131;
  v132 = xmmword_8BDEA8;
  v93 = (void (__fastcall *)(__int64, __int64, _BYTE *, __int64))get_hexdsp(
                                                                   this,
                                                                   a2,
                                                                   *((_QWORD *)&xmmword_8BDEA8 + 1),
                                                                   xmmword_8BDEA8,
                                                                   v9,
                                                                   v16);
  v93(469, v92, v168, v132);
  v16 = v128;
  if ( *(_DWORD *)(v92 + 8) == 64 )
  {
    v110 = sub_40B4D0((_QWORD *)(v92 + 48));
    v16 = v128;
    if ( v110 )
    {
      v94 = *(void ***)(v92 + 24);
      sub_40EFC0((__int64)v163, v94, v160, a6);
      v16 = v128;
      if ( v164 )
        goto LABEL_116;
      if ( v163[0] && !_InterlockedSub((volatile signed __int32 *)v163[0], 1u) )
      {
        free(v163[0]);
        v16 = v128;
      }
    }
  }
  if ( (v160 & 1) != 0 )
  {
    v94 = (void **)v168;
    v133 = v16;
    sub_40CA70((QT::QString *)v163, (__int64)v168, a6);
    v16 = v133;
  }
  else
  {
    memset(ptr, 0, 24);
    v101 = &s1;
    if ( *(_QWORD *)&v168[8] )
      v101 = *(const char **)v168;
    v152 = v16;
    tag_remove(ptr, v101, 0);
    v102 = v152;
    if ( *(_QWORD *)&ptr[8] )
    {
      v103 = *(_QWORD *)&ptr[8] - 1LL;
      v104 = *(const char **)ptr;
      v105 = (unsigned __int64)(*(_QWORD *)&ptr[8] - 1LL) >> 63;
    }
    else
    {
      LOBYTE(v105) = 0;
      v103 = 0;
      v104 = &s1;
    }
    if ( !v104 || (_BYTE)v105 )
    {
      v103 = 0;
      if ( v104 )
      {
        v103 = strlen(v104);
        v102 = v152;
      }
    }
    v94 = (void **)v103;
    v153 = v102;
    v106 = QT::QString::fromUtf8(v163, v103, v104);
    v16 = v153;
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(_QWORD *)ptr, (const char *)v94, a3, a4, v9, v153, v106);
      v16 = v153;
    }
  }
LABEL_116:
  if ( *(_QWORD *)v168 )
  {
    v150 = v16;
    *(_QWORD *)&v168[8] = 0;
    qfree(*(_QWORD *)v168, (const char *)v94);
    v16 = v150;
  }
  v95 = (__int64)v164;
  if ( v164 )
    goto LABEL_119;
LABEL_22:
  v20 = v16;
  memset(ptr, 0, 24);
  v135 = v16;
  arg_addrs = get_arg_addrs(ptr, v16, a3, a4, v9);
  v22 = *(_QWORD *)ptr;
  v16 = v135;
  if ( arg_addrs )
  {
    if ( v19 < *(_QWORD *)&ptr[8] )
    {
      v20 = *(void ***)(*(_QWORD *)ptr + 8 * v19);
      if ( v20 != (void **)-1LL )
      {
        v97 = &v179;
        v176 = -1;
        v177 = 0;
        v178 = 0;
        v175 = -1;
        do
        {
          *(_WORD *)v97 = 0;
          v97 += 40;
          *((_WORD *)v97 - 19) = 0;
          *((_WORD *)v97 - 18) = 0;
          *((_DWORD *)v97 - 2) = 0;
          *((_WORD *)v97 - 17) = 0;
          *((_OWORD *)v97 - 2) = 0;
          *((_QWORD *)v97 - 2) = 0;
        }
        while ( v181 != (_QWORD *)v97 );
        v98 = decode_insn(&v175, v20, v181, v160, 0, v135, 0.0);
        v16 = v135;
        if ( v98 )
        {
          a4 = v180;
          v99 = 0;
          v20 = (void **)v160;
          while ( 1 )
          {
            v100 = *a4;
            if ( !*a4 )
              goto LABEL_130;
            if ( v100 == 5 )
              break;
            if ( v100 == 2 )
            {
              v20 = *(void ***)&v180[40 * v99 + 15];
              sub_410440((__int64)v168, v20, (_QWORD *)(v6 + 64), v160, a6);
LABEL_180:
              v22 = *(_QWORD *)ptr;
              v16 = v135;
              goto LABEL_24;
            }
            ++v99;
            a4 += 40;
            if ( v99 == 8 )
              goto LABEL_130;
          }
          v20 = *(void ***)&v180[40 * v99 + 7];
          sub_410440((__int64)v168, v20, (_QWORD *)(v6 + 64), v160, a6);
          goto LABEL_180;
        }
LABEL_130:
        v22 = *(_QWORD *)ptr;
      }
    }
  }
  memset(v168, 0, sizeof(v168));
LABEL_24:
  if ( v22 )
  {
    v136 = v16;
    *(_QWORD *)&ptr[8] = 0;
    qfree(v22, (const char *)v20);
    v16 = v136;
  }
  v23 = _mm_load_si128((const __m128i *)v163);
  v24 = v164;
  v25 = *(_QWORD *)&v168[16];
  *(__m128i *)v163 = _mm_load_si128((const __m128i *)v168);
  v164 = *(_BYTE **)&v168[16];
  *(_QWORD *)&v168[16] = v24;
  *(__m128i *)v168 = v23;
  if ( v23.m128i_i64[0] )
  {
    if ( _InterlockedSub((volatile signed __int32 *)v23.m128i_i64[0], 1u) )
    {
      v25 = (__int64)v164;
    }
    else
    {
      v151 = v16;
      free(*(void **)v168);
      v25 = (__int64)v164;
      v16 = v151;
    }
  }
  if ( !v25 )
  {
    if ( *(_DWORD *)v6 != 3 )
      goto LABEL_133;
    v155 = v16;
    v134 = *(unsigned __int16 *)(v6 + 8);
    v95 = sub_1E73C0(0x62u);
    v107 = nullptr;
    v108 = nullptr;
    v16 = v155;
    if ( !v95 )
      goto LABEL_156;
    memset(ptr, 0, 25);
    reg_value_info = find_reg_value_info(ptr, v155, v134, 0xFFFFFFFFLL);
    v16 = v155;
    if ( !reg_value_info )
      goto LABEL_177;
    if ( (unsigned __int8)(ptr[24] - 10) <= 1u )
    {
      if ( *(_QWORD *)&ptr[8] == 1 )
      {
        v112 = **(const char ***)ptr;
        sub_410440((__int64)v165, **(void ****)ptr, (_QWORD *)(v6 + 64), v160, a6);
        goto LABEL_174;
      }
    }
    else
    {
      if ( (unsigned __int8)(ptr[24] - 12) > 1u )
      {
        if ( *(_QWORD *)&ptr[8] > 1u )
          goto LABEL_173;
        if ( (unsigned __int8)(ptr[24] - 4) <= 5u )
        {
          v112 = byte_9;
          sub_40F450((__m128i *)v165, 9, "<unknown>", v160, a6);
          goto LABEL_174;
        }
        goto LABEL_177;
      }
      if ( *(_QWORD *)&ptr[8] == 1 )
      {
        v113 = **(_QWORD **)ptr;
        memset(v167, 0, 24);
        sub_169A50(v167[0].m128i_i64, (__int64)"0x%a(SP)", -v113);
        v114 = v155;
        v115 = &s1;
        if ( v167[0].m128i_i64[1] )
        {
          v115 = (const char *)v167[0].m128i_i64[0];
          v25 = v167[0].m128i_i64[1] - 1;
        }
        if ( v115 )
        {
          if ( v25 < 0 )
          {
            v130 = v155;
            v159 = v115;
            v117 = strlen(v115);
            v115 = v159;
            v114 = v130;
            v25 = v117;
          }
        }
        else
        {
          v25 = 0;
        }
        v129 = v114;
        v116 = QT::QString::fromUtf8(v168, v25, v115);
        v112 = v168;
        sub_40C430((__m128i *)v165, (const __m128i *)v168, 25, v160, a6);
        v16 = v129;
        if ( *(_QWORD *)v168 && !_InterlockedSub(*(volatile signed __int32 **)v168, 1u) )
        {
          free(*(void **)v168);
          v16 = v129;
        }
        if ( v167[0].m128i_i64[0] )
        {
          v158 = v16;
          v167[0].m128i_i64[1] = 0;
          qfree(v167[0].m128i_i64[0], v168, v116);
          v16 = v158;
        }
        goto LABEL_175;
      }
    }
    if ( *(_QWORD *)&ptr[8] > 1u )
    {
LABEL_173:
      v112 = (_BYTE *)(&word_10 + 1);
      sub_40F450((__m128i *)v165, 17, "<multiple values>", v160, a6);
LABEL_174:
      v16 = v155;
      goto LABEL_175;
    }
LABEL_177:
    v112 = nullptr;
    v166 = nullptr;
    *(_OWORD *)v165 = 0;
LABEL_175:
    if ( *(_QWORD *)ptr )
    {
      v157 = v16;
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(_QWORD *)ptr, v112);
      v108 = v165[0];
      v107 = v165[1];
      v95 = (__int64)v166;
      v16 = v157;
    }
    else
    {
      v108 = v165[0];
      v107 = v165[1];
      v95 = (__int64)v166;
    }
LABEL_156:
    v109 = _mm_load_si128((const __m128i *)v163);
    v163[1] = v107;
    a4 = v164;
    v163[0] = v108;
    v164 = (_BYTE *)v95;
    v166 = a4;
    *(__m128i *)v165 = v109;
    if ( v109.m128i_i64[0] )
    {
      if ( _InterlockedSub((volatile signed __int32 *)v109.m128i_i64[0], 1u) )
      {
        v95 = (__int64)v164;
      }
      else
      {
        v156 = v16;
        free(v165[0]);
        v95 = (__int64)v164;
        v16 = v156;
      }
    }
    if ( !v95 )
    {
      if ( (unsigned int)find_reg_value(ptr, v16, v134) == 1 )
      {
        sub_410440((__int64)v165, *(void ***)ptr, (_QWORD *)(v6 + 64), v160, a6);
        goto LABEL_134;
      }
LABEL_133:
      v166 = nullptr;
      *(_OWORD *)v165 = 0;
LABEL_134:
      if ( v163[0] && !_InterlockedSub((volatile signed __int32 *)v163[0], 1u) )
        free(v163[0]);
      if ( !v166 )
        goto LABEL_43;
      goto LABEL_31;
    }
LABEL_119:
    v96 = _mm_load_si128((const __m128i *)v163);
    v166 = (_BYTE *)v95;
    *(__m128i *)v165 = v96;
    goto LABEL_31;
  }
  v26 = _mm_load_si128((const __m128i *)v163);
  v166 = (_BYTE *)v25;
  *(__m128i *)v165 = v26;
LABEL_31:
  if ( (v160 & 0xC) != 0 )
  {
    if ( (v160 & 1) != 0 )
    {
      v27 = QT::QString::fromUtf8(v167, 27, "<font color=\"%1\"> = </font>", a4, v9, v16);
      sub_40BAA0((__int64)v168, 9, a6);
      QT::QString::arg(ptr, v167, v168, 0, 32, v27);
      QT::QString::append(v8, (const QT::QString *)ptr);
      if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
        free(*(void **)ptr);
      if ( *(_QWORD *)v168 && !_InterlockedSub(*(volatile signed __int32 **)v168, 1u) )
        free(*(void **)v168);
      if ( v167[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v167[0].m128i_i64[0], 1u) )
        free((void *)v167[0].m128i_i64[0]);
    }
    else
    {
      QT::QString::append(v8, " = ", 3);
    }
  }
  QT::QString::append(v8, (const QT::QString *)v165);
LABEL_43:
  if ( v165[0] && !_InterlockedSub((volatile signed __int32 *)v165[0], 1u) )
    free(v165[0]);
  return v8;
}
