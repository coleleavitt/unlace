__int64 __fastcall sub_1D78190(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        __int64 a9,
        char a10,
        unsigned __int8 a11,
        char a12,
        __int64 a13,
        char a14,
        unsigned int a15,
        char a16)
{
  bool v17; // sf
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // ebp
  __int64 v23; // r14
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // r13d
  __int64 v29; // rcx
  unsigned __int64 v30; // r14
  char *v31; // rax
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __m128 v36; // xmm0
  int v37; // esi
  unsigned __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r14
  unsigned __int64 v42; // rcx
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // r13
  int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rbp
  __int64 v50; // rax
  __int64 v51; // rsi
  __int8 v52; // bl
  __m128i si128; // xmm7
  __m128i v54; // xmm7
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  int v58; // r9d
  unsigned __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r14
  __int64 v62; // rbx
  unsigned __int64 v63; // r15
  int v64; // eax
  unsigned __int64 v65; // r12
  char v66; // al
  int v67; // eax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // rsi
  unsigned __int64 v71; // rax
  _BYTE *v72; // rdx
  _QWORD *v73; // rsi
  __int64 v74; // rax
  __m128i *v75; // rdi
  const __m128i *v76; // roff
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rsi
  char v80; // al
  int v81; // eax
  __int64 v82; // rdi
  unsigned __int64 v83; // rax
  const __m128i *v84; // r15
  __int64 v85; // rsi
  unsigned __int64 v86; // r12
  __int32 v87; // esi
  __m128i *v88; // rdi
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // r12
  unsigned int v92; // eax
  const __m128i *v93; // r15
  char *v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // r12
  unsigned __int64 v97; // rbx
  int v98; // eax
  unsigned __int64 v99; // rbp
  char v100; // al
  int v101; // eax
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rcx
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  __int64 v106; // r15
  _QWORD *v107; // rcx
  __int64 v108; // rax
  void *v109; // rsi
  const __m128i *v110; // roff
  __int64 v111; // rax
  __int64 v112; // rbp
  __int64 v113; // rcx
  char v114; // al
  int v115; // eax
  __int64 v116; // rax
  const __m128i *v117; // rcx
  __int64 v118; // rsi
  unsigned __int64 v119; // rbx
  __m128i v120; // xmm5
  __int32 v121; // edx
  _BYTE *v122; // rdi
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rbx
  void *v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rsi
  int v132; // eax
  unsigned int v133; // eax
  __m128 *v134; // rax
  __int64 v135; // rdx
  __m128 *v136; // rbx
  __int64 v137; // rsi
  __m128 *v138; // rbp
  unsigned __int16 *v139; // rdi
  __int64 v140; // rax
  __m128 v141; // xmm0
  __m128 v142; // xmm0
  int v143; // esi
  unsigned __int64 v144; // rcx
  __int64 *v145; // rdx
  __int64 v146; // rax
  unsigned __int64 v147; // rcx
  __int64 *v148; // rdx
  __int64 v149; // rax
  unsigned int v150; // eax
  __int64 v151; // rdi
  __int64 v152; // rax
  unsigned __int64 v153; // rbp
  __int64 v154; // r12
  void **v155; // r13
  int v156; // ebx
  __int64 v157; // rcx
  __int64 v158; // rax
  unsigned int v159; // ebx
  unsigned __int64 v160; // rbp
  void **v161; // r14
  __int64 v162; // r13
  int v163; // ebx
  unsigned int v164; // r14d
  unsigned int v165; // ebx
  void **v166; // r13
  __int64 *v167; // r14
  __int64 v168; // r12
  __int64 v169; // rdi
  __int64 v170; // rsi
  __m128i *v171; // [rsp+8h] [rbp-870h] BYREF
  __m128i *v172; // [rsp+10h] [rbp-868h]
  _BYTE *v173; // [rsp+18h] [rbp-860h]
  __m128 *v174; // [rsp+20h] [rbp-858h] BYREF
  const __m128i *v175; // [rsp+28h] [rbp-850h]
  __int64 v176; // [rsp+30h] [rbp-848h]
  __int64 v177; // [rsp+38h] [rbp-840h]
  const __m128i *v178; // [rsp+40h] [rbp-838h]
  unsigned __int64 v179; // [rsp+48h] [rbp-830h]
  unsigned int v180; // [rsp+54h] [rbp-824h]
  __int64 v181; // [rsp+58h] [rbp-820h]
  void **v182; // [rsp+60h] [rbp-818h] BYREF
  int v183; // [rsp+68h] [rbp-810h]
  unsigned int v184; // [rsp+6Ch] [rbp-80Ch]
  void **v185; // [rsp+70h] [rbp-808h] BYREF
  unsigned __int8 v186; // [rsp+7Bh] [rbp-7FDh]
  int v187; // [rsp+7Ch] [rbp-7FCh]
  void **v188; // [rsp+80h] [rbp-7F8h]
  _QWORD *v189; // [rsp+88h] [rbp-7F0h]
  void **v190; // [rsp+90h] [rbp-7E8h]
  _QWORD *v191; // [rsp+98h] [rbp-7E0h] BYREF
  __m128 v192; // [rsp+A0h] [rbp-7D8h] BYREF
  __int64 *v193; // [rsp+B0h] [rbp-7C8h]
  __int64 v194; // [rsp+B8h] [rbp-7C0h]
  void **v195; // [rsp+C0h] [rbp-7B8h]
  __int64 v196; // [rsp+C8h] [rbp-7B0h]
  char v197; // [rsp+D2h] [rbp-7A6h]
  char v198; // [rsp+D3h] [rbp-7A5h]
  _BYTE v199[8]; // [rsp+D4h] [rbp-7A4h] BYREF
  char v200; // [rsp+DCh] [rbp-79Ch] BYREF
  __int64 v201; // [rsp+E0h] [rbp-798h] BYREF
  unsigned __int64 v202; // [rsp+E8h] [rbp-790h]
  __int64 v203; // [rsp+F0h] [rbp-788h] BYREF
  _QWORD v204[2]; // [rsp+F8h] [rbp-780h] BYREF
  int v205; // [rsp+108h] [rbp-770h] BYREF
  int v206; // [rsp+10Ch] [rbp-76Ch] BYREF
  unsigned __int64 v207; // [rsp+110h] [rbp-768h] BYREF
  void *v208; // [rsp+118h] [rbp-760h] BYREF
  __m128i v209; // [rsp+120h] [rbp-758h] BYREF
  __int64 v210; // [rsp+130h] [rbp-748h]
  __m128i v211; // [rsp+140h] [rbp-738h]
  __int64 v212; // [rsp+150h] [rbp-728h]
  __m128i v213; // [rsp+160h] [rbp-718h] BYREF
  __int64 v214; // [rsp+170h] [rbp-708h]
  __m128i v215; // [rsp+180h] [rbp-6F8h]
  void **v216; // [rsp+190h] [rbp-6E8h]
  __m128i v217; // [rsp+1A0h] [rbp-6D8h]
  __int64 v218; // [rsp+1B0h] [rbp-6C8h]
  __m128i v219; // [rsp+1C0h] [rbp-6B8h]
  __int64 v220; // [rsp+1D0h] [rbp-6A8h]
  void *v221; // [rsp+1E0h] [rbp-698h] BYREF
  __int64 v222; // [rsp+1E8h] [rbp-690h]
  __int64 v223; // [rsp+1F0h] [rbp-688h] BYREF
  void *v224; // [rsp+210h] [rbp-668h] BYREF
  __int64 v225; // [rsp+218h] [rbp-660h]
  _BYTE v226[64]; // [rsp+220h] [rbp-658h] BYREF
  _QWORD v227[10]; // [rsp+260h] [rbp-618h] BYREF
  void *ptr[2]; // [rsp+2B0h] [rbp-5C8h] BYREF
  char v229; // [rsp+2C0h] [rbp-5B8h] BYREF
  void *v230; // [rsp+300h] [rbp-578h] BYREF
  __int64 v231; // [rsp+308h] [rbp-570h]
  char v232; // [rsp+310h] [rbp-568h] BYREF
  _QWORD v233[2]; // [rsp+370h] [rbp-508h] BYREF
  char v234; // [rsp+380h] [rbp-4F8h] BYREF
  _QWORD v235[4]; // [rsp+3C0h] [rbp-4B8h] BYREF
  __int16 v236; // [rsp+3E0h] [rbp-498h]
  char v237; // [rsp+3E2h] [rbp-496h]
  __int64 v238; // [rsp+3E8h] [rbp-490h]
  void *v239; // [rsp+400h] [rbp-478h] BYREF
  __int64 v240; // [rsp+408h] [rbp-470h]
  char v241; // [rsp+410h] [rbp-468h] BYREF
  void *v242[2]; // [rsp+490h] [rbp-3E8h] BYREF
  char v243; // [rsp+4A0h] [rbp-3D8h] BYREF
  __int64 v244; // [rsp+560h] [rbp-318h] BYREF
  __m128i v245; // [rsp+568h] [rbp-310h]
  __int64 v246; // [rsp+578h] [rbp-300h]
  __int8 v247; // [rsp+580h] [rbp-2F8h]
  __int64 v248; // [rsp+588h] [rbp-2F0h]
  __int64 v249; // [rsp+590h] [rbp-2E8h]
  char v250; // [rsp+5A0h] [rbp-2D8h]
  void *v251; // [rsp+5A8h] [rbp-2D0h]
  __int64 v252; // [rsp+5B0h] [rbp-2C8h]
  _BYTE v253[128]; // [rsp+5B8h] [rbp-2C0h] BYREF
  __int64 v254; // [rsp+638h] [rbp-240h]
  __m128 v255; // [rsp+640h] [rbp-238h] BYREF
  __m128i v256; // [rsp+650h] [rbp-228h]
  __m128 v257; // [rsp+660h] [rbp-218h]
  __m128 v258; // [rsp+670h] [rbp-208h]
  __m128 v259; // [rsp+680h] [rbp-1F8h]
  __int64 *v260; // [rsp+690h] [rbp-1E8h]
  __int64 v261; // [rsp+698h] [rbp-1E0h]
  __m128 v262; // [rsp+6A0h] [rbp-1D8h]

  v17 = *(char *)(a2 + 28) < 0;
  v203 = a3;
  v204[0] = a2;
  v18 = a11;
  v200 = a10;
  v201 = a4;
  v199[4] = a12;
  v202 = a5;
  v186 = a11;
  v199[0] = a15;
  if ( v17 )
    return 1;
  v19 = *(_QWORD *)(a2 + 48);
  v179 = a1;
  v196 = a6;
  v22 = sub_B76070(v19, a11, a15, a4);
  v197 = v199[0];
  if ( v199[0] || (v23 = 1, (v198 = sub_B771C0(v19, v18, v20, v21)) == 0) )
  {
    v197 = 1;
    v23 = 0;
    v198 = 0;
  }
  v24 = *(_QWORD *)(v204[0] + 48LL);
  if ( (*(_BYTE *)(v24 + 28) & 0x7F) == 0x27 && (*(_BYTE *)(v24 + 29) & 2) != 0 )
  {
    if ( (*(_DWORD *)(v24 + 40) & 7) != 7 || (v25 = *(_QWORD *)(v24 + 40) & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v25) )
      BUG();
    v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 56LL) + 20LL) & 0x1FFFFFFF;
  }
  else
  {
    v26 = 0;
  }
  v205 = v26;
  if ( (unsigned int)sub_B77230(v19, v18) <= v202 || (v27 = 12, v200) )
  {
    v30 = v202 + v23;
    if ( v30 && v200 )
    {
      if ( v22 >= v30 + 1 )
        goto LABEL_17;
    }
    else if ( v30 <= v22 )
    {
      goto LABEL_17;
    }
    v39 = (__int64 *)(*(_QWORD *)(v19 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v40 = *v39;
    if ( *(_BYTE *)(*v39 + 16) == 26 )
    {
      if ( !(unsigned __int8)sub_F5D700(*v39) )
        goto LABEL_25;
    }
    else
    {
      v40 = sub_F63050(*v39, v18, v22, v29);
      if ( !(unsigned __int8)sub_F5D700(v40) )
      {
LABEL_25:
        v27 = 11;
        if ( *(char *)(v40 + 19) >= 0 )
          return v27;
      }
    }
LABEL_17:
    v233[1] = 1;
    v233[0] = v179;
    v189 = v233;
    v31 = &v234;
    do
    {
      *(_QWORD *)v31 = -4096;
      v31 += 16;
    }
    while ( v31 != (char *)v235 );
    v237 = 0;
    v236 = 0;
    v32 = v203 == 0;
    v239 = &v241;
    v235[0] = v189 + 12;
    v235[1] = 0x100000000LL;
    v33 = *(_QWORD *)(v179 + 11280);
    v238 = 0;
    v235[3] = v33;
    v34 = v204[0];
    *(_QWORD *)(v179 + 11280) = v189;
    v35 = *(_QWORD *)(v34 + 56);
    v182 = &v239;
    v190 = &v224;
    v207 = v35;
    v240 = 0x400000000LL;
    v224 = v226;
    v225 = 0x800000000LL;
    v206 = 0;
    if ( v32 )
    {
      if ( v22 )
      {
        v41 = v22 - 1;
        v42 = 8;
        v43 = 0;
        v44 = 0;
        v45 = 8 * v41;
        while ( 1 )
        {
          v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 120) + v43) + 48LL);
          if ( v44 + 1 > v42 )
          {
            sub_2237220(v190, v226, v44 + 1, 8);
            *((_QWORD *)v224 + (unsigned int)v225) = v46;
          }
          else
          {
            *((_QWORD *)v224 + v44) = v46;
          }
          v44 = (unsigned int)(v225 + 1);
          LODWORD(v225) = v225 + 1;
          if ( v45 == v43 )
            break;
          v42 = HIDWORD(v225);
          v43 += 8;
        }
        v35 = v207;
        v38 = (unsigned int)v240;
        v191 = v204;
      }
      else
      {
        v38 = 0;
        v191 = v204;
      }
    }
    else
    {
      v191 = v204;
      v171 = (__m128i *)&v203;
      v258.m128_u64[0] = v179;
      v36 = _mm_loadh_ps((const double *)&v191);
      v257.m128_u64[0] = (unsigned __int64)v190;
      v255 = v36;
      v37 = *(_DWORD *)(a9 + 16);
      v257.m128_u64[1] = a9;
      a7 = (__m128i)_mm_loadh_ps((const double *)&v182);
      v256 = a7;
      sub_15F0FC0(v179, v37, (__int64 (__fastcall *)(__int64))sub_1D3EAD0, (__int64)&v255);
      v27 = v244;
      if ( (_DWORD)v244 )
        goto LABEL_32;
      v38 = (unsigned int)v240;
      v35 = v207;
      v206 = v240;
    }
    v47 = *(_DWORD *)(v35 + 20);
    v242[1] = (void *)0x800000000LL;
    v242[0] = &v243;
    v48 = v47 & 0x1FFFFFFF;
    v227[0] = v179;
    v227[2] = &v207;
    v227[1] = v191;
    v227[3] = &v205;
    v227[6] = a9;
    v227[4] = &a13;
    v227[5] = &a14;
    v227[7] = v182;
    v195 = v242;
    v227[8] = v242;
    v227[9] = &v201;
    if ( v48 != v38 )
    {
      if ( v48 < v38 )
        LODWORD(v240) = v48;
      else
        sub_1D37240((__int64)v182, v48);
    }
    v185 = ptr;
    ptr[0] = &v229;
    ptr[1] = (void *)0x800000000LL;
    v180 = v225;
    if ( !(_DWORD)v225 )
      goto LABEL_137;
    v177 = 0;
    v174 = &v255;
    v171 = (__m128i *)&v208;
    v193 = (__int64 *)&v208;
    v184 = 0;
    v192 = _mm_loadh_ps((const double *)&v174);
LABEL_49:
    v49 = *((_QWORD *)v224 + v177);
    v50 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
    v32 = *(_BYTE *)(v50 + 16) == 38;
    v181 = v50;
    if ( v32 )
    {
      v51 = *(_QWORD *)(v50 + 32);
      v52 = v186 & ((_DWORD)v177 + 1 == v180);
      v183 = v177 + 1;
      v194 = v51;
      sub_F1D250((__int64)&v209, v51, 0, 0);
      v257.m128_i8[5] = v52;
      v257.m128_i8[4] = 0;
      v255.m128_u64[0] = v179;
      v255.m128_u64[1] = v207;
      a7 = _mm_load_si128(&v209);
      v256.m128i_i64[0] = (__int64)v182;
      v257.m128_i32[0] = 0;
      v256.m128i_i64[1] = a9;
      v257.m128_i16[3] = 0;
      v258.m128_u64[1] = 0x200000000LL;
      LODWORD(v51) = *(_DWORD *)(v207 + 20);
      v212 = v210;
      v214 = v210;
      v211 = a7;
      v257.m128_i32[2] = 0;
      v258.m128_u64[0] = (unsigned __int64)&v174[4];
      v213 = a7;
      sub_1504FB0(v193, v51 & 0x1FFFFFFF, 0);
      si128 = _mm_load_si128((const __m128i *)&v192);
      v230 = &v232;
      v188 = &v230;
      v215 = si128;
      v54 = _mm_load_si128(&v213);
      v216 = &v230;
      v220 = v214;
      v231 = 0x400000000LL;
      v219 = v54;
      v175 = (const __m128i *)&v221;
      v221 = &v223;
      v222 = 0x200000000LL;
      sub_1E4C8C0(v255.m128_i32[0], (unsigned int)&v221, v55, v56, v57, v58, *(_OWORD *)&v54, v214);
      if ( (_DWORD)v222 )
      {
        v61 = 0;
        v172 = (__m128i *)&v244;
        v62 = 16 * ((unsigned int)(v222 - 1) + 1LL);
        v171 = (__m128i *)v253;
        while ( 1 )
        {
          v65 = *(_QWORD *)((_BYTE *)v221 + v61) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)((_BYTE *)v221 + v61) & 4) == 0 )
          {
            if ( v65 )
              break;
          }
          v66 = *(_BYTE *)(v65 + 28) & 0x7F;
          if ( v66 != 67 )
          {
            if ( v66 == 47 )
            {
              v64 = *(_DWORD *)(v65 + 68) & 0xFFFFF;
              v63 = *(_WORD *)(v65 + 70) >> 4;
            }
            else
            {
              v64 = *(_DWORD *)(v65 + 64) & 0xFFFFF;
              v63 = *(_WORD *)(v65 + 66) >> 4;
            }
LABEL_54:
            if ( *(_DWORD *)(v256.m128i_i64[1] + 24) != v64 )
              goto LABEL_55;
            goto LABEL_59;
          }
          v63 = (unsigned int)sub_BBE5B0(*(_QWORD *)((_BYTE *)v221 + v61) & 0xFFFFFFFFFFFFFFF8LL);
          v67 = sub_BBE590(v65);
          if ( *(_DWORD *)(v256.m128i_i64[1] + 24) != v67 )
            goto LABEL_55;
LABEL_59:
          v68 = *(_QWORD *)v215.m128i_i64[0];
          if ( (*(_QWORD *)v215.m128i_i64[0] & 1) != 0 )
          {
            v69 = v68 >> 58;
            v70 = ~(-1LL << (v68 >> 58));
            v71 = v70 & (v68 >> 1);
            if ( !_bittest64((const __int64 *)&v71, v63) )
            {
              *(_QWORD *)v215.m128i_i64[0] = 2 * ((v69 << 57) | v70 & (v71 | (1LL << v63))) + 1;
              goto LABEL_62;
            }
          }
          else
          {
            v147 = v63 & 0x3F;
            v148 = (__int64 *)(*(_QWORD *)v68 + 8LL * ((unsigned int)v63 >> 6));
            v149 = *v148;
            if ( !_bittest64(&v149, v147) )
            {
              *v148 = v149 | (1LL << v147);
LABEL_62:
              v72 = (_BYTE *)v215.m128i_i64[1];
              v73 = *(_QWORD **)(v215.m128i_i64[1] + 16);
              v74 = 32LL * (unsigned int)v63;
              v32 = (*(_DWORD *)(*v73 + v74) & 0x7FFFFFFF) == 0;
              v75 = v171;
              LODWORD(v244) = v63;
              *(_BYTE *)(v215.m128i_i64[1] + 38) = !v32;
              v245 = (__m128i)(0xFFFFFFFE00000000LL & v245.m128i_u64[0]);
              v248 &= 0xFFFFFFFE00000000LL;
              v32 = v72[39] == 0;
              v247 = 0;
              v249 = 0;
              v250 = 0;
              v251 = v75;
              v252 = 0x400000000LL;
              v254 = 0;
              if ( v32 )
              {
                v76 = (const __m128i *)(*v73 + v74);
                v245 = _mm_loadu_si128(v76);
                v60 = v76[1].m128i_i64[0];
                v246 = v60;
                v247 = v76[1].m128i_i8[8];
                v77 = *v73 + v74;
                *(_QWORD *)v77 &= 0xFFFFFFFE00000000LL;
                *(_QWORD *)(v77 + 8) = 0;
                *(_BYTE *)(v77 + 24) = 0;
              }
              v78 = 8LL * (unsigned int)v63;
              v79 = *(_QWORD *)(*((_QWORD *)v72 + 1) + v78 + 24);
              v80 = *(_BYTE *)(v79 + 28) & 0x7F;
              if ( v80 == 67 )
              {
                v81 = *(_DWORD *)(v79 + 64);
                if ( v81 )
                  goto LABEL_66;
              }
              else
              {
                if ( v80 == 47 )
                {
                  if ( !*(_BYTE *)(v79 + 81) )
                    goto LABEL_67;
                }
                else if ( v80 != 68 || (*(_BYTE *)(v79 + 80) & 4) == 0 )
                {
                  goto LABEL_67;
                }
                v81 = *(_DWORD *)(v79 + 84) + 1;
                if ( *(_DWORD *)(v79 + 84) != -1 )
LABEL_66:
                  *((_DWORD *)v72 + 10) = v81;
              }
LABEL_67:
              v82 = *((unsigned int *)v72 + 14);
              v83 = *((_QWORD *)v72 + 6);
              v84 = v172;
              v85 = v82 + 1;
              v86 = v83 + 224 * v82;
              if ( v82 + 1 > (unsigned __int64)*((unsigned int *)v72 + 15) )
              {
                v169 = (__int64)(v72 + 48);
                if ( v83 > (unsigned __int64)v172 || v86 <= (unsigned __int64)v172 )
                {
                  v176 = v78;
                  v173 = v72;
                  sub_1D67900(v169, v85);
                  v72 = v173;
                  v78 = v176;
                  v86 = *((_QWORD *)v173 + 6) + 224LL * *((unsigned int *)v173 + 14);
                }
                else
                {
                  v178 = (const __m128i *)v78;
                  v176 = v83;
                  v173 = v72;
                  sub_1D67900(v169, v85);
                  v72 = v173;
                  v78 = (__int64)v178;
                  v170 = *((_QWORD *)v173 + 6);
                  v84 = (__m128i *)((char *)v172 + v170 - v176);
                  v86 = v170 + 224LL * *((unsigned int *)v173 + 14);
                }
              }
              *(_DWORD *)v86 = v84->m128i_i32[0];
              *(__m128i *)(v86 + 8) = _mm_loadu_si128((const __m128i *)&v84->m128i_u64[1]);
              *(__m128i *)(v86 + 24) = _mm_loadu_si128((const __m128i *)((char *)v84 + 24));
              *(__m128i *)(v86 + 40) = _mm_loadu_si128((const __m128i *)((char *)v84 + 40));
              a8 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v84 + 56));
              *(_QWORD *)(v86 + 80) = 0x400000000LL;
              *(__m128 *)(v86 + 56) = a8;
              v87 = v84[5].m128i_i32[0];
              *(_QWORD *)(v86 + 72) = v86 + 88;
              if ( v87 )
              {
                v176 = v78;
                v173 = v72;
                sub_1D3C410((__int64 *)(v86 + 72), &v84[4].m128i_i64[1]);
                v78 = v176;
                v72 = v173;
              }
              *(_QWORD *)(v86 + 216) = v84[13].m128i_i64[1];
              v88 = (__m128i *)v251;
              ++*((_DWORD *)v72 + 14);
              if ( v88 != v171 )
              {
                v176 = v78;
                v173 = v72;
                free(v88);
                v78 = v176;
                v72 = v173;
              }
              v89 = *(_QWORD *)(*((_QWORD *)v72 + 1) + v78 + 24);
              if ( (*(_BYTE *)(v89 + 28) & 0x7F) == 0x2F && !*(_BYTE *)(v89 + 81) )
              {
                v90 = *(_QWORD *)(sub_AB5860(*(_QWORD *)(*(_QWORD *)v72 + 248LL), *(_QWORD *)(v89 + 48))
                                & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v90 + 16) == 38 )
                {
                  v91 = (__int64)v216;
                  sub_F1D250((__int64)v172, *(_QWORD *)(v90 + 32), 0, 0);
                  sub_1CB6790(v91, v172);
                }
              }
            }
          }
LABEL_55:
          v61 += 16;
          if ( v62 == v61 )
            goto LABEL_82;
        }
        v63 = *(unsigned __int16 *)(v65 + 22);
        v64 = *(_WORD *)(v65 + 20) & 0x7FFF;
        goto LABEL_54;
      }
LABEL_82:
      if ( v221 != &v175[1] )
        free(v221);
      v187 = v258.m128_i32[2];
      v92 = v231;
      if ( !(_DWORD)v231 )
        goto LABEL_115;
      v93 = (const __m128i *)&v244;
      v172 = (__m128i *)&v175[1];
      v173 = v253;
LABEL_86:
      v94 = (char *)v230 + 24 * v92;
      a7 = _mm_loadu_si128((const __m128i *)(v94 - 24));
      v95 = *((_QWORD *)v94 - 1);
      LODWORD(v231) = v92 - 1;
      v217 = a7;
      v221 = v172;
      v218 = v95;
      v219 = a7;
      v220 = v95;
      v222 = 0x200000000LL;
      sub_1E4C8C0(v255.m128_i32[0], (_DWORD)v175, v95, (_DWORD)v230, v59, v60, *(_OWORD *)&a7, v95);
      if ( !(_DWORD)v222 )
        goto LABEL_113;
      v96 = 0;
      v171 = (__m128i *)v93;
      v176 = 16 * ((unsigned int)(v222 - 1) + 1LL);
      while ( 1 )
      {
        v99 = *(_QWORD *)((_BYTE *)v221 + v96) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)((_BYTE *)v221 + v96) & 4) == 0 )
        {
          if ( v99 )
            break;
        }
        v100 = *(_BYTE *)(v99 + 28) & 0x7F;
        if ( v100 == 67 )
        {
          v97 = (unsigned int)sub_BBE5B0(*(_QWORD *)((_BYTE *)v221 + v96) & 0xFFFFFFFFFFFFFFF8LL);
          v101 = sub_BBE590(v99);
          if ( *(_DWORD *)(v256.m128i_i64[1] + 24) != v101 )
            goto LABEL_91;
LABEL_95:
          v102 = *(_QWORD *)v215.m128i_i64[0];
          if ( (*(_QWORD *)v215.m128i_i64[0] & 1) != 0 )
          {
            v103 = v102 >> 58;
            v104 = ~(-1LL << (v102 >> 58));
            v105 = v104 & (v102 >> 1);
            if ( _bittest64((const __int64 *)&v105, v97) )
              goto LABEL_91;
            *(_QWORD *)v215.m128i_i64[0] = 2 * ((v103 << 57) | v104 & (v105 | (1LL << v97))) + 1;
          }
          else
          {
            v144 = v97 & 0x3F;
            v145 = (__int64 *)(*(_QWORD *)v102 + 8LL * ((unsigned int)v97 >> 6));
            v146 = *v145;
            if ( _bittest64(&v146, v144) )
              goto LABEL_91;
            *v145 = v146 | (1LL << v144);
          }
          v106 = v215.m128i_i64[1];
          v107 = *(_QWORD **)(v215.m128i_i64[1] + 16);
          v108 = 32LL * (unsigned int)v97;
          v32 = (*(_DWORD *)(*v107 + v108) & 0x7FFFFFFF) == 0;
          v109 = v173;
          LODWORD(v244) = v97;
          *(_BYTE *)(v215.m128i_i64[1] + 38) = !v32;
          v245 = (__m128i)(0xFFFFFFFE00000000LL & v245.m128i_u64[0]);
          v248 &= 0xFFFFFFFE00000000LL;
          v32 = *(_BYTE *)(v106 + 39) == 0;
          v247 = 0;
          v249 = 0;
          v250 = 0;
          v251 = v109;
          v252 = 0x400000000LL;
          v254 = 0;
          if ( v32 )
          {
            v110 = (const __m128i *)(*v107 + v108);
            a8 = (__m128)_mm_loadu_si128(v110);
            v245 = (__m128i)a8;
            v246 = v110[1].m128i_i64[0];
            v247 = v110[1].m128i_i8[8];
            v111 = *v107 + v108;
            *(_QWORD *)v111 &= 0xFFFFFFFE00000000LL;
            *(_QWORD *)(v111 + 8) = 0;
            *(_BYTE *)(v111 + 24) = 0;
          }
          v112 = 8LL * (unsigned int)v97;
          v113 = *(_QWORD *)(*(_QWORD *)(v106 + 8) + v112 + 24);
          v114 = *(_BYTE *)(v113 + 28) & 0x7F;
          if ( v114 == 67 )
          {
            v115 = *(_DWORD *)(v113 + 64);
            if ( !v115 )
              goto LABEL_103;
LABEL_102:
            *(_DWORD *)(v106 + 40) = v115;
            goto LABEL_103;
          }
          if ( v114 == 47 )
          {
            if ( !*(_BYTE *)(v113 + 81) )
              goto LABEL_103;
          }
          else if ( v114 != 68 || (*(_BYTE *)(v113 + 80) & 4) == 0 )
          {
            goto LABEL_103;
          }
          v115 = *(_DWORD *)(v113 + 84) + 1;
          if ( *(_DWORD *)(v113 + 84) != -1 )
            goto LABEL_102;
LABEL_103:
          v116 = *(unsigned int *)(v106 + 56);
          v59 = *(_QWORD *)(v106 + 48);
          v117 = v171;
          v118 = v116 + 1;
          v119 = v59 + 224 * v116;
          if ( v116 + 1 > (unsigned __int64)*(unsigned int *)(v106 + 60) )
          {
            v151 = v106 + 48;
            v178 = *(const __m128i **)(v106 + 48);
            if ( v59 > (unsigned __int64)v171 || v119 <= (unsigned __int64)v171 )
            {
              sub_1D67900(v151, v118);
              v117 = v171;
              v119 = *(_QWORD *)(v106 + 48) + 224LL * *(unsigned int *)(v106 + 56);
            }
            else
            {
              sub_1D67900(v151, v118);
              LODWORD(v59) = (_DWORD)v178;
              v152 = *(_QWORD *)(v106 + 48);
              v117 = (const __m128i *)(v152 + (char *)v171 - (char *)v178);
              v119 = v152 + 224LL * *(unsigned int *)(v106 + 56);
            }
          }
          *(_DWORD *)v119 = v117->m128i_i32[0];
          *(__m128i *)(v119 + 8) = _mm_loadu_si128((const __m128i *)&v117->m128i_u64[1]);
          *(__m128i *)(v119 + 24) = _mm_loadu_si128((const __m128i *)((char *)v117 + 24));
          *(__m128i *)(v119 + 40) = _mm_loadu_si128((const __m128i *)((char *)v117 + 40));
          v120 = _mm_loadu_si128((const __m128i *)((char *)v117 + 56));
          *(_QWORD *)(v119 + 80) = 0x400000000LL;
          *(__m128i *)(v119 + 56) = v120;
          v121 = v117[5].m128i_i32[0];
          *(_QWORD *)(v119 + 72) = v119 + 88;
          if ( v121 )
          {
            v178 = v117;
            sub_1D3C410((__int64 *)(v119 + 72), &v117[4].m128i_i64[1]);
            v117 = v178;
          }
          *(_QWORD *)(v119 + 216) = v117[13].m128i_i64[1];
          v122 = v251;
          ++*(_DWORD *)(v106 + 56);
          if ( v122 != v173 )
            free(v122);
          v123 = *(_QWORD *)(*(_QWORD *)(v106 + 8) + v112 + 24);
          if ( (*(_BYTE *)(v123 + 28) & 0x7F) != 0x2F )
            goto LABEL_91;
          if ( *(_BYTE *)(v123 + 81) )
            goto LABEL_91;
          v124 = *(_QWORD *)(sub_AB5860(*(_QWORD *)(*(_QWORD *)v106 + 248LL), *(_QWORD *)(v123 + 48))
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v124 + 16) != 38 )
            goto LABEL_91;
          v125 = (__int64)v216;
          v96 += 16;
          sub_F1D250((__int64)v171, *(_QWORD *)(v124 + 32), 0, 0);
          sub_1CB6790(v125, v171);
          if ( v176 == v96 )
          {
LABEL_112:
            v93 = v171;
LABEL_113:
            if ( v221 != v172 )
            {
              free(v221);
              v92 = v231;
              if ( !(_DWORD)v231 )
                goto LABEL_115;
              goto LABEL_86;
            }
            v92 = v231;
            if ( !(_DWORD)v231 )
            {
LABEL_115:
              if ( v230 != v188 + 2 )
                free(v230);
              v126 = v208;
              if ( ((unsigned __int8)v208 & 1) == 0 && v208 )
              {
                if ( *(void **)v208 != (char *)v208 + 16 )
                  free(*(void **)v208);
                operator delete(v126, 0x48u);
              }
              sub_1D37560((__int64 *)v174, v187);
              v131 = v180;
              if ( v183 != v180 && !v257.m128_i32[2] )
              {
                v127 = v257.m128_u8[4];
                v132 = *(_DWORD *)(v181 + 20);
                if ( v132 )
                {
                  if ( !v257.m128_i8[4] && v132 != 1 )
                  {
                    v127 = v184;
                    LODWORD(v153) = v184;
                    if ( v202 > v184 )
                    {
                      v165 = v184 + v132 - 1;
                      v166 = v185;
                      v167 = (__int64 *)v174;
                      v168 = v194;
                      do
                      {
                        v131 = v168;
                        LODWORD(v153) = v153 + 1;
                        sub_A6A4A0((__int64)v166, v168);
                        sub_1D38630((__int64)v167);
                      }
                      while ( (_DWORD)v153 != v165 && (unsigned int)v153 < v202 );
                      goto LABEL_176;
                    }
                  }
                  goto LABEL_126;
                }
                if ( v257.m128_i8[4] || !v257.m128_i8[6] )
                  goto LABEL_126;
                v156 = *(_DWORD *)(v258.m128_u64[0] + 12);
                v127 = v258.m128_u64[0] + 224;
                v157 = 224LL * v258.m128_u32[2];
                v131 = v258.m128_u64[0] + v157;
                v128 = 0x6DB6DB6DB6DB6DB7LL * ((v157 - 224) >> 5);
                if ( v128 >> 2 > 0 )
                {
                  if ( v156 == *(_DWORD *)(v258.m128_u64[0] + 236) )
                  {
                    if ( v156 == *(_DWORD *)(v258.m128_u64[0] + 460) )
                    {
                      if ( *(_DWORD *)(v258.m128_u64[0] + 684) == v156 )
                      {
                        if ( v156 == *(_DWORD *)(v258.m128_u64[0] + 908) )
                        {
                          v128 = v258.m128_u64[0] + 896 * (v128 >> 2) + 224;
                          while ( 1 )
                          {
                            v158 = v127 + 896;
                            if ( v128 == v127 + 896 )
                            {
                              v127 = 0x6DB6DB6DB6DB6DB7LL;
                              v128 = 0x6DB6DB6DB6DB6DB7LL * ((v131 - v158) >> 5);
                              goto LABEL_195;
                            }
                            if ( v156 != *(_DWORD *)(v127 + 908) )
                              goto LABEL_224;
                            if ( v156 != *(_DWORD *)(v127 + 1132) )
                            {
                              v158 = v127 + 1120;
                              goto LABEL_224;
                            }
                            if ( v156 != *(_DWORD *)(v127 + 1356) )
                            {
                              v158 = v127 + 1344;
                              goto LABEL_224;
                            }
                            if ( v156 != *(_DWORD *)(v127 + 1580) )
                              break;
                            v127 += 896;
                          }
                          v158 = v127 + 1568;
                        }
                        else
                        {
                          v158 = v258.m128_u64[0] + 896;
                        }
                      }
                      else
                      {
                        v158 = v258.m128_u64[0] + 672;
                      }
                    }
                    else
                    {
                      v158 = v258.m128_u64[0] + 448;
                    }
                  }
                  else
                  {
                    v158 = v258.m128_u64[0] + 224;
                  }
LABEL_224:
                  if ( v131 != v158 )
                  {
LABEL_225:
                    sub_1D36980((__int64)v174);
                    goto LABEL_136;
                  }
LABEL_199:
                  if ( v156 == -1 )
                    goto LABEL_225;
                  v159 = v184 + v156;
                  if ( v159 <= v184 || v184 >= v202 )
                    goto LABEL_126;
                  v160 = v184 + 1;
                  v161 = v185;
                  v162 = v194;
                  while ( 1 )
                  {
                    sub_A6A4A0((__int64)v161, v162);
                    v131 = v162;
                    v133 = sub_1D77E30((__int64)v227, v162, (int)v160 - 1, 0, *(double *)a7.m128i_i64, a8);
                    if ( v133 )
                      break;
                    sub_1D38630((__int64)v174);
                    if ( (unsigned int)v160 >= v159 || v160 >= v202 )
                    {
                      v184 = v160;
                      goto LABEL_126;
                    }
                    ++v160;
                  }
LABEL_207:
                  v27 = v133;
                  sub_1D36980((__int64)v174);
LABEL_28:
                  if ( ptr[0] != v185 + 2 )
                    free(ptr[0]);
                  if ( v242[0] != v195 + 2 )
                    free(v242[0]);
LABEL_32:
                  if ( v224 != v190 + 2 )
                    free(v224);
                  if ( v239 != v182 + 2 )
                    free(v239);
                  sub_1CB3BA0((__int64)v189);
                  return v27;
                }
                v158 = v258.m128_u64[0] + 224;
LABEL_195:
                if ( v128 != 2 )
                {
                  if ( v128 != 3 )
                  {
                    if ( v128 != 1 )
                      goto LABEL_199;
                    goto LABEL_198;
                  }
                  if ( v156 != *(_DWORD *)(v158 + 12) )
                    goto LABEL_224;
                  v158 += 224;
                }
                if ( v156 != *(_DWORD *)(v158 + 12) )
                  goto LABEL_224;
                v158 += 224;
LABEL_198:
                if ( v156 != *(_DWORD *)(v158 + 12) )
                  goto LABEL_224;
                goto LABEL_199;
              }
              if ( v202 > v184 )
              {
                LODWORD(v153) = v184;
                v154 = v194;
                v155 = v185;
                do
                {
                  if ( v257.m128_i32[2] && (unsigned int)(v257.m128_i32[2] - 1) <= v257.m128_i32[0] )
                    break;
                  sub_A6A4A0((__int64)v155, v154);
                  v131 = v154;
                  v133 = sub_1D77E30((__int64)v227, v154, v153, 0, *(double *)a7.m128i_i64, a8);
                  if ( v133 )
                    goto LABEL_207;
                  sub_1D38630((__int64)v174);
                  v153 = (unsigned int)(v153 + 1);
                }
                while ( v153 < v202 );
LABEL_176:
                v184 = v153;
              }
LABEL_126:
              if ( !v257.m128_i8[7] )
              {
                v133 = sub_1D3CBA0((__int64)v174, v131, v127, v128, v129, v130);
                if ( v133 )
                  goto LABEL_207;
              }
              v134 = (__m128 *)v258.m128_u64[0];
              v135 = 224LL * v258.m128_u32[2];
              v136 = (__m128 *)(v258.m128_u64[0] + v135);
              if ( v258.m128_u64[0] != v258.m128_u64[0] + v135 )
              {
                do
                {
                  v137 = v134->m128_u32[0];
                  v134 += 14;
                  *(_QWORD *)(*(_QWORD *)(v256.m128i_i64[1] + 240) + 8 * v137) = v134[-1].m128_u64[1];
                }
                while ( v136 != v134 );
                v138 = (__m128 *)v258.m128_u64[0];
                v136 = (__m128 *)(v258.m128_u64[0] + v135);
                if ( v258.m128_u64[0] != v258.m128_u64[0] + v135 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v136 -= 14;
                      v139 = (unsigned __int16 *)v136[4].m128_u64[1];
                      if ( v139 == &v136[5].m128_u16[4] )
                        break;
                      free(v139);
                      if ( v138 == v136 )
                        goto LABEL_133;
                    }
                  }
                  while ( v138 != v136 );
LABEL_133:
                  v136 = (__m128 *)v258.m128_u64[0];
                }
              }
              if ( v136 != &v174[4] )
                free(v136);
LABEL_136:
              ++v177;
              if ( v180 == v183 )
              {
LABEL_137:
                v140 = *(_QWORD *)(v179 + 544);
                v261 = v179;
                v244 = v140;
                v171 = (__m128i *)&v206;
                v255 = _mm_loadh_ps((const double *)&v191);
                v141 = _mm_loadh_ps((const double *)&v171);
                v171 = (__m128i *)&v200;
                v256 = (__m128i)v141;
                v257 = _mm_loadh_ps((const double *)&a9);
                v258 = _mm_loadh_ps((const double *)&v171);
                v171 = (__m128i *)v199;
                v260 = &v244;
                v142 = _mm_loadh_ps((const double *)&v171);
                v171 = (__m128i *)&a16;
                v259 = v142;
                v143 = *(_DWORD *)(a9 + 16);
                v262 = _mm_loadh_ps((const double *)&v185);
                sub_15F0FC0(v179, v143, (__int64 (__fastcall *)(__int64))sub_1D813C0, (__int64)&v255);
                v27 = (unsigned int)v230;
                goto LABEL_28;
              }
              goto LABEL_49;
            }
            goto LABEL_86;
          }
        }
        else
        {
          if ( v100 == 47 )
          {
            v98 = *(_DWORD *)(v99 + 68) & 0xFFFFF;
            v97 = *(_WORD *)(v99 + 70) >> 4;
          }
          else
          {
            v98 = *(_DWORD *)(v99 + 64) & 0xFFFFF;
            v97 = *(_WORD *)(v99 + 66) >> 4;
          }
LABEL_90:
          if ( *(_DWORD *)(v256.m128i_i64[1] + 24) == v98 )
            goto LABEL_95;
LABEL_91:
          v96 += 16;
          if ( v176 == v96 )
            goto LABEL_112;
        }
      }
      v97 = *(unsigned __int16 *)(v99 + 22);
      v98 = *(_WORD *)(v99 + 20) & 0x7FFF;
      goto LABEL_90;
    }
    if ( v184 < v202 )
    {
      sub_A6A4A0((__int64)v185, v49);
      v163 = v177;
      if ( (_DWORD)v177 || !v198 )
      {
        v164 = v184;
        v150 = sub_1D77E30((__int64)v227, v49, v184, 0, *(double *)a7.m128i_i64, a8);
        if ( !v150 )
        {
          v184 = v164 + 1;
          v183 = v163 + 1;
          goto LABEL_136;
        }
        goto LABEL_27;
      }
    }
    else
    {
      if ( (_DWORD)v177 || v197 )
        goto LABEL_137;
      sub_A6A4A0((__int64)v185, v49);
    }
    if ( (a13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v27 = 13;
      goto LABEL_28;
    }
    v150 = sub_1D77E30((__int64)v227, v49, 0, 1, *(double *)a7.m128i_i64, a8);
    if ( !v150 )
    {
      v183 = v177 + 1;
      goto LABEL_136;
    }
LABEL_27:
    v27 = v150;
    goto LABEL_28;
  }
  return v27;
}
