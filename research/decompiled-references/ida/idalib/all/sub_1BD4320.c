__int64 __fastcall sub_1BD4320(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  char v10; // al
  char v11; // dl
  char v12; // al
  int v13; // eax
  int v14; // r10d
  unsigned int v15; // eax
  __int64 v16; // rsi
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 result; // rax
  char v23; // dl
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // r12d
  int v28; // eax
  bool v29; // al
  __int64 v30; // rsi
  char v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 *v34; // r8
  __int64 v35; // rsi
  __int64 v36; // r13
  __int64 *v37; // r12
  __int64 v38; // rcx
  char v39; // dl
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r8
  char v49; // al
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r13
  __int64 v53; // r12
  char v54; // r14
  __int64 v55; // rcx
  __int64 v56; // r8
  char v57; // dl
  unsigned __int64 v58; // r13
  __int64 v59; // rcx
  __int64 v60; // r12
  __int64 v61; // rdx
  unsigned __int64 v62; // r13
  __int64 v63; // rcx
  unsigned __int64 v64; // r12
  unsigned __int64 v65; // rdx
  char v66; // al
  __int64 v67; // r9
  char v68; // al
  __int64 v69; // rcx
  char v70; // dl
  __int64 v71; // rdx
  char v72; // al
  char v73; // r12
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // r8
  unsigned __int64 v77; // rax
  __int64 v78; // r13
  unsigned __int64 v79; // rax
  __int64 *v80; // r12
  unsigned __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r12
  __int64 v84; // rax
  __int64 v85; // rdi
  bool v86; // zf
  __int64 v87; // rax
  __int64 v88; // r8
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // rcx
  unsigned __int64 v161; // rdx
  char v162; // al
  unsigned __int64 v163; // rcx
  bool v164; // al
  __int64 v165; // rax
  __int64 v166; // rdx
  _QWORD *v167; // rdi
  __int64 v168; // rcx
  __int64 v169; // rsi
  __int64 v170; // r13
  unsigned __int64 v171; // r12
  unsigned __int64 v172; // r14
  __int64 v173; // rcx
  __int64 v174; // r8
  unsigned __int64 v175; // rax
  char v176; // cl
  char v177; // al
  char v178; // r14
  __int64 v179; // r13
  unsigned __int64 v180; // rdx
  __int64 v181; // r12
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // rax
  _QWORD *v186; // r13
  _QWORD *v187; // r12
  __int64 *v188; // rax
  _QWORD *v189; // rdi
  __int64 v190; // rcx
  unsigned __int64 v191; // rsi
  __int64 v192; // rcx
  char v193; // al
  char v194; // al
  unsigned __int64 v195; // r13
  __int64 v196; // rcx
  __int64 v197; // r8
  unsigned __int64 v198; // r12
  unsigned __int8 v199; // al
  unsigned __int64 v200; // rax
  unsigned __int64 v201; // rax
  __int64 v202; // r8
  __int64 v203; // r9
  unsigned __int64 v204; // rax
  char v205; // r9
  bool v206; // al
  __int64 v207; // r12
  __int64 v208; // rax
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rcx
  unsigned __int64 v218; // r12
  __int64 v219; // rax
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // rax
  unsigned __int64 v223; // rax
  __int64 v224; // r9
  unsigned __int64 v225; // r13
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rcx
  __int64 v229; // rdx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // rdx
  __int64 v236; // r8
  __int64 v237; // rax
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 v241; // rax
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // r8
  __int64 v245; // rbx
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // rax
  __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // rbp
  __int64 v254; // rdx
  __int64 v255; // rcx
  __int64 v256; // r8
  __int64 v257; // rax
  __int64 v258; // rdx
  __int64 v259; // rcx
  __int64 v260; // r8
  __int64 v261; // r12
  __int64 v262; // rdx
  __int64 v263; // rcx
  __int64 v264; // r8
  __int64 v265; // rax
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // rax
  __int64 v270; // rax
  __int64 v271; // rdx
  __int64 v272; // rcx
  __int64 v273; // r8
  unsigned __int64 v274; // [rsp+0h] [rbp-A8h]
  __int64 v275; // [rsp+0h] [rbp-A8h]
  __int64 v276; // [rsp+0h] [rbp-A8h]
  __int64 v277; // [rsp+0h] [rbp-A8h]
  __int64 *v278; // [rsp+0h] [rbp-A8h]
  char v279; // [rsp+0h] [rbp-A8h]
  __int64 *v280; // [rsp+8h] [rbp-A0h]
  __int64 v281; // [rsp+8h] [rbp-A0h]
  __int64 v282; // [rsp+8h] [rbp-A0h]
  __int64 v283; // [rsp+8h] [rbp-A0h]
  __int64 v284; // [rsp+10h] [rbp-98h]
  __int64 v285; // [rsp+18h] [rbp-90h]
  __int64 *v286; // [rsp+20h] [rbp-88h]
  __int64 v287; // [rsp+20h] [rbp-88h]
  __int64 *v288; // [rsp+20h] [rbp-88h]
  __int64 v289; // [rsp+20h] [rbp-88h]
  __int64 *v290; // [rsp+20h] [rbp-88h]
  __int64 *v291; // [rsp+28h] [rbp-80h]
  __int64 *v292; // [rsp+28h] [rbp-80h]
  __int64 v293; // [rsp+28h] [rbp-80h]
  __int64 v294; // [rsp+28h] [rbp-80h]
  unsigned __int64 v295; // [rsp+28h] [rbp-80h]
  __int64 v296; // [rsp+30h] [rbp-78h]
  __int64 v297; // [rsp+30h] [rbp-78h]
  char v298; // [rsp+30h] [rbp-78h]
  __int64 v299; // [rsp+30h] [rbp-78h]
  unsigned __int64 v300; // [rsp+30h] [rbp-78h]
  __int64 v301; // [rsp+38h] [rbp-70h]
  char v302; // [rsp+38h] [rbp-70h]
  unsigned __int64 v303; // [rsp+40h] [rbp-68h]
  unsigned __int8 v304; // [rsp+4Eh] [rbp-5Ah]
  unsigned __int8 v305; // [rsp+4Fh] [rbp-59h]
  unsigned __int64 v306; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v307; // [rsp+58h] [rbp-50h] BYREF
  __int64 v308; // [rsp+60h] [rbp-48h] BYREF
  __int64 v309[8]; // [rsp+68h] [rbp-40h] BYREF

  v5 = *(_DWORD *)a4;
  LOBYTE(v5) = 0;
  if ( (*(_DWORD *)a3 & 0xFFFFFF00) != 0 )
  {
    if ( !v5 )
      return 1;
  }
  else if ( v5 )
  {
    return 0xFFFFFFFFLL;
  }
  v10 = *(_BYTE *)(a3 + 1);
  v11 = *(_BYTE *)(a4 + 1);
  if ( v10 == v11 )
  {
    if ( !(unsigned __int8)sub_AC0070(*(_QWORD **)(a1 + 248), *(_QWORD *)(a3 + 24), *(_QWORD *)(a4 + 24), a4, a5) )
      goto LABEL_7;
    v57 = *(_BYTE *)(a3 + 3);
    v24 = *(_BYTE *)(a4 + 3);
    if ( v24 == v57 )
      goto LABEL_7;
    if ( !v57 )
      return 0xFFFFFFFFLL;
    goto LABEL_15;
  }
  if ( v10 )
  {
    if ( v11 )
      goto LABEL_7;
    v23 = *(_BYTE *)(a3 + 3);
    v24 = *(_BYTE *)(a4 + 3);
    if ( v24 == v23 )
    {
      result = 1;
      goto LABEL_23;
    }
    if ( !v23 )
      goto LABEL_7;
LABEL_15:
    if ( !v24 )
      return 1;
    goto LABEL_7;
  }
  v12 = *(_BYTE *)(a3 + 3);
  if ( v12 != *(_BYTE *)(a4 + 3) )
  {
    if ( !v12 )
      return 0xFFFFFFFFLL;
    goto LABEL_7;
  }
  result = 0xFFFFFFFFLL;
LABEL_23:
  v25 = *(_QWORD *)&byte_8[*(_QWORD *)(a4 + 32) & 0xFFFFFFFFFFFFFFF0LL];
  v26 = *(_QWORD *)&byte_8[*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v26 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v26 | (unsigned __int8)*(_QWORD *)(a3 + 32)) & 7) == (v25 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v25 | (unsigned __int8)*(_QWORD *)(a4 + 32)) & 7) )
    return result;
LABEL_7:
  sub_1BCD550((unsigned __int8 *)a3);
  v13 = sub_1BCD550((unsigned __int8 *)a4);
  if ( v14 < v13 )
    return 0xFFFFFFFFLL;
  if ( v14 > v13 )
    return 1;
  LOBYTE(v15) = sub_1BD21B0(a3);
  v16 = v15;
  v17 = sub_1BD21B0(a4);
  if ( (_BYTE)v16 != v17 )
    goto LABEL_10;
  v27 = 0;
  if ( *(_BYTE *)(a3 + 1) == 6 )
    v27 = sub_1BCCB70(a3, v16, v18, v19, v20, v21);
  if ( *(_BYTE *)(a4 + 1) == 6 )
  {
    v28 = sub_1BCCB70(a4, v16, v18, v19, v20, v21);
    LOBYTE(v18) = v28 != 0;
    if ( v27 != v28 && v28 != 0 )
    {
      if ( v27 )
      {
        if ( v27 != 1 )
          return 1;
        return 0xFFFFFFFFLL;
      }
    }
  }
  v29 = sub_1BD2230(a3, *(_QWORD *)(a1 + 248), v18, v19);
  v30 = *(_QWORD *)(a1 + 248);
  v31 = v29;
  v17 = sub_1BD2230(a4, v30, v32, v33);
  if ( v31 != v17 )
  {
LABEL_10:
    if ( !v17 )
      return 1;
    return 0xFFFFFFFFLL;
  }
  if ( v31 )
  {
    v35 = *(_QWORD *)(a3 + 8);
    v36 = *(_QWORD *)(a4 + 8);
    v34 = (__int64 *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
    v37 = (__int64 *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
    v38 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL];
    v39 = v38 | v36;
    v40 = v38 & 0xFFFFFFFFFFFFFFF8LL;
    v41 = v40 | v39 & 7;
    if ( (*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v35) & 7) == v41 )
      goto LABEL_60;
    if ( *(_BYTE *)a3 == 2 )
      v34 = (__int64 *)(sub_A72210(*(_QWORD **)(a1 + 248), v35) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)a4 == 2 )
    {
      v35 = v36;
      v278 = v34;
      v204 = sub_A72210(*(_QWORD **)(a1 + 248), v36);
      v34 = v278;
      v37 = (__int64 *)(v204 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v280 = v34;
    v309[0] = sub_F68450(*v34, v35, v41, v40, (__int64)v34);
    v42 = sub_6D5440(v309);
    v309[0] = sub_F68450(*v37, v35, v43, v44, v45);
    v274 = sub_6D5440(v309);
    if ( (unsigned __int8)sub_183BD10(a1, a2, v274, v42, v46, v47) )
      return 0xFFFFFFFFLL;
    v49 = sub_183BD10(a1, a2, v42, v274, v48, v274);
    v34 = v280;
    if ( v49 )
      return 1;
    v52 = *v280;
    if ( *(_BYTE *)(*v280 + 16) == 34 )
    {
      v53 = *v37;
      if ( *(_BYTE *)(v53 + 16) == 34 )
      {
LABEL_43:
        v54 = sub_AABC90(*(_QWORD *)(a1 + 248), v52, v53, v51, (__int64)v34);
        if ( v54 != (unsigned __int8)sub_AABC90(*(_QWORD *)(a1 + 248), v53, v52, v55, v56) )
        {
          if ( !v54 )
            return 1;
          return 0xFFFFFFFFLL;
        }
        goto LABEL_60;
      }
    }
    else
    {
      v208 = sub_1BC7620(*v280, a2, v50, v51);
      v53 = *v37;
      v52 = v208;
      if ( *(_BYTE *)(v53 + 16) == 34 )
      {
LABEL_179:
        if ( !v52 || !v53 )
          goto LABEL_60;
        goto LABEL_43;
      }
    }
    v53 = sub_1BC7620(v53, a2, v50, v51);
    goto LABEL_179;
  }
  v58 = *(_QWORD *)(a3 + 8);
  v59 = *(_QWORD *)(a3 + 24);
  v60 = *(_QWORD *)(a4 + 8);
  v61 = *(_QWORD *)(a4 + 24);
  if ( *(_BYTE *)a3 == 2 )
  {
    v30 = *(_QWORD *)(a3 + 8);
    v283 = *(_QWORD *)(a4 + 24);
    v277 = *(_QWORD *)(a3 + 24);
    v201 = sub_A72210(*(_QWORD **)(a1 + 248), v30);
    v61 = v283;
    v59 = v277;
    v58 = v201;
  }
  if ( *(_BYTE *)a4 == 2 )
  {
    v30 = v60;
    v282 = v61;
    v276 = v59;
    v200 = sub_A72210(*(_QWORD **)(a1 + 248), v60);
    v61 = v282;
    v59 = v276;
    v60 = v200;
  }
  v62 = *(_QWORD *)&byte_8[v58 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v58 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v58) & 7;
  v275 = v62;
  v63 = *(_QWORD *)&byte_8[v59 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v59 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v59) & 7;
  v284 = v63;
  v64 = *(_QWORD *)&byte_8[v60 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v60 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v60) & 7;
  v281 = v64;
  v65 = *(_QWORD *)&byte_8[v61 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v61 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v61) & 7;
  v66 = *(_BYTE *)(a3 + 1);
  v285 = v65;
  if ( v66 == 13 )
  {
    if ( *(_BYTE *)(a4 + 1) != 13 )
      goto LABEL_60;
    v77 = v62 & 0xFFFFFFFFFFFFFFF0LL;
    v78 = *(_QWORD *)(v62 & 0xFFFFFFFFFFFFFFF0LL);
    v303 = v77;
    v79 = v64;
    v80 = (__int64 *)(v63 & 0xFFFFFFFFFFFFFFF0LL);
    v291 = (__int64 *)(v79 & 0xFFFFFFFFFFFFFFF0LL);
    v81 = v65;
    v82 = *(unsigned __int8 *)(v78 + 16);
    v286 = (__int64 *)(v81 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v78 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v291 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v80 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v286 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
    {
      if ( (_BYTE)v82 != 34 )
        v78 = sub_1BC7620(v78, v30, v82, v63);
      v63 = *v291;
      if ( *(_BYTE *)(*v291 + 16) != 34 )
        v63 = sub_1BC7620(*v291, v30, v82, v63);
      v83 = *v80;
      if ( *(_BYTE *)(v83 + 16) != 34 )
      {
        v296 = v63;
        v84 = sub_1BC7620(v83, v30, v82, v63);
        v63 = v296;
        v83 = v84;
      }
      v85 = *v286;
      v86 = *(_BYTE *)(*v286 + 16) == 34;
      v287 = *v286;
      if ( !v86 )
      {
        v297 = v63;
        v87 = sub_1BC7620(v85, v30, v82, v63);
        v63 = v297;
        v287 = v87;
      }
      if ( v78 && v63 && v83 && v287 )
      {
        v301 = v63;
        v298 = sub_AABC90(*(_QWORD *)(a1 + 248), v78, v63, v63, (__int64)v34);
        v304 = sub_AABC90(*(_QWORD *)(a1 + 248), v301, v78, v301, v88);
        v302 = sub_AABC90(*(_QWORD *)(a1 + 248), v83, v287, v89, v90);
        v305 = sub_AABC90(*(_QWORD *)(a1 + 248), v287, v83, v91, v92);
        if ( sub_A5E7F0(v83, v287, v93, v94, v95) )
        {
          if ( sub_A5E8D0(v287, v287, v96, v97, v98) )
            return 1;
          v102 = sub_A5E7C0(v287, v287, v99, v100, v101);
          if ( sub_9C7D40(v102, v287, v103, v104, v105) )
            return 1;
        }
        if ( sub_A5E7F0(v287, v287, v96, v97, v98) )
        {
          if ( sub_A5E8D0(v83, v287, v106, v107, v108) )
            return 0xFFFFFFFFLL;
          v112 = sub_A5E7C0(v83, v287, v109, v110, v111);
          if ( sub_9C7D40(v112, v287, v113, v114, v115) )
            return 0xFFFFFFFFLL;
        }
        if ( sub_A5E8D0(v83, v287, v106, v107, v108) )
        {
          v119 = sub_A5E7C0(v287, v287, v116, v117, v118);
          if ( sub_9C7D40(v119, v287, v120, v121, v122) )
            return 1;
        }
        if ( sub_A5E8D0(v287, v287, v116, v117, v118) )
        {
          v126 = sub_A5E7C0(v83, v287, v123, v124, v125);
          if ( sub_9C7D40(v126, v287, v127, v128, v129) )
            return 0xFFFFFFFFLL;
        }
        if ( sub_A5E860(v83, v287, v123, v124, v125) )
        {
          if ( sub_A5E940(v287, v287, v130, v131, v132) )
            return 1;
          v136 = sub_A5E7C0(v287, v287, v133, v134, v135);
          if ( sub_9C7D40(v136, v287, v137, v138, v139) )
            return 1;
        }
        if ( sub_A5E860(v287, v287, v130, v131, v132) )
        {
          if ( sub_A5E940(v83, v287, v140, v141, v142) )
            return 0xFFFFFFFFLL;
          v146 = sub_A5E7C0(v83, v287, v143, v144, v145);
          if ( sub_9C7D40(v146, v287, v147, v148, v149) )
            return 0xFFFFFFFFLL;
        }
        if ( sub_A5E940(v83, v287, v140, v141, v142) )
        {
          v153 = sub_A5E7C0(v287, v287, v150, v151, v152);
          if ( sub_9C7D40(v153, v287, v154, v155, v156) )
            return 1;
        }
        if ( sub_A5E940(v287, v287, v150, v151, v152) )
        {
          v270 = sub_A5E7C0(v83, v287, v157, v158, v159);
          if ( sub_9C7D40(v270, v287, v271, v272, v273) )
            return 0xFFFFFFFFLL;
        }
        v160 = v291[1];
        v161 = *(_QWORD *)(v303 + 8) & 0xFFFFFFFFFFFFFFF8LL
             | ((unsigned __int8)*(_QWORD *)(v303 + 8) | (unsigned __int8)v275) & 7;
        v162 = v160 | v281;
        v163 = v160 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v161 == (v163 | v162 & 7)
          && !sub_A5E7F0(v78, v287, v161, v163, v159)
          && !sub_A5E860(v78, v287, v232, v233, v234)
          && v302 != v305 )
        {
          v237 = sub_A5E7C0(v78, v287, v235, v305, v236);
          if ( (unsigned __int8)sub_F65FA0(v237) )
          {
            v241 = sub_A5E7C0(v78, v287, v238, v239, v240);
            v245 = sub_9C7D40(v241, v287, v242, v243, v244);
            v249 = sub_A5E7C0(v83, v287, v246, v247, v248);
            v253 = sub_9C7D40(v249, v287, v250, v251, v252);
            v257 = sub_A5E7C0(v78, v287, v254, v255, v256);
            v261 = sub_9C7D40(v257, v287, v258, v259, v260);
            v265 = sub_A5E7C0(v287, v287, v262, v263, v264);
            v269 = sub_9C7D40(v265, v287, v266, v267, v268);
            if ( v245 == v253 )
            {
              if ( v261 != v269 )
                return 0xFFFFFFFFLL;
            }
            else if ( v261 == v269 )
            {
              return 1;
            }
          }
          if ( v302 )
            return 1;
          return 0xFFFFFFFFLL;
        }
        v164 = sub_1BC70C0(v284, v285);
        v30 = v304;
        if ( v298 != v304 && v164 )
        {
          if ( !v298 )
            return 1;
          return 0xFFFFFFFFLL;
        }
      }
      goto LABEL_125;
    }
    if ( (_BYTE)v82 != 42 )
      v78 = sub_F63050(v78, v30, v82, v63);
    v309[0] = *(_QWORD *)(v78 + 32);
    v300 = sub_6D5440(v309);
    v215 = *v80;
    if ( *(_BYTE *)(*v80 + 16) != 42 )
      v215 = sub_F63050(*v80, v30, v213, v214);
    v309[0] = *(_QWORD *)(v215 + 32);
    v218 = sub_6D5440(v309);
    v219 = *v291;
    if ( *(_BYTE *)(*v291 + 16) != 42 )
      v219 = sub_F63050(*v291, v30, v216, v217);
    v309[0] = *(_QWORD *)(v219 + 32);
    v295 = sub_6D5440(v309);
    v222 = *v286;
    if ( *(_BYTE *)(*v286 + 16) != 42 )
      v222 = sub_F63050(*v286, v30, v220, v221);
    v309[0] = *(_QWORD *)(v222 + 32);
    v223 = sub_6D5440(v309);
    v63 = v295;
    v225 = v223;
    if ( v300 == v295 )
    {
      if ( v218 != v223 )
      {
        if ( (unsigned __int8)sub_183BD10(a1, a2, v218, v223, (__int64)v34, v224) )
          return 0xFFFFFFFFLL;
        v228 = v218;
        v229 = v225;
LABEL_209:
        v30 = a2;
        if ( (unsigned __int8)sub_183BD10(a1, a2, v229, v228, v226, v227) )
          return 1;
      }
    }
    else if ( v218 == v223 )
    {
      if ( (unsigned __int8)sub_183BD10(a1, a2, v295, v300, (__int64)v34, v224) )
        return 0xFFFFFFFFLL;
      v228 = v295;
      v229 = v300;
      goto LABEL_209;
    }
LABEL_125:
    v66 = *(_BYTE *)(a3 + 1);
  }
  if ( v66 == 14 )
  {
    if ( *(_BYTE *)(a4 + 1) != 14 )
      goto LABEL_60;
    v179 = *(_QWORD *)(v275 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v179 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
      goto LABEL_60;
    v288 = (__int64 *)(v281 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v281 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 33 )
      goto LABEL_60;
    v180 = v284 & 0xFFFFFFFFFFFFFFF0LL;
    v181 = *(_QWORD *)(v284 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v181 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
      goto LABEL_60;
    v292 = (__int64 *)(v285 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v285 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 33 )
      goto LABEL_60;
    if ( *(_BYTE *)(v179 + 16) != 33 )
    {
      v182 = sub_F63050(v179, v30, v180, v63);
      v180 = v284 & 0xFFFFFFFFFFFFFFF0LL;
      v179 = v182;
      v181 = *(_QWORD *)(v284 & 0xFFFFFFFFFFFFFFF0LL);
    }
    if ( *(_BYTE *)(v181 + 16) != 33 )
      v181 = sub_F63050(v181, v30, v180, v63);
    v183 = *v288;
    if ( *(_BYTE *)(*v288 + 16) != 33 )
      v183 = sub_F63050(*v288, v30, v183, v63);
    v184 = *v292;
    if ( *(_BYTE *)(*v292 + 16) != 33 )
    {
      v289 = v183;
      v185 = sub_F63050(*v292, v30, v183, v184);
      v183 = v289;
      v184 = v185;
    }
    v299 = v184;
    v293 = v183;
    v186 = sub_F61C10(v179);
    v290 = sub_F61C10(v181);
    v187 = sub_F61C10(v293);
    v188 = sub_F61C10(v299);
    v34 = v188;
    if ( v186 != v187 || v290 == v188 )
    {
      if ( v290 == v188 && v186 != v187 )
      {
        if ( (unsigned __int8)sub_183BB70(a1, a2, (__int64)v186, (__int64)v187, (__int64)v188, (__int64)v290) )
          return 0xFFFFFFFFLL;
        if ( (unsigned __int8)sub_183BB70(a1, a2, (__int64)v187, (__int64)v186, v230, v231) )
          return 1;
      }
    }
    else
    {
      v294 = (__int64)v188;
      if ( (unsigned __int8)sub_183BB70(a1, a2, (__int64)v290, (__int64)v188, (__int64)v188, (__int64)v290) )
        return 1;
      if ( (unsigned __int8)sub_183BB70(a1, a2, v294, (__int64)v290, v294, (__int64)v290) )
        return 0xFFFFFFFFLL;
    }
    v66 = *(_BYTE *)(a3 + 1);
  }
  if ( v66 == 17 )
  {
    if ( !sub_1BC70C0(v275, v281) )
      goto LABEL_236;
    if ( !sub_1BC70C0(v284, v285) )
    {
      if ( (unsigned __int8)sub_183BD10(a1, a2, v284, v285, v202, v203) )
        return 0xFFFFFFFFLL;
      if ( (unsigned __int8)sub_183BD10(a1, a2, v285, v284, v209, v210) )
        return 1;
    }
    if ( !sub_1BC70C0(v275, v281) )
    {
LABEL_236:
      if ( sub_1BC70C0(v284, v285) )
      {
        if ( (unsigned __int8)sub_183BD10(a1, a2, v281, v275, (__int64)v34, v67) )
          return 0xFFFFFFFFLL;
        if ( (unsigned __int8)sub_183BD10(a1, a2, v275, v281, v211, v212) )
          return 1;
      }
    }
  }
LABEL_60:
  v68 = *(_BYTE *)(a3 + 4);
  v69 = v68 & 8;
  if ( (v68 & 8) != 0 )
  {
    v70 = *(_BYTE *)(a4 + 4);
    if ( (v70 & 8) != 0 && (*(_BYTE *)(a3 + 5) & 1) == 0 && (*(_BYTE *)(a4 + 5) & 1) == 0 )
    {
      if ( (v68 & 0xA0) == 0x80 )
      {
        if ( (v70 & 0x20) != 0 )
          return 0xFFFFFFFFLL;
      }
      else if ( (v68 & 0x60) == 0x60 && (v70 & 0x60) == 0x40 )
      {
        return 0xFFFFFFFFLL;
      }
      if ( (v70 & 0xA0) == 0x80 )
      {
        if ( (v68 & 0x20) != 0 )
          return 1;
      }
      else if ( (v70 & 0x60) == 0x60 && (v68 & 0x60) == 0x40 )
      {
        return 1;
      }
    }
  }
  if ( (*(_DWORD *)a3 & 0xFF00FFFF) != (*(_DWORD *)a4 & 0xFF00FFFF) || *(_BYTE *)(a3 + 3) != 5 )
  {
LABEL_70:
    if ( (_BYTE)v69 )
    {
      if ( (*(_BYTE *)(a4 + 4) & 8) != 0 )
      {
        v189 = *(_QWORD **)(a1 + 248);
        v190 = *(_QWORD *)&byte_8[*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL];
        v191 = v190 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v190 | (unsigned __int8)*(_QWORD *)(a3 + 32)) & 7;
        v192 = *(_QWORD *)&byte_8[*(_QWORD *)(a4 + 32) & 0xFFFFFFFFFFFFFFF0LL];
        v193 = *(_QWORD *)(a4 + 32);
        v306 = v191;
        v308 = 0;
        v194 = v192 | v193;
        v192 &= 0xFFFFFFFFFFFFFFF8LL;
        v309[0] = 0;
        v307 = v192 | v194 & 7;
        v195 = sub_A725A0(v189, v191, &v308, v192, (__int64)v34);
        v198 = sub_A725A0(*(_QWORD **)(a1 + 248), v307, v309, v196, v197);
        if ( v195 == v198 )
        {
          v199 = *(_BYTE *)(a3 + 5);
          if ( ((v199 ^ *(_BYTE *)(a4 + 5)) & 2) != 0 )
          {
            if ( (v199 & 2) != 0 )
              return 1;
            return 0xFFFFFFFFLL;
          }
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v306 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u && v308 )
            v306 = sub_A70F20(*(_QWORD *)(a1 + 248), v198, v308);
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v307 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u && v309[0] )
            v307 = sub_A70F20(*(_QWORD *)(a1 + 248), v198, v309[0]);
          if ( sub_1BCC200((__int64 *)&v307, v306, *(_QWORD *)(a1 + 248)) )
            return 0xFFFFFFFFLL;
          if ( sub_1BCC200((__int64 *)&v306, v307, *(_QWORD *)(a1 + 248)) )
            return 1;
        }
      }
    }
    v71 = *(_QWORD *)(a1 + 232);
    v72 = *(_BYTE *)(a3 + 1);
    if ( (*(_BYTE *)v71 & 0x20) == 0 || *(_DWORD *)(v71 + 152) > 0xB7DE4FFu || v72 != 9 )
    {
LABEL_75:
      if ( v72 == 18 )
      {
        if ( *(_BYTE *)(a4 + 1) != 18 )
          return 0;
        v73 = sub_A63DE0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 32), v69, (__int64)v34);
        if ( v73 != (unsigned __int8)sub_A63DE0(
                                       *(_QWORD *)(a1 + 248),
                                       *(_QWORD *)(a4 + 8),
                                       *(_QWORD *)(a4 + 32),
                                       v75,
                                       v76) )
          goto LABEL_84;
        v72 = *(_BYTE *)(a3 + 1);
      }
      if ( v72 != 19 )
      {
LABEL_81:
        if ( v72 != 20 )
          return 0;
        if ( *(_BYTE *)(a4 + 1) != 20 )
          return 0;
        v73 = sub_AA90B0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 32), v69);
        if ( v73 == sub_AA90B0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 32), v74) )
          return 0;
        goto LABEL_84;
      }
      if ( *(_BYTE *)(a4 + 1) != 19 )
        return 0;
      v73 = sub_1629840(*(__int64 **)(a1 + 632), *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 32));
      if ( v73 == sub_1629840(*(__int64 **)(a1 + 632), *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 32)) )
      {
        v72 = *(_BYTE *)(a3 + 1);
        goto LABEL_81;
      }
LABEL_84:
      if ( !v73 )
        return 1;
      return 0xFFFFFFFFLL;
    }
    if ( *(_BYTE *)(a4 + 1) != 12 )
      return 0;
    v207 = sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v207 != sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      v72 = *(_BYTE *)(a3 + 1);
      goto LABEL_75;
    }
    return 0xFFFFFFFFLL;
  }
  v165 = *(_QWORD *)(a3 + 32);
  v166 = *(_QWORD *)(a4 + 32);
  v167 = *(_QWORD **)(a1 + 248);
  v168 = *(_QWORD *)&byte_8[v165 & 0xFFFFFFFFFFFFFFF0LL];
  v169 = *(_QWORD *)&byte_8[v166 & 0xFFFFFFFFFFFFFFF0LL];
  v308 = 0;
  v309[0] = 0;
  LOBYTE(v165) = v168 | v165;
  v168 &= 0xFFFFFFFFFFFFFFF8LL;
  v170 = v168 | v165 & 7;
  v171 = v169 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v169 | (unsigned __int8)v166) & 7;
  v172 = sub_A725A0(v167, v170, &v308, v168, (__int64)v34);
  v175 = sub_A725A0(*(_QWORD **)(a1 + 248), v171, v309, v173, v174);
  v176 = *(_BYTE *)(a3 + 4);
  if ( v172 == v175 )
  {
LABEL_130:
    v69 = v176 & 8;
    goto LABEL_70;
  }
  v177 = *(_BYTE *)(a4 + 4) & 2;
  v178 = (*(_BYTE *)(a4 + 4) & 1) == 0;
  if ( (v176 & 2) != 0 )
  {
    if ( !v177 )
    {
LABEL_129:
      if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
        goto LABEL_130;
      v205 = 0;
      goto LABEL_165;
    }
  }
  else if ( v177 )
  {
    if ( (v176 & 1) != 0 )
      goto LABEL_130;
    v178 = 0;
    v205 = sub_1BD41F0(a1, v170, v171, 0, &v307);
    goto LABEL_166;
  }
  if ( (v176 & 1) != 0 )
    goto LABEL_129;
  v205 = sub_1BD41F0(a1, v170, v171, 0, &v307);
  if ( v178 )
  {
LABEL_165:
    v279 = v205;
    v206 = sub_1BD41F0(a1, v171, v170, 0, &v307);
    v205 = v279;
    v178 = v206;
  }
LABEL_166:
  if ( v205 == v178 )
  {
    v176 = *(_BYTE *)(a3 + 4);
    goto LABEL_130;
  }
  return v205 == 0 ? 1 : -1;
}
