__int64 __fastcall sub_D66E50(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6, __int64 *a7)
{
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r14
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r14d
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  void *v44; // r15
  __m128i v45; // xmm1
  __int64 v46; // rdi
  __int64 v47; // rax
  int v48; // r14d
  unsigned int v49; // r15d
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // r15d
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rdx
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // r14
  unsigned int v59; // r15d
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 *v70; // r15
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 *v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r15
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 *v82; // r14
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rax
  _QWORD *v88; // rax
  void *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // r14
  __int64 v92; // rax
  __int64 *v93; // r14
  __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  void *v99; // r14
  __int64 *v100; // rax
  void *v101; // r14
  __int64 v102; // r14
  _QWORD *v103; // rax
  void *v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rdi
  void *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // r15
  __int64 v112; // rax
  __int64 v113; // r12
  __int64 *v114; // r14
  __int64 v115; // r13
  __int64 v116; // rax
  __int64 v117; // rbx
  __int64 *v118; // rbx
  _DWORD *v120; // rax
  _DWORD *v121; // xmm0_8
  __int64 v122; // rsi
  __int64 v123; // rdi
  __int64 v124; // [rsp+40h] [rbp-4F0h]
  __int64 v125; // [rsp+48h] [rbp-4E8h]
  __int64 v126; // [rsp+50h] [rbp-4E0h]
  __int64 v127; // [rsp+58h] [rbp-4D8h]
  __int64 v128; // [rsp+60h] [rbp-4D0h]
  __int64 v129; // [rsp+68h] [rbp-4C8h]
  __int64 v130; // [rsp+70h] [rbp-4C0h]
  __int64 v131; // [rsp+78h] [rbp-4B8h]
  __int64 v132; // [rsp+80h] [rbp-4B0h]
  __int64 v133; // [rsp+88h] [rbp-4A8h]
  __int64 v134; // [rsp+90h] [rbp-4A0h]
  __int64 v135; // [rsp+98h] [rbp-498h]
  __int64 v136; // [rsp+A0h] [rbp-490h]
  __int64 v137; // [rsp+A8h] [rbp-488h]
  __int64 v138; // [rsp+B0h] [rbp-480h]
  __int64 v139; // [rsp+B8h] [rbp-478h]
  __int64 v140; // [rsp+C0h] [rbp-470h]
  __int64 v141; // [rsp+C8h] [rbp-468h]
  __int64 v142; // [rsp+D0h] [rbp-460h]
  __int64 v143; // [rsp+D8h] [rbp-458h]
  __int64 v144; // [rsp+E0h] [rbp-450h]
  __int64 v145; // [rsp+E8h] [rbp-448h]
  __int64 v146; // [rsp+F0h] [rbp-440h]
  __int64 v147; // [rsp+F8h] [rbp-438h]
  __int64 v148; // [rsp+100h] [rbp-430h]
  __int64 v149; // [rsp+108h] [rbp-428h]
  __int64 v150; // [rsp+110h] [rbp-420h]
  __int64 v151; // [rsp+118h] [rbp-418h]
  __int64 v152; // [rsp+120h] [rbp-410h]
  __int64 v153; // [rsp+128h] [rbp-408h]
  __int64 v154; // [rsp+130h] [rbp-400h]
  __int64 v155; // [rsp+138h] [rbp-3F8h]
  __int64 v156; // [rsp+140h] [rbp-3F0h]
  __int64 v157; // [rsp+148h] [rbp-3E8h]
  __int64 v158; // [rsp+150h] [rbp-3E0h] BYREF
  __int64 v159; // [rsp+158h] [rbp-3D8h]
  __int64 v160; // [rsp+160h] [rbp-3D0h]
  __int64 v161; // [rsp+168h] [rbp-3C8h]
  __int64 v162; // [rsp+170h] [rbp-3C0h]
  __int64 v163; // [rsp+178h] [rbp-3B8h]
  __int64 v164; // [rsp+180h] [rbp-3B0h]
  int v165[2]; // [rsp+188h] [rbp-3A8h]
  __int64 v166; // [rsp+190h] [rbp-3A0h]
  __int64 v167; // [rsp+198h] [rbp-398h]
  int v168[2]; // [rsp+1A0h] [rbp-390h]
  __int64 v169; // [rsp+1A8h] [rbp-388h]
  __int64 v170; // [rsp+1B0h] [rbp-380h]
  __int64 v171; // [rsp+1B8h] [rbp-378h]
  __int64 v172; // [rsp+1C0h] [rbp-370h]
  __int64 *v173; // [rsp+1C8h] [rbp-368h]
  __int64 v174; // [rsp+1D0h] [rbp-360h]
  __int64 v175; // [rsp+1D8h] [rbp-358h]
  __int64 *v176; // [rsp+1E0h] [rbp-350h]
  __int64 v177; // [rsp+1E8h] [rbp-348h]
  __int64 v178; // [rsp+1F0h] [rbp-340h]
  __int64 v179; // [rsp+1F8h] [rbp-338h]
  __int64 v180; // [rsp+200h] [rbp-330h]
  __int64 v181; // [rsp+208h] [rbp-328h]
  __int64 v182; // [rsp+210h] [rbp-320h]
  void *v183; // [rsp+218h] [rbp-318h]
  void *v184; // [rsp+220h] [rbp-310h]
  __int64 *v185; // [rsp+228h] [rbp-308h]
  __int64 v186; // [rsp+230h] [rbp-300h]
  __int64 *v187; // [rsp+238h] [rbp-2F8h]
  void *v188; // [rsp+240h] [rbp-2F0h]
  __int64 *v189; // [rsp+248h] [rbp-2E8h]
  int v190[2]; // [rsp+250h] [rbp-2E0h] BYREF
  __int64 v191; // [rsp+258h] [rbp-2D8h]
  __int64 v192; // [rsp+260h] [rbp-2D0h] BYREF
  __int64 v193; // [rsp+268h] [rbp-2C8h]
  __int64 v194; // [rsp+270h] [rbp-2C0h] BYREF
  __int64 v195; // [rsp+278h] [rbp-2B8h]
  __int64 v196; // [rsp+280h] [rbp-2B0h] BYREF
  __int64 v197; // [rsp+288h] [rbp-2A8h]
  __int64 v198; // [rsp+290h] [rbp-2A0h] BYREF
  __int64 v199; // [rsp+298h] [rbp-298h]
  __int64 v200; // [rsp+2A0h] [rbp-290h] BYREF
  __int64 v201; // [rsp+2A8h] [rbp-288h]
  __int64 v202; // [rsp+2B0h] [rbp-280h] BYREF
  __int64 v203; // [rsp+2B8h] [rbp-278h]
  __int64 v204; // [rsp+2C0h] [rbp-270h] BYREF
  __int64 v205; // [rsp+2C8h] [rbp-268h]
  _DWORD *v206; // [rsp+2D0h] [rbp-260h] BYREF
  __int64 v207; // [rsp+2D8h] [rbp-258h]
  __int64 v208; // [rsp+2E0h] [rbp-250h] BYREF
  __int64 v209; // [rsp+2E8h] [rbp-248h]
  __int64 v210; // [rsp+2F0h] [rbp-240h] BYREF
  __int64 v211; // [rsp+2F8h] [rbp-238h]
  __int64 v212; // [rsp+300h] [rbp-230h] BYREF
  __int64 v213; // [rsp+308h] [rbp-228h]
  __int64 v214; // [rsp+310h] [rbp-220h] BYREF
  __int64 v215; // [rsp+318h] [rbp-218h]
  __int64 v216; // [rsp+320h] [rbp-210h] BYREF
  __int64 v217; // [rsp+328h] [rbp-208h]
  __int64 v218; // [rsp+330h] [rbp-200h] BYREF
  __int64 v219; // [rsp+338h] [rbp-1F8h]
  __int64 v220; // [rsp+340h] [rbp-1F0h] BYREF
  __int64 v221; // [rsp+348h] [rbp-1E8h]
  __m128 v222; // [rsp+350h] [rbp-1E0h]
  __int64 v223; // [rsp+360h] [rbp-1D0h] BYREF
  __int64 v224; // [rsp+368h] [rbp-1C8h]
  __int64 v225; // [rsp+370h] [rbp-1C0h] BYREF
  __int64 v226; // [rsp+378h] [rbp-1B8h]
  __int64 v227; // [rsp+380h] [rbp-1B0h] BYREF
  __int64 v228; // [rsp+388h] [rbp-1A8h]
  __int64 v229; // [rsp+390h] [rbp-1A0h] BYREF
  __int64 v230; // [rsp+398h] [rbp-198h]
  __int64 v231; // [rsp+3A0h] [rbp-190h] BYREF
  __int64 v232; // [rsp+3A8h] [rbp-188h]
  __int64 v233; // [rsp+3B0h] [rbp-180h] BYREF
  __int64 v234; // [rsp+3B8h] [rbp-178h]
  __int64 v235; // [rsp+3C0h] [rbp-170h] BYREF
  __int64 v236; // [rsp+3C8h] [rbp-168h]
  __int64 v237; // [rsp+3D0h] [rbp-160h] BYREF
  __int64 v238; // [rsp+3D8h] [rbp-158h]
  __int64 v239; // [rsp+3E0h] [rbp-150h] BYREF
  __int64 v240; // [rsp+3E8h] [rbp-148h]
  __int64 v241; // [rsp+3F0h] [rbp-140h] BYREF
  __int64 v242; // [rsp+3F8h] [rbp-138h]
  __int64 v243; // [rsp+400h] [rbp-130h] BYREF
  __int64 v244; // [rsp+408h] [rbp-128h]
  void *v245; // [rsp+410h] [rbp-120h] BYREF
  __int64 v246; // [rsp+418h] [rbp-118h]
  void *v247; // [rsp+420h] [rbp-110h] BYREF
  __int64 v248; // [rsp+428h] [rbp-108h]
  __int64 v249; // [rsp+430h] [rbp-100h] BYREF
  __int64 *v250; // [rsp+438h] [rbp-F8h]
  __int64 *v251; // [rsp+440h] [rbp-F0h] BYREF
  __int64 *v252; // [rsp+448h] [rbp-E8h]
  __m128 v253; // [rsp+450h] [rbp-E0h] BYREF
  __m128 v254; // [rsp+460h] [rbp-D0h] BYREF
  __m128 v255; // [rsp+470h] [rbp-C0h] BYREF
  __m128 v256; // [rsp+480h] [rbp-B0h] BYREF
  __m128i v257; // [rsp+490h] [rbp-A0h] BYREF
  __m128 v258; // [rsp+4A0h] [rbp-90h] BYREF
  __m128 v259; // [rsp+4B0h] [rbp-80h] BYREF
  __m128 v260; // [rsp+4C0h] [rbp-70h] BYREF
  __int64 v261; // [rsp+4D0h] [rbp-60h] BYREF
  __int64 v262; // [rsp+4D8h] [rbp-58h]
  __m128 v263; // [rsp+4E0h] [rbp-50h] BYREF
  __int64 v264; // [rsp+4F0h] [rbp-40h] BYREF
  __int64 v265; // [rsp+4F8h] [rbp-38h]

  v176 = a3;
  v173 = a4;
  v189 = a5;
  v187 = a6;
  LODWORD(v184) = sub_15C5540((int)a1 + 432, a2, (_DWORD)a3, (_DWORD)a4, (_DWORD)a5, (_DWORD)a6);
  v8 = sub_15C5560(a1 + 54, a2);
  v9 = a1[1];
  LODWORD(v186) = v8;
  *(_QWORD *)v190 = 0;
  v191 = v9;
  sub_D5AB10((__int64)a1, (unsigned int)v184, (__int64 *)v190);
  v192 = 0;
  v181 = *(_QWORD *)v190;
  v193 = v9;
  v138 = v191;
  sub_D657D0((__int64)a1, (unsigned int)v184, &v192);
  v194 = 0;
  v196 = 0;
  v149 = v192;
  v198 = 0;
  v147 = v193;
  v10 = a1[1];
  v200 = 0;
  v136 = v10;
  v195 = v10;
  v197 = v10;
  v199 = v10;
  v201 = v10;
  v202 = 0;
  v203 = v10;
  v204 = 0;
  v205 = v10;
  v206 = nullptr;
  v207 = v10;
  v208 = 0;
  v209 = v10;
  v210 = 0;
  v211 = v10;
  v212 = 0;
  v213 = v10;
  v11 = sub_D50390((__int64)(a1 + 29), 1u);
  v182 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v12 = sub_D81CD0(a1 + 29, (unsigned int)((_DWORD)v184 + 1), (unsigned int)((_DWORD)v184 + 1), *v187);
  v163 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = sub_D81CD0(a1 + 29, (unsigned int)v184, (unsigned int)v184, *v187);
  v166 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v14 = *v187;
  LODWORD(v174) = (_DWORD)v184 - 1;
  v15 = sub_D81CD0(a1 + 29, (unsigned int)((_DWORD)v184 - 1), (unsigned int)((_DWORD)v184 - 1), v14);
  v169 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  sub_D81DD0(a1 + 2, v163, v182, &v204);
  sub_D81DD0(a1 + 2, v166, v182, &v208);
  sub_D81DD0(a1 + 2, v169, v182, &v210);
  v253 = _mm_loadh_ps((const double *)&v210);
  sub_D50260(a1 + 2, &v253, &v212);
  if ( (unsigned int)sub_14DEE90((int)a1 + 16, v204, (unsigned int)&v206, v16, v17, v18) == 5 )
  {
    v120 = (_DWORD *)sub_15E1A70(a1[2]);
    v121 = v120;
    if ( v120 )
      ++v120[2];
    v122 = (__int64)v206;
    if ( v206 )
    {
      v123 = v207;
      v26 = v206[2]-- == 1;
      if ( v26 )
      {
        v188 = v120;
        sub_15D7BC0(v123, v122);
        v121 = v188;
      }
    }
    v206 = v121;
  }
  v254 = _mm_loadh_ps((const double *)&v212);
  sub_D502F0(a1 + 2, &v254, &v196);
  v143 = a1[1];
  v19 = sub_D500F0((__int64)(a1 + 29), v149);
  v159 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v20 = sub_D81CD0(a1 + 29, (unsigned int)(v186 + 3), (unsigned int)(v186 + 3), *v189);
  v180 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  sub_D81DD0(a1 + 2, v159, *v187, &v202);
  sub_D81DD0(a1 + 2, v180, v182, &v198);
  v255 = _mm_loadh_ps((const double *)&v198);
  sub_D502F0(a1 + 2, &v255, &v200);
  v256 = _mm_loadh_ps((const double *)&v200);
  sub_D50260(a1 + 2, &v256, &v194);
  v21 = a1[1];
  v214 = 0;
  v215 = v21;
  LODWORD(v183) = (_DWORD)v184 + 2;
  sub_D55100((__int64)a1, *v189, (_DWORD)v184 + 2, &v214);
  v142 = a1[1];
  sub_D50390((__int64)(a1 + 29), (_DWORD)v184 + 2);
  v22 = sub_15E1B70(a1[30]);
  v23 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v24 = sub_15E1B70(a1[30]);
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  if ( v23 )
  {
    v26 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v142, v23);
  }
  sub_D50080((__int64)(a1 + 29), v181);
  v27 = sub_15E1B70(a1[30]);
  v144 = v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  if ( v25 )
  {
    v26 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v142, v25);
  }
  v28 = a1[1];
  v264 = 1;
  v135 = v28;
  v265 = 0;
  v263 = (__m128)0xFFFFFFFFuLL;
  v185 = &v264;
  sub_182CBA0(qword_1C7F2C0, &v264);
  BYTE4(v264) &= ~1u;
  LODWORD(v264) = 1;
  v188 = &v263;
  sub_1674520(a1 + 29, &v263, (unsigned int)v183);
  v29 = sub_15E1B70(a1[30]);
  v175 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v30 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v188);
  sub_182CBA0(v30, v185);
  v134 = a1[1];
  sub_D50390((__int64)(a1 + 29), (unsigned int)v183);
  sub_15E1B70(a1[30]);
  v31 = sub_15E1B70(a1[30]);
  v167 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  v32 = a1[1];
  v216 = 0;
  v141 = v32;
  v217 = v32;
  sub_D50080((__int64)(a1 + 29), v181);
  v33 = sub_15E1B70(a1[30]);
  v34 = v33;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  sub_D50390((__int64)(a1 + 29), (unsigned int)v183);
  v35 = sub_15E1B70(a1[30]);
  v170 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  if ( v34 )
  {
    v26 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v141, v34);
  }
  sub_D81E50(a1 + 2, v175, v170, v214, &v216);
  v36 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(*v189) + 24) + 8LL);
  if ( *(_BYTE *)(v36 + 8) )
    sub_DBF6E(0);
  v37 = *(_DWORD *)v36;
  v38 = a1[1];
  v218 = 0;
  v39 = a1[30];
  v220 = 0;
  v133 = v38;
  v219 = v38;
  v221 = v38;
  v40 = sub_15E1A70(v39);
  v177 = v40;
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v41 = sub_D81BF0(a1 + 29, (unsigned int)(v186 + 2), (unsigned int)v183);
  v178 = v41;
  if ( v41 )
    ++*(_DWORD *)(v41 + 8);
  v42 = sub_15E1B70(a1[30]);
  v164 = v42;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  sub_D81E50(a1 + 2, v42, v177, v178, &v218);
  v264 = 1;
  v265 = 0;
  v263 = (__m128)0xFFFFFFFFuLL;
  sub_182CBA0(qword_1C7F2C0, v185);
  LODWORD(v264) = 1;
  BYTE4(v264) &= ~1u;
  sub_1674520(a1 + 29, v188, (unsigned int)v183);
  v43 = sub_15E1B70(a1[30]);
  v150 = v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  v44 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v188);
  sub_182CBA0(v44, v185);
  v45 = (__m128i)(unsigned __int64)sub_D50430((__int64)(a1 + 29), v37);
  v46 = a1[30];
  v257 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v189, v45);
  v47 = sub_15E1AF0(v46);
  v179 = v47;
  if ( v47 )
    ++*(_DWORD *)(v47 + 8);
  v48 = 2 * v37;
  v49 = v48 - (_DWORD)v183;
  sub_D81D60(a1 + 29, (unsigned int)(v48 - (_DWORD)v183), v218);
  v50 = sub_15E1B70(a1[30]);
  v171 = v50;
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  sub_D81D60(a1 + 29, v49, v216);
  v51 = sub_15E1B70(a1[30]);
  v172 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  sub_D81E50(a1 + 2, v150, v171, v51, &v220);
  v52 = v48 - v186;
  v53 = sub_D81CD0(a1 + 29, (unsigned int)(v48 - 1), (unsigned int)(v48 - v186 - 2), v220);
  v54 = v53;
  if ( v53 )
    ++*(_DWORD *)(v53 + 8);
  sub_D50200(*v189, v189[1]);
  v55 = v220;
  *v189 = v54;
  v56 = a1[1];
  v140 = v56;
  sub_D50160((__int64)(a1 + 29), v52 - 3, v55);
  v57 = sub_15E1A70(v56);
  v58 = v57;
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  v132 = a1[1];
  v59 = v186 + 1;
  v60 = sub_D81D60(a1 + 29, (unsigned int)(v186 + 1), v57);
  v158 = v60;
  if ( v60 )
    ++*(_DWORD *)(v60 + 8);
  v61 = a1[30];
  *(_QWORD *)v168 = *v189;
  v222 = _mm_loadh_ps((const double *)&v158);
  v62 = sub_15E1AF0(v61);
  if ( v62 )
    ++*(_DWORD *)(v62 + 8);
  *(_QWORD *)v168 = v62;
  sub_D50200(*v189, v189[1]);
  v63 = v181;
  *v189 = *(_QWORD *)v168;
  v131 = a1[1];
  v64 = sub_D500F0((__int64)(a1 + 29), v63);
  v157 = v64;
  if ( v64 )
    ++*(_DWORD *)(v64 + 8);
  sub_D81E50(a1 + 2, v175, v64, v167, v187);
  v130 = a1[1];
  v65 = sub_D50160((__int64)(a1 + 29), 0, *v189);
  v162 = v65;
  if ( v65 )
    ++*(_DWORD *)(v65 + 8);
  if ( v58 )
  {
    v26 = (*(_DWORD *)(v58 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v140, v58);
  }
  v66 = sub_D81CD0(a1 + 29, 1, 1, *v189);
  *(_QWORD *)v165 = v66;
  if ( v66 )
    ++*(_DWORD *)(v66 + 8);
  v67 = sub_D81CD0(a1 + 29, 2, 2, *v189);
  *(_QWORD *)v168 = v67;
  if ( v67 )
    ++*(_DWORD *)(v67 + 8);
  v68 = sub_D81CD0(a1 + 29, v59, 2, *v189);
  v69 = v68;
  if ( v68 )
    ++*(_DWORD *)(v68 + 8);
  v70 = v189;
  sub_D50200(*v189, v189[1]);
  v71 = a1[1];
  *v70 = v69;
  v129 = v71;
  sub_D55BB0(v188, a1, *v176, *v173, *(__int64 *)v168, *(__int64 *)v165, v162);
  v139 = v263.m128_u64[0];
  sub_D81D60(a1 + 29, (unsigned int)v186, v263.m128_u64[0]);
  sub_D81D60(a1 + 29, 1, *v189);
  v72 = sub_15E1B70(a1[30]);
  v73 = v72;
  if ( v72 )
    ++*(_DWORD *)(v72 + 8);
  v74 = v189;
  sub_D50200(*v189, v189[1]);
  v75 = (unsigned int)v186;
  *v74 = v73;
  v223 = 0;
  v224 = a1[1];
  v76 = sub_D81CD0(a1 + 29, (unsigned int)v75, v75, v73);
  v77 = v76;
  if ( v76 )
    ++*(_DWORD *)(v76 + 8);
  v78 = v180;
  if ( v180 )
  {
    LODWORD(v161) = *(_DWORD *)(v180 + 8);
    v26 = (_DWORD)v161 == 1;
    *(_DWORD *)(v180 + 8) = v161 - 1;
    if ( v26 )
      sub_15D7BC0(v143, v78);
  }
  sub_D81DD0(a1 + 2, v77, v182, &v223);
  v128 = a1[1];
  v79 = sub_D81CD0(a1 + 29, (unsigned int)v186, 1, *v189);
  v156 = v79;
  if ( v79 )
    ++*(_DWORD *)(v79 + 8);
  LODWORD(v180) = v186 - 1;
  v80 = sub_D50160((__int64)(a1 + 29), (int)v186 - 1, *v189);
  v161 = v80;
  if ( v80 )
    ++*(_DWORD *)(v80 + 8);
  sub_D81E50(a1 + 2, v223, v156, v80, v189);
  v127 = a1[1];
  sub_D50390((__int64)(a1 + 29), (unsigned int)v183);
  v81 = sub_15E1B70(a1[30]);
  v160 = v81;
  if ( v81 )
    ++*(_DWORD *)(v81 + 8);
  v82 = v187;
  sub_D81E50(a1 + 2, v223, v81, *v187, v187);
  v83 = a1[1];
  v84 = *v82;
  v225 = 0;
  v226 = v83;
  v85 = sub_D50160((__int64)(a1 + 29), v174, v84);
  sub_D65A70(a1, v85, &v225);
  v86 = a1[1];
  v227 = 0;
  v229 = 0;
  v126 = v86;
  v228 = v86;
  v230 = v86;
  v231 = 0;
  v232 = v86;
  v87 = sub_15E1A70(v86);
  v155 = v87;
  if ( v87 )
    ++*(_DWORD *)(v87 + 8);
  sub_D81DD0(a1 + 2, v87, v182, &v227);
  v258 = _mm_loadh_ps((const double *)&v227);
  sub_D502F0(a1 + 2, &v258, &v229);
  v88 = sub_D58CA0((__int64 *)(a1[55] + 760LL), (int)v184 - 2);
  v263 = 0u;
  v264 = 1;
  v89 = qword_1C7F2C0;
  v265 = 0;
  if ( (*((_BYTE *)v88 + 4) & 1) != 0 )
  {
    v183 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v188, v88);
    v89 = v183;
  }
  else
  {
    v263.m128_i32[0] = *(_DWORD *)v88;
  }
  sub_182CBA0(v89, v185);
  LODWORD(v264) = 1;
  BYTE4(v264) &= ~1u;
  v90 = sub_1674520(a1 + 29, v188, (unsigned int)v184);
  v151 = v90;
  if ( v90 )
    ++*(_DWORD *)(v90 + 8);
  v183 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v188);
  sub_182CBA0(v183, v185);
  sub_D81E50(a1 + 2, v229, v151, v225, &v225);
  v259 = _mm_loadh_ps((const double *)&v229);
  sub_D50260(a1 + 2, &v259, &v231);
  v91 = a1[1];
  v233 = 0;
  v234 = v91;
  sub_D5B220((__int64)a1, (unsigned int)v184, &v233);
  v235 = 0;
  v145 = v233;
  v236 = v91;
  v137 = v234;
  sub_D55030((__int64)a1, (unsigned int)v184, &v235);
  v148 = v235;
  v146 = v236;
  v125 = a1[1];
  v92 = sub_D50430((__int64)(a1 + 29), 1u);
  v154 = v92;
  if ( v92 )
    ++*(_DWORD *)(v92 + 8);
  v93 = v176;
  v94 = a1[1];
  v237 = 0;
  v95 = *v176;
  v238 = v94;
  v239 = 0;
  v240 = v94;
  v241 = 0;
  v242 = v94;
  v243 = 0;
  v244 = v94;
  v253.m128_u64[0] = 0;
  v253.m128_u64[1] = v94;
  sub_D54E20((__int64)a1, v95, 4u, &v237);
  sub_D504D0((__int64)a1, *v93, &v239);
  sub_D54E20((__int64)a1, *v93, 2u, &v241);
  v260 = _mm_loadh_ps((const double *)&v239);
  sub_D50260(a1 + 2, &v260, &v243);
  v263 = _mm_loadh_ps((const double *)&v241);
  sub_D50260(a1 + 2, v188, &v253);
  v96 = a1[1];
  v254.m128_u64[0] = 0;
  v124 = v96;
  v254.m128_u64[1] = v96;
  v97 = sub_D50430((__int64)(a1 + 29), 1u);
  v153 = v97;
  if ( v97 )
    ++*(_DWORD *)(v97 + 8);
  sub_D81DD0(a1 + 2, *v173, v97, &v254);
  v152 = a1[1];
  v98 = sub_D58CA0((__int64 *)(a1[55] + 760LL), v180);
  v263 = 0u;
  v264 = 1;
  v99 = qword_1C7F2C0;
  v265 = 0;
  if ( (*((_BYTE *)v98 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v188, v98);
  else
    v263.m128_i32[0] = *(_DWORD *)v98;
  sub_182CBA0(v99, v185);
  LODWORD(v264) = 1;
  BYTE4(v264) &= ~1u;
  v100 = (__int64 *)sub_1674520(a1 + 29, v188, (unsigned int)v180);
  v176 = v100;
  if ( v100 )
    ++*((_DWORD *)v100 + 2);
  v101 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v188);
  sub_182CBA0(v101, v185);
  v102 = sub_D50430((__int64)(a1 + 29), 1u);
  v103 = sub_D58CA0((__int64 *)(a1[55] + 760LL), v174);
  v263 = 0u;
  v264 = 1;
  v104 = qword_1C7F2C0;
  v265 = 0;
  if ( (*((_BYTE *)v103 + 4) & 1) != 0 )
  {
    v184 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v188, v103);
    v104 = v184;
  }
  else
  {
    v263.m128_i32[0] = *(_DWORD *)v103;
  }
  sub_182CBA0(v104, v185);
  LODWORD(v264) = 1;
  BYTE4(v264) &= ~1u;
  v105 = sub_1674520(a1 + 29, v188, (unsigned int)v174);
  v262 = v102;
  v106 = a1[30];
  v261 = v105;
  v107 = (void *)sub_15E1AF0(v106);
  v183 = v107;
  if ( v107 )
    ++*((_DWORD *)v107 + 2);
  v184 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v188);
  sub_182CBA0(v184, v185);
  v108 = sub_D50430((__int64)(a1 + 29), v180);
  v185 = (__int64 *)v108;
  if ( v108 )
    ++*(_DWORD *)(v108 + 8);
  if ( v145 )
  {
    v245 = nullptr;
    v246 = v152;
    sub_D50220((__int64 *)&v245, &v233);
    v184 = v245;
    v174 = v246;
  }
  else
  {
    v184 = nullptr;
    v174 = v152;
  }
  v109 = a1[1];
  v255.m128_u64[0] = 0;
  v256.m128_u64[0] = 0;
  v259.m128_u64[1] = v109;
  v255.m128_u64[1] = v109;
  v256.m128_u64[1] = v109;
  v257.m128i_i64[0] = 0;
  v257.m128i_i64[1] = v109;
  v258.m128_u64[0] = 0;
  v258.m128_u64[1] = v109;
  v259.m128_u64[0] = 0;
  sub_D81E50(a1 + 2, v253.m128_u64[0], v183, v184, &v256);
  sub_D81E50(a1 + 2, v243, v183, v184, &v257);
  sub_D81E50(a1 + 2, v254.m128_u64[0], v257.m128i_i64[0], v256.m128_u64[0], &v255);
  v110 = sub_D81CD0(a1 + 29, (unsigned int)v180, (unsigned int)v180, *v189);
  v180 = v110;
  if ( v110 )
    ++*(_DWORD *)(v110 + 8);
  if ( v77 )
  {
    v26 = (*(_DWORD *)(v77 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v143, v77);
  }
  sub_D81DD0(a1 + 2, v180, v154, &v258);
  sub_D81E50(a1 + 2, v258.m128_u64[0], v148, v225, &v259);
  sub_D81E50(a1 + 2, v231, v255.m128_u64[0], v259.m128_u64[0], v187);
  v111 = a1[1];
  v260.m128_u64[0] = 0;
  v261 = 0;
  v260.m128_u64[1] = v111;
  v262 = v111;
  v263.m128_u64[0] = 0;
  v263.m128_u64[1] = v111;
  sub_D81E50(a1 + 2, v253.m128_u64[0], v176, v185, &v260);
  sub_D81E50(a1 + 2, v243, v176, v185, &v261);
  sub_D81E50(a1 + 2, v254.m128_u64[0], v261, v260.m128_u64[0], v188);
  v112 = sub_D50160((__int64)(a1 + 29), (int)v186 - 2, *v189);
  v113 = v112;
  if ( v112 )
    ++*(_DWORD *)(v112 + 8);
  sub_D81E50(a1 + 2, v231, v263.m128_u64[0], v112, v189);
  v114 = (__int64 *)a1[1];
  v188 = (void *)*v173;
  if ( v188 )
  {
    v248 = (__int64)v114;
    v247 = nullptr;
    sub_D50220((__int64 *)&v247, v173);
    v188 = v247;
    v186 = v248;
  }
  else
  {
    v186 = (__int64)v114;
  }
  v115 = *v189;
  if ( *v189 )
  {
    v250 = v114;
    v249 = 0;
    sub_D50220(&v249, v189);
    v115 = v249;
    v173 = v250;
  }
  else
  {
    v173 = v114;
  }
  v189 = (__int64 *)*v187;
  if ( v189 )
  {
    v252 = v114;
    v251 = nullptr;
    sub_D50220((__int64 *)&v251, v187);
    v114 = v252;
    v189 = v251;
  }
  v116 = sub_15E1BF0(a1[54]);
  v117 = v116;
  if ( v116 )
    ++*(_DWORD *)(v116 + 8);
  sub_D50200(*a7, a7[1]);
  *a7 = v117;
  v118 = v189;
  if ( v189 )
  {
    LODWORD(v187) = *((_DWORD *)v189 + 2);
    v26 = (_DWORD)v187 == 1;
    *((_DWORD *)v189 + 2) = (_DWORD)v187 - 1;
    if ( v26 )
      sub_15D7BC0(v114, v118);
  }
  if ( v115 )
  {
    v26 = (*(_DWORD *)(v115 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v173, v115);
  }
  sub_D50200((__int64)v188, v186);
  sub_D50200(v113, v111);
  sub_D50200(v263.m128_i64[0], v263.m128_i64[1]);
  sub_D50200(v261, v262);
  sub_D50200(v260.m128_i64[0], v260.m128_i64[1]);
  sub_D50200(v259.m128_i64[0], v259.m128_i64[1]);
  sub_D50200(v258.m128_i64[0], v258.m128_i64[1]);
  sub_D50200(v257.m128i_i64[0], v257.m128i_i64[1]);
  sub_D50200(v256.m128_i64[0], v256.m128_i64[1]);
  sub_D50200(v255.m128_i64[0], v255.m128_i64[1]);
  sub_D50200((__int64)v184, v174);
  sub_D50200((__int64)v185, v152);
  sub_D50200((__int64)v183, v152);
  sub_D50200((__int64)v176, v152);
  sub_D50200(v153, v124);
  sub_D50200(v254.m128_i64[0], v254.m128_i64[1]);
  sub_D50200(v253.m128_i64[0], v253.m128_i64[1]);
  sub_D50200(v243, v244);
  sub_D50200(v241, v242);
  sub_D50200(v239, v240);
  sub_D50200(v237, v238);
  sub_D50200(v154, v125);
  sub_D50200(v148, v146);
  sub_D50200(v145, v137);
  sub_D50200(v151, v126);
  sub_D50200(v155, v126);
  sub_D50200(v231, v232);
  sub_D50200(v229, v230);
  sub_D50200(v227, v228);
  sub_D50200(v225, v226);
  sub_D50200(v160, v127);
  sub_D50200(v161, v128);
  sub_D50200(v156, v128);
  sub_D50200(v223, v224);
  sub_D50200(v139, v129);
  sub_D50200(*(__int64 *)v168, v130);
  sub_D50200(*(__int64 *)v165, v130);
  sub_D50200(v157, v131);
  sub_D50200(v158, v132);
  sub_D50200(v162, v140);
  sub_D50200(v164, v133);
  sub_D50200(v220, v221);
  sub_D50200(v172, v133);
  sub_D50200(v171, v133);
  sub_D50200(v179, v133);
  sub_D50200(v150, v133);
  sub_D50200(v218, v219);
  sub_D50200(v178, v133);
  sub_D50200(v177, v133);
  sub_D50200(v170, v141);
  sub_D50200(v216, v217);
  sub_D50200(v167, v134);
  sub_D50200(v175, v135);
  sub_D50200(v144, v142);
  sub_D50200(v214, v215);
  sub_D50200(v180, v143);
  sub_D50200(v159, v143);
  sub_D50200(v169, v136);
  sub_D50200(v166, v136);
  sub_D50200(v163, v136);
  sub_D50200(v182, v136);
  sub_D50200(v212, v213);
  sub_D50200(v210, v211);
  sub_D50200(v208, v209);
  sub_D50200((__int64)v206, v207);
  sub_D50200(v204, v205);
  sub_D50200(v202, v203);
  sub_D50200(v200, v201);
  sub_D50200(v198, v199);
  sub_D50200(v196, v197);
  sub_D50200(v194, v195);
  sub_D50200(v149, v147);
  return sub_D50200(v181, v138);
}

