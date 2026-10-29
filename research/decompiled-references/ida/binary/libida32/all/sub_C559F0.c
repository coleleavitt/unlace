__int64 __fastcall sub_C559F0(__int64 a1, __int64 a2, __int64 **a3, __int64 **a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i *v23; // rsi
  char v24; // bl
  char v25; // al
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rsi
  char v31; // al
  int v32; // esi
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r9d
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // r9d
  __int64 v52; // r8
  int v53; // r9d
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r9d
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // r9d
  char v60; // al
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rsi
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rsi
  __int64 v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  int v86; // r9d
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  int v90; // r9d
  __int64 v91; // rsi
  void *v92; // rdi
  int v93; // eax
  bool v94; // cl
  int v95; // eax
  unsigned __int16 *v96; // rsi
  __int64 v97; // rdx
  int v98; // ecx
  int v99; // r8d
  int v100; // r9d
  __int64 v101; // rdx
  int v102; // ecx
  int v103; // r8d
  int v104; // r9d
  unsigned __int16 *v105; // rsi
  int v106; // ebx
  int v107; // eax
  __int64 v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  int v112; // r9d
  __int64 v113; // rsi
  unsigned __int16 *v114; // rsi
  unsigned __int64 v115; // rdi
  __int64 v116; // rsi
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // rbx
  __int64 v119; // rdx
  int v120; // esi
  __int64 v121; // rsi
  __int64 v122; // r15
  __int64 v123; // rsi
  char v124; // al
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // r12
  __int64 v127; // rsi
  unsigned __int64 v128; // rax
  bool v129; // al
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r15
  unsigned __int64 v133; // rax
  unsigned __int8 **v134; // rax
  unsigned __int8 **v135; // rax
  bool v136; // al
  unsigned __int8 **v137; // rax
  unsigned __int8 **v138; // rax
  unsigned __int64 v139; // rax
  unsigned int v140; // eax
  unsigned __int64 v141; // r8
  unsigned __int64 v142; // rdx
  unsigned __int8 **v143; // rax
  unsigned __int64 v144; // r8
  unsigned __int64 v145; // rax
  __int64 v146; // rsi
  unsigned __int64 v147; // rax
  bool v148; // al
  __int64 v149; // rdx
  __int64 v150; // rcx
  char v151; // al
  unsigned __int8 **v152; // rax
  unsigned __int64 v153; // r8
  unsigned __int64 v154; // rsi
  unsigned __int64 v155; // rdx
  __int64 v156; // rsi
  unsigned __int8 **v157; // rax
  unsigned __int64 v158; // rsi
  unsigned __int64 v159; // rdx
  __int64 v160; // rsi
  unsigned __int8 v162; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v163; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v164; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v165; // [rsp+10h] [rbp-1F8h]
  unsigned __int8 **v166; // [rsp+10h] [rbp-1F8h]
  unsigned __int8 **v167; // [rsp+10h] [rbp-1F8h]
  unsigned __int8 v168; // [rsp+18h] [rbp-1F0h]
  unsigned __int8 **v169; // [rsp+18h] [rbp-1F0h]
  __int64 v170; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v171; // [rsp+18h] [rbp-1F0h]
  __int64 v172; // [rsp+18h] [rbp-1F0h]
  __int64 v173; // [rsp+18h] [rbp-1F0h]
  unsigned __int8 **v174; // [rsp+18h] [rbp-1F0h]
  unsigned __int8 **v175; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v176; // [rsp+20h] [rbp-1E8h]
  __int64 v177; // [rsp+28h] [rbp-1E0h] BYREF
  __m128i v178; // [rsp+30h] [rbp-1D8h] BYREF
  char v179; // [rsp+40h] [rbp-1C8h]
  __m128i si128; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 *v181; // [rsp+60h] [rbp-1A8h]
  __m128i *v182; // [rsp+68h] [rbp-1A0h] BYREF
  unsigned int v183; // [rsp+70h] [rbp-198h]
  char v184; // [rsp+74h] [rbp-194h]
  __int64 v185[3]; // [rsp+78h] [rbp-190h] BYREF
  __int64 v186[4]; // [rsp+90h] [rbp-178h] BYREF
  void *v187[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v188; // [rsp+C0h] [rbp-148h]
  __m128i *v189; // [rsp+C8h] [rbp-140h] BYREF
  int v190; // [rsp+D0h] [rbp-138h]
  char v191; // [rsp+D4h] [rbp-134h]
  __int64 v192; // [rsp+D8h] [rbp-130h] BYREF
  void *v193; // [rsp+E0h] [rbp-128h]
  __int64 v194; // [rsp+E8h] [rbp-120h]
  __int64 v195[8]; // [rsp+F0h] [rbp-118h] BYREF
  char v196; // [rsp+131h] [rbp-D7h]
  __m128i v197; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v198; // [rsp+150h] [rbp-B8h]
  _BYTE v199[16]; // [rsp+158h] [rbp-B0h] BYREF
  __int64 v200; // [rsp+168h] [rbp-A0h]
  void *ptr; // [rsp+170h] [rbp-98h]
  __int64 v202; // [rsp+178h] [rbp-90h]
  _BYTE v203[65]; // [rsp+180h] [rbp-88h] BYREF
  char v204; // [rsp+1C1h] [rbp-47h]

  v177 = a2;
  v162 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_BF86C0(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), a2, (__int64)a3, (__int64)a4, a5)
    && sub_BF86C0(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL), a2, v10, v11, v12) )
  {
    BYTE4(v187[1]) = 0;
    LODWORD(v187[1]) = 1;
    v187[0] = nullptr;
    v197.m128i_i32[2] = 1;
    v197.m128i_i64[0] = 0;
    v197.m128i_i8[12] = 0;
    LODWORD(v8) = sub_C23520(*(_QWORD *)(v177 + 16), (__int64)v187, a1, v11, v52, v53);
    if ( !(_BYTE)v8 )
    {
      if ( (unsigned __int8)sub_BEDB10(a1) )
      {
        sub_C23520(*(_QWORD *)(v177 + 24), (__int64)&v197, a1, v57, v58, v59);
        goto LABEL_34;
      }
      goto LABEL_72;
    }
    if ( !(unsigned __int8)sub_C23520(*(_QWORD *)(v177 + 24), (__int64)&v197, a1, v54, v55, v56) )
      goto LABEL_72;
    if ( BYTE4(v187[1]) )
    {
      v93 = sub_21E2070(v187, &v197);
      if ( v93 >= 0 )
      {
        v94 = v93 > 0;
        goto LABEL_78;
      }
    }
    else
    {
      v95 = sub_21E20E0(v187, &v197);
      v94 = v95 > 0;
      if ( v95 >= 0 )
      {
LABEL_78:
        v67 = v177;
        if ( !v94 )
          goto LABEL_79;
        goto LABEL_55;
      }
    }
LABEL_81:
    LODWORD(v8) = sub_C13300(a3, 1, v177);
LABEL_34:
    if ( v197.m128i_i32[2] > 0x40u && v197.m128i_i64[0] )
      operator delete[]((void *)v197.m128i_i64[0]);
    if ( LODWORD(v187[1]) > 0x40 && v187[0] )
      operator delete[](v187[0]);
    return (unsigned int)v8;
  }
  v13 = *v9;
  v14 = *(_QWORD *)(*(_QWORD *)(*v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(unsigned __int8 *)(v14 + 16);
  if ( (_BYTE)v15 == 13 && (((*(_WORD *)(v14 + 18) >> 3) + 56) & 0x1FFu) <= 0x17
    || (v16 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL),
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        v11 = *(unsigned __int8 *)(v17 + 16),
        (_BYTE)v11 == 13)
    && (((*(_WORD *)(v17 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
  {
    v197.m128i_i32[0] = sub_A8A3C0(*(_QWORD *)(a1 + 16), v7, v15, v11);
    sub_BF2D00((__int64)v187, 0, &v197);
    si128.m128i_i32[0] = sub_A8A3C0(*(_QWORD *)(a1 + 16), v8, v40, v41);
    sub_BF2D00((__int64)&v197, 0, &si128);
    LODWORD(v8) = sub_C45D40(*(_QWORD *)(v177 + 16), (__int64)v187, a1, v42, v43, v44);
    if ( !(_BYTE)v8 )
    {
      if ( (unsigned __int8)sub_BEDB10(a1) )
      {
        sub_C45D40(*(_QWORD *)(v177 + 24), (__int64)&v197, a1, v48, v49, v50);
        goto LABEL_34;
      }
      goto LABEL_72;
    }
    if ( !(unsigned __int8)sub_C45D40(*(_QWORD *)(v177 + 24), (__int64)&v197, a1, v45, v46, v47) )
    {
LABEL_72:
      LODWORD(v8) = 0;
      goto LABEL_34;
    }
    if ( (int)sub_21CAA90(v187, &v197) >= 0 )
    {
      v66 = sub_21CAA90(v187, &v197);
      v67 = v177;
      if ( v66 <= 0 )
      {
LABEL_79:
        LODWORD(v8) = sub_C13300(a3, 2, v67);
        goto LABEL_34;
      }
LABEL_55:
      LODWORD(v8) = sub_C13300(a3, 3, v67);
      goto LABEL_34;
    }
    goto LABEL_81;
  }
  LOBYTE(v8) = (_BYTE)v11 == 14 || (_BYTE)v15 == 14;
  if ( (_BYTE)v8 )
  {
    LODWORD(v181) = 1;
    si128.m128i_i64[1] = 0;
    BYTE4(v181) = 0;
    v183 = 1;
    v182 = nullptr;
    v184 = 0;
    v18 = sub_21D53B0();
    if ( v18 == sub_21D5390(v13, a2, v19) )
    {
      sub_21DBE90(v185, v18);
      sub_21DBE90(v186, v18);
      LODWORD(v188) = 1;
      v187[1] = nullptr;
      BYTE4(v188) = 0;
      v190 = 1;
      v189 = nullptr;
      v191 = 0;
      sub_21DBE90(&v192, v18);
      sub_21DBE90(v195, v18);
    }
    else
    {
      sub_21D7CC0(v185, v18);
      sub_21D7CC0(v186, v18);
      LODWORD(v188) = 1;
      v187[1] = nullptr;
      BYTE4(v188) = 0;
      v190 = 1;
      v189 = nullptr;
      v191 = 0;
      sub_21D7CC0(&v192, v18);
      sub_21D7CC0(v195, v18);
    }
    if ( ((*(_WORD *)(v177 + 2) >> 3) & 0x3Fu) - 21 <= 0xA )
    {
      v197 = 0u;
      v199[0] |= 1u;
      v198 = 0;
      v200 = 0;
      ptr = v203;
      v202 = 0x800000000LL;
      v204 = 0;
      v23 = *(__m128i **)(v177 + 16);
      v178.m128i_i64[0] = a1;
      v178.m128i_i64[1] = (__int64)&v197;
      v179 = 0;
      sub_C38AE0(&v178, v23, v177, v20, v21, v22);
      if ( ptr != v203 )
        free(ptr);
LABEL_12:
      v24 = 0;
      if ( !(unsigned __int8)sub_BEDB10(a1) )
        goto LABEL_42;
      goto LABEL_13;
    }
    v60 = sub_F343C0(*v9);
    v65 = *(_QWORD *)(v177 + 16);
    v197.m128i_i64[0] = a1;
    if ( v60 )
    {
      v197.m128i_i64[1] = (__int64)v185;
      v24 = sub_C46FB0((__int64 **)&v197, v65, v61, v62, v63, v64);
      if ( !v24 )
        goto LABEL_12;
      si128.m128i_i8[0] = 0;
      sub_BFD670((__int64)&v197, v185[0]);
      sub_BF3A80(v186, v197.m128i_i64);
      sub_971860(&v197);
    }
    else
    {
      v197.m128i_i64[1] = (__int64)&si128;
      v24 = sub_C4F130(&v197, v65, v61, v62, v63, v64);
      if ( !v24 )
        goto LABEL_12;
    }
LABEL_13:
    v25 = sub_F343C0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v177 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
    v30 = *(_QWORD *)(v177 + 24);
    v197.m128i_i64[0] = a1;
    if ( v25 )
    {
      v197.m128i_i64[1] = (__int64)&v192;
      if ( (unsigned __int8)sub_C46FB0((__int64 **)&v197, v30, v26, v27, v28, v29) && v24 )
      {
        LOBYTE(v187[0]) = 0;
        sub_BFD670((__int64)&v197, v192);
        sub_BF3A80(v195, v197.m128i_i64);
        sub_971860(&v197);
LABEL_16:
        if ( si128.m128i_i8[0] )
        {
          if ( (unsigned int)v181 <= 0x40 )
            v31 = (void *)si128.m128i_i64[1] == v187[1];
          else
            v31 = sub_21E2030(&si128.m128i_u64[1], &v187[1]);
          v32 = 0;
          if ( v31 )
          {
            if ( v183 <= 0x40 )
              v33 = v182 == v189;
            else
              v33 = sub_21E2030(&v182, &v189);
            v32 = 2 * (v33 != 0);
          }
          v34 = v177;
        }
        else
        {
          v106 = sub_BF30F0(v185, (__int64)&v192);
          v107 = sub_BF30F0(v186, (__int64)v195);
          v34 = v177;
          if ( v106 != 1 || (v32 = 2, v107 != 1) )
            v32 = 0;
        }
        LODWORD(v8) = sub_C13300(a3, v32, v34);
        goto LABEL_43;
      }
    }
    else
    {
      v197.m128i_i64[1] = (__int64)v187;
      if ( (unsigned __int8)sub_C4F130(&v197, v30, v26, v27, v28, v29) && v24 )
        goto LABEL_16;
    }
LABEL_42:
    LODWORD(v8) = 0;
LABEL_43:
    sub_BF4040((__int64)v187);
    sub_BF4040((__int64)&si128);
    return (unsigned int)v8;
  }
  if ( (unsigned __int8)sub_F343C0(v13) && (unsigned __int8)sub_F343C0(*v16) )
  {
    sub_BED320((__int64)v187);
    sub_BED320((__int64)&v197);
    v68 = *(_QWORD *)(v177 + 24);
    si128.m128i_i64[0] = a1;
    si128.m128i_i64[1] = (__int64)v187;
    if ( (unsigned __int8)sub_C46FB0((__int64 **)&si128, v68, v69, v70, v71, v72) )
    {
      v121 = *(_QWORD *)(v177 + 16);
      si128.m128i_i64[0] = a1;
      si128.m128i_i64[1] = (__int64)&v197;
      if ( (unsigned __int8)sub_C46FB0((__int64 **)&si128, v121, v73, v74, v75, v76) )
      {
        v122 = (unsigned int)sub_BF30F0(&v197, (__int64)v187);
        if ( *(_BYTE *)(a1 + 8) != 1
          && (_DWORD)v122 == 3
          && (si128.m128i_i32[0] = sub_BF97F0(v177, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2320LL)),
              sub_BF8140(si128.m128i_i32)) )
        {
          sub_E0FED0(a1, v177, 2412, 0);
        }
        else
        {
          LODWORD(v8) = sub_C13300(a3, dword_23C8030[v122], v177);
        }
      }
    }
    else if ( (unsigned __int8)sub_BEDB10(a1) )
    {
      v81 = *(_QWORD *)(v177 + 16);
      si128.m128i_i64[0] = a1;
      si128.m128i_i64[1] = (__int64)&v197;
      sub_C46FB0((__int64 **)&si128, v81, v77, v78, v79, v80);
    }
    sub_971860(&v197);
    sub_971860(v187);
    return (unsigned int)v8;
  }
  v38 = *(_QWORD *)(*(_QWORD *)(*v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v39 = *(_BYTE *)(v38 + 16);
  if ( v39 == 42 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
    {
LABEL_30:
      LODWORD(v8) = sub_C55870(a4[1], **a4, v38, v35, v36, v37);
      return (unsigned int)v8;
    }
    LOBYTE(v189) = (unsigned __int8)v189 | 1;
    v199[0] |= 1u;
    v193 = v195;
    v194 = 0x800000000LL;
    v202 = 0x800000000LL;
    v187[0] = nullptr;
    v187[1] = nullptr;
    v188 = 0;
    v192 = 0;
    v196 = 0;
    v197 = 0u;
    v198 = 0;
    v200 = 0;
    ptr = v203;
    v204 = 0;
    v82 = *(_QWORD *)(v177 + 16);
    si128.m128i_i64[0] = a1;
    si128.m128i_i64[1] = (__int64)v187;
    LOBYTE(v181) = 0;
    if ( !(unsigned __int8)sub_C24FB0(&si128, v82, (__int64)v203, v35, v36, v37) )
    {
      if ( (unsigned __int8)sub_BEDB10(a1) )
      {
        LODWORD(v8) = 0;
        v91 = *(_QWORD *)(v177 + 24);
        si128.m128i_i64[0] = a1;
        si128.m128i_i64[1] = (__int64)&v197;
        LOBYTE(v181) = 0;
        sub_C24FB0(&si128, v91, v87, v88, v89, v90);
      }
      goto LABEL_67;
    }
    v123 = *(_QWORD *)(v177 + 24);
    si128.m128i_i64[0] = a1;
    si128.m128i_i64[1] = (__int64)&v197;
    LOBYTE(v181) = 0;
    if ( !(unsigned __int8)sub_C24FB0(&si128, v123, v83, v84, v85, v86) )
      goto LABEL_67;
    if ( !sub_BEC590((const __m128i *)v187, &v197) )
    {
      si128.m128i_i64[0] = (__int64)v187;
      v181 = &v177;
      si128.m128i_i64[1] = a1;
      v182 = &v197;
      if ( (unsigned int)v162 - 14 > 1 )
        goto LABEL_114;
      if ( !sub_A2B9C0(v187) && v188 || !sub_A2B9C0(&v197) && v198 )
      {
        v136 = sub_A2B9C0(&v197);
        LODWORD(v8) = sub_BF6170(si128.m128i_i64, 0x9ABu, !v136);
        goto LABEL_67;
      }
      if ( (unsigned __int8)sub_BECAD0(a1, v187, &v197) )
      {
        LODWORD(v8) = sub_BF6170(si128.m128i_i64, 0x979u, 0);
        goto LABEL_67;
      }
      if ( sub_BEDFC0((__int64 *)v187) || sub_BEDFC0(v197.m128i_i64) )
      {
        v148 = sub_BEDFC0((__int64 *)v187);
        LODWORD(v8) = sub_BF6170(si128.m128i_i64, 0x99Eu, !v148);
        goto LABEL_67;
      }
      if ( (unsigned __int8)sub_BEBF30((__int64 *)v187) || (unsigned __int8)sub_BEBF30(v197.m128i_i64) )
      {
        v151 = sub_BEBF30((__int64 *)v187);
        LODWORD(v8) = sub_BF6170(si128.m128i_i64, 0x9AEu, v151 ^ 1u);
        goto LABEL_67;
      }
      if ( sub_A2B9C0(v187) && !v188 && sub_BEED70(*(_QWORD *)(a1 + 16), &v197) )
      {
        LODWORD(v8) = sub_BF6170(si128.m128i_i64, 0x9A8u, 1);
        goto LABEL_67;
      }
      if ( sub_A2B9C0(&v197) && !v198 && sub_BEED70(*(_QWORD *)(a1 + 16), (const __m128i *)v187) )
      {
        LODWORD(v8) = sub_BF6170(si128.m128i_i64, 0x9A8u, 0);
        goto LABEL_67;
      }
      if ( sub_A2B9C0(&v197) && sub_BEC440((__int64 *)v187) || sub_A2B9C0(v187) && sub_BEC440(v197.m128i_i64) )
      {
        LODWORD(v8) = sub_BF6170(si128.m128i_i64, 0x9AAu, 0);
        goto LABEL_67;
      }
      if ( v196 || v204 )
      {
LABEL_114:
        LODWORD(v8) = sub_BF6170(si128.m128i_i64, 0x9A9u, 0);
        goto LABEL_67;
      }
      LODWORD(v8) = sub_C13300(a3, 0, v177);
LABEL_67:
      if ( ptr != v203 )
        free(ptr);
      v92 = v193;
      if ( v193 == v195 )
        return (unsigned int)v8;
LABEL_70:
      free(v92);
      return (unsigned int)v8;
    }
    if ( ((v199[0] | (unsigned __int8)v189) & 1) != 0 )
    {
      v127 = *v9;
      v168 = (v162 + 55) & 0x3F;
      v128 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)sub_A73FE0(*(_QWORD *)(a1 + 16), *v9));
      v126 = v128 & v188;
      v163 = v198 & v128;
      v129 = sub_A2B9B0(v187);
      if ( v168 > 4u || v129 )
        goto LABEL_129;
    }
    else
    {
      if ( ((v162 + 55) & 0x3Fu) > 4 )
      {
        v125 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)sub_A73FE0(*(_QWORD *)(a1 + 16), *v9));
        v126 = v125 & v188;
        v163 = v198 & v125;
        sub_A2B9B0(v187);
LABEL_129:
        if ( v126 < v163 )
        {
          LODWORD(v8) = sub_C13300(a3, 1, v177);
        }
        else if ( v126 <= v163 )
        {
          LODWORD(v8) = sub_C13300(a3, 2, v177);
        }
        else
        {
          LODWORD(v8) = sub_C13300(a3, 3, v177);
        }
        goto LABEL_67;
      }
      if ( sub_A2B9B0(v187) )
      {
        v139 = 0;
      }
      else
      {
        si128 = _mm_load_si128((const __m128i *)v187);
        si128.m128i_i64[0] = sub_A2B5D0(&si128);
        v139 = sub_BF81B0((__int64)&si128, (__int64)&v197, v149, v150);
      }
      v140 = sub_BEDBE0(v139, (__int64)&v189, (__int64)v199, &v178);
      if ( !v178.m128i_i8[0] && v140 < (unsigned int)v194 && v140 < (unsigned int)v202 )
      {
        v164 = *((_QWORD *)ptr + v140) & 0xFFFFFFFFFFFFFFF8LL;
        v141 = *((_QWORD *)v193 + v140) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v141 && (*(_BYTE *)(v141 + 28) & 0x7Fu) - 49 <= 2 )
        {
          if ( v164 && (*(_BYTE *)(v164 + 28) & 0x7Fu) - 49 <= 2 )
          {
            v142 = *(_QWORD *)(v141 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v141 + 16) & 4) != 0 )
              v142 = *(_QWORD *)v142;
            if ( (*(_BYTE *)(v142 + 8) & 0x7Fu) - 58 > 3 )
              BUG();
            if ( *(_BYTE *)(v142 + 9) >> 5 != 2 )
            {
              v176 = *((_QWORD *)v193 + v140) & 0xFFFFFFFFFFFFFFF8LL;
              if ( ((*(_BYTE *)(v164 + 29) >> 5) & 3) != ((*(_BYTE *)(v141 + 29) >> 5) & 3) )
              {
                v143 = (unsigned __int8 **)sub_E0FF50(a1, v177, 2471, 0);
                v144 = v176;
                v169 = v143;
                if ( v143 )
                {
                  sub_AC60B0(v143, v176, 0xAu);
                  sub_B775D0(v169, (*(_BYTE *)(v176 + 29) >> 5) & 3);
                  sub_AC60B0(v169, v164, 0xAu);
                  sub_B775D0(v169, (*(_BYTE *)(v164 + 29) >> 5) & 3);
                  v144 = v176;
                }
                v145 = *(_QWORD *)(v144 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v144 + 16) & 4) != 0 )
                  v145 = *(_QWORD *)v145;
                if ( (*(_BYTE *)(v145 + 8) & 0x7Fu) - 58 > 3 )
                  v146 = 0;
                else
                  v146 = v145 - 64;
                if ( v169 )
                  sub_AC60B0(v169, v146, 0xAu);
              }
            }
          }
          else
          {
            v170 = v140;
            v165 = *((_QWORD *)v193 + v140) & 0xFFFFFFFFFFFFFFF8LL;
            v152 = (unsigned __int8 **)sub_E0FF50(a1, v177, 2470, 0);
            v153 = v165;
            v154 = *((_QWORD *)ptr + v170) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v154 )
            {
              if ( (*(_BYTE *)(v154 + 28) & 0x7Fu) - 59 >= 3 )
                v154 = 0;
            }
            else
            {
              v154 = 0;
            }
            if ( v152 )
            {
              v171 = v165;
              v166 = v152;
              sub_AC60B0(v152, v154, 0xAu);
              v153 = v171;
              v152 = v166;
            }
            v155 = *(_QWORD *)(v153 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v153 + 16) & 4) != 0 )
              v155 = *(_QWORD *)v155;
            if ( (*(_BYTE *)(v155 + 8) & 0x7Fu) - 58 > 3 )
              v156 = 0;
            else
              v156 = v155 - 64;
            v172 = v153;
            if ( v152 )
            {
              v167 = v152;
              sub_AC60B0(v152, v156, 0xAu);
              sub_AC60B0(v167, v172, 0xAu);
            }
          }
        }
        else if ( v164 && (*(_BYTE *)(v164 + 28) & 0x7Fu) - 49 <= 2 )
        {
          v173 = v140;
          v157 = (unsigned __int8 **)sub_E0FF50(a1, v177, 2470, 0);
          v158 = *((_QWORD *)v193 + v173) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v158 && (*(_BYTE *)(v158 + 28) & 0x7Fu) - 59 >= 3 )
            v158 = 0;
          if ( v157 )
          {
            v174 = v157;
            sub_AC60B0(v157, v158, 0xAu);
            v157 = v174;
          }
          v159 = *(_QWORD *)(v164 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v164 + 16) & 4) != 0 )
            v159 = *(_QWORD *)v159;
          if ( (*(_BYTE *)(v159 + 8) & 0x7Fu) - 58 > 3 )
            v160 = 0;
          else
            v160 = v159 - 64;
          if ( v157 )
          {
            v175 = v157;
            sub_AC60B0(v157, v160, 0xAu);
            sub_AC60B0(v175, v164, 0xAu);
          }
        }
        else
        {
          sub_E0FF50(a1, v177, 2469, 0);
        }
      }
      v127 = *v9;
      v147 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)sub_A73FE0(*(_QWORD *)(a1 + 16), *v9));
      v126 = v147 & v188;
      v163 = v198 & v147;
      if ( sub_A2B9B0(v187) )
        goto LABEL_129;
    }
    si128 = _mm_load_si128((const __m128i *)v187);
    si128.m128i_i64[0] = sub_A2B5D0(&si128);
    v132 = sub_BF81B0((__int64)&si128, v127, v130, v131);
    if ( (unsigned __int8)sub_F3E930(*(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL), 0)
      || (v133 = sub_A8AC40(*(_QWORD *)(a1 + 16), v132), v133 < v126)
      || v133 < v163 )
    {
      sub_E0FED0(a1, v177, 108, 0);
      goto LABEL_67;
    }
    goto LABEL_129;
  }
  if ( v39 == 33 )
  {
    v187[0] = nullptr;
    v197.m128i_i64[0] = 0;
    v187[1] = &v189;
    v188 = 0x400000000LL;
    v198 = 0x400000000LL;
    v197.m128i_i64[1] = (__int64)v199;
    v96 = *(unsigned __int16 **)(v177 + 16);
    si128.m128i_i64[0] = a1;
    si128.m128i_i64[1] = (__int64)v187;
    if ( !(unsigned __int8)sub_C140A0(si128.m128i_i64, v96, (__int64)v199, v35, v36, v37) )
    {
      if ( (unsigned __int8)sub_BEDB10(a1) )
      {
        LODWORD(v8) = 0;
        v105 = *(unsigned __int16 **)(v177 + 24);
        si128.m128i_i64[0] = a1;
        si128.m128i_i64[1] = (__int64)&v197;
        sub_C140A0(si128.m128i_i64, v105, v101, v102, v103, v104);
      }
      goto LABEL_85;
    }
    v114 = *(unsigned __int16 **)(v177 + 24);
    si128.m128i_i64[0] = a1;
    si128.m128i_i64[1] = (__int64)&v197;
    if ( !(unsigned __int8)sub_C140A0(si128.m128i_i64, v114, v97, v98, v99, v100) )
      goto LABEL_85;
    if ( ((unsigned __int64)v187[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (unsigned __int8)sub_B559C0((unsigned __int64)v187[0] & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v134 = (unsigned __int8 **)sub_E0FED0(a1, v177, 2432, 0);
        if ( v134 )
          sub_AC60B0(v134, (unsigned __int64)v187[0] & 0xFFFFFFFFFFFFFFF8LL, 0xAu);
        goto LABEL_85;
      }
      v115 = v197.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v197.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        if ( ((unsigned __int64)v187[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          goto LABEL_104;
        goto LABEL_118;
      }
    }
    else
    {
      v115 = v197.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v197.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_118;
    }
    if ( !(unsigned __int8)sub_B559C0(v115) )
    {
      v116 = v197.m128i_i64[0];
      v117 = v197.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      v118 = (unsigned __int64)v187[0] & 0xFFFFFFFFFFFFFFF8LL;
      if ( ((unsigned __int64)v187[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( v117 )
        {
          if ( (*(_BYTE *)(v118 + 28) & 0x7Fu) - 35 <= 3 )
          {
            if ( sub_AC9870((unsigned __int64)v187[0] & 0xFFFFFFFFFFFFFFF8LL) )
            {
              v137 = (unsigned __int8 **)sub_E0FF50(a1, v177, 2395, 0);
              if ( v137 )
                sub_AC60B0(v137, v118, 0xAu);
            }
            v116 = v197.m128i_i64[0];
          }
          if ( (*(_BYTE *)((v116 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 35 <= 3
            && sub_AC9870(v116 & 0xFFFFFFFFFFFFFFF8LL) )
          {
            v138 = (unsigned __int8 **)sub_E0FF50(a1, v177, 2395, 0);
            if ( v138 )
              sub_AC60B0(v138, v116 & 0xFFFFFFFFFFFFFFF8LL, 0xAu);
          }
          v124 = sub_BEC970((__int64)v187, (__int64)&v197);
          v119 = v177;
          v120 = 2 * (v124 != 0);
          goto LABEL_105;
        }
        goto LABEL_104;
      }
      if ( v117 )
      {
LABEL_104:
        v119 = v177;
        v120 = 0;
LABEL_105:
        LODWORD(v8) = sub_C13300(a3, v120, v119);
        goto LABEL_85;
      }
LABEL_118:
      v119 = v177;
      v120 = 2;
      goto LABEL_105;
    }
    v135 = (unsigned __int8 **)sub_E0FED0(a1, v177, 2432, 0);
    if ( v135 )
      sub_AC60B0(v135, v197.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL, 0xAu);
LABEL_85:
    if ( (_BYTE *)v197.m128i_i64[1] != v199 )
      free((void *)v197.m128i_i64[1]);
    v92 = v187[1];
    if ( v187[1] == &v189 )
      return (unsigned int)v8;
    goto LABEL_70;
  }
  if ( v39 != 13 || ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) != 0x1E8 )
    goto LABEL_30;
  v199[0] |= 1u;
  v197 = 0u;
  ptr = v203;
  v202 = 0x800000000LL;
  v198 = 0;
  v200 = 0;
  v204 = 0;
  v108 = *(_QWORD *)(v177 + 16);
  v187[0] = (void *)a1;
  v187[1] = &v197;
  LOBYTE(v188) = 0;
  if ( (unsigned __int8)sub_C24FB0((__m128i *)v187, v108, v38, v35, v36, v37) )
  {
    v113 = *(_QWORD *)(v177 + 24);
    v187[0] = (void *)a1;
    v187[1] = &v197;
    LOBYTE(v188) = 0;
    if ( (unsigned __int8)sub_C24FB0((__m128i *)v187, v113, v109, v110, v111, v112) )
      LODWORD(v8) = sub_C13300(a3, 2, v177);
  }
  v92 = ptr;
  if ( ptr != v203 )
    goto LABEL_70;
  return (unsigned int)v8;
}

