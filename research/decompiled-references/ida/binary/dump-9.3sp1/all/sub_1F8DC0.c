__int64 __fastcall sub_1F8DC0(__m128i *a1, double a2, __m128 a3, double a4, double a5)
{
  _QWORD *exception; // rdi
  __int32 v6; // eax
  __m128i *v7; // r8
  int v8; // edx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128i *v11; // rbx
  unsigned __int64 v12; // rax
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
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rdi
  int v34; // r14d
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  char *v38; // rbx
  char *v39; // rsi
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
  char **v60; // rbp
  __m128i *v61; // r8
  char **v62; // rbx
  unsigned __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v67; // r11d
  __int64 v68; // r13
  int v69; // eax
  __m128i *v70; // r14
  _QWORD *v71; // r15
  unsigned __int64 *v72; // rsi
  _QWORD *v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // r14
  __int64 v76; // r13
  __int64 *v77; // r15
  __int64 v78; // rdi
  __int64 v79; // r12
  __int64 *v80; // r13
  __int64 v81; // rdi
  __int64 v82; // rbp
  __int64 j; // r14
  __int64 *v84; // rbx
  __int64 v85; // rdi
  __int64 v86; // rdi
  __int64 v87; // rdi
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rsi
  char v90; // cl
  unsigned __int64 v91; // rdx
  _BYTE *v92; // rdx
  char v93; // dl
  _QWORD *v94; // rax
  __int64 v95; // rdx
  unsigned __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rsi
  unsigned __int64 v103; // rbp
  __m128i *v104; // r13
  __int64 v105; // rax
  __int64 v106; // rdi
  unsigned __int64 v107; // r15
  unsigned __int64 v108; // r14
  __m128i *v109; // r8
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // r14
  __int64 v113; // rdi
  __int64 *v114; // r12
  __int64 v115; // rdi
  __int64 v116; // r13
  __int64 *v117; // rbp
  __int64 v118; // rdi
  __int64 v119; // r15
  __int64 i; // r14
  __int64 *v121; // rbx
  __int64 v122; // rdi
  __int64 v123; // rdi
  __int64 v124; // rdi
  __int64 v125; // rax
  unsigned int v126; // eax
  _QWORD *v127; // rax
  _QWORD *v128; // r13
  _QWORD *v129; // r12
  char *v130; // rbx
  char v131; // al
  __int64 v132; // rdx
  int v133; // ebp
  __int64 v134; // rax
  _QWORD *v135; // rdx
  _QWORD *k; // rax
  unsigned __int64 v137; // rax
  signed int v138; // edx
  __int64 *v139; // r15
  __int64 v140; // rdx
  __int64 *v141; // rdi
  __int64 *v142; // rdi
  __int64 v143; // rdi
  _QWORD *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rdi
  bool v147; // al
  __int64 v148; // rdx
  unsigned __int64 v149; // rax
  unsigned __int64 v150; // rax
  __int64 v151; // rax
  char *v152; // rbp
  __int64 v153; // rbp
  __int64 v154; // rdi
  __m128i *v155; // r8
  unsigned __int64 *v156; // rax
  __int64 v157; // rax
  _QWORD *v158; // rbx
  __int64 v159; // rax
  _QWORD *v160; // rbp
  int v161; // ecx
  unsigned __int64 v162; // rsi
  int v163; // edx
  __int64 v164; // rax
  __int64 v165; // r8
  unsigned __int64 v166; // rdx
  unsigned __int64 v167; // rdi
  __int64 v168; // rsi
  __int64 *v169; // [rsp+8h] [rbp-240h]
  __int64 *v170; // [rsp+8h] [rbp-240h]
  __m128i *v171; // [rsp+8h] [rbp-240h]
  __m128i *v172; // [rsp+8h] [rbp-240h]
  __int64 v173; // [rsp+8h] [rbp-240h]
  __int64 v174; // [rsp+8h] [rbp-240h]
  __int64 v175; // [rsp+8h] [rbp-240h]
  __int64 v176; // [rsp+8h] [rbp-240h]
  __int64 v177; // [rsp+8h] [rbp-240h]
  __m128i *v178; // [rsp+8h] [rbp-240h]
  _QWORD *v179; // [rsp+8h] [rbp-240h]
  __int64 v180; // [rsp+8h] [rbp-240h]
  __int64 v181; // [rsp+8h] [rbp-240h]
  __int64 v182; // [rsp+8h] [rbp-240h]
  __m128i *v183; // [rsp+8h] [rbp-240h]
  __m128i *v184; // [rsp+8h] [rbp-240h]
  __m128i *v185; // [rsp+8h] [rbp-240h]
  __int64 v186; // [rsp+8h] [rbp-240h]
  __int64 v187; // [rsp+8h] [rbp-240h]
  __int64 v188; // [rsp+8h] [rbp-240h]
  __int64 v189; // [rsp+8h] [rbp-240h]
  __int64 v190; // [rsp+8h] [rbp-240h]
  __int64 v191; // [rsp+8h] [rbp-240h]
  __int64 v192; // [rsp+8h] [rbp-240h]
  __int64 *v193; // [rsp+8h] [rbp-240h]
  __m128i *v194; // [rsp+8h] [rbp-240h]
  __m128i *v195; // [rsp+8h] [rbp-240h]
  __m128i *v196; // [rsp+8h] [rbp-240h]
  __int64 v197; // [rsp+8h] [rbp-240h]
  __int64 v198; // [rsp+8h] [rbp-240h]
  __int64 v199; // [rsp+8h] [rbp-240h]
  __int64 v200; // [rsp+8h] [rbp-240h]
  __m128i *v201; // [rsp+8h] [rbp-240h]
  __int64 v202; // [rsp+8h] [rbp-240h]
  __int64 v203; // [rsp+8h] [rbp-240h]
  __int64 v204; // [rsp+8h] [rbp-240h]
  __int64 v205; // [rsp+8h] [rbp-240h]
  __m128i *v206; // [rsp+8h] [rbp-240h]
  __m128i *v207; // [rsp+8h] [rbp-240h]
  __m128i *v208; // [rsp+8h] [rbp-240h]
  unsigned int *v209; // [rsp+8h] [rbp-240h]
  unsigned __int64 v210; // [rsp+18h] [rbp-230h]
  __int64 v211; // [rsp+18h] [rbp-230h]
  __m128i *v212; // [rsp+18h] [rbp-230h]
  __int64 v213; // [rsp+20h] [rbp-228h]
  __int64 v214; // [rsp+20h] [rbp-228h]
  __int64 v215; // [rsp+20h] [rbp-228h]
  __int64 v216; // [rsp+20h] [rbp-228h]
  __int64 v217; // [rsp+20h] [rbp-228h]
  __int64 v218; // [rsp+28h] [rbp-220h]
  __int64 v219; // [rsp+28h] [rbp-220h]
  __int64 *m128i_i64; // [rsp+30h] [rbp-218h]
  int v221; // [rsp+38h] [rbp-210h]
  __int64 v222; // [rsp+38h] [rbp-210h]
  char *v223; // [rsp+40h] [rbp-208h]
  __int64 v224; // [rsp+40h] [rbp-208h]
  __int64 v225; // [rsp+48h] [rbp-200h]
  char *v226; // [rsp+48h] [rbp-200h]
  unsigned int v227; // [rsp+50h] [rbp-1F8h]
  __int64 v228; // [rsp+50h] [rbp-1F8h]
  char v229; // [rsp+67h] [rbp-1E1h] BYREF
  const __m128i *v230; // [rsp+68h] [rbp-1E0h] BYREF
  char **v231; // [rsp+70h] [rbp-1D8h] BYREF
  __int128 v232; // [rsp+78h] [rbp-1D0h]
  __int64 v233; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v234; // [rsp+98h] [rbp-1B0h]
  _QWORD v235[5]; // [rsp+B0h] [rbp-198h] BYREF
  char v236; // [rsp+D8h] [rbp-170h]
  __int64 v237; // [rsp+E0h] [rbp-168h]
  __int64 (__fastcall **v238)(); // [rsp+F0h] [rbp-158h] BYREF
  __int64 v239; // [rsp+F8h] [rbp-150h]
  __int64 v240; // [rsp+100h] [rbp-148h]
  char *v241; // [rsp+108h] [rbp-140h]
  __int64 v242; // [rsp+110h] [rbp-138h]
  char v243; // [rsp+118h] [rbp-130h]
  __int64 *v244; // [rsp+120h] [rbp-128h]
  __int64 v245; // [rsp+128h] [rbp-120h] BYREF
  __int64 v246; // [rsp+130h] [rbp-118h]
  __int64 v247; // [rsp+138h] [rbp-110h]
  __int128 v248; // [rsp+140h] [rbp-108h]
  __int64 *v249; // [rsp+150h] [rbp-F8h]
  int v250; // [rsp+158h] [rbp-F0h]
  __int16 v251; // [rsp+15Ch] [rbp-ECh]
  __int64 (__fastcall **v252)(); // [rsp+160h] [rbp-E8h] BYREF
  __int64 v253; // [rsp+168h] [rbp-E0h]
  __int64 v254; // [rsp+170h] [rbp-D8h] BYREF
  __int128 v255; // [rsp+178h] [rbp-D0h]
  __int64 v256; // [rsp+188h] [rbp-C0h]
  char v257; // [rsp+190h] [rbp-B8h]
  __int64 v258; // [rsp+198h] [rbp-B0h]
  __int64 *v259; // [rsp+1A0h] [rbp-A8h]
  char *v260; // [rsp+1A8h] [rbp-A0h]
  __int64 v261; // [rsp+1B0h] [rbp-98h]
  __int64 v262; // [rsp+1B8h] [rbp-90h]
  __int128 v263; // [rsp+1C0h] [rbp-88h]
  __int64 *v264; // [rsp+1D0h] [rbp-78h]
  __m128i v265; // [rsp+1E0h] [rbp-68h] BYREF
  __m128i v266; // [rsp+1F0h] [rbp-58h] BYREF
  unsigned __int64 v267; // [rsp+208h] [rbp-40h]

  v6 = a1->m128i_i32[0];
  v267 = __readfsqword(0x28u);
  v7 = a1;
  if ( (v6 & 0x40000) != 0 )
  {
    v8 = *(_DWORD *)(a1[49].m128i_i64[0] + 48);
    if ( (v8 & 1) != 0 )
    {
      if ( !under_debugger )
        sub_383060(50346);
      goto LABEL_304;
    }
    if ( (v8 & 2) != 0 )
    {
      if ( !under_debugger )
        sub_383060(50347);
      goto LABEL_304;
    }
  }
  else
  {
    sub_21F320(a1[59].m128i_i64[0]);
    sub_1F0E90(a1);
    v7 = a1;
    v6 = a1->m128i_i32[0];
  }
  v9 = v7[27].m128i_i64[1];
  v10 = _mm_loadu_si128(v7 + 47);
  v11 = v7 + 53;
  v7->m128i_i32[0] = v6 | 0x210000;
  v12 = v7[46].m128i_u64[0];
  v7[49].m128i_i32[2] = v9;
  v265 = v10;
  v169 = (__int64 *)v7;
  v266 = _mm_loadu_si128(v7 + 48);
  v210 = v12;
  sub_316CB0(&v7[53], &v7[14].m128i_u64[1]);
  v13 = (__int64 (__fastcall **)())sub_18D270(v169, 0);
  v253 = v14;
  v252 = v13;
  sub_316BB0(v11, &v252);
  v15 = v169[21];
  v16 = v169[16] - v15;
  v17 = (__int64 (__fastcall **)())(*(_QWORD *)(*(_QWORD *)(v169[187] + 24) + 16LL) & (v169[180] + v15));
  v253 = v16;
  v252 = v17;
  sub_316BB0(v11, &v252);
  v18 = v169;
  v252 = nullptr;
  v253 = 0;
  v19 = v169[16];
  v20 = v169[71];
  v254 = 0;
  v255 = 0;
  if ( v20 + v19 - 1 >= v20 )
  {
    v254 = qvector_reserve((__int64)&v254, 0, 1, 16);
    v18 = v169;
    *(__m128i *)(v254 + 16 * v255) = _mm_unpacklo_epi64((__m128i)v20, (__m128i)(unsigned __int64)v19);
    *(_QWORD *)&v255 = v255 + 1;
  }
  v21 = v18 + 104;
  v170 = v18;
  sub_64700(v18 + 104, (__int64 *)&v252);
  sub_3180C0(v11, &v254);
  v22 = (__m128i *)v170;
  if ( v254 )
  {
    *(_QWORD *)&v255 = 0;
    qfree(v254);
    v22 = (__m128i *)v170;
  }
  v171 = v22;
  qfree((__int64)v252);
  v23 = v171;
  v24 = v171[7].m128i_i32[1];
  if ( v24 )
  {
    v107 = v24;
    v108 = *(_QWORD *)(*(_QWORD *)(v171[93].m128i_i64[1] + 24) + 16LL) & (v171[8].m128i_i64[1] + v171[90].m128i_i64[0]);
    v255 = 0;
    v252 = nullptr;
    v253 = 0;
    v254 = 0;
    if ( v24 + v108 - 1 >= v108 )
    {
      v254 = qvector_reserve((__int64)&v254, 0, 1, 16);
      v23 = v171;
      v156 = (unsigned __int64 *)(16 * v255 + v254);
      *v156 = v108;
      v156[1] = v107;
      *(_QWORD *)&v255 = v255 + 1;
    }
    v194 = v23;
    sub_64280(v21, (__int64 *)&v252);
    sub_316CB0(v11, &v254);
    v109 = v194;
    if ( v254 )
    {
      *(_QWORD *)&v255 = 0;
      qfree(v254);
      v109 = v194;
    }
    v195 = v109;
    qfree((__int64)v252);
    v23 = v195;
  }
  v25 = 0;
  v231 = nullptr;
  m128i_i64 = v23[27].m128i_i64;
  v232 = 0;
  while ( 2 )
  {
    v23->m128i_i32[0] &= 0xF7FDFFFF;
    v26 = v23[46].m128i_u64[0];
    if ( v210 != v26 )
    {
      v252 = nullptr;
      a5 = 0.0;
      LODWORD(v253) = 0;
      v254 = 0;
      v255 = 0;
      if ( v210 < v26 )
      {
        v103 = v210;
        v104 = v23;
        do
        {
          v105 = v104[45].m128i_i64[1] + 40 * v103;
          v106 = *(_QWORD *)(v105 + 16);
          if ( v106 )
          {
            *(_QWORD *)(v105 + 24) = 0;
            qfree(v106);
          }
          ++v103;
        }
        while ( v103 < v26 );
        v23 = v104;
        goto LABEL_19;
      }
      v27 = v23[45].m128i_u64[1];
      v28 = (__int64)&v23[45].m128i_i64[1];
      v29 = v23[46].m128i_u64[1];
      if ( (unsigned __int64)&v252 >= v27 && (unsigned __int64)&v252 < v27 + 40 * v29 )
      {
        if ( v29 < v210 )
        {
          v201 = v23;
          v125 = qvector_reserve(v28, v27, v210, 40);
          v23 = v201;
          v201[45].m128i_i64[1] = v125;
          v26 = v201[46].m128i_u64[0];
        }
        if ( v26 < v210 )
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
          while ( v210 != v26 );
        }
        goto LABEL_19;
      }
      if ( v29 < v210 )
      {
        v196 = v23;
        v110 = qvector_reserve(v28, v27, v210, 40);
        v23 = v196;
        v51 = v210;
        v26 = v196[46].m128i_u64[0];
        v196[45].m128i_i64[1] = v110;
        if ( v26 < v210 )
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
        v51 = v210;
        if ( v26 < v210 )
          goto LABEL_44;
      }
LABEL_19:
      v23[46].m128i_i64[0] = v210;
    }
    v172 = v23;
    v23[47] = _mm_load_si128(&v265);
    v32 = _mm_load_si128(&v266);
    v23[48] = v32;
    sub_138440(v23);
    v33 = v172[49].m128i_i64[0];
    v34 = *(_DWORD *)(v33 + 48) & 1;
    v35 = sub_110340(v33, 0);
    v36 = v35;
    if ( !v35 )
    {
      if ( !under_debugger )
        sub_383060(50446);
      goto LABEL_304;
    }
    ++*(_DWORD *)(v35 + 24);
    v37 = sub_1108E0(v172[49].m128i_i64[0], 0);
    v38 = (char *)v37;
    if ( !v37 )
    {
      if ( !under_debugger )
        sub_383060(50446);
      goto LABEL_304;
    }
    ++*(_DWORD *)(v37 + 24);
    v39 = (char *)v36;
    nullsub_40();
    v40 = (__int64)v172;
    v221 = *(_DWORD *)(v172[49].m128i_i64[0] + 52);
    if ( v34 )
    {
      v39 = v38;
      nullsub_39();
      v40 = (__int64)v172;
    }
    v253 = 0;
    v254 = 0;
    v257 = 0;
    v252 = (__int64 (__fastcall **)())&off_4DEE30;
    v256 = -4294967238LL;
    v258 = v40;
    v259 = m128i_i64;
    v173 = v40;
    v260 = v38;
    v261 = v36;
    v262 = 0;
    v264 = (__int64 *)&v231;
    v255 = 0;
    v263 = 0;
    v41 = sub_207F40(&v252, v39);
    v42 = v173;
    v43 = v41;
    if ( v41 < 0 && (v41 != -20 || (*(_BYTE *)(*(_QWORD *)(v173 + 1496) + 604LL) & 0x10) == 0) )
      goto LABEL_57;
    if ( !v25 )
    {
      memset(&v235[1], 0, 32);
      v236 = 0;
      v235[0] = &off_4DEBE0;
      v237 = 0;
      sub_11FBB0(v173, (__int64)v235);
      v42 = v173;
      v97 = *((_QWORD *)v38 + 1);
      v98 = v237 + *(int *)(v173 + 792);
      if ( v97 )
      {
        v99 = (_QWORD *)(*(_QWORD *)v38 + 8LL);
        v100 = *(_QWORD *)v38 + 24 * v97 + 8;
        do
        {
          v25 += *v99;
          v99 += 3;
        }
        while ( (_QWORD *)v100 != v99 );
        v98 += v25;
      }
      v25 = 16 * v98;
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
        v216 = v42;
        v193 = (__int64 *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
        sub_1ECDF0(v56);
        v54 = (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
        v42 = v216;
        v57 = *(__int64 **)((v46 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( (*(_BYTE *)v57 & 2) != 0 )
        {
          v55 = *v193;
          if ( (*v193 & 2) != 0 )
          {
LABEL_51:
            if ( v46 > 3 )
            {
LABEL_52:
              v180 = v42;
              qfree((__int64)v54);
              v45 = *v44;
              v42 = v180;
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
      v213 = v42;
      v179 = v54;
      sub_1ECDF0(v57);
      v54 = v179;
      v42 = v213;
      v55 = *v179;
      if ( (*v179 & 2) != 0 )
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
        sub_1ED520(*(_QWORD **)(v47 + 24));
        v49 = (void *)v47;
        v47 = *(_QWORD *)(v47 + 16);
        operator delete(v49, 0x28u);
      }
      while ( v47 );
      v42 = v48;
    }
    v174 = v42;
    *(_QWORD *)(v42 + 968) = 0;
    *(_QWORD *)(v42 + 976) = v42 + 960;
    *(_QWORD *)(v42 + 984) = v42 + 960;
    *(_QWORD *)(v42 + 992) = 0;
    sub_1F6040(v42);
    sub_2139A0(v174);
    v42 = v174;
    if ( (*(_DWORD *)v174 & 0x40) != 0 && (*(_DWORD *)v174 & 1) != 0 )
    {
      v102 = *(_QWORD *)(v174 + 1504);
      v239 = 0;
      v240 = v174;
      v238 = off_4DEE08;
      v241 = v38;
      v242 = v36;
      v243 = 0;
      sub_104E40(v38, v102, &v238, 8);
      v42 = v174;
      if ( v243 )
        goto LABEL_37;
    }
    v39 = *(char **)(v42 + 1504);
    v175 = v42;
    v50 = sub_104E40(v38, (__int64)v39, &v252, 8);
    v42 = v175;
    v43 = v50;
    if ( v50 == -36 )
      goto LABEL_37;
    if ( v50 < 0 )
      goto LABEL_57;
    if ( v257 )
      goto LABEL_37;
    if ( v50 )
    {
      if ( !under_debugger )
        sub_383060(50350);
      goto LABEL_304;
    }
    sub_1F8780((__int64)&v233, v175);
    v42 = v175;
    v240 = 0;
    v67 = *(_DWORD *)(v175 + 64);
    v241 = nullptr;
    v238 = off_4DEDB8;
    v242 = 0;
    v243 = 0;
    v244 = m128i_i64;
    v245 = 0;
    v246 = 0;
    v247 = 0;
    v249 = &v233;
    v250 = -1;
    v251 = 0;
    v239 = v175;
    v248 = 0;
    if ( v67 <= 0 )
      goto LABEL_198;
    v68 = 0;
    do
    {
      v186 = v42;
      *(_QWORD *)(v42 + 808) = &v245;
      v39 = *(char **)(*(_QWORD *)(v42 + 528) + 8 * v68);
      v69 = sub_1FCF80(&v238, v39);
      v42 = v186;
      v227 = v69;
      *(_QWORD *)(v186 + 808) = 0;
      if ( v69 < 0 )
      {
        if ( v69 == -36 )
          goto LABEL_169;
        goto LABEL_98;
      }
      v214 = v245;
      if ( !v245 )
        goto LABEL_91;
      if ( !v246 )
        goto LABEL_91;
      v70 = *(__m128i **)(v186 + 800);
      v71 = *(_QWORD **)(v245 + 8);
      if ( v71 == (_QWORD *)v245 )
        goto LABEL_91;
      do
      {
LABEL_83:
        v72 = (unsigned __int64 *)v70->m128i_i64[0];
        v230 = (const __m128i *)(v71 + 3);
        if ( !v72 )
        {
          v192 = v42;
          v101 = qalloc();
          a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v101, (__m128i)(unsigned __int64)v101);
          if ( !v101 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          v42 = v192;
          *(_OWORD *)(v101 + 16) = 0;
          *(_OWORD *)(v101 + 32) = 0;
          *(_OWORD *)(v101 + 48) = 0;
          *(_QWORD *)v101 = v101 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v101 + 64) = 0;
          *(__m128 *)(v101 + 8) = a3;
          v70->m128i_i64[0] = v101;
          *(_QWORD *)v101 = v101 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v101 & 3LL;
          v32 = _mm_unpacklo_epi64((__m128i)v70->m128i_u64[0], (__m128i)v70->m128i_u64[0]);
          *(__m128i *)(v70->m128i_i64[0] + 8) = v32;
          *(_QWORD *)v70->m128i_i64[0] &= ~1uLL;
          *(_QWORD *)v70->m128i_i64[0] |= 2uLL;
          v72 = (unsigned __int64 *)v70->m128i_i64[0];
LABEL_85:
          v187 = v42;
          sub_1F76A0(v70, v72, 1, &v230);
LABEL_86:
          v42 = v187;
          goto LABEL_87;
        }
        if ( !v70->m128i_i64[1] )
          goto LABEL_85;
        v88 = *v72 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v88 & 2) != 0 )
        {
          v93 = 1;
LABEL_136:
          v187 = v42;
          sub_1F76A0(v70, v72, v93, &v230);
          goto LABEL_86;
        }
        v89 = v71[3];
        v90 = 1;
        while ( 1 )
        {
          v91 = *(_QWORD *)(v88 + 24);
          if ( v89 < v91 )
          {
            v92 = *(_BYTE **)(v88 + 8);
            v90 = 1;
            if ( (*v92 & 2) != 0 )
              goto LABEL_126;
            goto LABEL_144;
          }
          if ( v91 >= v89 )
            break;
          v92 = *(_BYTE **)(v88 + 16);
          v90 = 0;
          if ( (*v92 & 2) != 0 )
            goto LABEL_126;
LABEL_144:
          v88 = (unsigned __int64)v92;
        }
        if ( !v88 )
        {
LABEL_126:
          v93 = v90;
          v72 = (unsigned __int64 *)v88;
          goto LABEL_136;
        }
LABEL_87:
        if ( (*v71 & 2) != 0 )
        {
LABEL_90:
          if ( (_QWORD *)v214 == v71 )
            break;
          goto LABEL_83;
        }
        v73 = (_QWORD *)v71[2];
        if ( (*(_BYTE *)v73 & 2) == 0 )
        {
          do
          {
            v71 = v73;
            v73 = (_QWORD *)v73[1];
          }
          while ( (*(_BYTE *)v73 & 2) == 0 );
          goto LABEL_90;
        }
        v94 = (_QWORD *)(*v71 & 0xFFFFFFFFFFFFFFFCLL);
        v95 = *v94;
        if ( (*v94 & 2) == 0 )
        {
          while ( (_QWORD *)v94[2] == v71 )
          {
            v71 = v94;
            v96 = v95 & 0xFFFFFFFFFFFFFFFCLL;
            v95 = *(_QWORD *)(v95 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v95 & 2) != 0 )
            {
              v71 = (_QWORD *)v96;
              if ( v214 != v96 )
                goto LABEL_83;
              goto LABEL_91;
            }
            v94 = (_QWORD *)v96;
          }
        }
        v71 = v94;
      }
      while ( (_QWORD *)v214 != v94 );
LABEL_91:
      ++v68;
    }
    while ( *(_DWORD *)(v42 + 64) > (int)v68 );
    if ( v227 )
      break;
LABEL_198:
    if ( (*(_DWORD *)v42 & 0x8000000) != 0 )
    {
LABEL_169:
      v238 = off_4DEDB8;
      if ( v247 )
      {
        v197 = v42;
        *(_QWORD *)&v248 = 0;
        qfree(v247);
        v42 = v197;
      }
      v111 = v245;
      if ( !v245 )
        goto LABEL_176;
      v112 = *(_QWORD *)v245;
      if ( v246 )
      {
        v139 = (__int64 *)(v112 & 0xFFFFFFFFFFFFFFFCLL);
        v140 = *(_QWORD *)(v112 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v140 & 2) == 0 )
        {
          v141 = (__int64 *)v139[1];
          if ( (*(_BYTE *)v141 & 2) != 0 )
          {
            v142 = (__int64 *)v139[2];
            if ( (*(_BYTE *)v142 & 2) == 0 )
            {
LABEL_224:
              v204 = v42;
              sub_1ECDF0(v142);
              v42 = v204;
              goto LABEL_225;
            }
          }
          else
          {
            v203 = v42;
            sub_1ECDF0(v141);
            v142 = (__int64 *)v139[2];
            v42 = v203;
            if ( (*(_BYTE *)v142 & 2) == 0 )
              goto LABEL_224;
LABEL_225:
            v140 = *v139;
            if ( (*v139 & 2) != 0 )
            {
LABEL_226:
              if ( v112 <= 3 )
              {
                v111 = v245;
              }
              else
              {
                v205 = v42;
                qfree(v112 & 0xFFFFFFFFFFFFFFFCLL);
                v111 = v245;
                v42 = v205;
              }
              v112 = *(_QWORD *)v245;
              goto LABEL_229;
            }
          }
          *v139 = v140 | 2;
          goto LABEL_226;
        }
LABEL_229:
        *(_QWORD *)v111 = v112 & 3 | v111 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(v245 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v245, (__m128i)(unsigned __int64)v245);
        *(_QWORD *)v245 &= ~1uLL;
        *(_QWORD *)v245 |= 2uLL;
        v246 = 0;
        goto LABEL_174;
      }
      *(_QWORD *)v245 = *(_QWORD *)v245 & 3LL | v245 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v245 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v245, (__m128i)(unsigned __int64)v245);
      *(_QWORD *)v245 &= ~1uLL;
      *(_QWORD *)v245 |= 2uLL;
LABEL_174:
      if ( v245 )
      {
        v198 = v42;
        qfree(v245);
        v42 = v198;
      }
LABEL_176:
      v113 = v233;
      if ( v233 )
      {
        if ( v234 )
        {
          v222 = v25;
          v224 = v36;
          v226 = v38;
          v217 = 0;
          v219 = v234;
          v228 = v42;
          do
          {
            v114 = (__int64 *)(v113 + 80 * v217);
            v115 = v114[7];
            if ( v115 )
            {
              if ( v114[8] )
              {
                v199 = v114[8];
                v116 = 0;
                do
                {
                  v117 = (__int64 *)(v115 + 96 * v116);
                  v118 = v117[5];
                  if ( v118 )
                  {
                    v119 = v117[6];
                    if ( v119 )
                    {
                      for ( i = 0; i != v119; ++i )
                      {
                        v121 = (__int64 *)(v118 + 40 * i);
                        v122 = v121[2];
                        if ( v122 )
                        {
                          v121[3] = 0;
                          qfree(v122);
                        }
                        qfree(*v121);
                        v118 = v117[5];
                      }
                    }
                    v117[6] = 0;
                    qfree(v118);
                  }
                  v123 = v117[2];
                  if ( v123 )
                  {
                    v117[3] = 0;
                    qfree(v123);
                  }
                  ++v116;
                  qfree(*v117);
                  v115 = v114[7];
                }
                while ( v199 != v116 );
              }
              v114[8] = 0;
              qfree(v115);
            }
            v124 = v114[4];
            if ( v124 )
            {
              v114[5] = 0;
              qfree(v124);
            }
            qfree(v114[2]);
            ++v217;
            v113 = v233;
          }
          while ( v219 != v217 );
          v25 = v222;
          v36 = v224;
          v38 = v226;
          v42 = v228;
        }
        v200 = v42;
        v234 = 0;
        qfree(v113);
        v42 = v200;
      }
LABEL_37:
      v252 = (__int64 (__fastcall **)())&off_4DEE30;
      if ( v262 )
      {
        v176 = v42;
        *(_QWORD *)&v263 = 0;
        qfree(v262);
        v42 = v176;
      }
      if ( v254 )
      {
        v177 = v42;
        *(_QWORD *)&v255 = 0;
        qfree(v254);
        v42 = v177;
      }
      v178 = (__m128i *)v42;
      sub_104E10((__int64)v38);
      sub_104E10(v36);
      v23 = v178;
      continue;
    }
    break;
  }
  v39 = &v229;
  v188 = v42;
  v227 = sub_23DE60(v42, &v229);
  v42 = v188;
  if ( v227 == -36 )
    goto LABEL_169;
  if ( v227 )
  {
    if ( !v229 )
      goto LABEL_98;
  }
  else
  {
    if ( (*(_BYTE *)(v188 + 3) & 8) != 0 )
      goto LABEL_169;
    if ( !v229 )
    {
LABEL_97:
      v227 = 0;
      goto LABEL_98;
    }
  }
  v39 = *(char **)(v188 + 800);
  v126 = sub_1C8D70(v188, (__int64)v39);
  v227 = v126;
  v42 = v188;
  if ( v126 == -36 )
    goto LABEL_169;
  if ( !v126 )
  {
    if ( (*(_BYTE *)(v188 + 3) & 8) != 0 )
      goto LABEL_169;
    goto LABEL_97;
  }
LABEL_98:
  v189 = v42;
  sub_1F1380(&v238);
  v74 = v233;
  v42 = v189;
  if ( v233 )
  {
    v75 = v234;
    if ( v234 )
    {
      v218 = v36;
      v76 = 0;
      v223 = v38;
      v225 = v189;
      do
      {
        v77 = (__int64 *)(v74 + 80 * v76);
        v78 = v77[7];
        if ( v78 )
        {
          if ( v77[8] )
          {
            v211 = v75;
            v79 = 0;
            v215 = v76;
            v190 = v77[8];
            do
            {
              v80 = (__int64 *)(v78 + 96 * v79);
              v81 = v80[5];
              if ( v81 )
              {
                v82 = v80[6];
                if ( v82 )
                {
                  for ( j = 0; j != v82; ++j )
                  {
                    v84 = (__int64 *)(v81 + 40 * j);
                    v85 = v84[2];
                    if ( v85 )
                    {
                      v84[3] = 0;
                      qfree(v85);
                    }
                    qfree(*v84);
                    v81 = v80[5];
                  }
                }
                v80[6] = 0;
                qfree(v81);
              }
              v86 = v80[2];
              if ( v86 )
              {
                v80[3] = 0;
                qfree(v86);
              }
              ++v79;
              qfree(*v80);
              v78 = v77[7];
            }
            while ( v190 != v79 );
            v75 = v211;
            v76 = v215;
          }
          v77[8] = 0;
          qfree(v78);
        }
        v87 = v77[4];
        if ( v87 )
        {
          v77[5] = 0;
          qfree(v87);
        }
        ++v76;
        qfree(v77[2]);
        v74 = v233;
      }
      while ( v75 != v76 );
      v36 = v218;
      v38 = v223;
      v42 = v225;
    }
    v191 = v42;
    v234 = 0;
    qfree(v74);
    v42 = v191;
  }
  v43 = v227;
LABEL_57:
  v252 = (__int64 (__fastcall **)())&off_4DEE30;
  if ( v262 )
  {
    v181 = v42;
    *(_QWORD *)&v263 = 0;
    qfree(v262);
    v42 = v181;
  }
  if ( v254 )
  {
    v182 = v42;
    *(_QWORD *)&v255 = 0;
    qfree(v254);
    v42 = v182;
  }
  v183 = (__m128i *)v42;
  sub_104E10((__int64)v38);
  sub_104E10(v36);
  v60 = v231;
  v61 = v183;
  v62 = &v231[v232];
  if ( v62 != v231 )
  {
    do
    {
      v39 = *v60;
      v184 = v61;
      sub_3311F0((_DWORD)v61, (unsigned int)*v60++, 57, v58, (_DWORD)v61, v59);
      v61 = v184;
    }
    while ( v62 != v60 );
  }
  if ( v43 )
    goto LABEL_73;
  v63 = v61->m128i_u32[0];
  if ( (v63 & 0x40000) == 0 )
    goto LABEL_65;
  v127 = (_QWORD *)v61[50].m128i_i64[0];
  v128 = (_QWORD *)*v127;
  if ( !*v127 || !v127[1] || (v129 = (_QWORD *)v128[1], v128 == v129) )
  {
LABEL_218:
    v137 = v61[49].m128i_i32[2];
    v138 = v61[49].m128i_i32[2];
    if ( v137 < v61[27].m128i_i64[1] )
    {
      do
      {
        ++v138;
        *(_DWORD *)(v61[27].m128i_i64[0] + 104 * v137 + 24) &= ~0x1000u;
        v137 = v138;
      }
      while ( (unsigned __int64)v138 < v61[27].m128i_i64[1] );
      goto LABEL_70;
    }
    if ( (v63 & 0x10000) == 0 )
      goto LABEL_280;
    goto LABEL_253;
  }
  while ( 2 )
  {
    v130 = (char *)v129[3];
    v131 = *v130;
    if ( *v130 == 9 )
    {
      if ( !under_debugger )
        sub_383060(52925);
      goto LABEL_304;
    }
    if ( v131 != 15 )
    {
      if ( v131 != 5 )
        goto LABEL_211;
LABEL_230:
      v143 = *((_QWORD *)v130 + 1);
      if ( v143 )
      {
        v206 = v61;
        j__qfree(v143);
        goto LABEL_232;
      }
      goto LABEL_211;
    }
    v146 = *((unsigned int *)v130 + 1);
    v207 = v61;
    v147 = sub_11CA80(v146);
    v61 = v207;
    if ( v147 )
      goto LABEL_247;
    if ( !v129[5] )
    {
      v148 = v129[4];
      v63 = *((unsigned int *)v130 + 1);
      v149 = *((int *)v129 + 12);
      if ( *(_QWORD *)(v148 + 440) < v149 )
        sub_1ECB80(v146);
      v39 = *(char **)(v148 + 432);
      if ( (_DWORD)v63 == *(_DWORD *)&v39[104 * v149 + 88] )
        goto LABEL_247;
    }
    v63 = v207[87].m128i_u64[0];
    v39 = (char *)v129[8];
    if ( !v63 )
      goto LABEL_246;
    v150 = *(_QWORD *)v63 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v150 )
      goto LABEL_247;
    if ( (*(_BYTE *)(*(_QWORD *)v63 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_246;
    v166 = *((_QWORD *)v39 + 3);
    while ( 2 )
    {
      v167 = *(_QWORD *)(v150 + 24);
      if ( v166 < v167 )
      {
        v150 = *(_QWORD *)(v150 + 8);
        goto LABEL_272;
      }
      if ( v167 < v166 )
      {
        v150 = *(_QWORD *)(v150 + 16);
LABEL_272:
        if ( (*(_BYTE *)v150 & 2) != 0 )
          goto LABEL_246;
        continue;
      }
      break;
    }
    if ( v63 == v150 )
    {
LABEL_246:
      v151 = *((_QWORD *)v130 + 1);
      v238 = (__int64 (__fastcall **)())(v39 + 24);
      v152 = (char *)(v151 + 48);
      sub_C7FB0(v207 + 87, (unsigned __int64 *)v39 + 3, &v238);
      v39 = v152;
      copy_tinfo_t();
      v61 = v207;
    }
LABEL_247:
    if ( *v130 == 5 )
      goto LABEL_230;
    if ( *v130 == 15 )
    {
      v153 = *((_QWORD *)v130 + 1);
      if ( v153 )
      {
        v208 = v61;
        clear_tinfo_t();
        v154 = *(_QWORD *)(v153 + 24);
        v155 = v208;
        if ( v154 )
        {
          *(_QWORD *)(v153 + 32) = 0;
          qfree(v154);
          v155 = v208;
        }
        v206 = v155;
        cleanup_argloc();
        qfree(v153);
LABEL_232:
        v61 = v206;
      }
    }
LABEL_211:
    v132 = v129[5];
    v133 = *((_DWORD *)v129 + 12);
    *v130 = 9;
    v212 = v61;
    v202 = v132;
    v134 = j__qalloc_or_throw(24, (__int64)v39, v132, v63);
    v61 = v212;
    *(_DWORD *)(v134 + 16) = v133;
    *(_QWORD *)v134 = v212;
    *(_QWORD *)(v134 + 8) = v202;
    *((_QWORD *)v130 + 1) = v134;
    if ( (*v129 & 2) == 0 )
    {
      v135 = (_QWORD *)v129[2];
      if ( (*(_BYTE *)v135 & 2) != 0 )
      {
        v144 = (_QWORD *)(*v129 & 0xFFFFFFFFFFFFFFFCLL);
        v145 = *v144;
        if ( (*v144 & 2) == 0 )
        {
          while ( (_QWORD *)v144[2] == v129 )
          {
            v129 = v144;
            v63 = v145 & 0xFFFFFFFFFFFFFFFCLL;
            v145 = *(_QWORD *)(v145 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v145 & 2) != 0 )
            {
              v129 = (_QWORD *)v63;
              goto LABEL_216;
            }
            v144 = (_QWORD *)v63;
          }
        }
        v129 = v144;
      }
      else
      {
        for ( k = (_QWORD *)v135[1]; (*(_BYTE *)k & 2) == 0; k = (_QWORD *)k[1] )
          v135 = k;
        v129 = v135;
      }
    }
LABEL_216:
    if ( v128 != v129 )
      continue;
    break;
  }
  LODWORD(v63) = v212->m128i_i32[0];
  if ( (v212->m128i_i32[0] & 0x40000) != 0 )
    goto LABEL_218;
LABEL_65:
  v185 = v61;
  *(double *)v32.m128i_i64 = sub_219BD0(v61);
  if ( (unsigned __int8)sub_CE6F0((__int64)v185, (char **)v39, v32, *(double *)a3.m128_u64, (__m128i)0LL, a5, v64, v65) )
    v185->m128i_i32[0] &= ~0x10000u;
  if ( (int)sub_1C8C30((__int64)v185) > 0 )
    v185->m128i_i32[0] &= ~0x10000u;
  sub_1F5AE0(m128i_i64, v185[49].m128i_i32[2]);
  sub_2139A0(v185);
  v61 = v185;
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
      sub_383060(50352);
LABEL_304:
    BUG();
  }
LABEL_253:
  v209 = (unsigned int *)v61;
  v157 = sub_110340(v61[49].m128i_i64[0], 0);
  v158 = (_QWORD *)v157;
  if ( !v157 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    goto LABEL_304;
  }
  ++*(_DWORD *)(v157 + 24);
  v159 = sub_1108E0(*((_QWORD *)v209 + 98), 0);
  v160 = (_QWORD *)v159;
  if ( !v159 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    goto LABEL_304;
  }
  ++*(_DWORD *)(v159 + 24);
  v161 = *v209 & 0x40000;
  if ( v221 == *(_DWORD *)(*((_QWORD *)v209 + 98) + 52LL) )
  {
    v162 = *((_QWORD *)v209 + 55);
    if ( v162 )
    {
      v163 = 0;
      v164 = 0;
      while ( (*(_BYTE *)(*((_QWORD *)v209 + 54) + 104 * v164 + 25) & 4) == 0 )
      {
        v164 = ++v163;
        if ( v163 >= v162 )
          goto LABEL_266;
      }
      *((_BYTE *)v209 + 754) |= 0x10u;
    }
LABEL_266:
    if ( v161 )
    {
      if ( !(unsigned __int8)sub_1EEA60((unsigned __int8 *)v209) )
      {
LABEL_268:
        sub_66FA0(v165, 0, (__int64)"after prealloc_lvars");
        goto LABEL_258;
      }
      v252 = off_4DEC80;
      v168 = *(_QWORD *)(v165 + 1504);
      v209 = (unsigned int *)v165;
      v253 = 0;
      v254 = (__int64)m128i_i64;
      sub_104E40(v160, v168, &v252, 4);
      sub_104E40(v158, *((_QWORD *)v209 + 188), &v252, 4);
    }
    else
    {
      sub_105060(v160);
      sub_105060(v158);
    }
    v165 = (__int64)v209;
    goto LABEL_268;
  }
  if ( v161 )
  {
    if ( !under_debugger )
      sub_383060(50989);
    goto LABEL_304;
  }
  v43 = 1;
LABEL_258:
  sub_104E10((__int64)v160);
  sub_104E10((__int64)v158);
LABEL_73:
  if ( v231 )
  {
    *(_QWORD *)&v232 = 0;
    qfree((__int64)v231);
  }
  return v43;
}
