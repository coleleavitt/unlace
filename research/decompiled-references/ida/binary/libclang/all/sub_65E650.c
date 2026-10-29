void __fastcall sub_65E650(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned int *v6; // r13
  unsigned __int64 v7; // r12
  const char *v8; // r13
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rax
  __m128i v13; // xmm3
  __int64 v14; // rdx
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // rax
  char v19; // al
  int v20; // esi
  int v21; // eax
  const char *v22; // r12
  unsigned __int64 v23; // r13
  const char *v24; // rt1
  void *v25; // rax
  void *v26; // rdx
  void *v27; // rbx
  void *v28; // rbp
  void *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned int *v32; // r13
  __int64 v33; // rax
  char v34; // al
  unsigned __int64 v35; // rdx
  __int64 v36; // r14
  const char *v37; // r12
  unsigned __int64 v38; // r13
  const char *v39; // rt2
  __m128i v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  char v44; // al
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r14
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __int64 v51; // rax
  __int64 v52; // rdx
  __m128i v53; // xmm7
  __m128i v54; // xmm0
  __int64 v55; // rcx
  __m128i v56; // xmm0
  __m128i v57; // xmm6
  __int64 v58; // rcx
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  unsigned __int8 **v61; // rdi
  __m128 v62; // xmm4
  __m128i v63; // xmm0
  __m128i v64; // xmm7
  __m128i v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __m128i v69; // xmm3
  __int64 v70; // rax
  __m128 v71; // xmm6
  __m128i v72; // xmm0
  unsigned __int64 v73; // xmm4_8
  char v74; // al
  __int64 v75; // r12
  unsigned __int64 v76; // rbx
  __m128i v77; // xmm0
  char v78; // al
  __m128i v79; // xmm0
  unsigned __int8 **v80; // rdx
  __int64 v81; // rax
  __int64 *v82; // rbp
  __int64 *v83; // rax
  __int64 *v84; // rdi
  __int64 v85; // rax
  __m128i v86; // xmm0
  __int64 v87; // rax
  __int64 *v88; // rsi
  __int8 v89; // al
  unsigned __int8 **v90; // rcx
  char *v91; // rdx
  __int64 v92; // rax
  void *v93; // rax
  void (__fastcall ***v94)(_QWORD); // rdi
  __int64 v95; // rdi
  __int64 v96; // rax
  _QWORD *v97; // rbp
  __m128i v98; // xmm0
  __m128i v99; // xmm0
  __int64 *v100; // rax
  __m128i v101; // xmm0
  __m128i v102; // xmm0
  __m128i v103; // xmm0
  __m128i v104; // xmm0
  __int64 v105; // rdx
  int v106; // ebx
  __m128i v107; // xmm6
  __m128i v108; // xmm4
  __m128i v109; // xmm0
  __m128i v110; // xmm0
  __m128i v111; // xmm0
  void (__fastcall ***v112)(_QWORD); // rdi
  __int64 v113; // rdi
  __int64 v114; // rax
  int v115; // esi
  unsigned __int8 **v116; // rdi
  _DWORD *v117; // rax
  __int64 v118; // rdx
  __int32 v119; // esi
  _DWORD *v120; // rdi
  __int64 *v121; // rax
  __int64 v122; // rdx
  unsigned int v123; // ecx
  unsigned __int8 **v124; // rbx
  signed __int64 v125; // rdx
  char *v126; // rbx
  unsigned int v127; // eax
  unsigned int v128; // edx
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rdx
  unsigned __int8 **v134; // r10
  __m128i v135; // [rsp+0h] [rbp-718h]
  __m128i v136; // [rsp+10h] [rbp-708h]
  __m128i v137; // [rsp+38h] [rbp-6E0h]
  __m128i v138; // [rsp+A0h] [rbp-678h] BYREF
  __int64 *v139; // [rsp+B0h] [rbp-668h]
  unsigned __int8 **v140; // [rsp+B8h] [rbp-660h]
  __m128i v141; // [rsp+C0h] [rbp-658h] BYREF
  __m128i v142; // [rsp+D0h] [rbp-648h] BYREF
  _BYTE *v143; // [rsp+E0h] [rbp-638h]
  unsigned __int8 **v144; // [rsp+E8h] [rbp-630h]
  unsigned __int8 **v145; // [rsp+F0h] [rbp-628h]
  unsigned __int8 v146; // [rsp+FFh] [rbp-619h]
  unsigned __int8 **p_ptr; // [rsp+100h] [rbp-618h]
  __int64 v148; // [rsp+108h] [rbp-610h]
  _BYTE *v149; // [rsp+110h] [rbp-608h]
  _BYTE *v150; // [rsp+118h] [rbp-600h]
  __int64 *v151; // [rsp+120h] [rbp-5F8h]
  __int64 v152; // [rsp+128h] [rbp-5F0h]
  __int64 *v153; // [rsp+130h] [rbp-5E8h]
  __int64 *v154; // [rsp+138h] [rbp-5E0h]
  __int64 *v155; // [rsp+140h] [rbp-5D8h]
  __int64 *v156; // [rsp+148h] [rbp-5D0h]
  __int64 *v157; // [rsp+150h] [rbp-5C8h]
  unsigned __int8 **v158; // [rsp+158h] [rbp-5C0h]
  __int64 v159; // [rsp+160h] [rbp-5B8h]
  __int64 v160; // [rsp+168h] [rbp-5B0h]
  __int64 v161; // [rsp+170h] [rbp-5A8h]
  __int64 v162; // [rsp+178h] [rbp-5A0h]
  __int64 v163; // [rsp+180h] [rbp-598h]
  __int64 v164; // [rsp+188h] [rbp-590h]
  __int64 v165; // [rsp+190h] [rbp-588h]
  __int64 v166; // [rsp+198h] [rbp-580h]
  __m128 v167; // [rsp+1A0h] [rbp-578h] BYREF
  __int64 v168; // [rsp+1B0h] [rbp-568h]
  __int64 v169; // [rsp+1B8h] [rbp-560h]
  __int64 *v170; // [rsp+1C0h] [rbp-558h]
  _BYTE *v171; // [rsp+1C8h] [rbp-550h]
  __m128i v172; // [rsp+1D0h] [rbp-548h] BYREF
  __int64 v173; // [rsp+1E0h] [rbp-538h]
  __m128i v174; // [rsp+1F0h] [rbp-528h] BYREF
  __int64 v175; // [rsp+200h] [rbp-518h]
  __int64 v176[4]; // [rsp+210h] [rbp-508h] BYREF
  _BYTE v177[32]; // [rsp+230h] [rbp-4E8h] BYREF
  __int64 v178; // [rsp+250h] [rbp-4C8h] BYREF
  char v179; // [rsp+260h] [rbp-4B8h]
  _BYTE v180[32]; // [rsp+270h] [rbp-4A8h] BYREF
  _BYTE v181[32]; // [rsp+290h] [rbp-488h] BYREF
  _BYTE v182[32]; // [rsp+2B0h] [rbp-468h] BYREF
  _BYTE v183[32]; // [rsp+2D0h] [rbp-448h] BYREF
  _BYTE v184[32]; // [rsp+2F0h] [rbp-428h] BYREF
  _QWORD v185[2]; // [rsp+310h] [rbp-408h] BYREF
  char v186; // [rsp+320h] [rbp-3F8h]
  _BYTE v187[32]; // [rsp+330h] [rbp-3E8h] BYREF
  _BYTE v188[32]; // [rsp+350h] [rbp-3C8h] BYREF
  __m128i v189; // [rsp+370h] [rbp-3A8h] BYREF
  __int64 v190[2]; // [rsp+380h] [rbp-398h] BYREF
  void *v191; // [rsp+390h] [rbp-388h] BYREF
  __int64 v192; // [rsp+398h] [rbp-380h]
  _QWORD v193[2]; // [rsp+3A0h] [rbp-378h] BYREF
  void *v194; // [rsp+3B0h] [rbp-368h] BYREF
  __int64 v195; // [rsp+3B8h] [rbp-360h]
  _QWORD v196[2]; // [rsp+3C0h] [rbp-358h] BYREF
  _QWORD v197[6]; // [rsp+3D0h] [rbp-348h] BYREF
  __m128i v198; // [rsp+410h] [rbp-308h] BYREF
  __m128i v199; // [rsp+420h] [rbp-2F8h] BYREF
  __m128i v200; // [rsp+430h] [rbp-2E8h] BYREF
  __int64 v201; // [rsp+440h] [rbp-2D8h]
  __m128i v202; // [rsp+448h] [rbp-2D0h] BYREF
  __m128i v203; // [rsp+458h] [rbp-2C0h] BYREF
  __m128i v204; // [rsp+468h] [rbp-2B0h] BYREF
  __int16 v205; // [rsp+478h] [rbp-2A0h]
  char v206; // [rsp+47Ah] [rbp-29Eh]
  __m256i v207; // [rsp+480h] [rbp-298h] BYREF
  __m128i v208; // [rsp+4A0h] [rbp-278h] BYREF
  __int64 v209; // [rsp+4B0h] [rbp-268h]
  __m128i v210; // [rsp+4B8h] [rbp-260h] BYREF
  __m128i v211; // [rsp+4C8h] [rbp-250h] BYREF
  __m128i v212; // [rsp+4D8h] [rbp-240h] BYREF
  __int16 v213; // [rsp+4E8h] [rbp-230h]
  char v214; // [rsp+4EAh] [rbp-22Eh]
  void *ptr; // [rsp+4F0h] [rbp-228h] BYREF
  __m128i v216; // [rsp+4F8h] [rbp-220h]
  _BYTE v217[32]; // [rsp+508h] [rbp-210h] BYREF
  __m128i v218; // [rsp+528h] [rbp-1F0h] BYREF
  __m128i v219; // [rsp+538h] [rbp-1E0h] BYREF
  __m128i v220; // [rsp+548h] [rbp-1D0h] BYREF
  __int16 v221; // [rsp+558h] [rbp-1C0h]
  char v222; // [rsp+55Ah] [rbp-1BEh]
  _BYTE v223[24]; // [rsp+560h] [rbp-1B8h] BYREF
  _BYTE v224[32]; // [rsp+578h] [rbp-1A0h] BYREF
  __m128i v225; // [rsp+598h] [rbp-180h] BYREF
  __m128i v226; // [rsp+5A8h] [rbp-170h] BYREF
  __m128i v227; // [rsp+5B8h] [rbp-160h] BYREF
  __int16 v228; // [rsp+5C8h] [rbp-150h]
  char v229; // [rsp+5CAh] [rbp-14Eh]
  void *v230[3]; // [rsp+5D0h] [rbp-148h] BYREF
  _BYTE v231[32]; // [rsp+5E8h] [rbp-130h] BYREF
  __m128i v232; // [rsp+608h] [rbp-110h] BYREF
  __m128i v233; // [rsp+618h] [rbp-100h] BYREF
  __m128i v234; // [rsp+628h] [rbp-F0h] BYREF
  __int16 v235; // [rsp+638h] [rbp-E0h]
  char v236; // [rsp+63Ah] [rbp-DEh]
  void *v237; // [rsp+640h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+648h] [rbp-D0h]
  _BYTE v239[192]; // [rsp+658h] [rbp-C0h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(a2 + 40);
  if ( (v4 & 7) != 0
    || (v5 = v4 & 0xFFFFFFFFFFFFFFF8LL) == 0
    || (v6 = *(unsigned int **)(v5 + 16), v7 = *v6, v8 = (const char *)(v6 + 4), !v7) )
  {
    v9 = *(_QWORD *)(a2 + 120);
    if ( (v9 & 4) != 0 )
    {
      v7 = 0;
      v8 = nullptr;
    }
    else
    {
      v8 = nullptr;
      v7 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v7 )
      {
        v30 = *(_QWORD *)(v7 + 40);
        v8 = &byte_3B9466E;
        v7 = 0;
        if ( (v30 & 7) == 0 )
        {
          v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
          v7 = v31;
          if ( v31 )
          {
            v32 = *(unsigned int **)(v31 + 16);
            v7 = *v32;
            v8 = (const char *)(v32 + 4);
          }
        }
      }
    }
  }
  v143 = v239;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v237 = v239;
  sub_11240B0(a2, &v237);
  sub_CAE550(&v172, *(_QWORD *)(*a1 + 2152), *(unsigned int *)(a2 + 24), 1);
  v10 = *a1;
  v175 = 0;
  v11 = sub_6B37C0(v10);
  if ( v11
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 0x11
    && (v33 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (a2 = v33) != 0)
    && (v34 = *(_BYTE *)(v33 + 74), (v34 & 4) != 0)
    && (v34 & 1) != 0
    && (v11 = sub_6B37C0(*a1)) != 0
    || (a2 = v3, (v11 = sub_6F4910(*a1, v3, 0)) != 0) )
  {
    v12 = sub_6BB140(*a1, a2);
    sub_AA92F0(v223, v11, *(_QWORD *)(*a1 + 2152), v12);
    v13 = _mm_load_si128((const __m128i *)v223);
    v175 = *(_QWORD *)&v223[16];
    v140 = (unsigned __int8 **)v230;
    v138 = v13;
    memset(v230, 0, sizeof(v230));
    memset(v223, 0, sizeof(v223));
    sub_646A80((__int64 *)v230);
    sub_646A80((__int64 *)v223);
  }
  else
  {
    v140 = (unsigned __int8 **)v230;
    v138 = 0;
  }
  sub_FD3140(v176, v3);
  v139 = (__int64 *)v177;
  sub_FCD270(v177, v3);
  v14 = *(_QWORD *)(v3 + 40);
  v15 = a1[1];
  if ( *(_BYTE *)(v3 + 73) >> 5 != 2 )
  {
    if ( (v14 & 7) != 0 || (v16 = v14 & 0xFFFFFFFFFFFFFFF8LL) == 0 || (v17 = *(_DWORD **)(v16 + 16), v146 = 0, !*v17) )
    {
      v18 = *(_QWORD *)(v3 + 120);
      v146 = (v18 >> 2) & 1;
      if ( v146
        || (v45 = v18 & 0xFFFFFFFFFFFFFFF8LL) == 0
        || (v46 = *(_QWORD *)(v45 + 40), (v46 & 7) != 0)
        || (v47 = v46 & 0xFFFFFFFFFFFFFFF8LL) == 0
        || !**(_DWORD **)(v47 + 16) )
      {
        v19 = *(_BYTE *)(v3 + 74);
        v146 = 0;
        if ( (v19 & 4) != 0 )
          v146 = (v19 & 8) == 0;
      }
    }
    v20 = *(_DWORD *)(v3 + 24);
    v142.m128i_i8[0] = 0;
    if ( v20 )
    {
      v21 = sub_CAE830(*(_QWORD *)(*a1 + 2152));
      v142.m128i_i8[0] = v21 != 3 && v21 != 0;
    }
    v24 = v8;
    v23 = v7;
    v22 = v24;
    v144 = (unsigned __int8 **)&v198;
    sub_766420(&v198, v3);
    sub_63E5A0((__int64)v197, (__int64)a1, v3);
    v25 = (void *)sub_FC8E80(v15, v237, si128.m128i_i64[0]);
    v230[2] = nullptr;
    v230[1] = v26;
    v27 = v26;
    v230[0] = v25;
    v28 = v25;
    sub_64F120((__int64)&v178, v15 + 160, (__m128i *)v140, (__int64 *)&v230[2]);
    v148 = v178;
    if ( v230[2] )
      (**(void (__fastcall ***)(void *))v230[2])(v230[2]);
    if ( v179 )
    {
      v48 = sub_63DDF0(v15, 400, 4);
      v151 = (__int64 *)v180;
      sub_644390((__int64)v180, v139);
      v153 = (__int64 *)v181;
      sub_644390((__int64)v181, v176);
      v145 = (unsigned __int8 **)&v207;
      v170 = &v207.m256i_i64[3];
      v207.m256i_i64[0] = (__int64)&v207.m256i_i64[3];
      v141 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      *(__m128i *)&v207.m256i_u64[1] = v141;
      if ( v198.m128i_i64[1] )
        sub_63DE60((__int64)v145, v144);
      v210 = _mm_loadu_si128(&v202);
      v49 = _mm_loadu_si128(&v203);
      v213 = v205;
      v211 = v49;
      v50 = _mm_loadu_si128(&v204);
      v214 = v206;
      v212 = v50;
      v51 = sub_FC8E80(v15, v22, v23);
      v189.m128i_i64[0] = (__int64)v190;
      v168 = v51;
      v169 = v52;
      v165 = v197[0];
      v167 = _mm_loadh_ps((const double *)v172.m128i_i64);
      v164 = v197[1];
      strcpy((char *)v190, "public");
      v163 = v197[2];
      v189.m128i_i64[1] = 6;
      v162 = v197[3];
      v161 = v197[4];
      v160 = v197[5];
      v159 = v172.m128i_i64[1];
      v166 = v173;
      v155 = (__int64 *)v183;
      sub_644390((__int64)v183, v151);
      v154 = (__int64 *)v182;
      sub_644390((__int64)v182, v153);
      v53 = _mm_load_si128(&v141);
      p_ptr = (unsigned __int8 **)&ptr;
      v171 = v217;
      ptr = v217;
      v216 = v53;
      if ( v207.m256i_i64[1] )
        sub_63DE60((__int64)p_ptr, v145);
      v54 = _mm_loadu_si128(&v210);
      v191 = v193;
      v55 = v189.m128i_i64[1];
      v221 = v213;
      v218 = v54;
      v56 = _mm_loadu_si128(&v211);
      v222 = v214;
      v219 = v56;
      v220 = _mm_loadu_si128(&v212);
      if ( (__int64 *)v189.m128i_i64[0] == v190 )
      {
        v119 = v189.m128i_i32[2] + 1;
        v120 = v193;
        v121 = v190;
        if ( (unsigned int)(v189.m128i_i32[2] + 1) >= 8 )
        {
          LODWORD(v130) = 0;
          do
          {
            v131 = (unsigned int)v130;
            v130 = (unsigned int)(v130 + 8);
            *(_QWORD *)((char *)v193 + v131) = *(__int64 *)((char *)v190 + v131);
          }
          while ( (unsigned int)v130 < (v119 & 0xFFFFFFF8) );
          v120 = (_DWORD *)((char *)v193 + v130);
          v121 = (__int64 *)((char *)v190 + v130);
        }
        v122 = 0;
        if ( (v119 & 4) != 0 )
        {
          *v120 = *(_DWORD *)v121;
          v122 = 4;
        }
        if ( (v119 & 2) != 0 )
        {
          *(_WORD *)((char *)v120 + v122) = *(_WORD *)((char *)v121 + v122);
          v122 += 2;
        }
        if ( (v119 & 1) != 0 )
          *((_BYTE *)v120 + v122) = *((_BYTE *)v121 + v122);
      }
      else
      {
        v191 = (void *)v189.m128i_i64[0];
        v193[0] = v190[0];
      }
      v192 = v55;
      v156 = (__int64 *)v184;
      v189 = (__m128i)(unsigned __int64)v190;
      LOBYTE(v190[0]) = 0;
      sub_644390((__int64)v184, v155);
      v157 = v185;
      sub_644390((__int64)v185, v154);
      v57 = _mm_load_si128(&v141);
      v158 = (unsigned __int8 **)v223;
      v149 = v224;
      *(_QWORD *)v223 = v224;
      *(__m128i *)&v223[8] = v57;
      if ( v216.m128i_i64[0] )
        sub_63DE60((__int64)v158, p_ptr);
      v58 = v192;
      v59 = _mm_loadu_si128(&v218);
      v228 = v221;
      v225 = v59;
      v60 = _mm_loadu_si128(&v219);
      v229 = v222;
      p_ptr = (unsigned __int8 **)v196;
      v194 = v196;
      v226 = v60;
      v227 = _mm_loadu_si128(&v220);
      if ( v191 == v193 )
      {
        v115 = v192 + 1;
        v116 = p_ptr;
        v117 = v193;
        if ( (unsigned int)(v192 + 1) >= 8 )
        {
          LODWORD(v132) = 0;
          do
          {
            v133 = (unsigned int)v132;
            v134 = p_ptr;
            v132 = (unsigned int)(v132 + 8);
            *(unsigned __int8 **)((char *)p_ptr + v133) = *(unsigned __int8 **)((char *)v193 + v133);
          }
          while ( (unsigned int)v132 < (v115 & 0xFFFFFFF8) );
          v116 = (unsigned __int8 **)((char *)v134 + v132);
          v117 = (_DWORD *)((char *)v193 + v132);
        }
        v118 = 0;
        if ( (v115 & 4) != 0 )
        {
          *(_DWORD *)v116 = *v117;
          v118 = 4;
        }
        if ( (v115 & 2) != 0 )
        {
          *(_WORD *)((char *)v116 + v118) = *(_WORD *)((char *)v117 + v118);
          v118 += 2;
        }
        if ( (v115 & 1) != 0 )
          *((_BYTE *)v116 + v118) = *((_BYTE *)v117 + v118);
      }
      else
      {
        v194 = v191;
        v196[0] = v193[0];
      }
      v195 = v58;
      v145 = (unsigned __int8 **)v188;
      v191 = v193;
      v192 = 0;
      LOBYTE(v193[0]) = 0;
      sub_644390((__int64)v188, v156);
      v61 = (unsigned __int8 **)v187;
      v144 = (unsigned __int8 **)v187;
      sub_644390((__int64)v187, v157);
      v62 = (__m128)_mm_load_si128(&v141);
      v150 = v231;
      v230[0] = v231;
      *(__m128 *)&v230[1] = v62;
      if ( *(_QWORD *)&v223[8] )
      {
        v61 = v140;
        sub_63DE60((__int64)v140, v158);
      }
      v63 = _mm_loadu_si128(&v225);
      v64 = _mm_load_si128((const __m128i *)&v167);
      v235 = v228;
      v232 = v63;
      v65 = _mm_loadu_si128(&v226);
      v236 = v229;
      v233 = v65;
      v234 = _mm_loadu_si128(&v227);
      *(_QWORD *)v48 = &off_49F4B08;
      v66 = v168;
      *(_QWORD *)(v48 + 8) = v28;
      *(_QWORD *)(v48 + 24) = v66;
      v67 = v169;
      *(_QWORD *)(v48 + 16) = v27;
      *(_QWORD *)(v48 + 32) = v67;
      v68 = v165;
      *(__m128i *)(v48 + 88) = v64;
      *(_QWORD *)(v48 + 40) = v68;
      *(_QWORD *)(v48 + 48) = v164;
      *(_QWORD *)(v48 + 56) = v163;
      *(_QWORD *)(v48 + 64) = v162;
      *(_QWORD *)(v48 + 72) = v161;
      *(_QWORD *)(v48 + 80) = v160;
      v69 = _mm_load_si128(&v141);
      *(_QWORD *)(v48 + 104) = v159;
      v70 = v166;
      *(__m128i *)(v48 + 128) = v69;
      *(_QWORD *)(v48 + 112) = v70;
      *(_QWORD *)(v48 + 120) = v48 + 144;
      if ( v230[1] )
      {
        v61 = (unsigned __int8 **)(v48 + 120);
        sub_63DE60(v48 + 120, v140);
      }
      v71 = (__m128)_mm_load_si128(&v138);
      v72 = _mm_loadu_si128(&v232);
      *(_WORD *)(v48 + 224) = v235;
      v73 = _mm_movehl_ps(v62, v71).m128_u64[0];
      v74 = v236;
      v75 = v71.m128_u64[0];
      *(__m128i *)(v48 + 176) = v72;
      v76 = v73;
      v77 = _mm_loadu_si128(&v233);
      *(_BYTE *)(v48 + 226) = v74;
      v78 = *(_BYTE *)(v48 + 232);
      *(__m128i *)(v48 + 192) = v77;
      v79 = _mm_loadu_si128(&v234);
      *(_QWORD *)(v48 + 256) = 0;
      *(__m128i *)(v48 + 208) = v79;
      *(_BYTE *)(v48 + 232) = v78 & 0xC0 | 0x11;
      *(_OWORD *)(v48 + 240) = 0;
      v80 = (unsigned __int8 **)(v73 - v71.m128_u64[0]);
      if ( v73 == v71.m128_u64[0] )
      {
        v82 = nullptr;
      }
      else
      {
        if ( (unsigned __int64)v80 > 0x7FFFFFFFFFFFFFD0LL )
          sub_555886(v61);
        v140 = (unsigned __int8 **)(v73 - v71.m128_u64[0]);
        v81 = operator new(v73 - v71.m128_u64[0]);
        v80 = v140;
        v82 = (__int64 *)v81;
      }
      *(_QWORD *)(v48 + 256) = (char *)v80 + (_QWORD)v82;
      *(__m128i *)(v48 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v82, (__m128i)(unsigned __int64)v82);
      if ( v76 != v71.m128_u64[0] )
      {
        do
        {
          v83 = v82 + 2;
          v84 = v82;
          v75 += 80;
          v82 += 10;
          *(v82 - 10) = (__int64)v83;
          sub_63E170(v84, *(_BYTE **)(v75 - 80), *(_QWORD *)(v75 - 80) + *(_QWORD *)(v75 - 72));
          v85 = *(_QWORD *)(v75 - 32);
          *((__m128i *)v82 - 3) = _mm_loadu_si128((const __m128i *)(v75 - 48));
          v86 = _mm_loadu_si128((const __m128i *)(v75 - 24));
          *(v82 - 4) = v85;
          v87 = *(_QWORD *)(v75 - 8);
          *(__m128i *)(v82 - 3) = v86;
          *(v82 - 1) = v87;
        }
        while ( v76 != v75 );
        *(_QWORD *)(v48 + 248) = v82;
      }
      sub_644390(v48 + 264, (__int64 *)v144);
      v88 = (__int64 *)v145;
      sub_644390(v48 + 288, (__int64 *)v145);
      v89 = v142.m128i_i8[0];
      v90 = p_ptr;
      v91 = (char *)(v48 + 336);
      *(_QWORD *)(v48 + 320) = v48 + 336;
      *(_BYTE *)(v48 + 312) = v89;
      if ( v194 == v90 )
      {
        v92 = v195;
        v123 = v195 + 1;
        if ( (unsigned int)(v195 + 1) >= 8 )
        {
          *(_QWORD *)v91 = v196[0];
          v124 = p_ptr;
          *(_QWORD *)&v91[v123 - 8] = *(unsigned __int8 **)((char *)p_ptr + v123 - 8);
          v88 = (__int64 *)((v48 + 344) & 0xFFFFFFFFFFFFFFF8LL);
          v125 = v91 - (char *)v88;
          v126 = (char *)v124 - v125;
          if ( ((v123 + (_DWORD)v125) & 0xFFFFFFF8) >= 8 )
          {
            v127 = (v123 + v125) & 0xFFFFFFF8;
            v128 = 0;
            do
            {
              v129 = v128;
              v128 += 8;
              *(__int64 *)((char *)v88 + v129) = *(_QWORD *)&v126[v129];
            }
            while ( v128 < v127 );
          }
          v92 = v195;
        }
        else if ( (v123 & 4) != 0 )
        {
          *(_DWORD *)v91 = v196[0];
          *(_DWORD *)&v91[v123 - 4] = *(_DWORD *)((char *)p_ptr + v123 - 4);
          v92 = v195;
        }
        else if ( (_DWORD)v195 != -1 )
        {
          *v91 = v196[0];
          v92 = v195;
          if ( (v123 & 2) != 0 )
          {
            *(_WORD *)&v91[v123 - 2] = *(_WORD *)((char *)p_ptr + v123 - 2);
            v92 = v195;
          }
        }
      }
      else
      {
        *(_QWORD *)(v48 + 320) = v194;
        *(_QWORD *)(v48 + 336) = v196[0];
        v92 = v195;
      }
      *(_QWORD *)(v48 + 328) = v92;
      v195 = 0;
      v194 = p_ptr;
      LOBYTE(v196[0]) = 0;
      *(_QWORD *)(v48 + 352) = 0x400000004LL;
      v93 = v150;
      *(_QWORD *)(v48 + 360) = 0;
      if ( v230[0] != v93 )
        free(v230[0]);
      sub_6441A0((__int64 *)v144);
      sub_6441A0((__int64 *)v145);
      if ( v194 != p_ptr )
      {
        v88 = (__int64 *)(v196[0] + 1LL);
        operator delete(v194, v196[0] + 1LL);
      }
      *(_DWORD *)(v48 + 368) = 4;
      *(_OWORD *)(v48 + 376) = 0;
      *(_QWORD *)v48 = &off_49F4BF0;
      *(_BYTE *)(v48 + 392) = v146;
      if ( *(_BYTE **)v223 != v149 )
        free(*(void **)v223);
      sub_6441A0(v157);
      sub_6441A0(v156);
      if ( v191 != v193 )
      {
        v88 = (__int64 *)(v193[0] + 1LL);
        operator delete(v191, v193[0] + 1LL);
      }
      *(_QWORD *)v48 = &off_49F4C30;
      if ( ptr != v171 )
        free(ptr);
      sub_6441A0(v154);
      sub_6441A0(v155);
      std::string::_M_dispose();
      *(_QWORD *)v48 = &off_4993090;
      if ( (__int64 *)v207.m256i_i64[0] != v170 )
        free((void *)v207.m256i_i64[0]);
      sub_6441A0(v153);
      sub_6441A0(v151);
      v94 = *(void (__fastcall ****)(_QWORD))(v148 + 16);
      *(_QWORD *)(v148 + 16) = v48;
      if ( v94 )
        (**v94)(v94);
      v95 = *(_QWORD *)(v48 + 88);
      if ( v95 && (unsigned int)(*(_DWORD *)(v95 + 356) - 2) <= 0x13 && (v96 = sub_FC8C50(v95, v88)) != 0 )
        sub_FC8D50(v96, v48);
      else
        sub_64B900(v15 + 184, v48);
    }
    v29 = (void *)v198.m128i_i64[0];
    if ( (unsigned __int64 *)v198.m128i_i64[0] == &v199.m128i_u64[1] )
      goto LABEL_41;
LABEL_40:
    free(v29);
    goto LABEL_41;
  }
  if ( (v14 & 7) != 0 || (v35 = v14 & 0xFFFFFFFFFFFFFFF8LL) == 0 || (LOBYTE(v36) = 0, !**(_DWORD **)(v35 + 16)) )
  {
    v36 = (*(__int64 *)(v3 + 120) >> 2) & 1;
    if ( ((*(__int64 *)(v3 + 120) >> 2) & 1) != 0
      || (v41 = *(_QWORD *)(v3 + 120) & 0xFFFFFFFFFFFFFFF8LL) == 0
      || (v42 = *(_QWORD *)(v41 + 40), (v42 & 7) != 0)
      || (v43 = v42 & 0xFFFFFFFFFFFFFFF8LL) == 0
      || !**(_DWORD **)(v43 + 16) )
    {
      v44 = *(_BYTE *)(v3 + 74);
      LOBYTE(v36) = 0;
      if ( (v44 & 4) != 0 )
        LOBYTE(v36) = (v44 & 8) == 0;
    }
  }
  v39 = v8;
  v38 = v7;
  v37 = v39;
  v146 = sub_63DE20(*a1, *(_DWORD *)(v3 + 24));
  p_ptr = (unsigned __int8 **)&ptr;
  sub_766420(&ptr, v3);
  sub_63E5A0((__int64)&v198, (__int64)a1, v3);
  v40.m128i_i64[0] = sub_FC8E80(v15, v237, si128.m128i_i64[0]);
  v230[2] = nullptr;
  v142 = v40;
  *(__m128i *)v230 = _mm_load_si128(&v142);
  sub_64F120((__int64)v185, v15 + 160, (__m128i *)v140, (__int64 *)&v230[2]);
  v148 = v185[0];
  if ( v230[2] )
    (**(void (__fastcall ***)(void *))v230[2])(v230[2]);
  if ( v186 )
  {
    v97 = (_QWORD *)sub_63DDF0(v15, 400, 4);
    v144 = (unsigned __int8 **)v187;
    sub_644390((__int64)v187, v139);
    v145 = (unsigned __int8 **)v188;
    sub_644390((__int64)v188, v176);
    v158 = (unsigned __int8 **)v223;
    v149 = v224;
    *(_QWORD *)v223 = v224;
    v141 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    *(__m128i *)&v223[8] = v141;
    if ( v216.m128i_i64[0] )
      sub_63DE60((__int64)v158, p_ptr);
    v225 = _mm_loadu_si128(&v218);
    v98 = _mm_loadu_si128(&v219);
    v228 = v221;
    v226 = v98;
    v99 = _mm_loadu_si128(&v220);
    v229 = v222;
    v227 = v99;
    v100 = (__int64 *)sub_FC8E80(v15, v37, v38);
    v101 = _mm_load_si128(&v198);
    v151 = v100;
    *(__m128i *)v207.m256i_i8 = v101;
    v102 = _mm_load_si128(&v199);
    v209 = v201;
    *(__m128i *)&v207.m256i_u64[2] = v102;
    v103 = _mm_load_si128(&v200);
    v190[0] = v173;
    v208 = v103;
    v104 = _mm_load_si128(&v172);
    p_ptr = (unsigned __int8 **)v197;
    v152 = v105;
    v189 = v104;
    sub_63E610((__int64)v197);
    v106 = v146;
    sub_644390((__int64)&v194, (__int64 *)v144);
    sub_644390((__int64)&v191, (__int64 *)v145);
    v107 = _mm_load_si128(&v141);
    v150 = v231;
    v230[0] = v231;
    *(__m128i *)&v230[1] = v107;
    if ( *(_QWORD *)&v223[8] )
      sub_63DE60((__int64)v140, v158);
    v108 = _mm_load_si128(&v138);
    v232 = _mm_loadu_si128(&v225);
    v109 = _mm_loadu_si128(&v226);
    v235 = v228;
    v233 = v109;
    v110 = _mm_loadu_si128(&v227);
    v174 = v108;
    v234 = v110;
    v236 = v229;
    v137 = _mm_load_si128(&v189);
    v135 = _mm_load_si128((const __m128i *)&v207);
    v136 = _mm_load_si128((const __m128i *)&v207.m256i_u64[2]);
    v111 = _mm_load_si128(&v208);
    sub_6450B0(
      (__int64)v97,
      5u,
      v142.m128i_i64[0],
      v142.m128i_i64[1],
      (__int64)v151,
      v152,
      v135.m128i_i64[0],
      v135.m128i_i64[1],
      v136.m128i_i64[0],
      v136.m128i_i64[1],
      v111.m128i_i64[0],
      v111.m128i_i64[1],
      v209,
      v137.m128i_i64[0],
      v137.m128i_i64[1],
      v190[0],
      (__int64)v140,
      v174.m128i_i64,
      (__int64 *)&v191,
      (__int64 *)&v194,
      v106,
      (unsigned __int8)v36,
      (__int64)p_ptr);
    if ( v230[0] != v150 )
      free(v230[0]);
    sub_6441A0((__int64 *)&v191);
    sub_6441A0((__int64 *)&v194);
    std::string::_M_dispose();
    *v97 = &off_49930E0;
    if ( *(_BYTE **)v223 != v149 )
      free(*(void **)v223);
    sub_6441A0((__int64 *)v145);
    sub_6441A0((__int64 *)v144);
    v112 = *(void (__fastcall ****)(_QWORD))(v148 + 16);
    *(_QWORD *)(v148 + 16) = v97;
    if ( v112 )
      (**v112)(v112);
    v113 = v97[11];
    if ( v113 && (unsigned int)(*(_DWORD *)(v113 + 356) - 2) <= 0x13 && (v114 = sub_FC8C50(v113, 5)) != 0 )
      sub_FC8D50(v114, v97);
    else
      sub_64B900(v15 + 184, (__int64)v97);
  }
  v29 = ptr;
  if ( ptr != v217 )
    goto LABEL_40;
LABEL_41:
  sub_6441A0(v139);
  sub_6441A0(v176);
  v174 = _mm_load_si128(&v138);
  sub_646A80(v174.m128i_i64);
  if ( v237 != v143 )
    free(v237);
}

