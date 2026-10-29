const __m128i *__fastcall sub_AE6D60(__int64 a1, unsigned int *a2)
{
  const __m128i *result; // rax
  __int64 v3; // r15
  __m128i v4; // xmm6
  void *v5; // rax
  __m128i v6; // xmm7
  __m128i v7; // xmm5
  __int64 v8; // rax
  void *v9; // rdx
  __m128i v10; // xmm4
  __m128i v11; // xmm3
  __m128i v12; // xmm6
  char *v13; // rdx
  __m128i *v14; // rdi
  bool v15; // zf
  __m128i v16; // xmm3
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i si128; // xmm2
  __m128i v20; // xmm1
  char v21; // al
  __m128i v22; // xmm5
  __m128i v23; // xmm6
  __m128i v24; // xmm7
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i *v28; // r13
  void *v29; // rax
  __m128i v30; // xmm7
  __m128i v31; // xmm5
  __m128i v32; // xmm4
  __int64 v33; // rax
  __m128i v34; // xmm3
  __m128i v35; // xmm6
  __m128i v36; // xmm7
  __m128i v37; // xmm0
  char *v38; // rdx
  void *v39; // rax
  char *v40; // rbp
  size_t v41; // r9
  __int64 v42; // rbx
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rdi
  void (__fastcall *v50)(__int64, __int64, __int64); // rax
  __int64 v51; // rax
  const __m128i *v52; // r14
  __m128i v53; // xmm7
  __m128i v54; // xmm5
  __int64 *v55; // rax
  __m128i v56; // xmm6
  __int64 v57; // rax
  void *v58; // rdx
  __m128i v59; // xmm7
  __m128i v60; // xmm6
  __m128i v61; // xmm4
  char *v62; // rdx
  __m128i v63; // xmm5
  __int64 v64; // rax
  __m128i v65; // xmm2
  __m128i v66; // xmm1
  __m128i v67; // xmm0
  __int8 v68; // al
  __m128i v69; // xmm6
  __m128i v70; // xmm7
  __m128i v71; // xmm3
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __m128i *v75; // r15
  __int64 *v76; // rax
  __m128i v77; // xmm3
  __m128i v78; // xmm5
  __m128i v79; // xmm7
  __int64 v80; // rax
  __m128i v81; // xmm6
  __m128i v82; // xmm4
  __m128i v83; // xmm3
  __m128i v84; // xmm0
  char *v85; // rdx
  void *v86; // rax
  char *v87; // rbp
  size_t v88; // r9
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rdi
  __int64 v95; // rdi
  void (__fastcall *v96)(__int64, __int64, __int64); // rax
  __int64 v97; // rax
  const __m128i *v98; // r13
  __int64 v99; // r14
  __m128i v100; // xmm7
  __m128i v101; // xmm6
  __int64 *v102; // rax
  __m128i v103; // xmm4
  __int64 v104; // rax
  void *v105; // rdx
  __m128i v106; // xmm3
  __m128i v107; // xmm1
  __m128i v108; // xmm2
  char *v109; // rdx
  __m128i v110; // xmm4
  __int64 v111; // rax
  __m128i v112; // xmm2
  __m128i v113; // xmm1
  __m128i v114; // xmm0
  size_t v115; // rax
  __int8 v116; // al
  __m128i v117; // xmm4
  __m128i v118; // xmm3
  __m128i v119; // xmm6
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  __m128i *v123; // r15
  __int64 *v124; // rax
  __m128i v125; // xmm7
  __m128i v126; // xmm6
  __m128i v127; // xmm4
  __int64 v128; // rax
  __m128i v129; // xmm3
  __m128i v130; // xmm1
  __m128i v131; // xmm2
  __m128i v132; // xmm0
  char *v133; // rdx
  void *v134; // rax
  __int64 v135; // rbp
  char *v136; // r12
  size_t v137; // r9
  __int64 v138; // rbx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // r15
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rdi
  __int64 v147; // rdi
  void (__fastcall *v148)(__int64, __int64, __int64); // rax
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rbx
  char *v152; // r12
  const __m128i *v153; // rbp
  __int64 v154; // rdx
  __m128i v155; // xmm7
  __int128 v156; // xmm5
  __int128 v157; // xmm4
  __int128 v158; // xmm3
  __int64 v159; // [rsp+0h] [rbp-568h]
  const __m128i *v160; // [rsp+10h] [rbp-558h]
  __int64 v161; // [rsp+18h] [rbp-550h]
  __int64 v162; // [rsp+20h] [rbp-548h]
  __int64 v163; // [rsp+28h] [rbp-540h]
  __int64 v164; // [rsp+38h] [rbp-530h]
  __int64 v165; // [rsp+40h] [rbp-528h]
  __int64 v166; // [rsp+48h] [rbp-520h]
  __int64 v167; // [rsp+58h] [rbp-510h]
  __int64 v168; // [rsp+60h] [rbp-508h]
  __int64 v169; // [rsp+68h] [rbp-500h]
  const __m128i *v170; // [rsp+70h] [rbp-4F8h]
  char v171; // [rsp+8Bh] [rbp-4DDh] BYREF
  char v172; // [rsp+8Ch] [rbp-4DCh] BYREF
  char v173; // [rsp+8Dh] [rbp-4DBh] BYREF
  char v174; // [rsp+8Eh] [rbp-4DAh] BYREF
  char v175; // [rsp+8Fh] [rbp-4D9h] BYREF
  void *v176[2]; // [rsp+90h] [rbp-4D8h] BYREF
  _BYTE v177[16]; // [rsp+A0h] [rbp-4C8h] BYREF
  void *v178[2]; // [rsp+B0h] [rbp-4B8h] BYREF
  _BYTE v179[16]; // [rsp+C0h] [rbp-4A8h] BYREF
  void *v180[2]; // [rsp+D0h] [rbp-498h] BYREF
  _BYTE v181[16]; // [rsp+E0h] [rbp-488h] BYREF
  _BYTE v182[24]; // [rsp+F0h] [rbp-478h] BYREF
  __int64 v183; // [rsp+108h] [rbp-460h]
  __m128i v184; // [rsp+110h] [rbp-458h] BYREF
  __int64 v185; // [rsp+120h] [rbp-448h]
  __m128i v186; // [rsp+130h] [rbp-438h]
  __m128i v187; // [rsp+140h] [rbp-428h]
  __m128i v188; // [rsp+150h] [rbp-418h]
  __int64 v189; // [rsp+160h] [rbp-408h]
  __m128i v190; // [rsp+170h] [rbp-3F8h] BYREF
  __m128i v191; // [rsp+180h] [rbp-3E8h] BYREF
  __m128i v192; // [rsp+190h] [rbp-3D8h] BYREF
  char *s; // [rsp+1A0h] [rbp-3C8h]
  _BYTE v194[24]; // [rsp+1B0h] [rbp-3B8h] BYREF
  __int64 v195; // [rsp+1C8h] [rbp-3A0h]
  __m128i v196; // [rsp+1D0h] [rbp-398h] BYREF
  __int64 v197; // [rsp+1E0h] [rbp-388h]
  __m128i v198; // [rsp+1F0h] [rbp-378h]
  __m128i v199; // [rsp+200h] [rbp-368h]
  __m128i v200; // [rsp+210h] [rbp-358h]
  __int64 v201; // [rsp+220h] [rbp-348h]
  __m128i v202; // [rsp+230h] [rbp-338h] BYREF
  __m128i v203; // [rsp+240h] [rbp-328h] BYREF
  __m128i v204; // [rsp+250h] [rbp-318h] BYREF
  char *v205; // [rsp+260h] [rbp-308h]
  _BYTE v206[24]; // [rsp+270h] [rbp-2F8h] BYREF
  __int64 v207; // [rsp+288h] [rbp-2E0h]
  __m128i v208; // [rsp+290h] [rbp-2D8h] BYREF
  __int64 v209; // [rsp+2A0h] [rbp-2C8h]
  __m128i v210; // [rsp+2B0h] [rbp-2B8h]
  __m128i v211; // [rsp+2C0h] [rbp-2A8h]
  __m128i v212; // [rsp+2D0h] [rbp-298h]
  __int64 v213; // [rsp+2E0h] [rbp-288h]
  __m128i v214; // [rsp+2F0h] [rbp-278h] BYREF
  __m128i v215; // [rsp+300h] [rbp-268h] BYREF
  __m128i v216; // [rsp+310h] [rbp-258h] BYREF
  char *v217; // [rsp+320h] [rbp-248h]
  _BYTE v218[24]; // [rsp+330h] [rbp-238h] BYREF
  __int64 v219; // [rsp+348h] [rbp-220h]
  __m128i v220; // [rsp+350h] [rbp-218h] BYREF
  __int64 v221; // [rsp+360h] [rbp-208h]
  char v222; // [rsp+370h] [rbp-1F8h]
  __int64 v223; // [rsp+378h] [rbp-1F0h]
  void *v224; // [rsp+380h] [rbp-1E8h] BYREF
  void *v225; // [rsp+388h] [rbp-1E0h]
  __m128i v226; // [rsp+390h] [rbp-1D8h] BYREF
  __m128i v227; // [rsp+3A0h] [rbp-1C8h] BYREF
  __m128i v228; // [rsp+3B0h] [rbp-1B8h] BYREF
  __m128i v229; // [rsp+3C0h] [rbp-1A8h] BYREF
  char *v230; // [rsp+3D0h] [rbp-198h]
  __m128i v231; // [rsp+3E0h] [rbp-188h] BYREF
  void *v232; // [rsp+3F0h] [rbp-178h] BYREF
  __int64 *v233; // [rsp+3F8h] [rbp-170h]
  __m128i v234; // [rsp+400h] [rbp-168h] BYREF
  __m128i v235; // [rsp+410h] [rbp-158h] BYREF
  __m128i v236; // [rsp+420h] [rbp-148h] BYREF
  __m128i v237; // [rsp+430h] [rbp-138h] BYREF
  char *v238; // [rsp+440h] [rbp-128h]
  __m128i v239; // [rsp+450h] [rbp-118h] BYREF
  void *v240; // [rsp+460h] [rbp-108h] BYREF
  __int64 *v241; // [rsp+468h] [rbp-100h]
  __m128i v242; // [rsp+470h] [rbp-F8h] BYREF
  __m128i v243; // [rsp+480h] [rbp-E8h] BYREF
  __m128i v244; // [rsp+490h] [rbp-D8h] BYREF
  __m128i v245; // [rsp+4A0h] [rbp-C8h] BYREF
  char *v246; // [rsp+4B0h] [rbp-B8h]
  __int128 v247; // [rsp+4C0h] [rbp-A8h] BYREF
  void *v248[2]; // [rsp+4D0h] [rbp-98h]
  __int128 v249; // [rsp+4E0h] [rbp-88h] BYREF
  __m128i v250; // [rsp+4F0h] [rbp-78h] BYREF
  __m128i v251; // [rsp+500h] [rbp-68h] BYREF
  __m128i v252; // [rsp+510h] [rbp-58h] BYREF
  char *v253; // [rsp+520h] [rbp-48h]

  result = (const __m128i *)*a2;
  if ( (_DWORD)result )
  {
    v3 = a1;
    v161 = (__int64)&a2[6 * ((_DWORD)result - 1) + 8];
    v162 = a1 + 8;
    v160 = (const __m128i *)(a2 + 2);
    while ( 1 )
    {
      *(_QWORD *)v182 = v3;
      v184 = 0u;
      v15 = *(_BYTE *)(v3 + 9) == 0;
      v16 = _mm_loadu_si128(v160);
      v17 = _mm_load_si128(&v184);
      v18 = v160[1].m128i_i64[0];
      v185 = 0;
      *(__m128i *)&v182[8] = v16;
      si128 = _mm_load_si128((const __m128i *)v182);
      v183 = v18;
      v20 = _mm_load_si128((const __m128i *)&v182[16]);
      v186 = si128;
      v187 = v20;
      v188 = v17;
      v189 = 0;
      v190 = si128;
      v191 = v20;
      v192 = v17;
      s = nullptr;
      if ( v15 )
        break;
      *(_BYTE *)(v3 + 9) = 0;
      v164 = v3 + 1056;
      sub_22299F0(v3 + 1056);
      v40 = s;
      v41 = 0;
      v42 = v190.m128i_i64[0] + 8;
      if ( s )
        v41 = strlen(s);
      sub_E6B8F0(v42, &v190.m128i_u64[1], v192.m128i_i64[0], v192.m128i_i64[1], v40, v41);
      v43 = v190.m128i_i64[0];
      switch ( v190.m128i_i32[2] & 0x7FFFFFFF )
      {
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          goto LABEL_29;
        case 1:
          sub_AE36F0(v190.m128i_i64[0], v191.m128i_i64[0]);
          goto LABEL_29;
        case 8:
          sub_ADE7F0(v190.m128i_i64[0] + 8, 0, 0, v191.m128i_i64[0], v190.m128i_i64[0]);
          goto LABEL_29;
        case 9:
          v165 = v190.m128i_i64[0] + 8;
          v52 = (const __m128i *)v191.m128i_i64[0];
          v163 = v191.m128i_i64[0] + 24LL * v190.m128i_u32[3];
          if ( v191.m128i_i64[0] == v163 )
            goto LABEL_29;
          v168 = v3;
          break;
      }
      do
      {
        while ( 1 )
        {
          v63 = _mm_loadu_si128(v52);
          v64 = v52[1].m128i_i64[0];
          *(_QWORD *)v194 = v43;
          v196 = 0u;
          *(__m128i *)&v194[8] = v63;
          v65 = _mm_load_si128((const __m128i *)v194);
          v195 = v64;
          v66 = _mm_load_si128((const __m128i *)&v194[16]);
          v67 = _mm_load_si128(&v196);
          v202 = v65;
          v203 = v66;
          v204 = v67;
          v205 = nullptr;
          v15 = *(_BYTE *)(v43 + 9) == 0;
          v197 = 0;
          v198 = v65;
          v199 = v66;
          v200 = v67;
          v201 = 0;
          if ( !v15 )
            break;
          v178[0] = v179;
          sub_ACAA20(v178, (_BYTE *)"inner", (__int64)"");
          v68 = *(_BYTE *)(v43 + 8);
          v232 = &v234;
          v231.m128i_i8[0] = v68;
          v231.m128i_i64[1] = v165;
          sub_ACAAE0(&v232, (_BYTE *)v178[0], (__int64)v178[0] + (unsigned __int64)v178[1]);
          v69 = _mm_load_si128(&v202);
          v70 = _mm_load_si128(&v203);
          v71 = _mm_load_si128(&v204);
          v235 = v69;
          v236 = v70;
          v237 = v71;
          v238 = v205;
          if ( *(_BYTE *)(v43 + 8) )
          {
            LOBYTE(v247) = v231.m128i_i8[0];
            *((_QWORD *)&v247 + 1) = v231.m128i_i64[1];
            v248[0] = &v249;
            if ( v232 == &v234 )
            {
              v53 = v69;
              v54 = v71;
              v249 = (__int128)_mm_load_si128(&v234);
            }
            else
            {
              v248[0] = v232;
              v53 = v69;
              v54 = v71;
              *(_QWORD *)&v249 = v234.m128i_i64[0];
            }
            v55 = v233;
            v56 = _mm_load_si128(&v236);
            v233 = nullptr;
            v234.m128i_i8[0] = 0;
            v248[1] = v55;
            v232 = &v234;
            v250 = v53;
            v251 = v56;
            v252 = v54;
            v253 = v238;
            v240 = nullptr;
            v57 = operator new(0x68u);
            *(_BYTE *)v57 = v247;
            *(_QWORD *)(v57 + 8) = *((_QWORD *)&v247 + 1);
            *(_QWORD *)(v57 + 16) = v57 + 32;
            if ( v248[0] == &v249 )
            {
              *(__m128i *)(v57 + 32) = _mm_load_si128((const __m128i *)&v249);
            }
            else
            {
              *(void **)(v57 + 16) = v248[0];
              *(_QWORD *)(v57 + 32) = v249;
            }
            v58 = v248[1];
            v59 = _mm_load_si128(&v250);
            v239.m128i_i64[0] = v57;
            v60 = _mm_load_si128(&v251);
            v61 = _mm_load_si128(&v252);
            v248[1] = nullptr;
            *(_QWORD *)(v57 + 24) = v58;
            v248[0] = &v249;
            v62 = v253;
            *(__m128i *)(v57 + 48) = v59;
            *(__m128i *)(v57 + 64) = v60;
            *(__m128i *)(v57 + 80) = v61;
            *(_QWORD *)(v57 + 96) = v62;
            LOBYTE(v249) = 0;
            v241 = qword_AE50F0;
            v240 = sub_ACB180;
            sub_ACD330(v43 + 16, &v239);
            if ( v240 )
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v240)(&v239, &v239, 3);
          }
          else
          {
            v72 = *(unsigned int *)(v43 + 24);
            v73 = *(_QWORD *)(v43 + 16);
            v173 = 0;
            v74 = v73 + 32 * v72 - 32;
            if ( !*(_QWORD *)(v74 + 16) )
              goto LABEL_132;
            (*(void (__fastcall **)(__int64, char *))(v74 + 24))(v74, &v173);
            v75 = (__m128i *)(*(_QWORD *)(v43 + 16) + 32LL * *(unsigned int *)(v43 + 24) - 32);
            LOBYTE(v247) = v231.m128i_i8[0];
            *((_QWORD *)&v247 + 1) = v231.m128i_i64[1];
            v248[0] = &v249;
            if ( v232 == &v234 )
            {
              v249 = (__int128)_mm_load_si128(&v234);
            }
            else
            {
              v248[0] = v232;
              *(_QWORD *)&v249 = v234.m128i_i64[0];
            }
            v76 = v233;
            v77 = _mm_load_si128(&v235);
            v233 = nullptr;
            v78 = _mm_load_si128(&v236);
            v79 = _mm_load_si128(&v237);
            v234.m128i_i8[0] = 0;
            v248[1] = v76;
            v232 = &v234;
            v250 = v77;
            v251 = v78;
            v252 = v79;
            v253 = v238;
            v240 = nullptr;
            v80 = operator new(0x68u);
            *(_BYTE *)v80 = v247;
            *(_QWORD *)(v80 + 8) = *((_QWORD *)&v247 + 1);
            *(_QWORD *)(v80 + 16) = v80 + 32;
            if ( v248[0] == &v249 )
            {
              *(__m128i *)(v80 + 32) = _mm_load_si128((const __m128i *)&v249);
            }
            else
            {
              *(void **)(v80 + 16) = v248[0];
              *(_QWORD *)(v80 + 32) = v249;
            }
            v81 = _mm_load_si128(&v250);
            v239.m128i_i64[0] = v80;
            v82 = _mm_load_si128(&v251);
            v83 = _mm_load_si128(&v252);
            LOBYTE(v249) = 0;
            v84 = _mm_load_si128(&v239);
            *(void **)(v80 + 24) = v248[1];
            v248[0] = &v249;
            v85 = v253;
            *(__m128i *)(v80 + 48) = v81;
            *(_QWORD *)(v80 + 96) = v85;
            *(__m128i *)(v80 + 64) = v82;
            *(__m128i *)(v80 + 80) = v83;
            v248[1] = nullptr;
            v239 = _mm_loadu_si128(v75);
            v86 = (void *)v75[1].m128i_i64[0];
            *v75 = v84;
            v240 = v86;
            v75[1].m128i_i64[0] = (__int64)sub_ACB180;
            v241 = (__int64 *)v75[1].m128i_i64[1];
            v75[1].m128i_i64[1] = (__int64)qword_AE50F0;
            if ( v86 )
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v86)(&v239, &v239, 3);
          }
          if ( v248[0] != &v249 )
            operator delete(v248[0]);
          *(_BYTE *)(v43 + 8) = 0;
          if ( v232 != &v234 )
            operator delete(v232);
          if ( v178[0] != v179 )
            operator delete(v178[0]);
          v52 = (const __m128i *)((char *)v52 + 24);
          if ( (const __m128i *)v163 == v52 )
            goto LABEL_74;
        }
        *(_BYTE *)(v43 + 9) = 0;
        v166 = v43 + 1056;
        sub_22299F0(v43 + 1056);
        v87 = v205;
        v88 = 0;
        v89 = v202.m128i_i64[0] + 8;
        if ( v205 )
          v88 = strlen(v205);
        sub_E6B8F0(v89, &v202.m128i_u64[1], v204.m128i_i64[0], v204.m128i_i64[1], v87, v88);
        switch ( v202.m128i_i32[2] & 0x7FFFFFFF )
        {
          case 0:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            goto LABEL_66;
          case 1:
            sub_AE36F0(v202.m128i_i64[0], v203.m128i_i64[0]);
            goto LABEL_66;
          case 8:
            sub_ADE7F0(v202.m128i_i64[0] + 8, 0, 0, v203.m128i_i64[0], v202.m128i_i64[0]);
            goto LABEL_66;
          case 9:
            v167 = v202.m128i_i64[0] + 8;
            v98 = (const __m128i *)v203.m128i_i64[0];
            v159 = v203.m128i_i64[0] + 24LL * v202.m128i_u32[3];
            if ( v203.m128i_i64[0] == v159 )
              goto LABEL_66;
            v170 = v52;
            v99 = v202.m128i_i64[0];
            v169 = v43;
            break;
        }
        do
        {
          while ( 1 )
          {
            v110 = _mm_loadu_si128(v98);
            v111 = v98[1].m128i_i64[0];
            *(_QWORD *)v206 = v99;
            v208 = 0u;
            *(__m128i *)&v206[8] = v110;
            v112 = _mm_load_si128((const __m128i *)v206);
            v207 = v111;
            v113 = _mm_load_si128((const __m128i *)&v206[16]);
            v114 = _mm_load_si128(&v208);
            v214 = v112;
            v215 = v113;
            v216 = v114;
            v217 = nullptr;
            v15 = *(_BYTE *)(v99 + 9) == 0;
            v209 = 0;
            v210 = v112;
            v211 = v113;
            v212 = v114;
            v213 = 0;
            if ( !v15 )
              break;
            v115 = j__strlen("inner");
            v180[0] = v181;
            sub_ACAA20(v180, "inner", (__int64)&aInner[v115]);
            v116 = *(_BYTE *)(v99 + 8);
            v240 = &v242;
            v239.m128i_i8[0] = v116;
            v239.m128i_i64[1] = v167;
            sub_ACAAE0(&v240, (_BYTE *)v180[0], (__int64)v180[0] + (unsigned __int64)v180[1]);
            v117 = _mm_load_si128(&v214);
            v118 = _mm_load_si128(&v215);
            v119 = _mm_load_si128(&v216);
            v243 = v117;
            v244 = v118;
            v245 = v119;
            v246 = v217;
            if ( !*(_BYTE *)(v99 + 8) )
            {
              v120 = *(unsigned int *)(v99 + 24);
              v121 = *(_QWORD *)(v99 + 16);
              v175 = 0;
              v122 = v121 + 32 * v120 - 32;
              if ( *(_QWORD *)(v122 + 16) )
              {
                (*(void (__fastcall **)(__int64, char *))(v122 + 24))(v122, &v175);
                v123 = (__m128i *)(*(_QWORD *)(v99 + 16) + 32LL * *(unsigned int *)(v99 + 24) - 32);
                LOBYTE(v247) = v239.m128i_i8[0];
                *((_QWORD *)&v247 + 1) = v239.m128i_i64[1];
                v248[0] = &v249;
                if ( v240 == &v242 )
                {
                  v249 = (__int128)_mm_load_si128(&v242);
                }
                else
                {
                  v248[0] = v240;
                  *(_QWORD *)&v249 = v242.m128i_i64[0];
                }
                v124 = v241;
                v125 = _mm_load_si128(&v243);
                v241 = nullptr;
                v126 = _mm_load_si128(&v244);
                v127 = _mm_load_si128(&v245);
                v242.m128i_i8[0] = 0;
                v248[1] = v124;
                v240 = &v242;
                v250 = v125;
                v251 = v126;
                v252 = v127;
                v253 = v246;
                v232 = nullptr;
                v128 = operator new(0x68u);
                *(_BYTE *)v128 = v247;
                *(_QWORD *)(v128 + 8) = *((_QWORD *)&v247 + 1);
                *(_QWORD *)(v128 + 16) = v128 + 32;
                if ( v248[0] == &v249 )
                {
                  *(__m128i *)(v128 + 32) = _mm_load_si128((const __m128i *)&v249);
                }
                else
                {
                  *(void **)(v128 + 16) = v248[0];
                  *(_QWORD *)(v128 + 32) = v249;
                }
                v129 = _mm_load_si128(&v250);
                v231.m128i_i64[0] = v128;
                v130 = _mm_load_si128(&v251);
                v131 = _mm_load_si128(&v252);
                LOBYTE(v249) = 0;
                v132 = _mm_load_si128(&v231);
                *(void **)(v128 + 24) = v248[1];
                v248[0] = &v249;
                v133 = v253;
                *(__m128i *)(v128 + 48) = v129;
                *(_QWORD *)(v128 + 96) = v133;
                *(__m128i *)(v128 + 64) = v130;
                *(__m128i *)(v128 + 80) = v131;
                v248[1] = nullptr;
                v231 = _mm_loadu_si128(v123);
                v134 = (void *)v123[1].m128i_i64[0];
                *v123 = v132;
                v232 = v134;
                v123[1].m128i_i64[0] = (__int64)sub_ACB180;
                v233 = (__int64 *)v123[1].m128i_i64[1];
                JUMPOUT(0xAE839E);
              }
LABEL_132:
              std::__throw_bad_function_call();
            }
            LOBYTE(v247) = v239.m128i_i8[0];
            *((_QWORD *)&v247 + 1) = v239.m128i_i64[1];
            v248[0] = &v249;
            if ( v240 == &v242 )
            {
              v100 = v117;
              v249 = (__int128)_mm_load_si128(&v242);
              v101 = v118;
            }
            else
            {
              v248[0] = v240;
              v100 = v117;
              v101 = v118;
              *(_QWORD *)&v249 = v242.m128i_i64[0];
            }
            v102 = v241;
            v103 = _mm_load_si128(&v245);
            v241 = nullptr;
            v242.m128i_i8[0] = 0;
            v248[1] = v102;
            v240 = &v242;
            v250 = v100;
            v251 = v101;
            v252 = v103;
            v253 = v246;
            v232 = nullptr;
            v104 = operator new(0x68u);
            *(_BYTE *)v104 = v247;
            *(_QWORD *)(v104 + 8) = *((_QWORD *)&v247 + 1);
            *(_QWORD *)(v104 + 16) = v104 + 32;
            if ( v248[0] == &v249 )
            {
              *(__m128i *)(v104 + 32) = _mm_load_si128((const __m128i *)&v249);
            }
            else
            {
              *(void **)(v104 + 16) = v248[0];
              *(_QWORD *)(v104 + 32) = v249;
            }
            v105 = v248[1];
            v106 = _mm_load_si128(&v250);
            v231.m128i_i64[0] = v104;
            v107 = _mm_load_si128(&v251);
            v108 = _mm_load_si128(&v252);
            v248[1] = nullptr;
            *(_QWORD *)(v104 + 24) = v105;
            v248[0] = &v249;
            v109 = v253;
            *(__m128i *)(v104 + 48) = v106;
            *(__m128i *)(v104 + 64) = v107;
            *(__m128i *)(v104 + 80) = v108;
            *(_QWORD *)(v104 + 96) = v109;
            LOBYTE(v249) = 0;
            v233 = qword_AE50F0;
            v232 = sub_ACB180;
            sub_ACD330(v99 + 16, &v231);
            if ( v232 )
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v232)(&v231, &v231, 3);
            if ( v248[0] != &v249 )
              operator delete(v248[0]);
            *(_BYTE *)(v99 + 8) = 0;
            if ( v240 != &v242 )
              operator delete(v240);
            if ( v180[0] != v181 )
              operator delete(v180[0]);
            v98 = (const __m128i *)((char *)v98 + 24);
            if ( (const __m128i *)v159 == v98 )
              goto LABEL_121;
          }
          *(_BYTE *)(v99 + 9) = 0;
          v135 = v99 + 1056;
          sub_22299F0(v99 + 1056);
          v136 = v217;
          v137 = 0;
          v138 = v214.m128i_i64[0] + 8;
          if ( v217 )
            v137 = j__strlen(v217);
          sub_E6B8F0(v138, &v214.m128i_u64[1], v216.m128i_i64[0], v216.m128i_i64[1], v136, v137);
          v141 = v214.m128i_i64[0];
          switch ( v214.m128i_i32[2] & 0x7FFFFFFF )
          {
            case 0:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
              break;
            case 1:
              sub_AE36F0(v214.m128i_i64[0], v215.m128i_i64[0]);
              break;
            case 8:
              sub_ADE7F0(v214.m128i_i64[0] + 8, 0, 0, v215.m128i_i64[0], v214.m128i_i64[0]);
              break;
            case 9:
              v150 = v214.m128i_i64[0] + 8;
              v151 = v215.m128i_i64[0] + 24LL * v214.m128i_u32[3];
              if ( v215.m128i_i64[0] != v151 )
              {
                v152 = (char *)(v214.m128i_i64[0] + 8);
                v153 = (const __m128i *)v215.m128i_i64[0];
                do
                {
                  v154 = v153[1].m128i_i64[0];
                  v155 = _mm_loadu_si128(v153);
                  *(_QWORD *)v218 = v141;
                  v153 = (const __m128i *)((char *)v153 + 24);
                  *(__m128i *)&v218[8] = v155;
                  v156 = (__int128)_mm_load_si128((const __m128i *)v218);
                  v219 = v154;
                  v157 = (__int128)_mm_load_si128((const __m128i *)&v218[16]);
                  v220 = 0u;
                  v158 = (__int128)_mm_load_si128(&v220);
                  v221 = 0;
                  v247 = v156;
                  *(_OWORD *)v248 = v157;
                  v249 = v158;
                  v250.m128i_i64[0] = 0;
                  sub_AE3830(v152, (char *)&byte_22F0C30, 0, v150, v139, v140, v156, v157, v158, 0);
                }
                while ( (const __m128i *)v151 != v153 );
                v135 = v99 + 1056;
              }
              break;
          }
          v142 = *(unsigned int *)(v99 + 24);
          if ( (_DWORD)v142 )
          {
            v143 = *(_QWORD *)(v99 + 16);
            LOBYTE(v247) = 1;
            v144 = v143 + 32 * v142 - 32;
            if ( !*(_QWORD *)(v144 + 16) )
              goto LABEL_132;
            while ( 1 )
            {
              (*(void (__fastcall **)(__int64, __int128 *))(v144 + 24))(v144, &v247);
              v146 = (unsigned int)(*(_DWORD *)(v99 + 24) - 1);
              *(_DWORD *)(v99 + 24) = v146;
              v147 = *(_QWORD *)(v99 + 16) + 32 * v146;
              v148 = *(void (__fastcall **)(__int64, __int64, __int64))(v147 + 16);
              if ( v148 )
                v148(v147, v147, 3);
              v149 = *(unsigned int *)(v99 + 24);
              if ( !(_DWORD)v149 )
                break;
              v145 = *(_QWORD *)(v99 + 16);
              LOBYTE(v247) = 1;
              v144 = v145 + 32 * v149 - 32;
              if ( !*(_QWORD *)(v144 + 16) )
                goto LABEL_132;
            }
          }
          v98 = (const __m128i *)((char *)v98 + 24);
          sub_2229B60(v135);
          *(_BYTE *)(v99 + 9) = 1;
        }
        while ( (const __m128i *)v159 != v98 );
LABEL_121:
        v43 = v169;
        v52 = v170;
LABEL_66:
        v90 = *(unsigned int *)(v43 + 24);
        if ( !(_DWORD)v90 )
          goto LABEL_73;
        v91 = *(_QWORD *)(v43 + 16);
        v174 = 1;
        v92 = v91 + 32 * v90 - 32;
        if ( !*(_QWORD *)(v92 + 16) )
          goto LABEL_132;
        while ( 1 )
        {
          (*(void (__fastcall **)(__int64, char *))(v92 + 24))(v92, &v174);
          v94 = (unsigned int)(*(_DWORD *)(v43 + 24) - 1);
          *(_DWORD *)(v43 + 24) = v94;
          v95 = *(_QWORD *)(v43 + 16) + 32 * v94;
          v96 = *(void (__fastcall **)(__int64, __int64, __int64))(v95 + 16);
          if ( v96 )
            v96(v95, v95, 3);
          v97 = *(unsigned int *)(v43 + 24);
          if ( !(_DWORD)v97 )
            break;
          v93 = *(_QWORD *)(v43 + 16);
          v174 = 1;
          v92 = v93 + 32 * v97 - 32;
          if ( !*(_QWORD *)(v92 + 16) )
            goto LABEL_132;
        }
LABEL_73:
        v52 = (const __m128i *)((char *)v52 + 24);
        sub_2229B60(v166);
        *(_BYTE *)(v43 + 9) = 1;
      }
      while ( (const __m128i *)v163 != v52 );
LABEL_74:
      v3 = v168;
LABEL_29:
      v44 = *(unsigned int *)(v3 + 24);
      if ( !(_DWORD)v44 )
        goto LABEL_36;
      v45 = *(_QWORD *)(v3 + 16);
      v172 = 1;
      v46 = v45 + 32 * v44 - 32;
      if ( !*(_QWORD *)(v46 + 16) )
        goto LABEL_132;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v46 + 24))(v46, &v172);
        v48 = (unsigned int)(*(_DWORD *)(v3 + 24) - 1);
        *(_DWORD *)(v3 + 24) = v48;
        v49 = *(_QWORD *)(v3 + 16) + 32 * v48;
        v50 = *(void (__fastcall **)(__int64, __int64, __int64))(v49 + 16);
        if ( v50 )
          v50(v49, v49, 3);
        v51 = *(unsigned int *)(v3 + 24);
        if ( !(_DWORD)v51 )
          break;
        v47 = *(_QWORD *)(v3 + 16);
        v172 = 1;
        v46 = v47 + 32 * v51 - 32;
        if ( !*(_QWORD *)(v46 + 16) )
          goto LABEL_132;
      }
LABEL_36:
      sub_2229B60(v164);
      *(_BYTE *)(v3 + 9) = 1;
LABEL_15:
      v160 = (const __m128i *)((char *)v160 + 24);
      result = v160;
      if ( (const __m128i *)v161 == v160 )
        return result;
    }
    v176[0] = v177;
    sub_ACAA20(v176, (_BYTE *)"inner", (__int64)"");
    v21 = *(_BYTE *)(v3 + 8);
    v224 = &v226;
    v222 = v21;
    v223 = v162;
    sub_ACAAE0(&v224, (_BYTE *)v176[0], (__int64)v176[0] + (unsigned __int64)v176[1]);
    v15 = *(_BYTE *)(v3 + 8) == 0;
    v22 = _mm_load_si128(&v190);
    v23 = _mm_load_si128(&v191);
    v24 = _mm_load_si128(&v192);
    v230 = s;
    v227 = v22;
    v228 = v23;
    v229 = v24;
    if ( v15 )
    {
      v25 = *(unsigned int *)(v3 + 24);
      v26 = *(_QWORD *)(v3 + 16);
      v171 = 0;
      v27 = v26 + 32 * v25 - 32;
      if ( !*(_QWORD *)(v27 + 16) )
        goto LABEL_132;
      (*(void (__fastcall **)(__int64, char *))(v27 + 24))(v27, &v171);
      v28 = (__m128i *)(*(_QWORD *)(v3 + 16) + 32LL * *(unsigned int *)(v3 + 24) - 32);
      LOBYTE(v247) = v222;
      *((_QWORD *)&v247 + 1) = v223;
      v248[0] = &v249;
      if ( v224 == &v226 )
      {
        v249 = (__int128)_mm_load_si128(&v226);
      }
      else
      {
        v248[0] = v224;
        *(_QWORD *)&v249 = v226.m128i_i64[0];
      }
      v29 = v225;
      v30 = _mm_load_si128(&v227);
      v225 = nullptr;
      v31 = _mm_load_si128(&v228);
      v32 = _mm_load_si128(&v229);
      v226.m128i_i8[0] = 0;
      v248[1] = v29;
      v224 = &v226;
      v250 = v30;
      v251 = v31;
      v252 = v32;
      v253 = v230;
      v240 = nullptr;
      v33 = operator new(0x68u);
      *(_BYTE *)v33 = v247;
      *(_QWORD *)(v33 + 8) = *((_QWORD *)&v247 + 1);
      *(_QWORD *)(v33 + 16) = v33 + 32;
      if ( v248[0] == &v249 )
      {
        *(__m128i *)(v33 + 32) = _mm_load_si128((const __m128i *)&v249);
      }
      else
      {
        *(void **)(v33 + 16) = v248[0];
        *(_QWORD *)(v33 + 32) = v249;
      }
      v34 = _mm_load_si128(&v250);
      v239.m128i_i64[0] = v33;
      v35 = _mm_load_si128(&v251);
      v36 = _mm_load_si128(&v252);
      LOBYTE(v249) = 0;
      v37 = _mm_load_si128(&v239);
      *(void **)(v33 + 24) = v248[1];
      v248[0] = &v249;
      v38 = v253;
      *(__m128i *)(v33 + 48) = v34;
      *(_QWORD *)(v33 + 96) = v38;
      *(__m128i *)(v33 + 64) = v35;
      *(__m128i *)(v33 + 80) = v36;
      v248[1] = nullptr;
      v239 = _mm_loadu_si128(v28);
      v39 = (void *)v28[1].m128i_i64[0];
      *v28 = v37;
      v240 = v39;
      v28[1].m128i_i64[0] = (__int64)sub_ACB180;
      v241 = (__int64 *)v28[1].m128i_i64[1];
      v28[1].m128i_i64[1] = (__int64)qword_AE50F0;
      if ( v39 )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v39)(&v239, &v239, 3);
    }
    else
    {
      LOBYTE(v247) = v222;
      *((_QWORD *)&v247 + 1) = v223;
      v248[0] = &v249;
      if ( v224 == &v226 )
      {
        v4 = v22;
        v249 = (__int128)_mm_load_si128(&v226);
      }
      else
      {
        v248[0] = v224;
        v4 = v22;
        *(_QWORD *)&v249 = v226.m128i_i64[0];
      }
      v5 = v225;
      v6 = _mm_load_si128(&v228);
      v225 = nullptr;
      v7 = _mm_load_si128(&v229);
      v226.m128i_i8[0] = 0;
      v248[1] = v5;
      v224 = &v226;
      v250 = v4;
      v251 = v6;
      v252 = v7;
      v253 = v230;
      v240 = nullptr;
      v8 = operator new(0x68u);
      *(_BYTE *)v8 = v247;
      *(_QWORD *)(v8 + 8) = *((_QWORD *)&v247 + 1);
      *(_QWORD *)(v8 + 16) = v8 + 32;
      if ( v248[0] == &v249 )
      {
        *(__m128i *)(v8 + 32) = _mm_load_si128((const __m128i *)&v249);
      }
      else
      {
        *(void **)(v8 + 16) = v248[0];
        *(_QWORD *)(v8 + 32) = v249;
      }
      v9 = v248[1];
      v10 = _mm_load_si128(&v250);
      v239.m128i_i64[0] = v8;
      v11 = _mm_load_si128(&v251);
      v12 = _mm_load_si128(&v252);
      v248[1] = nullptr;
      *(_QWORD *)(v8 + 24) = v9;
      v248[0] = &v249;
      v13 = v253;
      *(__m128i *)(v8 + 48) = v10;
      *(__m128i *)(v8 + 64) = v11;
      *(__m128i *)(v8 + 80) = v12;
      *(_QWORD *)(v8 + 96) = v13;
      LOBYTE(v249) = 0;
      v241 = qword_AE50F0;
      v240 = sub_ACB180;
      sub_ACD330(v3 + 16, &v239);
      if ( v240 )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v240)(&v239, &v239, 3);
    }
    if ( v248[0] != &v249 )
      operator delete(v248[0]);
    v14 = (__m128i *)v224;
    *(_BYTE *)(v3 + 8) = 0;
    if ( v14 != &v226 )
      operator delete(v14);
    if ( v176[0] != v177 )
      operator delete(v176[0]);
    goto LABEL_15;
  }
  return result;
}
