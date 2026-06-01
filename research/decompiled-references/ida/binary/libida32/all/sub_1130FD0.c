void __fastcall sub_1130FD0(__int64 *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbp
  char *v6; // rax
  __int64 v7; // rdx
  unsigned __int8 **v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r15
  __int64 v12; // rdx
  __m128 v13; // xmm2
  __int64 v14; // rbx
  const __m128i *v15; // r14
  __m128 *p_si128; // r13
  __int64 v17; // rsi
  __m128i v18; // xmm2
  __int64 *v19; // r13
  const __m128i *v20; // rbx
  const __m128i *v21; // rax
  __int64 *v22; // r15
  __int64 v23; // rbp
  __m128 *v24; // r14
  __int64 v25; // rsi
  const __m128i *v26; // r13
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // r15
  __int64 v30; // r14
  __int64 v31; // rbx
  const char *v32; // rax
  const char *v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int8 **v36; // r15
  unsigned __int8 **v37; // r13
  unsigned __int8 *v38; // r14
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // r15
  __int64 v42; // r13
  __int64 v43; // r14
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  _QWORD *v46; // r15
  _QWORD *v47; // r13
  __int8 v48; // al
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // r15
  _QWORD *v52; // r14
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 *v55; // r15
  __int64 v56; // r13
  __int64 v57; // rax
  unsigned __int8 **v58; // rbp
  __int64 v59; // rbx
  __int64 v60; // r13
  unsigned __int8 **v61; // r14
  __int64 v62; // rsi
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 *v65; // r15
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int8 **v68; // rbp
  __int64 v69; // rbx
  __int64 v70; // r14
  unsigned __int8 **v71; // r13
  __int64 v72; // rsi
  const char *v73; // rdi
  unsigned __int64 v74; // rax
  __int64 v75; // rdx
  _QWORD *v76; // r13
  _QWORD *v77; // r14
  __int64 *v78; // rdx
  __int64 v79; // rcx
  __int64 *v80; // r15
  __int64 v81; // rax
  unsigned __int8 **v82; // rax
  __int64 *v83; // rbx
  unsigned __int8 **v84; // r14
  unsigned __int8 **v85; // rax
  __int64 v86; // r15
  __int64 v87; // rax
  const char **v88; // rax
  char *v89; // r13
  size_t v90; // r14
  __int64 v91; // r13
  __int64 v92; // rax
  const char **v93; // rax
  char *v94; // r15
  size_t v95; // rax
  signed __int64 v96; // r14
  const char *v97; // rdi
  __int64 v98; // r13
  __m128 v99; // xmm0
  __int64 *v100; // r14
  unsigned __int8 **v101; // r12
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 *v104; // r15
  __int64 v105; // rbp
  unsigned __int8 **v106; // r13
  __int64 v107; // rsi
  __int64 v108; // r14
  __int64 (__fastcall *v109)(_QWORD *, const char *, size_t); // r13
  size_t v110; // rax
  const char *v111; // rdi
  const char *v112; // rax
  __int64 v113; // rdx
  __int64 *v114; // r13
  unsigned __int8 **v115; // r12
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 *v118; // r15
  __int64 v119; // rbp
  unsigned __int8 **v120; // r14
  __int64 v121; // rsi
  __int64 v122; // r13
  __int64 v123; // r14
  __int64 v124; // rax
  const char **v125; // rax
  const char *v126; // r15
  size_t v127; // rax
  __int64 v128; // r9
  char *v129; // rsi
  signed __int64 v130; // rdx
  int v131; // ecx
  __int64 v132; // rsi
  unsigned __int8 *v133; // rbx
  unsigned __int8 *v134; // rax
  unsigned __int8 **v135; // r15
  unsigned __int8 *v136; // r14
  unsigned __int8 *v137; // r14
  const char *v138; // rdi
  unsigned __int8 *v139; // r13
  _BOOL8 v140; // r15
  unsigned __int64 v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rbx
  __int64 v144; // rax
  _QWORD *v145; // r15
  __int64 v146; // r14
  __int64 v147; // r14
  const char *v148; // rax
  int v149; // ecx
  __int64 v150; // rsi
  void **v151; // r14
  unsigned __int8 *v152; // r13
  __int64 v153; // rdx
  unsigned __int64 v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 (__fastcall *v157)(_QWORD *, const char *, size_t); // r13
  size_t v158; // rax
  __int64 v159; // r13
  __int64 v160; // rbp
  unsigned __int8 *v161; // rbp
  unsigned __int64 v162; // rdx
  __int64 v163; // rax
  char *v164; // rsi
  unsigned __int64 v165; // rdx
  int v166; // eax
  unsigned __int64 v167; // rcx
  int v168; // eax
  __int64 v169; // rax
  __int64 v170; // r14
  __int64 v171; // rdx
  __int64 v172; // r14
  __int64 v173; // rbx
  void *v174; // rdi
  __int64 v175; // rax
  __int64 v176; // r15
  __int64 v177; // rcx
  __int64 v178; // r15
  __int64 v179; // r14
  _QWORD *v180; // r12
  __int64 v181; // rbp
  __int64 v182; // rbx
  void *v183; // rdi
  unsigned __int64 v184; // rdx
  int v185; // eax
  __int64 v186; // rax
  __int64 v187; // r12
  __int64 v188; // r13
  __int64 v189; // r12
  void *v190; // rdi
  __m128i v192; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int8 **v193; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD *v194; // [rsp+28h] [rbp-E0h]
  __int64 *v195; // [rsp+30h] [rbp-D8h]
  int v196; // [rsp+38h] [rbp-D0h]
  char v197; // [rsp+3Fh] [rbp-C9h]
  char *v198; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v199; // [rsp+48h] [rbp-C0h]
  char *v200; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v201; // [rsp+58h] [rbp-B0h]
  void *v202[2]; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v203; // [rsp+70h] [rbp-98h]
  __m128 si128; // [rsp+80h] [rbp-88h] BYREF
  __m128i v205; // [rsp+90h] [rbp-78h]
  _OWORD v206[6]; // [rsp+A0h] [rbp-68h] BYREF

  v5 = (_QWORD *)a3;
  v194 = a2;
  v195 = (__int64 *)&v198;
  v198 = nullptr;
  v199 = 0;
  v200 = nullptr;
  v201 = 0;
  sub_112F190(a3, a2, (const char **)&v198, &v200);
  v6 = sub_112FCA0(v200, v201);
  LOBYTE(v196) = 0;
  v201 = v7;
  v200 = v6;
  if ( v7 == 2 )
    LOBYTE(v196) = *(_WORD *)v200 == 13366;
  v8 = (unsigned __int8 **)&si128;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2385930);
  v205 = _mm_load_si128((const __m128i *)&xmmword_2385940);
  v9 = sub_2193060(v5, &si128, 8);
  v10 = v5[1];
  v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
  v12 = v10 + 8 * HIDWORD(v9);
  *(__m128i *)v202 = _mm_load_si128((const __m128i *)&xmmword_2385930);
  v192.m128i_i64[0] = v12;
  v203 = _mm_load_si128((const __m128i *)&xmmword_2385940);
  v205 = *(__m128i *)v202;
  v13 = _mm_loadh_ps((const double *)v192.m128i_i64);
  v206[0] = v203;
  si128 = v13;
  if ( v11 != (_QWORD *)v12 )
  {
    v192.m128i_i64[1] = (__int64)v5;
    v14 = v12;
    v192.m128i_i64[0] = (__int64)v206;
    do
    {
      v15 = (const __m128i *)*v11;
      p_si128 = &si128;
      if ( *v11 )
      {
        do
        {
          v17 = p_si128[1].m128_u32[0];
          if ( !(_DWORD)v17 )
            break;
          if ( (unsigned __int8)sub_2195AD0(v15, v17) )
          {
            v12 = v14;
            v8 = (unsigned __int8 **)&si128;
            v192.m128i_i64[0] = v12;
            v5 = (_QWORD *)v192.m128i_i64[1];
            si128 = _mm_loadh_ps((const double *)v192.m128i_i64);
            if ( (_QWORD *)v12 != v11 )
              goto LABEL_12;
            goto LABEL_107;
          }
          p_si128 = (__m128 *)((char *)p_si128 + 4);
        }
        while ( p_si128 != (__m128 *)v192.m128i_i64[0] );
      }
      si128.m128_u64[0] = (unsigned __int64)++v11;
    }
    while ( (_QWORD *)v14 != v11 );
    v12 = v14;
    v8 = (unsigned __int8 **)&si128;
    v5 = (_QWORD *)v192.m128i_i64[1];
    v192.m128i_i64[0] = v12;
    v18 = _mm_loadl_epi64(&v192);
    v13 = (__m128)_mm_unpacklo_epi64(v18, v18);
  }
  si128 = v13;
  if ( (_QWORD *)v12 == v11 )
  {
LABEL_107:
    v26 = nullptr;
    LOBYTE(v193) = 0;
    v197 = 0;
  }
  else
  {
LABEL_12:
    v192.m128i_i64[0] = (__int64)v5;
    v19 = (__int64 *)v12;
    v193 = (unsigned __int8 **)v206;
    v192.m128i_i64[1] = a4;
LABEL_13:
    v20 = (const __m128i *)*v11;
    v21 = *(const __m128i **)(*v11 + 16LL);
    if ( !v21 )
      v21 = (const __m128i *)*v11;
    v22 = v11 + 1;
    v21[2].m128i_i8[12] |= 1u;
    for ( si128.m128_u64[0] = (unsigned __int64)v22; v19 != v22; si128.m128_u64[0] = (unsigned __int64)v22 )
    {
      v23 = *v22;
      v24 = &si128;
      if ( *v22 )
      {
        do
        {
          v25 = v24[1].m128_u32[0];
          if ( !(_DWORD)v25 )
            break;
          if ( (unsigned __int8)sub_2195AD0(v23, v25) )
          {
            v11 = (_QWORD *)si128.m128_u64[0];
            if ( v19 != (__int64 *)si128.m128_u64[0] )
              goto LABEL_13;
            goto LABEL_21;
          }
          v24 = (__m128 *)((char *)v24 + 4);
        }
        while ( v24 != (__m128 *)v193 );
      }
      ++v22;
    }
LABEL_21:
    v26 = v20;
    v8 = (unsigned __int8 **)&si128;
    a4 = v192.m128i_i64[1];
    v5 = (_QWORD *)v192.m128i_i64[0];
    si128 = (__m128)_mm_loadu_si128(v26);
    if ( (unsigned __int8)sub_2195AD0(&si128, 1278)
      || (unsigned __int8)sub_2195AD0(&si128, 1279)
      || (unsigned __int8)sub_2195AD0(&si128, 1280) )
    {
      LOBYTE(v193) = 1;
    }
    else
    {
      LOBYTE(v193) = sub_2195AD0(&si128, 1281);
    }
    if ( (unsigned __int8)sub_2195AD0(&si128, 1607)
      || (unsigned __int8)sub_2195AD0(&si128, 1608)
      || (unsigned __int8)sub_2195AD0(&si128, 1609) )
    {
      v197 = 1;
    }
    else
    {
      v197 = sub_2195AD0(&si128, 1610);
    }
  }
  si128.m128_u64[0] = 0x9CD000008AFLL;
  v27 = sub_2193060(v5, &si128, 2);
  v28 = v5[1];
  v205.m128i_i64[0] = 0x9CD000008AFLL;
  v29 = (__int64 *)(v28 + 8LL * (unsigned int)v27);
  v30 = v28 + 8 * HIDWORD(v27);
  v192.m128i_i64[0] = v30;
  si128 = _mm_loadh_ps((const double *)v192.m128i_i64);
  if ( v29 == (__int64 *)v30 )
    goto LABEL_32;
  v192.m128i_i64[0] = (__int64)&si128;
  while ( 1 )
  {
    v31 = *v29;
    if ( *v29 )
    {
      if ( (unsigned __int8)sub_2195AD0(*v29, 2223) || (unsigned __int8)sub_2195AD0(v31, 2509) )
        break;
    }
    si128.m128_u64[0] = (unsigned __int64)++v29;
    if ( (__int64 *)v30 == v29 )
    {
      v8 = (unsigned __int8 **)v192.m128i_i64[0];
      goto LABEL_32;
    }
  }
  v8 = (unsigned __int8 **)v192.m128i_i64[0];
  v192.m128i_i64[0] = v30;
  v205.m128i_i64[0] = 0x9CD000008AFLL;
  si128 = _mm_loadh_ps((const double *)v192.m128i_i64);
  if ( v29 == (__int64 *)v30 )
  {
LABEL_32:
    v192.m128i_i64[1] = 0;
    goto LABEL_33;
  }
  v78 = v29;
  do
  {
    v79 = *v78;
    v80 = v78 + 1;
    v81 = *(_QWORD *)(*v78 + 16);
    v192.m128i_i64[1] = *v78;
    if ( !v81 )
      v81 = v79;
    *(_BYTE *)(v81 + 44) |= 1u;
    si128.m128_u64[0] = (unsigned __int64)(v78 + 1);
    if ( v80 == (__int64 *)v30 )
      break;
    v82 = v8;
    v83 = (__int64 *)v30;
    v84 = v82;
    while ( 1 )
    {
      if ( *v80 )
      {
        v192.m128i_i64[0] = *v80;
        if ( (unsigned __int8)sub_2195AD0(v192.m128i_i64[0], 2223)
          || (unsigned __int8)sub_2195AD0(v192.m128i_i64[0], 2509) )
        {
          break;
        }
      }
      si128.m128_u64[0] = (unsigned __int64)++v80;
      if ( v83 == v80 )
      {
        v8 = v84;
        goto LABEL_96;
      }
    }
    v78 = (__int64 *)si128.m128_u64[0];
    v85 = v84;
    v30 = (__int64)v83;
    v8 = v85;
  }
  while ( v30 != si128.m128_u64[0] );
LABEL_96:
  v192.m128i_i8[0] = sub_2195AD0(v192.m128i_i64[1], 2223);
  if ( v192.m128i_i8[0] )
  {
LABEL_33:
    if ( (_BYTE)v193 && (_BYTE)v196 )
    {
      v151 = v202;
      sub_FA3370((__int64)v8, *a1, 0, 610);
      sub_21922B0(v202, v26, v5);
      sub_AC84E0(v8, (_BYTE *)v202[0], (signed __int64)v202[1]);
      v152 = (unsigned __int8 *)si128.m128_u64[0];
      v153 = v192.m128i_i64[1] != 0;
      if ( !si128.m128_u64[0] )
      {
        v167 = si128.m128_u64[1];
        v168 = *(_DWORD *)(si128.m128_u64[1] + 14976);
        if ( v168 )
        {
          v175 = (unsigned int)(v168 - 1);
          *(_DWORD *)(si128.m128_u64[1] + 14976) = v175;
          v152 = *(unsigned __int8 **)(v167 + 8 * v175 + 14848);
          v176 = *((unsigned int *)v152 + 134);
          *v152 = 0;
          v177 = *((_QWORD *)v152 + 66);
          *((_DWORD *)v152 + 106) = 0;
          v178 = v177 + (v176 << 6);
          if ( v177 != v178 )
          {
            v192.m128i_i64[0] = (__int64)v202;
            v179 = a4;
            v180 = v5;
            v181 = v153;
            v193 = v8;
            v182 = v177;
            do
            {
              while ( 1 )
              {
                v178 -= 64;
                v183 = *(void **)(v178 + 24);
                if ( v183 == (void *)(v178 + 40) )
                  break;
                operator delete(v183);
                if ( v182 == v178 )
                  goto LABEL_284;
              }
            }
            while ( v182 != v178 );
LABEL_284:
            v153 = v181;
            v8 = v193;
            v5 = v180;
            a4 = v179;
            v151 = (void **)v192.m128i_i64[0];
          }
          *((_DWORD *)v152 + 134) = 0;
        }
        else
        {
          v192.m128i_i64[0] = v192.m128i_i64[1] != 0;
          v152 = (unsigned __int8 *)operator new(0x3A0u);
          *v152 = 0;
          *((_QWORD *)v152 + 12) = v152 + 112;
          *((_QWORD *)v152 + 16) = v152 + 144;
          *((_QWORD *)v152 + 20) = v152 + 176;
          *((_QWORD *)v152 + 24) = v152 + 208;
          *((_QWORD *)v152 + 28) = v152 + 240;
          *((_QWORD *)v152 + 32) = v152 + 272;
          *((_QWORD *)v152 + 36) = v152 + 304;
          *((_QWORD *)v152 + 40) = v152 + 336;
          *((_QWORD *)v152 + 44) = v152 + 368;
          *((_QWORD *)v152 + 48) = v152 + 400;
          *((_QWORD *)v152 + 52) = v152 + 432;
          *((_QWORD *)v152 + 13) = 0;
          v152[112] = 0;
          *((_QWORD *)v152 + 17) = 0;
          v152[144] = 0;
          *((_QWORD *)v152 + 21) = 0;
          v152[176] = 0;
          *((_QWORD *)v152 + 25) = 0;
          v152[208] = 0;
          *((_QWORD *)v152 + 29) = 0;
          v152[240] = 0;
          *((_QWORD *)v152 + 33) = 0;
          v152[272] = 0;
          *((_QWORD *)v152 + 37) = 0;
          v152[304] = 0;
          *((_QWORD *)v152 + 41) = 0;
          v152[336] = 0;
          *((_QWORD *)v152 + 45) = 0;
          v152[368] = 0;
          *((_QWORD *)v152 + 49) = 0;
          v152[400] = 0;
          *((_QWORD *)v152 + 53) = 0x800000000LL;
          v153 = v192.m128i_i64[0];
          *((_QWORD *)v152 + 66) = v152 + 544;
          *((_QWORD *)v152 + 67) = 0x600000000LL;
        }
        si128.m128_u64[0] = (unsigned __int64)v152;
      }
      v152[*v152 + 1] = 2;
      v154 = si128.m128_u64[0];
      v155 = *(unsigned __int8 *)si128.m128_u64[0];
      *(_BYTE *)si128.m128_u64[0] = v155 + 1;
      *(_QWORD *)(v154 + 8 * v155 + 16) = v153;
      if ( v202[0] != v151 + 2 )
        operator delete(v202[0]);
      sub_AC6300((__int64)v8);
    }
    v32 = v198;
    v192.m128i_i8[0] = 1;
    if ( v199 != 5 )
      goto LABEL_36;
    goto LABEL_100;
  }
  if ( v197 )
  {
    sub_FA3370((__int64)v8, *a1, 0, 492);
    sub_AC6300((__int64)v8);
  }
  v32 = v198;
  if ( v199 != 5 )
    goto LABEL_103;
LABEL_100:
  if ( *(_DWORD *)v32 == 808793705 && v32[4] == 48 || *(_DWORD *)v32 == 808728169 && v32[4] == 48 )
  {
    si128.m128_u64[1] = 4;
    si128.m128_u64[0] = (unsigned __int64)"+msa";
    sub_1115760(a4, (__int64 *)v8);
  }
  if ( !v192.m128i_i8[0] )
  {
LABEL_103:
    v33 = "+noabicalls";
    goto LABEL_37;
  }
LABEL_36:
  v33 = "-noabicalls";
LABEL_37:
  si128.m128_u64[0] = (unsigned __int64)v33;
  si128.m128_u64[1] = 11;
  sub_1115760(a4, (__int64 *)v8);
  si128.m128_u64[0] = 0xA49000009A3LL;
  v34 = sub_2193060(v5, v8, 2);
  v35 = v5[1];
  v205.m128i_i64[0] = 0xA49000009A3LL;
  v36 = (unsigned __int8 **)(v35 + 8LL * (unsigned int)v34);
  v37 = (unsigned __int8 **)(v35 + 8 * HIDWORD(v34));
  v193 = v37;
  si128 = _mm_loadh_ps((const double *)&v193);
  if ( v36 != v37 )
  {
    while ( 1 )
    {
      v38 = *v36;
      if ( *v36 )
      {
        if ( (unsigned __int8)sub_2195AD0(*v36, 2467) || (unsigned __int8)sub_2195AD0(v38, 2633) )
          break;
      }
      si128.m128_u64[0] = (unsigned __int64)++v36;
      if ( v37 == v36 )
        goto LABEL_42;
    }
    v193 = v37;
    v205.m128i_i64[0] = 0xA49000009A3LL;
    si128 = _mm_loadh_ps((const double *)&v193);
    if ( v37 != v36 )
    {
      v193 = v8;
      do
      {
        v133 = *v36;
        v134 = *((unsigned __int8 **)*v36 + 2);
        if ( !v134 )
          v134 = *v36;
        v135 = v36 + 1;
        v134[44] |= 1u;
        si128.m128_u64[0] = (unsigned __int64)v135;
        if ( v135 == v37 )
          break;
        while ( 1 )
        {
          v136 = *v135;
          if ( *v135 )
          {
            if ( (unsigned __int8)sub_2195AD0(*v135, 2467) || (unsigned __int8)sub_2195AD0(v136, 2633) )
              break;
          }
          si128.m128_u64[0] = (unsigned __int64)++v135;
          if ( v37 == v135 )
            goto LABEL_195;
        }
        v36 = (unsigned __int8 **)si128.m128_u64[0];
      }
      while ( v37 != (unsigned __int8 **)si128.m128_u64[0] );
LABEL_195:
      v137 = v133;
      v8 = v193;
      v138 = "-long-calls";
      if ( !(unsigned __int8)sub_2195AD0(v137, 2633) )
      {
        if ( v192.m128i_i8[0] )
        {
          sub_FA3370((__int64)v8, *a1, 0, 603);
          v139 = (unsigned __int8 *)si128.m128_u64[0];
          v140 = v192.m128i_i64[1] == 0;
          if ( !si128.m128_u64[0] )
          {
            v165 = si128.m128_u64[1];
            v166 = *(_DWORD *)(si128.m128_u64[1] + 14976);
            if ( v166 )
            {
              v169 = (unsigned int)(v166 - 1);
              *(_DWORD *)(si128.m128_u64[1] + 14976) = v169;
              v139 = *(unsigned __int8 **)(v165 + 8 * v169 + 14848);
              v170 = *((unsigned int *)v139 + 134);
              *v139 = 0;
              v171 = *((_QWORD *)v139 + 66);
              *((_DWORD *)v139 + 106) = 0;
              v172 = v171 + (v170 << 6);
              if ( v171 != v172 )
              {
                v192.m128i_i64[0] = (__int64)v8;
                v173 = v171;
                do
                {
                  while ( 1 )
                  {
                    v172 -= 64;
                    v174 = *(void **)(v172 + 24);
                    if ( v174 == (void *)(v172 + 40) )
                      break;
                    operator delete(v174);
                    if ( v173 == v172 )
                      goto LABEL_276;
                  }
                }
                while ( v173 != v172 );
LABEL_276:
                v8 = (unsigned __int8 **)v192.m128i_i64[0];
              }
              *((_DWORD *)v139 + 134) = 0;
            }
            else
            {
              v139 = (unsigned __int8 *)operator new(0x3A0u);
              *v139 = 0;
              *((_QWORD *)v139 + 12) = v139 + 112;
              *((_QWORD *)v139 + 16) = v139 + 144;
              *((_QWORD *)v139 + 20) = v139 + 176;
              *((_QWORD *)v139 + 24) = v139 + 208;
              *((_QWORD *)v139 + 28) = v139 + 240;
              *((_QWORD *)v139 + 32) = v139 + 272;
              *((_QWORD *)v139 + 36) = v139 + 304;
              *((_QWORD *)v139 + 40) = v139 + 336;
              *((_QWORD *)v139 + 44) = v139 + 368;
              *((_QWORD *)v139 + 48) = v139 + 400;
              *((_QWORD *)v139 + 52) = v139 + 432;
              *((_QWORD *)v139 + 13) = 0;
              v139[112] = 0;
              *((_QWORD *)v139 + 17) = 0;
              v139[144] = 0;
              *((_QWORD *)v139 + 21) = 0;
              v139[176] = 0;
              *((_QWORD *)v139 + 25) = 0;
              v139[208] = 0;
              *((_QWORD *)v139 + 29) = 0;
              v139[240] = 0;
              *((_QWORD *)v139 + 33) = 0;
              v139[272] = 0;
              *((_QWORD *)v139 + 37) = 0;
              v139[304] = 0;
              *((_QWORD *)v139 + 41) = 0;
              v139[336] = 0;
              *((_QWORD *)v139 + 45) = 0;
              v139[368] = 0;
              *((_QWORD *)v139 + 49) = 0;
              v139[400] = 0;
              *((_QWORD *)v139 + 53) = 0x800000000LL;
              *((_QWORD *)v139 + 66) = v139 + 544;
              *((_QWORD *)v139 + 67) = 0x600000000LL;
            }
            si128.m128_u64[0] = (unsigned __int64)v139;
          }
          v139[*v139 + 1] = 2;
          v141 = si128.m128_u64[0];
          v142 = *(unsigned __int8 *)si128.m128_u64[0];
          *(_BYTE *)si128.m128_u64[0] = v142 + 1;
          *(_QWORD *)(v141 + 8 * v142 + 16) = v140;
          sub_AC6300((__int64)v8);
          goto LABEL_42;
        }
        v138 = "+long-calls";
      }
      si128.m128_u64[0] = (unsigned __int64)v138;
      si128.m128_u64[1] = j__strlen(v138);
      sub_1115760(a4, (__int64 *)v8);
    }
  }
LABEL_42:
  si128.m128_u64[0] = 0xAD200000BA2LL;
  v39 = sub_2193060(v5, v8, 2);
  v40 = v5[1];
  v205.m128i_i64[0] = 0xAD200000BA2LL;
  v41 = (_QWORD *)(v40 + 8LL * (unsigned int)v39);
  v42 = v40 + 8 * HIDWORD(v39);
  v192.m128i_i64[0] = v42;
  si128 = _mm_loadh_ps((const double *)v192.m128i_i64);
  if ( v41 != (_QWORD *)v42 )
  {
    while ( 1 )
    {
      v43 = *v41;
      if ( *v41 )
      {
        if ( (unsigned __int8)sub_2195AD0(*v41, 2978) || (unsigned __int8)sub_2195AD0(v43, 2770) )
          break;
      }
      si128.m128_u64[0] = (unsigned __int64)++v41;
      if ( (_QWORD *)v42 == v41 )
        goto LABEL_47;
    }
    v192.m128i_i64[0] = v42;
    v205.m128i_i64[0] = 0xAD200000BA2LL;
    si128 = _mm_loadh_ps((const double *)v192.m128i_i64);
    if ( v41 != (_QWORD *)v42 )
    {
      v192.m128i_i64[0] = (__int64)v8;
      do
      {
        v143 = *v41;
        v144 = *(_QWORD *)(*v41 + 16LL);
        if ( !v144 )
          v144 = *v41;
        v145 = v41 + 1;
        *(_BYTE *)(v144 + 44) |= 1u;
        si128.m128_u64[0] = (unsigned __int64)v145;
        if ( v145 == (_QWORD *)v42 )
          break;
        while ( 1 )
        {
          v146 = *v145;
          if ( *v145 )
          {
            if ( (unsigned __int8)sub_2195AD0(*v145, 2978) || (unsigned __int8)sub_2195AD0(v146, 2770) )
              break;
          }
          si128.m128_u64[0] = (unsigned __int64)++v145;
          if ( (_QWORD *)v42 == v145 )
            goto LABEL_210;
        }
        v41 = (_QWORD *)si128.m128_u64[0];
      }
      while ( v42 != si128.m128_u64[0] );
LABEL_210:
      v147 = v143;
      v8 = (unsigned __int8 **)v192.m128i_i64[0];
      if ( (unsigned __int8)sub_2195AD0(v147, 2978) )
        v148 = "+xgot";
      else
        v148 = "-xgot";
      si128.m128_u64[0] = (unsigned __int64)v148;
      si128.m128_u64[1] = 5;
      sub_1115760(a4, (__int64 *)v8);
    }
  }
LABEL_47:
  v196 = sub_112FCF0(a1, (__int64)v5, (__int64)v194);
  if ( v196 == 1 )
  {
    si128.m128_u64[0] = (unsigned __int64)"+soft-float";
    si128.m128_u64[1] = j__strlen("+soft-float");
    sub_1115760(a4, (__int64 *)v8);
  }
  si128.m128_i32[0] = 2505;
  v44 = sub_2193060(v5, v8, 1);
  v45 = v5[1];
  v46 = (_QWORD *)(v45 + 8LL * (unsigned int)v44);
  v47 = (_QWORD *)(v45 + 8 * HIDWORD(v44));
  if ( v46 == v47 )
    goto LABEL_53;
  while ( 1 )
  {
    if ( *v46 )
    {
      v48 = sub_2195AD0(*v46, 2505);
      if ( v48 )
        break;
    }
    if ( v47 == ++v46 )
      goto LABEL_53;
  }
  v192.m128i_i8[0] = v48;
  if ( v46 == v47 )
    goto LABEL_53;
  do
  {
    v123 = *v46;
    v124 = *(_QWORD *)(*v46 + 16LL);
    if ( !v124 )
      v124 = *v46;
    ++v46;
    *(_BYTE *)(v124 + 44) |= 1u;
    if ( v46 == v47 )
      break;
    while ( !*v46 || !(unsigned __int8)sub_2195AD0(*v46, 2505) )
    {
      if ( v47 == ++v46 )
        goto LABEL_176;
    }
  }
  while ( v46 != v47 );
LABEL_176:
  v125 = *(const char ***)(v123 + 48);
  v126 = *v125;
  if ( !*v125 )
  {
    v128 = 0;
    goto LABEL_179;
  }
  v127 = strlen(*v125);
  v128 = v127;
  if ( v127 != 4 )
  {
    if ( v127 != 6 || *(_DWORD *)v126 != 1634166124 || *((_WORD *)v126 + 2) != 31075 )
      goto LABEL_179;
    if ( (sub_1130480(v195) & 1) != 0 )
    {
      si128.m128_u64[0] = (unsigned __int64)"-nan2008";
      si128.m128_u64[1] = j__strlen("-nan2008");
      sub_1115760(a4, (__int64 *)v8);
      v192.m128i_i8[0] = 0;
      goto LABEL_54;
    }
    si128.m128_u64[0] = (unsigned __int64)"+nan2008";
    si128.m128_u64[1] = j__strlen("+nan2008");
    sub_1115760(a4, (__int64 *)v8);
    v131 = 632;
    v132 = *a1;
LABEL_183:
    sub_FA3370((__int64)v8, v132, 0, v131);
    v129 = v198;
    v130 = v199;
    goto LABEL_180;
  }
  if ( *(_DWORD *)v126 == 942682162 )
  {
    if ( (sub_1130480(v195) & 2) != 0 )
    {
      si128.m128_u64[0] = (unsigned __int64)"+nan2008";
      si128.m128_u64[1] = j__strlen("+nan2008");
      sub_1115760(a4, (__int64 *)v8);
      goto LABEL_54;
    }
    si128.m128_u64[0] = (unsigned __int64)"-nan2008";
    si128.m128_u64[1] = j__strlen("-nan2008");
    sub_1115760(a4, (__int64 *)v8);
    v131 = 631;
    v132 = *a1;
    goto LABEL_183;
  }
LABEL_179:
  v192.m128i_i64[0] = v128;
  sub_FA3370((__int64)v8, *a1, 0, 497);
  sub_AC84E0(v8, *(_BYTE **)(v123 + 24), *(_QWORD *)(v123 + 32));
  v129 = (char *)v126;
  v130 = v192.m128i_i64[0];
LABEL_180:
  sub_AC84E0(v8, v129, v130);
  sub_AC6300((__int64)v8);
LABEL_53:
  v192.m128i_i8[0] = 0;
LABEL_54:
  si128.m128_i32[0] = 2224;
  v49 = sub_2193060(v5, v8, 1);
  v50 = v5[1];
  v51 = (_QWORD *)(v50 + 8LL * (unsigned int)v49);
  v52 = (_QWORD *)(v50 + 8 * HIDWORD(v49));
  if ( v51 == v52 )
    goto LABEL_58;
  while ( !*v51 || !(unsigned __int8)sub_2195AD0(*v51, 2224) )
  {
    if ( v52 == ++v51 )
      goto LABEL_58;
  }
  if ( v51 == v52 )
  {
LABEL_58:
    if ( !v192.m128i_i8[0] )
      goto LABEL_59;
    goto LABEL_132;
  }
  do
  {
    v91 = *v51;
    v92 = *(_QWORD *)(*v51 + 16LL);
    if ( !v92 )
      v92 = *v51;
    ++v51;
    *(_BYTE *)(v92 + 44) |= 1u;
    if ( v51 == v52 )
      break;
    while ( !*v51 || !(unsigned __int8)sub_2195AD0(*v51, 2224) )
    {
      if ( v52 == ++v51 )
        goto LABEL_128;
    }
  }
  while ( v52 != v51 );
LABEL_128:
  v93 = *(const char ***)(v91 + 48);
  v94 = (char *)*v93;
  if ( !*v93 )
  {
    v96 = 0;
    goto LABEL_135;
  }
  v95 = strlen(*v93);
  v96 = v95;
  if ( v95 == 4 )
  {
    if ( *(_DWORD *)v94 == 942682162 )
    {
      if ( (sub_1130480(v195) & 2) != 0 )
      {
LABEL_132:
        v97 = "+abs2008";
LABEL_133:
        si128.m128_u64[0] = (unsigned __int64)v97;
        si128.m128_u64[1] = j__strlen(v97);
        sub_1115760(a4, (__int64 *)v8);
        goto LABEL_59;
      }
      si128.m128_u64[0] = (unsigned __int64)"-abs2008";
      si128.m128_u64[1] = j__strlen("-abs2008");
      sub_1115760(a4, (__int64 *)v8);
      v149 = 627;
      v150 = *a1;
      goto LABEL_244;
    }
LABEL_135:
    sub_FA3370((__int64)v8, *a1, 0, 497);
    sub_AC84E0(v8, *(_BYTE **)(v91 + 24), *(_QWORD *)(v91 + 32));
    sub_AC84E0(v8, v94, v96);
    sub_AC6300((__int64)v8);
    goto LABEL_59;
  }
  if ( v95 != 6 || *(_DWORD *)v94 != 1634166124 || *((_WORD *)v94 + 2) != 31075 )
    goto LABEL_135;
  v97 = "-abs2008";
  if ( (sub_1130480(v195) & 1) != 0 )
    goto LABEL_133;
  si128.m128_u64[0] = (unsigned __int64)"+abs2008";
  si128.m128_u64[1] = j__strlen("+abs2008");
  sub_1115760(a4, (__int64 *)v8);
  v149 = 628;
  v150 = *a1;
LABEL_244:
  sub_FA3370((__int64)v8, v150, 0, v149);
  sub_AC84E0(v8, v198, v199);
  sub_AC6300((__int64)v8);
LABEL_59:
  sub_119EC50(v5, a4, 2867, 2338, "single-float", 12);
  sub_119EC50(v5, a4, 2432, 2645, "mips16", 6);
  sub_119EC50(v5, a4, 2488, 2644, "micromips", 9);
  sub_119EC50(v5, a4, 2341, 2582, "dsp", 3);
  sub_119EC50(v5, a4, 2340, 2581, "dspr2", 5);
  sub_119EC50(v5, a4, 2498, 2655, "msa", 3);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2385900);
  v53 = sub_2193060(v5, v8, 4);
  v54 = v5[1];
  v55 = (__int64 *)(v54 + 8LL * (unsigned int)v53);
  v56 = v54 + 8 * HIDWORD(v53);
  v205 = _mm_load_si128((const __m128i *)&xmmword_2385900);
  v192.m128i_i64[0] = v56;
  si128 = _mm_loadh_ps((const double *)v192.m128i_i64);
  if ( v55 != (__int64 *)v56 )
  {
    v57 = (__int64)(v8 + 2);
    v192.m128i_i64[0] = (__int64)v5;
    v58 = v8;
    v59 = v56;
    v192.m128i_i64[1] = v57;
    do
    {
      v60 = *v55;
      v61 = v58;
      if ( *v55 )
      {
        do
        {
          v62 = *((unsigned int *)v61 + 4);
          if ( !(_DWORD)v62 )
            break;
          if ( (unsigned __int8)sub_2195AD0(v60, v62) )
          {
            v98 = v59;
            v8 = v58;
            v5 = (_QWORD *)v192.m128i_i64[0];
            v192.m128i_i64[0] = v98;
            v99 = _mm_loadh_ps((const double *)v192.m128i_i64);
            v205 = _mm_load_si128((const __m128i *)&xmmword_2385900);
            si128 = v99;
            if ( v55 != (__int64 *)v98 )
            {
              v192.m128i_i64[0] = (__int64)v5;
              v100 = (__int64 *)v98;
              v193 = v8 + 2;
              v192.m128i_i64[1] = a4;
              v101 = v8;
LABEL_140:
              v102 = *v55;
              v103 = *(_QWORD *)(*v55 + 16);
              if ( !v103 )
                v103 = *v55;
              v104 = v55 + 1;
              *(_BYTE *)(v103 + 44) |= 1u;
              for ( si128.m128_u64[0] = (unsigned __int64)v104; v100 != v104; si128.m128_u64[0] = (unsigned __int64)v104 )
              {
                v105 = *v104;
                v106 = v101;
                if ( *v104 )
                {
                  do
                  {
                    v107 = *((unsigned int *)v106 + 4);
                    if ( !(_DWORD)v107 )
                      break;
                    if ( (unsigned __int8)sub_2195AD0(v105, v107) )
                    {
                      v55 = (__int64 *)si128.m128_u64[0];
                      if ( v100 != (__int64 *)si128.m128_u64[0] )
                        goto LABEL_140;
                      goto LABEL_148;
                    }
                    v106 = (unsigned __int8 **)((char *)v106 + 4);
                  }
                  while ( v193 != v106 );
                }
                ++v104;
              }
LABEL_148:
              v108 = v102;
              v8 = v101;
              a4 = v192.m128i_i64[1];
              v5 = (_QWORD *)v192.m128i_i64[0];
              if ( (unsigned __int8)sub_2195AD0(v108, 2895) || (unsigned __int8)sub_2195AD0(v108, 2746) )
              {
                v109 = *(__int64 (__fastcall **)(_QWORD *, const char *, size_t))(*v5 + 16LL);
                v110 = j__strlen("+strict-align");
                v111 = (const char *)v109(v5, "+strict-align", v110);
                si128.m128_u64[0] = (unsigned __int64)v111;
                v112 = nullptr;
                if ( v111 )
                  v112 = (const char *)strlen(v111);
              }
              else
              {
                v157 = *(__int64 (__fastcall **)(_QWORD *, const char *, size_t))(*v5 + 16LL);
                v158 = j__strlen("-strict-align");
                v112 = (const char *)v157(v5, "-strict-align", v158);
                si128.m128_u64[0] = (unsigned __int64)v112;
                if ( v112 )
                  v112 = (const char *)j__strlen(v112);
              }
              si128.m128_u64[1] = (unsigned __int64)v112;
              sub_1115760(a4, (__int64 *)v8);
            }
            goto LABEL_67;
          }
          v61 = (unsigned __int8 **)((char *)v61 + 4);
        }
        while ( v61 != (unsigned __int8 **)v192.m128i_i64[1] );
      }
      si128.m128_u64[0] = (unsigned __int64)++v55;
    }
    while ( (__int64 *)v59 != v55 );
    v8 = v58;
    v5 = (_QWORD *)v192.m128i_i64[0];
  }
LABEL_67:
  si128.m128_u64[0] = 0x95000000949LL;
  si128.m128_i32[2] = 2378;
  v63 = sub_2193060(v5, v8, 3);
  v64 = v5[1];
  v205.m128i_i64[0] = 0x95000000949LL;
  v205.m128i_i32[2] = 2378;
  v65 = (__int64 *)(v64 + 8LL * (unsigned int)v63);
  v66 = v64 + 8 * HIDWORD(v63);
  v192.m128i_i64[0] = v66;
  si128 = _mm_loadh_ps((const double *)v192.m128i_i64);
  if ( v65 != (__int64 *)v66 )
  {
    v67 = (__int64)v8 + 12;
    v192.m128i_i64[0] = (__int64)v5;
    v68 = v8;
    v69 = v66;
    v192.m128i_i64[1] = v67;
    do
    {
      v70 = *v65;
      v71 = v68;
      if ( *v65 )
      {
        do
        {
          v72 = *((unsigned int *)v71 + 4);
          if ( !(_DWORD)v72 )
            break;
          if ( (unsigned __int8)sub_2195AD0(v70, v72) )
          {
            v113 = v69;
            v8 = v68;
            v5 = (_QWORD *)v192.m128i_i64[0];
            v192.m128i_i64[0] = v113;
            v205.m128i_i64[0] = 0x95000000949LL;
            v205.m128i_i32[2] = 2378;
            si128 = _mm_loadh_ps((const double *)v192.m128i_i64);
            if ( (__int64 *)v113 == v65 )
              goto LABEL_75;
            v192.m128i_i64[0] = (__int64)v5;
            v114 = (__int64 *)v113;
            v193 = (unsigned __int8 **)((char *)v8 + 12);
            v192.m128i_i64[1] = a4;
            v115 = v8;
LABEL_157:
            v116 = *v65;
            v117 = *(_QWORD *)(*v65 + 16);
            if ( !v117 )
              v117 = *v65;
            v118 = v65 + 1;
            *(_BYTE *)(v117 + 44) |= 1u;
            for ( si128.m128_u64[0] = (unsigned __int64)v118; v114 != v118; si128.m128_u64[0] = (unsigned __int64)v118 )
            {
              v119 = *v118;
              v120 = v115;
              if ( *v118 )
              {
                do
                {
                  v121 = *((unsigned int *)v120 + 4);
                  if ( !(_DWORD)v121 )
                    break;
                  if ( (unsigned __int8)sub_2195AD0(v119, v121) )
                  {
                    v65 = (__int64 *)si128.m128_u64[0];
                    if ( (__int64 *)si128.m128_u64[0] != v114 )
                      goto LABEL_157;
                    goto LABEL_165;
                  }
                  v120 = (unsigned __int8 **)((char *)v120 + 4);
                }
                while ( v193 != v120 );
              }
              ++v118;
            }
LABEL_165:
            v122 = v116;
            v8 = v115;
            a4 = v192.m128i_i64[1];
            v5 = (_QWORD *)v192.m128i_i64[0];
            if ( (unsigned __int8)sub_2195AD0(v122, 2377) )
            {
              si128.m128_u64[1] = 5;
              si128.m128_u64[0] = (unsigned __int64)"-fp64";
              sub_1115760(a4, (__int64 *)v8);
              goto LABEL_78;
            }
            if ( (unsigned __int8)sub_2195AD0(v122, 2384) )
              goto LABEL_76;
            goto LABEL_220;
          }
          v71 = (unsigned __int8 **)((char *)v71 + 4);
        }
        while ( (unsigned __int8 **)v192.m128i_i64[1] != v71 );
      }
      si128.m128_u64[0] = (unsigned __int64)++v65;
    }
    while ( (__int64 *)v69 != v65 );
    v8 = v68;
    v5 = (_QWORD *)v192.m128i_i64[0];
  }
LABEL_75:
  if ( (unsigned __int8)sub_1130A40((__int64)v5, (__int64)v194, (__int64)v198, v199, v200, v201, v196) )
  {
LABEL_76:
    si128.m128_u64[0] = (unsigned __int64)"+fpxx";
    si128.m128_u64[1] = j__strlen("+fpxx");
    sub_1115760(a4, (__int64 *)v8);
    v73 = "+nooddspreg";
  }
  else
  {
    v156 = sub_10B8FF0((__int64)v5, 0x9C2u);
    if ( !v156 || !(unsigned __int8)sub_2195AD0(v156, 2498) )
      goto LABEL_78;
LABEL_220:
    v73 = "+fp64";
  }
  si128.m128_u64[0] = (unsigned __int64)v73;
  si128.m128_u64[1] = j__strlen(v73);
  sub_1115760(a4, (__int64 *)v8);
LABEL_78:
  sub_119EC50(v5, a4, 2665, 2783, "nooddspreg", 10);
  sub_119EC50(v5, a4, 2640, 2480, "nomadd4", 7);
  sub_119EC50(v5, a4, 2499, 2656, "mt", 2);
  sub_119EC50(v5, a4, 2326, 2573, "crc", 3);
  sub_119EC50(v5, a4, 2951, 2754, "virt", 4);
  sub_119EC50(v5, a4, 2395, 2610, "ginv", 4);
  si128.m128_i32[0] = 2424;
  v74 = sub_2193060(v5, v8, 1);
  v75 = v5[1];
  v76 = (_QWORD *)(v75 + 8LL * (unsigned int)v74);
  v77 = (_QWORD *)(v75 + 8 * HIDWORD(v74));
  if ( v76 != v77 )
  {
    while ( !*v76 || !(unsigned __int8)sub_2195AD0(*v76, 2424) )
    {
      if ( v77 == ++v76 )
        return;
    }
    if ( v77 != v76 )
    {
      do
      {
        v86 = *v76;
        v87 = *(_QWORD *)(*v76 + 16LL);
        if ( !v87 )
          v87 = *v76;
        ++v76;
        *(_BYTE *)(v87 + 44) |= 1u;
        if ( v76 == v77 )
          break;
        while ( !*v76 || !(unsigned __int8)sub_2195AD0(*v76, 2424) )
        {
          if ( v77 == ++v76 )
            goto LABEL_115;
        }
      }
      while ( v77 != v76 );
LABEL_115:
      v88 = *(const char ***)(v86 + 48);
      v89 = (char *)*v88;
      if ( *v88 )
      {
        v90 = strlen(*v88);
        if ( v90 == 6 && *(_DWORD *)v89 == 1635410280 && *((_WORD *)v89 + 2) == 25714 )
        {
          v159 = sub_10BA920((__int64)v5, 0x9B8u, 0xA54u);
          v160 = sub_10BA920((__int64)v5, 0x980u, 0xA55u);
          if ( v159 && (unsigned __int8)sub_2195AD0(v159, 2488) )
          {
            sub_FA3370((__int64)v8, *a1, 0, 491);
            sub_AC60B0(v8, (__int64)"hazard", 1u);
            sub_AC60B0(v8, (__int64)"micromips", 1u);
            sub_AC6300((__int64)v8);
          }
          else if ( v160 && (unsigned __int8)sub_2195AD0(v160, 2432) )
          {
            sub_FA3370((__int64)v8, *a1, 0, 491);
            sub_AC60B0(v8, (__int64)"hazard", 1u);
            sub_AC60B0(v8, (__int64)"mips16", 1u);
            sub_AC6300((__int64)v8);
          }
          else if ( (unsigned __int8)sub_1130ED0(v195) )
          {
            si128.m128_u64[0] = (unsigned __int64)"+use-indirect-jump-hazard";
            si128.m128_u64[1] = j__strlen("+use-indirect-jump-hazard");
            sub_1115760(a4, (__int64 *)v8);
          }
          else
          {
            sub_FA3370((__int64)v8, *a1, 0, 491);
            v161 = (unsigned __int8 *)si128.m128_u64[0];
            if ( !si128.m128_u64[0] )
            {
              v184 = si128.m128_u64[1];
              v185 = *(_DWORD *)(si128.m128_u64[1] + 14976);
              if ( v185 )
              {
                v186 = (unsigned int)(v185 - 1);
                *(_DWORD *)(si128.m128_u64[1] + 14976) = v186;
                v161 = *(unsigned __int8 **)(v184 + 8 * v186 + 14848);
                v187 = *((unsigned int *)v161 + 134);
                *v161 = 0;
                v188 = *((_QWORD *)v161 + 66);
                *((_DWORD *)v161 + 106) = 0;
                v189 = v188 + (v187 << 6);
                while ( v188 != v189 )
                {
                  while ( 1 )
                  {
                    v189 -= 64;
                    v190 = *(void **)(v189 + 24);
                    if ( v190 == (void *)(v189 + 40) )
                      break;
                    operator delete(v190);
                    if ( v188 == v189 )
                      goto LABEL_295;
                  }
                }
LABEL_295:
                *((_DWORD *)v161 + 134) = 0;
              }
              else
              {
                v161 = (unsigned __int8 *)operator new(0x3A0u);
                *v161 = 0;
                *((_QWORD *)v161 + 12) = v161 + 112;
                *((_QWORD *)v161 + 16) = v161 + 144;
                *((_QWORD *)v161 + 20) = v161 + 176;
                *((_QWORD *)v161 + 24) = v161 + 208;
                *((_QWORD *)v161 + 28) = v161 + 240;
                *((_QWORD *)v161 + 32) = v161 + 272;
                *((_QWORD *)v161 + 36) = v161 + 304;
                *((_QWORD *)v161 + 40) = v161 + 336;
                *((_QWORD *)v161 + 44) = v161 + 368;
                *((_QWORD *)v161 + 48) = v161 + 400;
                *((_QWORD *)v161 + 52) = v161 + 432;
                *((_QWORD *)v161 + 13) = 0;
                v161[112] = 0;
                *((_QWORD *)v161 + 17) = 0;
                v161[144] = 0;
                *((_QWORD *)v161 + 21) = 0;
                v161[176] = 0;
                *((_QWORD *)v161 + 25) = 0;
                v161[208] = 0;
                *((_QWORD *)v161 + 29) = 0;
                v161[240] = 0;
                *((_QWORD *)v161 + 33) = 0;
                v161[272] = 0;
                *((_QWORD *)v161 + 37) = 0;
                v161[304] = 0;
                *((_QWORD *)v161 + 41) = 0;
                v161[336] = 0;
                *((_QWORD *)v161 + 45) = 0;
                v161[368] = 0;
                *((_QWORD *)v161 + 49) = 0;
                v161[400] = 0;
                *((_QWORD *)v161 + 53) = 0x800000000LL;
                *((_QWORD *)v161 + 66) = v161 + 544;
                *((_QWORD *)v161 + 67) = 0x600000000LL;
              }
              si128.m128_u64[0] = (unsigned __int64)v161;
            }
            v161[*v161 + 1] = 1;
            v162 = si128.m128_u64[0];
            v163 = *(unsigned __int8 *)si128.m128_u64[0];
            *(_BYTE *)si128.m128_u64[0] = v163 + 1;
            v164 = v198;
            *(_QWORD *)(v162 + 8 * v163 + 16) = "hazard";
            sub_AC84E0(v8, v164, v199);
            sub_AC6300((__int64)v8);
          }
          return;
        }
      }
      else
      {
        v90 = 0;
      }
      sub_FA3370((__int64)v8, *a1, 0, 483);
      sub_AC84E0(v8, v89, v90);
      sub_AC6300((__int64)v8);
    }
  }
}

