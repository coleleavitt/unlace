void __fastcall sub_B7C4F0(__int64 a1, const __m128i **a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 *v14; // rdi
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // r14
  _DWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  const __m128i **v30; // r12
  __int64 v31; // r15
  __int64 v32; // rax
  const __m128i *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rsi
  const __m128i *v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int8 v65; // al
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdi
  __int64 v92; // r13
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  char *v98; // rcx
  __int64 v99; // r8
  char *v100; // r9
  __int64 v101; // rdi
  __int64 v102; // r13
  __int64 v103; // rbp
  __int64 v104; // r13
  __int64 v105; // rax
  __int64 v106; // rsi
  __int64 v107; // rdi
  char *v108; // rax
  char *v109; // rsi
  __int64 v110; // rdx
  unsigned __int64 v111; // rsi
  void *v112; // rdi
  __int64 v113; // r9
  __int64 v114; // r8
  unsigned __int64 *v115; // rcx
  _QWORD *v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rcx
  unsigned int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rsi
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rax
  unsigned __int64 v157; // rdx
  __int64 *v158; // rdi
  unsigned __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // r12
  __int64 v166; // rsi
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rsi
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 v184; // rsi
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // rsi
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rsi
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rsi
  __int64 *v233; // rdi
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 v241; // r9
  char v242; // bp
  __int64 v243; // rbp
  _DWORD *v244; // rax
  __int64 v245; // rcx
  __int64 v246; // r8
  __int64 v247; // r9
  _DWORD *v248; // r12
  __int64 v249; // rdx
  int v250; // ebp
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // r9
  __int64 v255; // rbp
  __int64 v256; // r12
  const __m128i *v257; // r13
  __int64 v258; // rdi
  __m128i *v259; // rax
  _QWORD *v260; // rax
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 v265; // rax
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // r9
  __int64 v270; // rdx
  __int64 v271; // rcx
  __int64 v272; // r8
  __int64 v273; // r9
  __int64 v274; // rsi
  __int64 v275; // rax
  unsigned __int64 v276; // rdx
  char v277; // r13
  __int64 v278; // rdi
  _QWORD *v279; // rdi
  unsigned int v280; // eax
  __int64 v281; // rdx
  unsigned int v282; // eax
  _QWORD *v283; // r14
  __int64 v284; // rsi
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  __int64 v289; // rdi
  __int64 v290; // r12
  __int64 v291; // r12
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  __int64 v296; // rdi
  __int64 v297; // r15
  __int64 v298; // rax
  __int64 v299; // r14
  char *v300; // rsi
  __int64 v301; // rdi
  __int64 *v302; // rcx
  char *v303; // rax
  char *v304; // rsi
  char *v305; // rax
  __int64 v306; // rax
  unsigned __int64 v307; // rdx
  unsigned __int64 v308; // [rsp+10h] [rbp-1D8h]
  __int64 v309; // [rsp+18h] [rbp-1D0h]
  __int64 v310; // [rsp+20h] [rbp-1C8h]
  const __m128i **v311; // [rsp+20h] [rbp-1C8h]
  __int64 v313; // [rsp+30h] [rbp-1B8h]
  __int64 v314; // [rsp+38h] [rbp-1B0h]
  void *ptr; // [rsp+50h] [rbp-198h] BYREF
  __int64 v316; // [rsp+58h] [rbp-190h]
  _BYTE v317[64]; // [rsp+60h] [rbp-188h] BYREF
  void *v318; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v319; // [rsp+A8h] [rbp-140h]
  _QWORD v320[8]; // [rsp+B0h] [rbp-138h] BYREF
  void *v321; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v322; // [rsp+F8h] [rbp-F0h]
  int v323; // [rsp+100h] [rbp-E8h]
  unsigned __int8 v324; // [rsp+104h] [rbp-E4h]
  char v325; // [rsp+108h] [rbp-E0h] BYREF
  void *v326; // [rsp+150h] [rbp-98h] BYREF
  __int64 v327; // [rsp+158h] [rbp-90h]
  int v328; // [rsp+160h] [rbp-88h]
  unsigned __int8 v329; // [rsp+164h] [rbp-84h]
  __int64 v330; // [rsp+168h] [rbp-80h] BYREF

  v314 = sub_B685F0(a1);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v5, v6, v7, v8);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 24LL) & 1) == 0 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v9, v10, v11, v12);
    v9 = *(unsigned int *)(*(_QWORD *)(a1 + 128) + 16LL);
    if ( (_DWORD)v9 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v9, v10, v11, v12);
      v278 = *(_QWORD *)(a1 + 128);
      if ( (*(_BYTE *)(v278 + 24) & 1) != 0 )
        sub_B72C40(v278);
    }
  }
  if ( a3 )
  {
    v13 = *(_QWORD *)(a1 + 104);
    v14 = (__int64 *)(v13 + 96);
    if ( (*(_BYTE *)(*(_QWORD *)(v314 + 2320) + 1LL) & 0x40) == 0 )
    {
      sub_6E4DB0(v14, v13, v9, v10, v11, v12);
      **(_BYTE **)(a1 + 128) &= ~0x80u;
      v13 = *(_QWORD *)(a1 + 104);
      v14 = (__int64 *)(v13 + 96);
    }
    sub_6E4DB0(v14, v13, v9, v10, v11, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~1u;
  }
  v322 = 8;
  v321 = &v325;
  ptr = v317;
  v316 = 0x800000000LL;
  v323 = 0;
  v324 = 1;
  v15 = (_DWORD *)sub_B77A10((__int64 *)(v314 + 2352), 24LL * a3, 3u);
  v20 = v15;
  v21 = &v15[6 * a3];
  if ( a3 )
  {
    do
    {
      *v15 = 0;
      v15 += 6;
      *(v15 - 5) = 0;
      *(v15 - 4) = 0;
    }
    while ( v21 != v15 );
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v16, v17, v18, v19);
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) = v20;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v22, v23, v24, v25);
  v29 = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 128) + 16LL) = a3;
  if ( !a3 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v26, 0, v27, v28);
    goto LABEL_130;
  }
  v30 = a2;
  v31 = 0;
  v309 = (__int64)&a2[a3];
  do
  {
    while ( 1 )
    {
      v35 = *(_QWORD *)(a1 + 104);
      v36 = *v30;
      sub_6E4DB0((__int64 *)(v35 + 96), v35, v26, v29, v27, v28);
      v37 = *(_QWORD *)(a1 + 128);
      v32 = (*(_BYTE *)(v37 + 24) & 1) != 0 ? sub_B72C40(v37) : *(_QWORD *)(v37 + 24);
      v33 = *v30;
      *(__m128i *)(v32 + v31) = _mm_loadu_si128(v36);
      *(_QWORD *)(v32 + v31 + 16) = v36[1].m128i_i64[0];
      v308 = sub_B72090((__int64 *)v33[1].m128i_i64[0]);
      v34 = *(_QWORD *)(v308 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v34 + 17) & 4) == 0 )
        break;
      ++v30;
      v31 += 24;
      if ( (const __m128i **)v309 == v30 )
        goto LABEL_129;
    }
    v38 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL), v35, v26, v29, v27);
    v39 = *(_QWORD *)(v38 + 104);
    v40 = v38;
    sub_6E4DB0((__int64 *)(v39 + 96), v39, v41, v42, v43, v44);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 1LL) & 0x40) != 0 || sub_B5ABC0(v40, v39, v45, v46, v47, v48) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v45, v46, v47, v48);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 0x40) != 0 )
      {
        sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v49, v50, v51, v52);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
      }
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v49, v50, v51, v52);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) |= 0x40u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v45, v46, v47, v48);
    if ( *(char *)(*(_QWORD *)(v40 + 128) + 1LL) < 0
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v53, v54, v55, v56),
          (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 2LL) & 7) != 0) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v53, v54, v55, v56);
      if ( *(char *)(*(_QWORD *)(a1 + 128) + 1LL) < 0 )
      {
        sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v57, v58, v59, v60);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
      }
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v57, v58, v59, v60);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) |= 0x80u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v53, v54, v55, v56);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 1LL) & 2) == 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v61, v62, v63, v64);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~2u;
    }
    v65 = v33->m128i_i8[12];
    v66 = v65 & 0xC;
    if ( (_BYTE)v66 != 12 )
    {
      if ( (v65 & 0xC) == 0 )
        goto LABEL_30;
LABEL_29:
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v66, v62, v63, v64);
      **(_BYTE **)(a1 + 128) &= ~0x80u;
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v67, v68, v69, v70);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) &= ~0x40u;
      goto LABEL_30;
    }
    if ( (v65 & 2) != 0 )
      goto LABEL_29;
LABEL_30:
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v66, v62, v63, v64);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 1LL) & 4) != 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v71, v72, v73, v74);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) |= 4u;
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v270, v271, v272, v273);
      **(_BYTE **)(a1 + 128) &= ~0x80u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v71, v72, v73, v74);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 1LL) & 0x10) == 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v75, v76, v77, v78);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v75, v76, v77, v78);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 1LL) & 0x20) == 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v79, v80, v81, v82);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v79, v80, v81, v82);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0x20) == 0
      && !(unsigned __int8)sub_F436F0(*(_QWORD *)(v308 & 0xFFFFFFFFFFFFFFF0LL), v314) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v83, v84, v85, v86);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 0x20u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v83, v84, v85, v86);
    v91 = *(_QWORD *)(v40 + 128);
    if ( (*(_BYTE *)(v91 + 32) & 1) != 0 )
      v92 = sub_B72C80(v91);
    else
      v92 = *(_QWORD *)(v91 + 32);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v87, v88, v89, v90);
    v310 = v92 + 24LL * *(unsigned int *)(*(_QWORD *)(v40 + 128) + 20LL);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v93, v94, v95, v96);
    v101 = *(_QWORD *)(v40 + 128);
    if ( (*(_BYTE *)(v101 + 32) & 1) != 0 )
      v102 = sub_B72C80(v101);
    else
      v102 = *(_QWORD *)(v101 + 32);
    if ( v310 != v102 )
    {
      v313 = v40;
      v103 = v102;
      v104 = v310;
      v311 = v30;
      while ( 1 )
      {
        v105 = *(_QWORD *)(**(_QWORD **)(v103 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v105 + 8) & 0xF) != 0 )
          v105 = sub_F411C0(**(_QWORD **)(v103 + 16));
        v97 = v324;
        v106 = *(_QWORD *)&byte_8[v105 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v324 )
        {
          v98 = (char *)v321;
          v107 = 8LL * HIDWORD(v322);
          v100 = (char *)v321 + v107;
          if ( v321 != (char *)v321 + v107 )
          {
            v108 = (char *)v321;
            if ( v106 == *(_QWORD *)v321 )
            {
LABEL_87:
              v97 = 0;
              goto LABEL_53;
            }
            while ( 1 )
            {
              v108 += 8;
              if ( v100 == v108 )
                break;
              if ( v106 == *(_QWORD *)v108 )
                goto LABEL_87;
            }
          }
          if ( HIDWORD(v322) < (unsigned int)v322 )
          {
            ++HIDWORD(v322);
            *(_QWORD *)v100 = v106;
            v98 = (char *)v321;
            v108 = (char *)v321 + v107;
LABEL_53:
            v109 = &v98[8 * HIDWORD(v322)];
            goto LABEL_54;
          }
        }
        v108 = (char *)sub_2212A20(&v321, v106);
        v98 = (char *)v321;
        if ( v324 )
          goto LABEL_53;
        v109 = (char *)v321 + 8 * (unsigned int)v322;
LABEL_54:
        if ( v109 != v108 )
        {
          v98 = (char *)(*(_QWORD *)v108 + 2LL);
          if ( *(_QWORD *)v108 == -2 || v98 == (_BYTE *)&dword_0 + 1 )
          {
            do
              v108 += 8;
            while ( v109 != v108 && *(_QWORD *)v108 >= 0xFFFFFFFFFFFFFFFELL );
          }
        }
        if ( (_BYTE)v97 )
        {
          v156 = (unsigned int)v316;
          v157 = (unsigned int)v316 + 1LL;
          if ( v157 > HIDWORD(v316) )
          {
            sub_22134E0(&ptr, v317, v157, 8);
            v156 = (unsigned int)v316;
          }
          *((_QWORD *)ptr + v156) = v103;
          v158 = *(__int64 **)(v103 + 16);
          LODWORD(v316) = v316 + 1;
          v159 = sub_B72090(v158);
          v160 = sub_F3F530(*(_QWORD *)(v159 & 0xFFFFFFFFFFFFFFF0LL));
          v165 = v160;
          if ( v160 )
          {
            sub_6E4DB0((__int64 *)(*(_QWORD *)(v160 + 104) + 96LL), *(_QWORD *)(v160 + 104), v161, v162, v163, v164);
            if ( (*(_BYTE *)(*(_QWORD *)(v165 + 128) + 10LL) & 2) == 0 )
            {
              sub_6E4DB0((__int64 *)(*(_QWORD *)(v165 + 104) + 96LL), *(_QWORD *)(v165 + 104), v161, v162, v163, v164);
              if ( (*(_BYTE *)(*(_QWORD *)(v165 + 128) + 9LL) & 2) != 0
                || (sub_6E4DB0(
                      (__int64 *)(*(_QWORD *)(v165 + 104) + 96LL),
                      *(_QWORD *)(v165 + 104),
                      v161,
                      v162,
                      v163,
                      v164),
                    *(char *)(*(_QWORD *)(v165 + 128) + 9LL) >= 0)
                || (sub_6E4DB0(
                      (__int64 *)(*(_QWORD *)(v165 + 104) + 96LL),
                      *(_QWORD *)(v165 + 104),
                      v161,
                      v162,
                      v163,
                      v164),
                    (*(_BYTE *)(*(_QWORD *)(v165 + 128) + 1LL) & 8) == 0)
                && (sub_6E4DB0(
                      (__int64 *)(*(_QWORD *)(v165 + 104) + 96LL),
                      *(_QWORD *)(v165 + 104),
                      v161,
                      v162,
                      v163,
                      v164),
                    (*(_BYTE *)(*(_QWORD *)(v165 + 128) + 9LL) & 0x40) == 0) )
              {
                sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v161, v162, v163, v164);
                *(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) &= ~0x40u;
              }
            }
          }
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v161, v162, v163, v164);
          **(_BYTE **)(a1 + 128) &= ~0x80u;
        }
        v103 += 24;
        if ( v103 == v104 )
        {
          v40 = v313;
          v30 = v311;
          break;
        }
      }
    }
    if ( (v33->m128i_i8[12] & 1) != 0 )
    {
      v110 = v324;
      v111 = *(_QWORD *)&byte_8[v308 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
           | ((unsigned __int8)*(_QWORD *)&byte_8[v308 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v308) & 7;
      if ( v324 )
      {
        v112 = v321;
        v113 = HIDWORD(v322);
        v114 = 8LL * HIDWORD(v322);
        v115 = (unsigned __int64 *)((char *)v321 + v114);
        if ( v321 != (char *)v321 + v114 )
        {
          v116 = v321;
          if ( v111 == *(_QWORD *)v321 )
          {
LABEL_160:
            v110 = 0;
LABEL_161:
            v117 = (__int64)v112 + 8 * HIDWORD(v322);
            goto LABEL_72;
          }
          while ( v115 != ++v116 )
          {
            if ( v111 == *v116 )
              goto LABEL_160;
          }
        }
        if ( HIDWORD(v322) < (unsigned int)v322 )
        {
          v113 = (unsigned int)++HIDWORD(v322);
          *v115 = v111;
          v116 = (char *)v321 + v114;
          v117 = (__int64)v321 + 8 * HIDWORD(v322);
LABEL_72:
          if ( (_QWORD *)v117 != v116 && (unsigned __int64)(*v116 + 2LL) <= 1 )
          {
            do
              ++v116;
            while ( (_QWORD *)v117 != v116 && *v116 >= 0xFFFFFFFFFFFFFFFELL );
          }
          if ( (_BYTE)v110 )
          {
            v275 = (unsigned int)v316;
            v117 = HIDWORD(v316);
            v276 = (unsigned int)v316 + 1LL;
            if ( v276 > HIDWORD(v316) )
            {
              sub_22134E0(&ptr, v317, v276, 8);
              v275 = (unsigned int)v316;
            }
            v110 = (__int64)ptr;
            *((_QWORD *)ptr + v275) = v33;
            LODWORD(v316) = v316 + 1;
          }
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v110, v117, v114, v113);
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~2u;
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v118, v119, v120, v121);
          **(_BYTE **)(a1 + 128) &= ~0x80u;
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v122, v123, v124, v125);
          v126 = *(_QWORD *)(a1 + 128);
          v127 = *(_WORD *)(v126 + 4) & 0xE07F;
          *(_WORD *)(v126 + 4) = v127 | (((*(_WORD *)(v126 + 4) >> 7) & 0x20) << 7);
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v127, v126, v128, v129);
          v130 = *(_QWORD *)(a1 + 128);
          v131 = *(_DWORD *)(v130 + 4);
          v132 = v131 & 0xFFF81FFF;
          *(_DWORD *)(v130 + 4) = v132 | (((v131 >> 13) & 0x20) << 13);
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v132, v130, v133, v134);
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v135, v136, v137, v138);
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v139, v140, v141, v142);
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) &= ~4u;
          v143 = *(_QWORD *)(a1 + 104);
          sub_6E4DB0((__int64 *)(v143 + 96), v143, v144, v145, v146, v147);
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) &= ~0x10u;
          if ( !sub_B78470(v40, v143, v148, v149, v150, v151) )
          {
            sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v152, v153, v154, v155);
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) &= ~0x40u;
          }
          goto LABEL_105;
        }
      }
      v116 = (_QWORD *)sub_2212A20(&v321, v111);
      v112 = v321;
      if ( !v324 )
      {
        v117 = (__int64)v321 + 8 * (unsigned int)v322;
        goto LABEL_72;
      }
      goto LABEL_161;
    }
    v166 = *(_QWORD *)(v40 + 104);
    sub_6E4DB0((__int64 *)(v166 + 96), v166, v97, (__int64)v98, v99, (__int64)v100);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 9LL) & 1) == 0
      && !(unsigned __int8)sub_B78280(v40, v166, v167, v168, v169, v170)
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v167, v168, v169, v170),
          *(char *)(*(_QWORD *)(v40 + 128) + 4LL) >= 0) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v167, v168, v169, v170);
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x80u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v167, v168, v169, v170);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 5LL) & 1) == 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v171, v172, v173, v174);
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x100u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v171, v172, v173, v174);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 5LL) & 0x40) == 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v175, v176, v177, v178);
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x4000u;
    }
    v179 = *(_QWORD *)(v40 + 104);
    sub_6E4DB0((__int64 *)(v179 + 96), v179, v175, v176, v177, v178);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 9LL) & 4) == 0
      && !(unsigned __int8)sub_B78320(v40, v179, v180, v181, v182, v183)
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v180, v181, v182, v183),
          (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 5LL) & 2) == 0) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v180, v181, v182, v183);
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x200u;
    }
    v184 = *(_QWORD *)(v40 + 104);
    sub_6E4DB0((__int64 *)(v184 + 96), v184, v180, v181, v182, v183);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 9LL) & 4) == 0
      && !(unsigned __int8)sub_B78320(v40, v184, v185, v186, v187, v188)
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v185, v186, v187, v188),
          *(char *)(*(_QWORD *)(v40 + 128) + 5LL) >= 0) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v185, v186, v187, v188);
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x8000u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v185, v186, v187, v188);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 5LL) & 4) == 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v189, v190, v191, v192);
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x400u;
    }
    v193 = *(_QWORD *)(v40 + 104);
    sub_6E4DB0((__int64 *)(v193 + 96), v193, v189, v190, v191, v192);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 9LL) & 0x10) == 0
      && !(unsigned __int8)sub_B783C0(v40, v193, v194, v195, v196, v197)
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v194, v195, v196, v197),
          (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 5LL) & 8) == 0) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v194, v195, v196, v197);
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x800u;
    }
    v198 = *(_QWORD *)(v40 + 104);
    sub_6E4DB0((__int64 *)(v198 + 96), v198, v194, v195, v196, v197);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 8LL) & 8) == 0 )
    {
      if ( !(unsigned __int8)sub_B78280(v40, v198, v199, v200, v201, v202)
        || (v198 = *(_QWORD *)(v40 + 104),
            sub_6E4DB0((__int64 *)(v198 + 96), v198, v199, v200, v201, v202),
            (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 8LL) & 4) == 0)
        || *(_BYTE *)(v40 + 73) >> 5 == 2
        && (v198 = *(_QWORD *)(v40 + 104),
            sub_6E4DB0((__int64 *)(v198 + 96), v198, v199, v200, v201, v202),
            *(char *)(*(_QWORD *)(v40 + 128) + 2LL) >= 0)
        && (v198 = *(_QWORD *)(v40 + 104),
            sub_6E4DB0((__int64 *)(v198 + 96), v198, v199, v200, v201, v202),
            (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 2LL) & 0x10) != 0)
        && *(char *)(sub_B68890(v40) + 1) >= 0 )
      {
        v198 = *(_QWORD *)(a1 + 104);
        v277 = *(_BYTE *)(*(_QWORD *)(v314 + 2320) + 2LL);
        sub_6E4DB0((__int64 *)(v198 + 96), v198, v199, v200, v201, v202);
        v199 = *(_QWORD *)(a1 + 128);
        *(_BYTE *)(v199 + 8) = (4 * (v277 & 1)) | *(_BYTE *)(v199 + 8) & 0xFB;
      }
    }
    if ( !sub_B78470(v40, v198, v199, v200, v201, v202) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v152, v153, v154, v155);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) &= ~0x80u;
    }
LABEL_105:
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v152, v153, v154, v155);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 5LL) & 0x10) == 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v203, v204, v205, v206);
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x1000u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v203, v204, v205, v206);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 6LL) & 4) == 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v207, v208, v209, v210);
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x40000u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v207, v208, v209, v210);
    if ( *(char *)(*(_QWORD *)(v40 + 128) + 7LL) >= 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v211, v212, v213, v214);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 7LL) &= ~0x80u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v211, v212, v213, v214);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 10LL) & 8) != 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v215, v216, v217, v218);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 8u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v215, v216, v217, v218);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 10LL) & 0x10) != 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v219, v220, v221, v222);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 0x10u;
    }
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v219, v220, v221, v222);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 10LL) & 4) == 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v223, v224, v225, v226);
      if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 9LL) & 8) != 0
        || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v223, v224, v225, v226),
            (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 10LL) & 1) == 0) )
      {
        sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v223, v224, v225, v226);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) &= ~1u;
      }
    }
    v227 = *(_QWORD *)(v40 + 72);
    if ( (v227 & 0x2000000) != 0 )
    {
      *(_BYTE *)(a1 + 75) |= 2u;
      v227 = *(_QWORD *)(v40 + 72);
    }
    if ( (v227 & 0x4000000) != 0 )
      *(_BYTE *)(a1 + 75) |= 4u;
    if ( ((*(_BYTE *)(v40 + 76) >> 4) & 3) == 2 )
      *(_BYTE *)(a1 + 76) = *(_BYTE *)(a1 + 76) & 0xCF | 0x20;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v223, v224, v225, v226);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 2LL) & 8) != 0 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v228, v229, v230, v231);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) |= 8u;
    }
    v232 = *(_QWORD *)(v40 + 104);
    v233 = (__int64 *)(v232 + 96);
    if ( (*(_BYTE *)(v40 + 76) & 4) != 0 )
    {
      sub_6E4DB0(v233, v232, v228, v229, v230, v231);
      if ( **(char **)(v40 + 128) < 0 )
        *(_BYTE *)(a1 + 76) |= 4u;
      v232 = *(_QWORD *)(v40 + 104);
      v233 = (__int64 *)(v232 + 96);
    }
    if ( *(_BYTE *)(v40 + 73) >> 5 != 2 )
    {
      sub_6E4DB0(v233, v232, v228, v229, v230, v231);
      v232 = *(_QWORD *)(v40 + 104);
      v233 = (__int64 *)(v232 + 96);
      if ( (**(_BYTE **)(v40 + 128) & 1) == 0 )
      {
        sub_6E4DB0(v233, v232, v228, v229, v230, v231);
        if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 3LL) & 1) != 0 )
        {
          sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v228, v229, v230, v231);
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 1u;
        }
        v232 = *(_QWORD *)(v40 + 104);
        v233 = (__int64 *)(v232 + 96);
      }
    }
    sub_6E4DB0(v233, v232, v228, v229, v230, v231);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 3LL) & 2) != 0 )
    {
      v274 = *(_QWORD *)(v40 + 104);
      sub_6E4DB0((__int64 *)(v274 + 96), v274, v234, v235, v236, v237);
      if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 8LL) & 2) != 0
        || (unsigned __int8)sub_B78280(v40, v274, v234, v235, v236, v237) )
      {
        sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v234, v235, v236, v237);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 2u;
      }
    }
    ++v30;
    v31 += 24;
    sub_B7AC80(a1, v40, v234, v235, v236, v237);
  }
  while ( (const __m128i **)v309 != v30 );
LABEL_129:
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v26, v29, v27, v28);
  v242 = (a3 > 1) & (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) >> 4);
  if ( !v242 )
    goto LABEL_130;
  v279 = v320;
  v327 = 8;
  v329 = 1;
  v326 = &v330;
  v328 = 0;
  v318 = v320;
  v320[0] = a1;
  v319 = 0x800000001LL;
  v280 = 1;
  while ( 1 )
  {
    v281 = v280;
    v282 = v280 - 1;
    v283 = (_QWORD *)v279[v281 - 1];
    v238 = v283[6];
    if ( (*(_BYTE *)(v238 + 17) & 4) != 0 )
    {
      v238 = (__int64)&v279[v282 - 1];
      while ( v282 )
      {
        v283 = *(_QWORD **)v238;
        --v282;
        v238 -= 8;
        v239 = v283[6];
        if ( (*(_BYTE *)(v239 + 17) & 4) == 0 )
          goto LABEL_195;
      }
      LODWORD(v319) = 0;
LABEL_223:
      v242 = 0;
      goto LABEL_224;
    }
LABEL_195:
    v284 = v283[13];
    LODWORD(v319) = v282;
    sub_6E4DB0((__int64 *)(v284 + 96), v284, v238, v239, v240, v241);
    v289 = v283[16];
    v290 = (*(_BYTE *)(v289 + 24) & 1) != 0 ? sub_B72C40(v289) : *(_QWORD *)(v289 + 24);
    sub_6E4DB0((__int64 *)(v283[13] + 96LL), v283[13], v285, v286, v287, v288);
    v291 = v290 + 24LL * *(unsigned int *)(v283[16] + 16LL);
    sub_6E4DB0((__int64 *)(v283[13] + 96LL), v283[13], v292, v293, v294, v295);
    v296 = v283[16];
    v297 = (*(_BYTE *)(v296 + 24) & 1) != 0 ? sub_B72C40(v296) : *(_QWORD *)(v296 + 24);
    if ( v291 != v297 )
      break;
LABEL_222:
    v280 = v319;
    v279 = v318;
    if ( !(_DWORD)v319 )
      goto LABEL_223;
  }
  while ( 2 )
  {
    v298 = *(_QWORD *)(**(_QWORD **)(v297 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v298 + 8) & 0xF) != 0 )
      v298 = sub_F411C0(**(_QWORD **)(v297 + 16));
    v299 = sub_F3F530(*(_QWORD *)(v298 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v299 )
    {
LABEL_221:
      v297 += 24;
      if ( v297 == v291 )
        goto LABEL_222;
      continue;
    }
    break;
  }
  v238 = v329;
  if ( v329 )
  {
    v300 = (char *)v326;
    v240 = HIDWORD(v327);
    v301 = 8LL * HIDWORD(v327);
    v302 = (__int64 *)((char *)v326 + v301);
    if ( v326 != (char *)v326 + v301 )
    {
      v303 = (char *)v326;
      if ( *(_QWORD *)v326 == v299 )
      {
LABEL_232:
        v238 = 0;
LABEL_211:
        v239 = HIDWORD(v327);
        v304 = &v300[8 * HIDWORD(v327)];
        goto LABEL_212;
      }
      while ( 1 )
      {
        v303 += 8;
        if ( v302 == (__int64 *)v303 )
          break;
        if ( v299 == *(_QWORD *)v303 )
          goto LABEL_232;
      }
    }
    if ( HIDWORD(v327) < (unsigned int)v327 )
    {
      v240 = (unsigned int)++HIDWORD(v327);
      *v302 = v299;
      v300 = (char *)v326;
      v303 = (char *)v326 + v301;
      goto LABEL_211;
    }
  }
  v303 = (char *)sub_2212A20(&v326, v299);
  v300 = (char *)v326;
  if ( v329 )
    goto LABEL_211;
  v239 = (unsigned int)v327;
  v304 = (char *)v326 + 8 * (unsigned int)v327;
LABEL_212:
  if ( v304 != v303 && *(_QWORD *)v303 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v305 = v303 + 8;
    do
    {
      v239 = (__int64)v305;
      if ( v304 == v305 )
        break;
      v305 += 8;
    }
    while ( *(_QWORD *)v239 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( (_BYTE)v238 )
  {
    v306 = (unsigned int)v319;
    v239 = HIDWORD(v319);
    v307 = (unsigned int)v319 + 1LL;
    if ( v307 > HIDWORD(v319) )
    {
      sub_22134E0(&v318, v320, v307, 8);
      v306 = (unsigned int)v319;
    }
    v238 = (__int64)v318;
    *((_QWORD *)v318 + v306) = v299;
    LODWORD(v319) = v319 + 1;
    goto LABEL_221;
  }
  v279 = v318;
LABEL_224:
  if ( v279 != v320 )
    free(v279);
  if ( !v329 )
    free(v326);
  if ( v242 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v238, v239, v240, v241);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
  }
LABEL_130:
  if ( (_DWORD)v316 )
  {
    v243 = 6LL * (unsigned int)v316;
    v244 = (_DWORD *)sub_B77A10((__int64 *)(v314 + 2352), v243 * 4, 3u);
    v248 = v244;
    v249 = (__int64)&v244[v243];
    do
    {
      *v244 = 0;
      v244 += 6;
      *(v244 - 5) = 0;
      *(v244 - 4) = 0;
    }
    while ( v244 != (_DWORD *)v249 );
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v249, v245, v246, v247);
    v250 = v316;
    *(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL) = v248;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v251, v252, v253, v254);
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 20LL) = v250;
    if ( (_DWORD)v316 )
    {
      v255 = 0;
      v256 = 8LL * (unsigned int)(v316 - 1) + 8;
      do
      {
        v260 = (_QWORD *)(sub_B72090(*(__int64 **)(*(_QWORD *)((char *)ptr + v255) + 16LL)) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(*v260 + 17LL) & 4) == 0 )
        {
          v265 = sub_F3F530(*v260);
          sub_B7AC80(a1, v265, v266, v267, v268, v269);
        }
        v257 = *(const __m128i **)((char *)ptr + v255);
        sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v261, v262, v263, v264);
        v258 = *(_QWORD *)(a1 + 128);
        if ( (*(_BYTE *)(v258 + 32) & 1) != 0 )
          v259 = (__m128i *)(3 * v255 + sub_B72C80(v258));
        else
          v259 = (__m128i *)(*(_QWORD *)(v258 + 32) + 3 * v255);
        *v259 = _mm_loadu_si128(v257);
        v238 = v257[1].m128i_i64[0];
        v255 += 8;
        v259[1].m128i_i64[0] = v238;
      }
      while ( v256 != v255 );
    }
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v238, v239, v240, v241);
  *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) &= ~0x40u;
  if ( ptr != v317 )
    free(ptr);
  if ( !v324 )
    free(v321);
}

