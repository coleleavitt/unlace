void __fastcall sub_6696E0(_QWORD *a1, __int64 a2, double a3, double a4, __m128i a5, __m128 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // r14
  __m128i si128; // xmm1
  __int64 v10; // rsi
  __int64 v11; // rax
  const __m128i *v12; // rbx
  double v13; // xmm0_8
  __int64 v14; // rax
  bool v15; // zf
  int v16; // esi
  __int64 v17; // rdi
  int v18; // eax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  char *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r12
  unsigned __int8 *v24; // rdi
  void *v25; // r13
  void **v26; // r14
  void **v27; // r12
  void **v28; // rdi
  void **v29; // r13
  void **v30; // r12
  void **v31; // rdi
  void **v32; // r13
  void **v33; // r12
  void **v34; // rdi
  void **v35; // r12
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // rdi
  __int64 v40; // rax
  char *v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  char v44; // al
  __int64 *v45; // rcx
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __int64 v48; // rbp
  __int64 v49; // rdx
  __int64 v50; // r13
  __m128i v51; // xmm6
  __int64 *v52; // rcx
  __m128i v53; // xmm0
  char *v54; // r14
  __m128i v55; // xmm0
  __m128i v56; // xmm0
  void **v57; // rdi
  __m128i v58; // xmm7
  __int64 v59; // rcx
  void **v60; // rdx
  __m128i v61; // xmm0
  __m128i v62; // xmm6
  __m128i v63; // xmm0
  char *v64; // rax
  __int64 *v65; // rax
  __int64 *v66; // rax
  __int64 v67; // rax
  __m128i v68; // xmm7
  __m128i v69; // xmm0
  char v70; // al
  __m128i v71; // xmm0
  char v72; // al
  __m128i v73; // xmm0
  signed __int64 v74; // r13
  __int64 v75; // rax
  __m128i *v76; // r12
  __m128i *v77; // rbp
  const __m128i *v78; // r12
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // rax
  __int64 m128i_i64; // rdi
  char *v83; // r13
  __int8 *v84; // r14
  __int64 v85; // rax
  unsigned __int64 v86; // r12
  __m128i v87; // xmm0
  __m128i v88; // xmm0
  __int64 v89; // rbp
  __int64 v90; // rdx
  __int64 v91; // r13
  __int64 v92; // r14
  __m128 v93; // xmm3
  __m128i v94; // xmm6
  __m128i v95; // xmm0
  __m128i v96; // xmm0
  __m128i v97; // xmm0
  __m128i v98; // xmm7
  __m128i v99; // xmm0
  __m128i v100; // xmm0
  char *v101; // rax
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __m128i v105; // xmm0
  char v106; // al
  __m128i v107; // xmm0
  char v108; // al
  __m128i v109; // xmm0
  signed __int64 v110; // rbp
  __int64 v111; // r13
  const __m128i *v112; // rbp
  __int64 v113; // rax
  __m128i v114; // xmm0
  __int64 v115; // rax
  __int64 v116; // rdi
  char *v117; // r12
  _BYTE *v118; // r14
  __int64 v119; // rax
  _QWORD *v120; // rcx
  char *v121; // rdx
  _QWORD *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rdx
  _QWORD *v125; // rcx
  __int64 *v126; // rsi
  __int64 *v127; // rsi
  _QWORD *v128; // rcx
  _QWORD *v129; // rcx
  __int64 v130; // rcx
  void (__fastcall ***v131)(_QWORD); // rdi
  __int64 v132; // rdi
  __int64 v133; // rax
  __int64 *v134; // rcx
  __int64 *v135; // rdx
  _QWORD *v136; // rax
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 *v139; // rax
  __int64 *v140; // rsi
  __int64 *v141; // rsi
  void (__fastcall ***v142)(_QWORD); // rdi
  __int64 v143; // rdi
  __int64 v144; // rax
  unsigned int v145; // esi
  unsigned int v146; // esi
  __int64 *v147; // rcx
  unsigned __int64 v148; // rdx
  char *v149; // rax
  unsigned int v150; // esi
  char *v151; // rdi
  unsigned int v152; // esi
  unsigned int v153; // eax
  __int64 v154; // rcx
  unsigned __int64 v155; // rdx
  char *v156; // rax
  char *v157; // rdi
  unsigned int v158; // esi
  unsigned int v159; // esi
  unsigned int v160; // eax
  __int64 v161; // r9
  __int64 v162; // [rsp+0h] [rbp-988h]
  __m128i *v163; // [rsp+8h] [rbp-980h]
  __int64 v164; // [rsp+10h] [rbp-978h]
  __int64 v165; // [rsp+18h] [rbp-970h]
  _QWORD *v166; // [rsp+18h] [rbp-970h]
  _QWORD *v167; // [rsp+18h] [rbp-970h]
  _QWORD *v168; // [rsp+18h] [rbp-970h]
  __int64 v169; // [rsp+18h] [rbp-970h]
  __int64 v170; // [rsp+18h] [rbp-970h]
  __m128i v171; // [rsp+30h] [rbp-958h] BYREF
  __int64 v172; // [rsp+40h] [rbp-948h]
  bool v173; // [rsp+4Fh] [rbp-939h]
  __int64 *v174; // [rsp+50h] [rbp-938h]
  __int64 v175; // [rsp+58h] [rbp-930h]
  char *v176; // [rsp+60h] [rbp-928h]
  unsigned __int64 v177; // [rsp+68h] [rbp-920h]
  __int64 *v178; // [rsp+70h] [rbp-918h]
  __int64 *v179; // [rsp+78h] [rbp-910h]
  __int64 *v180; // [rsp+80h] [rbp-908h]
  __int64 *v181; // [rsp+88h] [rbp-900h]
  __int64 *v182; // [rsp+90h] [rbp-8F8h]
  __int64 *v183; // [rsp+98h] [rbp-8F0h]
  __int64 *v184; // [rsp+A0h] [rbp-8E8h]
  __int64 *v185; // [rsp+A8h] [rbp-8E0h]
  __int64 *v186; // [rsp+B0h] [rbp-8D8h]
  void **v187; // [rsp+B8h] [rbp-8D0h]
  __int64 *v188; // [rsp+C0h] [rbp-8C8h]
  __int64 v189; // [rsp+C8h] [rbp-8C0h]
  __m128i v190; // [rsp+D0h] [rbp-8B8h] BYREF
  __int64 v191; // [rsp+E0h] [rbp-8A8h]
  __int64 v192; // [rsp+E8h] [rbp-8A0h]
  __int128 v193; // [rsp+F0h] [rbp-898h]
  __m128i v194; // [rsp+100h] [rbp-888h] BYREF
  __int64 *v195; // [rsp+110h] [rbp-878h]
  _BYTE *v196; // [rsp+118h] [rbp-870h]
  _BYTE *v197; // [rsp+120h] [rbp-868h]
  _BYTE *v198; // [rsp+128h] [rbp-860h]
  unsigned __int8 **v199; // [rsp+130h] [rbp-858h]
  __int64 v200; // [rsp+138h] [rbp-850h]
  __int64 v201; // [rsp+140h] [rbp-848h] BYREF
  __int64 v202; // [rsp+148h] [rbp-840h]
  __int64 *v203; // [rsp+150h] [rbp-838h]
  void *v204; // [rsp+160h] [rbp-828h] BYREF
  void **v205; // [rsp+168h] [rbp-820h]
  __int64 v206; // [rsp+170h] [rbp-818h]
  void *v207; // [rsp+180h] [rbp-808h] BYREF
  void **v208; // [rsp+188h] [rbp-800h]
  __int64 v209; // [rsp+190h] [rbp-7F8h]
  unsigned __int64 v210; // [rsp+1A0h] [rbp-7E8h] BYREF
  char v211; // [rsp+1B0h] [rbp-7D8h]
  _BYTE v212[32]; // [rsp+1C0h] [rbp-7C8h] BYREF
  _BYTE v213[32]; // [rsp+1E0h] [rbp-7A8h] BYREF
  _BYTE v214[32]; // [rsp+200h] [rbp-788h] BYREF
  _BYTE v215[32]; // [rsp+220h] [rbp-768h] BYREF
  _BYTE v216[32]; // [rsp+240h] [rbp-748h] BYREF
  _BYTE v217[32]; // [rsp+260h] [rbp-728h] BYREF
  __int64 *v218; // [rsp+280h] [rbp-708h] BYREF
  char v219; // [rsp+290h] [rbp-6F8h]
  _BYTE v220[32]; // [rsp+2A0h] [rbp-6E8h] BYREF
  _BYTE v221[32]; // [rsp+2C0h] [rbp-6C8h] BYREF
  _BYTE v222[32]; // [rsp+2E0h] [rbp-6A8h] BYREF
  _BYTE v223[32]; // [rsp+300h] [rbp-688h] BYREF
  _BYTE v224[32]; // [rsp+320h] [rbp-668h] BYREF
  _BYTE v225[32]; // [rsp+340h] [rbp-648h] BYREF
  void *v226; // [rsp+360h] [rbp-628h] BYREF
  __int64 v227; // [rsp+368h] [rbp-620h]
  __int64 v228; // [rsp+370h] [rbp-618h] BYREF
  void *v229; // [rsp+380h] [rbp-608h]
  __int64 v230; // [rsp+388h] [rbp-600h]
  char v231[16]; // [rsp+390h] [rbp-5F8h] BYREF
  void *v232; // [rsp+3A0h] [rbp-5E8h]
  __int64 v233; // [rsp+3A8h] [rbp-5E0h]
  char v234[16]; // [rsp+3B0h] [rbp-5D8h] BYREF
  __int64 v235[3]; // [rsp+3C0h] [rbp-5C8h] BYREF
  void *v236; // [rsp+3D8h] [rbp-5B0h] BYREF
  void **v237; // [rsp+3E0h] [rbp-5A8h]
  __int64 v238; // [rsp+3E8h] [rbp-5A0h]
  _QWORD v239[3]; // [rsp+3F0h] [rbp-598h] BYREF
  _BYTE v240[24]; // [rsp+408h] [rbp-580h] BYREF
  _QWORD v241[3]; // [rsp+420h] [rbp-568h] BYREF
  _BYTE v242[24]; // [rsp+438h] [rbp-550h] BYREF
  _QWORD v243[3]; // [rsp+450h] [rbp-538h] BYREF
  _BYTE v244[24]; // [rsp+468h] [rbp-520h] BYREF
  _QWORD v245[3]; // [rsp+480h] [rbp-508h] BYREF
  _BYTE v246[24]; // [rsp+498h] [rbp-4F0h] BYREF
  __int128 v247; // [rsp+4B0h] [rbp-4D8h] BYREF
  __int128 v248; // [rsp+4C0h] [rbp-4C8h]
  __int128 v249; // [rsp+4D0h] [rbp-4B8h]
  __int64 v250; // [rsp+4E0h] [rbp-4A8h]
  __int128 v251; // [rsp+4F0h] [rbp-498h] BYREF
  __int128 v252; // [rsp+500h] [rbp-488h]
  __int128 v253; // [rsp+510h] [rbp-478h]
  __int64 v254; // [rsp+520h] [rbp-468h]
  unsigned __int8 *v255[3]; // [rsp+530h] [rbp-458h] BYREF
  char v256; // [rsp+548h] [rbp-440h] BYREF
  __m128i v257; // [rsp+568h] [rbp-420h] BYREF
  __m128i v258; // [rsp+578h] [rbp-410h] BYREF
  __m128i v259; // [rsp+588h] [rbp-400h] BYREF
  __int16 v260; // [rsp+598h] [rbp-3F0h]
  char v261; // [rsp+59Ah] [rbp-3EEh]
  void *ptr[3]; // [rsp+5A0h] [rbp-3E8h] BYREF
  char v263; // [rsp+5B8h] [rbp-3D0h] BYREF
  __m128i v264; // [rsp+5D8h] [rbp-3B0h] BYREF
  __m128i v265; // [rsp+5E8h] [rbp-3A0h] BYREF
  __m128i v266; // [rsp+5F8h] [rbp-390h] BYREF
  __int16 v267; // [rsp+608h] [rbp-380h]
  char v268; // [rsp+60Ah] [rbp-37Eh]
  void *v269; // [rsp+610h] [rbp-378h] BYREF
  __m128i v270; // [rsp+618h] [rbp-370h]
  _BYTE v271[32]; // [rsp+628h] [rbp-360h] BYREF
  __m128i v272; // [rsp+648h] [rbp-340h] BYREF
  __m128i v273; // [rsp+658h] [rbp-330h] BYREF
  __m128i v274; // [rsp+668h] [rbp-320h] BYREF
  __int16 v275; // [rsp+678h] [rbp-310h]
  char v276; // [rsp+67Ah] [rbp-30Eh]
  void *v277; // [rsp+680h] [rbp-308h] BYREF
  __m128i v278; // [rsp+688h] [rbp-300h]
  _BYTE v279[32]; // [rsp+698h] [rbp-2F0h] BYREF
  __m128i v280; // [rsp+6B8h] [rbp-2D0h] BYREF
  __m128i v281; // [rsp+6C8h] [rbp-2C0h] BYREF
  __m128i v282; // [rsp+6D8h] [rbp-2B0h] BYREF
  __int16 v283; // [rsp+6E8h] [rbp-2A0h]
  char v284; // [rsp+6EAh] [rbp-29Eh]
  void *v285; // [rsp+6F0h] [rbp-298h] BYREF
  __m128i v286; // [rsp+6F8h] [rbp-290h]
  _BYTE v287[32]; // [rsp+708h] [rbp-280h] BYREF
  __m128i v288; // [rsp+728h] [rbp-260h] BYREF
  __m128i v289; // [rsp+738h] [rbp-250h] BYREF
  __m128i v290; // [rsp+748h] [rbp-240h] BYREF
  __int16 v291; // [rsp+758h] [rbp-230h]
  char v292; // [rsp+75Ah] [rbp-22Eh]
  void *v293; // [rsp+760h] [rbp-228h] BYREF
  __m128i v294; // [rsp+768h] [rbp-220h]
  _BYTE v295[32]; // [rsp+778h] [rbp-210h] BYREF
  __m128i v296; // [rsp+798h] [rbp-1F0h] BYREF
  __m128i v297; // [rsp+7A8h] [rbp-1E0h] BYREF
  __m128i v298; // [rsp+7B8h] [rbp-1D0h] BYREF
  __int16 v299; // [rsp+7C8h] [rbp-1C0h]
  char v300; // [rsp+7CAh] [rbp-1BEh]
  void *v301; // [rsp+7D0h] [rbp-1B8h] BYREF
  __m128i v302; // [rsp+7D8h] [rbp-1B0h]
  _BYTE v303[32]; // [rsp+7E8h] [rbp-1A0h] BYREF
  __m128i v304; // [rsp+808h] [rbp-180h] BYREF
  __m128i v305; // [rsp+818h] [rbp-170h] BYREF
  __m128i v306; // [rsp+828h] [rbp-160h] BYREF
  __int16 v307; // [rsp+838h] [rbp-150h]
  char v308; // [rsp+83Ah] [rbp-14Eh]
  void *v309; // [rsp+840h] [rbp-148h] BYREF
  __m128i v310; // [rsp+848h] [rbp-140h] BYREF
  _BYTE v311[32]; // [rsp+858h] [rbp-130h] BYREF
  __m128i v312; // [rsp+878h] [rbp-110h] BYREF
  __m128i v313; // [rsp+888h] [rbp-100h] BYREF
  __m128i v314; // [rsp+898h] [rbp-F0h] BYREF
  __int16 v315; // [rsp+8A8h] [rbp-E0h]
  char v316; // [rsp+8AAh] [rbp-DEh]
  void *v317; // [rsp+8B0h] [rbp-D8h] BYREF
  __m128i v318; // [rsp+8B8h] [rbp-D0h]
  _BYTE v319[192]; // [rsp+8C8h] [rbp-C0h] BYREF

  if ( a2 )
  {
    v6 = a2;
    v162 = a2;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v6 + 58) & 8) != 0 )
        goto LABEL_56;
      v8 = v6;
      v317 = *(void **)(v6 + 40);
      sub_C87500(&v226, &v317);
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
      v318 = si128;
      v317 = v319;
      sub_11240B0(v8, &v317);
      sub_CAE550(&v201, *(_QWORD *)(*a1 + 2152LL), *(unsigned int *)(v8 + 24), 1);
      v10 = v8;
      v163 = (__m128i *)sub_6B37C0(*a1);
      if ( v163
        || (*(_BYTE *)(v8 + 28) & 0x7Fu) - 32 <= 0x11
        && (v43 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(v162 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (v10 = v43) != 0)
        && (v44 = *(_BYTE *)(v43 + 74), (v44 & 4) != 0)
        && (v44 & 1) != 0
        && (v163 = (__m128i *)sub_6B37C0(*a1)) != nullptr
        || (v10 = v162, (v163 = (__m128i *)sub_6F4910(*a1, v162, 0)) != nullptr) )
      {
        v11 = sub_6BB140(*a1, v10);
        sub_AA92F0(&v309, v163, *(_QWORD *)(*a1 + 2152LL), v11);
        v12 = (const __m128i *)v310.m128i_i64[0];
        v163 = (__m128i *)v309;
        v172 = v310.m128i_i64[1];
      }
      else
      {
        v12 = nullptr;
        v172 = 0;
      }
      v171.m128i_i64[0] = (__int64)&v204;
      sub_FD7A30(&v204, v162);
      v13 = sub_FCE190(&v207, v162);
      sub_648780((__int64)v235, v162, v13, *(double *)si128.m128i_i64, *(double *)a5.m128i_i64, a6);
      v14 = a1[1];
      v15 = (*(_BYTE *)(v162 + 58) & 2) == 0;
      v173 = 0;
      v16 = *(_DWORD *)(v162 + 24);
      v164 = v14;
      v17 = *(_QWORD *)(*a1 + 2152LL);
      if ( v15 )
      {
        if ( v16 )
        {
          v38 = sub_CAE830(v17);
          v173 = v38 != 3 && v38 != 0;
        }
        sub_766420(v255, v162);
        v39 = (_QWORD *)(*(_QWORD *)(v162 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v162 + 16) & 4) != 0 )
          v39 = (_QWORD *)*v39;
        if ( v39 && (v40 = sub_79A2E0(v39)) != 0 && (*(_BYTE *)(v40 + 28) & 0x7F) != 0 )
        {
          sub_63E460((__int64)&v247, (__int64)a1, v40);
        }
        else
        {
          v250 = 0;
          v247 = 0;
          v248 = 0;
          v249 = 0;
        }
        v174 = (__int64 *)v226;
        v175 = v227;
        v41 = (char *)sub_FC8E80(v164, v317, v318.m128i_i64[0]);
        v177 = v42;
        v310 = (__m128i)v42;
        v176 = v41;
        v309 = v41;
        sub_64F120((__int64)&v218, v164 + 160, (__m128i *)&v309, &v310.m128i_i64[1]);
        v178 = v218;
        if ( v310.m128i_i64[1] )
          (**(void (__fastcall ***)(__int64))v310.m128i_i64[1])(v310.m128i_i64[1]);
        if ( !v219 )
          goto LABEL_72;
        v86 = sub_63DDF0(v164, 416, 4);
        v179 = v243;
        sub_646AF0(v243, v235);
        v180 = (__int64 *)v244;
        sub_644390((__int64)v244, (__int64 *)&v236);
        v181 = (__int64 *)v220;
        sub_644390((__int64)v220, (__int64 *)&v207);
        v182 = (__int64 *)v221;
        sub_644390((__int64)v221, (__int64 *)v171.m128i_i64[0]);
        v187 = &v293;
        v198 = v295;
        v293 = v295;
        v171 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
        v294 = v171;
        if ( v255[1] )
          sub_63DE60((__int64)v187, v255);
        v87 = _mm_loadu_si128(&v257);
        v299 = v260;
        v296 = v87;
        v88 = _mm_loadu_si128(&v258);
        v300 = v261;
        v297 = v88;
        v298 = _mm_loadu_si128(&v259);
        v89 = sub_FC8E80(v164, v174, v175);
        v91 = v90;
        v92 = v247;
        v93 = _mm_loadh_ps((const double *)&v201);
        *((_QWORD *)&v193 + 1) = *((_QWORD *)&v247 + 1);
        v194 = (__m128i)v93;
        *(_QWORD *)&v193 = *((_QWORD *)&v248 + 1);
        v191 = v248;
        v190.m128i_i64[0] = *((_QWORD *)&v249 + 1);
        v192 = v249;
        v189 = v202;
        v195 = v203;
        v185 = v245;
        sub_646AF0(v245, v179);
        v186 = (__int64 *)v246;
        sub_644390((__int64)v246, v180);
        v184 = (__int64 *)v223;
        sub_644390((__int64)v223, v181);
        v183 = (__int64 *)v222;
        sub_644390((__int64)v222, v182);
        v94 = _mm_load_si128(&v171);
        v199 = (unsigned __int8 **)&v301;
        v196 = v303;
        v301 = v303;
        v302 = v94;
        if ( v294.m128i_i64[0] )
          sub_63DE60((__int64)v199, (unsigned __int8 **)v187);
        v95 = _mm_loadu_si128(&v296);
        strcpy(v234, "public");
        v307 = v299;
        v304 = v95;
        v96 = _mm_loadu_si128(&v297);
        v308 = v300;
        v174 = (__int64 *)v234;
        v232 = v234;
        v305 = v96;
        v97 = _mm_loadu_si128(&v298);
        v188 = (__int64 *)v225;
        v306 = v97;
        v233 = 6;
        sub_644390((__int64)v225, v184);
        v57 = (void **)v224;
        v187 = (void **)v224;
        sub_644390((__int64)v224, v183);
        v98 = _mm_load_si128(&v171);
        v197 = v311;
        v309 = v311;
        v310 = v98;
        if ( v302.m128i_i64[0] )
        {
          v57 = &v309;
          sub_63DE60((__int64)&v309, v199);
        }
        v99 = _mm_loadu_si128(&v304);
        a5 = _mm_load_si128(&v194);
        v315 = v307;
        v312 = v99;
        v100 = _mm_loadu_si128(&v305);
        v316 = v308;
        v313 = v100;
        v314 = _mm_loadu_si128(&v306);
        *(_QWORD *)v86 = &off_49F4B08;
        v101 = v176;
        *(_QWORD *)(v86 + 24) = v89;
        *(_QWORD *)(v86 + 8) = v101;
        v102 = v177;
        *(_QWORD *)(v86 + 32) = v91;
        *(_QWORD *)(v86 + 16) = v102;
        v103 = *((_QWORD *)&v193 + 1);
        *(_QWORD *)(v86 + 40) = v92;
        *(_QWORD *)(v86 + 48) = v103;
        v104 = v191;
        *(__m128i *)(v86 + 88) = a5;
        *(_QWORD *)(v86 + 56) = v104;
        *(_QWORD *)(v86 + 64) = v193;
        *(_QWORD *)(v86 + 72) = v192;
        *(_QWORD *)(v86 + 80) = v190.m128i_i64[0];
        *(_QWORD *)(v86 + 104) = v189;
        a6 = (__m128)_mm_load_si128(&v171);
        *(_QWORD *)(v86 + 112) = v195;
        *(_QWORD *)(v86 + 120) = v86 + 144;
        *(__m128 *)(v86 + 128) = a6;
        if ( v310.m128i_i64[0] )
        {
          v57 = (void **)(v86 + 120);
          sub_63DE60(v86 + 120, (unsigned __int8 **)&v309);
        }
        v105 = _mm_loadu_si128(&v312);
        *(_WORD *)(v86 + 224) = v315;
        v106 = v316;
        *(__m128i *)(v86 + 176) = v105;
        v107 = _mm_loadu_si128(&v313);
        *(_BYTE *)(v86 + 226) = v106;
        v108 = *(_BYTE *)(v86 + 232);
        *(__m128i *)(v86 + 192) = v107;
        v109 = _mm_loadu_si128(&v314);
        *(_QWORD *)(v86 + 256) = 0;
        *(__m128i *)(v86 + 208) = v109;
        *(_BYTE *)(v86 + 232) = v108 & 0xC0 | 0x11;
        *(_OWORD *)(v86 + 240) = 0;
        v110 = (char *)v12 - (char *)v163;
        if ( v12 == v163 )
        {
          v111 = 0;
        }
        else
        {
          if ( (unsigned __int64)v110 > 0x7FFFFFFFFFFFFFD0LL )
          {
            if ( v110 < 0 )
LABEL_184:
              sub_555886(v57);
LABEL_186:
            std::__throw_bad_alloc();
          }
          v111 = operator new(v110);
        }
        *(_QWORD *)(v86 + 256) = v111 + v110;
        *(__m128i *)(v86 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v111, (__m128i)(unsigned __int64)v111);
        if ( v12 == v163 )
          goto LABEL_143;
        v171.m128i_i64[0] = v86;
        v112 = v163;
        while ( 2 )
        {
          v116 = v111 + 16;
          *(_QWORD *)v111 = v111 + 16;
          v117 = (char *)v112->m128i_i64[1];
          v118 = (_BYTE *)v112->m128i_i64[0];
          v285 = v117;
          if ( (unsigned __int64)v117 <= 0xF )
          {
            if ( v117 == (_BYTE *)&dword_0 + 1 )
            {
              *(_BYTE *)(v111 + 16) = *v118;
            }
            else if ( v117 )
            {
              goto LABEL_119;
            }
          }
          else
          {
            v119 = std::string::_M_create();
            *(_QWORD *)v111 = v119;
            v116 = v119;
            *(_QWORD *)(v111 + 16) = v285;
LABEL_119:
            memcpy((void *)v116, v118, (size_t)v117);
            v117 = (char *)v285;
            v116 = *(_QWORD *)v111;
          }
          *(_QWORD *)(v111 + 8) = v117;
          v112 += 5;
          v111 += 80;
          v117[v116] = 0;
          v113 = v112[-2].m128i_i64[0];
          *(__m128i *)(v111 - 48) = _mm_loadu_si128(v112 - 3);
          v114 = _mm_loadu_si128((const __m128i *)((char *)v112 - 24));
          *(_QWORD *)(v111 - 32) = v113;
          v115 = v112[-1].m128i_i64[1];
          *(__m128i *)(v111 - 24) = v114;
          *(_QWORD *)(v111 - 8) = v115;
          if ( v12 == v112 )
          {
            v86 = v171.m128i_i64[0];
            *(_QWORD *)(v171.m128i_i64[0] + 248) = v111;
LABEL_143:
            sub_644390(v86 + 264, (__int64 *)v187);
            sub_644390(v86 + 288, v188);
            v134 = v174;
            v135 = (__int64 *)v232;
            *(_BYTE *)(v86 + 312) = v173;
            v136 = (_QWORD *)(v86 + 336);
            *(_QWORD *)(v86 + 320) = v86 + 336;
            if ( v135 == v134 )
            {
              v138 = v233;
              v145 = v233 + 1;
              if ( (unsigned int)(v233 + 1) >= 8 )
              {
                *v136 = *(_QWORD *)v234;
                v147 = v174;
                *(_QWORD *)((char *)v136 + v145 - 8) = *(__int64 *)((char *)v174 + v145 - 8);
                v148 = (v86 + 344) & 0xFFFFFFFFFFFFFFF8LL;
                v149 = (char *)v136 - v148;
                v150 = ((_DWORD)v149 + v145) & 0xFFFFFFF8;
                v151 = (char *)((char *)v147 - v149);
                if ( v150 >= 8 )
                {
                  v152 = v150 & 0xFFFFFFF8;
                  v153 = 0;
                  do
                  {
                    v154 = v153;
                    v153 += 8;
                    *(_QWORD *)(v148 + v154) = *(_QWORD *)&v151[v154];
                  }
                  while ( v153 < v152 );
                }
                v138 = v233;
              }
              else if ( (v145 & 4) != 0 )
              {
                *(_DWORD *)v136 = *(_DWORD *)v234;
                *(_DWORD *)((char *)v136 + v145 - 4) = *(_DWORD *)((char *)v174 + v145 - 4);
                v138 = v233;
              }
              else if ( (_DWORD)v233 != -1 )
              {
                *(_BYTE *)v136 = v234[0];
                v138 = v233;
                if ( (v145 & 2) != 0 )
                {
                  *(_WORD *)((char *)v136 + v145 - 2) = *(_WORD *)((char *)v174 + v145 - 2);
                  v138 = v233;
                }
              }
            }
            else
            {
              v137 = *(_QWORD *)v234;
              *(_QWORD *)(v86 + 320) = v135;
              v138 = v233;
              *(_QWORD *)(v86 + 336) = v137;
            }
            v139 = v174;
            *(_QWORD *)(v86 + 328) = v138;
            *(_QWORD *)(v86 + 360) = 0;
            v232 = v139;
            v233 = 0;
            *(_QWORD *)(v86 + 352) = 0x2500000025LL;
            v234[0] = 0;
            if ( v309 != v197 )
              free(v309);
            sub_6441A0((__int64 *)v187);
            sub_6441A0(v188);
            if ( v232 != v174 )
              operator delete(v232, *(_QWORD *)v234 + 1LL);
            v140 = v185;
            *(_QWORD *)v86 = &off_49F4CB8;
            sub_646AF0((_QWORD *)(v86 + 368), v140);
            v141 = v186;
            sub_644390(v86 + 392, v186);
            if ( v301 != v196 )
              free(v301);
            sub_6441A0(v183);
            sub_6441A0(v184);
            sub_6441A0(v186);
            sub_647CF0(v185);
            *(_QWORD *)v86 = &off_4993298;
            if ( v293 != v198 )
              free(v293);
            sub_6441A0(v182);
            sub_6441A0(v181);
            sub_6441A0(v180);
            sub_647CF0(v179);
            v142 = (void (__fastcall ***)(_QWORD))v178[2];
            v178[2] = v86;
            if ( v142 )
              (**v142)(v142);
            v143 = *(_QWORD *)(v86 + 88);
            if ( v143 && (unsigned int)(*(_DWORD *)(v143 + 356) - 2) <= 0x13 && (v144 = sub_FC8C50(v143, v141)) != 0 )
              sub_FC8D50(v144, v86);
            else
              sub_64B900(v164 + 184, v86);
LABEL_72:
            v24 = v255[0];
            if ( (char *)v255[0] != &v256 )
              goto LABEL_19;
            goto LABEL_20;
          }
          continue;
        }
      }
      if ( v16 )
      {
        v18 = sub_CAE830(v17);
        v173 = v18 != 3 && v18 != 0;
      }
      sub_766420(ptr, v162);
      v19 = (_QWORD *)(*(_QWORD *)(v162 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v162 + 16) & 4) != 0 )
        v19 = (_QWORD *)*v19;
      if ( v19 && (v20 = sub_79A2E0(v19)) != 0 && (*(_BYTE *)(v20 + 28) & 0x7F) != 0 )
      {
        sub_63E460((__int64)&v251, (__int64)a1, v20);
      }
      else
      {
        v254 = 0;
        v251 = 0;
        v252 = 0;
        v253 = 0;
      }
      v174 = (__int64 *)v226;
      v175 = v227;
      v21 = (char *)sub_FC8E80(v164, v317, v318.m128i_i64[0]);
      v23 = v22;
      v310 = (__m128i)v22;
      v176 = v21;
      v309 = v21;
      sub_64F120((__int64)&v210, v164 + 160, (__m128i *)&v309, &v310.m128i_i64[1]);
      v177 = v210;
      if ( v310.m128i_i64[1] )
        (**(void (__fastcall ***)(__int64))v310.m128i_i64[1])(v310.m128i_i64[1]);
      if ( !v211 )
        goto LABEL_18;
      v179 = (__int64 *)sub_63DDF0(v164, 416, 4);
      v178 = v239;
      sub_646AF0(v239, v235);
      v180 = (__int64 *)v240;
      sub_644390((__int64)v240, (__int64 *)&v236);
      v181 = (__int64 *)v212;
      sub_644390((__int64)v212, (__int64 *)&v207);
      v182 = (__int64 *)v213;
      sub_644390((__int64)v213, (__int64 *)v171.m128i_i64[0]);
      v45 = v179;
      v196 = v271;
      v269 = v271;
      v171 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      v270 = v171;
      if ( ptr[1] )
      {
        sub_63DE60((__int64)&v269, (unsigned __int8 **)ptr);
        v45 = v179;
      }
      v184 = v45;
      v46 = _mm_loadu_si128(&v264);
      v275 = v267;
      v272 = v46;
      v47 = _mm_loadu_si128(&v265);
      v276 = v268;
      v273 = v47;
      v274 = _mm_loadu_si128(&v266);
      v48 = sub_FC8E80(v164, v174, v175);
      v50 = v49;
      a5 = (__m128i)_mm_loadh_ps((const double *)&v201);
      v195 = (__int64 *)v251;
      v190 = a5;
      v187 = *((void ***)&v251 + 1);
      v192 = *((_QWORD *)&v252 + 1);
      v189 = v252;
      v193 = v253;
      v191 = v202;
      v188 = v203;
      v183 = v241;
      sub_646AF0(v241, v178);
      v185 = (__int64 *)v242;
      sub_644390((__int64)v242, v180);
      v179 = (__int64 *)v215;
      sub_644390((__int64)v215, v181);
      v174 = (__int64 *)v214;
      sub_644390((__int64)v214, v182);
      v51 = _mm_load_si128(&v171);
      v199 = (unsigned __int8 **)&v277;
      v52 = v184;
      v197 = v279;
      v277 = v279;
      v278 = v51;
      if ( v270.m128i_i64[0] )
      {
        sub_63DE60((__int64)v199, (unsigned __int8 **)&v269);
        v52 = v184;
      }
      v53 = _mm_loadu_si128(&v272);
      v54 = v231;
      v194.m128i_i64[0] = (__int64)v52;
      v280 = v53;
      v55 = _mm_loadu_si128(&v273);
      v283 = v275;
      v281 = v55;
      v56 = _mm_loadu_si128(&v274);
      v284 = v276;
      v186 = (__int64 *)v217;
      v282 = v56;
      v229 = v231;
      strcpy(v231, "public");
      v230 = 6;
      sub_644390((__int64)v217, v179);
      v57 = (void **)v216;
      v184 = (__int64 *)v216;
      sub_644390((__int64)v216, v174);
      v58 = _mm_load_si128(&v171);
      v198 = v287;
      v59 = v194.m128i_i64[0];
      v60 = &v285;
      v285 = v287;
      v286 = v58;
      if ( v278.m128i_i64[0] )
      {
        v57 = &v285;
        v200 = v194.m128i_i64[0];
        v194.m128i_i64[0] = (__int64)&v285;
        sub_63DE60((__int64)&v285, v199);
        v59 = v200;
        v60 = (void **)v194.m128i_i64[0];
      }
      v61 = _mm_loadu_si128(&v280);
      v62 = _mm_load_si128(&v190);
      v291 = v283;
      v288 = v61;
      v63 = _mm_loadu_si128(&v281);
      v292 = v284;
      v289 = v63;
      v290 = _mm_loadu_si128(&v282);
      *(_QWORD *)v59 = &off_49F4B08;
      v64 = v176;
      *(_QWORD *)(v59 + 16) = v23;
      *(_QWORD *)(v59 + 8) = v64;
      v65 = v195;
      *(_QWORD *)(v59 + 24) = v48;
      *(_QWORD *)(v59 + 40) = v65;
      v66 = (__int64 *)v187;
      *(_QWORD *)(v59 + 32) = v50;
      *(_QWORD *)(v59 + 48) = v66;
      v67 = v189;
      *(__m128i *)(v59 + 88) = v62;
      *(_QWORD *)(v59 + 56) = v67;
      *(_QWORD *)(v59 + 64) = v192;
      *(_OWORD *)(v59 + 72) = v193;
      *(_QWORD *)(v59 + 104) = v191;
      v68 = _mm_load_si128(&v171);
      *(_QWORD *)(v59 + 112) = v188;
      *(_QWORD *)(v59 + 120) = v59 + 144;
      *(__m128i *)(v59 + 128) = v68;
      if ( v286.m128i_i64[0] )
      {
        v57 = (void **)(v59 + 120);
        v171.m128i_i64[0] = v59;
        sub_63DE60(v59 + 120, (unsigned __int8 **)v60);
        v59 = v171.m128i_i64[0];
      }
      v69 = _mm_loadu_si128(&v288);
      *(_WORD *)(v59 + 224) = v291;
      v70 = v292;
      *(__m128i *)(v59 + 176) = v69;
      v71 = _mm_loadu_si128(&v289);
      *(_BYTE *)(v59 + 226) = v70;
      v72 = *(_BYTE *)(v59 + 232);
      *(__m128i *)(v59 + 192) = v71;
      v73 = _mm_loadu_si128(&v290);
      *(_QWORD *)(v59 + 256) = 0;
      *(__m128i *)(v59 + 208) = v73;
      *(_BYTE *)(v59 + 232) = v72 & 0xC0 | 0x11;
      *(_OWORD *)(v59 + 240) = 0;
      v74 = (char *)v12 - (char *)v163;
      if ( v12 == v163 )
      {
        v76 = nullptr;
      }
      else
      {
        if ( (unsigned __int64)v74 > 0x7FFFFFFFFFFFFFD0LL )
        {
          if ( v74 < 0 )
            goto LABEL_184;
          goto LABEL_186;
        }
        v171.m128i_i64[0] = v59;
        v75 = operator new(v74);
        v59 = v171.m128i_i64[0];
        v76 = (__m128i *)v75;
      }
      *(_QWORD *)(v59 + 256) = (char *)v76 + v74;
      *(__m128i *)(v59 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v76, (__m128i)(unsigned __int64)v76);
      if ( v12 == v163 )
        goto LABEL_125;
      v77 = v76;
      v171.m128i_i64[0] = v59;
      v78 = v163;
      v176 = v231;
      do
      {
        m128i_i64 = (__int64)v77[1].m128i_i64;
        v77->m128i_i64[0] = (__int64)v77[1].m128i_i64;
        v83 = (char *)v78->m128i_i64[1];
        v84 = (__int8 *)v78->m128i_i64[0];
        v309 = v83;
        if ( (unsigned __int64)v83 > 0xF )
        {
          v85 = std::string::_M_create();
          v77->m128i_i64[0] = v85;
          m128i_i64 = v85;
          v77[1].m128i_i64[0] = (__int64)v309;
LABEL_100:
          memcpy((void *)m128i_i64, v84, (size_t)v83);
          v83 = (char *)v309;
          m128i_i64 = v77->m128i_i64[0];
          goto LABEL_97;
        }
        if ( v83 != (_BYTE *)&dword_0 + 1 )
        {
          if ( !v83 )
            goto LABEL_97;
          goto LABEL_100;
        }
        v77[1].m128i_i8[0] = *v84;
LABEL_97:
        v77->m128i_i64[1] = (__int64)v83;
        v78 += 5;
        v77 += 5;
        v83[m128i_i64] = 0;
        v79 = v78[-2].m128i_i64[0];
        v77[-3] = _mm_loadu_si128(v78 - 3);
        v80 = _mm_loadu_si128((const __m128i *)((char *)v78 - 24));
        v77[-2].m128i_i64[0] = v79;
        v81 = v78[-1].m128i_i64[1];
        *(__m128i *)((char *)v77 - 24) = v80;
        v77[-1].m128i_i64[1] = v81;
      }
      while ( v12 != v78 );
      v59 = v171.m128i_i64[0];
      v54 = v176;
      *(_QWORD *)(v171.m128i_i64[0] + 248) = v77;
LABEL_125:
      v165 = v59;
      sub_644390(v59 + 264, v184);
      sub_644390(v165 + 288, v186);
      v120 = (_QWORD *)v165;
      v121 = (char *)v229;
      *(_BYTE *)(v165 + 312) = v173;
      v122 = (_QWORD *)(v165 + 336);
      *(_QWORD *)(v165 + 320) = v165 + 336;
      if ( v121 == v54 )
      {
        v124 = v230;
        v146 = v230 + 1;
        if ( (unsigned int)(v230 + 1) >= 8 )
        {
          *v122 = *(_QWORD *)v231;
          *(_QWORD *)((char *)v122 + v146 - 8) = *(_QWORD *)&v54[v146 - 8];
          v155 = (v165 + 344) & 0xFFFFFFFFFFFFFFF8LL;
          v156 = (char *)v122 - v155;
          v157 = (char *)(v54 - v156);
          v158 = ((_DWORD)v156 + v146) & 0xFFFFFFF8;
          if ( v158 >= 8 )
          {
            v159 = v158 & 0xFFFFFFF8;
            v160 = 0;
            do
            {
              v161 = v160;
              v160 += 8;
              *(_QWORD *)(v155 + v161) = *(_QWORD *)&v157[v161];
            }
            while ( v160 < v159 );
          }
          v124 = v230;
        }
        else if ( (v146 & 4) != 0 )
        {
          *(_DWORD *)v122 = *(_DWORD *)v231;
          *(_DWORD *)((char *)v122 + v146 - 4) = *(_DWORD *)&v54[v146 - 4];
          v124 = v230;
        }
        else if ( (_DWORD)v230 != -1 )
        {
          *(_BYTE *)v122 = v231[0];
          v124 = v230;
          if ( (v146 & 2) != 0 )
          {
            *(_WORD *)((char *)v122 + v146 - 2) = *(_WORD *)&v54[v146 - 2];
            v124 = v230;
          }
        }
      }
      else
      {
        v123 = *(_QWORD *)v231;
        *(_QWORD *)(v165 + 320) = v121;
        v124 = v230;
        *(_QWORD *)(v165 + 336) = v123;
      }
      *(_QWORD *)(v165 + 328) = v124;
      *(_QWORD *)(v165 + 360) = 0;
      *(_QWORD *)(v165 + 352) = 0x2600000026LL;
      v229 = v54;
      v230 = 0;
      v231[0] = 0;
      if ( v285 != v198 )
      {
        free(v285);
        v120 = (_QWORD *)v165;
      }
      v166 = v120;
      sub_6441A0(v184);
      sub_6441A0(v186);
      v125 = v166;
      if ( v229 != v54 )
      {
        operator delete(v229, *(_QWORD *)v231 + 1LL);
        v125 = v166;
      }
      v126 = v183;
      v167 = v125;
      *v125 = &off_49F4CB8;
      sub_646AF0(v125 + 46, v126);
      v127 = v185;
      sub_644390((__int64)(v167 + 49), v185);
      v128 = v167;
      if ( v277 != v197 )
      {
        free(v277);
        v128 = v167;
      }
      v168 = v128;
      sub_6441A0(v174);
      sub_6441A0(v179);
      sub_6441A0(v185);
      sub_647CF0(v183);
      v129 = v168;
      *v168 = &off_4993270;
      if ( v269 != v196 )
      {
        free(v269);
        v129 = v168;
      }
      v169 = (__int64)v129;
      sub_6441A0(v182);
      sub_6441A0(v181);
      sub_6441A0(v180);
      sub_647CF0(v178);
      v130 = v169;
      v131 = *(void (__fastcall ****)(_QWORD))(v177 + 16);
      *(_QWORD *)(v177 + 16) = v169;
      if ( v131 )
      {
        (**v131)(v131);
        v130 = v169;
      }
      v132 = *(_QWORD *)(v130 + 88);
      if ( v132
        && (unsigned int)(*(_DWORD *)(v132 + 356) - 2) <= 0x13
        && (v170 = v130, v133 = sub_FC8C50(v132, v127), v130 = v170, v133) )
      {
        sub_FC8D50(v133, v170);
      }
      else
      {
        sub_64B900(v164 + 184, v130);
      }
LABEL_18:
      v24 = (unsigned __int8 *)ptr[0];
      if ( ptr[0] != &v263 )
LABEL_19:
        free(v24);
LABEL_20:
      v25 = v236;
      v26 = v237;
      v27 = (void **)v236;
      if ( v237 != v236 )
      {
        do
        {
          v28 = (void **)v27[5];
          if ( v28 != v27 + 7 )
            operator delete(v28, (unsigned __int64)v27[7] + 1);
          if ( *v27 != v27 + 2 )
            operator delete(*v27, (unsigned __int64)v27[2] + 1);
          v27 += 10;
        }
        while ( v26 != v27 );
      }
      if ( v25 )
        operator delete(v25, v238 - (_QWORD)v25);
      sub_647CF0(v235);
      v29 = v208;
      v30 = (void **)v207;
      if ( v208 != v207 )
      {
        do
        {
          v31 = (void **)v30[5];
          if ( v31 != v30 + 7 )
            operator delete(v31, (unsigned __int64)v30[7] + 1);
          if ( *v30 != v30 + 2 )
            operator delete(*v30, (unsigned __int64)v30[2] + 1);
          v30 += 10;
        }
        while ( v29 != v30 );
        v30 = (void **)v207;
      }
      if ( v30 )
        operator delete(v30, v209 - (_QWORD)v30);
      v32 = v205;
      v33 = (void **)v204;
      if ( v205 != v204 )
      {
        do
        {
          v34 = (void **)v33[5];
          if ( v34 != v33 + 7 )
            operator delete(v34, (unsigned __int64)v33[7] + 1);
          if ( *v33 != v33 + 2 )
            operator delete(*v33, (unsigned __int64)v33[2] + 1);
          v33 += 10;
        }
        while ( v32 != v33 );
        v33 = (void **)v204;
      }
      if ( v33 )
        operator delete(v33, v206 - (_QWORD)v33);
      v35 = (void **)v163;
      if ( v12 != v163 )
      {
        do
        {
          if ( *v35 != v35 + 2 )
            operator delete(*v35, (unsigned __int64)v35[2] + 1);
          v35 += 10;
        }
        while ( v12 != (const __m128i *)v35 );
      }
      if ( v163 )
        operator delete(v163, v172 - (_QWORD)v163);
      if ( v317 != v319 )
        free(v317);
      if ( v226 != &v228 )
        operator delete(v226, v228 + 1);
LABEL_56:
      if ( *(_QWORD *)(v162 + 8) <= 7u )
        return;
      v36 = *(_QWORD *)(v162 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      while ( (*(_BYTE *)(v36 + 28) & 0x7F) != 0x10 )
      {
        v37 = *(_QWORD *)(v36 + 8);
        v36 = v37 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v37 <= 7 )
          return;
      }
      v162 = v36;
      v6 = v36;
    }
  }
}

