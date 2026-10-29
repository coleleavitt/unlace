__int64 __fastcall sub_A016E0(__int64 a1, unsigned int *a2, __int64 a3, _QWORD *a4, double a5, __m128 a6)
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
  __int64 v212; // r13
  unsigned int v213; // ebp
  __int64 v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rax
  _QWORD *v217; // rdx
  int v218; // ecx
  _QWORD *v219; // rdx
  __int64 v220; // r12
  __int64 v221; // rbx
  _QWORD **v222; // rbp
  _QWORD **v223; // rbx
  const void *v224; // rsi
  size_t v225; // rdx
  char *v226; // rcx
  size_t v227; // rax
  __int64 v228; // rdx
  size_t v229; // rax
  bool v230; // al
  bool v231; // dl
  int v232; // eax
  size_t v233; // rdx
  size_t v234; // rax
  size_t v235; // rax
  int v236; // eax
  char *v237; // rdx
  size_t v238; // rax
  size_t v239; // rax
  __int64 v240; // rcx
  size_t v241; // rax
  __int64 v242; // rax
  size_t v243; // rax
  size_t v244; // rax
  __int64 v245; // rax
  __int64 v246; // rcx
  __m128i *v247; // rsi
  _DWORD *v248; // rdi
  size_t v249; // rax
  __int64 v250; // rax
  __int64 v251; // rcx
  _DWORD *v252; // rdi
  __m128i *v253; // rsi
  size_t v254; // rax
  __m128i *v255; // rax
  size_t v256; // rax
  __m128i *v257; // rax
  __int64 v258; // rax
  size_t v259; // rax
  _DWORD *v260; // rcx
  void *v261; // rbp
  __int64 v262; // rax
  __int64 v263; // rcx
  __m128i *v264; // rsi
  _DWORD *v265; // rdi
  size_t v266; // rax
  __int64 v267; // rax
  unsigned __int64 v268; // rax
  __int64 v269; // rax
  size_t v270; // rax
  __int64 v271; // rax
  __int64 v272; // rcx
  __m128i *v273; // rsi
  _DWORD *v274; // rdi
  size_t v275; // rax
  unsigned __int8 v277; // [rsp+8h] [rbp-4C0h]
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
  _QWORD **v303; // [rsp+28h] [rbp-4A0h]
  void *v304; // [rsp+28h] [rbp-4A0h]
  void *v305; // [rsp+28h] [rbp-4A0h]
  char *v306; // [rsp+28h] [rbp-4A0h]
  char *v307; // [rsp+28h] [rbp-4A0h]
  void *v308; // [rsp+28h] [rbp-4A0h]
  void *v309; // [rsp+28h] [rbp-4A0h]
  void *v310; // [rsp+28h] [rbp-4A0h]
  __m128i *v311; // [rsp+30h] [rbp-498h]
  char v312; // [rsp+30h] [rbp-498h]
  __int64 v313; // [rsp+30h] [rbp-498h]
  __int64 v314; // [rsp+30h] [rbp-498h]
  char v315; // [rsp+38h] [rbp-490h]
  _QWORD *v316; // [rsp+40h] [rbp-488h]
  char *v317; // [rsp+50h] [rbp-478h] BYREF
  __int64 v318; // [rsp+58h] [rbp-470h]
  __int64 *v319; // [rsp+60h] [rbp-468h] BYREF
  __m128 v320; // [rsp+68h] [rbp-460h]
  void *v321; // [rsp+80h] [rbp-448h] BYREF
  void *v322[2]; // [rsp+88h] [rbp-440h] BYREF
  void **v323; // [rsp+98h] [rbp-430h]
  void **v324; // [rsp+A0h] [rbp-428h]
  __int64 v325; // [rsp+A8h] [rbp-420h]
  __m128i v326[62]; // [rsp+B0h] [rbp-418h] BYREF
  char v327; // [rsp+490h] [rbp-38h] BYREF

  v8 = *a2;
  v326[0].m128i_i32[0] = 180;
  LODWORD(v11) = sub_AFA190(v326, v8);
  if ( !(_BYTE)v11 )
    return (unsigned int)v11;
  v13 = *((_QWORD *)a2 + 1);
  if ( !v13 )
  {
    LODWORD(v11) = 0;
    return (unsigned int)v11;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D10);
  v319 = nullptr;
  v320 = si128;
  v15 = *(_WORD *)v13 & 0x1FF;
  if ( v15 != 4 )
    goto LABEL_13;
  v16 = (*(_BYTE *)(v13 + 2) >> 3) & 0x1D;
  if ( !v16 )
  {
    v17 = sub_BFBAE0(*(_QWORD *)(v13 + 16));
    if ( !sub_9E9510(v17) )
      goto LABEL_69;
    v326[0].m128i_i32[0] = sub_AFA7A0(v13);
    v18 = j__strlen("op");
    v19 = sub_9F4990((__int64)&v319, "op", v18);
    v326[0].m128i_i64[1] = v13;
    v8 = (__int64)a4;
    a6 = (__m128)_mm_load_si128(v326);
    *(__m128 *)v19 = a6;
    *(__m128i *)(v19 + 16) = _mm_load_si128(&v326[1]);
    *(_QWORD *)(v19 + 32) = v326[2].m128i_i64[0];
    v20 = sub_9EAAA0(v13, (__int64)a4);
    if ( v20 )
    {
      v277 = v20;
      v95 = *(char ***)(a1 + 8);
      v96 = operator new(0x18u);
      *(_DWORD *)(v96 + 8) = 0;
      *(_QWORD *)v96 = off_2B406D8;
      v97 = j__strlen("op");
      v98 = sub_9F0640((__int64)&v319, (__int64)"op", v97);
      v326[0].m128i_i64[0] = v96;
      *(_QWORD *)(v96 + 16) = v98;
      sub_9EA6C0(v95, v326[0].m128i_i64, si128, *(double *)a6.m128_u64);
      v100 = v277;
      if ( v326[0].m128i_i64[0] )
      {
        (*(void (__fastcall **)(__int64, __m128i *, __int64, _QWORD))(*(_QWORD *)v326[0].m128i_i64[0] + 32LL))(
          v326[0].m128i_i64[0],
          v326,
          v99,
          v277);
        v100 = v277;
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
    v21 = sub_BFBAE0(*(_QWORD *)(v13 + 16));
    if ( sub_9E9510(v21) )
    {
      v326[0].m128i_i32[0] = sub_AFA7A0(v13);
      v22 = j__strlen("op");
      v23 = (__m128i *)sub_9F4990((__int64)&v319, "op", v22);
      v326[0].m128i_i64[1] = v13;
      v8 = (__int64)a4;
      *v23 = _mm_load_si128(v326);
      v23[1] = _mm_load_si128(&v326[1]);
      v23[2].m128i_i64[0] = v326[2].m128i_i64[0];
      v24 = sub_9EAAA0(v13, (__int64)a4);
      if ( (_BYTE)v24 )
      {
        v83 = *(char ***)(a1 + 8);
        v101 = operator new(0x18u);
        *(_DWORD *)(v101 + 8) = 1;
        v85 = v101;
        *(_QWORD *)v101 = off_2B40720;
        v102 = j__strlen("op");
        v103 = sub_9F0640((__int64)&v319, (__int64)"op", v102);
        goto LABEL_162;
      }
      v15 = *(_WORD *)v13 & 0x1FF;
LABEL_13:
      if ( v15 != 123 )
        goto LABEL_64;
      if ( sub_9ECBA0(v13, v8, v9, v10, v12) )
        v25 = *(_QWORD *)(v13 + 16);
      else
        v25 = *(_QWORD *)(v13 + 24);
      v26 = sub_BFBAE0(v25);
      if ( !sub_9E9510(v26) && !sub_9E9530(v26) )
        goto LABEL_63;
      if ( sub_9ECBA0(v13, v8, v27, v28, v29) )
        v32 = *(_QWORD *)(v13 + 24);
      else
        v32 = *(_QWORD *)(v13 + 16);
      if ( (*(_WORD *)v32 & 0x1FF) != 0x34 )
      {
        v33 = 0;
LABEL_33:
        if ( sub_9ECBA0(v13, v8, v32, v30, v31) )
          v38 = *(_WORD **)(v13 + 24);
        else
          v38 = *(_WORD **)(v13 + 16);
        if ( (*v38 & 0x1FF) == 0x7E )
        {
          if ( v33 && v326[0].m128i_i32[2] > 0x40u && v326[0].m128i_i64[0] )
            operator delete[]((void *)v326[0].m128i_i64[0]);
          goto LABEL_63;
        }
        if ( v33 && v326[0].m128i_i32[2] > 0x40u && v326[0].m128i_i64[0] )
          operator delete[]((void *)v326[0].m128i_i64[0]);
        if ( sub_9ECBA0(v13, v8, v35, v36, v37) )
          v39 = *(_QWORD *)(v13 + 16);
        else
          v39 = *(_QWORD *)(v13 + 24);
        v40 = sub_BFBAE0(v39);
        v44 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL), v8, v41, v42, v43);
        v47 = (unsigned int)*(unsigned __int8 *)(v44 + 16) - 2;
        if ( (unsigned int)v47 > 1 )
        {
          if ( sub_9ECBA0(v13, v8, v47, v45, v46) )
            v156 = *(_QWORD *)(v13 + 16);
          else
            v156 = *(_QWORD *)(v13 + 24);
          v157 = (unsigned __int16 *)sub_BFBAE0(v156);
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
            if ( sub_9EC640(*(_QWORD *)(v44 + 40), 0xFFFFFFFFFFFFFFFFLL) )
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
        v326[1].m128i_i8[4] &= ~1u;
        v326[0].m128i_i16[0] = 0;
        v326[0].m128i_i64[1] = 0;
        v326[1].m128i_i32[0] = 0;
        if ( sub_9ECBA0(v13, v8, v47, v45, v46) )
          v49 = *(_QWORD *)(v13 + 24);
        else
          v49 = *(_QWORD *)(v13 + 16);
        if ( (*(_DWORD *)v49 & 0x20000) == 0 && (unsigned __int8)sub_C3F220(v49, v326, a3, 0, 0) )
        {
          v80 = v326[2].m128i_u32[0];
          LODWORD(v322[0]) = v326[2].m128i_i32[0];
          if ( v326[2].m128i_i32[0] > 0x40u )
          {
            sub_2205510(&v321);
            v80 = (unsigned __int32)v322[0];
          }
          else
          {
            v321 = (void *)v326[1].m128i_i64[1];
          }
          BYTE4(v322[0]) = v326[2].m128i_i8[4];
          if ( v326[2].m128i_i8[4] || !sub_9E9EA0((__int64 *)&v321) )
          {
            v8 = -1;
            if ( !sub_9EC640((__int64)&v321, 0xFFFFFFFFFFFFFFFFLL) )
            {
              v51 = v321;
              if ( v80 > 0x40 )
              {
                if ( *(_QWORD *)v321 >= v48 )
                  goto LABEL_144;
                goto LABEL_60;
              }
LABEL_308:
              if ( (unsigned __int64)v51 >= v48 )
                goto LABEL_146;
LABEL_61:
              if ( v326[1].m128i_i32[0] > 1u )
                sub_A4F8E0(&v326[1]);
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
          if ( ((*v199 & 0x20000) != 0 || !(unsigned __int8)sub_C3F220(v199, v326, a3, 0, 0))
            && ((*v200 & 0x20000) != 0 || !(unsigned __int8)sub_C3F220(v200, v326, a3, 0, 0)) )
          {
            goto LABEL_146;
          }
          v80 = v326[2].m128i_u32[0];
          LODWORD(v322[0]) = v326[2].m128i_i32[0];
          if ( v326[2].m128i_i32[0] > 0x40u )
          {
            sub_2205510(&v321);
            v80 = (unsigned __int32)v322[0];
          }
          else
          {
            v321 = (void *)v326[1].m128i_i64[1];
          }
          BYTE4(v322[0]) = v326[2].m128i_i8[4];
          if ( !v326[2].m128i_i8[4] && sub_9E9EA0((__int64 *)&v321)
            || (v8 = -1, sub_9EC640((__int64)&v321, 0xFFFFFFFFFFFFFFFFLL)) )
          {
LABEL_272:
            if ( v80 <= 0x40 )
              goto LABEL_146;
LABEL_273:
            v51 = v321;
            goto LABEL_144;
          }
          v51 = v321;
          if ( v80 <= 0x40 )
            goto LABEL_308;
          if ( v48 <= *(_QWORD *)v321 )
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
          if ( !(unsigned __int8)sub_F65360(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL))
            || (*s1 & 0x20000) != 0
            || !(unsigned __int8)sub_C3F220(s1, v326, a3, 0, 0) )
          {
            goto LABEL_146;
          }
          LODWORD(v322[0]) = v326[2].m128i_i32[0];
          if ( v326[2].m128i_i32[0] > 0x40u )
            sub_2205510(&v321);
          else
            v321 = (void *)v326[1].m128i_i64[1];
          BYTE4(v322[0]) = v326[2].m128i_i8[4];
          if ( !v326[2].m128i_i8[4] && sub_9E9EA0((__int64 *)&v321) )
            goto LABEL_394;
          v8 = -1;
          if ( !sub_9EC640((__int64)&v321, 0xFFFFFFFFFFFFFFFFLL) )
          {
            v51 = v321;
            if ( LODWORD(v322[0]) > 0x40 )
            {
              if ( v48 < *(_QWORD *)v321 )
                goto LABEL_144;
              goto LABEL_60;
            }
            if ( (unsigned __int64)v321 <= v48 )
              goto LABEL_61;
LABEL_146:
            if ( v326[1].m128i_i32[0] > 1u )
              sub_A4F8E0(&v326[1]);
LABEL_148:
            v326[0].m128i_i32[0] = sub_AFA7A0(v13);
            v81 = j__strlen("ArraySubscript");
            v82 = (__m128i *)sub_9F4990((__int64)&v319, "ArraySubscript", v81);
            v326[0].m128i_i64[1] = v13;
            v8 = (__int64)a4;
            *v82 = _mm_load_si128(v326);
            v82[1] = _mm_load_si128(&v326[1]);
            v82[2].m128i_i64[0] = v326[2].m128i_i64[0];
            v24 = sub_9EAAA0(v13, (__int64)a4);
            if ( (_BYTE)v24 )
            {
              v83 = *(char ***)(a1 + 8);
              v84 = operator new(0x18u);
              *(_DWORD *)(v84 + 8) = 2;
              v85 = v84;
              *(_QWORD *)v84 = off_2B40768;
              v86 = j__strlen("ArraySubscript");
              v87 = sub_2244B30("ArraySubscript", v86);
              v88 = sub_2244E60(&v319, "ArraySubscript", v86, v87);
              if ( v88 == -1 )
                sub_9F02A0((__int64 **)v326, &v319[v320.m128_u32[0]], 1);
              else
                sub_9F02A0((__int64 **)v326, &v319[v88], 1);
              v89 = (__int64 *)v326[0].m128i_i64[0];
              sub_9F02A0((__int64 **)v326, &v319[v320.m128_u32[0]], 1);
              if ( (__int64 *)v326[0].m128i_i64[0] == v89 )
              {
                v93 = 0;
              }
              else
              {
                v90 = *v89;
                v91 = *(unsigned int *)(v90 + 8);
                v326[0].m128i_i32[0] = 311;
                v92 = sub_AFA190(v326, v91);
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
LABEL_394:
            if ( LODWORD(v322[0]) <= 0x40 )
              goto LABEL_146;
            goto LABEL_273;
          }
          if ( LODWORD(v322[0]) <= 0x40 )
            goto LABEL_61;
          v51 = v321;
          if ( !v321 )
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
        sub_2205610(v326, v8, v32, v30);
      }
      else
      {
        v326[0].m128i_i32[2] = v8;
        if ( (unsigned int)v8 <= 0x40 )
        {
          v326[0].m128i_i64[0] = v30;
          goto LABEL_24;
        }
        v8 = v30;
        sub_2205470(v326, v30, 0);
      }
      v79 = v326[0].m128i_i32[2];
      if ( v326[0].m128i_i32[2] > 0x40u )
      {
        if ( v79 != (unsigned int)sub_2206780(v326) )
          goto LABEL_25;
        if ( v326[0].m128i_i64[0] )
        {
          operator delete[]((void *)v326[0].m128i_i64[0]);
          v15 = *(_WORD *)v13 & 0x1FF;
LABEL_64:
          if ( ((v15 + 394) & 0x1FFu) > 1 )
            goto LABEL_65;
          v68 = *(_QWORD *)(v13 + 24);
          v69 = *(_QWORD *)(v13 + 16);
          LOWORD(v70) = (*(_WORD *)(v13 + 2) >> 3) & 0x3F;
          if ( (((*(_WORD *)(v13 + 2) >> 3) & 0x3Fu) - 5 <= 1 || (((_BYTE)v70 + 39) & 0x3Fu) <= 1)
            && sub_9E9510(*(_QWORD *)(v13 + 16)) )
          {
            if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL), v8, v70, v71, v72)
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) == 47 )
            {
              v326[0].m128i_i32[0] = sub_AFA7A0(v69);
              v195 = j__strlen("ptrAddPtr");
              v196 = (__m128i *)sub_9F4990((__int64)&v319, "ptrAddPtr", v195);
              v326[0].m128i_i64[1] = v69;
              *v196 = _mm_load_si128(v326);
              v196[1] = _mm_load_si128(&v326[1]);
              v196[2].m128i_i64[0] = v326[2].m128i_i64[0];
              v326[0].m128i_i32[0] = sub_AFA7A0(v13);
              v197 = j__strlen("ptrAdd");
              v198 = (__m128i *)sub_9F4990((__int64)&v319, "ptrAdd", v197);
              v326[0].m128i_i64[1] = v13;
              *v198 = _mm_load_si128(v326);
              v198[1] = _mm_load_si128(&v326[1]);
              v198[2].m128i_i64[0] = v326[2].m128i_i64[0];
              goto LABEL_239;
            }
            LOWORD(v70) = (*(_WORD *)(v13 + 2) >> 3) & 0x3F;
          }
          if ( (_BYTE)v70 != 5
            || !sub_9E9510(v68)
            || !sub_9EC890(*(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL), v8, v159, v160, v161)
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 47 )
          {
LABEL_101:
            v15 = *(_WORD *)v13 & 0x1FF;
LABEL_65:
            if ( ((v15 + 423) & 0x1FFu) <= 4 )
            {
              v58 = sub_BFBC70(*(_QWORD *)(v13 + 32));
              if ( v58 && (*(_BYTE *)(v58 + 28) & 0x7Fu) - 34 <= 5 )
              {
                v59 = sub_BFBC70(*(_QWORD *)(v13 + 32));
                if ( !v59 || (*(_BYTE *)(v59 + 28) & 0x7Fu) - 34 > 5 )
                  BUG();
                if ( (*(_BYTE *)(v59 + 29) & 1) != 0 && sub_9EA400(v59) )
                {
LABEL_86:
                  v326[0].m128i_i32[0] = sub_AFA7A0(v13);
                  v60 = j__strlen("attr_expr");
                  v61 = (__m128i *)sub_9F4990((__int64)&v319, "attr_expr", v60);
                  v326[0].m128i_i64[1] = v13;
                  *v61 = _mm_load_si128(v326);
                  v61[1] = _mm_load_si128(&v326[1]);
                  v61[2].m128i_i64[0] = v326[2].m128i_i64[0];
                  v24 = sub_9EAAA0(v13, (__int64)a4);
                  if ( !(_BYTE)v24 )
                    goto LABEL_87;
                  v83 = *(char ***)(a1 + 8);
                  v85 = operator new(0x18u);
                  *(_DWORD *)(v85 + 8) = 4;
                  *(_QWORD *)v85 = off_2B40840;
                  v158 = j__strlen("attr_expr");
                  v103 = sub_9F04C0((__int64)&v319, (__int64)"attr_expr", v158);
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
              v63 = sub_B8C3D0(v62);
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
              v321 = nullptr;
              *(__m128i *)v322 = _mm_load_si128((const __m128i *)&xmmword_23A8D10);
              if ( (unsigned __int8)sub_9F4DD0((_DWORD *)v13, a3, (__int64)&v321) )
              {
                sub_9ED0C0(&v321);
                v15 = *(_WORD *)v13 & 0x1FF;
                goto LABEL_69;
              }
              v326[0].m128i_i32[0] = sub_AFA7A0(v13);
              v176 = j__strlen("cxx_construct_expr");
              v177 = (__m128i *)sub_9F4990((__int64)&v319, "cxx_construct_expr", v176);
              v326[0].m128i_i64[1] = v13;
              *v177 = _mm_load_si128(v326);
              v177[1] = _mm_load_si128(&v326[1]);
              v177[2].m128i_i64[0] = v326[2].m128i_i64[0];
              sub_9ED0C0(&v321);
              v24 = sub_9EAAA0(v13, (__int64)a4);
              if ( (_BYTE)v24 )
              {
                v83 = *(char ***)(a1 + 8);
                v85 = operator new(0x18u);
                *(_DWORD *)(v85 + 8) = 5;
                *(_QWORD *)v85 = off_2B40888;
                v178 = j__strlen("cxx_construct_expr");
                v103 = sub_9F0580((__int64)&v319, (__int64)"cxx_construct_expr", v178);
                goto LABEL_162;
              }
LABEL_96:
              v15 = *(_WORD *)v13 & 0x1FF;
              goto LABEL_69;
            }
            v52 = *(_QWORD *)(v13 + 24);
            if ( (*(_BYTE *)(v52 + 28) & 0x7Fu) - 49 > 2 || (*(_BYTE *)(v52 + 29) & 1) == 0 )
              goto LABEL_69;
            if ( !sub_9EA400(v52) )
            {
LABEL_87:
              v15 = *(_WORD *)v13 & 0x1FF;
              goto LABEL_88;
            }
            goto LABEL_86;
          }
          v326[0].m128i_i32[0] = sub_AFA7A0(v68);
          v162 = j__strlen("ptrAddPtr");
          v163 = (__m128i *)sub_9F4990((__int64)&v319, "ptrAddPtr", v162);
          v326[0].m128i_i64[1] = v68;
          *v163 = _mm_load_si128(v326);
          v163[1] = _mm_load_si128(&v326[1]);
          v163[2].m128i_i64[0] = v326[2].m128i_i64[0];
          v326[0].m128i_i32[0] = sub_AFA7A0(v13);
          v164 = j__strlen("ptrAdd");
          v165 = (__m128i *)sub_9F4990((__int64)&v319, "ptrAdd", v164);
          v326[0].m128i_i64[1] = v13;
          *v165 = _mm_load_si128(v326);
          v165[1] = _mm_load_si128(&v326[1]);
          v165[2].m128i_i64[0] = v326[2].m128i_i64[0];
LABEL_239:
          v24 = sub_9EAAA0(v13, (__int64)a4);
          if ( (_BYTE)v24 )
          {
            v83 = *(char ***)(a1 + 8);
            v166 = operator new(0x20u);
            *(_DWORD *)(v166 + 8) = 3;
            v85 = v166;
            *(_QWORD *)v166 = off_2B407B0;
            v167 = j__strlen("ptrAdd");
            v168 = sub_2244B30("ptrAdd", v167);
            v169 = sub_2244E60(&v319, "ptrAdd", v167, v168);
            if ( v169 == -1 )
              sub_9F02A0((__int64 **)v326, &v319[v320.m128_u32[0]], 1);
            else
              sub_9F02A0((__int64 **)v326, &v319[v169], 1);
            v170 = (__int64 *)v326[0].m128i_i64[0];
            sub_9F02A0((__int64 **)v326, &v319[v320.m128_u32[0]], 1);
            if ( (__int64 *)v326[0].m128i_i64[0] == v170 )
            {
              v174 = 0;
            }
            else
            {
              v171 = *v170;
              v172 = *(unsigned int *)(v171 + 8);
              v326[0].m128i_i32[0] = 306;
              v173 = sub_AFA190(v326, v172);
              v174 = 0;
              if ( v173 )
                v174 = *(_QWORD *)(v171 + 16);
            }
            *(_QWORD *)(v85 + 16) = v174;
            v175 = j__strlen("ptrAddPtr");
            *(_QWORD *)(v85 + 24) = sub_9F04C0((__int64)&v319, (__int64)"ptrAddPtr", v175);
LABEL_155:
            v326[0].m128i_i64[0] = v85;
            sub_9EA6C0(v83, v326[0].m128i_i64, si128, *(double *)a6.m128_u64);
            v94 = v326[0].m128i_i64[0];
            if ( !v326[0].m128i_i64[0] )
              goto LABEL_157;
            goto LABEL_156;
          }
          goto LABEL_101;
        }
        goto LABEL_63;
      }
LABEL_24:
      if ( v326[0].m128i_i64[0] )
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
  v322[0] = nullptr;
  s1b = (_WORD **)(v13 + 24);
  v74 = (_WORD **)(v13 + 16);
  v321 = (void *)(v13 + 16);
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
      v74 = (_WORD **)sub_EF2B30(&v321);
    v75 = *v74;
    v76 = **v74 & 0x1FF;
    if ( v76 == 92 )
    {
      if ( (unsigned __int8)sub_9ED810((__int64)v75) )
        break;
      v76 = *v75 & 0x1FF;
    }
    if ( v76 == 20 )
    {
      v77 = *((_WORD **)v75 + 3);
      if ( (*v77 & 0x1FF) == 0x5C )
      {
        if ( (unsigned __int8)sub_9ED810((__int64)v77) )
          break;
      }
    }
    v73 = v322[0];
    if ( ((__int64)v322[0] & 3) != 0 )
    {
      if ( ((unsigned __int64)v322[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_EF2960(&v321);
      else
        sub_EF2750(&v321, 1);
      v74 = (_WORD **)v321;
      v73 = v322[0];
      goto LABEL_105;
    }
    v74 = (_WORD **)((char *)v321 + 8);
    v321 = v74;
    if ( s1b == v74 )
      goto LABEL_116;
  }
  v326[0].m128i_i32[0] = sub_AFA7A0(v13);
  v184 = j__strlen("data_invocation_expr");
  v185 = (__m128i *)sub_9F4990((__int64)&v319, "data_invocation_expr", v184);
  v326[0].m128i_i64[1] = v13;
  *v185 = _mm_load_si128(v326);
  v185[1] = _mm_load_si128(&v326[1]);
  v185[2].m128i_i64[0] = v326[2].m128i_i64[0];
  v24 = sub_9EAAA0(v13, (__int64)a4);
  if ( (_BYTE)v24 )
  {
    v186 = *(char ***)(a1 + 8);
    v187 = operator new(0x18u);
    *(_DWORD *)(v187 + 8) = 6;
    v188 = v187;
    *(_QWORD *)v187 = off_2B408D0;
    v189 = j__strlen("data_invocation_expr");
    sub_2244B30("data_invocation_expr", v189);
    v190 = sub_9F02E0((__int64)&v319);
    sub_9F02A0((__int64 **)v326, &v319[v320.m128_u32[0]], 1);
    if ( (__int64 *)v326[0].m128i_i64[0] == v190 )
    {
      v194 = 0;
    }
    else
    {
      v191 = *v190;
      v192 = *(unsigned int *)(v191 + 8);
      v326[0].m128i_i32[0] = 266;
      v193 = sub_AFA190(v326, v192);
      v194 = 0;
      if ( v193 )
        v194 = *(_QWORD *)(v191 + 16);
    }
    *(_QWORD *)(v188 + 16) = v194;
    v326[0].m128i_i64[0] = v188;
    sub_9EA6C0(v186, v326[0].m128i_i64, si128, *(double *)a6.m128_u64);
    v94 = v326[0].m128i_i64[0];
    if ( !v326[0].m128i_i64[0] )
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
  v326[0].m128i_i32[0] = sub_EEB7E0(v13);
  if ( s1a != sub_9E9640 && ((unsigned __int8 (__fastcall *)(_QWORD *, __m128i *))s1a)(a4, v326) )
    goto LABEL_73;
  if ( ((*(_WORD *)v13 + 423) & 0x1FFu) > 4 )
    goto LABEL_73;
  v104 = sub_BFBC70(*(_QWORD *)(v13 + 32));
  if ( !v104 )
    goto LABEL_73;
  if ( (*(_BYTE *)(v104 + 28) & 0x7Fu) - 34 > 5 )
    goto LABEL_73;
  v105 = sub_BFBC70(*(_QWORD *)(v13 + 32));
  s1c = (_QWORD *)v105;
  if ( !v105 || (*(_BYTE *)(v105 + 28) & 0x7Fu) - 34 > 5 )
    goto LABEL_73;
  if ( *(_DWORD *)(v13 + 16) == 1
    && (*(_WORD *)sub_BFBAE0(*(_QWORD *)(v13 + 8 * (((*(_BYTE *)(v13 + 2) & 8) != 0) + 1LL) + 32)) & 0x1FF) == 9 )
  {
    goto LABEL_176;
  }
  if ( !(_BYTE)byte_2CD7300 && __cxa_guard_acquire(&byte_2CD7300) )
  {
    __cxa_atexit((void (*)(void *))sub_9EDA10, &qword_2CD7308, &off_2B25620);
    __cxa_guard_release(&byte_2CD7300);
  }
  if ( !qword_2CD7308 )
  {
    LODWORD(v322[0]) = 0;
    v323 = v322;
    qmemcpy(v326, &off_2C82100, sizeof(v326));
    v324 = v322;
    v322[1] = nullptr;
    v325 = 0;
    v315 = v11;
    v316 = a4;
    v209 = v326;
    do
    {
      v210 = sub_9F5F30(&v321, v322, (const void **)v209);
      v212 = v211;
      if ( v211 )
      {
        if ( v210 || (void **)v211 == v322 )
        {
          v213 = 1;
        }
        else
        {
          v224 = *(const void **)(v211 + 32);
          v225 = *(_QWORD *)(v211 + 40);
          v226 = (char *)v209->m128i_i64[0];
          v318 = v209->m128i_i64[1];
          v317 = v226;
          v213 = (unsigned int)sub_9C4B00((__int64)&v317, v224, v225) >> 31;
        }
        v214 = operator new(0x30u);
        v215 = v209->m128i_i64[1];
        *(_QWORD *)(v214 + 32) = v209->m128i_i64[0];
        *(_QWORD *)(v214 + 40) = v215;
        std::_Rb_tree_insert_and_rebalance(v213, v214, v212, v322);
        ++v325;
      }
      ++v209;
    }
    while ( v209 != (__m128i *)&v327 );
    LOBYTE(v11) = v315;
    a4 = v316;
    v216 = operator new(0x30u);
    v217 = v322[1];
    if ( v322[1] )
    {
      v218 = (int)v322[0];
      *(void **)(v216 + 16) = v322[1];
      *(_DWORD *)(v216 + 8) = v218;
      *(_QWORD *)(v216 + 24) = v323;
      *(_QWORD *)(v216 + 32) = v324;
      v217[1] = v216 + 8;
      v322[1] = nullptr;
      *(_QWORD *)(v216 + 40) = v325;
      v325 = 0;
      v323 = v322;
      v324 = v322;
    }
    else
    {
      *(_DWORD *)(v216 + 8) = 0;
      *(_QWORD *)(v216 + 16) = 0;
      *(_QWORD *)(v216 + 24) = v216 + 8;
      *(_QWORD *)(v216 + 32) = v216 + 8;
      *(_QWORD *)(v216 + 40) = 0;
    }
    v219 = qword_2CD7308;
    qword_2CD7308 = (void *)v216;
    if ( v219 )
    {
      if ( v219[2] )
      {
        v304 = (void *)v13;
        v11 = (__int64)v219;
        v220 = v219[2];
        do
        {
          sub_9ED9D0(v11, *(_QWORD **)(v220 + 24));
          v221 = *(_QWORD *)(v220 + 16);
          operator delete((void *)v220);
          v220 = v221;
        }
        while ( v221 );
        v219 = (_QWORD *)v11;
        v13 = (__int64)v304;
        LOBYTE(v11) = v315;
        a4 = v316;
      }
      operator delete(v219, 0x30u);
    }
    if ( v322[1] )
    {
      v305 = (void *)v13;
      v312 = v11;
      v222 = (_QWORD **)v322[1];
      do
      {
        sub_9ED9D0((__int64)&v321, v222[3]);
        v223 = (_QWORD **)v222[2];
        operator delete(v222);
        v222 = v223;
      }
      while ( v223 );
      v13 = (__int64)v305;
      LOBYTE(v11) = v312;
    }
  }
  v106 = s1c[5];
  if ( (v106 & 7) != 0 )
    goto LABEL_73;
  ne = v106 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v106 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_177;
  v179 = sub_B75A50(s1c, 0);
  v180 = sub_9ECC30((__int64)v326, (char *)(*(_QWORD *)(ne + 16) + 16LL), **(unsigned int **)(ne + 16), v179 != 0);
  v318 = v181;
  v317 = v180;
  nm = (char *)qword_2CD7308;
  if ( (char *)sub_9EDA70((__int64)qword_2CD7308, (__int64)&v317) != nm + 8 )
    goto LABEL_265;
  if ( v317 )
  {
    v326[0].m128i_i64[0] = (__int64)v326[1].m128i_i64;
    sub_9EB4F0(v326, v317, (__int64)&v317[v318]);
    v203 = (__m128i *)v326[0].m128i_i64[0];
  }
  else
  {
    v203 = &v326[1];
    v326[1].m128i_i8[0] = 0;
    v326[0].m128i_i64[0] = (__int64)v326[1].m128i_i64;
    v326[0].m128i_i64[1] = 0;
  }
  v311 = v203;
  v204 = j__strlen("wcs");
  v205 = sub_9983C0(v326[0].m128i_i64, "wcs", 0, v204);
  if ( v205 != -1 )
  {
    nf = v13;
    v206 = (__int64)v311;
    v207 = v205;
    while ( 1 )
    {
      *(_BYTE *)(v206 + v207) = 115;
      *(_BYTE *)(v326[0].m128i_i64[0] + v207 + 1) = 116;
      *(_BYTE *)(v326[0].m128i_i64[0] + v207 + 2) = 114;
      v208 = j__strlen("wcs");
      v207 = sub_9983C0(v326[0].m128i_i64, "wcs", v207 + 3, v208);
      if ( v207 == -1 )
        break;
      v206 = v326[0].m128i_i64[0];
    }
    v13 = nf;
  }
  v321 = (void *)v326[0].m128i_i64[0];
  nn = (char *)qword_2CD7308;
  v322[0] = (void *)v326[0].m128i_i64[1];
  if ( (char *)sub_9EDA70((__int64)qword_2CD7308, (__int64)&v321) != nn + 8 )
  {
    if ( (__m128i *)v326[0].m128i_i64[0] != &v326[1] )
      operator delete((void *)v326[0].m128i_i64[0]);
    goto LABEL_265;
  }
  v229 = j__strlen("scanf");
  v230 = sub_9EC680(&v317, "scanf", v229);
  v231 = v230;
  if ( (__m128i *)v326[0].m128i_i64[0] != &v326[1] )
  {
    no = v230;
    operator delete((void *)v326[0].m128i_i64[0]);
    v231 = no;
  }
  if ( v231 )
  {
LABEL_265:
    v326[0].m128i_i32[0] = sub_AFA7A0(v13);
    v182 = j__strlen("UnsafeLibcFunctionCall");
    v183 = (__m128i *)sub_9F4990((__int64)&v319, "UnsafeLibcFunctionCall", v182);
    v326[0].m128i_i64[1] = v13;
    *v183 = _mm_load_si128(v326);
    v183[1] = _mm_load_si128(&v326[1]);
    v183[2].m128i_i64[0] = v326[2].m128i_i64[0];
    goto LABEL_226;
  }
  v106 = s1c[5];
  if ( (v106 & 7) != 0 )
    goto LABEL_73;
  ng = v106 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v106 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_177;
  v232 = sub_B75A50(s1c, 0);
  v306 = sub_9ECC30((__int64)v326, (char *)(*(_QWORD *)(ng + 16) + 16LL), **(unsigned int **)(ng + 16), v232 != 0);
  nh = v233;
  v234 = j__strlen("printf");
  if ( v234 <= nh && (!v234 || !memcmp(&v306[nh - v234], "printf", v234)) )
  {
    v235 = j__strlen("v");
    if ( v235 <= nh && (!v235 || !memcmp(v306, "v", v235)) )
    {
      v326[0].m128i_i32[0] = sub_AFA7A0(v13);
      v254 = j__strlen("UnsafeLibcFunctionCall");
      v255 = (__m128i *)sub_9F4990((__int64)&v319, "UnsafeLibcFunctionCall", v254);
      v326[0].m128i_i64[1] = v13;
      *v255 = _mm_load_si128(v326);
      v255[1] = _mm_load_si128(&v326[1]);
      v255[2].m128i_i64[0] = v326[2].m128i_i64[0];
      v326[0].m128i_i32[0] = sub_AFA1E0(s1c);
      v256 = j__strlen("UnsafeLibcFunctionCall_va_list");
      v257 = (__m128i *)sub_9F4990((__int64)&v319, "UnsafeLibcFunctionCall_va_list", v256);
      v326[0].m128i_i64[1] = (__int64)s1c;
      *v257 = _mm_load_si128(v326);
      v257[1] = _mm_load_si128(&v326[1]);
      v257[2].m128i_i64[0] = v326[2].m128i_i64[0];
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
    v107 = sub_B75A50(s1c, 0);
    s1d = sub_9ECC30((__int64)v326, (char *)(*(_QWORD *)(n + 16) + 16LL), **(unsigned int **)(n + 16), v107 != 0);
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
    v326[0].m128i_i64[1] = v111;
    nb = v111;
    v326[0].m128i_i64[0] = (__int64)s1d;
    v112 = j__strlen("w");
    v113 = "w";
    if ( sub_9EC680(v326, "w", v112) )
    {
      v114 = nb - 1;
      if ( !nb )
        v114 = 0;
      v326[0].m128i_i64[1] = v114;
    }
    nc = v326[0].m128i_i64[1];
    if ( v326[0].m128i_i64[1] )
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
    v115 = sub_BFBC70(*(_QWORD *)(v13 + 32));
    v116 = (_QWORD **)v115;
    if ( v115 && (*(_BYTE *)(v115 + 28) & 0x7Fu) - 34 >= 6 )
      v116 = nullptr;
    s1e = v116;
    *(double *)si128.m128_u64 = sub_B76070(v116);
    if ( v119 > 2 )
    {
      v120 = *(_QWORD *)(*(_QWORD *)(*s1e[15] + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
      v121 = *(_QWORD *)(*(_QWORD *)(v120 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v121 + 16) == 42 )
      {
        if ( *(_BYTE *)(v120 + 16) != 42 )
          v120 = sub_F63050(v120, v113, v121, v117, v118);
        v122 = *(_QWORD *)(v120 + 32);
        if ( (v122 & 1) == 0 )
        {
          v123 = v122 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (*(_BYTE *)(v123 + 8) & 1) == 0 )
          {
            v124 = 8 * (((*(_BYTE *)(v13 + 2) & 8) != 0) + 1LL);
            v113 = *(char **)(v13 + v124 + 40);
            s1f = *(_QWORD **)(v13 + v124 + 32);
            if ( (unsigned __int8)sub_F57FF0(*(_QWORD *)v123, *(double *)si128.m128_u64) )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(s1f[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 42
                && (unsigned __int8)sub_F65360(*(_QWORD *)(*((_QWORD *)v113 + 1) & 0xFFFFFFFFFFFFFFF0LL))
                && !(unsigned __int8)sub_9ED270((__int64)s1f, v113, a3) )
              {
                v326[0].m128i_i32[0] = sub_AFA7A0(v13);
                v270 = j__strlen("UnsafeLibcFunctionCall");
                v271 = sub_9F4990((__int64)&v319, "UnsafeLibcFunctionCall", v270);
                v326[0].m128i_i64[1] = v13;
                v272 = 10;
                v273 = v326;
                v274 = (_DWORD *)v271;
                while ( v272 )
                {
                  *v274 = v273->m128i_i32[0];
                  v273 = (__m128i *)((char *)v273 + 4);
                  ++v274;
                  --v272;
                }
                v326[0].m128i_i32[0] = sub_AFA7A0(v13);
                v275 = j__strlen("UnsafeLibcFunctionCall_sized_by");
                v250 = sub_9F4990((__int64)&v319, "UnsafeLibcFunctionCall_sized_by", v275);
                v326[0].m128i_i64[1] = v13;
                goto LABEL_366;
              }
            }
          }
        }
      }
    }
    s1g = (void *)j__strlen("UnsafeLibcFunctionCall_string");
    v125 = sub_BFBC70(*(_QWORD *)(v13 + 32));
    v126 = (_QWORD **)v125;
    if ( v125 && (*(_BYTE *)(v125 + 28) & 0x7Fu) - 34 >= 6 )
      v126 = nullptr;
    v303 = v126;
    *(double *)si128.m128_u64 = sub_B76070(v126);
    v128 = (__int64)v303;
    nd = v129;
    if ( !v129 )
      goto LABEL_73;
    v130 = *(_QWORD *)(*(_QWORD *)(*v303[15] + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
    v131 = *(_QWORD *)(*(_QWORD *)(v130 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v131 + 16) != 42 )
      goto LABEL_73;
    if ( *(_BYTE *)(v130 + 16) != 42 )
    {
      v130 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*v303[15] + 48LL) & 0xFFFFFFFFFFFFFFF0LL), v113, v303, v131, v127);
      v128 = (__int64)v303;
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
      v313 = v132;
      v309 = (void *)v128;
      v267 = sub_A7AA70(a3, v133, v128);
      v128 = (__int64)v309;
      v132 = v313;
      if ( (v267 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_212;
      v133 = *(_QWORD *)(a3 + 1648);
      v268 = 0;
      if ( !v133 )
        goto LABEL_404;
    }
    v269 = *(_QWORD *)(v133 + 48);
    if ( v269 )
    {
      v268 = v269 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v314 = v132;
      v310 = (void *)v128;
      v268 = sub_A7AA70(a3, v133, v128);
      v132 = v314;
      v128 = (__int64)v310;
    }
LABEL_404:
    v133 = *(_QWORD *)&byte_8[v132 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
         | ((unsigned __int8)v132 | (unsigned __int8)*(_QWORD *)&byte_8[v132 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    if ( (*(_QWORD *)&byte_8[v268 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v268 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v268) & 7) == v133 )
    {
      if ( !(unsigned __int8)sub_A01380(v13, &v321, 1u, a3, 0) )
        goto LABEL_73;
      goto LABEL_378;
    }
LABEL_212:
    if ( (v132 & 1) != 0 || (v135 = v132 & 0xFFFFFFFFFFFFFFF0LL, (*(_BYTE *)(v135 + 8) & 1) != 0) )
    {
      v258 = *(_QWORD *)(v128 + 40);
      if ( (v258 & 7) == 0
        && (nk = v258 & 0xFFFFFFFFFFFFFFF8LL, (v258 & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && (v259 = j__strlen("kprintf"), v260 = *(_DWORD **)(nk + 16), v259 == *v260) )
      {
        if ( v259 )
          LOBYTE(v11) = memcmp(v260 + 4, "kprintf", v259) == 0;
      }
      else
      {
        LOBYTE(v11) = 0;
      }
      if ( !(unsigned __int8)sub_A01380(v13, &v321, 0, a3, v11) )
        goto LABEL_73;
    }
    else
    {
      if ( nd <= 2
        || !sub_9EC890(
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
            && !(unsigned __int8)sub_A01150(*v138) )
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
        v326[0].m128i_i32[0] = sub_AFA7A0(v144);
        v145 = v326;
        v146 = (_DWORD *)sub_9F4990((__int64)&v319, "UnsafeLibcFunctionCall_string", (size_t)s1g);
        v326[0].m128i_i64[1] = nl;
        for ( i = 10; i; --i )
        {
          *v146 = v145->m128i_i32[0];
          v145 = (__m128i *)((char *)v145 + 4);
          ++v146;
        }
LABEL_223:
        v326[0].m128i_i32[0] = sub_AFA7A0(v13);
        v148 = j__strlen("UnsafeLibcFunctionCall");
        v149 = sub_9F4990((__int64)&v319, "UnsafeLibcFunctionCall", v148);
        v326[0].m128i_i64[1] = v13;
        v150 = 10;
        v151 = v326;
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
      if ( !(unsigned __int8)sub_A01380(v13, &v321, 2u, a3, 0) )
        goto LABEL_73;
    }
LABEL_378:
    v261 = v321;
    v326[0].m128i_i32[0] = sub_AFA7A0(v321);
    v262 = sub_9F4990((__int64)&v319, "UnsafeLibcFunctionCall_string", (size_t)s1g);
    v326[0].m128i_i64[1] = (__int64)v261;
    v263 = 10;
    v264 = v326;
    v265 = (_DWORD *)v262;
    while ( v263 )
    {
      *v265 = v264->m128i_i32[0];
      v264 = (__m128i *)((char *)v264 + 4);
      ++v265;
      --v263;
    }
    goto LABEL_223;
  }
  v236 = sub_B75A50(s1c, 0);
  nj = sub_9ECC30((__int64)v326, (char *)(*(_QWORD *)(ni + 16) + 16LL), **(unsigned int **)(ni + 16), v236 != 0);
  v307 = v237;
  v238 = j__strlen("printf");
  if ( v238 > (unsigned __int64)v307 || v238 && memcmp(&v307[(_QWORD)nj - v238], "printf", v238) )
    goto LABEL_176;
  v239 = j__strlen("v");
  if ( v239 <= (unsigned __int64)v307 && (!v239 || !memcmp(nj, "v", v239)) )
    goto LABEL_176;
  v240 = (__int64)v307;
  if ( (unsigned __int64)v307 >= 6 )
    v240 = (__int64)(v307 - 6);
  v326[0].m128i_i64[1] = v240;
  v326[0].m128i_i64[0] = (__int64)nj;
  v308 = (void *)v240;
  v241 = j__strlen("w");
  if ( sub_9EC680(v326, "w", v241) )
  {
    v242 = (__int64)v308 - 1;
    if ( !v308 )
      v242 = 0;
    v326[0].m128i_i64[1] = v242;
  }
  v243 = j__strlen("s");
  if ( v243 != v326[0].m128i_i64[1] || v243 && memcmp(nj, "s", v243) )
  {
LABEL_176:
    v106 = s1c[5];
    if ( (v106 & 7) != 0 )
      goto LABEL_73;
    goto LABEL_177;
  }
  v326[0].m128i_i32[0] = sub_AFA7A0(v13);
  v244 = j__strlen("UnsafeLibcFunctionCall");
  v245 = sub_9F4990((__int64)&v319, "UnsafeLibcFunctionCall", v244);
  v326[0].m128i_i64[1] = v13;
  v246 = 10;
  v247 = v326;
  v248 = (_DWORD *)v245;
  while ( v246 )
  {
    *v248 = v247->m128i_i32[0];
    v247 = (__m128i *)((char *)v247 + 4);
    ++v248;
    --v246;
  }
  v326[0].m128i_i32[0] = sub_AFA1E0(s1c);
  v249 = j__strlen("UnsafeLibcFunctionCall_sprintf");
  v250 = sub_9F4990((__int64)&v319, "UnsafeLibcFunctionCall_sprintf", v249);
  v326[0].m128i_i64[1] = (__int64)s1c;
LABEL_366:
  v251 = 10;
  v252 = (_DWORD *)v250;
  v253 = v326;
  while ( v251 )
  {
    *v252 = v253->m128i_i32[0];
    v253 = (__m128i *)((char *)v253 + 4);
    ++v252;
    --v251;
  }
LABEL_226:
  LODWORD(v11) = sub_9EAAA0(v13, (__int64)a4);
  if ( (_BYTE)v11 )
  {
    v55 = *(char ***)(a1 + 8);
    v56 = operator new(0x28u);
    *(_DWORD *)(v56 + 8) = 7;
    *(_QWORD *)v56 = off_2B40918;
    v153 = j__strlen("UnsafeLibcFunctionCall");
    v154 = sub_9F0700((__int64)&v319, (__int64)"UnsafeLibcFunctionCall", v153);
    *(_QWORD *)(v56 + 24) = 0;
    *(_QWORD *)(v56 + 16) = v154;
    *(_DWORD *)(v56 + 32) = 0;
    v155 = j__strlen("UnsafeLibcFunctionCall_sprintf");
    if ( sub_9F0400((__int64)&v319, (__int64)"UnsafeLibcFunctionCall_sprintf", v155) )
    {
      *(_DWORD *)(v56 + 32) = 1;
    }
    else
    {
      v201 = j__strlen("UnsafeLibcFunctionCall_string");
      v202 = sub_9F04C0((__int64)&v319, (__int64)"UnsafeLibcFunctionCall_string", v201);
      if ( v202 )
      {
        *(_DWORD *)(v56 + 32) = 3;
        *(_QWORD *)(v56 + 24) = v202;
      }
      else
      {
        v227 = j__strlen("UnsafeLibcFunctionCall_sized_by");
        if ( sub_9F0700((__int64)&v319, (__int64)"UnsafeLibcFunctionCall_sized_by", v227) )
        {
          v228 = *(_QWORD *)(v56 + 16);
          *(_DWORD *)(v56 + 32) = 2;
          *(_QWORD *)(v56 + 24) = *(_QWORD *)(v228 + 8 * (((*(_BYTE *)(v228 + 2) & 8) != 0) + 1LL) + 32);
        }
        else
        {
          v266 = j__strlen("UnsafeLibcFunctionCall_va_list");
          if ( sub_9F0400((__int64)&v319, (__int64)"UnsafeLibcFunctionCall_va_list", v266) )
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
  v326[0].m128i_i32[0] = sub_EEB7E0(v13);
  if ( v54 != sub_9E9640 && ((unsigned __int8 (__fastcall *)(_QWORD *, __m128i *))v54)(a4, v326)
    || !(unsigned __int8)sub_9F4DD0((_DWORD *)v13, a3, (__int64)&v319)
    || (LODWORD(v11) = sub_9EAAA0(v13, (__int64)a4), !(_BYTE)v11) )
  {
    LODWORD(v11) = 0;
    goto LABEL_28;
  }
  v55 = *(char ***)(a1 + 8);
  v56 = operator new(0x18u);
  *(_DWORD *)(v56 + 8) = 8;
  *(_QWORD *)v56 = off_2B407F8;
  v57 = j__strlen("spanTwoParamConstructor");
  *(_QWORD *)(v56 + 16) = sub_9F0580((__int64)&v319, (__int64)"spanTwoParamConstructor", v57);
LABEL_78:
  v326[0].m128i_i64[0] = v56;
  sub_9EA6C0(v55, v326[0].m128i_i64, si128, *(double *)a6.m128_u64);
  if ( v326[0].m128i_i64[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v326[0].m128i_i64[0] + 32LL))(v326[0].m128i_i64[0]);
LABEL_28:
  sub_9ED0C0((void **)&v319);
  return (unsigned int)v11;
}
