__int64 __fastcall sub_9DD9A0(__int64 a1, unsigned int *a2, __int64 a3, _QWORD *a4, double a5, __m128 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rbx
  __m128 si128; // xmm0
  unsigned __int16 v15; // r14
  char v16; // al
  __int64 v17; // rax
  size_t v18; // rax
  __int64 v19; // rax
  unsigned __int8 v20; // al
  __int64 v21; // rax
  size_t v22; // rax
  __m128i *v23; // rax
  int v24; // r14d
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  char v33; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _WORD *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  unsigned __int64 v48; // r14
  __int64 v49; // r15
  int v50; // eax
  void *v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 (*v54)(); // rbp
  char **v55; // r12
  __int64 v56; // rbx
  size_t v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  size_t v60; // rax
  __m128i *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 *v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r14
  __int64 v69; // r15
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  void *v73; // rdx
  _WORD **v74; // rax
  _WORD *v75; // r14
  __int16 v76; // ax
  _WORD *v77; // rdi
  __int64 *v78; // rax
  __int32 v79; // r14d
  unsigned __int32 v80; // r15d
  size_t v81; // rax
  __m128i *v82; // rax
  char **v83; // rbp
  __int64 v84; // rax
  __int64 v85; // rbx
  size_t v86; // r12
  unsigned int v87; // eax
  int v88; // eax
  __int64 *v89; // r12
  __int64 v90; // r12
  __int64 v91; // rsi
  char v92; // al
  __int64 v93; // rdx
  __int64 v94; // rdi
  char **v95; // rbp
  __int64 v96; // rbx
  size_t v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  int v100; // ecx
  __int64 v101; // rax
  size_t v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // eax
  size_t v108; // rdx
  size_t v109; // rax
  size_t v110; // rax
  __int64 v111; // rcx
  size_t v112; // rax
  char *v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rax
  _QWORD **v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  unsigned int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rdx
  unsigned __int64 v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rax
  _QWORD **v126; // rdx
  __int64 v127; // r8
  __int64 v128; // rdx
  unsigned int v129; // eax
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rcx
  unsigned __int64 v133; // rsi
  __int64 v134; // rax
  unsigned __int64 v135; // rcx
  __int64 v136; // rbp
  __int64 v137; // rdx
  __int64 *v138; // rbp
  __int64 *v139; // rdx
  __int64 v140; // r13
  _QWORD *v141; // r14
  __int64 *v142; // r12
  __int64 v143; // rbx
  size_t v144; // rcx
  __m128i *v145; // rsi
  _DWORD *v146; // rdi
  __int64 i; // rcx
  size_t v148; // rax
  __int64 v149; // rax
  __int64 v150; // rcx
  __m128i *v151; // rsi
  _DWORD *v152; // rdi
  size_t v153; // rax
  __int64 v154; // rax
  size_t v155; // rax
  __int64 v156; // rdi
  unsigned __int16 *v157; // rax
  size_t v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  size_t v162; // rax
  __m128i *v163; // rax
  size_t v164; // rax
  __m128i *v165; // rax
  __int64 v166; // rax
  size_t v167; // r12
  unsigned int v168; // eax
  int v169; // eax
  __int64 *v170; // r12
  __int64 v171; // r12
  __int64 v172; // rsi
  char v173; // al
  __int64 v174; // rdx
  size_t v175; // rax
  size_t v176; // rax
  __m128i *v177; // rax
  size_t v178; // rax
  int v179; // eax
  char *v180; // rax
  __int64 v181; // rdx
  size_t v182; // rax
  __m128i *v183; // rax
  size_t v184; // rax
  __m128i *v185; // rax
  char **v186; // r12
  __int64 v187; // rax
  __int64 v188; // rbx
  size_t v189; // rax
  __int64 *v190; // rbp
  __int64 v191; // rbp
  __int64 v192; // rsi
  char v193; // al
  __int64 v194; // rdx
  size_t v195; // rax
  __m128i *v196; // rax
  size_t v197; // rax
  __m128i *v198; // rax
  _DWORD *v199; // rdi
  _DWORD *v200; // r15
  size_t v201; // rax
  __int64 v202; // rax
  __m128i *v203; // r8
  size_t v204; // rax
  __int64 v205; // rax
  __int64 v206; // r8
  __int64 v207; // rbx
  size_t v208; // rax
  __m128i *v209; // r12
  __int64 v210; // rax
  __int64 v211; // rdx
  __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rax
  _QWORD *v215; // rdx
  int v216; // ecx
  _QWORD *v217; // rdx
  __int64 v218; // r12
  __int64 v219; // rbx
  _QWORD **v220; // rbp
  _QWORD **v221; // rbx
  const void *v222; // rsi
  size_t v223; // rdx
  char *v224; // rcx
  size_t v225; // rax
  __int64 v226; // rdx
  size_t v227; // rax
  bool v228; // al
  bool v229; // dl
  int v230; // eax
  size_t v231; // rdx
  size_t v232; // rax
  size_t v233; // rax
  int v234; // eax
  char *v235; // rdx
  size_t v236; // rax
  size_t v237; // rax
  __int64 v238; // rcx
  size_t v239; // rax
  __int64 v240; // rax
  size_t v241; // rax
  size_t v242; // rax
  __int64 v243; // rax
  __int64 v244; // rcx
  __m128i *v245; // rsi
  _DWORD *v246; // rdi
  size_t v247; // rax
  __int64 v248; // rax
  __int64 v249; // rcx
  _DWORD *v250; // rdi
  __m128i *v251; // rsi
  size_t v252; // rax
  __m128i *v253; // rax
  size_t v254; // rax
  __m128i *v255; // rax
  __int64 v256; // rax
  size_t v257; // rax
  _DWORD *v258; // rcx
  void *v259; // rbp
  __int64 v260; // rax
  __int64 v261; // rcx
  __m128i *v262; // rsi
  _DWORD *v263; // rdi
  size_t v264; // rax
  __int64 v265; // rax
  unsigned __int64 v266; // rax
  __int64 v267; // rax
  size_t v268; // rax
  __int64 v269; // rax
  __int64 v270; // rcx
  __m128i *v271; // rsi
  _DWORD *v272; // rdi
  size_t v273; // rax
  unsigned __int8 v275; // [rsp+8h] [rbp-4C0h]
  _DWORD *s1; // [rsp+18h] [rbp-4B0h]
  __int64 (*s1a)(); // [rsp+18h] [rbp-4B0h]
  _WORD **s1b; // [rsp+18h] [rbp-4B0h]
  _QWORD *s1c; // [rsp+18h] [rbp-4B0h]
  char *s1d; // [rsp+18h] [rbp-4B0h]
  _QWORD **s1e; // [rsp+18h] [rbp-4B0h]
  _QWORD *s1f; // [rsp+18h] [rbp-4B0h]
  void *s1g; // [rsp+18h] [rbp-4B0h]
  size_t n; // [rsp+20h] [rbp-4A8h]
  size_t na; // [rsp+20h] [rbp-4A8h]
  size_t nb; // [rsp+20h] [rbp-4A8h]
  __int64 nc; // [rsp+20h] [rbp-4A8h]
  unsigned int nd; // [rsp+20h] [rbp-4A8h]
  size_t nl; // [rsp+20h] [rbp-4A8h]
  size_t ne; // [rsp+20h] [rbp-4A8h]
  char *nm; // [rsp+20h] [rbp-4A8h]
  size_t nf; // [rsp+20h] [rbp-4A8h]
  char *nn; // [rsp+20h] [rbp-4A8h]
  bool no; // [rsp+20h] [rbp-4A8h]
  size_t ng; // [rsp+20h] [rbp-4A8h]
  size_t nh; // [rsp+20h] [rbp-4A8h]
  size_t ni; // [rsp+20h] [rbp-4A8h]
  char *nj; // [rsp+20h] [rbp-4A8h]
  size_t nk; // [rsp+20h] [rbp-4A8h]
  _QWORD **v301; // [rsp+28h] [rbp-4A0h]
  void *v302; // [rsp+28h] [rbp-4A0h]
  void *v303; // [rsp+28h] [rbp-4A0h]
  char *v304; // [rsp+28h] [rbp-4A0h]
  char *v305; // [rsp+28h] [rbp-4A0h]
  void *v306; // [rsp+28h] [rbp-4A0h]
  void *v307; // [rsp+28h] [rbp-4A0h]
  void *v308; // [rsp+28h] [rbp-4A0h]
  __m128i *v309; // [rsp+30h] [rbp-498h]
  char v310; // [rsp+30h] [rbp-498h]
  char v311; // [rsp+30h] [rbp-498h]
  __int64 v312; // [rsp+30h] [rbp-498h]
  __int64 v313; // [rsp+30h] [rbp-498h]
  _QWORD *v314; // [rsp+40h] [rbp-488h]
  char *v315; // [rsp+50h] [rbp-478h] BYREF
  __int64 v316; // [rsp+58h] [rbp-470h]
  __int64 *v317; // [rsp+60h] [rbp-468h] BYREF
  __m128 v318; // [rsp+68h] [rbp-460h]
  void *v319; // [rsp+80h] [rbp-448h] BYREF
  void *v320[2]; // [rsp+88h] [rbp-440h] BYREF
  void **v321; // [rsp+98h] [rbp-430h]
  void **v322; // [rsp+A0h] [rbp-428h]
  __int64 v323; // [rsp+A8h] [rbp-420h]
  __m128i v324[62]; // [rsp+B0h] [rbp-418h] BYREF
  char v325; // [rsp+490h] [rbp-38h] BYREF

  v8 = *a2;
  v324[0].m128i_i32[0] = 180;
  LODWORD(v11) = sub_AD6450(v324, v8);
  if ( !(_BYTE)v11 )
    return (unsigned int)v11;
  v13 = *((_QWORD *)a2 + 1);
  if ( !v13 )
  {
    LODWORD(v11) = 0;
    return (unsigned int)v11;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
  v317 = nullptr;
  v318 = si128;
  v15 = *(_WORD *)v13 & 0x1FF;
  if ( v15 != 4 )
    goto LABEL_13;
  v16 = (*(_BYTE *)(v13 + 2) >> 3) & 0x1D;
  if ( !v16 )
  {
    v17 = sub_BD7DA0(*(_QWORD *)(v13 + 16));
    if ( !sub_9C57D0(v17) )
      goto LABEL_69;
    v324[0].m128i_i32[0] = sub_AD6A60(v13);
    v18 = j__strlen("op");
    v19 = sub_9D0C50((__int64)&v317, "op", v18);
    v324[0].m128i_i64[1] = v13;
    v8 = (__int64)a4;
    a6 = (__m128)_mm_load_si128(v324);
    *(__m128 *)v19 = a6;
    *(__m128i *)(v19 + 16) = _mm_load_si128(&v324[1]);
    *(_QWORD *)(v19 + 32) = v324[2].m128i_i64[0];
    v20 = sub_9C6D60(v13, (__int64)a4);
    if ( v20 )
    {
      v275 = v20;
      v95 = *(char ***)(a1 + 8);
      v96 = operator new(0x18u);
      *(_DWORD *)(v96 + 8) = 0;
      *(_QWORD *)v96 = off_2B16738;
      v97 = j__strlen("op");
      v98 = sub_9CC900((__int64)&v317, (__int64)"op", v97);
      v324[0].m128i_i64[0] = v96;
      *(_QWORD *)(v96 + 16) = v98;
      sub_9C6980(v95, v324[0].m128i_i64, si128, *(double *)a6.m128_u64);
      v100 = v275;
      if ( v324[0].m128i_i64[0] )
      {
        (*(void (__fastcall **)(__int64, __m128i *, __int64, _QWORD))(*(_QWORD *)v324[0].m128i_i64[0] + 32LL))(
          v324[0].m128i_i64[0],
          v324,
          v99,
          v275);
        v100 = v275;
      }
      LODWORD(v11) = v100;
      goto LABEL_28;
    }
    if ( (*(_WORD *)v13 & 0x1FF) != 4 )
    {
      v15 = *(_WORD *)v13 & 0x1FF;
      goto LABEL_13;
    }
    v16 = (*(_BYTE *)(v13 + 2) >> 3) & 0x1D;
  }
  if ( v16 == 1 )
  {
    v21 = sub_BD7DA0(*(_QWORD *)(v13 + 16));
    if ( sub_9C57D0(v21) )
    {
      v324[0].m128i_i32[0] = sub_AD6A60(v13);
      v22 = j__strlen("op");
      v23 = (__m128i *)sub_9D0C50((__int64)&v317, "op", v22);
      v324[0].m128i_i64[1] = v13;
      v8 = (__int64)a4;
      *v23 = _mm_load_si128(v324);
      v23[1] = _mm_load_si128(&v324[1]);
      v23[2].m128i_i64[0] = v324[2].m128i_i64[0];
      v24 = sub_9C6D60(v13, (__int64)a4);
      if ( (_BYTE)v24 )
      {
        v83 = *(char ***)(a1 + 8);
        v101 = operator new(0x18u);
        *(_DWORD *)(v101 + 8) = 1;
        v85 = v101;
        *(_QWORD *)v101 = off_2B16780;
        v102 = j__strlen("op");
        v103 = sub_9CC900((__int64)&v317, (__int64)"op", v102);
        goto LABEL_162;
      }
      v15 = *(_WORD *)v13 & 0x1FF;
LABEL_13:
      if ( v15 != 123 )
        goto LABEL_64;
      if ( sub_9C8E60(v13, v8, v9, v10, v12) )
        v25 = *(_QWORD *)(v13 + 16);
      else
        v25 = *(_QWORD *)(v13 + 24);
      v26 = sub_BD7DA0(v25);
      if ( !sub_9C57D0(v26) && !sub_9C57F0(v26) )
        goto LABEL_63;
      if ( sub_9C8E60(v13, v8, v27, v28, v29) )
        v32 = *(_QWORD *)(v13 + 24);
      else
        v32 = *(_QWORD *)(v13 + 16);
      if ( (*(_WORD *)v32 & 0x1FF) != 0x34 )
      {
        v33 = 0;
LABEL_33:
        if ( sub_9C8E60(v13, v8, v32, v30, v31) )
          v38 = *(_WORD **)(v13 + 24);
        else
          v38 = *(_WORD **)(v13 + 16);
        if ( (*v38 & 0x1FF) == 0x7E )
        {
          if ( v33 && v324[0].m128i_i32[2] > 0x40u && v324[0].m128i_i64[0] )
            operator delete[]((void *)v324[0].m128i_i64[0]);
          goto LABEL_63;
        }
        if ( v33 && v324[0].m128i_i32[2] > 0x40u && v324[0].m128i_i64[0] )
          operator delete[]((void *)v324[0].m128i_i64[0]);
        if ( sub_9C8E60(v13, v8, v35, v36, v37) )
          v39 = *(_QWORD *)(v13 + 16);
        else
          v39 = *(_QWORD *)(v13 + 24);
        v40 = sub_BD7DA0(v39);
        v44 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL), v8, v41, v42, v43);
        v47 = (unsigned int)*(unsigned __int8 *)(v44 + 16) - 2;
        if ( (unsigned int)v47 > 1 )
        {
          if ( sub_9C8E60(v13, v8, v47, v45, v46) )
            v156 = *(_QWORD *)(v13 + 16);
          else
            v156 = *(_QWORD *)(v13 + 24);
          v157 = (unsigned __int16 *)sub_BD7DA0(v156);
          v47 = *v157;
          LOWORD(v47) = v47 & 0x1FF;
          if ( (_WORD)v47 != 9 )
            goto LABEL_148;
          v48 = (unsigned int)(*((_DWORD *)v157 + 4) + 1);
        }
        else
        {
          v48 = *(_QWORD *)(v44 + 40);
          if ( (*(_BYTE *)(v44 + 19) & 2) != 0 )
          {
            v8 = -1;
            if ( sub_9C8900(*(_QWORD *)(v44 + 40), 0xFFFFFFFFFFFFFFFFLL) )
            {
              v48 = -1;
            }
            else if ( *(_DWORD *)(v48 + 8) <= 0x40u )
            {
              v48 = *(_QWORD *)v48;
            }
            else
            {
              v48 = **(_QWORD **)v48;
            }
          }
        }
        v324[1].m128i_i8[4] &= ~1u;
        v324[0].m128i_i16[0] = 0;
        v324[0].m128i_i64[1] = 0;
        v324[1].m128i_i32[0] = 0;
        if ( sub_9C8E60(v13, v8, v47, v45, v46) )
          v49 = *(_QWORD *)(v13 + 24);
        else
          v49 = *(_QWORD *)(v13 + 16);
        if ( (*(_DWORD *)v49 & 0x20000) == 0 && (unsigned __int8)sub_C1B4E0(v49, v324, a3, 0, 0) )
        {
          v80 = v324[2].m128i_u32[0];
          LODWORD(v320[0]) = v324[2].m128i_i32[0];
          if ( v324[2].m128i_i32[0] > 0x40u )
          {
            sub_21E17D0(&v319);
            v80 = (unsigned __int32)v320[0];
          }
          else
          {
            v319 = (void *)v324[1].m128i_i64[1];
          }
          BYTE4(v320[0]) = v324[2].m128i_i8[4];
          if ( v324[2].m128i_i8[4] || !sub_9C6160((__int64 *)&v319) )
          {
            v8 = -1;
            if ( !sub_9C8900((__int64)&v319, 0xFFFFFFFFFFFFFFFFLL) )
            {
              v51 = v319;
              if ( v80 > 0x40 )
              {
                if ( *(_QWORD *)v319 >= v48 )
                  goto LABEL_144;
                goto LABEL_60;
              }
LABEL_308:
              if ( (unsigned __int64)v51 >= v48 )
                goto LABEL_146;
LABEL_61:
              if ( v324[1].m128i_i32[0] > 1u )
                sub_A2BBA0(&v324[1]);
              goto LABEL_63;
            }
          }
          goto LABEL_272;
        }
        if ( ((*(_WORD *)v49 + 394) & 0x1FFu) > 1 )
          goto LABEL_146;
        v50 = (*(_WORD *)(v49 + 2) >> 3) & 0x3F;
        if ( v50 == 16 )
        {
          v199 = *(_DWORD **)(v49 + 16);
          v200 = *(_DWORD **)(v49 + 24);
          if ( ((*v199 & 0x20000) != 0 || !(unsigned __int8)sub_C1B4E0(v199, v324, a3, 0, 0))
            && ((*v200 & 0x20000) != 0 || !(unsigned __int8)sub_C1B4E0(v200, v324, a3, 0, 0)) )
          {
            goto LABEL_146;
          }
          v80 = v324[2].m128i_u32[0];
          LODWORD(v320[0]) = v324[2].m128i_i32[0];
          if ( v324[2].m128i_i32[0] > 0x40u )
          {
            sub_21E17D0(&v319);
            v80 = (unsigned __int32)v320[0];
          }
          else
          {
            v319 = (void *)v324[1].m128i_i64[1];
          }
          BYTE4(v320[0]) = v324[2].m128i_i8[4];
          if ( !v324[2].m128i_i8[4] && sub_9C6160((__int64 *)&v319)
            || (v8 = -1, sub_9C8900((__int64)&v319, 0xFFFFFFFFFFFFFFFFLL)) )
          {
LABEL_272:
            if ( v80 <= 0x40 )
              goto LABEL_146;
LABEL_273:
            v51 = v319;
            goto LABEL_144;
          }
          v51 = v319;
          if ( v80 <= 0x40 )
            goto LABEL_308;
          if ( v48 <= *(_QWORD *)v319 )
          {
LABEL_144:
            if ( v51 )
              operator delete[](v51);
            goto LABEL_146;
          }
        }
        else
        {
          if ( v50 != 4 )
            goto LABEL_146;
          s1 = *(_DWORD **)(v49 + 24);
          if ( !(unsigned __int8)sub_F41620(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL))
            || (*s1 & 0x20000) != 0
            || !(unsigned __int8)sub_C1B4E0(s1, v324, a3, 0, 0) )
          {
            goto LABEL_146;
          }
          LODWORD(v320[0]) = v324[2].m128i_i32[0];
          if ( v324[2].m128i_i32[0] > 0x40u )
            sub_21E17D0(&v319);
          else
            v319 = (void *)v324[1].m128i_i64[1];
          BYTE4(v320[0]) = v324[2].m128i_i8[4];
          if ( !v324[2].m128i_i8[4] && sub_9C6160((__int64 *)&v319) )
            goto LABEL_393;
          v8 = -1;
          if ( !sub_9C8900((__int64)&v319, 0xFFFFFFFFFFFFFFFFLL) )
          {
            v51 = v319;
            if ( LODWORD(v320[0]) > 0x40 )
            {
              if ( v48 < *(_QWORD *)v319 )
                goto LABEL_144;
              goto LABEL_60;
            }
            if ( (unsigned __int64)v319 <= v48 )
              goto LABEL_61;
LABEL_146:
            if ( v324[1].m128i_i32[0] > 1u )
              sub_A2BBA0(&v324[1]);
LABEL_148:
            v324[0].m128i_i32[0] = sub_AD6A60(v13);
            v81 = j__strlen("ArraySubscript");
            v82 = (__m128i *)sub_9D0C50((__int64)&v317, "ArraySubscript", v81);
            v324[0].m128i_i64[1] = v13;
            v8 = (__int64)a4;
            *v82 = _mm_load_si128(v324);
            v82[1] = _mm_load_si128(&v324[1]);
            v82[2].m128i_i64[0] = v324[2].m128i_i64[0];
            v24 = sub_9C6D60(v13, (__int64)a4);
            if ( (_BYTE)v24 )
            {
              v83 = *(char ***)(a1 + 8);
              v84 = operator new(0x18u);
              *(_DWORD *)(v84 + 8) = 2;
              v85 = v84;
              *(_QWORD *)v84 = off_2B167C8;
              v86 = j__strlen("ArraySubscript");
              v87 = sub_2220DF0("ArraySubscript", v86);
              v88 = sub_2221120(&v317, "ArraySubscript", v86, v87);
              if ( v88 == -1 )
                sub_9CC560((__int64 **)v324, &v317[v318.m128_u32[0]], 1);
              else
                sub_9CC560((__int64 **)v324, &v317[v88], 1);
              v89 = (__int64 *)v324[0].m128i_i64[0];
              sub_9CC560((__int64 **)v324, &v317[v318.m128_u32[0]], 1);
              if ( (__int64 *)v324[0].m128i_i64[0] == v89 )
              {
                v93 = 0;
              }
              else
              {
                v90 = *v89;
                v91 = *(unsigned int *)(v90 + 8);
                v324[0].m128i_i32[0] = 311;
                v92 = sub_AD6450(v324, v91);
                v93 = 0;
                if ( v92 )
                  v93 = *(_QWORD *)(v90 + 16);
              }
              *(_QWORD *)(v85 + 16) = v93;
              goto LABEL_155;
            }
            goto LABEL_63;
          }
          if ( v48 != -1 )
          {
LABEL_393:
            if ( LODWORD(v320[0]) <= 0x40 )
              goto LABEL_146;
            goto LABEL_273;
          }
          if ( LODWORD(v320[0]) <= 0x40 )
            goto LABEL_61;
          v51 = v319;
          if ( !v319 )
            goto LABEL_61;
        }
LABEL_60:
        operator delete[](v51);
        goto LABEL_61;
      }
      v30 = *(_QWORD *)(v32 + 16);
      v8 = *(unsigned int *)(v32 + 24);
      v32 = (unsigned __int64)(v8 + 63) >> 6;
      if ( v32 > 1 )
      {
        sub_21E18D0(v324, v8, v32, v30);
      }
      else
      {
        v324[0].m128i_i32[2] = v8;
        if ( (unsigned int)v8 <= 0x40 )
        {
          v324[0].m128i_i64[0] = v30;
          goto LABEL_24;
        }
        v8 = v30;
        sub_21E1730(v324, v30, 0);
      }
      v79 = v324[0].m128i_i32[2];
      if ( v324[0].m128i_i32[2] > 0x40u )
      {
        if ( v79 != (unsigned int)sub_21E2A40(v324) )
          goto LABEL_25;
        if ( v324[0].m128i_i64[0] )
        {
          operator delete[]((void *)v324[0].m128i_i64[0]);
          v15 = *(_WORD *)v13 & 0x1FF;
LABEL_64:
          if ( ((v15 + 394) & 0x1FFu) > 1 )
            goto LABEL_65;
          v68 = *(_QWORD *)(v13 + 24);
          v69 = *(_QWORD *)(v13 + 16);
          LOWORD(v70) = (*(_WORD *)(v13 + 2) >> 3) & 0x3F;
          if ( (((*(_WORD *)(v13 + 2) >> 3) & 0x3Fu) - 5 <= 1 || (((_BYTE)v70 + 39) & 0x3Fu) <= 1)
            && sub_9C57D0(*(_QWORD *)(v13 + 16)) )
          {
            if ( sub_9C8B50(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL), v8, v70, v71, v72)
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) == 47 )
            {
              v324[0].m128i_i32[0] = sub_AD6A60(v69);
              v195 = j__strlen("ptrAddPtr");
              v196 = (__m128i *)sub_9D0C50((__int64)&v317, "ptrAddPtr", v195);
              v324[0].m128i_i64[1] = v69;
              *v196 = _mm_load_si128(v324);
              v196[1] = _mm_load_si128(&v324[1]);
              v196[2].m128i_i64[0] = v324[2].m128i_i64[0];
              v324[0].m128i_i32[0] = sub_AD6A60(v13);
              v197 = j__strlen("ptrAdd");
              v198 = (__m128i *)sub_9D0C50((__int64)&v317, "ptrAdd", v197);
              v324[0].m128i_i64[1] = v13;
              *v198 = _mm_load_si128(v324);
              v198[1] = _mm_load_si128(&v324[1]);
              v198[2].m128i_i64[0] = v324[2].m128i_i64[0];
              goto LABEL_239;
            }
            LOWORD(v70) = (*(_WORD *)(v13 + 2) >> 3) & 0x3F;
          }
          if ( (_BYTE)v70 != 5
            || !sub_9C57D0(v68)
            || !sub_9C8B50(*(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL), v8, v159, v160, v161)
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 47 )
          {
LABEL_101:
            v15 = *(_WORD *)v13 & 0x1FF;
LABEL_65:
            if ( ((v15 + 423) & 0x1FFu) <= 4 )
            {
              v58 = sub_BD7F30(*(_QWORD *)(v13 + 32));
              if ( v58 && (*(_BYTE *)(v58 + 28) & 0x7Fu) - 34 <= 5 )
              {
                v59 = sub_BD7F30(*(_QWORD *)(v13 + 32));
                if ( !v59 || (*(_BYTE *)(v59 + 28) & 0x7Fu) - 34 > 5 )
                  BUG();
                if ( (*(_BYTE *)(v59 + 29) & 1) != 0 && sub_9C66C0(v59) )
                {
LABEL_86:
                  v324[0].m128i_i32[0] = sub_AD6A60(v13);
                  v60 = j__strlen("attr_expr");
                  v61 = (__m128i *)sub_9D0C50((__int64)&v317, "attr_expr", v60);
                  v324[0].m128i_i64[1] = v13;
                  *v61 = _mm_load_si128(v324);
                  v61[1] = _mm_load_si128(&v324[1]);
                  v61[2].m128i_i64[0] = v324[2].m128i_i64[0];
                  v24 = sub_9C6D60(v13, (__int64)a4);
                  if ( !(_BYTE)v24 )
                    goto LABEL_87;
                  v83 = *(char ***)(a1 + 8);
                  v85 = operator new(0x18u);
                  *(_DWORD *)(v85 + 8) = 4;
                  *(_QWORD *)v85 = off_2B168A0;
                  v158 = j__strlen("attr_expr");
                  v103 = sub_9CC780((__int64)&v317, (__int64)"attr_expr", v158);
LABEL_162:
                  *(_QWORD *)(v85 + 16) = v103;
                  goto LABEL_155;
                }
              }
              v15 = *(_WORD *)v13 & 0x1FF;
            }
            if ( v15 != 46 )
            {
LABEL_88:
              if ( (unsigned int)v15 - 113 > 1 )
                goto LABEL_69;
              v62 = *(_QWORD *)(v13 + 16);
              if ( (*(_BYTE *)(v62 + 29) & 1) == 0 )
                goto LABEL_69;
              v63 = sub_B68690(v62);
              v64 = *(__int64 **)v63;
              v65 = *(_QWORD *)v63 + 8LL * *(unsigned int *)(v63 + 8);
              if ( *(_QWORD *)v63 < v65 )
              {
                v78 = *(__int64 **)v63;
                while ( *(_WORD *)(*v78 + 36) != 388 )
                {
                  if ( (__int64 *)v65 == ++v78 )
                    goto LABEL_96;
                }
                if ( (__int64 *)v65 == v78 )
                  goto LABEL_96;
              }
              else
              {
                if ( v64 == (__int64 *)v65 )
                  goto LABEL_96;
                if ( *(_WORD *)(*(_QWORD *)v65 + 36LL) != 388 )
                {
                  v66 = (__int64 *)(v65 + 8);
                  while ( v64 != v66 )
                  {
                    v67 = *v66++;
                    if ( *(_WORD *)(v67 + 36) == 388 )
                      goto LABEL_247;
                  }
                  goto LABEL_96;
                }
              }
LABEL_247:
              v319 = nullptr;
              *(__m128i *)v320 = _mm_load_si128((const __m128i *)&xmmword_2384CD0);
              if ( (unsigned __int8)sub_9D1090((_DWORD *)v13, a3, (__int64)&v319) )
              {
                sub_9C9380(&v319);
                v15 = *(_WORD *)v13 & 0x1FF;
                goto LABEL_69;
              }
              v324[0].m128i_i32[0] = sub_AD6A60(v13);
              v176 = j__strlen("cxx_construct_expr");
              v177 = (__m128i *)sub_9D0C50((__int64)&v317, "cxx_construct_expr", v176);
              v324[0].m128i_i64[1] = v13;
              *v177 = _mm_load_si128(v324);
              v177[1] = _mm_load_si128(&v324[1]);
              v177[2].m128i_i64[0] = v324[2].m128i_i64[0];
              sub_9C9380(&v319);
              v24 = sub_9C6D60(v13, (__int64)a4);
              if ( (_BYTE)v24 )
              {
                v83 = *(char ***)(a1 + 8);
                v85 = operator new(0x18u);
                *(_DWORD *)(v85 + 8) = 5;
                *(_QWORD *)v85 = off_2B168E8;
                v178 = j__strlen("cxx_construct_expr");
                v103 = sub_9CC840((__int64)&v317, (__int64)"cxx_construct_expr", v178);
                goto LABEL_162;
              }
LABEL_96:
              v15 = *(_WORD *)v13 & 0x1FF;
              goto LABEL_69;
            }
            v52 = *(_QWORD *)(v13 + 24);
            if ( (*(_BYTE *)(v52 + 28) & 0x7Fu) - 49 > 2 || (*(_BYTE *)(v52 + 29) & 1) == 0 )
              goto LABEL_69;
            if ( !sub_9C66C0(v52) )
            {
LABEL_87:
              v15 = *(_WORD *)v13 & 0x1FF;
              goto LABEL_88;
            }
            goto LABEL_86;
          }
          v324[0].m128i_i32[0] = sub_AD6A60(v68);
          v162 = j__strlen("ptrAddPtr");
          v163 = (__m128i *)sub_9D0C50((__int64)&v317, "ptrAddPtr", v162);
          v324[0].m128i_i64[1] = v68;
          *v163 = _mm_load_si128(v324);
          v163[1] = _mm_load_si128(&v324[1]);
          v163[2].m128i_i64[0] = v324[2].m128i_i64[0];
          v324[0].m128i_i32[0] = sub_AD6A60(v13);
          v164 = j__strlen("ptrAdd");
          v165 = (__m128i *)sub_9D0C50((__int64)&v317, "ptrAdd", v164);
          v324[0].m128i_i64[1] = v13;
          *v165 = _mm_load_si128(v324);
          v165[1] = _mm_load_si128(&v324[1]);
          v165[2].m128i_i64[0] = v324[2].m128i_i64[0];
LABEL_239:
          v24 = sub_9C6D60(v13, (__int64)a4);
          if ( (_BYTE)v24 )
          {
            v83 = *(char ***)(a1 + 8);
            v166 = operator new(0x20u);
            *(_DWORD *)(v166 + 8) = 3;
            v85 = v166;
            *(_QWORD *)v166 = off_2B16810;
            v167 = j__strlen("ptrAdd");
            v168 = sub_2220DF0("ptrAdd", v167);
            v169 = sub_2221120(&v317, "ptrAdd", v167, v168);
            if ( v169 == -1 )
              sub_9CC560((__int64 **)v324, &v317[v318.m128_u32[0]], 1);
            else
              sub_9CC560((__int64 **)v324, &v317[v169], 1);
            v170 = (__int64 *)v324[0].m128i_i64[0];
            sub_9CC560((__int64 **)v324, &v317[v318.m128_u32[0]], 1);
            if ( (__int64 *)v324[0].m128i_i64[0] == v170 )
            {
              v174 = 0;
            }
            else
            {
              v171 = *v170;
              v172 = *(unsigned int *)(v171 + 8);
              v324[0].m128i_i32[0] = 306;
              v173 = sub_AD6450(v324, v172);
              v174 = 0;
              if ( v173 )
                v174 = *(_QWORD *)(v171 + 16);
            }
            *(_QWORD *)(v85 + 16) = v174;
            v175 = j__strlen("ptrAddPtr");
            *(_QWORD *)(v85 + 24) = sub_9CC780((__int64)&v317, (__int64)"ptrAddPtr", v175);
LABEL_155:
            v324[0].m128i_i64[0] = v85;
            sub_9C6980(v83, v324[0].m128i_i64, si128, *(double *)a6.m128_u64);
            v94 = v324[0].m128i_i64[0];
            if ( !v324[0].m128i_i64[0] )
              goto LABEL_157;
            goto LABEL_156;
          }
          goto LABEL_101;
        }
        goto LABEL_63;
      }
LABEL_24:
      if ( v324[0].m128i_i64[0] )
      {
LABEL_25:
        v33 = v11;
        goto LABEL_33;
      }
LABEL_63:
      v15 = *(_WORD *)v13 & 0x1FF;
      goto LABEL_64;
    }
  }
LABEL_69:
  if ( ((v15 + 432) & 0x1FFu) > 8 )
    goto LABEL_70;
  v73 = nullptr;
  v320[0] = nullptr;
  s1b = (_WORD **)(v13 + 24);
  v74 = (_WORD **)(v13 + 16);
  v319 = (void *)(v13 + 16);
LABEL_105:
  if ( s1b == v74 )
  {
LABEL_116:
    if ( !v73 )
      goto LABEL_70;
  }
  while ( 1 )
  {
    if ( ((unsigned __int8)v73 & 3) != 0 )
      v74 = (_WORD **)sub_ECEDF0(&v319);
    v75 = *v74;
    v76 = **v74 & 0x1FF;
    if ( v76 == 92 )
    {
      if ( (unsigned __int8)sub_9C9AD0((__int64)v75) )
        break;
      v76 = *v75 & 0x1FF;
    }
    if ( v76 == 20 )
    {
      v77 = *((_WORD **)v75 + 3);
      if ( (*v77 & 0x1FF) == 0x5C )
      {
        if ( (unsigned __int8)sub_9C9AD0((__int64)v77) )
          break;
      }
    }
    v73 = v320[0];
    if ( ((__int64)v320[0] & 3) != 0 )
    {
      if ( ((unsigned __int64)v320[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v319);
      else
        sub_ECEA10(&v319, 1);
      v74 = (_WORD **)v319;
      v73 = v320[0];
      goto LABEL_105;
    }
    v74 = (_WORD **)((char *)v319 + 8);
    v319 = v74;
    if ( s1b == v74 )
      goto LABEL_116;
  }
  v324[0].m128i_i32[0] = sub_AD6A60(v13);
  v184 = j__strlen("data_invocation_expr");
  v185 = (__m128i *)sub_9D0C50((__int64)&v317, "data_invocation_expr", v184);
  v324[0].m128i_i64[1] = v13;
  *v185 = _mm_load_si128(v324);
  v185[1] = _mm_load_si128(&v324[1]);
  v185[2].m128i_i64[0] = v324[2].m128i_i64[0];
  v24 = sub_9C6D60(v13, (__int64)a4);
  if ( (_BYTE)v24 )
  {
    v186 = *(char ***)(a1 + 8);
    v187 = operator new(0x18u);
    *(_DWORD *)(v187 + 8) = 6;
    v188 = v187;
    *(_QWORD *)v187 = off_2B16930;
    v189 = j__strlen("data_invocation_expr");
    sub_2220DF0("data_invocation_expr", v189);
    v190 = sub_9CC5A0((__int64)&v317);
    sub_9CC560((__int64 **)v324, &v317[v318.m128_u32[0]], 1);
    if ( (__int64 *)v324[0].m128i_i64[0] == v190 )
    {
      v194 = 0;
    }
    else
    {
      v191 = *v190;
      v192 = *(unsigned int *)(v191 + 8);
      v324[0].m128i_i32[0] = 266;
      v193 = sub_AD6450(v324, v192);
      v194 = 0;
      if ( v193 )
        v194 = *(_QWORD *)(v191 + 16);
    }
    *(_QWORD *)(v188 + 16) = v194;
    v324[0].m128i_i64[0] = v188;
    sub_9C6980(v186, v324[0].m128i_i64, si128, *(double *)a6.m128_u64);
    v94 = v324[0].m128i_i64[0];
    if ( !v324[0].m128i_i64[0] )
    {
LABEL_157:
      LODWORD(v11) = v24;
      goto LABEL_28;
    }
LABEL_156:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 32LL))(v94);
    goto LABEL_157;
  }
LABEL_70:
  v53 = *a4;
  if ( (*(_BYTE *)(*(_QWORD *)(a3 + 2320) + 1LL) & 8) == 0 )
    goto LABEL_74;
  s1a = *(__int64 (**)())(v53 + 64);
  v324[0].m128i_i32[0] = sub_EC7AA0(v13);
  if ( s1a != sub_9C5900 && ((unsigned __int8 (__fastcall *)(_QWORD *, __m128i *))s1a)(a4, v324) )
    goto LABEL_73;
  if ( ((*(_WORD *)v13 + 423) & 0x1FFu) > 4 )
    goto LABEL_73;
  v104 = sub_BD7F30(*(_QWORD *)(v13 + 32));
  if ( !v104 )
    goto LABEL_73;
  if ( (*(_BYTE *)(v104 + 28) & 0x7Fu) - 34 > 5 )
    goto LABEL_73;
  v105 = sub_BD7F30(*(_QWORD *)(v13 + 32));
  s1c = (_QWORD *)v105;
  if ( !v105 || (*(_BYTE *)(v105 + 28) & 0x7Fu) - 34 > 5 )
    goto LABEL_73;
  if ( *(_DWORD *)(v13 + 16) == 1
    && (*(_WORD *)sub_BD7DA0(*(_QWORD *)(v13 + 8 * (((*(_BYTE *)(v13 + 2) & 8) != 0) + 1LL) + 32)) & 0x1FF) == 9 )
  {
    goto LABEL_176;
  }
  if ( !(_BYTE)byte_2CAD3E0 && __cxa_guard_acquire(&byte_2CAD3E0) )
  {
    __cxa_atexit((void (*)(void *))sub_9C9CD0, &qword_2CAD3E8, &off_2AFC540);
    __cxa_guard_release(&byte_2CAD3E0);
  }
  if ( !qword_2CAD3E8 )
  {
    LODWORD(v320[0]) = 0;
    v321 = v320;
    qmemcpy(v324, &off_2C58200, sizeof(v324));
    v322 = v320;
    v320[1] = nullptr;
    v323 = 0;
    v314 = a4;
    v209 = v324;
    do
    {
      v210 = sub_9D21F0(&v319, v320, (const void **)v209);
      if ( v211 )
      {
        if ( !v210 && (void **)v211 != v320 )
        {
          v222 = *(const void **)(v211 + 32);
          v223 = *(_QWORD *)(v211 + 40);
          v224 = (char *)v209->m128i_i64[0];
          v316 = v209->m128i_i64[1];
          v315 = v224;
          sub_9A0DC0((__int64)&v315, v222, v223);
        }
        v212 = operator new(0x30u);
        v213 = v209->m128i_i64[1];
        *(_QWORD *)(v212 + 32) = v209->m128i_i64[0];
        *(_QWORD *)(v212 + 40) = v213;
        std::_Rb_tree_insert_and_rebalance();
        ++v323;
      }
      ++v209;
    }
    while ( v209 != (__m128i *)&v325 );
    a4 = v314;
    v214 = operator new(0x30u);
    v215 = v320[1];
    if ( v320[1] )
    {
      v216 = (int)v320[0];
      *(void **)(v214 + 16) = v320[1];
      *(_DWORD *)(v214 + 8) = v216;
      *(_QWORD *)(v214 + 24) = v321;
      *(_QWORD *)(v214 + 32) = v322;
      v215[1] = v214 + 8;
      v320[1] = nullptr;
      *(_QWORD *)(v214 + 40) = v323;
      v323 = 0;
      v321 = v320;
      v322 = v320;
    }
    else
    {
      *(_DWORD *)(v214 + 8) = 0;
      *(_QWORD *)(v214 + 16) = 0;
      *(_QWORD *)(v214 + 24) = v214 + 8;
      *(_QWORD *)(v214 + 32) = v214 + 8;
      *(_QWORD *)(v214 + 40) = 0;
    }
    v217 = qword_2CAD3E8;
    qword_2CAD3E8 = (void *)v214;
    if ( v217 )
    {
      if ( v217[2] )
      {
        v302 = (void *)v13;
        v310 = v11;
        v11 = (__int64)v217;
        v218 = v217[2];
        do
        {
          sub_9C9C90(v11, *(_QWORD **)(v218 + 24));
          v219 = *(_QWORD *)(v218 + 16);
          operator delete((void *)v218);
          v218 = v219;
        }
        while ( v219 );
        v217 = (_QWORD *)v11;
        v13 = (__int64)v302;
        LOBYTE(v11) = v310;
        a4 = v314;
      }
      operator delete(v217, 0x30u);
    }
    if ( v320[1] )
    {
      v303 = (void *)v13;
      v311 = v11;
      v220 = (_QWORD **)v320[1];
      do
      {
        sub_9C9C90((__int64)&v319, v220[3]);
        v221 = (_QWORD **)v220[2];
        operator delete(v220);
        v220 = v221;
      }
      while ( v221 );
      v13 = (__int64)v303;
      LOBYTE(v11) = v311;
    }
  }
  v106 = s1c[5];
  if ( (v106 & 7) != 0 )
    goto LABEL_73;
  ne = v106 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v106 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_177;
  v179 = sub_B51D10(s1c, 0);
  v180 = sub_9C8EF0((__int64)v324, (char *)(*(_QWORD *)(ne + 16) + 16LL), **(unsigned int **)(ne + 16), v179 != 0);
  v316 = v181;
  v315 = v180;
  nm = (char *)qword_2CAD3E8;
  if ( (char *)sub_9C9D30((__int64)qword_2CAD3E8, (__int64)&v315) != nm + 8 )
    goto LABEL_265;
  if ( v315 )
  {
    v324[0].m128i_i64[0] = (__int64)v324[1].m128i_i64;
    sub_9C77B0(v324, v315, (__int64)&v315[v316]);
    v203 = (__m128i *)v324[0].m128i_i64[0];
  }
  else
  {
    v203 = &v324[1];
    v324[1].m128i_i8[0] = 0;
    v324[0].m128i_i64[0] = (__int64)v324[1].m128i_i64;
    v324[0].m128i_i64[1] = 0;
  }
  v309 = v203;
  v204 = j__strlen("wcs");
  v205 = sub_974680(v324[0].m128i_i64, "wcs", 0, v204);
  if ( v205 != -1 )
  {
    nf = v13;
    v206 = (__int64)v309;
    v207 = v205;
    while ( 1 )
    {
      *(_BYTE *)(v206 + v207) = 115;
      *(_BYTE *)(v324[0].m128i_i64[0] + v207 + 1) = 116;
      *(_BYTE *)(v324[0].m128i_i64[0] + v207 + 2) = 114;
      v208 = j__strlen("wcs");
      v207 = sub_974680(v324[0].m128i_i64, "wcs", v207 + 3, v208);
      if ( v207 == -1 )
        break;
      v206 = v324[0].m128i_i64[0];
    }
    v13 = nf;
  }
  v319 = (void *)v324[0].m128i_i64[0];
  nn = (char *)qword_2CAD3E8;
  v320[0] = (void *)v324[0].m128i_i64[1];
  if ( (char *)sub_9C9D30((__int64)qword_2CAD3E8, (__int64)&v319) != nn + 8 )
  {
    if ( (__m128i *)v324[0].m128i_i64[0] != &v324[1] )
      operator delete((void *)v324[0].m128i_i64[0]);
    goto LABEL_265;
  }
  v227 = j__strlen("scanf");
  v228 = sub_9C8940(&v315, "scanf", v227);
  v229 = v228;
  if ( (__m128i *)v324[0].m128i_i64[0] != &v324[1] )
  {
    no = v228;
    operator delete((void *)v324[0].m128i_i64[0]);
    v229 = no;
  }
  if ( v229 )
  {
LABEL_265:
    v324[0].m128i_i32[0] = sub_AD6A60(v13);
    v182 = j__strlen("UnsafeLibcFunctionCall");
    v183 = (__m128i *)sub_9D0C50((__int64)&v317, "UnsafeLibcFunctionCall", v182);
    v324[0].m128i_i64[1] = v13;
    *v183 = _mm_load_si128(v324);
    v183[1] = _mm_load_si128(&v324[1]);
    v183[2].m128i_i64[0] = v324[2].m128i_i64[0];
    goto LABEL_226;
  }
  v106 = s1c[5];
  if ( (v106 & 7) != 0 )
    goto LABEL_73;
  ng = v106 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v106 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_177;
  v230 = sub_B51D10(s1c, 0);
  v304 = sub_9C8EF0((__int64)v324, (char *)(*(_QWORD *)(ng + 16) + 16LL), **(unsigned int **)(ng + 16), v230 != 0);
  nh = v231;
  v232 = j__strlen("printf");
  if ( v232 <= nh && (!v232 || !memcmp(&v304[nh - v232], "printf", v232)) )
  {
    v233 = j__strlen("v");
    if ( v233 <= nh && (!v233 || !memcmp(v304, "v", v233)) )
    {
      v324[0].m128i_i32[0] = sub_AD6A60(v13);
      v252 = j__strlen("UnsafeLibcFunctionCall");
      v253 = (__m128i *)sub_9D0C50((__int64)&v317, "UnsafeLibcFunctionCall", v252);
      v324[0].m128i_i64[1] = v13;
      *v253 = _mm_load_si128(v324);
      v253[1] = _mm_load_si128(&v324[1]);
      v253[2].m128i_i64[0] = v324[2].m128i_i64[0];
      v324[0].m128i_i32[0] = sub_AD64A0(s1c);
      v254 = j__strlen("UnsafeLibcFunctionCall_va_list");
      v255 = (__m128i *)sub_9D0C50((__int64)&v317, "UnsafeLibcFunctionCall_va_list", v254);
      v324[0].m128i_i64[1] = (__int64)s1c;
      *v255 = _mm_load_si128(v324);
      v255[1] = _mm_load_si128(&v324[1]);
      v255[2].m128i_i64[0] = v324[2].m128i_i64[0];
      goto LABEL_226;
    }
  }
  v106 = s1c[5];
  if ( (v106 & 7) != 0 )
    goto LABEL_73;
  ni = v106 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v106 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_177:
    n = v106 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v106 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_73;
    v107 = sub_B51D10(s1c, 0);
    s1d = sub_9C8EF0((__int64)v324, (char *)(*(_QWORD *)(n + 16) + 16LL), **(unsigned int **)(n + 16), v107 != 0);
    na = v108;
    v109 = j__strlen("printf");
    if ( v109 > na || v109 && memcmp(&s1d[na - v109], "printf", v109) )
      goto LABEL_73;
    v110 = j__strlen("v");
    if ( v110 <= na && (!v110 || !memcmp(s1d, "v", v110)) )
      goto LABEL_73;
    v111 = na;
    if ( na >= 6 )
      v111 = na - 6;
    v324[0].m128i_i64[1] = v111;
    nb = v111;
    v324[0].m128i_i64[0] = (__int64)s1d;
    v112 = j__strlen("w");
    v113 = "w";
    if ( sub_9C8940(v324, "w", v112) )
    {
      v114 = nb - 1;
      if ( !nb )
        v114 = 0;
      v324[0].m128i_i64[1] = v114;
    }
    nc = v324[0].m128i_i64[1];
    if ( v324[0].m128i_i64[1] )
    {
      if ( nc != j__strlen("k") || (v113 = "k", memcmp(s1d, "k", nc)) )
      {
        if ( nc != j__strlen("f") || (v113 = "f", memcmp(s1d, "f", nc)) )
        {
          if ( nc != j__strlen("sn") )
            goto LABEL_73;
          v113 = "sn";
          if ( memcmp(s1d, "sn", nc) )
            goto LABEL_73;
        }
      }
    }
    v115 = sub_BD7F30(*(_QWORD *)(v13 + 32));
    v116 = (_QWORD **)v115;
    if ( v115 && (*(_BYTE *)(v115 + 28) & 0x7Fu) - 34 >= 6 )
      v116 = nullptr;
    s1e = v116;
    *(double *)si128.m128_u64 = sub_B52330(v116);
    if ( v119 > 2 )
    {
      v120 = *(_QWORD *)(*(_QWORD *)(*s1e[15] + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
      v121 = *(_QWORD *)(*(_QWORD *)(v120 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v121 + 16) == 42 )
      {
        if ( *(_BYTE *)(v120 + 16) != 42 )
          v120 = sub_F3F310(v120, v113, v121, v117, v118);
        v122 = *(_QWORD *)(v120 + 32);
        if ( (v122 & 1) == 0 )
        {
          v123 = v122 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (*(_BYTE *)(v123 + 8) & 1) == 0 )
          {
            v124 = 8 * (((*(_BYTE *)(v13 + 2) & 8) != 0) + 1LL);
            v113 = *(char **)(v13 + v124 + 40);
            s1f = *(_QWORD **)(v13 + v124 + 32);
            if ( (unsigned __int8)sub_F342B0(*(_QWORD *)v123, *(double *)si128.m128_u64) )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(s1f[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 42
                && (unsigned __int8)sub_F41620(*(_QWORD *)(*((_QWORD *)v113 + 1) & 0xFFFFFFFFFFFFFFF0LL))
                && !(unsigned __int8)sub_9C9530((__int64)s1f, v113, a3) )
              {
                v324[0].m128i_i32[0] = sub_AD6A60(v13);
                v268 = j__strlen("UnsafeLibcFunctionCall");
                v269 = sub_9D0C50((__int64)&v317, "UnsafeLibcFunctionCall", v268);
                v324[0].m128i_i64[1] = v13;
                v270 = 10;
                v271 = v324;
                v272 = (_DWORD *)v269;
                while ( v270 )
                {
                  *v272 = v271->m128i_i32[0];
                  v271 = (__m128i *)((char *)v271 + 4);
                  ++v272;
                  --v270;
                }
                v324[0].m128i_i32[0] = sub_AD6A60(v13);
                v273 = j__strlen("UnsafeLibcFunctionCall_sized_by");
                v248 = sub_9D0C50((__int64)&v317, "UnsafeLibcFunctionCall_sized_by", v273);
                v324[0].m128i_i64[1] = v13;
                goto LABEL_365;
              }
            }
          }
        }
      }
    }
    s1g = (void *)j__strlen("UnsafeLibcFunctionCall_string");
    v125 = sub_BD7F30(*(_QWORD *)(v13 + 32));
    v126 = (_QWORD **)v125;
    if ( v125 && (*(_BYTE *)(v125 + 28) & 0x7Fu) - 34 >= 6 )
      v126 = nullptr;
    v301 = v126;
    *(double *)si128.m128_u64 = sub_B52330(v126);
    v128 = (__int64)v301;
    nd = v129;
    if ( !v129 )
      goto LABEL_73;
    v130 = *(_QWORD *)(*(_QWORD *)(*v301[15] + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
    v131 = *(_QWORD *)(*(_QWORD *)(v130 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v131 + 16) != 42 )
      goto LABEL_73;
    if ( *(_BYTE *)(v130 + 16) != 42 )
    {
      v130 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(*v301[15] + 48LL) & 0xFFFFFFFFFFFFFFF0LL), v113, v301, v131, v127);
      v128 = (__int64)v301;
    }
    v132 = *(_QWORD *)(v130 + 32);
    v133 = *(_QWORD *)(a3 + 1648);
    if ( !v133 )
      goto LABEL_212;
    v134 = *(_QWORD *)(v133 + 48);
    if ( v134 )
    {
      if ( (v134 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_212;
    }
    else
    {
      v312 = v132;
      v307 = (void *)v128;
      v265 = sub_A56D30(a3, v133, v128);
      v128 = (__int64)v307;
      v132 = v312;
      if ( (v265 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_212;
      v133 = *(_QWORD *)(a3 + 1648);
      v266 = 0;
      if ( !v133 )
        goto LABEL_403;
    }
    v267 = *(_QWORD *)(v133 + 48);
    if ( v267 )
    {
      v266 = v267 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v313 = v132;
      v308 = (void *)v128;
      v266 = sub_A56D30(a3, v133, v128);
      v132 = v313;
      v128 = (__int64)v308;
    }
LABEL_403:
    v133 = *(_QWORD *)&byte_8[v132 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
         | ((unsigned __int8)v132 | (unsigned __int8)*(_QWORD *)&byte_8[v132 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    if ( (*(_QWORD *)&byte_8[v266 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v266 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v266) & 7) == v133 )
    {
      if ( !(unsigned __int8)sub_9DD640(v13, &v319, 1u, a3, 0) )
        goto LABEL_73;
      goto LABEL_377;
    }
LABEL_212:
    if ( (v132 & 1) != 0 || (v135 = v132 & 0xFFFFFFFFFFFFFFF0LL, (*(_BYTE *)(v135 + 8) & 1) != 0) )
    {
      v256 = *(_QWORD *)(v128 + 40);
      if ( (v256 & 7) == 0
        && (nk = v256 & 0xFFFFFFFFFFFFFFF8LL, (v256 & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && (v257 = j__strlen("kprintf"), v258 = *(_DWORD **)(nk + 16), v257 == *v258) )
      {
        if ( v257 )
          LOBYTE(v11) = memcmp(v258 + 4, "kprintf", v257) == 0;
      }
      else
      {
        LOBYTE(v11) = 0;
      }
      if ( !(unsigned __int8)sub_9DD640(v13, &v319, 0, a3, v11) )
        goto LABEL_73;
    }
    else
    {
      if ( nd <= 2
        || !sub_9C8B50(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v128 + 120) + 8LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL),
              v133,
              v128,
              v135,
              v127) )
      {
        v136 = 8 * (((*(_BYTE *)(v13 + 2) & 8) != 0) + 1LL) + 32;
        v137 = v136 + 8LL * *(unsigned int *)(v13 + 16);
        v138 = (__int64 *)(v13 + v136);
        v139 = (__int64 *)(v13 + v137);
        if ( v139 == v138 )
          goto LABEL_73;
        v140 = v13;
        v141 = a4;
        v142 = v139;
        while ( 1 )
        {
          v143 = *v138;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v138 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 42
            && !(unsigned __int8)sub_9DD410(*v138) )
          {
            break;
          }
          if ( v142 == ++v138 )
          {
            v13 = v140;
            a4 = v141;
            goto LABEL_73;
          }
        }
        v144 = v143;
        a4 = v141;
        v13 = v140;
        nl = v144;
        v324[0].m128i_i32[0] = sub_AD6A60(v144);
        v145 = v324;
        v146 = (_DWORD *)sub_9D0C50((__int64)&v317, "UnsafeLibcFunctionCall_string", (size_t)s1g);
        v324[0].m128i_i64[1] = nl;
        for ( i = 10; i; --i )
        {
          *v146 = v145->m128i_i32[0];
          v145 = (__m128i *)((char *)v145 + 4);
          ++v146;
        }
LABEL_223:
        v324[0].m128i_i32[0] = sub_AD6A60(v13);
        v148 = j__strlen("UnsafeLibcFunctionCall");
        v149 = sub_9D0C50((__int64)&v317, "UnsafeLibcFunctionCall", v148);
        v324[0].m128i_i64[1] = v13;
        v150 = 10;
        v151 = v324;
        v152 = (_DWORD *)v149;
        while ( v150 )
        {
          *v152 = v151->m128i_i32[0];
          v151 = (__m128i *)((char *)v151 + 4);
          ++v152;
          --v150;
        }
        goto LABEL_226;
      }
      if ( !(unsigned __int8)sub_9DD640(v13, &v319, 2u, a3, 0) )
        goto LABEL_73;
    }
LABEL_377:
    v259 = v319;
    v324[0].m128i_i32[0] = sub_AD6A60(v319);
    v260 = sub_9D0C50((__int64)&v317, "UnsafeLibcFunctionCall_string", (size_t)s1g);
    v324[0].m128i_i64[1] = (__int64)v259;
    v261 = 10;
    v262 = v324;
    v263 = (_DWORD *)v260;
    while ( v261 )
    {
      *v263 = v262->m128i_i32[0];
      v262 = (__m128i *)((char *)v262 + 4);
      ++v263;
      --v261;
    }
    goto LABEL_223;
  }
  v234 = sub_B51D10(s1c, 0);
  nj = sub_9C8EF0((__int64)v324, (char *)(*(_QWORD *)(ni + 16) + 16LL), **(unsigned int **)(ni + 16), v234 != 0);
  v305 = v235;
  v236 = j__strlen("printf");
  if ( v236 > (unsigned __int64)v305 || v236 && memcmp(&v305[(_QWORD)nj - v236], "printf", v236) )
    goto LABEL_176;
  v237 = j__strlen("v");
  if ( v237 <= (unsigned __int64)v305 && (!v237 || !memcmp(nj, "v", v237)) )
    goto LABEL_176;
  v238 = (__int64)v305;
  if ( (unsigned __int64)v305 >= 6 )
    v238 = (__int64)(v305 - 6);
  v324[0].m128i_i64[1] = v238;
  v324[0].m128i_i64[0] = (__int64)nj;
  v306 = (void *)v238;
  v239 = j__strlen("w");
  if ( sub_9C8940(v324, "w", v239) )
  {
    v240 = (__int64)v306 - 1;
    if ( !v306 )
      v240 = 0;
    v324[0].m128i_i64[1] = v240;
  }
  v241 = j__strlen("s");
  if ( v241 != v324[0].m128i_i64[1] || v241 && memcmp(nj, "s", v241) )
  {
LABEL_176:
    v106 = s1c[5];
    if ( (v106 & 7) != 0 )
      goto LABEL_73;
    goto LABEL_177;
  }
  v324[0].m128i_i32[0] = sub_AD6A60(v13);
  v242 = j__strlen("UnsafeLibcFunctionCall");
  v243 = sub_9D0C50((__int64)&v317, "UnsafeLibcFunctionCall", v242);
  v324[0].m128i_i64[1] = v13;
  v244 = 10;
  v245 = v324;
  v246 = (_DWORD *)v243;
  while ( v244 )
  {
    *v246 = v245->m128i_i32[0];
    v245 = (__m128i *)((char *)v245 + 4);
    ++v246;
    --v244;
  }
  v324[0].m128i_i32[0] = sub_AD64A0(s1c);
  v247 = j__strlen("UnsafeLibcFunctionCall_sprintf");
  v248 = sub_9D0C50((__int64)&v317, "UnsafeLibcFunctionCall_sprintf", v247);
  v324[0].m128i_i64[1] = (__int64)s1c;
LABEL_365:
  v249 = 10;
  v250 = (_DWORD *)v248;
  v251 = v324;
  while ( v249 )
  {
    *v250 = v251->m128i_i32[0];
    v251 = (__m128i *)((char *)v251 + 4);
    ++v250;
    --v249;
  }
LABEL_226:
  LODWORD(v11) = sub_9C6D60(v13, (__int64)a4);
  if ( (_BYTE)v11 )
  {
    v55 = *(char ***)(a1 + 8);
    v56 = operator new(0x28u);
    *(_DWORD *)(v56 + 8) = 7;
    *(_QWORD *)v56 = off_2B16978;
    v153 = j__strlen("UnsafeLibcFunctionCall");
    v154 = sub_9CC9C0((__int64)&v317, (__int64)"UnsafeLibcFunctionCall", v153);
    *(_QWORD *)(v56 + 24) = 0;
    *(_QWORD *)(v56 + 16) = v154;
    *(_DWORD *)(v56 + 32) = 0;
    v155 = j__strlen("UnsafeLibcFunctionCall_sprintf");
    if ( sub_9CC6C0((__int64)&v317, (__int64)"UnsafeLibcFunctionCall_sprintf", v155) )
    {
      *(_DWORD *)(v56 + 32) = 1;
    }
    else
    {
      v201 = j__strlen("UnsafeLibcFunctionCall_string");
      v202 = sub_9CC780((__int64)&v317, (__int64)"UnsafeLibcFunctionCall_string", v201);
      if ( v202 )
      {
        *(_DWORD *)(v56 + 32) = 3;
        *(_QWORD *)(v56 + 24) = v202;
      }
      else
      {
        v225 = j__strlen("UnsafeLibcFunctionCall_sized_by");
        if ( sub_9CC9C0((__int64)&v317, (__int64)"UnsafeLibcFunctionCall_sized_by", v225) )
        {
          v226 = *(_QWORD *)(v56 + 16);
          *(_DWORD *)(v56 + 32) = 2;
          *(_QWORD *)(v56 + 24) = *(_QWORD *)(v226 + 8 * (((*(_BYTE *)(v226 + 2) & 8) != 0) + 1LL) + 32);
        }
        else
        {
          v264 = j__strlen("UnsafeLibcFunctionCall_va_list");
          if ( sub_9CC6C0((__int64)&v317, (__int64)"UnsafeLibcFunctionCall_va_list", v264) )
            *(_DWORD *)(v56 + 32) = 4;
        }
      }
    }
    goto LABEL_78;
  }
LABEL_73:
  v53 = *a4;
LABEL_74:
  v54 = *(__int64 (**)())(v53 + 56);
  v324[0].m128i_i32[0] = sub_EC7AA0(v13);
  if ( v54 != sub_9C5900 && ((unsigned __int8 (__fastcall *)(_QWORD *, __m128i *))v54)(a4, v324)
    || !(unsigned __int8)sub_9D1090((_DWORD *)v13, a3, (__int64)&v317)
    || (LODWORD(v11) = sub_9C6D60(v13, (__int64)a4), !(_BYTE)v11) )
  {
    LODWORD(v11) = 0;
    goto LABEL_28;
  }
  v55 = *(char ***)(a1 + 8);
  v56 = operator new(0x18u);
  *(_DWORD *)(v56 + 8) = 8;
  *(_QWORD *)v56 = off_2B16858;
  v57 = j__strlen("spanTwoParamConstructor");
  *(_QWORD *)(v56 + 16) = sub_9CC840((__int64)&v317, (__int64)"spanTwoParamConstructor", v57);
LABEL_78:
  v324[0].m128i_i64[0] = v56;
  sub_9C6980(v55, v324[0].m128i_i64, si128, *(double *)a6.m128_u64);
  if ( v324[0].m128i_i64[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v324[0].m128i_i64[0] + 32LL))(v324[0].m128i_i64[0]);
LABEL_28:
  sub_9C9380((void **)&v317);
  return (unsigned int)v11;
}

