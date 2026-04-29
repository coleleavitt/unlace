__int64 __fastcall sub_1F4540(__m128i *a1, double a2, __m128 a3, double a4, double a5)
{
  _QWORD *exception; // rdi
  __int32 v6; // eax
  __m128i *v7; // r8
  int v8; // edx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128i *v11; // rbx
  __int64 v12; // rax
  __int64 (__fastcall **v13)(); // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 (__fastcall **v17)(); // rax
  __int64 *v18; // r8
  __int64 v19; // r12
  unsigned __int64 v20; // rbp
  __int64 *v21; // r12
  __m128i *v22; // r8
  __m128i *v23; // r8
  __int32 v24; // eax
  __int64 v25; // r12
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rsi
  __int8 *v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rdi
  int v34; // r14d
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  _QWORD *v38; // rbx
  _QWORD *v39; // rsi
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // r8
  unsigned int v43; // r14d
  unsigned __int64 **v44; // r14
  unsigned __int64 *v45; // rax
  unsigned __int64 v46; // r15
  __int64 v47; // r14
  __int64 v48; // r13
  void *v49; // rdi
  int v50; // eax
  unsigned __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rcx
  __int64 *v56; // rdi
  __int64 *v57; // rdi
  int v58; // ecx
  int v59; // r9d
  _QWORD *v60; // rbp
  __m128i *v61; // r8
  _QWORD *v62; // rbx
  __int32 v63; // ecx
  int v65; // r11d
  __int64 v66; // r13
  int v67; // eax
  __m128i *v68; // r14
  unsigned __int64 *v69; // r15
  unsigned __int64 *v70; // rsi
  unsigned __int64 *v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // r14
  __int64 v74; // r13
  _QWORD *v75; // r15
  __int64 v76; // rdi
  __int64 v77; // r12
  _QWORD *v78; // r13
  __int64 v79; // rdi
  __int64 v80; // rbp
  __int64 j; // r14
  _QWORD *v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // rdi
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rsi
  char v88; // cl
  unsigned __int64 v89; // rdx
  _BYTE *v90; // rdx
  char v91; // dl
  unsigned __int64 *v92; // rax
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  _QWORD *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rsi
  unsigned __int64 v101; // rbp
  __m128i *v102; // r13
  __int64 v103; // rax
  __int64 v104; // rdi
  unsigned __int64 v105; // r15
  unsigned __int64 v106; // r14
  __m128i *v107; // r8
  __int64 v108; // rax
  unsigned __int64 *v109; // rax
  unsigned __int64 v110; // r14
  __int64 v111; // rdi
  _QWORD *v112; // r12
  __int64 v113; // rdi
  __int64 v114; // r13
  _QWORD *v115; // rbp
  __int64 v116; // rdi
  __int64 v117; // r15
  __int64 i; // r14
  _QWORD *v119; // rbx
  __int64 v120; // rdi
  __int64 v121; // rdi
  __int64 v122; // rdi
  __int64 v123; // rax
  unsigned int v124; // eax
  _QWORD *v125; // rax
  _QWORD *v126; // r13
  _QWORD *v127; // r12
  char *v128; // rbx
  char v129; // al
  __int64 v130; // rdx
  int v131; // ebp
  __int64 v132; // rax
  _QWORD *v133; // rdx
  _QWORD *k; // rax
  unsigned __int64 v135; // rax
  __int32 v136; // edx
  __int64 *v137; // r15
  __int64 v138; // rdx
  __int64 *v139; // rdi
  __int64 *v140; // rdi
  __int64 v141; // rdi
  _QWORD *v142; // rax
  __int64 v143; // rdx
  unsigned __int64 v144; // rcx
  __int64 v145; // rdi
  bool v146; // al
  __int64 v147; // rdx
  unsigned __int64 v148; // rax
  _QWORD *v149; // rcx
  __int64 v150; // rsi
  unsigned __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rbp
  unsigned __int64 v154; // rax
  __int64 v155; // rbp
  __int64 v156; // rdi
  __m128i *v157; // r8
  unsigned __int64 *v158; // rax
  __int64 v159; // rax
  _QWORD *v160; // rbx
  __int64 v161; // rax
  _QWORD *v162; // rbp
  int v163; // ecx
  unsigned __int64 v164; // rsi
  int v165; // edx
  __int64 v166; // rax
  __int64 v167; // r8
  unsigned __int64 v168; // rdx
  unsigned __int64 v169; // rdi
  __int64 v170; // rsi
  __int64 *v171; // [rsp+8h] [rbp-240h]
  __int64 *v172; // [rsp+8h] [rbp-240h]
  __m128i *v173; // [rsp+8h] [rbp-240h]
  __m128i *v174; // [rsp+8h] [rbp-240h]
  __int64 v175; // [rsp+8h] [rbp-240h]
  __int64 v176; // [rsp+8h] [rbp-240h]
  __int64 v177; // [rsp+8h] [rbp-240h]
  __int64 v178; // [rsp+8h] [rbp-240h]
  __int64 v179; // [rsp+8h] [rbp-240h]
  __m128i *v180; // [rsp+8h] [rbp-240h]
  _QWORD *v181; // [rsp+8h] [rbp-240h]
  __int64 v182; // [rsp+8h] [rbp-240h]
  __int64 v183; // [rsp+8h] [rbp-240h]
  __int64 v184; // [rsp+8h] [rbp-240h]
  __int64 v185; // [rsp+8h] [rbp-240h]
  __m128i *v186; // [rsp+8h] [rbp-240h]
  __m128i *v187; // [rsp+8h] [rbp-240h]
  __int64 v188; // [rsp+8h] [rbp-240h]
  __int64 v189; // [rsp+8h] [rbp-240h]
  __int64 v190; // [rsp+8h] [rbp-240h]
  __int64 v191; // [rsp+8h] [rbp-240h]
  __int64 v192; // [rsp+8h] [rbp-240h]
  __int64 v193; // [rsp+8h] [rbp-240h]
  __int64 v194; // [rsp+8h] [rbp-240h]
  __int64 *v195; // [rsp+8h] [rbp-240h]
  __m128i *v196; // [rsp+8h] [rbp-240h]
  __m128i *v197; // [rsp+8h] [rbp-240h]
  __m128i *v198; // [rsp+8h] [rbp-240h]
  __int64 v199; // [rsp+8h] [rbp-240h]
  __int64 v200; // [rsp+8h] [rbp-240h]
  __int64 v201; // [rsp+8h] [rbp-240h]
  __int64 v202; // [rsp+8h] [rbp-240h]
  __m128i *v203; // [rsp+8h] [rbp-240h]
  __int64 v204; // [rsp+8h] [rbp-240h]
  __int64 v205; // [rsp+8h] [rbp-240h]
  __int64 v206; // [rsp+8h] [rbp-240h]
  __int64 v207; // [rsp+8h] [rbp-240h]
  __m128i *v208; // [rsp+8h] [rbp-240h]
  __m128i *v209; // [rsp+8h] [rbp-240h]
  __m128i *v210; // [rsp+8h] [rbp-240h]
  __int64 v211; // [rsp+8h] [rbp-240h]
  unsigned __int64 v212; // [rsp+18h] [rbp-230h]
  __int64 v213; // [rsp+18h] [rbp-230h]
  __m128i *v214; // [rsp+18h] [rbp-230h]
  __int64 v215; // [rsp+20h] [rbp-228h]
  unsigned __int64 *v216; // [rsp+20h] [rbp-228h]
  __int64 v217; // [rsp+20h] [rbp-228h]
  __int64 v218; // [rsp+20h] [rbp-228h]
  __int64 v219; // [rsp+20h] [rbp-228h]
  __int64 v220; // [rsp+28h] [rbp-220h]
  __int64 v221; // [rsp+28h] [rbp-220h]
  __int64 *m128i_i64; // [rsp+30h] [rbp-218h]
  int v223; // [rsp+38h] [rbp-210h]
  __int64 v224; // [rsp+38h] [rbp-210h]
  _QWORD *v225; // [rsp+40h] [rbp-208h]
  __int64 v226; // [rsp+40h] [rbp-208h]
  __int64 v227; // [rsp+48h] [rbp-200h]
  _QWORD *v228; // [rsp+48h] [rbp-200h]
  unsigned int v229; // [rsp+50h] [rbp-1F8h]
  __int64 v230; // [rsp+50h] [rbp-1F8h]
  char v231; // [rsp+67h] [rbp-1E1h] BYREF
  const __m128i *v232; // [rsp+68h] [rbp-1E0h] BYREF
  _QWORD *v233; // [rsp+70h] [rbp-1D8h] BYREF
  __int128 v234; // [rsp+78h] [rbp-1D0h]
  __int64 v235; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v236; // [rsp+98h] [rbp-1B0h]
  _QWORD v237[5]; // [rsp+B0h] [rbp-198h] BYREF
  char v238; // [rsp+D8h] [rbp-170h]
  __int64 v239; // [rsp+E0h] [rbp-168h]
  __int64 (__fastcall **v240)(); // [rsp+F0h] [rbp-158h] BYREF
  __int64 v241; // [rsp+F8h] [rbp-150h]
  __int64 v242; // [rsp+100h] [rbp-148h]
  _QWORD *v243; // [rsp+108h] [rbp-140h]
  __int64 v244; // [rsp+110h] [rbp-138h]
  char v245; // [rsp+118h] [rbp-130h]
  __int64 *v246; // [rsp+120h] [rbp-128h]
  unsigned __int64 *v247; // [rsp+128h] [rbp-120h] BYREF
  __int64 v248; // [rsp+130h] [rbp-118h]
  __int64 v249; // [rsp+138h] [rbp-110h]
  __int128 v250; // [rsp+140h] [rbp-108h]
  __int64 *v251; // [rsp+150h] [rbp-F8h]
  int v252; // [rsp+158h] [rbp-F0h]
  __int16 v253; // [rsp+15Ch] [rbp-ECh]
  __int64 (__fastcall **v254)(); // [rsp+160h] [rbp-E8h] BYREF
  __int64 v255; // [rsp+168h] [rbp-E0h]
  __int64 v256; // [rsp+170h] [rbp-D8h] BYREF
  __int128 v257; // [rsp+178h] [rbp-D0h]
  __int64 v258; // [rsp+188h] [rbp-C0h]
  char v259; // [rsp+190h] [rbp-B8h]
  __int64 v260; // [rsp+198h] [rbp-B0h]
  __int64 *v261; // [rsp+1A0h] [rbp-A8h]
  _QWORD *v262; // [rsp+1A8h] [rbp-A0h]
  __int64 v263; // [rsp+1B0h] [rbp-98h]
  __int64 v264; // [rsp+1B8h] [rbp-90h]
  __int128 v265; // [rsp+1C0h] [rbp-88h]
  _QWORD *v266; // [rsp+1D0h] [rbp-78h]
  __m128i v267; // [rsp+1E0h] [rbp-68h] BYREF
  __m128i v268; // [rsp+1F0h] [rbp-58h] BYREF
  unsigned __int64 v269; // [rsp+208h] [rbp-40h]

  v6 = a1->m128i_i32[0];
  v269 = __readfsqword(0x28u);
  v7 = a1;
  if ( (v6 & 0x40000) != 0 )
  {
    v8 = *(_DWORD *)(a1[49].m128i_i64[0] + 48);
    if ( (v8 & 1) != 0 )
    {
      if ( !under_debugger )
        sub_37E160(50346);
      goto LABEL_304;
    }
    if ( (v8 & 2) != 0 )
    {
      if ( !under_debugger )
        sub_37E160(50347);
      goto LABEL_304;
    }
  }
  else
  {
    sub_21AAA0(a1[59].m128i_i64[0]);
    sub_1EC610(a1);
    v7 = a1;
    v6 = a1->m128i_i32[0];
  }
  v9 = v7[27].m128i_i64[1];
  v10 = _mm_loadu_si128(v7 + 47);
  v11 = v7 + 53;
  v7->m128i_i32[0] = v6 | 0x210000;
  v12 = v7[46].m128i_i64[0];
  v7[49].m128i_i32[2] = v9;
  v267 = v10;
  v171 = (__int64 *)v7;
  v268 = _mm_loadu_si128(v7 + 48);
  v212 = v12;
  sub_311F30(&v7[53], &v7[14].m128i_u64[1]);
  v13 = (__int64 (__fastcall **)())sub_189070(v171, 0);
  v255 = v14;
  v254 = v13;
  sub_311E30(v11, &v254);
  v15 = v171[21];
  v16 = v171[16] - v15;
  v17 = (__int64 (__fastcall **)())(*(_QWORD *)(*(_QWORD *)(v171[187] + 24) + 16LL) & (v171[180] + v15));
  v255 = v16;
  v254 = v17;
  sub_311E30(v11, &v254);
  v18 = v171;
  v254 = nullptr;
  v255 = 0;
  v19 = v171[16];
  v20 = v171[71];
  v256 = 0;
  v257 = 0;
  if ( v20 + v19 - 1 >= v20 )
  {
    v256 = qvector_reserve(&v256, 0, 1, 16);
    v18 = v171;
    *(__m128i *)(v256 + 16 * v257) = _mm_unpacklo_epi64((__m128i)v20, (__m128i)(unsigned __int64)v19);
    *(_QWORD *)&v257 = v257 + 1;
  }
  v21 = v18 + 104;
  v172 = v18;
  sub_60500(v18 + 104, (__int64 *)&v254);
  sub_313340(v11, &v256);
  v22 = (__m128i *)v172;
  if ( v256 )
  {
    *(_QWORD *)&v257 = 0;
    qfree(v256);
    v22 = (__m128i *)v172;
  }
  v173 = v22;
  qfree(v254);
  v23 = v173;
  v24 = v173[7].m128i_i32[1];
  if ( v24 )
  {
    v105 = v24;
    v106 = *(_QWORD *)(*(_QWORD *)(v173[93].m128i_i64[1] + 24) + 16LL) & (v173[8].m128i_i64[1] + v173[90].m128i_i64[0]);
    v257 = 0;
    v254 = nullptr;
    v255 = 0;
    v256 = 0;
    if ( v24 + v106 - 1 >= v106 )
    {
      v256 = qvector_reserve(&v256, 0, 1, 16);
      v23 = v173;
      v158 = (unsigned __int64 *)(16 * v257 + v256);
      *v158 = v106;
      v158[1] = v105;
      *(_QWORD *)&v257 = v257 + 1;
    }
    v196 = v23;
    sub_60080(v21, (__int64 *)&v254);
    sub_311F30(v11, &v256);
    v107 = v196;
    if ( v256 )
    {
      *(_QWORD *)&v257 = 0;
      qfree(v256);
      v107 = v196;
    }
    v197 = v107;
    qfree(v254);
    v23 = v197;
  }
  v25 = 0;
  v233 = nullptr;
  m128i_i64 = v23[27].m128i_i64;
  v234 = 0;
  while ( 2 )
  {
    v23->m128i_i32[0] &= 0xF7FDFFFF;
    v26 = v23[46].m128i_u64[0];
    if ( v212 != v26 )
    {
      v254 = nullptr;
      a5 = 0.0;
      LODWORD(v255) = 0;
      v256 = 0;
      v257 = 0;
      if ( v212 < v26 )
      {
        v101 = v212;
        v102 = v23;
        do
        {
          v103 = v102[45].m128i_i64[1] + 40 * v101;
          v104 = *(_QWORD *)(v103 + 16);
          if ( v104 )
          {
            *(_QWORD *)(v103 + 24) = 0;
            qfree(v104);
          }
          ++v101;
        }
        while ( v101 < v26 );
        v23 = v102;
        goto LABEL_19;
      }
      v27 = v23[45].m128i_u64[1];
      v28 = &v23[45].m128i_i8[8];
      v29 = v23[46].m128i_u64[1];
      if ( (unsigned __int64)&v254 >= v27 && (unsigned __int64)&v254 < v27 + 40 * v29 )
      {
        if ( v29 < v212 )
        {
          v203 = v23;
          v123 = qvector_reserve(v28, v27, v212, 40);
          v23 = v203;
          v203[45].m128i_i64[1] = v123;
          v26 = v203[46].m128i_u64[0];
        }
        if ( v26 < v212 )
        {
          v30 = 40 * v26;
          do
          {
            ++v26;
            v31 = v30 + v23[45].m128i_i64[1];
            v30 += 40;
            *(_QWORD *)v31 = 0;
            *(_QWORD *)(v31 + 8) = 0;
            *(_QWORD *)(v31 + 16) = 0;
            *(_OWORD *)(v31 + 24) = 0;
          }
          while ( v212 != v26 );
        }
        goto LABEL_19;
      }
      if ( v29 < v212 )
      {
        v198 = v23;
        v108 = qvector_reserve(v28, v27, v212, 40);
        v23 = v198;
        v51 = v212;
        v26 = v198[46].m128i_u64[0];
        v198[45].m128i_i64[1] = v108;
        if ( v26 < v212 )
        {
LABEL_44:
          v52 = 40 * v26;
          do
          {
            ++v26;
            v53 = v52 + v23[45].m128i_i64[1];
            v52 += 40;
            *(_QWORD *)v53 = 0;
            *(_QWORD *)(v53 + 8) = 0;
            *(_QWORD *)(v53 + 16) = 0;
            *(_OWORD *)(v53 + 24) = 0;
          }
          while ( v51 != v26 );
        }
      }
      else
      {
        v51 = v212;
        if ( v26 < v212 )
          goto LABEL_44;
      }
LABEL_19:
      v23[46].m128i_i64[0] = v212;
    }
    v174 = v23;
    v23[47] = _mm_load_si128(&v267);
    v32 = _mm_load_si128(&v268);
    v23[48] = v32;
    sub_134240(v23);
    v33 = v174[49].m128i_i64[0];
    v34 = *(_DWORD *)(v33 + 48) & 1;
    v35 = sub_10C140(v33, 0);
    v36 = v35;
    if ( !v35 )
    {
      if ( !under_debugger )
        sub_37E160(50446);
      goto LABEL_304;
    }
    ++*(_DWORD *)(v35 + 24);
    v37 = sub_10C6E0(v174[49].m128i_i64[0], 0);
    v38 = (_QWORD *)v37;
    if ( !v37 )
    {
      if ( !under_debugger )
        sub_37E160(50446);
      goto LABEL_304;
    }
    ++*(_DWORD *)(v37 + 24);
    v39 = (_QWORD *)v36;
    nullsub_40();
    v40 = (__int64)v174;
    v223 = *(_DWORD *)(v174[49].m128i_i64[0] + 52);
    if ( v34 )
    {
      v39 = v38;
      nullsub_39();
      v40 = (__int64)v174;
    }
    v255 = 0;
    v256 = 0;
    v259 = 0;
    v254 = (__int64 (__fastcall **)())&off_4BF570;
    v258 = -4294967238LL;
    v260 = v40;
    v261 = m128i_i64;
    v175 = v40;
    v262 = v38;
    v263 = v36;
    v264 = 0;
    v266 = &v233;
    v257 = 0;
    v265 = 0;
    v41 = sub_2036C0(&v254, v39);
    v42 = v175;
    v43 = v41;
    if ( v41 < 0 && (v41 != -20 || (*(_BYTE *)(*(_QWORD *)(v175 + 1496) + 604LL) & 0x10) == 0) )
      goto LABEL_57;
    if ( !v25 )
    {
      memset(&v237[1], 0, 32);
      v238 = 0;
      v237[0] = &off_4BF320;
      v239 = 0;
      sub_11B9B0(v175, (__int64)v237);
      v42 = v175;
      v95 = v38[1];
      v96 = v239 + *(int *)(v175 + 792);
      if ( v95 )
      {
        v97 = (_QWORD *)(*v38 + 8LL);
        v98 = *v38 + 24 * v95 + 8;
        do
        {
          v25 += *v97;
          v97 += 3;
        }
        while ( (_QWORD *)v98 != v97 );
        v96 += v25;
      }
      v25 = 16 * v96;
    }
    v44 = *(unsigned __int64 ***)(v42 + 800);
    v45 = *v44;
    if ( !*v44 )
      goto LABEL_54;
    v46 = *v45;
    if ( v44[1] )
    {
      v54 = (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
      v55 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v55 & 2) != 0 )
      {
LABEL_53:
        *v45 = (unsigned __int64)v45 & 0xFFFFFFFFFFFFFFFCLL | v46 & 3;
        v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v44, (__m128i)(unsigned __int64)*v44);
        *(__m128i *)(*v44 + 1) = v32;
        **v44 &= ~1uLL;
        **v44 |= 2u;
LABEL_54:
        v44[1] = nullptr;
        goto LABEL_29;
      }
      v56 = (__int64 *)v54[1];
      if ( (*(_BYTE *)v56 & 2) != 0 )
      {
        v57 = (__int64 *)v54[2];
        if ( (*(_BYTE *)v57 & 2) != 0 )
          goto LABEL_158;
      }
      else
      {
        v218 = v42;
        v195 = (__int64 *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
        sub_1E8570(v56);
        v54 = (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
        v42 = v218;
        v57 = *(__int64 **)((v46 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( (*(_BYTE *)v57 & 2) != 0 )
        {
          v55 = *v195;
          if ( (*v195 & 2) != 0 )
          {
LABEL_51:
            if ( v46 > 3 )
            {
LABEL_52:
              v182 = v42;
              qfree(v54);
              v45 = *v44;
              v42 = v182;
              v46 = **v44;
              goto LABEL_53;
            }
LABEL_159:
            v45 = *v44;
            v46 = **v44;
            goto LABEL_53;
          }
LABEL_158:
          *v54 = v55 | 2;
          if ( v46 > 3 )
            goto LABEL_52;
          goto LABEL_159;
        }
      }
      v215 = v42;
      v181 = v54;
      sub_1E8570(v57);
      v54 = v181;
      v42 = v215;
      v55 = *v181;
      if ( (*v181 & 2) != 0 )
        goto LABEL_51;
      goto LABEL_158;
    }
    *v45 = (unsigned __int64)v45 & 0xFFFFFFFFFFFFFFFCLL | *v45 & 3;
    v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v44, (__m128i)(unsigned __int64)*v44);
    *(__m128i *)(*v44 + 1) = v32;
    **v44 &= ~1uLL;
    **v44 |= 2u;
LABEL_29:
    v47 = *(_QWORD *)(v42 + 968);
    v48 = v42;
    if ( v47 )
    {
      do
      {
        sub_1E8CA0(*(_QWORD **)(v47 + 24));
        v49 = (void *)v47;
        v47 = *(_QWORD *)(v47 + 16);
        operator delete(v49, 0x28u);
      }
      while ( v47 );
      v42 = v48;
    }
    v176 = v42;
    *(_QWORD *)(v42 + 968) = 0;
    *(_QWORD *)(v42 + 976) = v42 + 960;
    *(_QWORD *)(v42 + 984) = v42 + 960;
    *(_QWORD *)(v42 + 992) = 0;
    sub_1F17C0(v42);
    sub_20F120(v176);
    v42 = v176;
    if ( (*(_DWORD *)v176 & 0x40) != 0 && (*(_DWORD *)v176 & 1) != 0 )
    {
      v100 = *(_QWORD *)(v176 + 1504);
      v241 = 0;
      v242 = v176;
      v240 = off_4BF548;
      v243 = v38;
      v244 = v36;
      v245 = 0;
      sub_100C40(v38, v100, &v240, 8);
      v42 = v176;
      if ( v245 )
        goto LABEL_37;
    }
    v177 = v42;
    v50 = sub_100C40(v38, *(_QWORD *)(v42 + 1504), &v254, 8);
    v42 = v177;
    v43 = v50;
    if ( v50 == -36 )
      goto LABEL_37;
    if ( v50 < 0 )
      goto LABEL_57;
    if ( v259 )
      goto LABEL_37;
    if ( v50 )
    {
      if ( !under_debugger )
        sub_37E160(50350);
      goto LABEL_304;
    }
    sub_1F3F00((__int64)&v235, v177);
    v42 = v177;
    v242 = 0;
    v65 = *(_DWORD *)(v177 + 64);
    v243 = nullptr;
    v240 = off_4BF4F8;
    v244 = 0;
    v245 = 0;
    v246 = m128i_i64;
    v247 = nullptr;
    v248 = 0;
    v249 = 0;
    v251 = &v235;
    v252 = -1;
    v253 = 0;
    v241 = v177;
    v250 = 0;
    if ( v65 <= 0 )
      goto LABEL_198;
    v66 = 0;
    do
    {
      v188 = v42;
      *(_QWORD *)(v42 + 808) = &v247;
      v67 = sub_1F8700(&v240, *(_QWORD *)(*(_QWORD *)(v42 + 528) + 8 * v66));
      v42 = v188;
      v229 = v67;
      *(_QWORD *)(v188 + 808) = 0;
      if ( v67 < 0 )
      {
        if ( v67 == -36 )
          goto LABEL_169;
        goto LABEL_98;
      }
      v216 = v247;
      if ( !v247 )
        goto LABEL_91;
      if ( !v248 )
        goto LABEL_91;
      v68 = *(__m128i **)(v188 + 800);
      v69 = (unsigned __int64 *)v247[1];
      if ( v69 == v247 )
        goto LABEL_91;
      do
      {
LABEL_83:
        v70 = (unsigned __int64 *)v68->m128i_i64[0];
        v232 = (const __m128i *)(v69 + 3);
        if ( !v70 )
        {
          v194 = v42;
          v99 = qalloc(80);
          a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v99, (__m128i)(unsigned __int64)v99);
          if ( !v99 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          v42 = v194;
          *(_OWORD *)(v99 + 16) = 0;
          *(_OWORD *)(v99 + 32) = 0;
          *(_OWORD *)(v99 + 48) = 0;
          *(_QWORD *)v99 = v99 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v99 + 64) = 0;
          *(__m128 *)(v99 + 8) = a3;
          v68->m128i_i64[0] = v99;
          *(_QWORD *)v99 = v99 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v99 & 3LL;
          v32 = _mm_unpacklo_epi64((__m128i)v68->m128i_u64[0], (__m128i)v68->m128i_u64[0]);
          *(__m128i *)(v68->m128i_i64[0] + 8) = v32;
          *(_QWORD *)v68->m128i_i64[0] &= ~1uLL;
          *(_QWORD *)v68->m128i_i64[0] |= 2uLL;
          v70 = (unsigned __int64 *)v68->m128i_i64[0];
LABEL_85:
          v189 = v42;
          sub_1F2E20(v68, v70, 1, &v232);
LABEL_86:
          v42 = v189;
          goto LABEL_87;
        }
        if ( !v68->m128i_i64[1] )
          goto LABEL_85;
        v86 = *v70 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v86 & 2) != 0 )
        {
          v91 = 1;
LABEL_136:
          v189 = v42;
          sub_1F2E20(v68, v70, v91, &v232);
          goto LABEL_86;
        }
        v87 = v69[3];
        v88 = 1;
        while ( 1 )
        {
          v89 = *(_QWORD *)(v86 + 24);
          if ( v87 < v89 )
          {
            v90 = *(_BYTE **)(v86 + 8);
            v88 = 1;
            if ( (*v90 & 2) != 0 )
              goto LABEL_126;
            goto LABEL_144;
          }
          if ( v89 >= v87 )
            break;
          v90 = *(_BYTE **)(v86 + 16);
          v88 = 0;
          if ( (*v90 & 2) != 0 )
            goto LABEL_126;
LABEL_144:
          v86 = (unsigned __int64)v90;
        }
        if ( !v86 )
        {
LABEL_126:
          v91 = v88;
          v70 = (unsigned __int64 *)v86;
          goto LABEL_136;
        }
LABEL_87:
        if ( (*v69 & 2) != 0 )
        {
LABEL_90:
          if ( v216 == v69 )
            break;
          goto LABEL_83;
        }
        v71 = (unsigned __int64 *)v69[2];
        if ( (*(_BYTE *)v71 & 2) == 0 )
        {
          do
          {
            v69 = v71;
            v71 = (unsigned __int64 *)v71[1];
          }
          while ( (*(_BYTE *)v71 & 2) == 0 );
          goto LABEL_90;
        }
        v92 = (unsigned __int64 *)(*v69 & 0xFFFFFFFFFFFFFFFCLL);
        v93 = *v92;
        if ( (*v92 & 2) == 0 )
        {
          while ( (unsigned __int64 *)v92[2] == v69 )
          {
            v69 = v92;
            v94 = v93 & 0xFFFFFFFFFFFFFFFCLL;
            v93 = *(_QWORD *)(v93 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v93 & 2) != 0 )
            {
              v69 = (unsigned __int64 *)v94;
              if ( v216 != (unsigned __int64 *)v94 )
                goto LABEL_83;
              goto LABEL_91;
            }
            v92 = (unsigned __int64 *)v94;
          }
        }
        v69 = v92;
      }
      while ( v216 != v92 );
LABEL_91:
      ++v66;
    }
    while ( *(_DWORD *)(v42 + 64) > (int)v66 );
    if ( v229 )
      break;
LABEL_198:
    if ( (*(_DWORD *)v42 & 0x8000000) != 0 )
    {
LABEL_169:
      v240 = off_4BF4F8;
      if ( v249 )
      {
        v199 = v42;
        *(_QWORD *)&v250 = 0;
        qfree(v249);
        v42 = v199;
      }
      v109 = v247;
      if ( !v247 )
        goto LABEL_176;
      v110 = *v247;
      if ( v248 )
      {
        v137 = (__int64 *)(v110 & 0xFFFFFFFFFFFFFFFCLL);
        v138 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v138 & 2) == 0 )
        {
          v139 = (__int64 *)v137[1];
          if ( (*(_BYTE *)v139 & 2) != 0 )
          {
            v140 = (__int64 *)v137[2];
            if ( (*(_BYTE *)v140 & 2) == 0 )
            {
LABEL_224:
              v206 = v42;
              sub_1E8570(v140);
              v42 = v206;
              goto LABEL_225;
            }
          }
          else
          {
            v205 = v42;
            sub_1E8570(v139);
            v140 = (__int64 *)v137[2];
            v42 = v205;
            if ( (*(_BYTE *)v140 & 2) == 0 )
              goto LABEL_224;
LABEL_225:
            v138 = *v137;
            if ( (*v137 & 2) != 0 )
            {
LABEL_226:
              if ( v110 <= 3 )
              {
                v109 = v247;
              }
              else
              {
                v207 = v42;
                qfree(v110 & 0xFFFFFFFFFFFFFFFCLL);
                v109 = v247;
                v42 = v207;
              }
              v110 = *v247;
              goto LABEL_229;
            }
          }
          *v137 = v138 | 2;
          goto LABEL_226;
        }
LABEL_229:
        *v109 = v110 & 3 | (unsigned __int64)v109 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(v247 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v247, (__m128i)(unsigned __int64)v247);
        *v247 &= ~1uLL;
        *v247 |= 2u;
        v248 = 0;
        goto LABEL_174;
      }
      *v247 = *v247 & 3 | (unsigned __int64)v247 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v247 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v247, (__m128i)(unsigned __int64)v247);
      *v247 &= ~1uLL;
      *v247 |= 2u;
LABEL_174:
      if ( v247 )
      {
        v200 = v42;
        qfree(v247);
        v42 = v200;
      }
LABEL_176:
      v111 = v235;
      if ( v235 )
      {
        if ( v236 )
        {
          v224 = v25;
          v226 = v36;
          v228 = v38;
          v219 = 0;
          v221 = v236;
          v230 = v42;
          do
          {
            v112 = (_QWORD *)(v111 + 80 * v219);
            v113 = v112[7];
            if ( v113 )
            {
              if ( v112[8] )
              {
                v201 = v112[8];
                v114 = 0;
                do
                {
                  v115 = (_QWORD *)(v113 + 96 * v114);
                  v116 = v115[5];
                  if ( v116 )
                  {
                    v117 = v115[6];
                    if ( v117 )
                    {
                      for ( i = 0; i != v117; ++i )
                      {
                        v119 = (_QWORD *)(v116 + 40 * i);
                        v120 = v119[2];
                        if ( v120 )
                        {
                          v119[3] = 0;
                          qfree(v120);
                        }
                        qfree(*v119);
                        v116 = v115[5];
                      }
                    }
                    v115[6] = 0;
                    qfree(v116);
                  }
                  v121 = v115[2];
                  if ( v121 )
                  {
                    v115[3] = 0;
                    qfree(v121);
                  }
                  ++v114;
                  qfree(*v115);
                  v113 = v112[7];
                }
                while ( v201 != v114 );
              }
              v112[8] = 0;
              qfree(v113);
            }
            v122 = v112[4];
            if ( v122 )
            {
              v112[5] = 0;
              qfree(v122);
            }
            qfree(v112[2]);
            ++v219;
            v111 = v235;
          }
          while ( v221 != v219 );
          v25 = v224;
          v36 = v226;
          v38 = v228;
          v42 = v230;
        }
        v202 = v42;
        v236 = 0;
        qfree(v111);
        v42 = v202;
      }
LABEL_37:
      v254 = (__int64 (__fastcall **)())&off_4BF570;
      if ( v264 )
      {
        v178 = v42;
        *(_QWORD *)&v265 = 0;
        qfree(v264);
        v42 = v178;
      }
      if ( v256 )
      {
        v179 = v42;
        *(_QWORD *)&v257 = 0;
        qfree(v256);
        v42 = v179;
      }
      v180 = (__m128i *)v42;
      sub_100C10((__int64)v38);
      sub_100C10(v36);
      v23 = v180;
      continue;
    }
    break;
  }
  v190 = v42;
  v229 = sub_2395E0(v42, &v231);
  v42 = v190;
  if ( v229 == -36 )
    goto LABEL_169;
  if ( v229 )
  {
    if ( !v231 )
      goto LABEL_98;
  }
  else
  {
    if ( (*(_BYTE *)(v190 + 3) & 8) != 0 )
      goto LABEL_169;
    if ( !v231 )
    {
LABEL_97:
      v229 = 0;
      goto LABEL_98;
    }
  }
  v124 = sub_1C49B0(v190, *(_QWORD *)(v190 + 800));
  v229 = v124;
  v42 = v190;
  if ( v124 == -36 )
    goto LABEL_169;
  if ( !v124 )
  {
    if ( (*(_BYTE *)(v190 + 3) & 8) != 0 )
      goto LABEL_169;
    goto LABEL_97;
  }
LABEL_98:
  v191 = v42;
  sub_1ECB00(&v240);
  v72 = v235;
  v42 = v191;
  if ( v235 )
  {
    v73 = v236;
    if ( v236 )
    {
      v220 = v36;
      v74 = 0;
      v225 = v38;
      v227 = v191;
      do
      {
        v75 = (_QWORD *)(v72 + 80 * v74);
        v76 = v75[7];
        if ( v76 )
        {
          if ( v75[8] )
          {
            v213 = v73;
            v77 = 0;
            v217 = v74;
            v192 = v75[8];
            do
            {
              v78 = (_QWORD *)(v76 + 96 * v77);
              v79 = v78[5];
              if ( v79 )
              {
                v80 = v78[6];
                if ( v80 )
                {
                  for ( j = 0; j != v80; ++j )
                  {
                    v82 = (_QWORD *)(v79 + 40 * j);
                    v83 = v82[2];
                    if ( v83 )
                    {
                      v82[3] = 0;
                      qfree(v83);
                    }
                    qfree(*v82);
                    v79 = v78[5];
                  }
                }
                v78[6] = 0;
                qfree(v79);
              }
              v84 = v78[2];
              if ( v84 )
              {
                v78[3] = 0;
                qfree(v84);
              }
              ++v77;
              qfree(*v78);
              v76 = v75[7];
            }
            while ( v192 != v77 );
            v73 = v213;
            v74 = v217;
          }
          v75[8] = 0;
          qfree(v76);
        }
        v85 = v75[4];
        if ( v85 )
        {
          v75[5] = 0;
          qfree(v85);
        }
        ++v74;
        qfree(v75[2]);
        v72 = v235;
      }
      while ( v73 != v74 );
      v36 = v220;
      v38 = v225;
      v42 = v227;
    }
    v193 = v42;
    v236 = 0;
    qfree(v72);
    v42 = v193;
  }
  v43 = v229;
LABEL_57:
  v254 = (__int64 (__fastcall **)())&off_4BF570;
  if ( v264 )
  {
    v183 = v42;
    *(_QWORD *)&v265 = 0;
    qfree(v264);
    v42 = v183;
  }
  if ( v256 )
  {
    v184 = v42;
    *(_QWORD *)&v257 = 0;
    qfree(v256);
    v42 = v184;
  }
  v185 = v42;
  sub_100C10((__int64)v38);
  sub_100C10(v36);
  v60 = v233;
  v61 = (__m128i *)v185;
  v62 = &v233[v234];
  if ( v62 != v233 )
  {
    do
    {
      v186 = v61;
      sub_32C190((_DWORD)v61, *v60++, 57, v58, (_DWORD)v61, v59);
      v61 = v186;
    }
    while ( v62 != v60 );
  }
  if ( v43 )
    goto LABEL_73;
  v63 = v61->m128i_i32[0];
  if ( (v61->m128i_i32[0] & 0x40000) == 0 )
    goto LABEL_65;
  v125 = (_QWORD *)v61[50].m128i_i64[0];
  v126 = (_QWORD *)*v125;
  if ( !*v125 || !v125[1] || (v127 = (_QWORD *)v126[1], v126 == v127) )
  {
LABEL_218:
    v135 = v61[49].m128i_i32[2];
    v136 = v61[49].m128i_i32[2];
    if ( v135 < v61[27].m128i_i64[1] )
    {
      do
      {
        ++v136;
        *(_DWORD *)(v61[27].m128i_i64[0] + 104 * v135 + 24) &= ~0x1000u;
        v135 = v136;
      }
      while ( (unsigned __int64)v136 < v61[27].m128i_i64[1] );
      goto LABEL_70;
    }
    if ( (v63 & 0x10000) == 0 )
      goto LABEL_280;
    goto LABEL_253;
  }
  while ( 2 )
  {
    v128 = (char *)v127[3];
    v129 = *v128;
    if ( *v128 == 9 )
    {
      if ( !under_debugger )
        sub_37E160(52925);
      goto LABEL_304;
    }
    if ( v129 != 15 )
    {
      if ( v129 != 5 )
        goto LABEL_211;
LABEL_230:
      v141 = *((_QWORD *)v128 + 1);
      if ( v141 )
      {
        v208 = v61;
        j__qfree(v141);
        goto LABEL_232;
      }
      goto LABEL_211;
    }
    v145 = *((unsigned int *)v128 + 1);
    v209 = v61;
    v146 = sub_118880(v145);
    v61 = v209;
    if ( v146 )
      goto LABEL_247;
    if ( !v127[5] )
    {
      v147 = v127[4];
      v148 = *((int *)v127 + 12);
      if ( *(_QWORD *)(v147 + 440) < v148 )
        sub_1E8300(v145);
      if ( *((_DWORD *)v128 + 1) == *(_DWORD *)(*(_QWORD *)(v147 + 432) + 104 * v148 + 88) )
        goto LABEL_247;
    }
    v149 = (_QWORD *)v209[87].m128i_i64[0];
    v150 = v127[8];
    if ( !v149 )
      goto LABEL_246;
    v151 = *v149 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v151 )
      goto LABEL_247;
    if ( (*(_BYTE *)(*v149 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_246;
    v168 = *(_QWORD *)(v150 + 24);
    while ( 2 )
    {
      v169 = *(_QWORD *)(v151 + 24);
      if ( v168 < v169 )
      {
        v151 = *(_QWORD *)(v151 + 8);
        goto LABEL_272;
      }
      if ( v169 < v168 )
      {
        v151 = *(_QWORD *)(v151 + 16);
LABEL_272:
        if ( (*(_BYTE *)v151 & 2) != 0 )
          goto LABEL_246;
        continue;
      }
      break;
    }
    if ( v149 == (_QWORD *)v151 )
    {
LABEL_246:
      v152 = *((_QWORD *)v128 + 1);
      v240 = (__int64 (__fastcall **)())(v150 + 24);
      v153 = v152 + 48;
      v154 = sub_C3DB0(v209 + 87, (unsigned __int64 *)(v150 + 24), &v240);
      copy_tinfo_t(v154 + 32, v153);
      v61 = v209;
    }
LABEL_247:
    if ( *v128 == 5 )
      goto LABEL_230;
    if ( *v128 == 15 )
    {
      v155 = *((_QWORD *)v128 + 1);
      if ( v155 )
      {
        v210 = v61;
        clear_tinfo_t(v155 + 48);
        v156 = *(_QWORD *)(v155 + 24);
        v157 = v210;
        if ( v156 )
        {
          *(_QWORD *)(v155 + 32) = 0;
          qfree(v156);
          v157 = v210;
        }
        v208 = v157;
        cleanup_argloc(v155);
        qfree(v155);
LABEL_232:
        v61 = v208;
      }
    }
LABEL_211:
    v130 = v127[5];
    v131 = *((_DWORD *)v127 + 12);
    *v128 = 9;
    v214 = v61;
    v204 = v130;
    v132 = j__qalloc_or_throw(24);
    v61 = v214;
    *(_DWORD *)(v132 + 16) = v131;
    *(_QWORD *)v132 = v214;
    *(_QWORD *)(v132 + 8) = v204;
    *((_QWORD *)v128 + 1) = v132;
    if ( (*v127 & 2) == 0 )
    {
      v133 = (_QWORD *)v127[2];
      if ( (*(_BYTE *)v133 & 2) != 0 )
      {
        v142 = (_QWORD *)(*v127 & 0xFFFFFFFFFFFFFFFCLL);
        v143 = *v142;
        if ( (*v142 & 2) == 0 )
        {
          while ( (_QWORD *)v142[2] == v127 )
          {
            v127 = v142;
            v144 = v143 & 0xFFFFFFFFFFFFFFFCLL;
            v143 = *(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v143 & 2) != 0 )
            {
              v127 = (_QWORD *)v144;
              goto LABEL_216;
            }
            v142 = (_QWORD *)v144;
          }
        }
        v127 = v142;
      }
      else
      {
        for ( k = (_QWORD *)v133[1]; (*(_BYTE *)k & 2) == 0; k = (_QWORD *)k[1] )
          v133 = k;
        v127 = v133;
      }
    }
LABEL_216:
    if ( v126 != v127 )
      continue;
    break;
  }
  v63 = v214->m128i_i32[0];
  if ( (v214->m128i_i32[0] & 0x40000) != 0 )
    goto LABEL_218;
LABEL_65:
  v187 = v61;
  *(double *)v32.m128i_i64 = sub_215350(v61);
  if ( (unsigned __int8)sub_CA4F0((__int64)v187, v32, *(double *)a3.m128_u64, (__m128i)0LL, a5) )
    v187->m128i_i32[0] &= ~0x10000u;
  if ( (int)sub_1C4870((__int64)v187) > 0 )
    v187->m128i_i32[0] &= ~0x10000u;
  sub_1F1260(m128i_i64, v187[49].m128i_i32[2]);
  sub_20F120(v187);
  v61 = v187;
LABEL_70:
  if ( (v61->m128i_i32[0] & 0x10000) == 0 )
  {
    if ( (v61->m128i_i32[0] & 0x40000) == 0 )
    {
      v43 = 1;
      goto LABEL_73;
    }
LABEL_280:
    if ( !under_debugger )
      sub_37E160(50352);
LABEL_304:
    BUG();
  }
LABEL_253:
  v211 = (__int64)v61;
  v159 = sub_10C140(v61[49].m128i_i64[0], 0);
  v160 = (_QWORD *)v159;
  if ( !v159 )
  {
    if ( !under_debugger )
      sub_37E160(50446);
    goto LABEL_304;
  }
  ++*(_DWORD *)(v159 + 24);
  v161 = sub_10C6E0(*(_QWORD *)(v211 + 784), 0);
  v162 = (_QWORD *)v161;
  if ( !v161 )
  {
    if ( !under_debugger )
      sub_37E160(50446);
    goto LABEL_304;
  }
  ++*(_DWORD *)(v161 + 24);
  v163 = *(_DWORD *)v211 & 0x40000;
  if ( v223 == *(_DWORD *)(*(_QWORD *)(v211 + 784) + 52LL) )
  {
    v164 = *(_QWORD *)(v211 + 440);
    if ( v164 )
    {
      v165 = 0;
      v166 = 0;
      while ( (*(_BYTE *)(*(_QWORD *)(v211 + 432) + 104 * v166 + 25) & 4) == 0 )
      {
        v166 = ++v165;
        if ( v165 >= v164 )
          goto LABEL_266;
      }
      *(_BYTE *)(v211 + 754) |= 0x10u;
    }
LABEL_266:
    if ( v163 )
    {
      if ( !(unsigned __int8)sub_1EA1E0((unsigned __int8 *)v211) )
      {
LABEL_268:
        sub_62DA0(v167, 0, (__int64)"after prealloc_lvars");
        goto LABEL_258;
      }
      v254 = off_4BF3C0;
      v170 = *(_QWORD *)(v167 + 1504);
      v211 = v167;
      v255 = 0;
      v256 = (__int64)m128i_i64;
      sub_100C40(v162, v170, &v254, 4);
      sub_100C40(v160, *(_QWORD *)(v211 + 1504), &v254, 4);
    }
    else
    {
      sub_100E60(v162);
      sub_100E60(v160);
    }
    v167 = v211;
    goto LABEL_268;
  }
  if ( v163 )
  {
    if ( !under_debugger )
      sub_37E160(50989);
    goto LABEL_304;
  }
  v43 = 1;
LABEL_258:
  sub_100C10((__int64)v162);
  sub_100C10((__int64)v160);
LABEL_73:
  if ( v233 )
  {
    *(_QWORD *)&v234 = 0;
    qfree(v233);
  }
  return v43;
}
