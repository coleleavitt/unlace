__int64 __fastcall sub_C4B920(__int64 a1, __int64 **a2, __int64 a3)
{
  char *v4; // rdi
  int v5; // ecx
  __int64 v6; // rsi
  char *v7; // rdx
  char *v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // r12
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  void (__fastcall ***v15)(void *); // rbp
  bool v16; // zf
  unsigned __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 *v21; // r13
  __int64 v22; // rsi
  unsigned int v23; // r12d
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rdi
  char v27; // dl
  unsigned int v28; // edx
  __int64 v29; // rbp
  __int64 v30; // rdx
  char v31; // al
  unsigned int v32; // eax
  int v33; // eax
  char v34; // cl
  __int64 v35; // rsi
  __int64 v36; // rax
  int v37; // edx
  __int64 *v38; // rbp
  void *v39; // r12
  __int64 v40; // r12
  _DWORD *v41; // rax
  void *v42; // rdi
  _DWORD *v43; // rax
  _QWORD *v44; // rdx
  __int64 v45; // rax
  int v46; // esi
  _QWORD *v47; // rcx
  __int64 v48; // r9
  _QWORD *v49; // r8
  _QWORD *i; // r13
  __int64 v51; // rax
  void *v52; // r12
  unsigned int v53; // r12d
  char v54; // dl
  unsigned int v55; // eax
  __int64 *v56; // rbp
  __int64 v57; // rsi
  __int64 v58; // rsi
  __int64 *v59; // rbp
  __int64 v60; // rsi
  __int64 v61; // rbp
  __int64 v62; // r14
  __int64 v63; // r13
  __int64 v64; // rax
  _QWORD *v65; // r15
  _QWORD *v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rdi
  _QWORD *v69; // r15
  _QWORD *v70; // r14
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // r14
  __int64 v76; // r15
  __int64 v77; // rbp
  __int64 *v78; // r9
  __int64 v79; // rax
  int v80; // edx
  unsigned __int64 v81; // rsi
  unsigned __int64 v82; // rdi
  _QWORD *v83; // rbp
  _QWORD *v84; // r12
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rbp
  void (__fastcall ***v88)(void *); // r12
  __int64 *v89; // r13
  unsigned int v90; // edx
  unsigned int v91; // ebp
  __int64 v92; // r12
  _QWORD *v93; // rdi
  int v94; // ecx
  __int64 v95; // rsi
  _QWORD *v96; // rdx
  _QWORD *v97; // rax
  unsigned int v98; // ebp
  __int64 v99; // r12
  __int64 v100; // rax
  _QWORD *v101; // rcx
  _QWORD *v102; // rdx
  __int64 v103; // rdx
  _QWORD *v104; // rbx
  void *v105; // rdi
  __int64 *v106; // rbx
  unsigned __int64 v107; // rbp
  __int64 v108; // rsi
  unsigned __int64 v109; // rdi
  __int64 result; // rax
  __int64 *v111; // rbx
  unsigned __int64 v112; // rbp
  __int64 v113; // rsi
  unsigned __int64 v114; // rdi
  __int64 *v115; // rbx
  unsigned __int64 v116; // rbp
  __int64 v117; // rsi
  __int64 v118; // rdi
  __int64 *v119; // rbx
  unsigned __int64 v120; // rbp
  __int64 v121; // rsi
  __int64 *v122; // rcx
  __int64 v123; // rdx
  char v124; // al
  unsigned int v125; // eax
  int v126; // eax
  __int64 *v127; // rbp
  __int64 v128; // rax
  __int64 v129; // rbp
  __int64 v130; // rsi
  __int64 v131; // rdx
  char v132; // al
  unsigned int v133; // eax
  int v134; // eax
  __int64 *v135; // rsi
  __int64 v136; // rax
  __int64 v137; // rax
  int v138; // edx
  _QWORD *v139; // rax
  __int64 v140; // rax
  int v141; // edx
  __int64 *v142; // rax
  __int64 *v143; // r13
  __int64 v144; // rax
  __int64 v145; // rax
  int v146; // edx
  __int64 v147; // rax
  __int64 v148; // rax
  void *v149; // rdi
  int v150; // eax
  int v151; // eax
  void *v152; // r13
  void *v153; // r13
  char v154; // al
  unsigned __int64 v155; // rax
  _QWORD *v156; // rcx
  __int64 v157; // rax
  int v158; // r8d
  _QWORD *v159; // rsi
  __int64 v160; // rdx
  _QWORD *v161; // r9
  _QWORD *v162; // rax
  __int64 v163; // rdx
  void *v164; // r12
  __int64 v165; // rbp
  _QWORD *v166; // rdi
  __int64 v167; // rax
  unsigned int v168; // esi
  unsigned int v169; // esi
  __int64 j; // rax
  __int64 v171; // rax
  _QWORD *v172; // rcx
  void *v173; // rdi
  int v174; // eax
  int v175; // eax
  void *v176; // rdi
  char v177; // al
  unsigned __int64 v178; // rax
  int v179; // eax
  int v180; // eax
  int v181; // ecx
  int v182; // r8d
  __int64 *v183; // rax
  __int64 v184; // rdx
  __int64 *v185; // rdi
  __int64 *v186; // rdx
  __int64 *v187; // rcx
  __int64 v188; // rsi
  __int64 v189; // rax
  int v190; // ecx
  _QWORD *v191; // rdx
  _QWORD *v192; // rsi
  __int64 v193; // rdx
  __m128i *v194; // rdi
  const __m128i *v195; // r8
  __int64 v196; // rdi
  __m128i *v197; // rsi
  __m128i *v198; // rdx
  __int64 v199; // rdx
  char **exception; // rbp
  const char *v201; // rax
  char **v202; // rbp
  const char *v203; // rax
  _Unwind_Exception *v204; // [rsp+0h] [rbp-2B8h]
  __int64 **v205; // [rsp+8h] [rbp-2B0h]
  void *v206; // [rsp+10h] [rbp-2A8h]
  void *v207; // [rsp+10h] [rbp-2A8h]
  void *v208; // [rsp+10h] [rbp-2A8h]
  void *v209; // [rsp+10h] [rbp-2A8h]
  void *v210; // [rsp+10h] [rbp-2A8h]
  int v211; // [rsp+10h] [rbp-2A8h]
  __int64 v212; // [rsp+18h] [rbp-2A0h]
  __int64 *v213; // [rsp+20h] [rbp-298h]
  void *v214; // [rsp+20h] [rbp-298h]
  unsigned int v215; // [rsp+20h] [rbp-298h]
  char v216; // [rsp+30h] [rbp-288h]
  void *v217; // [rsp+30h] [rbp-288h]
  void *v218; // [rsp+30h] [rbp-288h]
  char v219; // [rsp+30h] [rbp-288h]
  void *v220; // [rsp+30h] [rbp-288h]
  void *v221; // [rsp+30h] [rbp-288h]
  _QWORD *v222; // [rsp+30h] [rbp-288h]
  int v223; // [rsp+38h] [rbp-280h]
  int v224; // [rsp+40h] [rbp-278h]
  __int64 v225; // [rsp+40h] [rbp-278h]
  __int64 *v226; // [rsp+40h] [rbp-278h]
  int v227; // [rsp+40h] [rbp-278h]
  _QWORD *v228; // [rsp+48h] [rbp-270h]
  int v230; // [rsp+60h] [rbp-258h]
  __int64 *v231; // [rsp+60h] [rbp-258h]
  _QWORD *v232; // [rsp+60h] [rbp-258h]
  __int64 v233; // [rsp+60h] [rbp-258h]
  unsigned __int64 v234; // [rsp+70h] [rbp-248h]
  size_t v235; // [rsp+78h] [rbp-240h]
  int v236; // [rsp+78h] [rbp-240h]
  __int64 v237; // [rsp+80h] [rbp-238h]
  const __m128i *v238; // [rsp+88h] [rbp-230h]
  __int64 v239; // [rsp+88h] [rbp-230h]
  unsigned int v240; // [rsp+98h] [rbp-220h]
  int v241; // [rsp+98h] [rbp-220h]
  char v242[8]; // [rsp+B8h] [rbp-200h] BYREF
  unsigned __int64 v243; // [rsp+C0h] [rbp-1F8h] BYREF
  _QWORD *v244; // [rsp+C8h] [rbp-1F0h]
  _QWORD v245[2]; // [rsp+D0h] [rbp-1E8h] BYREF
  _QWORD v246[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  __int64 v247; // [rsp+F0h] [rbp-1C8h] BYREF
  __int64 v248; // [rsp+F8h] [rbp-1C0h]
  _QWORD v249[2]; // [rsp+100h] [rbp-1B8h] BYREF
  __int64 v250; // [rsp+110h] [rbp-1A8h] BYREF
  int v251[2]; // [rsp+118h] [rbp-1A0h]
  __int64 v252; // [rsp+120h] [rbp-198h] BYREF
  __int64 v253; // [rsp+128h] [rbp-190h]
  char v254; // [rsp+130h] [rbp-188h]
  __m128 v255; // [rsp+140h] [rbp-178h] BYREF
  __int64 v256; // [rsp+150h] [rbp-168h]
  __int64 v257; // [rsp+158h] [rbp-160h] BYREF
  __int64 v258; // [rsp+160h] [rbp-158h]
  char v259; // [rsp+168h] [rbp-150h]
  _BYTE v260[16]; // [rsp+170h] [rbp-148h] BYREF
  _QWORD *v261; // [rsp+180h] [rbp-138h]
  unsigned int v262; // [rsp+188h] [rbp-130h]
  _QWORD *v263; // [rsp+198h] [rbp-120h]
  unsigned int v264; // [rsp+1A0h] [rbp-118h]
  __int64 *v265; // [rsp+1E8h] [rbp-D0h]
  __m128i v266; // [rsp+1F0h] [rbp-C8h] BYREF
  __int64 *v267; // [rsp+200h] [rbp-B8h]
  unsigned __int64 v268; // [rsp+208h] [rbp-B0h]
  __int64 *v269; // [rsp+210h] [rbp-A8h]
  __int64 v270; // [rsp+218h] [rbp-A0h]
  __int64 v271; // [rsp+220h] [rbp-98h]
  __int64 v272; // [rsp+228h] [rbp-90h]
  unsigned __int64 v273; // [rsp+230h] [rbp-88h]
  __int64 *v274; // [rsp+238h] [rbp-80h]
  void *s; // [rsp+240h] [rbp-78h]
  __int64 v276; // [rsp+248h] [rbp-70h]
  void *v277; // [rsp+250h] [rbp-68h]
  __int64 v278; // [rsp+258h] [rbp-60h]
  int v279; // [rsp+260h] [rbp-58h]
  __int64 v280; // [rsp+268h] [rbp-50h]
  _QWORD v281[9]; // [rsp+270h] [rbp-48h] BYREF

  v205 = a2;
  if ( *(_DWORD *)(a1 + 756) || *(_DWORD *)(a1 + 760) )
  {
    v4 = *(char **)(a1 + 744);
    v5 = 0;
    v6 = *(unsigned int *)(a1 + 752);
    v7 = &v4[24 * v6];
    v8 = *(char **)(a1 + 744);
    if ( v4 == v7 )
      goto LABEL_18;
    do
    {
      while ( *(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = 0;
        v8 += 24;
        if ( v7 == v8 )
          goto LABEL_8;
      }
      v8 += 24;
      ++v5;
    }
    while ( v7 != v8 );
LABEL_8:
    if ( (unsigned int)v6 <= 0x10 || 3 * (int)v6 >= (unsigned int)(4 * v5) )
      goto LABEL_18;
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(a1 + 752);
      *(_QWORD *)(a1 + 744) = 0;
      v9 >>= 1;
      v10 = v9;
      *(_DWORD *)(a1 + 752) = v9;
      v11 = sub_186B270(24LL * v9);
      if ( !v9 )
      {
LABEL_17:
        *(_QWORD *)(a1 + 744) = v11;
LABEL_18:
        *(_QWORD *)(a1 + 756) = 0;
        goto LABEL_19;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 744) = 0;
      v168 = (unsigned int)v6 >> 1;
      v10 = v168;
      *(_DWORD *)(a1 + 752) = v168;
      v11 = sub_186B270(24LL * v168);
    }
    v12 = (_QWORD *)(v11 + 24 * v10);
    v13 = (_QWORD *)v11;
    do
    {
      *v13 = 0;
      v13 += 3;
      *(v13 - 2) = 0;
    }
    while ( v13 != v12 );
    v14 = v11;
    if ( ((24 * (_BYTE)v10) & 8) == 0 || (v14 = v11 + 24, *(_QWORD *)(v11 + 16) = 0, (_QWORD *)(v11 + 24) != v12) )
    {
      do
      {
        *(_QWORD *)(v14 + 16) = 0;
        v14 += 48;
        *(_QWORD *)(v14 - 8) = 0;
      }
      while ( (_QWORD *)v14 != v12 );
    }
    goto LABEL_17;
  }
LABEL_19:
  v15 = *(void (__fastcall ****)(void *))(a1 + 784);
  if ( v15 )
  {
    v16 = (*((_DWORD *)v15 + 2))-- == 1;
    if ( v16 )
    {
      (**v15)(v15);
      sub_186B220(v15);
    }
  }
  v17 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 784) = 0;
  v267 = nullptr;
  v234 = v17;
  v268 = v17;
  v273 = v17;
  s = v281;
  v269 = nullptr;
  v18 = *v205;
  v270 = 0;
  v271 = 0;
  v272 = 0;
  v274 = nullptr;
  v276 = 1;
  v277 = nullptr;
  v278 = 0;
  v279 = 1065353216;
  v280 = 0;
  v281[0] = 0;
  v266 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
  sub_EE4940(v242, "lia2card", v18);
  sub_F735C0(v260, *(_QWORD *)(a1 + 16));
  v19 = *v205;
  v20 = (*v205)[9];
  v21 = *v205;
  if ( v20 )
  {
    v22 = *v19;
    v23 = 0;
    while ( 1 )
    {
      v26 = v20;
      v27 = *(_BYTE *)(v20 + 3) >> 6;
      if ( v27 )
      {
        if ( v27 == 1 )
          goto LABEL_52;
      }
      else
      {
        do
        {
          v26 = *(_QWORD *)(v26 + 16);
          v27 = *(_BYTE *)(v26 + 3) >> 6;
        }
        while ( !v27 );
        if ( v27 == 1 )
        {
LABEL_52:
          if ( v23 >= *(_DWORD *)(v26 + 4) + 1 )
            break;
          goto LABEL_35;
        }
      }
      if ( v27 == 2 )
        v28 = *(_DWORD *)(v26 + 4) - 1;
      else
        v28 = *(_DWORD *)(v26 + 4);
      if ( v23 >= v28 )
        break;
LABEL_35:
      v29 = v19[11];
      if ( !v29 )
        goto LABEL_44;
      v30 = v19[11];
      v31 = *(_BYTE *)(v29 + 3) >> 6;
      if ( v31 )
      {
        if ( v31 != 1 )
          goto LABEL_38;
      }
      else
      {
        do
        {
          v30 = *(_QWORD *)(v30 + 16);
          v31 = *(_BYTE *)(v30 + 3) >> 6;
        }
        while ( !v31 );
        if ( v31 != 1 )
        {
LABEL_38:
          if ( v31 == 2 )
            v32 = *(_DWORD *)(v30 + 4) - 1;
          else
            v32 = *(_DWORD *)(v30 + 4);
          if ( v23 >= v32 )
            goto LABEL_44;
          goto LABEL_41;
        }
      }
      if ( v23 >= *(_DWORD *)(v30 + 4) + 1 )
        goto LABEL_44;
LABEL_41:
      v33 = 17;
      do
      {
        if ( *(char *)(v29 + 3) >= 0 )
        {
          if ( v23 == *(_DWORD *)(v29 + 4) )
            goto LABEL_44;
        }
        else if ( *(_BYTE *)(v29 + 3) >> 6 != 2 )
        {
          goto LABEL_44;
        }
        v29 = *(_QWORD *)(v29 + 16);
        --v33;
      }
      while ( v33 );
      LODWORD(v206) = (_DWORD)v19;
      sub_233F80((__int64 *)(v22 + 616), (_DWORD *)v19 + 22);
      v21 = *v205;
LABEL_44:
      v34 = *((_BYTE *)v21 + 123);
      v35 = *v21;
      if ( (v34 & 0x10) == 0 )
      {
        if ( (*((_BYTE *)v21 + 123) & 0x20) != 0 )
          goto LABEL_28;
LABEL_46:
        v36 = v21[9];
        v37 = 17;
        do
        {
          if ( *(char *)(v36 + 3) >= 0 )
          {
            if ( v23 == *(_DWORD *)(v36 + 4) )
              goto LABEL_28;
          }
          else if ( *(_BYTE *)(v36 + 3) >> 6 != 2 )
          {
            goto LABEL_28;
          }
          v36 = *(_QWORD *)(v36 + 16);
          --v37;
        }
        while ( v37 );
        sub_233F80((__int64 *)(v35 + 616), (_DWORD *)v21 + 18);
        goto LABEL_28;
      }
      v24 = v21[13];
      v25 = 17;
      do
      {
        if ( *(char *)(v24 + 3) >= 0 )
        {
          if ( v23 == *(_DWORD *)(v24 + 4) )
            goto LABEL_27;
        }
        else if ( *(_BYTE *)(v24 + 3) >> 6 != 2 )
        {
          goto LABEL_27;
        }
        v24 = *(_QWORD *)(v24 + 16);
        --v25;
      }
      while ( v25 );
      sub_236900((_QWORD *)(v35 + 672), v21 + 13);
      v21 = *v205;
      v34 = *((_BYTE *)*v205 + 123);
      v35 = **v205;
LABEL_27:
      if ( (v34 & 0x20) == 0 )
        goto LABEL_46;
LABEL_28:
      sub_F79EF0((int)v260);
      ++v23;
      v19 = *v205;
      v20 = (*v205)[9];
      v21 = *v205;
      if ( !v20 )
        break;
      v22 = *v19;
    }
  }
  v38 = v265;
  if ( !v265 || (v212 = (__int64)&v265[*((unsigned int *)v265 - 1)], v265 == (__int64 *)v212) )
  {
    v228 = nullptr;
    if ( (*((_BYTE *)v19 + 123) & 0x20) == 0 )
      goto LABEL_90;
LABEL_365:
    v228 = nullptr;
    goto LABEL_157;
  }
  v228 = nullptr;
  while ( 2 )
  {
    v40 = *v38;
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 16)) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      v201 = (const char *)sub_1829130(*(_QWORD *)(a1 + 16));
      sub_C418A0((__int64 *)&v255, v201);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, &v255);
      sub_233E40((__int64)&v255);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v245[0] = 0;
    v245[1] = 0;
    v246[0] = 1;
    v246[1] = 0;
    v247 = 0;
    v248 = 0;
    v249[0] = 1;
    v249[1] = 0;
    v41 = *(_DWORD **)(sub_15D1F10(v40) + 24);
    v42 = qword_1C7F2C0;
    if ( !v41 )
      goto LABEL_56;
    if ( *v41 != 5 )
      goto LABEL_56;
    if ( v41[1] != 1 )
      goto LABEL_56;
    if ( *(_WORD *)(v40 + 4) )
      goto LABEL_56;
    if ( *(_DWORD *)(v40 + 24) )
      goto LABEL_56;
    v43 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL);
    if ( v43 )
    {
      if ( *v43 != -1 )
        goto LABEL_56;
    }
    v250 = 0;
    v44 = v261;
    v254 = 0;
    v252 = 1;
    v45 = 48LL * v262;
    v257 = 1;
    v46 = *(_DWORD *)(v40 + 12);
    *(_QWORD *)v251 = 0;
    v253 = 0;
    v47 = &v261[(unsigned __int64)v45 / 8];
    v255 = (__m128)(unsigned __int64)v40;
    v48 = 48LL * (v46 & (v262 - 1));
    v259 = 0;
    v256 = 0;
    v49 = &v261[(unsigned __int64)v48 / 8];
    v258 = 0;
    if ( v48 != v45 )
    {
      for ( i = &v261[(unsigned __int64)v48 / 8]; v47 != i; i += 6 )
      {
        v51 = *i;
        if ( *i > 1u )
        {
          if ( *(_DWORD *)(v51 + 12) == v46 && v40 == v51 )
            goto LABEL_332;
        }
        else if ( !v51 )
        {
          goto LABEL_72;
        }
      }
    }
    if ( v261 == v49 )
    {
LABEL_72:
      v207 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v255.m128_u16[4]);
      sub_182CBA0(v207, &v257);
      v52 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v250);
      sub_182CBA0(v52, &v252);
      v42 = qword_1C7F2C0;
      goto LABEL_56;
    }
    while ( 1 )
    {
      v147 = *v44;
      if ( *v44 > 1u )
        break;
      if ( !v147 )
        goto LABEL_72;
LABEL_319:
      v44 += 6;
      if ( v49 == v44 )
        goto LABEL_72;
    }
    if ( *(_DWORD *)(v147 + 12) != v46 || v40 != v147 )
      goto LABEL_319;
    i = v44;
LABEL_332:
    v209 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v255.m128_u16[4]);
    sub_182CBA0(v209, &v257);
    v149 = qword_1C7F2C0;
    if ( (*((_BYTE *)i + 12) & 1) != 0 )
    {
      v214 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v250, i + 1);
      v149 = v214;
    }
    else
    {
      v150 = *((_DWORD *)i + 2);
      BYTE4(v250) &= ~1u;
      LODWORD(v250) = v150;
    }
    if ( (*((_BYTE *)i + 28) & 1) != 0 )
    {
      sub_182C690(v149, &v252, i + 3);
    }
    else
    {
      v151 = *((_DWORD *)i + 6);
      BYTE4(v252) &= ~1u;
      LODWORD(v252) = v151;
    }
    v254 = *((_BYTE *)i + 40);
    v152 = qword_1C7F2C0;
    if ( (v250 & 0x100000000LL) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v245, &v250);
      if ( (v252 & 0x100000000LL) != 0 )
        goto LABEL_377;
LABEL_338:
      BYTE4(v246[0]) &= ~1u;
      LODWORD(v246[0]) = v252;
      v213 = &v252;
    }
    else
    {
      BYTE4(v245[0]) &= ~1u;
      LODWORD(v245[0]) = v250;
      if ( (v252 & 0x100000000LL) == 0 )
        goto LABEL_338;
LABEL_377:
      v213 = &v252;
      sub_182C690(v152, v246, &v252);
    }
    v216 = v254;
    v153 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v250);
    sub_182CBA0(v153, &v252);
    v42 = qword_1C7F2C0;
    if ( v216 )
      goto LABEL_56;
    if ( (v246[0] & 0x100000000LL) != 0 )
      goto LABEL_56;
    if ( LODWORD(v246[0]) != 1 )
      goto LABEL_56;
    v154 = sub_182CFA0(qword_1C7F2C0, v245);
    v42 = qword_1C7F2C0;
    if ( !v154 )
      goto LABEL_56;
    v155 = sub_182D020(qword_1C7F2C0, v245);
    v42 = qword_1C7F2C0;
    if ( HIDWORD(v155) )
      goto LABEL_56;
    v250 = 0;
    v156 = v263;
    v254 = 0;
    v252 = 1;
    v157 = 48LL * v264;
    v257 = 1;
    v158 = *(_DWORD *)(v40 + 12);
    v159 = &v263[(unsigned __int64)v157 / 8];
    *(_QWORD *)v251 = 0;
    v253 = 0;
    v255 = (__m128)(unsigned __int64)v40;
    v160 = 48LL * (v158 & (v264 - 1));
    v259 = 0;
    v256 = 0;
    v161 = &v263[(unsigned __int64)v160 / 8];
    v258 = 0;
    if ( v160 == v157 )
    {
LABEL_387:
      if ( v263 != v161 )
      {
        do
        {
          v171 = *v156;
          if ( *v156 > 1u )
          {
            if ( *(_DWORD *)(v171 + 12) == v158 && v40 == v171 )
              goto LABEL_396;
          }
          else if ( !v171 )
          {
            break;
          }
          v156 += 6;
        }
        while ( v161 != v156 );
      }
LABEL_351:
      v217 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v255.m128_u16[4]);
      sub_182CBA0(v217, &v257);
      v164 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v250);
      sub_182CBA0(v164, &v252);
      v42 = qword_1C7F2C0;
      goto LABEL_56;
    }
    v162 = &v263[(unsigned __int64)v160 / 8];
    while ( 2 )
    {
      v163 = *v162;
      if ( *v162 <= 1u )
      {
        if ( !v163 )
          goto LABEL_351;
        goto LABEL_348;
      }
      if ( *(_DWORD *)(v163 + 12) != v158 || v40 != v163 )
      {
LABEL_348:
        v162 += 6;
        if ( v159 == v162 )
          goto LABEL_387;
        continue;
      }
      break;
    }
    v156 = v162;
LABEL_396:
    v232 = v156;
    v218 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v255.m128_u16[4]);
    sub_182CBA0(v218, &v257);
    v172 = v232;
    v173 = qword_1C7F2C0;
    if ( (*((_BYTE *)v232 + 12) & 1) != 0 )
    {
      v221 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v250, v232 + 1);
      v172 = v232;
      v173 = v221;
    }
    else
    {
      v174 = *((_DWORD *)v232 + 2);
      BYTE4(v250) &= ~1u;
      LODWORD(v250) = v174;
    }
    if ( (*((_BYTE *)v172 + 28) & 1) != 0 )
    {
      v222 = v172;
      sub_182C690(v173, &v252, v172 + 3);
      v172 = v222;
    }
    else
    {
      v175 = *((_DWORD *)v172 + 6);
      BYTE4(v252) &= ~1u;
      LODWORD(v252) = v175;
    }
    v254 = *((_BYTE *)v172 + 40);
    v176 = qword_1C7F2C0;
    if ( (v250 & 0x100000000LL) != 0 )
    {
      v220 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v247, &v250);
      v176 = v220;
    }
    else
    {
      BYTE4(v247) &= ~1u;
      LODWORD(v247) = v250;
    }
    if ( (v252 & 0x100000000LL) != 0 )
    {
      sub_182C690(v176, v249, &v252);
    }
    else
    {
      BYTE4(v249[0]) &= ~1u;
      LODWORD(v249[0]) = v252;
    }
    v219 = v254;
    v210 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v250);
    sub_182CBA0(v210, &v252);
    v42 = qword_1C7F2C0;
    if ( v219 )
      goto LABEL_56;
    if ( (v249[0] & 0x100000000LL) != 0 )
      goto LABEL_56;
    if ( LODWORD(v249[0]) != 1 )
      goto LABEL_56;
    v177 = sub_182CFA0(qword_1C7F2C0, &v247);
    v42 = qword_1C7F2C0;
    if ( !v177 )
      goto LABEL_56;
    v178 = sub_182D020(qword_1C7F2C0, &v247);
    v42 = qword_1C7F2C0;
    if ( HIDWORD(v178) )
      goto LABEL_56;
    v211 = sub_182D020(qword_1C7F2C0, &v247);
    v179 = sub_182D020(qword_1C7F2C0, v245);
    v42 = qword_1C7F2C0;
    if ( *(_DWORD *)(a1 + 772) < (unsigned int)(v211 - v179) )
      goto LABEL_56;
    v215 = sub_182D020(qword_1C7F2C0, &v247);
    v180 = sub_182D020(qword_1C7F2C0, v245);
    v243 = v234;
    v244 = v228;
    sub_C445E0(&v255, a1, (int)&v243, v40, v180, v215);
    v234 = v243;
    v237 = v255.m128_i64[1];
    v213 = (__int64 *)v255.m128_u64[0];
    v228 = v244;
    sub_14EA0D0(&v266, v40, v255.m128_u64[0]);
    v223 = sub_182D020(qword_1C7F2C0, &v247);
    v227 = sub_182D020(qword_1C7F2C0, v245);
    v233 = *(unsigned int *)(a1 + 752);
    v181 = v233;
    v240 = v233 - 1;
    if ( 3 * (int)v233 < (unsigned int)(4 * (*(_DWORD *)(a1 + 756) + *(_DWORD *)(a1 + 760))) )
    {
      v241 = 2 * v233;
      v233 = (unsigned int)(2 * v233);
      v235 = 24LL * (unsigned int)(2 * v181);
      v189 = sub_186B270(v235);
      v190 = v241;
      if ( v241 )
      {
        v191 = (_QWORD *)v189;
        v192 = (_QWORD *)(v189 + 24 * v233);
        do
        {
          *v191 = 0;
          v191 += 3;
          *(v191 - 2) = 0;
        }
        while ( v191 != v192 );
        v193 = v189;
        if ( ((24 * (_BYTE)v233) & 8) == 0
          || (*(_QWORD *)(v189 + 16) = 0, v193 = v189 + 24, (_QWORD *)(v189 + 24) != v192) )
        {
          do
          {
            *(_QWORD *)(v193 + 16) = 0;
            v193 += 48;
            *(_QWORD *)(v193 - 8) = 0;
          }
          while ( (_QWORD *)v193 != v192 );
        }
      }
      v194 = *(__m128i **)(a1 + 744);
      v240 = v241 - 1;
      v195 = v194;
      v238 = (__m128i *)((char *)v194 + 24 * *(unsigned int *)(a1 + 752));
      if ( v194 != v238 )
      {
        do
        {
          if ( v195->m128i_i64[0] > 1uLL )
          {
            v196 = *(_DWORD *)(v195->m128i_i64[0] + 12) & v240;
            v197 = (__m128i *)(v189 + 24 * v196);
            if ( v235 == 24 * v196 )
            {
LABEL_461:
              if ( (__m128i *)v189 == v197 )
              {
LABEL_466:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v198 = (__m128i *)v189;
              while ( v198->m128i_i64[0] )
              {
                v198 = (__m128i *)((char *)v198 + 24);
                if ( v197 == v198 )
                  goto LABEL_466;
              }
            }
            else
            {
              v198 = (__m128i *)(v189 + 24 * v196);
              while ( v198->m128i_i64[0] )
              {
                v198 = (__m128i *)((char *)v198 + 24);
                if ( (__m128i *)(v189 + v235) == v198 )
                  goto LABEL_461;
              }
            }
            *v198 = _mm_loadu_si128(v195);
            v198[1].m128i_i64[0] = v195[1].m128i_i64[0];
          }
          v195 = (const __m128i *)((char *)v195 + 24);
        }
        while ( v238 != v195 );
        v194 = *(__m128i **)(a1 + 744);
      }
      if ( v194 )
      {
        v239 = v189;
        v236 = v190;
        sub_186B220(v194);
        v189 = v239;
        v190 = v236;
      }
      *(_DWORD *)(a1 + 752) = v190;
      *(_QWORD *)(a1 + 744) = v189;
      *(_DWORD *)(a1 + 760) = 0;
    }
    v182 = *(_DWORD *)(v40 + 12);
    v183 = *(__int64 **)(a1 + 744);
    v184 = 3LL * (v182 & v240);
    v185 = &v183[v184];
    if ( v184 == 3 * v233 )
    {
      v187 = nullptr;
LABEL_444:
      if ( v183 == v185 )
      {
LABEL_452:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v199 = *v183;
        if ( (unsigned __int64)*v183 > 1 )
        {
          if ( *(_DWORD *)(v199 + 12) == v182 && v40 == v199 )
          {
            *v183 = v40;
            *((_DWORD *)v183 + 2) = v227;
            *((_DWORD *)v183 + 3) = v223;
            v183[2] = (__int64)v213;
            goto LABEL_424;
          }
        }
        else
        {
          if ( !v199 )
          {
            if ( v187 )
            {
              --*(_DWORD *)(a1 + 760);
              v183 = v187;
            }
            *v183 = v40;
            *((_DWORD *)v183 + 2) = v227;
            *((_DWORD *)v183 + 3) = v223;
            v183[2] = (__int64)v213;
            ++*(_DWORD *)(a1 + 756);
            goto LABEL_424;
          }
          v187 = v183;
        }
        v183 += 3;
        if ( v185 == v183 )
          goto LABEL_452;
      }
    }
    v186 = &v183[v184];
    v187 = nullptr;
    while ( 2 )
    {
      v188 = *v186;
      if ( (unsigned __int64)*v186 > 1 )
      {
        if ( *(_DWORD *)(v188 + 12) == v182 && v40 == v188 )
        {
          *v186 = v40;
          *((_DWORD *)v186 + 2) = v227;
          *((_DWORD *)v186 + 3) = v223;
          v186[2] = (__int64)v213;
          goto LABEL_424;
        }
LABEL_415:
        v186 += 3;
        if ( &v183[3 * v233] == v186 )
          goto LABEL_444;
        continue;
      }
      break;
    }
    if ( v188 )
    {
      v187 = v186;
      goto LABEL_415;
    }
    if ( v187 )
    {
      --*(_DWORD *)(a1 + 760);
      v186 = v187;
    }
    *v186 = v40;
    *((_DWORD *)v186 + 2) = v227;
    *((_DWORD *)v186 + 3) = v223;
    v186[2] = (__int64)v213;
    ++*(_DWORD *)(a1 + 756);
LABEL_424:
    sub_C41880((__int64)v213, v237);
    v42 = qword_1C7F2C0;
LABEL_56:
    LODWORD(v206) = (_DWORD)v42;
    ++v38;
    sub_182CBA0(v42, &v247);
    sub_182CBA0(v42, v249);
    v39 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v245);
    sub_182CBA0(v39, v246);
    if ( (__int64 *)v212 != v38 )
      continue;
    break;
  }
  v19 = *v205;
  v21 = *v205;
  if ( (*((_BYTE *)*v205 + 123) & 0x20) != 0 )
    goto LABEL_153;
  v20 = v19[9];
LABEL_90:
  v53 = 0;
  if ( !v20 )
    goto LABEL_152;
  while ( 2 )
  {
    v54 = *(_BYTE *)(v20 + 3) >> 6;
    if ( v54 )
    {
      if ( v54 != 1 )
        goto LABEL_93;
LABEL_234:
      v55 = *(_DWORD *)(v20 + 4) + 1;
    }
    else
    {
      do
      {
        v20 = *(_QWORD *)(v20 + 16);
        v54 = *(_BYTE *)(v20 + 3) >> 6;
      }
      while ( !v54 );
      if ( v54 == 1 )
        goto LABEL_234;
LABEL_93:
      if ( v54 == 2 )
        v55 = *(_DWORD *)(v20 + 4) - 1;
      else
        v55 = *(_DWORD *)(v20 + 4);
    }
    if ( v53 >= v55 )
      goto LABEL_152;
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 16)) )
    {
      v202 = (char **)__cxa_allocate_exception(0x28u);
      v203 = (const char *)sub_1829130(*(_QWORD *)(a1 + 16));
      sub_C418A0((__int64 *)&v255, v203);
      *v202 = (char *)off_1C63670;
      sub_2333C0(v202 + 1, &v255);
      sub_233E40((__int64)&v255);
      __cxa_throw(v202, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v255.m128_u64[0] = 0;
    v255.m128_u64[1] = *(_QWORD *)(a1 + 16);
    v212 = v255.m128_i64[1];
    v56 = *v205;
    v57 = **v205;
    if ( (*((_BYTE *)*v205 + 123) & 0x20) != 0 )
    {
      v58 = *(_QWORD *)(v57 + 864);
      goto LABEL_99;
    }
    v140 = v56[9];
    v141 = 17;
    while ( 2 )
    {
      if ( *(char *)(v140 + 3) < 0 )
      {
        if ( *(_BYTE *)(v140 + 3) >> 6 != 2 )
        {
          v142 = (__int64 *)(*(_QWORD *)(v140 + 16) + 8LL * v53);
          goto LABEL_291;
        }
LABEL_293:
        v140 = *(_QWORD *)(v140 + 16);
        if ( !--v141 )
        {
          sub_233F80((__int64 *)(v57 + 616), (_DWORD *)v56 + 18);
          v142 = (__int64 *)(*(_QWORD *)(v56[9] + 16) + 8LL * v53);
          goto LABEL_291;
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v140 + 4) != v53 )
      goto LABEL_293;
    v142 = (__int64 *)(v140 + 8);
LABEL_291:
    v58 = *v142;
LABEL_99:
    sub_14EA2A0(&v266, v58, &v255);
    v59 = *v205;
    v60 = **v205;
    if ( (*((_BYTE *)*v205 + 123) & 0x20) != 0 )
    {
      v61 = v255.m128_u64[0];
      if ( v255.m128_u64[0] == *(_QWORD *)(v60 + 864) )
        goto LABEL_283;
      goto LABEL_101;
    }
    v137 = v59[9];
    v138 = 17;
    while ( 2 )
    {
      if ( *(char *)(v137 + 3) < 0 )
      {
        if ( *(_BYTE *)(v137 + 3) >> 6 != 2 )
        {
          v139 = (_QWORD *)(*(_QWORD *)(v137 + 16) + 8LL * v53);
          goto LABEL_282;
        }
LABEL_285:
        v137 = *(_QWORD *)(v137 + 16);
        if ( !--v138 )
        {
          sub_233F80((__int64 *)(v60 + 616), (_DWORD *)v59 + 18);
          v139 = (_QWORD *)(*(_QWORD *)(v59[9] + 16) + 8LL * v53);
          goto LABEL_282;
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v137 + 4) != v53 )
      goto LABEL_285;
    v139 = (_QWORD *)(v137 + 8);
LABEL_282:
    v61 = v255.m128_u64[0];
    if ( v255.m128_u64[0] == *v139 )
    {
LABEL_283:
      v63 = 0;
      goto LABEL_102;
    }
LABEL_101:
    v62 = *(_QWORD *)(a1 + 16);
    v63 = 0;
    if ( *(_DWORD *)(v62 + 712) )
    {
      v143 = *v205;
      if ( (*((_BYTE *)*v205 + 123) & 0x20) == 0 )
      {
        v145 = v143[9];
        v146 = 18;
        while ( --v146 )
        {
          if ( *(char *)(v145 + 3) >= 0 )
          {
            if ( *(_DWORD *)(v145 + 4) == v53 )
              goto LABEL_302;
          }
          else if ( *(_BYTE *)(v145 + 3) >> 6 != 2 )
          {
            goto LABEL_302;
          }
          v145 = *(_QWORD *)(v145 + 16);
        }
        sub_233F80((__int64 *)(**v205 + 616), (_DWORD *)v143 + 18);
      }
LABEL_302:
      v144 = sub_15DE370(v62);
      v63 = v144;
      if ( v144 )
        ++*(_DWORD *)(v144 + 8);
      v61 = v255.m128_u64[0];
    }
LABEL_102:
    v208 = (void *)(a1 + 40);
    v64 = *(_QWORD *)(a1 + 80);
    if ( v64 )
    {
      if ( *(_DWORD *)(v64 - 4) || *(_QWORD *)(a1 + 72) != **(_QWORD **)(a1 + 64) )
      {
        *(_DWORD *)(v64 - 4) = 0;
LABEL_106:
        v65 = *(_QWORD **)(a1 + 96);
        if ( v65 )
        {
          v66 = &v65[*((unsigned int *)v65 - 1)];
          if ( v65 >= v66 )
            goto LABEL_114;
          do
          {
            while ( 1 )
            {
              v67 = *v65;
              if ( *v65 )
              {
                v68 = *(_QWORD *)(a1 + 88);
                v16 = (*(_DWORD *)(v67 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( ++v65 >= v66 )
                goto LABEL_113;
            }
            sub_15D7BC0(v68, v67);
            ++v65;
          }
          while ( v65 < v66 );
LABEL_113:
          v65 = *(_QWORD **)(a1 + 96);
          if ( v65 )
LABEL_114:
            *((_DWORD *)v65 - 1) = 0;
        }
        v69 = *(_QWORD **)(a1 + 128);
        if ( v69 )
        {
          v70 = &v69[*((unsigned int *)v69 - 1)];
          if ( v69 >= v70 )
            goto LABEL_123;
          do
          {
            while ( 1 )
            {
              v71 = *v69;
              if ( *v69 )
              {
                v72 = *(_QWORD *)(a1 + 120);
                v16 = (*(_DWORD *)(v71 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( ++v69 >= v70 )
                goto LABEL_122;
            }
            sub_15D7BC0(v72, v71);
            ++v69;
          }
          while ( v69 < v70 );
LABEL_122:
          v69 = *(_QWORD **)(a1 + 128);
          if ( v69 )
LABEL_123:
            *((_DWORD *)v69 - 1) = 0;
        }
        v73 = *(_QWORD *)(a1 + 176);
        if ( v73 )
          *(_DWORD *)(v73 - 4) = 0;
        sub_15843E0(v208);
      }
    }
    else if ( *(_QWORD *)(a1 + 72) != **(_QWORD **)(a1 + 64) )
    {
      goto LABEL_106;
    }
    v16 = *(_BYTE *)(a1 + 56) == 0;
    v247 = 0;
    v250 = 0;
    v248 = v212;
    *(_QWORD *)v251 = v212;
    if ( v16 )
      sub_C4B590((__int64)v208, v61, &v247, &v250);
    else
      sub_C49520((__int64)v208, v61, &v247, &v250);
    v74 = *(_QWORD *)(a1 + 16);
    v75 = v247;
    v76 = v250;
    v206 = *(void **)v251;
    v213 = (__int64 *)v248;
    if ( !*(_DWORD *)(v74 + 712) )
    {
      v77 = 0;
      v78 = *v205;
      goto LABEL_131;
    }
    if ( v255.m128_u64[0] == v247 || v250 )
    {
      v122 = *v205;
    }
    else
    {
      v148 = sub_15DE370(v74);
      v76 = v148;
      if ( v148 )
        ++*(_DWORD *)(v148 + 8);
      v122 = *v205;
      v78 = *v205;
      if ( !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 712LL) )
      {
        v77 = 0;
        goto LABEL_131;
      }
    }
    v77 = v122[11];
    v78 = v122;
    if ( !v77 )
    {
LABEL_131:
      if ( (*((_BYTE *)v78 + 123) & 0x10) == 0 )
        goto LABEL_135;
      goto LABEL_132;
    }
    v123 = v122[11];
    v124 = *(_BYTE *)(v77 + 3) >> 6;
    if ( v124 )
    {
      if ( v124 != 1 )
        goto LABEL_244;
LABEL_275:
      if ( v53 >= *(_DWORD *)(v123 + 4) + 1 )
        goto LABEL_276;
    }
    else
    {
      do
      {
        v123 = *(_QWORD *)(v123 + 16);
        v124 = *(_BYTE *)(v123 + 3) >> 6;
      }
      while ( !v124 );
      if ( v124 == 1 )
        goto LABEL_275;
LABEL_244:
      if ( v124 == 2 )
        v125 = *(_DWORD *)(v123 + 4) - 1;
      else
        v125 = *(_DWORD *)(v123 + 4);
      if ( v53 >= v125 )
      {
LABEL_276:
        v77 = 0;
        goto LABEL_131;
      }
    }
    v126 = 17;
    while ( 2 )
    {
      if ( *(char *)(v77 + 3) < 0 )
      {
        if ( *(_BYTE *)(v77 + 3) >> 6 != 2 )
        {
          v127 = (__int64 *)(*(_QWORD *)(v77 + 16) + 8LL * v53);
          goto LABEL_251;
        }
LABEL_296:
        v77 = *(_QWORD *)(v77 + 16);
        if ( !--v126 )
        {
          v226 = v122;
          sub_233F80((__int64 *)(*v122 + 616), (_DWORD *)v122 + 22);
          v127 = (__int64 *)(*(_QWORD *)(v226[11] + 16) + 8LL * v53);
          goto LABEL_251;
        }
        continue;
      }
      break;
    }
    if ( v53 != *(_DWORD *)(v77 + 4) )
      goto LABEL_296;
    v127 = (__int64 *)(v77 + 8);
LABEL_251:
    v77 = *v127;
    if ( !v77 )
      goto LABEL_271;
    v128 = sub_15E2470(*(_QWORD *)(a1 + 16), v63, v76);
    v225 = v128;
    if ( v128 )
      ++*(_DWORD *)(v128 + 8);
    v129 = *(_QWORD *)(a1 + 16);
    v130 = (*v205)[11];
    if ( !v130 )
      goto LABEL_266;
    v131 = (*v205)[11];
    v132 = *(_BYTE *)(v130 + 3) >> 6;
    if ( v132 )
    {
      if ( v132 != 1 )
        goto LABEL_257;
LABEL_329:
      if ( v53 >= *(_DWORD *)(v131 + 4) + 1 )
        goto LABEL_330;
    }
    else
    {
      do
      {
        v131 = *(_QWORD *)(v131 + 16);
        v132 = *(_BYTE *)(v131 + 3) >> 6;
      }
      while ( !v132 );
      if ( v132 == 1 )
        goto LABEL_329;
LABEL_257:
      if ( v132 == 2 )
        v133 = *(_DWORD *)(v131 + 4) - 1;
      else
        v133 = *(_DWORD *)(v131 + 4);
      if ( v53 >= v133 )
      {
LABEL_330:
        v130 = 0;
        goto LABEL_266;
      }
    }
    v134 = 18;
    while ( 2 )
    {
      if ( !--v134 )
      {
        v231 = *v205;
        sub_233F80((__int64 *)(**v205 + 616), (_DWORD *)*v205 + 22);
        v135 = (__int64 *)(*(_QWORD *)(v231[11] + 16) + 8LL * v53);
        goto LABEL_265;
      }
      if ( *(char *)(v130 + 3) < 0 )
      {
        if ( *(_BYTE *)(v130 + 3) >> 6 != 2 )
        {
          v135 = (__int64 *)(*(_QWORD *)(v130 + 16) + 8LL * v53);
          goto LABEL_265;
        }
        goto LABEL_306;
      }
      if ( *(_DWORD *)(v130 + 4) != v53 )
      {
LABEL_306:
        v130 = *(_QWORD *)(v130 + 16);
        continue;
      }
      break;
    }
    v135 = (__int64 *)(v130 + 8);
LABEL_265:
    v130 = *v135;
LABEL_266:
    v136 = sub_15DE0E0(v129, v130, v225);
    v77 = v136;
    if ( v136 )
      ++*(_DWORD *)(v136 + 8);
    if ( v225 )
    {
      v230 = *(_DWORD *)(v225 + 8);
      *(_DWORD *)(v225 + 8) = v230 - 1;
      if ( v230 == 1 )
        sub_15D7BC0(v212, v225);
    }
LABEL_271:
    v78 = *v205;
    if ( (*((_BYTE *)*v205 + 123) & 0x10) != 0 )
    {
LABEL_132:
      v79 = v78[13];
      v80 = 17;
      do
      {
        if ( *(char *)(v79 + 3) >= 0 )
        {
          if ( *(_DWORD *)(v79 + 4) == v53 )
            goto LABEL_135;
        }
        else if ( *(_BYTE *)(v79 + 3) >> 6 != 2 )
        {
          goto LABEL_135;
        }
        v79 = *(_QWORD *)(v79 + 16);
        --v80;
      }
      while ( v80 );
      v224 = (int)v78;
      sub_236900((_QWORD *)(*v78 + 672), v78 + 13);
      LODWORD(v78) = v224;
    }
LABEL_135:
    sub_EDBFA0((int)v78);
    if ( v77 )
    {
      v16 = (*(_DWORD *)(v77 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v212, v77);
    }
    if ( v76 )
    {
      v16 = (*(_DWORD *)(v76 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v206, v76);
    }
    if ( v63 )
    {
      v16 = (*(_DWORD *)(v63 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v212, v63);
    }
    v81 = v255.m128_u64[0];
    if ( v255.m128_u64[0] )
    {
      v82 = v255.m128_u64[1];
      v16 = (*(_DWORD *)(v255.m128_u64[0] + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v82, v81);
    }
    if ( v75 )
    {
      v16 = (*(_DWORD *)(v75 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v213, v75);
    }
    ++v53;
    v19 = *v205;
    v21 = *v205;
    if ( (*((_BYTE *)*v205 + 123) & 0x20) == 0 )
    {
      v20 = v19[9];
      if ( !v20 )
      {
LABEL_152:
        v21 = v19;
        break;
      }
      continue;
    }
    break;
  }
LABEL_153:
  if ( !v228 )
    goto LABEL_365;
  v83 = &v228[*((unsigned int *)v228 - 1)];
  if ( v83 != v228 )
  {
    v84 = v228;
    do
    {
      sub_EDBA20((int)v21, *v84++, 0, v204, (int)v205, (int)v206, v212, (__int64)v213);
      v21 = *v205;
    }
    while ( v83 != v84 );
  }
LABEL_157:
  v85 = *(_QWORD *)(a1 + 784);
  if ( v85 )
  {
    v86 = sub_1336AB0(v21[1], v85);
    v87 = v86;
    if ( v86 )
      ++*(_DWORD *)(v86 + 8);
    v88 = (void (__fastcall ***)(void *))v21[1];
    if ( v88 )
    {
      v16 = (*((_DWORD *)v88 + 2))-- == 1;
      if ( v16 )
      {
        (**v88)(v88);
        sub_186B220(v88);
      }
    }
    v21[1] = v87;
    v21 = *v205;
  }
  *((_DWORD *)v21 + 30) = (*((_DWORD *)v21 + 30) + 1) & 0x3FFFFFF | v21[15] & 0xFC000000;
  v89 = *v205;
  if ( *v205 )
    ++*((_DWORD *)v89 + 8);
  v90 = *(_DWORD *)(a3 + 8);
  v91 = *(_DWORD *)(a3 + 12);
  if ( v90 >= v91 )
  {
    v165 = 2 * v91;
    v92 = sub_186B270(8 * v165);
    v90 = *(_DWORD *)(a3 + 8);
    v166 = *(_QWORD **)a3;
    if ( v90 )
    {
      if ( v90 - 1 <= 2 || (_QWORD *)v92 == v166 + 1 )
      {
        for ( j = 0; j != v90; ++j )
          *(_QWORD *)(v92 + j * 8) = v166[j];
      }
      else
      {
        v167 = 0;
        do
        {
          *(__m128i *)(v92 + v167 * 8) = _mm_loadu_si128((const __m128i *)&v166[v167]);
          v167 += 2;
        }
        while ( 2LL * (v90 >> 1) != v167 );
        if ( (v90 & 1) != 0 )
          *(_QWORD *)(v92 + 8LL * (v90 & 0xFFFFFFFE)) = v166[v90 & 0xFFFFFFFE];
      }
    }
    if ( v166 != (_QWORD *)(a3 + 16) && v166 )
    {
      sub_186B220(v166);
      v90 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v92;
    *(_DWORD *)(a3 + 12) = v165;
  }
  else
  {
    v92 = *(_QWORD *)a3;
  }
  *(_QWORD *)(v92 + 8LL * v90) = v89;
  *(_DWORD *)(a3 + 8) = v90 + 1;
  if ( *(_DWORD *)(a1 + 756) || *(_DWORD *)(a1 + 760) )
  {
    v93 = *(_QWORD **)(a1 + 744);
    v94 = 0;
    v95 = *(unsigned int *)(a1 + 752);
    v96 = &v93[3 * v95];
    v97 = v93;
    if ( v93 != v96 )
    {
      do
      {
        while ( *v97 )
        {
          *v97 = 0;
          v97 += 3;
          if ( v96 == v97 )
            goto LABEL_175;
        }
        v97 += 3;
        ++v94;
      }
      while ( v96 != v97 );
LABEL_175:
      if ( (unsigned int)v95 > 0x10 && 3 * (int)v95 < (unsigned int)(4 * v94) )
      {
        if ( v93 )
        {
          sub_186B220(v93);
          v98 = *(_DWORD *)(a1 + 752);
          *(_QWORD *)(a1 + 744) = 0;
          v98 >>= 1;
          v99 = v98;
          *(_DWORD *)(a1 + 752) = v98;
          v100 = sub_186B270(24LL * v98);
          if ( v98 )
            goto LABEL_179;
        }
        else
        {
          *(_QWORD *)(a1 + 744) = 0;
          v169 = (unsigned int)v95 >> 1;
          v99 = v169;
          *(_DWORD *)(a1 + 752) = v169;
          v100 = sub_186B270(24LL * v169);
LABEL_179:
          v101 = (_QWORD *)(v100 + 24 * v99);
          v102 = (_QWORD *)v100;
          do
          {
            *v102 = 0;
            v102 += 3;
            *(v102 - 2) = 0;
          }
          while ( v102 != v101 );
          v103 = v100;
          if ( ((24 * (_BYTE)v99) & 8) == 0
            || (v103 = v100 + 24, *(_QWORD *)(v100 + 16) = 0, (_QWORD *)(v100 + 24) != v101) )
          {
            do
            {
              *(_QWORD *)(v103 + 16) = 0;
              v103 += 48;
              *(_QWORD *)(v103 - 8) = 0;
            }
            while ( (_QWORD *)v103 != v101 );
          }
        }
        *(_QWORD *)(a1 + 744) = v100;
      }
    }
    *(_QWORD *)(a1 + 756) = 0;
  }
  sub_F74720(v260);
  sub_EE4A00(v242);
  v104 = v277;
  if ( v277 )
  {
    do
    {
      v105 = v104;
      v104 = (_QWORD *)*v104;
      operator delete(v105, 0x18u);
    }
    while ( v104 );
  }
  memset(s, 0, 8 * v276);
  v278 = 0;
  v277 = nullptr;
  if ( s != v281 )
    operator delete(s, 8 * v276);
  v106 = v274;
  if ( v274 )
  {
    v107 = (unsigned __int64)&v274[*((unsigned int *)v274 - 1)];
    if ( (unsigned __int64)v274 >= v107 )
      goto LABEL_198;
    do
    {
      while ( 1 )
      {
        v108 = *v106;
        if ( *v106 )
        {
          v109 = v273;
          v16 = (*(_DWORD *)(v108 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( (unsigned __int64)++v106 >= v107 )
          goto LABEL_197;
      }
      sub_15D7BC0(v109, v108);
      ++v106;
    }
    while ( (unsigned __int64)v106 < v107 );
LABEL_197:
    v106 = v274;
    if ( v274 )
LABEL_198:
      sub_186B220(v106 - 1);
  }
  if ( v272 )
    sub_186B220((void *)(v272 - 8));
  if ( v271 )
    sub_186B220((void *)(v271 - 8));
  result = v270;
  if ( v270 )
    result = sub_186B220((void *)(v270 - 8));
  v111 = v269;
  if ( v269 )
  {
    result = *((unsigned int *)v269 - 1);
    v112 = (unsigned __int64)&v269[result];
    if ( (unsigned __int64)v269 >= v112 )
      goto LABEL_213;
    do
    {
      while ( 1 )
      {
        v113 = *v111;
        if ( *v111 )
        {
          v114 = v268;
          v16 = (*(_DWORD *)(v113 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( (unsigned __int64)++v111 >= v112 )
          goto LABEL_212;
      }
      result = sub_15D7BC0(v114, v113);
      ++v111;
    }
    while ( (unsigned __int64)v111 < v112 );
LABEL_212:
    v111 = v269;
    if ( v269 )
LABEL_213:
      result = sub_186B220(v111 - 1);
  }
  v115 = v267;
  if ( v267 )
  {
    result = *((unsigned int *)v267 - 1);
    v116 = (unsigned __int64)&v267[result];
    if ( (unsigned __int64)v267 >= v116 )
      goto LABEL_222;
    do
    {
      while ( 1 )
      {
        v117 = *v115;
        if ( *v115 )
        {
          v118 = v266.m128i_i64[1];
          v16 = (*(_DWORD *)(v117 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( (unsigned __int64)++v115 >= v116 )
          goto LABEL_221;
      }
      result = sub_15D7BC0(v118, v117);
      ++v115;
    }
    while ( (unsigned __int64)v115 < v116 );
LABEL_221:
    v115 = v267;
    if ( v267 )
LABEL_222:
      result = sub_186B220(v115 - 1);
  }
  if ( v228 )
  {
    v119 = v228;
    v120 = (unsigned __int64)&v228[*((unsigned int *)v228 - 1)];
    if ( (unsigned __int64)v228 < v120 )
    {
      do
      {
        while ( 1 )
        {
          v121 = *v119;
          if ( *v119 )
          {
            v16 = (*(_DWORD *)(v121 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v119 >= v120 )
            return sub_186B220(v228 - 1);
        }
        ++v119;
        sub_15D7BC0(v234, v121);
      }
      while ( (unsigned __int64)v119 < v120 );
    }
    return sub_186B220(v228 - 1);
  }
  return result;
}

