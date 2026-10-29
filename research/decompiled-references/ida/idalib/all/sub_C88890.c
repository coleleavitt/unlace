__int64 __fastcall sub_C88890(__int64 a1, __int64 a2, __int64 a3, __int64 **a4, __int64 a5)
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
  __int64 v32; // rsi
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  char v39; // al
  __int64 *v40; // r12
  __int64 v41; // rbp
  __int64 *v42; // r12
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // r9d
  __int64 v56; // r8
  int v57; // r9d
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // r9d
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // r9d
  char v64; // al
  __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // rsi
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rsi
  __int64 v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  int v90; // r9d
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  int v94; // r9d
  __int64 v95; // rsi
  void *v96; // rdi
  int v97; // eax
  bool v98; // cl
  int v99; // eax
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  int v107; // r9d
  unsigned __int16 *v108; // rsi
  __int64 v109; // rdx
  int v110; // ecx
  int v111; // r8d
  int v112; // r9d
  __int64 v113; // rdx
  int v114; // ecx
  int v115; // r8d
  int v116; // r9d
  unsigned __int16 *v117; // rsi
  int v118; // ebx
  int v119; // eax
  __int64 v120; // rsi
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  int v124; // r9d
  __int64 v125; // rsi
  unsigned __int16 *v126; // rsi
  unsigned __int64 v127; // rdi
  __int64 v128; // rsi
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rbx
  __int64 v131; // rdx
  __int64 v132; // rsi
  __int64 v133; // rsi
  __int64 v134; // r15
  __int64 v135; // rsi
  char v136; // al
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // r12
  __int64 v139; // rsi
  unsigned __int64 v140; // rax
  bool v141; // al
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r15
  unsigned __int64 v145; // rax
  unsigned __int8 **v146; // rax
  unsigned __int8 **v147; // rax
  bool v148; // al
  unsigned __int8 **v149; // rax
  unsigned __int8 **v150; // rax
  unsigned __int64 v151; // rax
  unsigned int v152; // eax
  unsigned __int64 v153; // r8
  unsigned __int64 v154; // rdx
  unsigned __int8 **v155; // rax
  unsigned __int64 v156; // r8
  unsigned __int64 v157; // rax
  __int64 v158; // rsi
  unsigned __int64 v159; // rax
  bool v160; // al
  __int64 v161; // rdx
  __int64 v162; // rcx
  char v163; // al
  unsigned __int8 **v164; // rax
  unsigned __int64 v165; // r8
  unsigned __int64 v166; // rsi
  unsigned __int64 v167; // rdx
  __int64 v168; // rsi
  unsigned __int8 **v169; // rax
  unsigned __int64 v170; // rsi
  unsigned __int64 v171; // rdx
  __int64 v172; // rsi
  unsigned __int8 v174; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v175; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v176; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v177; // [rsp+10h] [rbp-1F8h]
  unsigned __int8 **v178; // [rsp+10h] [rbp-1F8h]
  unsigned __int8 **v179; // [rsp+10h] [rbp-1F8h]
  unsigned __int8 v180; // [rsp+18h] [rbp-1F0h]
  unsigned __int8 **v181; // [rsp+18h] [rbp-1F0h]
  __int64 v182; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v183; // [rsp+18h] [rbp-1F0h]
  __int64 v184; // [rsp+18h] [rbp-1F0h]
  __int64 v185; // [rsp+18h] [rbp-1F0h]
  unsigned __int8 **v186; // [rsp+18h] [rbp-1F0h]
  unsigned __int8 **v187; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v188; // [rsp+20h] [rbp-1E8h]
  __int64 v189; // [rsp+28h] [rbp-1E0h] BYREF
  __m128i v190; // [rsp+30h] [rbp-1D8h] BYREF
  char v191; // [rsp+40h] [rbp-1C8h]
  __m128i si128; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 *v193; // [rsp+60h] [rbp-1A8h]
  __m128i *v194; // [rsp+68h] [rbp-1A0h] BYREF
  unsigned int v195; // [rsp+70h] [rbp-198h]
  char v196; // [rsp+74h] [rbp-194h]
  __int64 v197[3]; // [rsp+78h] [rbp-190h] BYREF
  __int64 v198[4]; // [rsp+90h] [rbp-178h] BYREF
  void *v199[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v200; // [rsp+C0h] [rbp-148h]
  __m128i *v201; // [rsp+C8h] [rbp-140h] BYREF
  int v202; // [rsp+D0h] [rbp-138h]
  char v203; // [rsp+D4h] [rbp-134h]
  __int64 v204; // [rsp+D8h] [rbp-130h] BYREF
  void *v205; // [rsp+E0h] [rbp-128h]
  __int64 v206; // [rsp+E8h] [rbp-120h]
  __int64 v207[8]; // [rsp+F0h] [rbp-118h] BYREF
  char v208; // [rsp+131h] [rbp-D7h]
  __m128i v209; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v210; // [rsp+150h] [rbp-B8h]
  _BYTE v211[16]; // [rsp+158h] [rbp-B0h] BYREF
  __int64 v212; // [rsp+168h] [rbp-A0h]
  void *ptr; // [rsp+170h] [rbp-98h]
  __int64 v214; // [rsp+178h] [rbp-90h]
  _BYTE v215[65]; // [rsp+180h] [rbp-88h] BYREF
  char v216; // [rsp+1C1h] [rbp-47h]

  v189 = a2;
  v174 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_C1C400(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5)
    && sub_C1C400(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL), a2, v10, v11, v12) )
  {
    BYTE4(v199[1]) = 0;
    LODWORD(v199[1]) = 1;
    v199[0] = nullptr;
    v209.m128i_i32[2] = 1;
    v209.m128i_i64[0] = 0;
    v209.m128i_i8[12] = 0;
    LODWORD(v8) = sub_C47260(*(_QWORD *)(v189 + 16), (__int64)v199, a1, v11, v56, v57);
    if ( !(_BYTE)v8 )
    {
      if ( (unsigned __int8)sub_C11850(a1) )
      {
        sub_C47260(*(_QWORD *)(v189 + 24), (__int64)&v209, a1, v61, v62, v63);
        goto LABEL_37;
      }
      goto LABEL_75;
    }
    if ( !(unsigned __int8)sub_C47260(*(_QWORD *)(v189 + 24), (__int64)&v209, a1, v58, v59, v60) )
      goto LABEL_75;
    if ( BYTE4(v199[1]) )
    {
      v97 = sub_2205DB0(v199, &v209);
      if ( v97 >= 0 )
      {
        v98 = v97 > 0;
        goto LABEL_81;
      }
    }
    else
    {
      v99 = sub_2205E20(v199, &v209);
      v98 = v99 > 0;
      if ( v99 >= 0 )
      {
LABEL_81:
        v71 = v189;
        if ( !v98 )
          goto LABEL_82;
        goto LABEL_58;
      }
    }
LABEL_84:
    LODWORD(v8) = sub_C12F40(a3, 1, v189);
LABEL_37:
    if ( v209.m128i_i32[2] > 0x40u && v209.m128i_i64[0] )
      operator delete[]((void *)v209.m128i_i64[0]);
    if ( LODWORD(v199[1]) > 0x40 && v199[0] )
      operator delete[](v199[0]);
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
    v209.m128i_i32[0] = sub_AAE100(*(_QWORD *)(a1 + 16), v7, v15, v11);
    sub_C16A40((__int64)v199, 0, &v209);
    si128.m128i_i32[0] = sub_AAE100(*(_QWORD *)(a1 + 16), v8, v44, v45);
    sub_C16A40((__int64)&v209, 0, &si128);
    LODWORD(v8) = sub_C69A80(*(_QWORD *)(v189 + 16), (__int64)v199, a1, v46, v47, v48);
    if ( !(_BYTE)v8 )
    {
      if ( (unsigned __int8)sub_C11850(a1) )
      {
        sub_C69A80(*(_QWORD *)(v189 + 24), (__int64)&v209, a1, v52, v53, v54);
        goto LABEL_37;
      }
      goto LABEL_75;
    }
    if ( !(unsigned __int8)sub_C69A80(*(_QWORD *)(v189 + 24), (__int64)&v209, a1, v49, v50, v51) )
    {
LABEL_75:
      LODWORD(v8) = 0;
      goto LABEL_37;
    }
    if ( (int)sub_21EE7D0(v199, &v209) >= 0 )
    {
      v70 = sub_21EE7D0(v199, &v209);
      v71 = v189;
      if ( v70 <= 0 )
      {
LABEL_82:
        LODWORD(v8) = sub_C12F40(a3, 2, v71);
        goto LABEL_37;
      }
LABEL_58:
      LODWORD(v8) = sub_C12F40(a3, 3, v71);
      goto LABEL_37;
    }
    goto LABEL_84;
  }
  LOBYTE(v8) = (_BYTE)v11 == 14 || (_BYTE)v15 == 14;
  if ( (_BYTE)v8 )
  {
    LODWORD(v193) = 1;
    si128.m128i_i64[1] = 0;
    BYTE4(v193) = 0;
    v195 = 1;
    v194 = nullptr;
    v196 = 0;
    v18 = sub_21F90F0();
    if ( v18 == sub_21F90D0(v13, a2, v19) )
    {
      sub_21FFBD0(v197, v18);
      sub_21FFBD0(v198, v18);
      LODWORD(v200) = 1;
      v199[1] = nullptr;
      BYTE4(v200) = 0;
      v202 = 1;
      v201 = nullptr;
      v203 = 0;
      sub_21FFBD0(&v204, v18);
      sub_21FFBD0(v207, v18);
    }
    else
    {
      sub_21FBA00(v197, v18);
      sub_21FBA00(v198, v18);
      LODWORD(v200) = 1;
      v199[1] = nullptr;
      BYTE4(v200) = 0;
      v202 = 1;
      v201 = nullptr;
      v203 = 0;
      sub_21FBA00(&v204, v18);
      sub_21FBA00(v207, v18);
    }
    if ( ((*(_WORD *)(v189 + 2) >> 3) & 0x3Fu) - 21 <= 0xA )
    {
      v209 = 0u;
      v211[0] |= 1u;
      v210 = 0;
      v212 = 0;
      ptr = v215;
      v214 = 0x800000000LL;
      v216 = 0;
      v23 = *(__m128i **)(v189 + 16);
      v190.m128i_i64[0] = a1;
      v190.m128i_i64[1] = (__int64)&v209;
      v191 = 0;
      sub_C5C820(&v190, v23, v189, v20, v21, v22);
      if ( ptr != v215 )
        free(ptr);
LABEL_12:
      v24 = 0;
      if ( !(unsigned __int8)sub_C11850(a1) )
        goto LABEL_45;
      goto LABEL_13;
    }
    v64 = sub_F58100(*v9);
    v69 = *(_QWORD *)(v189 + 16);
    v209.m128i_i64[0] = a1;
    if ( v64 )
    {
      v209.m128i_i64[1] = (__int64)v197;
      v24 = sub_C6ACF0((__int64 **)&v209, v69, v65, v66, v67, v68);
      if ( !v24 )
        goto LABEL_12;
      si128.m128i_i8[0] = 0;
      sub_C213B0((__int64)&v209, v197[0]);
      sub_C177C0(v198, v209.m128i_i64);
      sub_9955A0(&v209);
    }
    else
    {
      v209.m128i_i64[1] = (__int64)&si128;
      v24 = sub_C72E70(&v209, v69, v65, v66, v67, v68);
      if ( !v24 )
        goto LABEL_12;
    }
LABEL_13:
    v25 = sub_F58100(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v189 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
    v30 = *(_QWORD *)(v189 + 24);
    v209.m128i_i64[0] = a1;
    if ( v25 )
    {
      v209.m128i_i64[1] = (__int64)&v204;
      if ( (unsigned __int8)sub_C6ACF0((__int64 **)&v209, v30, v26, v27, v28, v29) && v24 )
      {
        LOBYTE(v199[0]) = 0;
        sub_C213B0((__int64)&v209, v204);
        sub_C177C0(v207, v209.m128i_i64);
        sub_9955A0(&v209);
LABEL_16:
        if ( si128.m128i_i8[0] )
        {
          if ( (unsigned int)v193 <= 0x40 )
            v31 = (void *)si128.m128i_i64[1] == v199[1];
          else
            v31 = sub_2205D70(&si128.m128i_u64[1], &v199[1]);
          v32 = 0;
          if ( v31 )
          {
            if ( v195 <= 0x40 )
              v33 = v194 == v201;
            else
              v33 = sub_2205D70(&v194, &v201);
            v32 = 2 * (unsigned int)(v33 != 0);
          }
          v34 = v189;
        }
        else
        {
          v118 = sub_C16E30(v197, (__int64)&v204);
          v119 = sub_C16E30(v198, (__int64)v207);
          v34 = v189;
          if ( v118 != 1 || (v32 = 2, v119 != 1) )
            v32 = 0;
        }
        LODWORD(v8) = sub_C12F40(a3, v32, v34);
        goto LABEL_46;
      }
    }
    else
    {
      v209.m128i_i64[1] = (__int64)v199;
      if ( (unsigned __int8)sub_C72E70(&v209, v30, v26, v27, v28, v29) && v24 )
        goto LABEL_16;
    }
LABEL_45:
    LODWORD(v8) = 0;
LABEL_46:
    sub_C17D80((__int64)v199);
    sub_C17D80((__int64)&si128);
    return (unsigned int)v8;
  }
  if ( (unsigned __int8)sub_F58100(v13) && (unsigned __int8)sub_F58100(*v16) )
  {
    sub_C11060((__int64)v199);
    sub_C11060((__int64)&v209);
    v72 = *(_QWORD *)(v189 + 24);
    si128.m128i_i64[0] = a1;
    si128.m128i_i64[1] = (__int64)v199;
    if ( (unsigned __int8)sub_C6ACF0((__int64 **)&si128, v72, v73, v74, v75, v76) )
    {
      v133 = *(_QWORD *)(v189 + 16);
      si128.m128i_i64[0] = a1;
      si128.m128i_i64[1] = (__int64)&v209;
      if ( (unsigned __int8)sub_C6ACF0((__int64 **)&si128, v133, v77, v78, v79, v80) )
      {
        v134 = (unsigned int)sub_C16E30(&v209, (__int64)v199);
        if ( *(_BYTE *)(a1 + 8) != 1
          && (_DWORD)v134 == 3
          && (si128.m128i_i32[0] = sub_C1D530(v189, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2320LL)),
              sub_C1BE80(si128.m128i_i32)) )
        {
          sub_E33C10(a1, v189, 2412, 0);
        }
        else
        {
          LODWORD(v8) = sub_C12F40(a3, (unsigned int)dword_23EC190[v134], v189);
        }
      }
    }
    else if ( (unsigned __int8)sub_C11850(a1) )
    {
      v85 = *(_QWORD *)(v189 + 16);
      si128.m128i_i64[0] = a1;
      si128.m128i_i64[1] = (__int64)&v209;
      sub_C6ACF0((__int64 **)&si128, v85, v81, v82, v83, v84);
    }
    sub_9955A0(&v209);
    sub_9955A0(v199);
    return (unsigned int)v8;
  }
  v38 = *(_QWORD *)(*(_QWORD *)(*v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v39 = *(_BYTE *)(v38 + 16);
  if ( v39 != 42 )
  {
    if ( v39 != 33 )
    {
      if ( v39 == 13 && ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) == 0x1E8 )
      {
        v211[0] |= 1u;
        v209 = 0u;
        ptr = v215;
        v214 = 0x800000000LL;
        v210 = 0;
        v212 = 0;
        v216 = 0;
        v120 = *(_QWORD *)(v189 + 16);
        v199[0] = (void *)a1;
        v199[1] = &v209;
        LOBYTE(v200) = 0;
        if ( (unsigned __int8)sub_C48CF0((__m128i *)v199, v120, v38, v35, v36, v37) )
        {
          v125 = *(_QWORD *)(v189 + 24);
          v199[0] = (void *)a1;
          v199[1] = &v209;
          LOBYTE(v200) = 0;
          if ( (unsigned __int8)sub_C48CF0((__m128i *)v199, v125, v121, v122, v123, v124) )
            LODWORD(v8) = sub_C12F40(a3, 2, v189);
        }
LABEL_92:
        v96 = ptr;
        if ( ptr == v215 )
          return (unsigned int)v8;
        goto LABEL_73;
      }
LABEL_30:
      v40 = a4[1];
      v41 = **a4;
      if ( ((*(_WORD *)(v41 + 2) >> 3) & 0x3Fu) > 1 )
      {
        if ( ((*(_WORD *)(v41 + 2) >> 3) & 0x3F) == 0x20 )
        {
          sub_C3FAF0(*v40, *(_QWORD *)(v41 + 16), v38, v35, v36);
          LODWORD(v8) = sub_C44E70(v40, *(_QWORD *)(v41 + 24), v104, v105, v106, v107);
        }
        else
        {
          v42 = (__int64 *)sub_E33C10(*v40, **a4, 108, 0);
          v43 = sub_EEC8C0(v41);
          if ( v42 )
          {
            v209.m128i_i64[0] = v43;
            v209.m128i_i8[8] = 1;
            sub_AEC610(v42, v209.m128i_i64);
          }
        }
        return (unsigned int)v8;
      }
      v100 = **a4;
      v211[0] |= 1u;
      v216 = 0;
      v209 = 0u;
      v212 = 0;
      v101 = *v40;
      ptr = v215;
      v210 = 0;
      v214 = 0x800000000LL;
      if ( sub_C5E0F0(v101, v100, (__int64)&v209, 1u, v36, v37) )
      {
        v102 = *v40;
        BYTE4(v199[0]) &= ~1u;
        LODWORD(v199[0]) = 0;
        LODWORD(v8) = sub_C36570(v102, (_DWORD *)v41, *(_QWORD *)(v41 + 8), (__int64)&v209, (__int64)v199, 0);
        if ( (_BYTE)v8 )
        {
          if ( LODWORD(v199[0]) <= 0xD && (v103 = 8322, _bittest64(&v103, LODWORD(v199[0])))
            || (BYTE4(v199[0]) & 1) != 0 )
          {
            sub_A54D20(v40[1], (int *)v199);
          }
          else
          {
            LODWORD(v8) = sub_C12770((__int64)&v199[1], v40[1]);
          }
        }
        if ( LODWORD(v199[0]) > 1 )
          sub_A4F8E0((int *)v199);
      }
      goto LABEL_92;
    }
    v199[0] = nullptr;
    v209.m128i_i64[0] = 0;
    v199[1] = &v201;
    v200 = 0x400000000LL;
    v210 = 0x400000000LL;
    v209.m128i_i64[1] = (__int64)v211;
    v108 = *(unsigned __int16 **)(v189 + 16);
    si128.m128i_i64[0] = a1;
    si128.m128i_i64[1] = (__int64)v199;
    if ( !(unsigned __int8)sub_C37DE0(si128.m128i_i64, v108, (__int64)v211, v35, v36, v37) )
    {
      if ( (unsigned __int8)sub_C11850(a1) )
      {
        LODWORD(v8) = 0;
        v117 = *(unsigned __int16 **)(v189 + 24);
        si128.m128i_i64[0] = a1;
        si128.m128i_i64[1] = (__int64)&v209;
        sub_C37DE0(si128.m128i_i64, v117, v113, v114, v115, v116);
      }
      goto LABEL_98;
    }
    v126 = *(unsigned __int16 **)(v189 + 24);
    si128.m128i_i64[0] = a1;
    si128.m128i_i64[1] = (__int64)&v209;
    if ( !(unsigned __int8)sub_C37DE0(si128.m128i_i64, v126, v109, v110, v111, v112) )
      goto LABEL_98;
    if ( ((unsigned __int64)v199[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (unsigned __int8)sub_B79700((unsigned __int64)v199[0] & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v146 = (unsigned __int8 **)sub_E33C10(a1, v189, 2432, 0);
        if ( v146 )
          sub_AE9DF0(v146, (unsigned __int64)v199[0] & 0xFFFFFFFFFFFFFFF8LL, 0xAu);
        goto LABEL_98;
      }
      v127 = v209.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v209.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        if ( ((unsigned __int64)v199[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          goto LABEL_115;
        goto LABEL_131;
      }
    }
    else
    {
      v127 = v209.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v209.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_131;
    }
    if ( !(unsigned __int8)sub_B79700(v127) )
    {
      v128 = v209.m128i_i64[0];
      v129 = v209.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      v130 = (unsigned __int64)v199[0] & 0xFFFFFFFFFFFFFFF8LL;
      if ( ((unsigned __int64)v199[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( v129 )
        {
          if ( (*(_BYTE *)(v130 + 28) & 0x7Fu) - 35 <= 3 )
          {
            if ( sub_AED5B0((unsigned __int64)v199[0] & 0xFFFFFFFFFFFFFFF8LL) )
            {
              v149 = (unsigned __int8 **)sub_E33C90(a1, v189, 2395, 0);
              if ( v149 )
                sub_AE9DF0(v149, v130, 0xAu);
            }
            v128 = v209.m128i_i64[0];
          }
          if ( (*(_BYTE *)((v128 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 35 <= 3
            && sub_AED5B0(v128 & 0xFFFFFFFFFFFFFFF8LL) )
          {
            v150 = (unsigned __int8 **)sub_E33C90(a1, v189, 2395, 0);
            if ( v150 )
              sub_AE9DF0(v150, v128 & 0xFFFFFFFFFFFFFFF8LL, 0xAu);
          }
          v136 = sub_C106B0((__int64)v199, (__int64)&v209);
          v131 = v189;
          v132 = 2 * (unsigned int)(v136 != 0);
          goto LABEL_116;
        }
        goto LABEL_115;
      }
      if ( v129 )
      {
LABEL_115:
        v131 = v189;
        v132 = 0;
LABEL_116:
        LODWORD(v8) = sub_C12F40(a3, v132, v131);
        goto LABEL_98;
      }
LABEL_131:
      v131 = v189;
      v132 = 2;
      goto LABEL_116;
    }
    v147 = (unsigned __int8 **)sub_E33C10(a1, v189, 2432, 0);
    if ( v147 )
      sub_AE9DF0(v147, v209.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL, 0xAu);
LABEL_98:
    if ( (_BYTE *)v209.m128i_i64[1] != v211 )
      free((void *)v209.m128i_i64[1]);
    v96 = v199[1];
    if ( v199[1] == &v201 )
      return (unsigned int)v8;
LABEL_73:
    free(v96);
    return (unsigned int)v8;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
    goto LABEL_30;
  LOBYTE(v201) = (unsigned __int8)v201 | 1;
  v211[0] |= 1u;
  v205 = v207;
  v206 = 0x800000000LL;
  v214 = 0x800000000LL;
  v199[0] = nullptr;
  v199[1] = nullptr;
  v200 = 0;
  v204 = 0;
  v208 = 0;
  v209 = 0u;
  v210 = 0;
  v212 = 0;
  ptr = v215;
  v216 = 0;
  v86 = *(_QWORD *)(v189 + 16);
  si128.m128i_i64[0] = a1;
  si128.m128i_i64[1] = (__int64)v199;
  LOBYTE(v193) = 0;
  if ( !(unsigned __int8)sub_C48CF0(&si128, v86, (__int64)v215, v35, v36, v37) )
  {
    if ( (unsigned __int8)sub_C11850(a1) )
    {
      LODWORD(v8) = 0;
      v95 = *(_QWORD *)(v189 + 24);
      si128.m128i_i64[0] = a1;
      si128.m128i_i64[1] = (__int64)&v209;
      LOBYTE(v193) = 0;
      sub_C48CF0(&si128, v95, v91, v92, v93, v94);
    }
    goto LABEL_70;
  }
  v135 = *(_QWORD *)(v189 + 24);
  si128.m128i_i64[0] = a1;
  si128.m128i_i64[1] = (__int64)&v209;
  LOBYTE(v193) = 0;
  if ( !(unsigned __int8)sub_C48CF0(&si128, v135, v87, v88, v89, v90) )
    goto LABEL_70;
  if ( sub_C102D0((const __m128i *)v199, &v209) )
  {
    if ( ((v211[0] | (unsigned __int8)v201) & 1) != 0 )
    {
      v139 = *v9;
      v180 = (v174 + 55) & 0x3F;
      v140 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)sub_A97D20(*(_QWORD *)(a1 + 16), *v9));
      v138 = v140 & v200;
      v175 = v210 & v140;
      v141 = sub_A4F6F0(v199);
      if ( v180 > 4u || v141 )
        goto LABEL_142;
    }
    else
    {
      if ( ((v174 + 55) & 0x3Fu) > 4 )
      {
        v137 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)sub_A97D20(*(_QWORD *)(a1 + 16), *v9));
        v138 = v137 & v200;
        v175 = v210 & v137;
        sub_A4F6F0(v199);
LABEL_142:
        if ( v138 < v175 )
        {
          LODWORD(v8) = sub_C12F40(a3, 1, v189);
        }
        else if ( v138 <= v175 )
        {
          LODWORD(v8) = sub_C12F40(a3, 2, v189);
        }
        else
        {
          LODWORD(v8) = sub_C12F40(a3, 3, v189);
        }
        goto LABEL_70;
      }
      if ( sub_A4F6F0(v199) )
      {
        v151 = 0;
      }
      else
      {
        si128 = _mm_load_si128((const __m128i *)v199);
        si128.m128i_i64[0] = sub_A4F310(&si128);
        v151 = sub_C1BEF0((__int64)&si128, (__int64)&v209, v161, v162);
      }
      v152 = sub_C11920(v151, (__int64)&v201, (__int64)v211, &v190);
      if ( !v190.m128i_i8[0] && v152 < (unsigned int)v206 && v152 < (unsigned int)v214 )
      {
        v176 = *((_QWORD *)ptr + v152) & 0xFFFFFFFFFFFFFFF8LL;
        v153 = *((_QWORD *)v205 + v152) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v153 && (*(_BYTE *)(v153 + 28) & 0x7Fu) - 49 <= 2 )
        {
          if ( v176 && (*(_BYTE *)(v176 + 28) & 0x7Fu) - 49 <= 2 )
          {
            v154 = *(_QWORD *)(v153 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v153 + 16) & 4) != 0 )
              v154 = *(_QWORD *)v154;
            if ( (*(_BYTE *)(v154 + 8) & 0x7Fu) - 58 > 3 )
              BUG();
            if ( *(_BYTE *)(v154 + 9) >> 5 != 2 )
            {
              v188 = *((_QWORD *)v205 + v152) & 0xFFFFFFFFFFFFFFF8LL;
              if ( ((*(_BYTE *)(v176 + 29) >> 5) & 3) != ((*(_BYTE *)(v153 + 29) >> 5) & 3) )
              {
                v155 = (unsigned __int8 **)sub_E33C90(a1, v189, 2471, 0);
                v156 = v188;
                v181 = v155;
                if ( v155 )
                {
                  sub_AE9DF0(v155, v188, 0xAu);
                  sub_B9B310(v181, (*(_BYTE *)(v188 + 29) >> 5) & 3);
                  sub_AE9DF0(v181, v176, 0xAu);
                  sub_B9B310(v181, (*(_BYTE *)(v176 + 29) >> 5) & 3);
                  v156 = v188;
                }
                v157 = *(_QWORD *)(v156 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v156 + 16) & 4) != 0 )
                  v157 = *(_QWORD *)v157;
                if ( (*(_BYTE *)(v157 + 8) & 0x7Fu) - 58 > 3 )
                  v158 = 0;
                else
                  v158 = v157 - 64;
                if ( v181 )
                  sub_AE9DF0(v181, v158, 0xAu);
              }
            }
          }
          else
          {
            v182 = v152;
            v177 = *((_QWORD *)v205 + v152) & 0xFFFFFFFFFFFFFFF8LL;
            v164 = (unsigned __int8 **)sub_E33C90(a1, v189, 2470, 0);
            v165 = v177;
            v166 = *((_QWORD *)ptr + v182) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v166 )
            {
              if ( (*(_BYTE *)(v166 + 28) & 0x7Fu) - 59 >= 3 )
                v166 = 0;
            }
            else
            {
              v166 = 0;
            }
            if ( v164 )
            {
              v183 = v177;
              v178 = v164;
              sub_AE9DF0(v164, v166, 0xAu);
              v165 = v183;
              v164 = v178;
            }
            v167 = *(_QWORD *)(v165 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v165 + 16) & 4) != 0 )
              v167 = *(_QWORD *)v167;
            if ( (*(_BYTE *)(v167 + 8) & 0x7Fu) - 58 > 3 )
              v168 = 0;
            else
              v168 = v167 - 64;
            v184 = v165;
            if ( v164 )
            {
              v179 = v164;
              sub_AE9DF0(v164, v168, 0xAu);
              sub_AE9DF0(v179, v184, 0xAu);
            }
          }
        }
        else if ( v176 && (*(_BYTE *)(v176 + 28) & 0x7Fu) - 49 <= 2 )
        {
          v185 = v152;
          v169 = (unsigned __int8 **)sub_E33C90(a1, v189, 2470, 0);
          v170 = *((_QWORD *)v205 + v185) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v170 && (*(_BYTE *)(v170 + 28) & 0x7Fu) - 59 >= 3 )
            v170 = 0;
          if ( v169 )
          {
            v186 = v169;
            sub_AE9DF0(v169, v170, 0xAu);
            v169 = v186;
          }
          v171 = *(_QWORD *)(v176 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v176 + 16) & 4) != 0 )
            v171 = *(_QWORD *)v171;
          if ( (*(_BYTE *)(v171 + 8) & 0x7Fu) - 58 > 3 )
            v172 = 0;
          else
            v172 = v171 - 64;
          if ( v169 )
          {
            v187 = v169;
            sub_AE9DF0(v169, v172, 0xAu);
            sub_AE9DF0(v187, v176, 0xAu);
          }
        }
        else
        {
          sub_E33C90(a1, v189, 2469, 0);
        }
      }
      v139 = *v9;
      v159 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)sub_A97D20(*(_QWORD *)(a1 + 16), *v9));
      v138 = v159 & v200;
      v175 = v210 & v159;
      if ( sub_A4F6F0(v199) )
        goto LABEL_142;
    }
    si128 = _mm_load_si128((const __m128i *)v199);
    si128.m128i_i64[0] = sub_A4F310(&si128);
    v144 = sub_C1BEF0((__int64)&si128, v139, v142, v143);
    if ( (unsigned __int8)sub_F62670(*(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFF0LL), 0)
      || (v145 = sub_AAE980(*(_QWORD *)(a1 + 16), v144), v145 < v138)
      || v145 < v175 )
    {
      sub_E33C10(a1, v189, 108, 0);
      goto LABEL_70;
    }
    goto LABEL_142;
  }
  si128.m128i_i64[0] = (__int64)v199;
  v193 = &v189;
  si128.m128i_i64[1] = a1;
  v194 = &v209;
  if ( (unsigned int)v174 - 14 > 1 )
    goto LABEL_127;
  if ( !sub_A4F700(v199) && v200 || !sub_A4F700(&v209) && v210 )
  {
    v148 = sub_A4F700(&v209);
    LODWORD(v8) = sub_C19AB0(si128.m128i_i64, 0x9ABu, !v148);
    goto LABEL_70;
  }
  if ( (unsigned __int8)sub_C10810(a1, v199, &v209) )
  {
    LODWORD(v8) = sub_C19AB0(si128.m128i_i64, 0x979u, 0);
    goto LABEL_70;
  }
  if ( sub_C11D00((__int64 *)v199) || sub_C11D00(v209.m128i_i64) )
  {
    v160 = sub_C11D00((__int64 *)v199);
    LODWORD(v8) = sub_C19AB0(si128.m128i_i64, 0x99Eu, !v160);
    goto LABEL_70;
  }
  if ( (unsigned __int8)sub_C0FC70((__int64 *)v199) || (unsigned __int8)sub_C0FC70(v209.m128i_i64) )
  {
    v163 = sub_C0FC70((__int64 *)v199);
    LODWORD(v8) = sub_C19AB0(si128.m128i_i64, 0x9AEu, v163 ^ 1u);
    goto LABEL_70;
  }
  if ( sub_A4F700(v199) && !v200 && sub_C12AB0(*(_QWORD *)(a1 + 16), &v209) )
  {
    LODWORD(v8) = sub_C19AB0(si128.m128i_i64, 0x9A8u, 1);
    goto LABEL_70;
  }
  if ( sub_A4F700(&v209) && !v210 && sub_C12AB0(*(_QWORD *)(a1 + 16), (const __m128i *)v199) )
  {
    LODWORD(v8) = sub_C19AB0(si128.m128i_i64, 0x9A8u, 0);
    goto LABEL_70;
  }
  if ( sub_A4F700(&v209) && sub_C10180((__int64 *)v199) || sub_A4F700(v199) && sub_C10180(v209.m128i_i64) )
  {
    LODWORD(v8) = sub_C19AB0(si128.m128i_i64, 0x9AAu, 0);
    goto LABEL_70;
  }
  if ( v208 || v216 )
  {
LABEL_127:
    LODWORD(v8) = sub_C19AB0(si128.m128i_i64, 0x9A9u, 0);
    goto LABEL_70;
  }
  LODWORD(v8) = sub_C12F40(a3, 0, v189);
LABEL_70:
  if ( ptr != v215 )
    free(ptr);
  v96 = v205;
  if ( v205 != v207 )
    goto LABEL_73;
  return (unsigned int)v8;
}
