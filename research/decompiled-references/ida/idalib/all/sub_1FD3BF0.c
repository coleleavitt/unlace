__int64 __fastcall sub_1FD3BF0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r12
  const __m128i *v3; // r14
  const __m128i *v4; // r12
  __int64 m128i_i64; // rbx
  __int64 v6; // rax
  char v7; // dl
  const char *v8; // rsi
  unsigned __int64 v9; // r14
  __m128i v10; // xmm6
  __int64 v11; // rax
  char v12; // dl
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 **v22; // rbx
  const char *v23; // rbp
  __int64 **v24; // r13
  __int64 v25; // rax
  char v26; // dl
  __int64 v27; // rbx
  int v28; // edx
  int v29; // ebx
  unsigned int v30; // ecx
  int v31; // ebx
  unsigned int v32; // ecx
  unsigned __int64 v33; // rbp
  unsigned int v34; // r13d
  int v35; // eax
  int v36; // eax
  _QWORD *v37; // r15
  __int64 v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // ecx
  int v41; // ebx
  __int64 (__fastcall ***v42)(); // rsi
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // rax
  unsigned __int64 *v46; // rdi
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r13
  unsigned __int64 *v51; // rdi
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r13
  const __m128i **v56; // rsi
  const __m128i *v57; // r13
  __int64 v58; // rax
  __int64 i; // rdx
  unsigned __int64 v60; // rdx
  __int64 v61; // r15
  const __m128i *v62; // r14
  unsigned __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rsi
  char *v67; // r10
  __m128i *v68; // rax
  const __m128i *v69; // rcx
  __m128i v70; // xmm1
  __m128i v71; // xmm2
  __m128i v72; // xmm0
  __m128i v73; // xmm1
  __m128i v74; // xmm3
  __m128i v75; // xmm7
  __m128i v76; // xmm2
  __m128i v77; // xmm0
  __m128i v78; // xmm3
  __m128i v79; // xmm1
  __m128i v80; // xmm7
  __m128i v81; // xmm8
  __m128i v82; // xmm2
  __m128i v83; // xmm7
  __m128i v84; // xmm0
  __m128i v85; // xmm2
  __m128i v86; // xmm3
  __m128i v87; // xmm0
  unsigned __int64 v88; // rcx
  char *v89; // r8
  char *v90; // rax
  __int64 v91; // r13
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // rax
  unsigned int *v95; // r13
  __int64 v96; // r8
  unsigned __int64 v97; // r15
  unsigned __int64 v98; // rdx
  __int64 v99; // r14
  _QWORD *v100; // rcx
  __int64 v101; // rax
  __m128i v102; // xmm2
  unsigned int v103; // r13d
  int v104; // ecx
  int v105; // r15d
  unsigned int v106; // ecx
  unsigned int v107; // r15d
  _QWORD *v108; // r14
  __int64 v109; // rcx
  int v110; // eax
  unsigned int v111; // r14d
  int v112; // eax
  int v113; // eax
  _QWORD *v114; // r13
  __int64 v115; // rcx
  unsigned int v116; // eax
  unsigned int v117; // ecx
  unsigned int v118; // r15d
  _QWORD *v119; // rax
  __int64 v120; // rcx
  int v121; // eax
  __int64 v122; // rbp
  unsigned __int64 v123; // r14
  unsigned int v124; // r13d
  unsigned __int64 k; // rbp
  int v126; // eax
  int v127; // eax
  _QWORD *v128; // r13
  __int64 v129; // rax
  unsigned int v130; // r14d
  unsigned int v131; // eax
  _QWORD *v132; // r14
  __int64 v133; // rax
  int v134; // eax
  unsigned int v135; // r13d
  void *v136; // rax
  __int64 **v137; // r14
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // r13
  __int64 *v141; // r15
  __int64 v142; // r12
  unsigned __int8 *v143; // rbx
  unsigned __int64 v144; // rbp
  void *v145; // rax
  unsigned int v146; // r13d
  unsigned __int8 *v147; // r12
  unsigned int v148; // edx
  int v149; // ecx
  __int64 v150; // rcx
  char *v151; // rax
  _QWORD *v152; // rax
  __int64 **v153; // rax
  __int64 (__fastcall ***v154)(); // rbx
  unsigned int v155; // r13d
  unsigned int v156; // eax
  int v157; // r15d
  char *v158; // r14
  _QWORD *v159; // rdi
  __int64 v160; // r9
  unsigned int v161; // esi
  __int64 v162; // rdx
  __int64 v163; // rax
  __int64 v164; // rcx
  char *v165; // rax
  int v166; // r15d
  char *v167; // r13
  int v168; // eax
  int v169; // edx
  int v170; // eax
  __int64 n; // r12
  __int64 v172; // r13
  int v173; // eax
  __int16 v174; // r14
  int v175; // eax
  __int64 v176; // r13
  __int64 v177; // r14
  int v178; // eax
  int v179; // eax
  int v180; // eax
  _QWORD *v181; // rbp
  __int64 v182; // rcx
  unsigned int v183; // eax
  _QWORD *v184; // r14
  __int64 v185; // rax
  int v186; // eax
  unsigned int v187; // edx
  unsigned int v188; // r13d
  _QWORD *v189; // rbp
  __int64 v190; // rax
  int v191; // eax
  unsigned int v192; // edx
  char *v193; // rax
  _QWORD *v194; // rdi
  __int64 m; // r10
  __int64 v196; // rcx
  __int64 v197; // rdx
  __int64 v198; // rsi
  char *v199; // rdx
  size_t v200; // rdx
  __int64 j; // rax
  __int64 v202; // r12
  int v203; // eax
  unsigned int v204; // r15d
  unsigned __int64 v205; // rax
  unsigned __int64 v206; // r13
  unsigned int v207; // r13d
  int *v208; // rax
  __int64 v209; // rax
  int v210; // edx
  __int64 v211; // r13
  unsigned int ii; // ebp
  char v213; // si
  int v214; // eax
  __int64 v215; // rbp
  int v216; // ecx
  unsigned __int64 *v217; // r13
  unsigned __int64 v218; // rdx
  unsigned int v219; // ebx
  int v220; // r14d
  unsigned int v221; // ecx
  int v222; // r14d
  unsigned __int64 v223; // rbx
  unsigned int v224; // r13d
  int v225; // eax
  int v226; // eax
  _QWORD *v227; // rbp
  __int64 v228; // rcx
  __int64 v229; // rsi
  __int64 (__fastcall **v230)(); // rax
  __int64 v231; // rbp
  volatile signed __int32 *v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rbp
  __int64 v235; // rax
  int v236; // edx
  __int64 v237; // r15
  __int64 v238; // r8
  unsigned __int8 *v239; // rbp
  unsigned int v240; // r15d
  __int64 v241; // r14
  __int64 (__fastcall *v242)(__int64); // rdi
  __int64 v243; // rax
  __int64 v244; // rdx
  _QWORD *v245; // rbx
  __int64 v246; // rax
  unsigned __int64 v247; // rdx
  unsigned __int64 v248; // rdi
  bool v249; // cl
  __int64 v250; // rax
  unsigned __int64 v251; // rsi
  _BYTE *v252; // rdx
  __int64 (__fastcall *v253)(__int64); // rdi
  unsigned __int64 v254; // rsi
  _QWORD *v255; // rbx
  __int64 v256; // rax
  __int64 v257; // rbx
  __int64 (__fastcall *v258)(__int64); // rbp
  __int64 (__fastcall *v259)(__int64); // rax
  __int64 v260; // rax
  char *v261; // rbx
  __int64 v262; // rsi
  unsigned int v263; // ecx
  char *v264; // rbp
  _QWORD *v265; // rax
  unsigned __int64 v266; // r14
  unsigned __int64 v267; // r13
  void *v268; // rdi
  unsigned __int8 v269; // dl
  unsigned __int64 v270; // r8
  unsigned int v271; // r14d
  int v272; // r14d
  unsigned int v273; // ecx
  unsigned __int64 v274; // r13
  int v275; // eax
  int v276; // eax
  _QWORD *v277; // rbp
  __int64 v278; // rcx
  _QWORD *v279; // r10
  __int64 v280; // rcx
  int v281; // edx
  int v282; // ebx
  bool v283; // zf
  char v284; // cl
  __int64 v285; // rcx
  unsigned __int64 v286; // rsi
  unsigned int v287; // esi
  __int64 v288; // rbx
  __int64 v289; // r15
  unsigned __int8 *v290; // r14
  unsigned int v291; // r13d
  int v292; // ecx
  unsigned int v293; // ebx
  unsigned int v294; // ecx
  int v295; // ebx
  char v296; // al
  __int64 v297; // rax
  unsigned int v298; // r13d
  unsigned int v299; // ebp
  int v300; // r14d
  __int64 v301; // r15
  int v302; // ebx
  char v303; // r12
  _QWORD *v304; // rax
  __int64 v305; // rcx
  int v306; // eax
  char v307; // si
  __int64 *v308; // rbp
  __int64 v309; // rax
  __int64 *v310; // r14
  unsigned __int64 v311; // r13
  unsigned __int64 v312; // rbx
  void *v313; // rdi
  __int64 *v314; // rbx
  __int64 *v315; // rbp
  __int64 v316; // rsi
  __int64 v317; // rdi
  char *v318; // rax
  char *v319; // rbp
  char *v320; // rbx
  char *v321; // r13
  __int64 v322; // rsi
  unsigned int v323; // ecx
  __int64 v324; // rdi
  unsigned int v325; // ecx
  __int64 *v326; // rbx
  __int64 *v327; // rbp
  __int64 v328; // rsi
  __int64 v329; // rdi
  _QWORD *v330; // rbp
  __int64 v331; // rax
  int v332; // eax
  int v333; // ecx
  _QWORD *v334; // rbp
  __int64 v335; // rax
  int v336; // edx
  char v337; // si
  unsigned int v338; // esi
  char v339; // al
  const __m128i *v340; // rbx
  __int64 v341; // r13
  _QWORD *v342; // rax
  __int64 v343; // rcx
  __int64 v344; // r9
  __int64 v345; // r13
  _BYTE *v346; // rsi
  __m128i *v347; // rcx
  const __m128i *v348; // rdx
  __m128 v349; // xmm5
  __m128 v350; // xmm0
  __m128i v351; // xmm0
  __m128i v352; // xmm1
  __m128i v353; // xmm2
  __m128i v354; // xmm1
  __m128i v355; // xmm0
  __m128i v356; // xmm2
  __m128i v357; // xmm3
  __m128i v358; // xmm1
  __m128i v359; // xmm3
  __int64 v360; // r13
  __int64 (__fastcall *v361)(__int64); // rbx
  __int64 (__fastcall *v362)(__int64); // rax
  __int64 v363; // rax
  _QWORD *v364; // rbx
  __int64 v365; // rax
  _QWORD *v366; // rbx
  int v367; // ebp
  __int64 v368; // rax
  __int64 v369; // rsi
  unsigned __int64 v370; // rdi
  _QWORD *v371; // rax
  int v372; // r8d
  __int64 v373; // rcx
  int v374; // eax
  int v375; // eax
  _QWORD *v376; // r15
  __int64 v377; // rax
  __int64 v378; // rdi
  __int64 p_ptr; // [rsp+8h] [rbp-11E0h] BYREF
  __int64 v380; // [rsp+10h] [rbp-11D8h]
  __int64 v381; // [rsp+18h] [rbp-11D0h]
  void **v382; // [rsp+20h] [rbp-11C8h]
  unsigned __int64 v383; // [rsp+28h] [rbp-11C0h]
  __int64 (__fastcall ***v384)(); // [rsp+30h] [rbp-11B8h]
  unsigned __int64 v385; // [rsp+38h] [rbp-11B0h]
  _BYTE *v386; // [rsp+40h] [rbp-11A8h]
  __int64 **v387; // [rsp+48h] [rbp-11A0h]
  __int64 v388; // [rsp+50h] [rbp-1198h]
  _QWORD *v389; // [rsp+58h] [rbp-1190h]
  __int64 v390; // [rsp+60h] [rbp-1188h]
  unsigned __int64 v391; // [rsp+68h] [rbp-1180h]
  __int64 (__fastcall *v392)(__int64); // [rsp+70h] [rbp-1178h]
  unsigned __int64 v393; // [rsp+78h] [rbp-1170h]
  unsigned __int64 v394; // [rsp+80h] [rbp-1168h]
  __int64 (__fastcall ***v395)(); // [rsp+88h] [rbp-1160h]
  __int64 v396; // [rsp+90h] [rbp-1158h]
  unsigned __int8 *v397; // [rsp+98h] [rbp-1150h]
  __int64 v398; // [rsp+A0h] [rbp-1148h]
  __int64 v399; // [rsp+A8h] [rbp-1140h]
  int v400; // [rsp+BCh] [rbp-112Ch] BYREF
  void *v401; // [rsp+C0h] [rbp-1128h] BYREF
  __int64 v402; // [rsp+C8h] [rbp-1120h]
  __int64 v403; // [rsp+D0h] [rbp-1118h] BYREF
  __int64 (__fastcall **v404)(); // [rsp+E0h] [rbp-1108h] BYREF
  __int64 v405; // [rsp+E8h] [rbp-1100h]
  __int128 v406; // [rsp+F0h] [rbp-10F8h]
  __int64 v407; // [rsp+100h] [rbp-10E8h]
  char v408; // [rsp+108h] [rbp-10E0h]
  int v409; // [rsp+10Ch] [rbp-10DCh]
  __int64 **v410; // [rsp+110h] [rbp-10D8h]
  _BYTE s2[24]; // [rsp+120h] [rbp-10C8h] BYREF
  void *v412; // [rsp+138h] [rbp-10B0h]
  __int64 v413; // [rsp+140h] [rbp-10A8h]
  __int64 *v414; // [rsp+168h] [rbp-1080h]
  __int64 v415; // [rsp+170h] [rbp-1078h]
  __int128 v416; // [rsp+178h] [rbp-1070h]
  void *v417; // [rsp+188h] [rbp-1060h]
  __m256i ptr; // [rsp+190h] [rbp-1058h] BYREF
  __m128i v419; // [rsp+1B0h] [rbp-1038h]

  v2 = a2;
  v3 = (const __m128i *)a1[5].m128i_i64[0];
  v385 = (unsigned __int64)a1;
  if ( v3 == &a1[4] )
  {
    v386 = s2;
  }
  else
  {
    v380 = a2;
    v4 = v3;
    p_ptr = (__int64)&ptr;
    m128i_i64 = (__int64)a1[1].m128i_i64;
    v386 = s2;
    do
    {
      *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128(v4 + 2);
      v9 = ptr.m256i_i64[0];
      *(__m128i *)&ptr.m256i_u64[2] = _mm_loadu_si128(v4 + 3);
      v10 = _mm_loadu_si128(v4 + 4);
      *(_QWORD *)s2 = ptr.m256i_i64[0];
      v419 = v10;
      v11 = sub_1FD3920(m128i_i64, (unsigned __int64 *)s2);
      if ( v12 )
        *(_DWORD *)(v11 + 8) = a1[3].m128i_i32[0];
      memset(s2, 0, 20);
      if ( !memcmp((const void *)(v11 + 48), s2, 0x14u) )
      {
        v8 = (const char *)ptr.m256i_i64[1];
        v13 = v9;
        while ( 1 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( !v14 )
            break;
          v13 = v14 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v14 & 4) == 0 || !v13 )
            goto LABEL_14;
        }
        v13 = 0;
LABEL_14:
        if ( ptr.m256i_i64[1] != *(_QWORD *)(v13 + 32) )
          return 1;
        do
        {
          v15 = *(_QWORD *)(v9 + 8);
          if ( !v15 )
          {
            if ( ptr.m256i_i64[2] != 46966720 )
              return 1;
            goto LABEL_6;
          }
          v9 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( (v15 & 4) != 0 && v9 );
        if ( ptr.m256i_i64[2] != *(_QWORD *)(v9 + 40) )
          return 1;
      }
      else
      {
        *(_QWORD *)s2 = v9;
        v6 = sub_1FD3920(m128i_i64, (unsigned __int64 *)s2);
        if ( v7 )
          *(_DWORD *)(v6 + 8) = a1[3].m128i_i32[0];
        v8 = (const char *)(p_ptr + 24);
        if ( memcmp((const void *)(v6 + 48), (const void *)(p_ptr + 24), 0x14u) )
          return 1;
      }
LABEL_6:
      v4 = (const __m128i *)std::_Rb_tree_increment(v4, v8);
    }
    while ( &a1[4] != v4 );
    v2 = v380;
  }
  v388 = sub_224A990("Module WriteIndex", 17, 0, 0);
  sub_A1FEC0(v2, 0x42u, 8);
  sub_A1FEC0(v2, 0x43u, 8);
  sub_A1FEC0(v2, 0x47u, 8);
  sub_A1FEC0(v2, 0x49u, 8);
  v387 = (__int64 **)&ptr;
  ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
  ptr.m256i_i64[1] = 0x4000000000LL;
  sub_A25970(v2, 0, 2u);
  v17 = *(_QWORD *)(v2 + 128);
  v18 = *(_QWORD *)(v2 + 136);
  *(_DWORD *)(v2 + 60) = -1;
  if ( v17 != v18 )
  {
    v19 = v17;
    do
    {
      v20 = v19 + 8;
      v19 += 32;
      sub_A0AD20(v20);
    }
    while ( v18 != v19 );
    *(_QWORD *)(v2 + 136) = v17;
  }
  v21 = 0;
  ptr.m256i_i32[2] = 0;
  if ( !ptr.m256i_i32[3] )
  {
    sub_2237220(v387, v387 + 2, 1, 8);
    v21 = 8LL * ptr.m256i_u32[2];
  }
  v22 = v387;
  v23 = "GLOBAL_INDEX_BLOCK";
  *(_QWORD *)(ptr.m256i_i64[0] + v21) = 8;
  v24 = v22 + 2;
  ++ptr.m256i_i32[2];
  sub_1FD0910(v2, 1u, (__int64)v22);
  v25 = 0;
  v26 = 71;
  ptr.m256i_i32[2] = 0;
  do
  {
    v27 = v26;
    ++v23;
    if ( v25 + 1 > (unsigned __int64)ptr.m256i_u32[3] )
    {
      sub_2237220(v387, v24, v25 + 1, 8);
      *(_QWORD *)(ptr.m256i_i64[0] + 8LL * ptr.m256i_u32[2]) = v27;
    }
    else
    {
      *(_QWORD *)(ptr.m256i_i64[0] + 8 * v25) = v26;
    }
    v26 = *v23;
    v25 = (unsigned int)++ptr.m256i_i32[2];
  }
  while ( v26 );
  sub_1FD0910(v2, 2u, (__int64)v387);
  sub_1FD0DA0(0, "INDEX_METADATA", v2, (__int64)v387);
  sub_1FD0DA0(1u, "MODULE", v2, (__int64)v387);
  sub_1FD0DA0(2u, "IDENTIFIER_INDEX", v2, (__int64)v387);
  sub_A25550(v2);
  if ( (__int64 **)ptr.m256i_i64[0] != v387 + 2 )
    free((void *)ptr.m256i_i64[0]);
  sub_A25970(v2, 8u, 3u);
  v28 = *(_DWORD *)(v2 + 56);
  v382 = &v401;
  v401 = &v403;
  v402 = 0x200000001LL;
  v403 = 1;
  sub_A1FEC0(v2, 3u, v28);
  v29 = *(_DWORD *)(v2 + 52);
  v30 = *(_DWORD *)(v2 + 48) + 6;
  if ( v30 > 0x1F )
  {
    v330 = *(_QWORD **)(v2 + 24);
    v331 = v330[1];
    if ( (unsigned __int64)(v331 + 4) > v330[2] )
    {
      sub_2236E10(*(_QWORD *)(v2 + 24), v330 + 3, v331 + 4, 1);
      v331 = v330[1];
    }
    *(_DWORD *)(*v330 + v331) = v29;
    v332 = *(_DWORD *)(v2 + 48);
    v330[1] += 4LL;
    v333 = ((_BYTE)v332 + 6) & 0x1F;
    v31 = 1 << v333;
    *(_DWORD *)(v2 + 48) = v333;
    v32 = v333 + 6;
    *(_DWORD *)(v2 + 52) = v31;
    if ( v32 <= 0x1F )
      goto LABEL_39;
LABEL_427:
    v334 = *(_QWORD **)(v2 + 24);
    v335 = v334[1];
    if ( (unsigned __int64)(v335 + 4) > v334[2] )
    {
      sub_2236E10(*(_QWORD *)(v2 + 24), v334 + 3, v335 + 4, 1);
      v335 = v334[1];
    }
    *(_DWORD *)(*v334 + v335) = v31;
    v336 = *(_DWORD *)(v2 + 48);
    v31 = 0;
    v334[1] += 4LL;
    if ( v336 )
      v31 = 1u >> (32 - v336);
    *(_DWORD *)(v2 + 52) = v31;
    v32 = ((_BYTE)v336 + 6) & 0x1F;
    *(_DWORD *)(v2 + 48) = v32;
    goto LABEL_40;
  }
  v31 = v29 | (1 << v30);
  *(_DWORD *)(v2 + 48) = v30;
  v32 = v30 + 6;
  *(_DWORD *)(v2 + 52) = v31;
  if ( v32 > 0x1F )
    goto LABEL_427;
LABEL_39:
  *(_DWORD *)(v2 + 48) = v32;
LABEL_40:
  v33 = *(_QWORD *)v401;
  v34 = *(_QWORD *)v401;
  if ( *(_QWORD *)v401 == v34 )
  {
    if ( (unsigned int)v33 > 0x1F )
    {
      do
      {
        v375 = (v34 & 0x1F | 0x20) << v32;
        v32 += 6;
        v31 |= v375;
        *(_DWORD *)(v2 + 52) = v31;
        if ( v32 > 0x1F )
        {
          v376 = *(_QWORD **)(v2 + 24);
          v377 = v376[1];
          if ( (unsigned __int64)(v377 + 4) > v376[2] )
          {
            sub_2236E10(*(_QWORD *)(v2 + 24), v376 + 3, v377 + 4, 1);
            v377 = v376[1];
          }
          *(_DWORD *)(*v376 + v377) = v31;
          v374 = *(_DWORD *)(v2 + 48);
          v31 = 0;
          v376[1] += 4LL;
          if ( v374 )
            v31 = (v34 & 0x1F | 0x20) >> (32 - v374);
          v32 = ((_BYTE)v374 + 6) & 0x1F;
          *(_DWORD *)(v2 + 52) = v31;
        }
        v34 >>= 5;
        *(_DWORD *)(v2 + 48) = v32;
      }
      while ( v34 > 0x1F );
    }
  }
  else if ( v33 > 0x1F )
  {
    do
    {
      v36 = (v33 & 0x1F | 0x20) << v32;
      v32 += 6;
      v31 |= v36;
      *(_DWORD *)(v2 + 52) = v31;
      if ( v32 > 0x1F )
      {
        v37 = *(_QWORD **)(v2 + 24);
        v38 = v37[1];
        if ( (unsigned __int64)(v38 + 4) > v37[2] )
        {
          sub_2236E10(*(_QWORD *)(v2 + 24), v37 + 3, v38 + 4, 1);
          v38 = v37[1];
        }
        *(_DWORD *)(*v37 + v38) = v31;
        v35 = *(_DWORD *)(v2 + 48);
        v31 = 0;
        v37[1] += 4LL;
        if ( v35 )
          v31 = (v33 & 0x1F | 0x20) >> (32 - (unsigned __int8)v35);
        v32 = ((_BYTE)v35 + 6) & 0x1F;
        *(_DWORD *)(v2 + 52) = v31;
      }
      v33 >>= 5;
      *(_DWORD *)(v2 + 48) = v32;
    }
    while ( v33 > 0x1F );
    v34 = v33;
  }
  v39 = v34 << v32;
  v40 = v32 + 6;
  v41 = v39 | v31;
  *(_DWORD *)(v2 + 52) = v41;
  if ( v40 > 0x1F )
  {
    v189 = *(_QWORD **)(v2 + 24);
    v190 = v189[1];
    if ( (unsigned __int64)(v190 + 4) > v189[2] )
    {
      sub_2236E10(*(_QWORD *)(v2 + 24), v189 + 3, v190 + 4, 1);
      v190 = v189[1];
    }
    *(_DWORD *)(*v189 + v190) = v41;
    v191 = *(_DWORD *)(v2 + 48);
    v192 = 0;
    v189[1] += 4LL;
    if ( v191 )
      v192 = v34 >> (32 - v191);
    *(_DWORD *)(v2 + 52) = v192;
    *(_DWORD *)(v2 + 48) = ((_BYTE)v191 + 6) & 0x1F;
  }
  else
  {
    *(_DWORD *)(v2 + 48) = v40;
  }
  v42 = *(__int64 (__fastcall ****)())(v385 + 40);
  v43 = *(unsigned int *)(v385 + 48);
  v383 = (unsigned __int64)(v382 + 2);
  v380 = (__int64)v42;
  v384 = &v42[9 * v43];
  if ( v42 != v384 )
  {
    while ( 1 )
    {
      LODWORD(v402) = 0;
      v44 = *(unsigned int *)(v380 + 8);
      v45 = 0;
      if ( !HIDWORD(v402) )
      {
        sub_2237220(v382, v383, 1, 8);
        v45 = 8LL * (unsigned int)v402;
      }
      v46 = (unsigned __int64 *)v380;
      *(_QWORD *)((char *)v401 + v45) = v44;
      v47 = *v46;
      v48 = (unsigned int)(v402 + 1);
      LODWORD(v402) = v402 + 1;
      while ( 1 )
      {
        v49 = *(_QWORD *)(v47 + 8);
        if ( !v49 )
          break;
        v47 = v49 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v49 & 4) == 0 || !v47 )
          goto LABEL_60;
      }
      v47 = 0;
LABEL_60:
      v50 = *(_QWORD *)(v47 + 32);
      if ( v48 + 1 > (unsigned __int64)HIDWORD(v402) )
      {
        sub_2237220(v382, v383, v48 + 1, 8);
        v48 = (unsigned int)v402;
      }
      v51 = (unsigned __int64 *)v380;
      *((_QWORD *)v401 + v48) = v50;
      v52 = *v51;
      v53 = (unsigned int)(v402 + 1);
      LODWORD(v402) = v402 + 1;
      while ( 1 )
      {
        v54 = *(_QWORD *)(v52 + 8);
        if ( !v54 )
          break;
        v52 = v54 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v54 & 4) == 0 || !v52 )
          goto LABEL_66;
      }
      v52 = 0;
LABEL_66:
      v55 = *(_QWORD *)(v52 + 40);
      if ( v53 + 1 > (unsigned __int64)HIDWORD(v402) )
      {
        sub_2237220(v382, v383, v53 + 1, 8);
        v53 = (unsigned int)v402;
      }
      v56 = (const __m128i **)v380;
      *((_QWORD *)v401 + v53) = v55;
      v57 = *v56;
      v58 = (unsigned int)(v402 + 1);
      LODWORD(v402) = v402 + 1;
      for ( i = v57->m128i_i64[1]; i; i = *(_QWORD *)(v60 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v60 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v60 )
          break;
        v57 = (const __m128i *)v60;
      }
      v61 = v57->m128i_i64[0];
      v62 = v57 + 2;
      if ( v58 + 1 > (unsigned __int64)HIDWORD(v402) )
      {
        sub_2237220(v382, v383, v58 + 1, 8);
        v58 = (unsigned int)v402;
      }
      *((_QWORD *)v401 + v58) = v61;
      v63 = HIDWORD(v402);
      v64 = (unsigned int)(v402 + 1);
      v65 = v61 + v64;
      LODWORD(v402) = v402 + 1;
      if ( v61 + v64 > (unsigned __int64)HIDWORD(v402) )
      {
        sub_2237220(v382, v383, v65, 8);
        v64 = (unsigned int)v402;
        v63 = HIDWORD(v402);
        v65 = v61 + (unsigned int)v402;
      }
      v66 = v401;
      v67 = (char *)v401 + 8 * v64;
      if ( v61 > 0 )
      {
        if ( (v67 >= &v57[2].m128i_i8[v61] || v62 >= (const __m128i *)((char *)v401 + 8 * v65))
          && (unsigned __int64)(v61 - 1) > 0xE )
        {
          v68 = (__m128i *)((char *)v401 + 8 * v64);
          v69 = v57;
          do
          {
            v70 = _mm_loadu_si128(++v69 + 1);
            v68 += 8;
            v71 = _mm_cmpgt_epi8((__m128i)0LL, v70);
            v72 = _mm_unpacklo_epi8(v70, v71);
            v73 = _mm_unpackhi_epi8(v70, v71);
            v74 = _mm_cmpgt_epi16((__m128i)0LL, v72);
            v75 = _mm_cmpgt_epi16((__m128i)0LL, v73);
            v76 = _mm_unpacklo_epi16(v72, v74);
            v77 = _mm_unpackhi_epi16(v72, v74);
            v78 = _mm_unpacklo_epi16(v73, v75);
            v79 = _mm_unpackhi_epi16(v73, v75);
            v80 = _mm_cmpgt_epi32((__m128i)0LL, v76);
            v81 = _mm_unpacklo_epi32(v76, v80);
            v68[-7] = _mm_unpackhi_epi32(v76, v80);
            v82 = _mm_cmpgt_epi32((__m128i)0LL, v77);
            v68[-8] = v81;
            v83 = _mm_unpacklo_epi32(v77, v82);
            v68[-5] = _mm_unpackhi_epi32(v77, v82);
            v84 = _mm_cmpgt_epi32((__m128i)0LL, v78);
            v68[-6] = v83;
            v85 = _mm_unpacklo_epi32(v78, v84);
            v86 = _mm_unpackhi_epi32(v78, v84);
            v87 = _mm_cmpgt_epi32((__m128i)0LL, v79);
            v68[-4] = v85;
            v68[-3] = v86;
            v68[-2] = _mm_unpacklo_epi32(v79, v87);
            v68[-1] = _mm_unpackhi_epi32(v79, v87);
          }
          while ( &v57->m128i_i8[v61 & 0xFFFFFFFFFFFFFFF0LL] != (__int8 *)v69 );
          v88 = v61 - (v61 & 0xFFFFFFFFFFFFFFF0LL);
          v89 = &v62->m128i_i8[v61 & 0xFFFFFFFFFFFFFFF0LL];
          v90 = &v67[8 * (v61 & 0xFFFFFFFFFFFFFFF0LL)];
          if ( v61 != (v61 & 0xFFFFFFFFFFFFFFF0LL) )
          {
            *(_QWORD *)v90 = *v89;
            if ( v88 != 1 )
            {
              *((_QWORD *)v90 + 1) = v89[1];
              if ( v88 != 2 )
              {
                *((_QWORD *)v90 + 2) = v89[2];
                if ( v88 != 3 )
                {
                  *((_QWORD *)v90 + 3) = v89[3];
                  if ( v88 != 4 )
                  {
                    *((_QWORD *)v90 + 4) = v89[4];
                    if ( v88 != 5 )
                    {
                      *((_QWORD *)v90 + 5) = v89[5];
                      if ( v88 != 6 )
                      {
                        *((_QWORD *)v90 + 6) = v89[6];
                        if ( v88 != 7 )
                        {
                          *((_QWORD *)v90 + 7) = v89[7];
                          if ( v88 != 8 )
                          {
                            *((_QWORD *)v90 + 8) = v89[8];
                            if ( v88 != 9 )
                            {
                              *((_QWORD *)v90 + 9) = v89[9];
                              if ( v88 != 10 )
                              {
                                *((_QWORD *)v90 + 10) = v89[10];
                                if ( v88 != 11 )
                                {
                                  *((_QWORD *)v90 + 11) = v89[11];
                                  if ( v88 != 12 )
                                  {
                                    *((_QWORD *)v90 + 12) = v89[12];
                                    if ( v88 != 13 )
                                    {
                                      *((_QWORD *)v90 + 13) = v89[13];
                                      if ( v88 != 14 )
                                        *((_QWORD *)v90 + 14) = v89[14];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          for ( j = 0; j != v61; ++j )
            *(_QWORD *)&v67[8 * j] = v57[2].m128i_i8[j];
        }
      }
      LODWORD(v402) = v65;
      v91 = *(unsigned int *)(v380 + 24);
      v92 = (unsigned int)v65;
      v93 = (unsigned int)v65 + 1LL;
      if ( v93 > v63 )
      {
        sub_2237220(v382, v383, v93, 8);
        v66 = v401;
        v92 = (unsigned int)v402;
      }
      v66[v92] = v91;
      LODWORD(v402) = v402 + 1;
      v94 = (unsigned int)v402;
      v95 = *(unsigned int **)(v380 + 16);
      v96 = 4LL * *(unsigned int *)(v380 + 24);
      v97 = v96 >> 2;
      v98 = (v96 >> 2) + (unsigned int)v402;
      v99 = v96 >> 2;
      if ( v98 > HIDWORD(v402) )
      {
        p_ptr = 4LL * *(unsigned int *)(v380 + 24);
        sub_2237220(v382, v383, v98, 8);
        v94 = (unsigned int)v402;
        v96 = p_ptr;
        LODWORD(v98) = v97 + v402;
      }
      v100 = (char *)v401 + 8 * v94;
      if ( v96 )
      {
        if ( v97 - 1 <= 2 )
          goto LABEL_519;
        v101 = 0;
        do
        {
          v102 = _mm_loadu_si128((const __m128i *)&v95[v101]);
          *(__m128i *)&v100[v101 + 2] = _mm_unpackhi_epi32(v102, (__m128i)0LL);
          *(__m128i *)&v100[v101] = _mm_unpacklo_epi32(v102, (__m128i)0LL);
          v101 += 4;
        }
        while ( 4 * (v97 >> 2) != v101 );
        v99 = v97 - (v97 & 0xFFFFFFFFFFFFFFFCLL);
        v95 += v97 & 0xFFFFFFFFFFFFFFFCLL;
        v100 += v97 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v97 != (v97 & 0xFFFFFFFFFFFFFFFCLL) )
        {
LABEL_519:
          *v100 = *v95;
          if ( v99 != 1 )
          {
            v100[1] = v95[1];
            if ( v99 != 2 )
              v100[2] = v95[2];
          }
        }
      }
      LODWORD(v402) = v98;
      v103 = v98;
      sub_A1FEC0(v2, 3u, *(_DWORD *)(v2 + 56));
      v104 = *(_DWORD *)(v2 + 48);
      v105 = 1 << v104;
      v106 = v104 + 6;
      v107 = *(_DWORD *)(v2 + 52) | v105;
      *(_DWORD *)(v2 + 52) = v107;
      if ( v106 > 0x1F )
      {
        v108 = *(_QWORD **)(v2 + 24);
        v109 = v108[1];
        if ( (unsigned __int64)(v109 + 4) > v108[2] )
        {
          sub_2236E10(*(_QWORD *)(v2 + 24), v108 + 3, v109 + 4, 1);
          v109 = v108[1];
        }
        *(_DWORD *)(*v108 + v109) = v107;
        v110 = *(_DWORD *)(v2 + 48);
        v107 = 0;
        v108[1] += 4LL;
        if ( v110 )
          v107 = 1u >> (32 - v110);
        *(_DWORD *)(v2 + 52) = v107;
        v106 = ((_BYTE)v110 + 6) & 0x1F;
      }
      *(_DWORD *)(v2 + 48) = v106;
      v111 = v103;
      if ( v103 > 0x1F )
      {
        LODWORD(p_ptr) = v103;
        do
        {
          v113 = (v111 & 0x1F | 0x20) << v106;
          v106 += 6;
          v107 |= v113;
          *(_DWORD *)(v2 + 52) = v107;
          if ( v106 > 0x1F )
          {
            v114 = *(_QWORD **)(v2 + 24);
            v115 = v114[1];
            if ( (unsigned __int64)(v115 + 4) > v114[2] )
            {
              sub_2236E10(*(_QWORD *)(v2 + 24), v114 + 3, v115 + 4, 1);
              v115 = v114[1];
            }
            *(_DWORD *)(*v114 + v115) = v107;
            v112 = *(_DWORD *)(v2 + 48);
            v107 = 0;
            v114[1] += 4LL;
            if ( v112 )
              v107 = (v111 & 0x1F | 0x20) >> (32 - v112);
            v106 = ((_BYTE)v112 + 6) & 0x1F;
            *(_DWORD *)(v2 + 52) = v107;
          }
          v111 >>= 5;
          *(_DWORD *)(v2 + 48) = v106;
        }
        while ( v111 > 0x1F );
        v103 = p_ptr;
      }
      v116 = v111 << v106;
      v117 = v106 + 6;
      v118 = v116 | v107;
      *(_DWORD *)(v2 + 52) = v118;
      if ( v117 > 0x1F )
      {
        v119 = *(_QWORD **)(v2 + 24);
        v120 = v119[1];
        if ( (unsigned __int64)(v120 + 4) > v119[2] )
        {
          p_ptr = *(_QWORD *)(v2 + 24);
          sub_2236E10(p_ptr, v119 + 3, v120 + 4, 1);
          v119 = (_QWORD *)p_ptr;
          v120 = *(_QWORD *)(p_ptr + 8);
        }
        *(_DWORD *)(*v119 + v120) = v118;
        v118 = 0;
        v119[1] += 4LL;
        v121 = *(_DWORD *)(v2 + 48);
        if ( v121 )
          v118 = v111 >> (32 - v121);
        v117 = ((_BYTE)v121 + 6) & 0x1F;
        *(_DWORD *)(v2 + 52) = v118;
      }
      *(_DWORD *)(v2 + 48) = v117;
      if ( v103 )
        break;
LABEL_152:
      v380 += 72;
      if ( v384 == (__int64 (__fastcall ***)())v380 )
        goto LABEL_153;
    }
    v122 = 0;
    v381 = 8LL * (v103 - 1) + 8;
    while ( 1 )
    {
      v123 = *(_QWORD *)((char *)v401 + v122);
      v124 = v123;
      if ( v123 == (unsigned int)v123 )
      {
        if ( (unsigned int)v123 > 0x1F )
        {
          p_ptr = v122;
          do
          {
            v180 = (v124 & 0x1F | 0x20) << v117;
            v117 += 6;
            v118 |= v180;
            *(_DWORD *)(v2 + 52) = v118;
            if ( v117 > 0x1F )
            {
              v181 = *(_QWORD **)(v2 + 24);
              v182 = v181[1];
              if ( (unsigned __int64)(v182 + 4) > v181[2] )
              {
                sub_2236E10(*(_QWORD *)(v2 + 24), v181 + 3, v182 + 4, 1);
                v182 = v181[1];
              }
              *(_DWORD *)(*v181 + v182) = v118;
              v179 = *(_DWORD *)(v2 + 48);
              v118 = 0;
              v181[1] += 4LL;
              if ( v179 )
                v118 = (v124 & 0x1F | 0x20) >> (32 - v179);
              v117 = ((_BYTE)v179 + 6) & 0x1F;
              *(_DWORD *)(v2 + 52) = v118;
            }
            v124 >>= 5;
            *(_DWORD *)(v2 + 48) = v117;
          }
          while ( v124 > 0x1F );
          v122 = p_ptr;
        }
        v183 = v124 << v117;
        v117 += 6;
        v118 |= v183;
        *(_DWORD *)(v2 + 52) = v118;
        if ( v117 > 0x1F )
        {
          v184 = *(_QWORD **)(v2 + 24);
          v185 = v184[1];
          if ( (unsigned __int64)(v185 + 4) > v184[2] )
          {
            sub_2236E10(*(_QWORD *)(v2 + 24), v184 + 3, v185 + 4, 1);
            v185 = v184[1];
          }
          *(_DWORD *)(*v184 + v185) = v118;
          v186 = *(_DWORD *)(v2 + 48);
          v187 = 0;
          v184[1] += 4LL;
          v188 = v124 >> (32 - v186);
          if ( v186 )
            v187 = v188;
          v117 = ((_BYTE)v186 + 6) & 0x1F;
          *(_DWORD *)(v2 + 48) = v117;
          v118 = v187;
          *(_DWORD *)(v2 + 52) = v187;
          goto LABEL_151;
        }
      }
      else
      {
        if ( v123 > 0x1F )
        {
          p_ptr = v122;
          for ( k = v123; k > 0x1F; k >>= 5 )
          {
            v127 = (k & 0x1F | 0x20) << v117;
            v117 += 6;
            v118 |= v127;
            *(_DWORD *)(v2 + 52) = v118;
            if ( v117 > 0x1F )
            {
              v128 = *(_QWORD **)(v2 + 24);
              v129 = v128[1];
              if ( (unsigned __int64)(v129 + 4) > v128[2] )
              {
                sub_2236E10(*(_QWORD *)(v2 + 24), v128 + 3, v129 + 4, 1);
                v129 = v128[1];
              }
              *(_DWORD *)(*v128 + v129) = v118;
              v126 = *(_DWORD *)(v2 + 48);
              v128[1] += 4LL;
              v118 = (k & 0x1F | 0x20) >> (32 - (unsigned __int8)v126);
              if ( !v126 )
                v118 = 0;
              v117 = ((_BYTE)v126 + 6) & 0x1F;
              *(_DWORD *)(v2 + 52) = v118;
            }
            *(_DWORD *)(v2 + 48) = v117;
          }
          v130 = k;
          v122 = p_ptr;
          v124 = v130;
        }
        v131 = v124 << v117;
        v117 += 6;
        v118 |= v131;
        *(_DWORD *)(v2 + 52) = v118;
        if ( v117 > 0x1F )
        {
          v132 = *(_QWORD **)(v2 + 24);
          v133 = v132[1];
          if ( (unsigned __int64)(v133 + 4) > v132[2] )
          {
            sub_2236E10(*(_QWORD *)(v2 + 24), v132 + 3, v133 + 4, 1);
            v133 = v132[1];
          }
          *(_DWORD *)(*v132 + v133) = v118;
          v134 = *(_DWORD *)(v2 + 48);
          v118 = 0;
          v132[1] += 4LL;
          v135 = v124 >> (32 - v134);
          if ( v134 )
            v118 = v135;
          v117 = ((_BYTE)v134 + 6) & 0x1F;
          *(_DWORD *)(v2 + 52) = v118;
        }
      }
      *(_DWORD *)(v2 + 48) = v117;
LABEL_151:
      v122 += 8;
      if ( v381 == v122 )
        goto LABEL_152;
    }
  }
LABEL_153:
  v415 = 0;
  *(_OWORD *)&s2[8] = 0;
  v416 = 0;
  v412 = v386 + 40;
  v413 = 0x400000000LL;
  v414 = (__int64 *)(v386 + 88);
  *(_QWORD *)s2 = 64;
  v136 = calloc(0x40u, 0x10u);
  if ( !v136 )
    goto LABEL_415;
  v417 = v136;
  sub_1FD1B00(v387, *(__int64 **)(v385 + 104), *(_DWORD *)(v385 + 112) == 0);
  v137 = (__int64 **)ptr.m256i_i64[0];
  sub_1FD1B00(v387, (__int64 *)(*(_QWORD *)(v385 + 104) + 8LL * *(unsigned int *)(v385 + 112)), 1);
  v380 = ptr.m256i_i64[0];
  if ( v137 != (__int64 **)ptr.m256i_i64[0] )
  {
    v140 = *(unsigned int *)s2;
    v141 = *v137;
    v383 = v2;
    while ( 1 )
    {
      v142 = *v141;
      v143 = (unsigned __int8 *)(v141 + 4);
      LODWORD(p_ptr) = 2 * v140;
      ++*(_DWORD *)&s2[4];
      if ( 4 * *(_DWORD *)&s2[4] >= (unsigned int)(3 * v140) )
      {
        v193 = (char *)calloc((unsigned int)(2 * v140), 0x10u);
        if ( !v193 )
        {
          if ( (_DWORD)p_ptr )
            goto LABEL_415;
          v193 = (char *)malloc(1u);
          if ( !v193 )
            goto LABEL_415;
        }
        v194 = v417;
        if ( v140 )
        {
          for ( m = 0; m != v140; ++m )
          {
            v196 = v194[2 * m + 1];
            if ( v196 )
            {
              do
              {
                v197 = *(_DWORD *)(v196 + 48) & (unsigned int)(2 * v140 - 1);
                v198 = *(_QWORD *)(v196 + 40);
                *(_QWORD *)(v196 + 40) = 0;
                v199 = &v193[16 * v197];
                *(_QWORD *)(v196 + 40) = *((_QWORD *)v199 + 1);
                *((_QWORD *)v199 + 1) = v196;
                v196 = v198;
                ++*((_DWORD *)v199 + 1);
              }
              while ( v198 );
              v194 = v417;
            }
          }
        }
        v381 = (__int64)v193;
        free(v194);
        *(_DWORD *)s2 = p_ptr;
        v417 = (void *)v381;
      }
      *(_QWORD *)&v416 = v416 + 56;
      v144 = (*(_QWORD *)&s2[8] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)&s2[16] >= v144 + 56 && *(_QWORD *)&s2[8] )
        *(_QWORD *)&s2[8] = v144 + 56;
      else
        v144 = sub_986170((__int64)(v386 + 8), 56, 56, 3, v138, v139);
      *(_QWORD *)v144 = v143;
      v145 = (void *)(v144 + 32);
      *(_QWORD *)(v144 + 8) = v142;
      *(_QWORD *)(v144 + 24) = 0x200000000LL;
      v146 = *((_DWORD *)v141 + 4);
      *(_QWORD *)(v144 + 16) = v144 + 32;
      if ( !v146 || (__int64 *)(v144 + 16) == v141 + 1 )
      {
        v147 = &v143[v142];
        *(_QWORD *)(v144 + 40) = 0;
        if ( v143 != v147 )
          goto LABEL_162;
      }
      else
      {
        v200 = 4LL * v146;
        if ( v146 <= 2uLL
          || (sub_2237220(v144 + 16, v144 + 32, v146, 4),
              v145 = *(void **)(v144 + 16),
              (v200 = 4LL * *((unsigned int *)v141 + 4)) != 0) )
        {
          memcpy(v145, (const void *)v141[1], v200);
        }
        v147 = &v143[v142];
        *(_DWORD *)(v144 + 24) = v146;
        *(_QWORD *)(v144 + 40) = 0;
        if ( v143 != v147 )
        {
LABEL_162:
          v148 = 5381;
          do
          {
            v149 = *v143++;
            v148 += v149 + 32 * v148;
          }
          while ( v147 != v143 );
          v150 = v148;
          goto LABEL_165;
        }
      }
      v150 = 5381;
      v148 = 5381;
LABEL_165:
      *(_DWORD *)(v144 + 48) = v148;
      v140 = *(unsigned int *)s2;
      v151 = (char *)v417 + 16 * (v150 & (*(unsigned int *)s2 - 1LL));
      *(_QWORD *)(v144 + 40) = *((_QWORD *)v151 + 1);
      v141 = v137[1];
      ++*((_DWORD *)v151 + 1);
      *((_QWORD *)v151 + 1) = v144;
      v152 = v137 + 1;
      if ( v141 && v141 != (__int64 *)-8LL )
      {
        ++v137;
        if ( (_QWORD *)v380 == v152 )
          goto LABEL_171;
      }
      else
      {
        v153 = v137 + 2;
        do
        {
          do
          {
            v141 = *v153;
            v137 = v153++;
          }
          while ( v141 == (__int64 *)-8LL );
        }
        while ( !v141 );
        if ( (__int64 **)v380 == v137 )
        {
LABEL_171:
          v2 = v383;
          break;
        }
      }
    }
  }
  v154 = &v404;
  LODWORD(v405) = 2;
  v410 = v387;
  v155 = 1;
  ptr.m256i_i64[0] = (__int64)(v387 + 3);
  *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D90);
  v406 = 0;
  v404 = &off_2BEBEE0;
  v408 = 0;
  v409 = 1;
  v407 = 0;
  sub_227B8B0(&v404, 0, 0, 0);
  v400 = 0;
  sub_227BF10(&v404, &v400, 4);
  if ( *(_DWORD *)&s2[4] > 2u && (unsigned int)(4 * *(_DWORD *)&s2[4]) > 2 )
  {
    _BitScanReverse(&v156, 4 * *(_DWORD *)&s2[4] / 3u);
    v155 = 1 << (32 - (v156 ^ 0x1F));
  }
  v157 = *(_DWORD *)s2;
  if ( *(_DWORD *)s2 == v155 )
  {
    v158 = (char *)v417;
    goto LABEL_184;
  }
  p_ptr = v155;
  v158 = (char *)calloc(v155, 0x10u);
  if ( !v158 )
LABEL_415:
    sub_2221CE0("Allocation failed");
  v159 = v417;
  if ( v157 )
  {
    v160 = 0;
    v161 = p_ptr - 1;
    do
    {
      v162 = v159[2 * v160 + 1];
      if ( v162 )
      {
        do
        {
          v163 = *(_DWORD *)(v162 + 48) & v161;
          v164 = *(_QWORD *)(v162 + 40);
          *(_QWORD *)(v162 + 40) = 0;
          v165 = &v158[16 * v163];
          *(_QWORD *)(v162 + 40) = *((_QWORD *)v165 + 1);
          *((_QWORD *)v165 + 1) = v162;
          v162 = v164;
          ++*((_DWORD *)v165 + 1);
        }
        while ( v164 );
        v159 = v417;
      }
      ++v160;
    }
    while ( v160 != v157 );
  }
  free(v159);
  *(_DWORD *)s2 = v155;
  v417 = v158;
LABEL_184:
  p_ptr = v2;
  v166 = 0;
  while ( 1 )
  {
    v167 = &v158[16 * v166];
    if ( *((_QWORD *)v167 + 1) )
    {
      v168 = sub_227AEE0(&v404);
      v169 = v168 + v407 - v406;
      v170 = *((_DWORD *)v167 + 1);
      *(_DWORD *)v167 = v169;
      LOWORD(v400) = v170;
      sub_227BF10(&v404, &v400, 2);
      for ( n = *((_QWORD *)v167 + 1); n; n = *(_QWORD *)(n + 40) )
      {
        v400 = *(_DWORD *)(n + 48);
        sub_227BF10(&v404, &v400, 4);
        v172 = *(_QWORD *)(n + 8);
        v173 = *(_DWORD *)(n + 24);
        LOWORD(v400) = v172;
        v174 = 4 * v173;
        sub_227BF10(&v404, &v400, 2);
        LOWORD(v400) = v174;
        sub_227BF10(&v404, &v400, 2);
        sub_227BF10(&v404, *(_QWORD *)n, (unsigned int)v172);
        v175 = *(_DWORD *)(n + 24);
        if ( v175 )
        {
          v176 = 0;
          v177 = 4LL * (unsigned int)(v175 - 1) + 4;
          do
          {
            v178 = *(_DWORD *)(*(_QWORD *)(n + 16) + v176);
            v176 += 4;
            v400 = v178;
            sub_227BF10(&v404, &v400, 4);
          }
          while ( v177 != v176 );
        }
      }
    }
    if ( *(_DWORD *)s2 <= (unsigned int)++v166 )
      break;
    v158 = (char *)v417;
  }
  v202 = p_ptr;
  v203 = sub_227AEE0(&v404);
  v204 = v203 + v407 - v406;
  v205 = ((v204 + 3LL) & 0xFFFFFFFFFFFFFFFCLL) - v204;
  v206 = v205 - 1;
  LODWORD(v383) = (v204 + 3) & 0xFFFFFFFC;
  if ( v205 )
  {
    do
    {
      --v206;
      LOBYTE(v400) = 0;
      sub_227BF10(&v404, &v400, 1);
    }
    while ( v206 != -1 );
  }
  v400 = *(_DWORD *)s2;
  sub_227BF10(&v404, &v400, 4);
  v400 = *(_DWORD *)&s2[4];
  sub_227BF10(&v404, &v400, 4);
  if ( *(_DWORD *)s2 )
  {
    v207 = 0;
    do
    {
      v208 = (int *)((char *)v417 + 16 * v207++);
      v400 = *v208;
      sub_227BF10(&v404, &v400, 4);
    }
    while ( *(_DWORD *)s2 > v207 );
  }
  v404 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v404);
  v209 = operator new(0x220u);
  v210 = *(_DWORD *)(p_ptr + 56);
  v211 = v209;
  *(_QWORD *)(v209 + 8) = 0x100000001LL;
  *(_DWORD *)(v209 + 28) = 32;
  *(_QWORD *)(v209 + 32) = 2;
  *(_QWORD *)v209 = off_2C02AF8;
  *(_QWORD *)(v209 + 16) = v209 + 32;
  *(_QWORD *)(v209 + 40) = 1;
  *(_QWORD *)(v209 + 48) = 32;
  *(_QWORD *)(v209 + 56) = 2;
  *(_QWORD *)(v209 + 64) = 0;
  *(_QWORD *)(v209 + 72) = 10;
  *(_DWORD *)(v209 + 24) = 3;
  v404 = (__int64 (__fastcall **)())(v209 + 16);
  v405 = v209;
  sub_A1FEC0(v202, 2u, v210);
  for ( ii = *(_DWORD *)(v211 + 24); ii > 0xF; ii >>= 4 )
  {
    v213 = ii;
    sub_A1FEC0(v202, v213 & 0xF | 0x10, 5);
  }
  sub_A1FEC0(v202, ii, 5);
  v214 = *(_DWORD *)(v211 + 24);
  if ( v214 )
  {
    v380 = v211;
    v215 = 0;
    v384 = &v404;
    p_ptr = 16 * ((unsigned int)(v214 - 1) + 1LL);
    do
    {
      v216 = *(_DWORD *)(v202 + 48);
      v217 = (unsigned __int64 *)(v215 + *(_QWORD *)(v380 + 16));
      v218 = v217[1];
      v219 = v218 & 1;
      v220 = (v217[1] & 1) << v216;
      v221 = v216 + 1;
      v222 = *(_DWORD *)(v202 + 52) | v220;
      *(_DWORD *)(v202 + 52) = v222;
      if ( v221 > 0x1F )
      {
        v279 = *(_QWORD **)(v202 + 24);
        v280 = v279[1];
        if ( (unsigned __int64)(v280 + 4) > v279[2] )
        {
          v381 = *(_QWORD *)(v202 + 24);
          sub_2236E10(v381, v279 + 3, v280 + 4, 1);
          v279 = (_QWORD *)v381;
          v280 = *(_QWORD *)(v381 + 8);
        }
        *(_DWORD *)(*v279 + v280) = v222;
        v281 = *(_DWORD *)(v202 + 48);
        v222 = 0;
        v279[1] += 4LL;
        v282 = v219 >> (32 - v281);
        v283 = v281 == 0;
        v284 = v281 + 1;
        v218 = v217[1];
        if ( !v283 )
          v222 = v282;
        v221 = v284 & 0x1F;
        *(_DWORD *)(v202 + 48) = v221;
        *(_DWORD *)(v202 + 52) = v222;
      }
      else
      {
        *(_DWORD *)(v202 + 48) = v221;
      }
      if ( (v218 & 1) != 0 )
      {
        v223 = *v217;
        v224 = *v217;
        if ( v223 == v224 )
        {
          if ( (unsigned int)v223 > 0x7F )
          {
            do
            {
              v307 = v224;
              v224 >>= 7;
              sub_A1FEC0(v202, v307 & 0x7F | 0x80, 8);
            }
            while ( v224 > 0x7F );
          }
        }
        else if ( v223 > 0x7F )
        {
          v381 = v215;
          do
          {
            v226 = (v223 & 0x7F | 0x80) << v221;
            v221 += 8;
            v222 |= v226;
            *(_DWORD *)(v202 + 52) = v222;
            if ( v221 > 0x1F )
            {
              v227 = *(_QWORD **)(v202 + 24);
              v228 = v227[1];
              if ( (unsigned __int64)(v228 + 4) > v227[2] )
              {
                sub_2236E10(*(_QWORD *)(v202 + 24), v227 + 3, v228 + 4, 1);
                v228 = v227[1];
              }
              *(_DWORD *)(*v227 + v228) = v222;
              v225 = *(_DWORD *)(v202 + 48);
              v222 = 0;
              v227[1] += 4LL;
              if ( v225 )
                v222 = (unsigned __int8)(v223 & 0x7F | 0x80) >> (32 - v225);
              v221 = ((_BYTE)v225 + 8) & 0x1F;
              *(_DWORD *)(v202 + 52) = v222;
            }
            v223 >>= 7;
            *(_DWORD *)(v202 + 48) = v221;
          }
          while ( v223 > 0x7F );
          v215 = v381;
          v224 = v223;
        }
        sub_A1FEC0(v202, v224, 8);
      }
      else
      {
        sub_A1FEC0(v202, (*((_BYTE *)v217 + 8) >> 1) & 7, 3);
        v269 = (*((_BYTE *)v217 + 8) >> 1) & 7;
        if ( !v269 )
          goto LABEL_333;
        if ( v269 > 2u )
        {
          if ( v269 > 5u )
LABEL_333:
            sub_2221C70("Invalid encoding", 1);
        }
        else
        {
          v270 = *v217;
          v271 = *v217;
          if ( *v217 == v271 )
          {
            if ( (unsigned int)v270 > 0xF )
            {
              do
              {
                v337 = v271;
                v271 >>= 4;
                sub_A1FEC0(v202, v337 & 0xF | 0x10, 5);
              }
              while ( v271 > 0xF );
            }
          }
          else if ( v270 > 0xF )
          {
            v272 = *(_DWORD *)(v202 + 52);
            v273 = *(_DWORD *)(v202 + 48);
            v274 = *v217;
            v381 = v215;
            do
            {
              v276 = (v274 & 0xF | 0x10) << v273;
              v273 += 5;
              v272 |= v276;
              *(_DWORD *)(v202 + 52) = v272;
              if ( v273 > 0x1F )
              {
                v277 = *(_QWORD **)(v202 + 24);
                v278 = v277[1];
                if ( (unsigned __int64)(v278 + 4) > v277[2] )
                {
                  sub_2236E10(*(_QWORD *)(v202 + 24), v277 + 3, v278 + 4, 1);
                  v278 = v277[1];
                }
                *(_DWORD *)(*v277 + v278) = v272;
                v275 = *(_DWORD *)(v202 + 48);
                v272 = 0;
                v277[1] += 4LL;
                if ( v275 )
                  v272 = (v274 & 0xF | 0x10) >> (32 - (unsigned __int8)v275);
                v273 = ((_BYTE)v275 + 5) & 0x1F;
                *(_DWORD *)(v202 + 52) = v272;
              }
              v274 >>= 4;
              *(_DWORD *)(v202 + 48) = v273;
            }
            while ( v274 > 0xF );
            v215 = v381;
            v271 = v274;
          }
          sub_A1FEC0(v202, v271, 5);
        }
      }
      v215 += 16;
    }
    while ( p_ptr != v215 );
    v154 = v384;
  }
  v229 = *(_QWORD *)(v202 + 72);
  if ( v229 == *(_QWORD *)(v202 + 80) )
  {
    sub_A22DA0(v202 + 64, (char *)v229, v154);
    v231 = *(_QWORD *)(v202 + 72);
  }
  else
  {
    v230 = v404;
    *(_QWORD *)(v229 + 8) = 0;
    v231 = v229 + 16;
    *(_QWORD *)v229 = v230;
    v232 = (volatile signed __int32 *)v405;
    v405 = 0;
    *(_QWORD *)(v229 + 8) = v232;
    v404 = nullptr;
    *(_QWORD *)(v202 + 72) = v229 + 16;
  }
  v233 = *(_QWORD *)(v202 + 64);
  v234 = (v231 - v233) >> 4;
  if ( v405 )
  {
    sub_4343A0((volatile signed __int32 *)v405);
    v233 = *(_QWORD *)(v202 + 64);
  }
  v404 = (__int64 (__fastcall **)())(&dword_0 + 2);
  v405 = (unsigned int)v383;
  v381 = ptr.m256i_i64[1];
  v383 = ptr.m256i_i64[0];
  LODWORD(v384) = ptr.m256i_i32[2];
  v235 = *(_QWORD *)(v233 + 16LL * (unsigned int)(v234 - 1));
  v236 = *(_DWORD *)(v202 + 56);
  v237 = v235;
  p_ptr = v235;
  sub_A1FEC0(v202, v234 + 3, v236);
  LODWORD(v380) = *(_DWORD *)(v237 + 8);
  if ( !(_DWORD)v380 )
  {
LABEL_308:
    if ( (__int64 **)ptr.m256i_i64[0] != v387 + 3 )
      free((void *)ptr.m256i_i64[0]);
    free(v417);
    v261 = (char *)v412;
    v262 = (unsigned int)v413;
    LOBYTE(v263) = 0;
    v264 = (char *)v412 + 8 * (unsigned int)v413;
    v265 = v412;
    if ( v412 != v264 )
    {
      while ( 1 )
      {
        v266 = *(_QWORD *)v261 + (4096LL << v263);
        v267 = (*(_QWORD *)v261 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)v261 == v265[v262 - 1] )
          v266 = *(_QWORD *)&s2[8];
        while ( 1 )
        {
          v267 += 56LL;
          if ( v266 < v267 )
            break;
          while ( 1 )
          {
            v268 = *(void **)(v267 - 40);
            if ( v268 == (void *)(v267 - 24) )
              break;
            free(v268);
            v267 += 56LL;
            if ( v266 < v267 )
              goto LABEL_316;
          }
        }
LABEL_316:
        v261 += 8;
        if ( v264 == v261 )
          break;
        v265 = v412;
        v262 = (unsigned int)v413;
        v263 = (unsigned int)((v261 - (_BYTE *)v412) >> 3) >> 7;
        if ( v263 >= 0x1E )
          LOBYTE(v263) = 30;
      }
    }
    v308 = v414;
    v309 = 2LL * (unsigned int)v415;
    v310 = &v414[v309];
    if ( v414 != &v414[v309] )
    {
      do
      {
        v311 = *v308 + v308[1];
        v312 = (*v308 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        while ( 1 )
        {
          v312 += 56LL;
          if ( v311 < v312 )
            break;
          while ( 1 )
          {
            v313 = *(void **)(v312 - 40);
            if ( v313 == (void *)(v312 - 24) )
              break;
            free(v313);
            v312 += 56LL;
            if ( v311 < v312 )
              goto LABEL_387;
          }
        }
LABEL_387:
        v308 += 2;
      }
      while ( v310 != v308 );
      v314 = v414;
      v315 = &v414[2 * (unsigned int)v415];
      if ( v414 != v315 )
      {
        do
        {
          v316 = v314[1];
          v317 = *v314;
          v314 += 2;
          operator delete(v317, v316, 16);
        }
        while ( v315 != v314 );
      }
    }
    LODWORD(v415) = 0;
    if ( (_DWORD)v413 )
    {
      v318 = (char *)v412;
      *(_QWORD *)&v416 = 0;
      v319 = (char *)v412 + 8;
      v320 = (char *)v412 + 8 * (unsigned int)v413;
      v321 = (char *)v412 + 8;
      p_ptr = *(_QWORD *)v412 + 4096LL;
      *(__m128 *)&s2[8] = _mm_loadh_ps((const double *)&p_ptr);
      if ( v320 != (char *)v412 + 8 )
      {
        do
        {
          v322 = 0x40000000000LL;
          v323 = (unsigned int)((v321 - v318) >> 3) >> 7;
          if ( v323 <= 0x1D )
            v322 = 4096LL << v323;
          v324 = *(_QWORD *)v321;
          v321 += 8;
          operator delete(v324, v322, 16);
          v318 = (char *)v412;
        }
        while ( v320 != v321 );
        v319 = (char *)v412 + 8;
        v321 = (char *)v412 + 8;
      }
      LODWORD(v413) = 1;
      LOBYTE(v325) = 0;
      while ( 1 )
      {
        operator delete(*(_QWORD *)v318, 4096LL << v325, 16);
        v318 = v319;
        if ( v319 == v321 )
          break;
        v325 = (unsigned int)((v319 - (_BYTE *)v412) >> 3) >> 7;
        if ( v325 >= 0x1E )
          LOBYTE(v325) = 30;
        v319 += 8;
      }
      v326 = v414;
      v327 = &v414[2 * (unsigned int)v415];
      if ( v414 == v327 )
        goto LABEL_404;
      do
      {
        v328 = v326[1];
        v329 = *v326;
        v326 += 2;
        operator delete(v329, v328, 16);
      }
      while ( v327 != v326 );
    }
    v327 = v414;
LABEL_404:
    if ( v327 != (__int64 *)(v386 + 88) )
      free(v327);
    if ( v412 != v386 + 40 )
      free(v412);
    sub_A25550(v202);
    if ( v401 != v382 + 2 )
      free(v401);
    result = 0;
    if ( v388 )
    {
      LOBYTE(p_ptr) = 0;
      sub_224D6D0(v388);
      return (unsigned __int8)p_ptr;
    }
    return result;
  }
  v239 = (unsigned __int8 *)v383;
  v240 = 0;
  LODWORD(v241) = 0;
  v395 = v154;
  v391 = v381 & 0xFFFFFFFFFFFFFFF0LL;
  v385 = v381 - 1;
  v394 = v381 & 0xFFFFFFFFFFFFFFF0LL;
  v393 = v381 - (v381 & 0xFFFFFFFFFFFFFFF0LL);
  v242 = (__int64 (__fastcall *)(__int64))((v381 & 0xFFFFFFFFFFFFFFF0LL) + v383);
  v392 = v242;
  while ( 1 )
  {
    v243 = *(_QWORD *)p_ptr + 16LL * (unsigned int)v241;
    if ( (*(_BYTE *)(v243 + 8) & 1) != 0 )
      goto LABEL_346;
    v244 = (*(_BYTE *)(v243 + 8) >> 1) & 7;
    if ( (unsigned __int8)v244 != 3 )
      break;
    v241 = (unsigned int)(v241 + 1);
    v288 = *(_QWORD *)p_ptr + 16 * v241;
    if ( v239 )
    {
      v242 = (__int64 (__fastcall *)(__int64))v202;
      v286 = (unsigned int)v384;
      sub_1FD06F0(v202, (unsigned int)v384);
      if ( !(_DWORD)v384 )
      {
LABEL_306:
        v239 = nullptr;
        goto LABEL_307;
      }
      LODWORD(v389) = v241;
      v238 = (__int64)&v239[(_DWORD)v384 - 1 + 1];
      LODWORD(v390) = v240;
      v289 = v288;
      v290 = (unsigned __int8 *)v238;
      while ( 2 )
      {
        while ( 1 )
        {
          v285 = *v239;
          v296 = (*(_BYTE *)(v289 + 8) >> 1) & 7;
          if ( v296 == 2 )
            break;
          if ( v296 == 4 )
          {
            if ( (unsigned __int8)(v285 - 97) <= 0x19u )
            {
              v291 = (char)v285 - 97;
            }
            else if ( (unsigned __int8)(v285 - 65) <= 0x19u )
            {
              v291 = (char)v285 - 39;
            }
            else
            {
              v291 = (char)v285 + 4;
              if ( (unsigned __int8)(v285 - 48) > 9u )
                v291 = ((_BYTE)v285 != 46) + 62;
            }
            v292 = *(_DWORD *)(v202 + 48);
            v293 = v291 << v292;
            v294 = v292 + 6;
            v295 = *(_DWORD *)(v202 + 52) | v293;
            *(_DWORD *)(v202 + 52) = v295;
            if ( v294 > 0x1F )
            {
              v304 = *(_QWORD **)(v202 + 24);
              v305 = v304[1];
              if ( (unsigned __int64)(v305 + 4) > v304[2] )
              {
                v286 = (unsigned __int64)(v304 + 3);
                v396 = *(_QWORD *)(v202 + 24);
                v242 = (__int64 (__fastcall *)(__int64))v396;
                sub_2236E10(v396, v304 + 3, v305 + 4, 1);
                v304 = (_QWORD *)v396;
                v305 = *(_QWORD *)(v396 + 8);
              }
              *(_DWORD *)(*v304 + v305) = v295;
              v244 = 0;
              v304[1] += 4LL;
              v306 = *(_DWORD *)(v202 + 48);
              if ( v306 )
                v244 = v291 >> (32 - v306);
              *(_DWORD *)(v202 + 52) = v244;
              *(_DWORD *)(v202 + 48) = ((_BYTE)v306 + 6) & 0x1F;
            }
            else
            {
              *(_DWORD *)(v202 + 48) = v294;
            }
            goto LABEL_358;
          }
          if ( v296 != 1 )
            return sub_1FD6990(v242, v286, v244, v285, v238);
          v244 = *(_QWORD *)v289;
          if ( !*(_QWORD *)v289 )
            goto LABEL_358;
          v286 = (unsigned __int8)v285;
          v242 = (__int64 (__fastcall *)(__int64))v202;
          ++v239;
          sub_A1FEC0(v202, (unsigned __int8)v285, v244);
          if ( v290 == v239 )
          {
LABEL_364:
            LODWORD(v241) = (_DWORD)v389;
            v240 = v390;
            v239 = nullptr;
            goto LABEL_307;
          }
        }
        v297 = *(_QWORD *)v289;
        if ( *(_QWORD *)v289 )
        {
          v298 = (unsigned __int8)v285;
          if ( (unsigned __int8)v285 >= (unsigned int)(1 << (v297 - 1)) )
          {
            v399 = *(_QWORD *)v289;
            v396 = (__int64)v290;
            v397 = v239;
            v299 = 1 << (v297 - 1);
            v398 = v289;
            v300 = ~(-1 << (v297 - 1));
            v301 = v202;
            v302 = v297;
            v303 = v297 - 1;
            do
            {
              sub_A1FEC0(v301, v299 | v300 & v298, v302);
              v298 >>= v303;
            }
            while ( v299 <= v298 );
            v202 = v301;
            v290 = (unsigned __int8 *)v396;
            v239 = v397;
            LODWORD(v297) = v399;
            v289 = v398;
          }
          v286 = v298;
          v242 = (__int64 (__fastcall *)(__int64))v202;
          sub_A1FEC0(v202, v298, v297);
        }
LABEL_358:
        if ( v290 == ++v239 )
          goto LABEL_364;
        continue;
      }
    }
    v242 = (__int64 (__fastcall *)(__int64))v202;
    sub_1FD06F0(v202, 2 - v240);
    for ( ; v240 != 2; ++v240 )
    {
      v286 = (unsigned __int64)(&v404)[v240];
      v339 = (*(_BYTE *)(v288 + 8) >> 1) & 7;
      switch ( v339 )
      {
        case 2:
          v244 = *(_QWORD *)v288;
          if ( *(_QWORD *)v288 )
          {
            v242 = (__int64 (__fastcall *)(__int64))v202;
            sub_A1FFA0(v202, v286, v244);
          }
          break;
        case 4:
          if ( (unsigned __int8)(v286 - 97) <= 0x19u )
          {
            v338 = (char)v286 - 97;
          }
          else if ( (unsigned __int8)(v286 - 65) <= 0x19u )
          {
            v338 = (char)v286 - 39;
          }
          else if ( (unsigned __int8)(v286 - 48) <= 9u )
          {
            v338 = (char)v286 + 4;
          }
          else
          {
            v338 = ((_BYTE)v286 != 46) + 62;
          }
          v242 = (__int64 (__fastcall *)(__int64))v202;
          sub_1FD0640(v202, v338);
          break;
        case 1:
          v244 = *(_QWORD *)v288;
          if ( *(_QWORD *)v288 )
          {
            v242 = (__int64 (__fastcall *)(__int64))v202;
            sub_A1FEC0(v202, v286, v244);
          }
          break;
        default:
          return sub_1FD6990(v242, v286, v244, v285, v238);
      }
    }
LABEL_307:
    LODWORD(v241) = v241 + 1;
    if ( (_DWORD)v380 == (_DWORD)v241 )
      goto LABEL_308;
  }
  if ( (unsigned __int8)v244 == 5 )
  {
    if ( v239 )
    {
      sub_1FD06F0(v202, (unsigned int)v384);
      if ( *(_DWORD *)(v202 + 48) )
      {
        v366 = *(_QWORD **)(v202 + 24);
        v367 = *(_DWORD *)(v202 + 52);
        v368 = v366[1];
        if ( (unsigned __int64)(v368 + 4) > v366[2] )
        {
          sub_2236E10(*(_QWORD *)(v202 + 24), v366 + 3, v368 + 4, 1);
          v368 = v366[1];
        }
        *(_DWORD *)(*v366 + v368) = v367;
        v366[1] += 4LL;
        *(_QWORD *)(v202 + 48) = 0;
      }
      v245 = *(_QWORD **)(v202 + 24);
      v246 = v245[1];
      if ( (unsigned __int64)(v381 + v246) > v245[2] )
      {
        sub_2236E10(*(_QWORD *)(v202 + 24), v245 + 3, v381 + v246, 1);
        v246 = v245[1];
      }
      v247 = *v245 + v246;
      if ( v381 > 0 )
      {
        v248 = v383;
        v249 = v247 >= v383 + 16 || v383 >= *v245 + v246 + 16;
        v250 = 0;
        if ( v249 && v385 > 0xE )
        {
          v251 = v391;
          do
          {
            *(__m128i *)(v247 + v250) = _mm_loadu_si128((const __m128i *)(v248 + v250));
            v250 += 16;
          }
          while ( v251 != v250 );
          v252 = (_BYTE *)(v394 + v247);
          if ( v381 != v394 )
          {
            v253 = v392;
            v254 = v393;
            *v252 = *(_BYTE *)v392;
            if ( v254 != 1 )
            {
              v252[1] = *((_BYTE *)v253 + 1);
              if ( v254 != 2 )
              {
                v252[2] = *((_BYTE *)v253 + 2);
                if ( v254 != 3 )
                {
                  v252[3] = *((_BYTE *)v253 + 3);
                  if ( v254 != 4 )
                  {
                    v252[4] = *((_BYTE *)v253 + 4);
                    if ( v254 != 5 )
                    {
                      v252[5] = *((_BYTE *)v253 + 5);
                      if ( v254 != 6 )
                      {
                        v252[6] = *((_BYTE *)v253 + 6);
                        if ( v254 != 7 )
                        {
                          v252[7] = *((_BYTE *)v253 + 7);
                          if ( v254 != 8 )
                          {
                            v252[8] = *((_BYTE *)v253 + 8);
                            if ( v254 != 9 )
                            {
                              v252[9] = *((_BYTE *)v253 + 9);
                              if ( v254 != 10 )
                              {
                                v252[10] = *((_BYTE *)v253 + 10);
                                if ( v254 != 11 )
                                {
                                  v252[11] = *((_BYTE *)v253 + 11);
                                  if ( v254 != 12 )
                                  {
                                    v252[12] = *((_BYTE *)v253 + 12);
                                    if ( v254 != 13 )
                                    {
                                      v252[13] = *((_BYTE *)v253 + 13);
                                      if ( v254 != 14 )
                                        v252[14] = *((_BYTE *)v253 + 14);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v369 = v381;
          v370 = v383;
          do
          {
            *(_BYTE *)(v247 + v250) = *(_BYTE *)(v370 + v250);
            ++v250;
          }
          while ( v369 != v250 );
        }
        v246 = v245[1];
      }
      v245[1] = v381 + v246;
      while ( 1 )
      {
        v242 = *(__int64 (__fastcall **)(__int64))(v202 + 32);
        v257 = *(_QWORD *)(*(_QWORD *)(v202 + 24) + 8LL);
        if ( v242 && (unsigned __int8)sub_227D8A0(v242) )
        {
          v258 = *(__int64 (__fastcall **)(__int64))(v202 + 32);
          if ( !v258 || !(unsigned __int8)sub_227D8A0(*(_QWORD *)(v202 + 32)) )
            goto LABEL_516;
          v242 = sub_A1EA60;
          v259 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v258 + 80LL);
          if ( v259 == sub_A1EA60 )
          {
            v260 = *((_QWORD *)v258 + 11);
          }
          else
          {
            v242 = v258;
            LOBYTE(v260) = v259((__int64)v258);
          }
          LOBYTE(v257) = v260 + *((_BYTE *)v258 + 32) - *((_BYTE *)v258 + 16) + v257;
        }
        if ( (v257 & 3) == 0 )
          goto LABEL_306;
        v255 = *(_QWORD **)(v202 + 24);
        v256 = v255[1];
        if ( (unsigned __int64)(v256 + 1) > v255[2] )
        {
          sub_2236E10(*(_QWORD *)(v202 + 24), v255 + 3, v256 + 1, 1);
          v256 = v255[1];
        }
        *(_BYTE *)(*v255 + v256) = 0;
        ++v255[1];
      }
    }
    v340 = (const __m128i *)&v395[v240];
    v341 = 2LL - v240;
    sub_1FD06F0(v202, 2 - v240);
    if ( *(_DWORD *)(v202 + 48) )
    {
      v371 = *(_QWORD **)(v202 + 24);
      v372 = *(_DWORD *)(v202 + 52);
      v373 = v371[1];
      if ( (unsigned __int64)(v373 + 4) > v371[2] )
      {
        v378 = *(_QWORD *)(v202 + 24);
        LODWORD(v390) = *(_DWORD *)(v202 + 52);
        v389 = v371;
        sub_2236E10(v378, v371 + 3, v373 + 4, 1);
        v371 = v389;
        v372 = v390;
        v373 = v389[1];
      }
      *(_DWORD *)(*v371 + v373) = v372;
      v371[1] += 4LL;
      *(_QWORD *)(v202 + 48) = 0;
    }
    v342 = *(_QWORD **)(v202 + 24);
    v238 = 8 * v341;
    v343 = v342[1];
    v344 = (8 * v341) >> 3;
    v345 = v344;
    if ( (unsigned __int64)(v344 + v343) > v342[2] )
    {
      v396 = v344;
      v390 = v238;
      v389 = v342;
      sub_2236E10(v342, v342 + 3, v344 + v343, 1);
      v342 = v389;
      v238 = v390;
      v344 = v396;
      v343 = v389[1];
    }
    v346 = (_BYTE *)(v343 + *v342);
    if ( v238 > 0 )
    {
      if ( v238 <= 120 )
        goto LABEL_520;
      v347 = (__m128i *)(v343 + *v342);
      v348 = v340;
      do
      {
        v349 = (__m128)_mm_loadu_si128(v348 + 1);
        v350 = (__m128)_mm_loadu_si128(v348);
        ++v347;
        v348 += 8;
        v351 = (__m128i)_mm_shuffle_ps(v350, v349, 136);
        v352 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v348 - 6), (__m128)_mm_loadu_si128(v348 - 5), 136);
        v353 = _mm_unpackhi_epi16(v351, v352);
        v354 = _mm_unpacklo_epi16(v351, v352);
        v355 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v354, v353), _mm_unpackhi_epi16(v354, v353));
        v356 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v348 - 2), (__m128)_mm_loadu_si128(v348 - 1), 136);
        v357 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v348 - 4), (__m128)_mm_loadu_si128(v348 - 3), 136);
        v358 = _mm_unpacklo_epi16(v357, v356);
        v359 = _mm_unpackhi_epi16(v357, v356);
        v347[-1] = _mm_packus_epi16(
                     _mm_and_si128(v355, (__m128i)xmmword_23A8D80),
                     _mm_and_si128(
                       _mm_unpacklo_epi16(_mm_unpacklo_epi16(v358, v359), _mm_unpackhi_epi16(v358, v359)),
                       (__m128i)xmmword_23A8D80));
      }
      while ( &v346[v344 & 0xFFFFFFFFFFFFFFF0LL] != (_BYTE *)v347 );
      v345 = v344 - (v344 & 0xFFFFFFFFFFFFFFF0LL);
      v340 = (const __m128i *)((char *)v340 + 8 * (v344 & 0xFFFFFFFFFFFFFFF0LL));
      v346 += v344 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v344 & 0xFFFFFFFFFFFFFFF0LL) != v344 )
      {
LABEL_520:
        *v346 = v340->m128i_i64[0];
        if ( v345 != 1 )
        {
          v346[1] = v340->m128i_i64[1];
          if ( v345 != 2 )
          {
            v346[2] = v340[1].m128i_i64[0];
            if ( v345 != 3 )
            {
              v346[3] = v340[1].m128i_i64[1];
              if ( v345 != 4 )
              {
                v346[4] = v340[2].m128i_i64[0];
                if ( v345 != 5 )
                {
                  v346[5] = v340[2].m128i_i64[1];
                  if ( v345 != 6 )
                  {
                    v346[6] = v340[3].m128i_i64[0];
                    if ( v345 != 7 )
                    {
                      v346[7] = v340[3].m128i_i64[1];
                      if ( v345 != 8 )
                      {
                        v346[8] = v340[4].m128i_i64[0];
                        if ( v345 != 9 )
                        {
                          v346[9] = v340[4].m128i_i64[1];
                          if ( v345 != 10 )
                          {
                            v346[10] = v340[5].m128i_i64[0];
                            if ( v345 != 11 )
                            {
                              v346[11] = v340[5].m128i_i64[1];
                              if ( v345 != 12 )
                              {
                                v346[12] = v340[6].m128i_i64[0];
                                if ( v345 != 13 )
                                {
                                  v346[13] = v340[6].m128i_i64[1];
                                  if ( v345 != 14 )
                                    v346[14] = v340[7].m128i_i64[0];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v343 = v342[1];
    }
    v342[1] = v343 + v344;
    while ( 1 )
    {
      v242 = *(__int64 (__fastcall **)(__int64))(v202 + 32);
      v360 = *(_QWORD *)(*(_QWORD *)(v202 + 24) + 8LL);
      if ( v242 && (unsigned __int8)sub_227D8A0(v242) )
      {
        v361 = *(__int64 (__fastcall **)(__int64))(v202 + 32);
        if ( !v361 || !(unsigned __int8)sub_227D8A0(*(_QWORD *)(v202 + 32)) )
LABEL_516:
          BUG();
        v242 = sub_A1EA60;
        v362 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v361 + 80LL);
        if ( v362 == sub_A1EA60 )
        {
          v363 = *((_QWORD *)v361 + 11);
        }
        else
        {
          v242 = v361;
          LOBYTE(v363) = ((__int64 (__fastcall *)(__int64 (__fastcall *)(__int64), _BYTE *))v362)(v361, v346);
        }
        LOBYTE(v360) = v360 + *((_BYTE *)v361 + 32) - *((_BYTE *)v361 + 16) + v363;
      }
      if ( (v360 & 3) == 0 )
        break;
      v364 = *(_QWORD **)(v202 + 24);
      v365 = v364[1];
      if ( (unsigned __int64)(v365 + 1) > v364[2] )
      {
        v346 = v364 + 3;
        sub_2236E10(*(_QWORD *)(v202 + 24), v364 + 3, v365 + 1, 1);
        v365 = v364[1];
      }
      *(_BYTE *)(*v364 + v365) = 0;
      ++v364[1];
    }
    goto LABEL_307;
  }
  v285 = v240;
  v286 = (unsigned __int64)(&v404)[v240];
  switch ( (_BYTE)v244 )
  {
    case 2:
      if ( *(_QWORD *)v243 )
      {
        v242 = (__int64 (__fastcall *)(__int64))v202;
        sub_A1FFA0(v202, v286, *(_QWORD *)v243);
      }
      goto LABEL_346;
    case 4:
      if ( (unsigned __int8)(v286 - 97) <= 0x19u )
      {
        v287 = (char)v286 - 97;
      }
      else if ( (unsigned __int8)(v286 - 65) <= 0x19u )
      {
        v287 = (char)v286 - 39;
      }
      else if ( (unsigned __int8)(v286 - 48) <= 9u )
      {
        v287 = (char)v286 + 4;
      }
      else
      {
        v287 = ((_BYTE)v286 != 46) + 62;
      }
      v242 = (__int64 (__fastcall *)(__int64))v202;
      sub_1FD0640(v202, v287);
LABEL_346:
      ++v240;
      goto LABEL_307;
    case 1:
      if ( *(_QWORD *)v243 )
      {
        v242 = (__int64 (__fastcall *)(__int64))v202;
        sub_A1FEC0(v202, v286, *(_QWORD *)v243);
      }
      goto LABEL_346;
  }
  return sub_1FD6990(v242, v286, v244, v285, v238);
}
