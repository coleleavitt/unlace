__int64 __fastcall sub_1F9F200(__int64 *a1, __int64 a2)
{
  __int64 v5; // rsi
  __int64 *v6; // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned int *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 *v12; // r12
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 *v15; // r12
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 *v18; // r12
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 *v26; // r13
  __int64 v27; // rsi
  __int64 *v28; // r12
  __int64 *v29; // r13
  __int64 v30; // rsi
  __int64 *v31; // r12
  __int64 *v32; // r13
  __int64 v33; // rsi
  __int64 *v34; // r12
  __int64 *v35; // r13
  __int64 v36; // rsi
  __int64 *v37; // r12
  __int64 v38; // r13
  __int64 v39; // rsi
  __int64 *v40; // r12
  __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // rsi
  __int64 *v44; // r13
  __int64 v45; // rsi
  __m128 v46; // rax
  __int64 v47; // r12
  __int64 v48; // r13
  __int64 *v49; // r12
  __int64 v50; // rsi
  unsigned __int64 v51; // r12
  __int64 *v52; // r12
  __int64 v53; // r13
  __int64 v54; // rsi
  __int64 *v55; // r12
  __int64 v56; // r13
  __int64 v57; // rsi
  __int64 *v58; // r12
  __int64 v59; // rax
  __int64 v60; // r13
  __int64 v61; // r14
  __int64 v62; // rsi
  __int64 *v63; // r14
  __int64 v64; // rsi
  __int64 *v65; // r12
  __int64 *v66; // r13
  __int64 v67; // rsi
  __int64 v68; // r12
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 *v72; // r13
  __int64 *v73; // r12
  __int64 v74; // rsi
  int v75; // edx
  int v76; // r14d
  int v77; // r12d
  int v78; // esi
  __int64 v79; // r13
  __int64 v80; // rax
  __int64 *v81; // r12
  __int64 v82; // r13
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // r12
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 *v88; // r12
  __int64 v89; // r13
  __int64 v90; // rsi
  int v91; // r14d
  int i; // r12d
  int v93; // esi
  __int64 v94; // r13
  __int64 v95; // rax
  __int64 *v96; // r12
  __int64 v97; // rax
  __int64 v98; // r13
  __int64 v99; // r14
  __int64 v100; // rsi
  __int64 *v101; // r14
  __int64 v102; // rsi
  __int64 *v103; // r12
  __int64 *v104; // r14
  __int64 v105; // rsi
  __int64 *v106; // r12
  __int64 *v107; // r13
  __int64 v108; // rsi
  __int64 *v109; // r12
  __int64 v110; // rax
  __int64 v111; // r13
  __int64 v112; // r14
  __int64 v113; // rsi
  __int64 *v114; // r14
  __int64 v115; // rsi
  __int64 *v116; // r12
  __int64 *v117; // r14
  __int64 v118; // rsi
  __int64 *v119; // r12
  __int64 *v120; // r13
  __int64 v121; // rsi
  unsigned int *v122; // r12
  __int64 v123; // r13
  __int64 v124; // rsi
  __int64 *v125; // r12
  __int64 v126; // r13
  __int64 v127; // rsi
  __int64 *v128; // r12
  __int64 v129; // rax
  __int64 v130; // r13
  __int64 v131; // rsi
  __int64 v132; // rcx
  __int64 *v133; // r13
  unsigned int v134; // edx
  __int64 v135; // rsi
  __int64 v136; // r14
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rax
  unsigned int *v141; // r12
  unsigned int *v142; // r13
  __int64 v143; // rsi
  __int64 v144; // rsi
  int v145; // esi
  unsigned int *v146; // r12
  unsigned int *v147; // r13
  __int64 v148; // rsi
  __int64 *v149; // r12
  __int64 *v150; // r13
  __int64 v151; // rsi
  __int64 v152; // r14
  __int64 v153; // rax
  __int64 *v154; // r12
  __int64 v155; // rax
  __int64 v156; // r13
  __int64 v157; // rsi
  __int64 v158; // rcx
  __int64 *v159; // r13
  unsigned int v160; // edx
  __int64 v161; // rsi
  __int64 v162; // r14
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rax
  unsigned int *v167; // r12
  unsigned int *v168; // r13
  __int64 v169; // rsi
  __int64 v170; // rsi
  int v171; // esi
  unsigned int *v172; // r12
  unsigned int *v173; // r13
  __int64 v174; // rsi
  __int64 *v175; // r12
  __int64 *v176; // r13
  __int64 v177; // rsi
  __int64 v178; // r14
  __int64 v179; // rax
  __int64 *v180; // r12
  __int64 v181; // rdx
  __int64 v182; // rax
  __int64 v183; // r13
  __int64 v184; // rsi
  __int64 *v185; // r13
  __int64 v186; // rsi
  __int64 *v187; // r12
  __int64 *v188; // r13
  __int64 v189; // rsi
  __int64 *v190; // r12
  __int64 *v191; // r13
  __int64 v192; // rsi
  __int64 *v193; // r12
  __int64 *v194; // r13
  __int64 v195; // rsi
  __int64 *v196; // r12
  __int64 *v197; // r13
  __int64 v198; // rsi
  __int64 *v199; // r12
  __int64 v200; // rax
  __int64 v201; // r13
  __int64 v202; // rsi
  __int64 v203; // rcx
  __int64 *v204; // r13
  unsigned int v205; // edx
  __int64 v206; // rsi
  __int64 v207; // r14
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rcx
  __int64 v211; // rax
  unsigned int *v212; // r12
  unsigned int *v213; // r13
  __int64 v214; // rsi
  __int64 v215; // rsi
  int v216; // esi
  unsigned int *v217; // r12
  unsigned int *v218; // r13
  __int64 v219; // rsi
  __int64 *v220; // r12
  __int64 *v221; // r13
  __int64 v222; // rsi
  __int64 v223; // r14
  __int64 v224; // rax
  int v225; // r13d
  int v226; // r12d
  int v227; // edx
  __int64 *v228; // r12
  __int64 v229; // r13
  __int64 v230; // rsi
  __int64 *v231; // r12
  __int64 v232; // r13
  __int64 v233; // rsi
  int v234; // r14d
  unsigned int j; // r12d
  unsigned int v236; // esi
  __int64 v237; // r13
  __int64 v238; // rax
  __int64 *v239; // r12
  __int64 v240; // r13
  __int64 v241; // rsi
  __int64 *v242; // r12
  __int64 v243; // rdx
  __int64 v244; // rax
  __int64 v245; // r13
  __int64 v246; // rsi
  __int64 *v247; // r13
  __int64 v248; // rsi
  __int64 *v249; // r12
  __int64 *v250; // r13
  __int64 v251; // rsi
  __int64 *v252; // r12
  __int64 *v253; // r13
  __int64 v254; // rsi
  __int64 *v255; // r12
  __int64 *v256; // r13
  __int64 v257; // rsi
  __int64 *v258; // r12
  __int64 v259; // r13
  __int64 v260; // rsi
  __m128 v261; // [rsp+0h] [rbp-48h] BYREF
  int v262; // [rsp+10h] [rbp-38h]
  int v263; // [rsp+14h] [rbp-34h]

  sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 8));
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
      v9 = (unsigned int *)(a2 + 20);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v10 = a2 + 20 + 4LL * *(unsigned int *)(a2 + 16);
      if ( a2 + 20 != v10 )
      {
        do
        {
          v11 = *v9++;
          sub_9B9C90(*(_QWORD *)(*a1 + 16), v11);
        }
        while ( (unsigned int *)v10 != v9 );
      }
      goto LABEL_4;
    case 4:
      v15 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(*a1 + 16));
      v16 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v16 != a2 + 24 )
      {
        do
        {
          v17 = *v15++;
          sub_183F100(*a1 + 24, v17);
        }
        while ( (__int64 *)v16 != v15 );
      }
      goto LABEL_4;
    case 5:
    case 8:
    case 0xF:
    case 0x17:
    case 0x19:
    case 0x2A:
    case 0x2B:
    case 0x3B:
    case 0x4F:
    case 0x59:
    case 0x60:
      goto LABEL_6;
    case 6:
      v81 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(*a1 + 16));
      v82 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v82 != a2 + 24 )
      {
        do
        {
          v83 = *v81++;
          sub_183F100(*a1 + 24, v83);
        }
        while ( (__int64 *)v82 != v81 );
        v81 = (__int64 *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24);
      }
      sub_183F100(*a1 + 24, *v81);
      goto LABEL_4;
    case 7:
      v52 = (__int64 *)(a2 + 72);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 52));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 56));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 40), *(_QWORD *)(*a1 + 16));
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 24));
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 32));
      v53 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 72;
      if ( v53 != a2 + 72 )
      {
        do
        {
          v54 = *v52++;
          sub_183F100(*a1 + 24, v54);
        }
        while ( (__int64 *)v53 != v52 );
      }
      goto LABEL_4;
    case 0xA:
    case 0xB:
    case 0xC:
    case 0x14:
    case 0x53:
    case 0x5D:
      v5 = *(unsigned int *)(a2 + 16);
      goto LABEL_9;
    case 0x11:
      v122 = (unsigned int *)(a2 + 20);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v123 = a2 + 20 + 4LL * *(unsigned int *)(a2 + 16);
      if ( a2 + 20 != v123 )
      {
        do
        {
          v124 = *v122++;
          sub_9B9C90(*(_QWORD *)(*a1 + 16), v124);
        }
        while ( (unsigned int *)v123 != v122 );
      }
      goto LABEL_4;
    case 0x12:
      v109 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v110 = *(unsigned int *)(a2 + 16);
      v111 = v110;
      v112 = a2 + 8 * v110 + 24;
      if ( v112 != a2 + 24 )
      {
        do
        {
          v113 = *v109++;
          sub_183F100(*a1 + 24, v113);
        }
        while ( (__int64 *)v112 != v109 );
        v110 = *(unsigned int *)(a2 + 16);
        v111 = v110;
        v109 = (__int64 *)(a2 + 8 * v110 + 24);
      }
      v114 = &v109[v111];
      if ( &v109[v111] != v109 )
      {
        do
        {
          v115 = *v109++;
          sub_183F100(*a1 + 24, v115);
        }
        while ( v114 != v109 );
        v110 = *(unsigned int *)(a2 + 16);
        v111 = v110;
      }
      v116 = (__int64 *)(a2 + 16 * v110 + 24);
      v117 = &v116[v111];
      if ( v116 != &v116[v111] )
      {
        do
        {
          v118 = *v116++;
          sub_183F100(*a1 + 24, v118);
        }
        while ( v117 != v116 );
        v110 = *(unsigned int *)(a2 + 16);
        v111 = v110;
      }
      v119 = (__int64 *)(a2 + 8 * (3 * v110 + 3));
      v120 = &v119[v111];
      while ( v120 != v119 )
      {
        v121 = *v119++;
        sub_183F100(*a1 + 24, v121);
      }
      goto LABEL_4;
    case 0x13:
      v96 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v97 = *(unsigned int *)(a2 + 16);
      v98 = v97;
      v99 = a2 + 8 * v97 + 24;
      if ( v99 != a2 + 24 )
      {
        do
        {
          v100 = *v96++;
          sub_183F100(*a1 + 24, v100);
        }
        while ( (__int64 *)v99 != v96 );
        v97 = *(unsigned int *)(a2 + 16);
        v98 = v97;
        v96 = (__int64 *)(a2 + 8 * v97 + 24);
      }
      v101 = &v96[v98];
      if ( &v96[v98] != v96 )
      {
        do
        {
          v102 = *v96++;
          sub_183F100(*a1 + 24, v102);
        }
        while ( v101 != v96 );
        v97 = *(unsigned int *)(a2 + 16);
        v98 = v97;
      }
      v103 = (__int64 *)(a2 + 16 * v97 + 24);
      v104 = &v103[v98];
      if ( v103 != &v103[v98] )
      {
        do
        {
          v105 = *v103++;
          sub_183F100(*a1 + 24, v105);
        }
        while ( v104 != v103 );
        v97 = *(unsigned int *)(a2 + 16);
        v98 = v97;
      }
      v106 = (__int64 *)(a2 + 8 * (3 * v97 + 3));
      v107 = &v106[v98];
      while ( v107 != v106 )
      {
        v108 = *v106++;
        sub_183F100(*a1 + 24, v108);
      }
      goto LABEL_4;
    case 0x15:
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 24));
      v84 = *(unsigned int *)(a2 + 16);
      goto LABEL_94;
    case 0x16:
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 36));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v85 = *a1;
      v86 = sub_EB5A20(a2);
      v87 = v85 + 24;
      v88 = (__int64 *)(a2 + 40);
      sub_183F100(v87, v86);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 20));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 24), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 28), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 32), *(_QWORD *)(*a1 + 16));
      v89 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v89 != a2 + 40 )
      {
        do
        {
          v90 = *v88++;
          sub_183F100(*a1 + 24, v90);
        }
        while ( (__int64 *)v89 != v88 );
      }
      v91 = *(_DWORD *)(a2 + 36);
      if ( v91 )
      {
        for ( i = 0; i != v91; ++i )
        {
          v93 = i;
          v94 = *a1;
          v95 = sub_EB5A00(a2, v93);
          sub_183F100(v94 + 24, v95);
        }
      }
      goto LABEL_4;
    case 0x18:
    case 0x6D:
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 24));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 16), *(_QWORD *)(*a1 + 16));
      goto LABEL_4;
    case 0x1A:
    case 0x28:
    case 0x46:
      sub_1F6F3D0(a1, (__int64 *)(a2 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 32));
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 40));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 36), *(_QWORD *)(*a1 + 16));
      goto LABEL_11;
    case 0x1C:
      sub_1F6F3D0(a1, (__int64 *)(a2 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 32));
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 48));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 28), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 36), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 40), *(_QWORD *)(*a1 + 16));
      goto LABEL_4;
    case 0x1D:
      v231 = (__int64 *)(a2 + 40);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 32));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 20));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 24), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 28), *(_QWORD *)(*a1 + 16));
      v232 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v232 != a2 + 40 )
      {
        do
        {
          v233 = *v231++;
          sub_183F100(*a1 + 24, v233);
        }
        while ( (__int64 *)v232 != v231 );
      }
      v234 = *(_DWORD *)(a2 + 32);
      if ( v234 )
      {
        for ( j = 0; j != v234; ++j )
        {
          v236 = j;
          v237 = *a1;
          v238 = sub_EB5C40(a2, v236);
          sub_183F100(v237 + 24, v238);
        }
      }
      goto LABEL_4;
    case 0x20:
      v55 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v56 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v56 != a2 + 24 )
      {
        do
        {
          v57 = *v55++;
          sub_183F100(*a1 + 24, v57);
        }
        while ( (__int64 *)v56 != v55 );
      }
      goto LABEL_4;
    case 0x21:
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 16), *(_QWORD *)(*a1 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 12));
      goto LABEL_4;
    case 0x22:
    case 0x23:
    case 0x42:
    case 0x45:
    case 0x4B:
      sub_1F6F3D0(a1, (__int64 *)(a2 + 24));
LABEL_6:
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 16));
      goto LABEL_7;
    case 0x24:
      v58 = (__int64 *)(a2 + 40);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F3D0(a1, (__int64 *)(a2 + 24));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v59 = *(unsigned int *)(a2 + 16);
      v60 = v59;
      v61 = a2 + 8 * v59 + 40;
      if ( v61 != a2 + 40 )
      {
        do
        {
          v62 = *v58++;
          sub_183F100(*a1 + 24, v62);
        }
        while ( (__int64 *)v61 != v58 );
        v59 = *(unsigned int *)(a2 + 16);
        v60 = v59;
        v58 = (__int64 *)(a2 + 8 * v59 + 40);
      }
      v63 = &v58[v60];
      if ( &v58[v60] != v58 )
      {
        do
        {
          v64 = *v58++;
          sub_183F100(*a1 + 24, v64);
        }
        while ( v63 != v58 );
        v59 = *(unsigned int *)(a2 + 16);
        v60 = v59;
      }
      v65 = (__int64 *)(a2 + 16 * v59 + 40);
      v66 = &v65[v60];
      while ( v66 != v65 )
      {
        v67 = *v65++;
        sub_183F100(*a1 + 24, v67);
      }
      goto LABEL_4;
    case 0x25:
      v125 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v126 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v126 != a2 + 24 )
      {
        do
        {
          v127 = *v125++;
          sub_183F100(*a1 + 24, v127);
        }
        while ( (__int64 *)v126 != v125 );
      }
      goto LABEL_4;
    case 0x26:
      sub_1F9E6D0((__int64 **)a1, a2);
      goto LABEL_4;
    case 0x29:
      v128 = (__int64 *)(a2 + 80);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 20));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 24));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 28));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v129 = *(unsigned int *)(a2 + 16);
      v130 = a2 + 8 * v129 + 80;
      if ( v130 != a2 + 80 )
      {
        do
        {
          v131 = *v128++;
          sub_183F100(*a1 + 24, v131);
        }
        while ( (__int64 *)v130 != v128 );
        v129 = *(unsigned int *)(a2 + 16);
        v128 = (__int64 *)(a2 + 8 * v129 + 80);
      }
      v132 = *(unsigned int *)(a2 + 20);
      v133 = &v128[v132];
      v134 = *(_DWORD *)(a2 + 20);
      if ( v133 != v128 )
      {
        do
        {
          v135 = *v128++;
          v136 = *(_QWORD *)(*a1 + 16);
          v137 = sub_1F92240(*(_QWORD *)(*a1 + 8), v135);
          sub_9B9C90(v136, v137);
        }
        while ( v133 != v128 );
        v132 = *(unsigned int *)(a2 + 20);
        v129 = *(unsigned int *)(a2 + 16);
        v134 = *(_DWORD *)(a2 + 20);
      }
      v138 = v132 + v129;
      v139 = v132;
      v140 = 8 * v138;
      v141 = (unsigned int *)(a2 + v140 + 80);
      v142 = &v141[v139];
      if ( v141 != &v141[v139] )
      {
        do
        {
          v143 = *v141++;
          sub_9B9C90(*(_QWORD *)(*a1 + 16), v143);
        }
        while ( v142 != v141 );
        v144 = *(unsigned int *)(a2 + 20);
        v134 = *(_DWORD *)(a2 + 20);
        v139 = v144;
        v140 = 8 * (v144 + *(unsigned int *)(a2 + 16));
      }
      v145 = *(_DWORD *)(a2 + 24);
      v146 = (unsigned int *)(a2 + v139 * 4 + v140 + 80);
      v147 = &v146[v145];
      if ( v146 != v147 )
      {
        do
        {
          v148 = *v146++;
          sub_9B9C90(*(_QWORD *)(*a1 + 16), v148);
        }
        while ( v147 != v146 );
        v145 = *(_DWORD *)(a2 + 24);
        v134 = *(_DWORD *)(a2 + 20);
        v140 = 8 * (v134 + (unsigned __int64)*(unsigned int *)(a2 + 16));
      }
      v149 = (__int64 *)((a2 + v140 + 4LL * (v145 + v134) + 80 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      v150 = &v149[2 * *(unsigned int *)(a2 + 28)];
      while ( v150 != v149 )
      {
        v151 = *v149;
        v149 += 2;
        sub_183F100(*a1 + 24, v151 & 0xFFFFFFFFFFFFFFFCLL);
        v152 = *(_QWORD *)(*a1 + 16);
        v153 = sub_1F92240(*(_QWORD *)(*a1 + 8), *(v149 - 1));
        sub_9B9C90(v152, v153);
      }
      goto LABEL_4;
    case 0x2C:
      sub_1F6F3D0(a1, (__int64 *)(a2 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(int *)(a2 + 44));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 48), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 40), *(_QWORD *)(*a1 + 16));
      goto LABEL_96;
    case 0x2D:
      v180 = (__int64 *)(a2 + 96);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F3D0(a1, (__int64 *)(a2 + 24));
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 40));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 48), *(_QWORD *)(*a1 + 16));
      sub_1F9A420((__int64 *)*a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64));
      sub_1F9E200(*a1, a2 + 72);
      v181 = *(unsigned int *)(a2 + 16);
      v182 = v181;
      v183 = a2 + 8 * v181 + 96;
      if ( v183 != a2 + 96 )
      {
        do
        {
          v184 = *v180++;
          sub_183F100(*a1 + 24, v184);
        }
        while ( (__int64 *)v183 != v180 );
        v181 = *(unsigned int *)(a2 + 16);
        v182 = v181;
        v180 = (__int64 *)(a2 + 8 * v181 + 96);
      }
      v185 = &v180[v182];
      if ( &v180[v182] != v180 )
      {
        do
        {
          v186 = *v180++;
          sub_183F100(*a1 + 24, v186);
        }
        while ( v185 != v180 );
        v181 = *(unsigned int *)(a2 + 16);
        v182 = v181;
      }
      v187 = (__int64 *)(a2 + 16 * v181 + 96);
      v188 = &v187[v182];
      if ( v187 != &v187[v182] )
      {
        do
        {
          v189 = *v187++;
          sub_183F100(*a1 + 24, v189);
        }
        while ( v188 != v187 );
        v181 = *(unsigned int *)(a2 + 16);
        v182 = v181;
      }
      v190 = (__int64 *)(a2 + 24 * v181 + 96);
      v191 = &v190[v182];
      if ( v190 != &v190[v182] )
      {
        do
        {
          v192 = *v190++;
          sub_183F100(*a1 + 24, v192);
        }
        while ( v191 != v190 );
        v181 = *(unsigned int *)(a2 + 16);
        v182 = v181;
      }
      v193 = (__int64 *)(a2 + 32 * v181 + 96);
      v194 = &v193[v182];
      if ( v193 != &v193[v182] )
      {
        do
        {
          v195 = *v193++;
          sub_183F100(*a1 + 24, v195);
        }
        while ( v194 != v193 );
        v181 = *(unsigned int *)(a2 + 16);
        v182 = v181;
      }
      v196 = (__int64 *)(a2 + 40 * v181 + 96);
      v197 = &v196[v182];
      while ( v197 != v196 )
      {
        v198 = *v196++;
        sub_183F100(*a1 + 24, v198);
      }
      goto LABEL_4;
    case 0x2F:
      v6 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v7 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v7 != a2 + 24 )
      {
        do
        {
          v8 = *v6++;
          sub_183F100(*a1 + 24, v8);
        }
        while ( (__int64 *)v7 != v6 );
      }
      goto LABEL_4;
    case 0x31:
      v12 = (__int64 *)(a2 + 32);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      v13 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 32;
      if ( v13 != a2 + 32 )
      {
        do
        {
          v14 = *v12++;
          sub_183F100(*a1 + 24, v14);
        }
        while ( (__int64 *)v13 != v12 );
      }
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned __int8 *)(a2 + 24));
      v5 = *(unsigned __int8 *)(a2 + 25);
LABEL_9:
      sub_9B9C90(*(_QWORD *)(*a1 + 16), v5);
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(*a1 + 16));
      goto LABEL_4;
    case 0x33:
      v199 = (__int64 *)(a2 + 80);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 20));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 24));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 28));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v200 = *(unsigned int *)(a2 + 16);
      v201 = a2 + 8 * v200 + 80;
      if ( v201 != a2 + 80 )
      {
        do
        {
          v202 = *v199++;
          sub_183F100(*a1 + 24, v202);
        }
        while ( (__int64 *)v201 != v199 );
        v200 = *(unsigned int *)(a2 + 16);
        v199 = (__int64 *)(a2 + 8 * v200 + 80);
      }
      v203 = *(unsigned int *)(a2 + 20);
      v204 = &v199[v203];
      v205 = *(_DWORD *)(a2 + 20);
      if ( v204 != v199 )
      {
        do
        {
          v206 = *v199++;
          v207 = *(_QWORD *)(*a1 + 16);
          v208 = sub_1F92240(*(_QWORD *)(*a1 + 8), v206);
          sub_9B9C90(v207, v208);
        }
        while ( v204 != v199 );
        v203 = *(unsigned int *)(a2 + 20);
        v200 = *(unsigned int *)(a2 + 16);
        v205 = *(_DWORD *)(a2 + 20);
      }
      v209 = v203 + v200;
      v210 = v203;
      v211 = 8 * v209;
      v212 = (unsigned int *)(a2 + v211 + 80);
      v213 = &v212[v210];
      if ( v212 != &v212[v210] )
      {
        do
        {
          v214 = *v212++;
          sub_9B9C90(*(_QWORD *)(*a1 + 16), v214);
        }
        while ( v213 != v212 );
        v215 = *(unsigned int *)(a2 + 20);
        v205 = *(_DWORD *)(a2 + 20);
        v210 = v215;
        v211 = 8 * (v215 + *(unsigned int *)(a2 + 16));
      }
      v216 = *(_DWORD *)(a2 + 24);
      v217 = (unsigned int *)(a2 + v210 * 4 + v211 + 80);
      v218 = &v217[v216];
      if ( v217 != v218 )
      {
        do
        {
          v219 = *v217++;
          sub_9B9C90(*(_QWORD *)(*a1 + 16), v219);
        }
        while ( v218 != v217 );
        v216 = *(_DWORD *)(a2 + 24);
        v205 = *(_DWORD *)(a2 + 20);
        v211 = 8 * (v205 + (unsigned __int64)*(unsigned int *)(a2 + 16));
      }
      v220 = (__int64 *)((a2 + v211 + 4LL * (v216 + v205) + 80 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      v221 = &v220[2 * *(unsigned int *)(a2 + 28)];
      while ( v221 != v220 )
      {
        v222 = *v220;
        v220 += 2;
        sub_183F100(*a1 + 24, v222 & 0xFFFFFFFFFFFFFFFCLL);
        v223 = *(_QWORD *)(*a1 + 16);
        v224 = sub_1F92240(*(_QWORD *)(*a1 + 8), *(v220 - 1));
        sub_9B9C90(v223, v224);
      }
      goto LABEL_4;
    case 0x34:
      v242 = (__int64 *)(a2 + 64);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F3D0(a1, (__int64 *)(a2 + 24));
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 40));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 48));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 52), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 56), *(_QWORD *)(*a1 + 16));
      v243 = *(unsigned int *)(a2 + 16);
      v244 = v243;
      v245 = a2 + 8 * v243 + 64;
      if ( v245 != a2 + 64 )
      {
        do
        {
          v246 = *v242++;
          sub_183F100(*a1 + 24, v246);
        }
        while ( (__int64 *)v245 != v242 );
        v243 = *(unsigned int *)(a2 + 16);
        v244 = v243;
        v242 = (__int64 *)(a2 + 8 * v243 + 64);
      }
      v247 = &v242[v244];
      if ( &v242[v244] != v242 )
      {
        do
        {
          v248 = *v242++;
          sub_183F100(*a1 + 24, v248);
        }
        while ( v247 != v242 );
        v243 = *(unsigned int *)(a2 + 16);
        v244 = v243;
      }
      v249 = (__int64 *)(a2 + 16 * v243 + 64);
      v250 = &v249[v244];
      if ( v249 != &v249[v244] )
      {
        do
        {
          v251 = *v249++;
          sub_183F100(*a1 + 24, v251);
        }
        while ( v250 != v249 );
        v243 = *(unsigned int *)(a2 + 16);
        v244 = v243;
      }
      v252 = (__int64 *)(a2 + 24 * v243 + 64);
      v253 = &v252[v244];
      if ( v252 != &v252[v244] )
      {
        do
        {
          v254 = *v252++;
          sub_183F100(*a1 + 24, v254);
        }
        while ( v253 != v252 );
        v243 = *(unsigned int *)(a2 + 16);
        v244 = v243;
      }
      v255 = (__int64 *)(a2 + 32 * v243 + 64);
      v256 = &v255[v244];
      while ( v256 != v255 )
      {
        v257 = *v255++;
        sub_183F100(*a1 + 24, v257);
      }
      goto LABEL_4;
    case 0x35:
      sub_1F6FEA0(a1, a2);
      goto LABEL_4;
    case 0x37:
      sub_1F9EA60((__int64 **)a1, a2);
      goto LABEL_4;
    case 0x43:
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v46.m128_u64[0] = a2 + 24;
      v47 = 8LL * *(unsigned int *)(a2 + 16);
      v48 = a2 + v47 + 24;
      if ( v48 != a2 + 24 )
      {
        v49 = (__int64 *)(a2 + 24);
        do
        {
          v50 = *v49++;
          sub_183F100(*a1 + 24, v50);
        }
        while ( (__int64 *)v48 != v49 );
        v47 = 8LL * *(unsigned int *)(a2 + 16);
        v46.m128_u64[0] = a2 + v47 + 24;
      }
      v261 = (__m128)v46.m128_u64[0];
      v51 = v46.m128_u64[0] + v47;
      v46.m128_u64[1] = 0;
      break;
    case 0x47:
      v239 = (__int64 *)(a2 + 40);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F3D0(a1, (__int64 *)(a2 + 24));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 36), *(_QWORD *)(*a1 + 16));
      v240 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v240 != a2 + 40 )
      {
        do
        {
          v241 = *v239++;
          sub_183F100(*a1 + 24, v241);
        }
        while ( (__int64 *)v240 != v239 );
      }
      goto LABEL_4;
    case 0x48:
      sub_1F6F3D0(a1, (__int64 *)(a2 + 24));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 36));
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 40), *(_QWORD *)(*a1 + 16));
      goto LABEL_7;
    case 0x49:
      sub_1F9DE20((__int64 *)*a1, *(__int64 **)(a2 + 16), *(unsigned int *)(a2 + 24));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)a2, *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 4), *(_QWORD *)(*a1 + 16));
      goto LABEL_4;
    case 0x4C:
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      v84 = *(unsigned int *)(a2 + 24);
LABEL_94:
      sub_9B9C90(*(_QWORD *)(*a1 + 16), v84);
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(*a1 + 16));
      goto LABEL_11;
    case 0x4D:
      v68 = *a1;
      sub_EB5680(a2);
      sub_9B9C90(*(_QWORD *)(v68 + 16), v69);
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 16));
      v70 = sub_EB5680(a2);
      v72 = (__int64 *)(v70 + 8 * v71);
      v73 = (__int64 *)v70;
      if ( (__int64 *)v70 != v72 )
      {
        do
        {
          v74 = *v73++;
          sub_183F100(*a1 + 24, v74);
        }
        while ( v72 != v73 );
      }
      sub_EB5680(a2);
      v76 = v75;
      if ( v75 )
      {
        v77 = 0;
        do
        {
          v78 = v77;
          v79 = *a1;
          ++v77;
          v80 = sub_EB56A0(a2, v78);
          sub_183F100(v79 + 24, v80);
        }
        while ( v76 != v77 );
      }
      goto LABEL_7;
    case 0x50:
      v258 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      v259 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
      if ( a2 + 24 != v259 )
      {
        do
        {
          v260 = *v258++;
          sub_183F100(*a1 + 24, v260);
        }
        while ( (__int64 *)v259 != v258 );
      }
      goto LABEL_7;
    case 0x51:
      sub_1F6F3D0(a1, (__int64 *)(a2 + 16));
LABEL_96:
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 32));
LABEL_11:
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 28), *(_QWORD *)(*a1 + 16));
      goto LABEL_4;
    case 0x52:
      v40 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v41 = *(unsigned int *)(a2 + 16);
      v42 = a2 + v41 * 8 + 24;
      if ( v42 != a2 + 24 )
      {
        do
        {
          v43 = *v40++;
          sub_183F100(*a1 + 24, v43);
        }
        while ( (__int64 *)v42 != v40 );
        v41 = *(unsigned int *)(a2 + 16);
        v40 = (__int64 *)(a2 + v41 * 8 + 24);
      }
      v44 = &v40[v41];
      while ( v44 != v40 )
      {
        v45 = *v40++;
        sub_183F100(*a1 + 24, v45);
      }
      goto LABEL_4;
    case 0x55:
      sub_1F9E240(a1, a2);
      goto LABEL_4;
    case 0x5A:
      sub_1F6F3D0(a1, (__int64 *)(a2 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 32));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 36));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 40));
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 64));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 28), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 44), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 48), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 52), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 56), *(_QWORD *)(*a1 + 16));
      goto LABEL_4;
    case 0x5E:
      v228 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v229 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v229 != a2 + 24 )
      {
        do
        {
          v230 = *v228++;
          sub_183F100(*a1 + 24, v230);
        }
        while ( (__int64 *)v229 != v228 );
      }
      goto LABEL_4;
    case 0x61:
      v18 = (__int64 *)(a2 + 24);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      v19 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
      if ( a2 + 24 != v19 )
      {
        do
        {
          v20 = *v18++;
          sub_183F100(*a1 + 24, v20);
        }
        while ( (__int64 *)v19 != v18 );
      }
LABEL_7:
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      goto LABEL_4;
    case 0x62:
      v21 = (__int64 *)(a2 + 96);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F3D0(a1, (__int64 *)(a2 + 24));
      sub_183F100(*a1 + 24, *(_QWORD *)(a2 + 40));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 48), *(_QWORD *)(*a1 + 16));
      sub_1F9A420((__int64 *)*a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64));
      sub_1F9E200(*a1, a2 + 72);
      v22 = *(unsigned int *)(a2 + 16);
      v23 = v22;
      v24 = a2 + 8 * v22 + 96;
      if ( v24 != a2 + 96 )
      {
        do
        {
          v25 = *v21++;
          sub_183F100(*a1 + 24, v25);
        }
        while ( (__int64 *)v24 != v21 );
        v22 = *(unsigned int *)(a2 + 16);
        v23 = v22;
        v21 = (__int64 *)(a2 + 8 * v22 + 96);
      }
      v26 = &v21[v23];
      if ( &v21[v23] != v21 )
      {
        do
        {
          v27 = *v21++;
          sub_183F100(*a1 + 24, v27);
        }
        while ( v26 != v21 );
        v22 = *(unsigned int *)(a2 + 16);
        v23 = v22;
      }
      v28 = (__int64 *)(a2 + 16 * v22 + 96);
      v29 = &v28[v23];
      if ( v28 != &v28[v23] )
      {
        do
        {
          v30 = *v28++;
          sub_183F100(*a1 + 24, v30);
        }
        while ( v29 != v28 );
        v22 = *(unsigned int *)(a2 + 16);
        v23 = v22;
      }
      v31 = (__int64 *)(a2 + 24 * v22 + 96);
      v32 = &v31[v23];
      if ( v31 != &v31[v23] )
      {
        do
        {
          v33 = *v31++;
          sub_183F100(*a1 + 24, v33);
        }
        while ( v32 != v31 );
        v22 = *(unsigned int *)(a2 + 16);
        v23 = v22;
      }
      v34 = (__int64 *)(a2 + 32 * v22 + 96);
      v35 = &v34[v23];
      while ( v35 != v34 )
      {
        v36 = *v34++;
        sub_183F100(*a1 + 24, v36);
      }
      goto LABEL_4;
    case 0x63:
      v37 = (__int64 *)(a2 + 40);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F3D0(a1, (__int64 *)(a2 + 24));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 36), *(_QWORD *)(*a1 + 16));
      v38 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v38 != a2 + 40 )
      {
        do
        {
          v39 = *v37++;
          sub_183F100(*a1 + 24, v39);
        }
        while ( (__int64 *)v38 != v37 );
      }
      goto LABEL_4;
    case 0x66:
      sub_1F9EE70((__int64 **)a1, a2);
      goto LABEL_4;
    case 0x6C:
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned __int8 *)(a2 + 12));
      if ( *(_BYTE *)(a2 + 12) )
      {
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 16), *(_QWORD *)(*a1 + 16));
        sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 20), *(_QWORD *)(*a1 + 16));
        sub_9B9C90(
          *(_QWORD *)(*a1 + 16),
          *(unsigned int *)(a2 + (-(__int64)(*(_BYTE *)(a2 + 12) == 0) & 0xFFFFFFFFFFFFFFF8LL) + 24));
      }
      goto LABEL_4;
    case 0x6E:
      v154 = (__int64 *)(a2 + 80);
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 20));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 24));
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 28));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v155 = *(unsigned int *)(a2 + 16);
      v156 = a2 + 8 * v155 + 80;
      if ( v156 != a2 + 80 )
      {
        do
        {
          v157 = *v154++;
          sub_183F100(*a1 + 24, v157);
        }
        while ( (__int64 *)v156 != v154 );
        v155 = *(unsigned int *)(a2 + 16);
        v154 = (__int64 *)(a2 + 8 * v155 + 80);
      }
      v158 = *(unsigned int *)(a2 + 20);
      v159 = &v154[v158];
      v160 = *(_DWORD *)(a2 + 20);
      if ( v159 != v154 )
      {
        do
        {
          v161 = *v154++;
          v162 = *(_QWORD *)(*a1 + 16);
          v163 = sub_1F92240(*(_QWORD *)(*a1 + 8), v161);
          sub_9B9C90(v162, v163);
        }
        while ( v159 != v154 );
        v158 = *(unsigned int *)(a2 + 20);
        v155 = *(unsigned int *)(a2 + 16);
        v160 = *(_DWORD *)(a2 + 20);
      }
      v164 = v158 + v155;
      v165 = v158;
      v166 = 8 * v164;
      v167 = (unsigned int *)(a2 + v166 + 80);
      v168 = &v167[v165];
      if ( v167 != &v167[v165] )
      {
        do
        {
          v169 = *v167++;
          sub_9B9C90(*(_QWORD *)(*a1 + 16), v169);
        }
        while ( v168 != v167 );
        v170 = *(unsigned int *)(a2 + 20);
        v160 = *(_DWORD *)(a2 + 20);
        v165 = v170;
        v166 = 8 * (v170 + *(unsigned int *)(a2 + 16));
      }
      v171 = *(_DWORD *)(a2 + 24);
      v172 = (unsigned int *)(a2 + v165 * 4 + v166 + 80);
      v173 = &v172[v171];
      if ( v172 != v173 )
      {
        do
        {
          v174 = *v172++;
          sub_9B9C90(*(_QWORD *)(*a1 + 16), v174);
        }
        while ( v173 != v172 );
        v171 = *(_DWORD *)(a2 + 24);
        v160 = *(_DWORD *)(a2 + 20);
        v166 = 8 * (v160 + (unsigned __int64)*(unsigned int *)(a2 + 16));
      }
      v175 = (__int64 *)((a2 + v166 + 4LL * (v171 + v160) + 80 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      v176 = &v175[2 * *(unsigned int *)(a2 + 28)];
      while ( v176 != v175 )
      {
        v177 = *v175;
        v175 += 2;
        sub_183F100(*a1 + 24, v177 & 0xFFFFFFFFFFFFFFFCLL);
        v178 = *(_QWORD *)(*a1 + 16);
        v179 = sub_1F92240(*(_QWORD *)(*a1 + 8), *(v175 - 1));
        sub_9B9C90(v178, v179);
      }
      goto LABEL_4;
    case 0x6F:
      sub_1F961C0(a1, a2);
      goto LABEL_4;
    case 0x70:
      sub_9B9C90(*(_QWORD *)(*a1 + 16), *(unsigned int *)(a2 + 16));
      sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(*a1 + 16));
      v225 = *(_DWORD *)(a2 + 16);
      if ( v225 )
      {
        v226 = 0;
        do
        {
          v227 = v226++;
          sub_EB5BF0(&v261, a2, v227);
          sub_183F100(*a1 + 24, v261.m128_i64[0]);
          sub_183F100(*a1 + 24, v261.m128_i64[1]);
          sub_1F6F570(*(_QWORD **)(*a1 + 8), v262, *(_QWORD *)(*a1 + 16));
          sub_1F6F570(*(_QWORD **)(*a1 + 8), v263, *(_QWORD *)(*a1 + 16));
        }
        while ( v225 != v226 );
      }
      goto LABEL_4;
    default:
      goto LABEL_4;
  }
LABEL_59:
  if ( v51 == v46.m128_u64[0] )
    goto LABEL_64;
  do
  {
    do
    {
      if ( (v46.m128_i8[8] & 3) != 0 )
        v46.m128_u64[0] = sub_EF2B30((__int64)&v261);
      sub_183F100(*a1 + 24, *(_QWORD *)v46.m128_u64[0]);
      v46.m128_u64[1] = v261.m128_u64[1];
      if ( (v261.m128_i8[8] & 3) != 0 )
      {
        if ( (v261.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960((__int64)&v261);
        else
          sub_EF2750((unsigned __int64 *)&v261, 1);
        v46 = v261;
        goto LABEL_59;
      }
      v46.m128_u64[0] = v261.m128_u64[0] + 8;
      v261.m128_u64[0] = v46.m128_u64[0];
    }
    while ( v51 != v46.m128_u64[0] );
LABEL_64:
    ;
  }
  while ( v46.m128_u64[1] );
LABEL_4:
  sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)a2, *(_QWORD *)(*a1 + 16));
  return sub_1F6F570(*(_QWORD **)(*a1 + 8), *(_DWORD *)(a2 + 4), *(_QWORD *)(*a1 + 16));
}
