__int64 __fastcall sub_A0E50(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r13d
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rbx
  bool v7; // zf
  size_t v8; // rsi
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  _BYTE *v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  int v27; // edi
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rdi
  int v50; // ecx
  unsigned int v51; // kr00_4
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  char v72; // dl
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // eax
  char v88; // dl
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // ecx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rdx
  int v98; // ecx
  __int64 v99; // rax
  __int64 v100; // r10
  __int64 v101; // rsi
  size_t v102; // r9
  unsigned __int64 v103; // rdx
  unsigned int v104; // r14d
  size_t v105; // r12
  size_t v106; // r12
  int v107; // ebx
  unsigned __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rdx
  int v120; // eax
  char v121; // dl
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rdx
  size_t v126; // rdx
  unsigned __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  unsigned __int64 v131; // rdx
  unsigned int v132; // edx
  unsigned __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rcx
  unsigned __int64 v137; // rdx
  unsigned int v138; // edx
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rax
  int v145; // eax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rcx
  __int64 v168; // rsi
  int v169; // eax
  unsigned __int8 *v170; // rax
  unsigned __int8 v171; // di
  __int64 v172; // rdx
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // rcx
  int v179; // eax
  unsigned int v180; // edx
  _BYTE *v181; // rax
  unsigned int v182; // eax
  __int64 v183; // rdx
  __int64 v184; // rcx
  unsigned __int8 v185; // al
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // rax
  __int64 v191; // rdi
  int v192; // edx
  int v194; // [rsp+10h] [rbp-48h]
  size_t v195; // [rsp+10h] [rbp-48h]
  unsigned __int64 v196; // [rsp+18h] [rbp-40h]

  v2 = -2;
  if ( !a1 || !*(_QWORD *)(a1 + 64) || !*(_QWORD *)(a1 + 72) )
    return v2;
  v2 = sub_A0C30(a1);
  if ( v2 || a2 > 5 )
    return (unsigned int)-2;
  v4 = *(_QWORD *)(a1 + 56);
  if ( !*(_QWORD *)(a1 + 24)
    || *(_DWORD *)(a1 + 8) && !*(_QWORD *)a1
    || (v5 = *(_DWORD *)(v4 + 8), v5 == 666) && a2 != 4 )
  {
    v2 = -2;
    *(_QWORD *)(a1 + 48) = "stream error";
    return v2;
  }
  v6 = a1;
  if ( !*(_DWORD *)(a1 + 32) )
    goto LABEL_206;
  v7 = *(_QWORD *)(v4 + 40) == 0;
  v8 = *(unsigned int *)(v4 + 76);
  *(_DWORD *)(v4 + 76) = a2;
  v6 = a1;
  if ( !v7 )
  {
    sub_9FBF0(a1);
    v8 = *(unsigned int *)(a1 + 32);
    if ( !(_DWORD)v8 )
      goto LABEL_51;
    v5 = *(_DWORD *)(v4 + 8);
    goto LABEL_42;
  }
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( v5 != 666 )
      goto LABEL_15;
LABEL_44:
    v2 = -5;
    *(_QWORD *)(a1 + 48) = "buffer error";
    return v2;
  }
  v27 = 2 * a2;
  if ( a2 == 5 )
    v27 = 1;
  v28 = 2 * v8;
  if ( (int)v8 > 4 )
    v28 = 2 * v8 - 9;
  if ( v27 <= v28 && a2 != 4 )
  {
LABEL_206:
    v2 = -5;
    *(_QWORD *)(v6 + 48) = "buffer error";
    return v2;
  }
LABEL_42:
  if ( v5 == 666 )
  {
    if ( !*(_DWORD *)(a1 + 8) )
      goto LABEL_18;
    goto LABEL_44;
  }
LABEL_15:
  if ( v5 == 42 )
  {
    if ( !*(_DWORD *)(v4 + 48) )
    {
      *(_DWORD *)(v4 + 8) = 113;
      goto LABEL_18;
    }
    v50 = (*(_DWORD *)(v4 + 84) << 12) - 30720;
    if ( *(int *)(v4 + 200) <= 1 )
    {
      v145 = *(_DWORD *)(v4 + 196);
      if ( v145 > 1 )
      {
        if ( v145 > 5 )
        {
          v192 = (*(_DWORD *)(v4 + 84) << 12) - 30720;
          LOBYTE(v50) = -64;
          LOBYTE(v192) = 0x80;
          if ( v145 == 6 )
            v50 = v192;
        }
        else
        {
          v50 |= 0x40u;
        }
      }
    }
    if ( *(_DWORD *)(v4 + 172) )
      v50 |= 0x20u;
    v51 = v50;
    v52 = *(_QWORD *)(v4 + 16);
    v53 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v4 + 40) = v53 + 1;
    *(_BYTE *)(v52 + v53) = (unsigned __int16)(31 * (v51 / 0x1F) + 31) >> 8;
    v54 = *(_QWORD *)(v4 + 40);
    v55 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 40) = v54 + 1;
    *(_BYTE *)(v55 + v54) = 31 * (v51 / 0x1F) + 31;
    if ( *(_DWORD *)(v4 + 172) )
    {
      v56 = *(_QWORD *)(v4 + 40);
      v57 = *(_QWORD *)(v4 + 16);
      v58 = *(_QWORD *)(a1 + 96);
      *(_QWORD *)(v4 + 40) = v56 + 1;
      v58 >>= 16;
      *(_BYTE *)(v57 + v56) = BYTE1(v58);
      v59 = *(_QWORD *)(v4 + 40);
      v60 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 40) = v59 + 1;
      *(_BYTE *)(v60 + v59) = v58;
      v61 = *(_QWORD *)(v4 + 40);
      LOWORD(v59) = *(_WORD *)(a1 + 96);
      v62 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 40) = v61 + 1;
      *(_BYTE *)(v62 + v61) = BYTE1(v59);
      v63 = *(_QWORD *)(v4 + 40);
      v64 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 40) = v63 + 1;
      *(_BYTE *)(v64 + v63) = v59;
    }
    v8 = 0;
    *(_QWORD *)(a1 + 96) = sub_A6EB0(0, 0, 0);
    *(_DWORD *)(v4 + 8) = 113;
    sub_9FBF0(a1);
    if ( *(_QWORD *)(v4 + 40) )
      goto LABEL_51;
    v5 = *(_DWORD *)(v4 + 8);
  }
  if ( v5 == 57 )
  {
    *(_QWORD *)(a1 + 96) = sub_9F5C0(0, nullptr, 0);
    v65 = *(_QWORD *)(v4 + 40);
    v66 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 40) = v65 + 1;
    *(_BYTE *)(v66 + v65) = 31;
    v67 = *(_QWORD *)(v4 + 40);
    v68 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 40) = v67 + 1;
    *(_BYTE *)(v68 + v67) = -117;
    v69 = *(_QWORD *)(v4 + 40);
    v70 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 40) = v69 + 1;
    *(_BYTE *)(v70 + v69) = 8;
    v71 = *(_QWORD *)(v4 + 56);
    if ( v71 )
    {
      v72 = *(_DWORD *)v71 != 0;
      if ( *(_DWORD *)(v71 + 68) )
        v72 += 2;
      if ( *(_QWORD *)(v71 + 24) )
        v72 += 4;
      if ( *(_QWORD *)(v71 + 40) )
        v72 += 8;
      if ( *(_QWORD *)(v71 + 56) )
        v72 += 16;
      v73 = *(_QWORD *)(v4 + 40);
      v74 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 40) = v73 + 1;
      *(_BYTE *)(v74 + v73) = v72;
      v75 = *(_QWORD *)(v4 + 16);
      v76 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8LL);
      v77 = *(_QWORD *)(v4 + 40);
      *(_QWORD *)(v4 + 40) = v77 + 1;
      *(_BYTE *)(v75 + v77) = v76;
      v78 = *(_QWORD *)(v4 + 40);
      v79 = *(_QWORD *)(v4 + 16);
      v80 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8LL) >> 8;
      *(_QWORD *)(v4 + 40) = v78 + 1;
      *(_BYTE *)(v79 + v78) = v80;
      v81 = *(_QWORD *)(v4 + 40);
      v82 = *(_QWORD *)(v4 + 16);
      v83 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8LL) >> 16;
      *(_QWORD *)(v4 + 40) = v81 + 1;
      *(_BYTE *)(v82 + v81) = v83;
      v84 = *(_QWORD *)(v4 + 40);
      v85 = *(_QWORD *)(v4 + 16);
      v86 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8LL) >> 24;
      *(_QWORD *)(v4 + 40) = v84 + 1;
      *(_BYTE *)(v85 + v84) = v86;
      v87 = *(_DWORD *)(v4 + 196);
      v88 = 2;
      if ( v87 != 9 )
      {
        if ( *(int *)(v4 + 200) > 1 || (v88 = 0, v87 <= 1) )
          v88 = 4;
      }
      v89 = *(_QWORD *)(v4 + 40);
      v90 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 40) = v89 + 1;
      *(_BYTE *)(v90 + v89) = v88;
      v91 = *(_QWORD *)(v4 + 16);
      LODWORD(v90) = *(_DWORD *)(*(_QWORD *)(v4 + 56) + 20LL);
      v92 = *(_QWORD *)(v4 + 40);
      v8 = v92 + 1;
      *(_QWORD *)(v4 + 40) = v92 + 1;
      *(_BYTE *)(v91 + v92) = v90;
      v93 = *(_QWORD *)(v4 + 56);
      if ( *(_QWORD *)(v93 + 24) )
      {
        v94 = *(_DWORD *)(v93 + 32);
        v95 = *(_QWORD *)(v4 + 40);
        v96 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 40) = v95 + 1;
        *(_BYTE *)(v96 + v95) = v94;
        v97 = *(_QWORD *)(v4 + 16);
        v98 = *(_DWORD *)(*(_QWORD *)(v4 + 56) + 32LL);
        v99 = *(_QWORD *)(v4 + 40);
        v8 = v99 + 1;
        *(_QWORD *)(v4 + 40) = v99 + 1;
        *(_BYTE *)(v97 + v99) = BYTE1(v98);
        v93 = *(_QWORD *)(v4 + 56);
      }
      if ( *(_DWORD *)(v93 + 68) )
      {
        v8 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(a1 + 96) = sub_9F5C0(*(_QWORD *)(a1 + 96), (_BYTE *)v8, *(_DWORD *)(v4 + 40));
        v93 = *(_QWORD *)(v4 + 56);
      }
      *(_QWORD *)(v4 + 64) = 0;
      *(_DWORD *)(v4 + 8) = 69;
      goto LABEL_98;
    }
    v110 = *(_QWORD *)(v4 + 40);
    v111 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 40) = v110 + 1;
    *(_BYTE *)(v111 + v110) = 0;
    v112 = *(_QWORD *)(v4 + 40);
    v113 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 40) = v112 + 1;
    *(_BYTE *)(v113 + v112) = 0;
    v114 = *(_QWORD *)(v4 + 40);
    v115 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 40) = v114 + 1;
    *(_BYTE *)(v115 + v114) = 0;
    v116 = *(_QWORD *)(v4 + 40);
    v117 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 40) = v116 + 1;
    *(_BYTE *)(v117 + v116) = 0;
    v118 = *(_QWORD *)(v4 + 40);
    v119 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 40) = v118 + 1;
    *(_BYTE *)(v119 + v118) = 0;
    v120 = *(_DWORD *)(v4 + 196);
    v121 = 2;
    if ( v120 != 9 )
    {
      if ( *(int *)(v4 + 200) > 1 || (v121 = 0, v120 <= 1) )
        v121 = 4;
    }
    v122 = *(_QWORD *)(v4 + 40);
    v123 = *(_QWORD *)(v4 + 16);
    v8 = v122 + 1;
    *(_QWORD *)(v4 + 40) = v122 + 1;
    *(_BYTE *)(v123 + v122) = v121;
    v124 = *(_QWORD *)(v4 + 40);
    v125 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 40) = v124 + 1;
    *(_BYTE *)(v125 + v124) = 3;
    *(_DWORD *)(v4 + 8) = 113;
    sub_9FBF0(a1);
    if ( *(_QWORD *)(v4 + 40) )
      goto LABEL_51;
    v5 = *(_DWORD *)(v4 + 8);
  }
  switch ( v5 )
  {
    case 'E':
      v93 = *(_QWORD *)(v4 + 56);
LABEL_98:
      v100 = *(_QWORD *)(v93 + 24);
      if ( v100 )
      {
        v101 = *(_QWORD *)(v4 + 64);
        v102 = *(_QWORD *)(v4 + 40);
        v103 = *(_QWORD *)(v4 + 24);
        v104 = *(unsigned __int16 *)(v93 + 32) - (_DWORD)v101;
        v105 = v104;
        if ( v103 < v102 + v104 )
        {
          do
          {
            v194 = v103;
            v106 = (unsigned int)(v103 - v102);
            v107 = v102;
            v196 = v102;
            memcpy((void *)(*(_QWORD *)(v4 + 16) + v102), (const void *)(v100 + v101), v106);
            v108 = *(_QWORD *)(v4 + 24);
            v109 = *(_QWORD *)(v4 + 56);
            *(_QWORD *)(v4 + 40) = v108;
            if ( *(_DWORD *)(v109 + 68) && v108 > v196 )
              *(_QWORD *)(a1 + 96) = sub_9F5C0(
                                       *(_QWORD *)(a1 + 96),
                                       (_BYTE *)(v196 + *(_QWORD *)(v4 + 16)),
                                       (int)v108 - v107);
            *(_QWORD *)(v4 + 64) += v106;
            sub_9FBF0(a1);
            v102 = *(_QWORD *)(v4 + 40);
            if ( v102 )
              goto LABEL_51;
            v103 = *(_QWORD *)(v4 + 24);
            v101 = *(_QWORD *)(v4 + 64);
            v104 += v107 - v194;
            v105 = v104;
            v100 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 24LL);
          }
          while ( v103 < v104 );
        }
        v8 = v100 + v101;
        v195 = v102;
        memcpy((void *)(*(_QWORD *)(v4 + 16) + v102), (const void *)v8, v105);
        v93 = *(_QWORD *)(v4 + 56);
        v126 = v105 + *(_QWORD *)(v4 + 40);
        *(_QWORD *)(v4 + 40) = v126;
        if ( *(_DWORD *)(v93 + 68) && v126 > v195 )
        {
          v8 = v195 + *(_QWORD *)(v4 + 16);
          *(_QWORD *)(a1 + 96) = sub_9F5C0(*(_QWORD *)(a1 + 96), (_BYTE *)v8, (int)v126 - (int)v195);
          v93 = *(_QWORD *)(v4 + 56);
        }
        *(_QWORD *)(v4 + 64) = 0;
      }
      *(_DWORD *)(v4 + 8) = 73;
      goto LABEL_119;
    case 'I':
      v93 = *(_QWORD *)(v4 + 56);
LABEL_119:
      if ( *(_QWORD *)(v93 + 40) )
      {
        v8 = *(_QWORD *)(v4 + 40);
        v127 = v8;
        while ( 1 )
        {
          if ( *(_QWORD *)(v4 + 24) == v127 )
          {
            if ( *(_DWORD *)(v93 + 68) && v8 < v127 )
              *(_QWORD *)(a1 + 96) = sub_9F5C0(
                                       *(_QWORD *)(a1 + 96),
                                       (_BYTE *)(*(_QWORD *)(v4 + 16) + v8),
                                       (int)v127 - (int)v8);
            sub_9FBF0(a1);
            v127 = *(_QWORD *)(v4 + 40);
            if ( v127 )
              goto LABEL_51;
            v93 = *(_QWORD *)(v4 + 56);
            v8 = 0;
          }
          v128 = *(_QWORD *)(v93 + 40);
          v129 = *(_QWORD *)(v4 + 64);
          *(_QWORD *)(v4 + 64) = v129 + 1;
          LOBYTE(v129) = *(_BYTE *)(v128 + v129);
          v130 = *(_QWORD *)(v4 + 16);
          *(_QWORD *)(v4 + 40) = v127 + 1;
          *(_BYTE *)(v130 + v127) = v129;
          if ( !(_BYTE)v129 )
            break;
          v127 = *(_QWORD *)(v4 + 40);
          v93 = *(_QWORD *)(v4 + 56);
        }
        v93 = *(_QWORD *)(v4 + 56);
        if ( *(_DWORD *)(v93 + 68) )
        {
          v131 = *(_QWORD *)(v4 + 40);
          if ( v131 > v8 )
          {
            v132 = v131 - v8;
            v8 += *(_QWORD *)(v4 + 16);
            *(_QWORD *)(a1 + 96) = sub_9F5C0(*(_QWORD *)(a1 + 96), (_BYTE *)v8, v132);
            v93 = *(_QWORD *)(v4 + 56);
          }
        }
        *(_QWORD *)(v4 + 64) = 0;
      }
      *(_DWORD *)(v4 + 8) = 91;
      goto LABEL_134;
    case '[':
      v93 = *(_QWORD *)(v4 + 56);
LABEL_134:
      if ( *(_QWORD *)(v93 + 56) )
      {
        v8 = *(_QWORD *)(v4 + 40);
        v133 = v8;
        while ( 1 )
        {
          if ( *(_QWORD *)(v4 + 24) == v133 )
          {
            if ( *(_DWORD *)(v93 + 68) && v8 < v133 )
              *(_QWORD *)(a1 + 96) = sub_9F5C0(
                                       *(_QWORD *)(a1 + 96),
                                       (_BYTE *)(*(_QWORD *)(v4 + 16) + v8),
                                       (int)v133 - (int)v8);
            sub_9FBF0(a1);
            v133 = *(_QWORD *)(v4 + 40);
            if ( v133 )
              goto LABEL_51;
            v93 = *(_QWORD *)(v4 + 56);
            v8 = 0;
          }
          v134 = *(_QWORD *)(v93 + 56);
          v135 = *(_QWORD *)(v4 + 64);
          *(_QWORD *)(v4 + 64) = v135 + 1;
          LOBYTE(v135) = *(_BYTE *)(v134 + v135);
          v136 = *(_QWORD *)(v4 + 16);
          *(_QWORD *)(v4 + 40) = v133 + 1;
          *(_BYTE *)(v136 + v133) = v135;
          if ( !(_BYTE)v135 )
            break;
          v133 = *(_QWORD *)(v4 + 40);
          v93 = *(_QWORD *)(v4 + 56);
        }
        v93 = *(_QWORD *)(v4 + 56);
        if ( *(_DWORD *)(v93 + 68) )
        {
          v137 = *(_QWORD *)(v4 + 40);
          if ( v137 > v8 )
          {
            v138 = v137 - v8;
            v8 += *(_QWORD *)(v4 + 16);
            *(_QWORD *)(a1 + 96) = sub_9F5C0(*(_QWORD *)(a1 + 96), (_BYTE *)v8, v138);
            v93 = *(_QWORD *)(v4 + 56);
          }
        }
      }
      *(_DWORD *)(v4 + 8) = 103;
      goto LABEL_148;
  }
  if ( v5 != 103 )
    goto LABEL_18;
  v93 = *(_QWORD *)(v4 + 56);
LABEL_148:
  if ( *(_DWORD *)(v93 + 68) )
  {
    v139 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v139 + 2) > *(_QWORD *)(v4 + 24) )
    {
      sub_9FBF0(a1);
      v139 = *(_QWORD *)(v4 + 40);
      if ( v139 )
        goto LABEL_51;
    }
    v140 = *(_QWORD *)(v4 + 16);
    v141 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(v4 + 40) = v139 + 1;
    *(_BYTE *)(v140 + v139) = v141;
    v142 = *(_QWORD *)(v4 + 40);
    v143 = *(_QWORD *)(v4 + 16);
    v144 = *(_QWORD *)(a1 + 96) >> 8;
    *(_QWORD *)(v4 + 40) = v142 + 1;
    v8 = 0;
    *(_BYTE *)(v143 + v142) = v144;
    *(_QWORD *)(a1 + 96) = sub_9F5C0(0, nullptr, 0);
  }
  *(_DWORD *)(v4 + 8) = 113;
  sub_9FBF0(a1);
  if ( *(_QWORD *)(v4 + 40) )
  {
LABEL_51:
    *(_DWORD *)(v4 + 76) = -1;
    return v2;
  }
LABEL_18:
  if ( !*(_DWORD *)(a1 + 8) && !*(_DWORD *)(v4 + 180) )
  {
    if ( !a2 )
      return v2;
    if ( *(_DWORD *)(v4 + 8) == 666 )
      goto LABEL_28;
  }
  v9 = *(int *)(v4 + 196);
  if ( !(_DWORD)v9 )
  {
    v8 = a2;
    v11 = sub_A0700(v4, a2);
LABEL_26:
    v12 = v11 & 0xFFFFFFFD;
    if ( v11 - 2 <= 1 )
    {
      *(_DWORD *)(v4 + 8) = 666;
      if ( v12 )
        goto LABEL_28;
      goto LABEL_50;
    }
    goto LABEL_65;
  }
  v10 = *(_DWORD *)(v4 + 200);
  if ( v10 != 2 )
  {
    if ( v10 != 3 )
    {
      v8 = a2;
      v11 = ((__int64 (__fastcall *)(__int64, _QWORD))qword_164000[2 * v9 + 1])(v4, a2);
      goto LABEL_26;
    }
    while ( 1 )
    {
      v180 = *(_DWORD *)(v4 + 180);
      if ( v180 > 0x102 || (sub_9F910(v4), v180 = *(_DWORD *)(v4 + 180), v180 > 0x102) )
      {
        v167 = *(unsigned int *)(v4 + 172);
        v168 = *(_QWORD *)(v4 + 96);
        *(_DWORD *)(v4 + 160) = 0;
        v169 = v167;
      }
      else
      {
        if ( !a2 )
          goto LABEL_50;
        if ( !v180 )
          goto LABEL_60;
        v167 = *(unsigned int *)(v4 + 172);
        v168 = *(_QWORD *)(v4 + 96);
        *(_DWORD *)(v4 + 160) = 0;
        v169 = v167;
        if ( v180 <= 2 )
        {
LABEL_173:
          v172 = *(unsigned int *)(v4 + 5900);
          v173 = *(unsigned __int8 *)(v168 + v167);
          v174 = *(_QWORD *)(v4 + 5888);
          *(_DWORD *)(v4 + 5900) = v172 + 1;
          *(_BYTE *)(v174 + v172) = 0;
          v175 = *(unsigned int *)(v4 + 5900);
          v176 = *(_QWORD *)(v4 + 5888);
          *(_DWORD *)(v4 + 5900) = v175 + 1;
          *(_BYTE *)(v176 + v175) = 0;
          v177 = *(unsigned int *)(v4 + 5900);
          v178 = *(_QWORD *)(v4 + 5888);
          v8 = (unsigned int)(v177 + 1);
          *(_DWORD *)(v4 + 5900) = v8;
          *(_BYTE *)(v178 + v177) = v173;
          ++*(_WORD *)(v4 + 4 * v173 + 212);
          LOBYTE(v179) = *(_DWORD *)(v4 + 5900) == *(_DWORD *)(v4 + 5904);
          --*(_DWORD *)(v4 + 180);
          ++*(_DWORD *)(v4 + 172);
          v179 = (unsigned __int8)v179;
          goto LABEL_174;
        }
      }
      if ( !v169 )
        goto LABEL_173;
      v170 = (unsigned __int8 *)(v168 + v167 - 1);
      v171 = *v170;
      if ( *v170 != *(_BYTE *)(v168 + v167) || v171 != v170[2] || v171 != v170[3] )
        goto LABEL_173;
      v181 = v170 + 3;
      while ( 1 )
      {
        if ( v171 != v181[1] )
        {
          LODWORD(v181) = (_DWORD)v181 + 1;
          goto LABEL_192;
        }
        if ( v171 != v181[2] )
        {
          LODWORD(v181) = (_DWORD)v181 + 2;
          goto LABEL_192;
        }
        if ( v171 != v181[3] )
        {
          LODWORD(v181) = (_DWORD)v181 + 3;
          goto LABEL_192;
        }
        if ( v171 != v181[4] )
        {
          LODWORD(v181) = (_DWORD)v181 + 4;
          goto LABEL_192;
        }
        if ( v171 != v181[5] )
        {
          LODWORD(v181) = (_DWORD)v181 + 5;
          goto LABEL_192;
        }
        if ( v171 != v181[6] )
          break;
        if ( v171 != v181[7] )
        {
          LODWORD(v181) = (_DWORD)v181 + 7;
          goto LABEL_192;
        }
        v181 += 8;
        if ( v168 + v167 + 258 <= (unsigned __int64)v181 || *v181 != v171 )
          goto LABEL_192;
      }
      LODWORD(v181) = (_DWORD)v181 + 6;
LABEL_192:
      v182 = (_DWORD)v181 - (v168 + v167);
      *(_DWORD *)(v4 + 160) = v182;
      if ( v180 >= v182 )
      {
        if ( v182 <= 2 )
          goto LABEL_173;
      }
      else
      {
        *(_DWORD *)(v4 + 160) = v180;
        LOBYTE(v182) = v180;
      }
      v183 = *(unsigned int *)(v4 + 5900);
      v184 = *(_QWORD *)(v4 + 5888);
      v185 = v182 - 3;
      *(_DWORD *)(v4 + 5900) = v183 + 1;
      *(_BYTE *)(v184 + v183) = 1;
      v186 = *(unsigned int *)(v4 + 5900);
      v187 = *(_QWORD *)(v4 + 5888);
      *(_DWORD *)(v4 + 5900) = v186 + 1;
      *(_BYTE *)(v187 + v186) = 0;
      v188 = *(unsigned int *)(v4 + 5900);
      v189 = *(_QWORD *)(v4 + 5888);
      v8 = (unsigned int)(v188 + 1);
      *(_DWORD *)(v4 + 5900) = v8;
      *(_BYTE *)(v189 + v188) = v185;
      ++*(_WORD *)(v4 + 4LL * *((unsigned __int8 *)qword_133B80 + v185) + 1240);
      ++*(_WORD *)(v4 + 2504);
      v7 = *(_DWORD *)(v4 + 5900) == *(_DWORD *)(v4 + 5904);
      LODWORD(v188) = *(_DWORD *)(v4 + 160);
      *(_DWORD *)(v4 + 160) = 0;
      *(_DWORD *)(v4 + 180) -= v188;
      v179 = v7;
      *(_DWORD *)(v4 + 172) += v188;
LABEL_174:
      if ( v179 )
      {
        v190 = *(_QWORD *)(v4 + 152);
        v8 = 0;
        if ( v190 >= 0 )
          v8 = *(_QWORD *)(v4 + 96) + (unsigned int)v190;
        sub_A6330(v4, v8, *(unsigned int *)(v4 + 172) - v190, 0);
        v191 = *(_QWORD *)v4;
        *(_QWORD *)(v4 + 152) = *(unsigned int *)(v4 + 172);
        sub_9FBF0(v191);
        if ( !*(_DWORD *)(*(_QWORD *)v4 + 32LL) )
          goto LABEL_50;
      }
    }
  }
LABEL_55:
  v36 = *(_DWORD *)(v4 + 180);
  while ( 1 )
  {
    if ( !v36 )
    {
      sub_9F910(v4);
      if ( !*(_DWORD *)(v4 + 180) )
        break;
    }
    v37 = *(unsigned int *)(v4 + 172);
    v38 = *(_QWORD *)(v4 + 96);
    *(_DWORD *)(v4 + 160) = 0;
    v39 = *(_QWORD *)(v4 + 5888);
    v40 = *(unsigned __int8 *)(v38 + v37);
    v41 = *(unsigned int *)(v4 + 5900);
    *(_DWORD *)(v4 + 5900) = v41 + 1;
    *(_BYTE *)(v39 + v41) = 0;
    v42 = *(unsigned int *)(v4 + 5900);
    v43 = *(_QWORD *)(v4 + 5888);
    *(_DWORD *)(v4 + 5900) = v42 + 1;
    *(_BYTE *)(v43 + v42) = 0;
    v44 = *(unsigned int *)(v4 + 5900);
    v45 = *(_QWORD *)(v4 + 5888);
    v8 = (unsigned int)(v44 + 1);
    *(_DWORD *)(v4 + 5900) = v8;
    *(_BYTE *)(v45 + v44) = v40;
    ++*(_WORD *)(v4 + 4 * v40 + 212);
    v46 = (unsigned int)(*(_DWORD *)(v4 + 172) + 1);
    v47 = *(_DWORD *)(v4 + 5904);
    v36 = *(_DWORD *)(v4 + 180) - 1;
    *(_DWORD *)(v4 + 172) = v46;
    *(_DWORD *)(v4 + 180) = v36;
    if ( *(_DWORD *)(v4 + 5900) == v47 )
    {
      v33 = *(_QWORD *)(v4 + 152);
      v8 = 0;
      v34 = v46 - v33;
      if ( v33 >= 0 )
        v8 = *(_QWORD *)(v4 + 96) + (unsigned int)v33;
      sub_A6330(v4, v8, v34, 0);
      v35 = *(_QWORD *)v4;
      *(_QWORD *)(v4 + 152) = *(unsigned int *)(v4 + 172);
      sub_9FBF0(v35);
      if ( !*(_DWORD *)(*(_QWORD *)v4 + 32LL) )
        goto LABEL_50;
      goto LABEL_55;
    }
  }
  if ( !a2 )
    goto LABEL_50;
LABEL_60:
  *(_DWORD *)(v4 + 5932) = 0;
  if ( a2 == 4 )
  {
    v29 = *(_QWORD *)(v4 + 152);
    v30 = 0;
    if ( v29 >= 0 )
      v30 = *(_QWORD *)(v4 + 96) + (unsigned int)v29;
    sub_A6330(v4, v30, *(unsigned int *)(v4 + 172) - v29, 1);
    v31 = *(_QWORD *)v4;
    *(_QWORD *)(v4 + 152) = *(unsigned int *)(v4 + 172);
    sub_9FBF0(v31);
    v32 = *(_DWORD *)(*(_QWORD *)v4 + 32LL);
    *(_DWORD *)(v4 + 8) = 666;
    if ( v32 )
      goto LABEL_29;
LABEL_50:
    if ( *(_DWORD *)(a1 + 32) )
      return v2;
    goto LABEL_51;
  }
  if ( !*(_DWORD *)(v4 + 5900) )
    goto LABEL_67;
  v48 = *(_QWORD *)(v4 + 152);
  v8 = 0;
  if ( v48 >= 0 )
    v8 = *(_QWORD *)(v4 + 96) + (unsigned int)v48;
  sub_A6330(v4, v8, *(unsigned int *)(v4 + 172) - v48, 0);
  v49 = *(_QWORD *)v4;
  *(_QWORD *)(v4 + 152) = *(unsigned int *)(v4 + 172);
  sub_9FBF0(v49);
  v11 = *(_DWORD *)(*(_QWORD *)v4 + 32LL) != 0;
  v12 = v11;
LABEL_65:
  if ( !v12 )
    goto LABEL_50;
  if ( v11 != 1 )
    goto LABEL_28;
LABEL_67:
  if ( a2 == 1 )
  {
    sub_A6240(v4, v8);
    goto LABEL_161;
  }
  if ( a2 == 5 )
    goto LABEL_161;
  sub_A6100(v4, 0, 0, 0);
  if ( a2 == 3 )
  {
    *(_WORD *)(*(_QWORD *)(v4 + 120) + 2LL * (unsigned int)(*(_DWORD *)(v4 + 132) - 1)) = 0;
    memset(*(void **)(v4 + 120), 0, 2LL * (unsigned int)(*(_DWORD *)(v4 + 132) - 1));
    if ( !*(_DWORD *)(v4 + 180) )
    {
      *(_DWORD *)(v4 + 172) = 0;
      *(_QWORD *)(v4 + 152) = 0;
      *(_DWORD *)(v4 + 5932) = 0;
    }
LABEL_161:
    sub_9FBF0(a1);
    if ( *(_DWORD *)(a1 + 32) )
      return v2;
    goto LABEL_51;
  }
  sub_9FBF0(a1);
  if ( !*(_DWORD *)(a1 + 32) )
    goto LABEL_51;
LABEL_28:
  if ( a2 == 4 )
  {
LABEL_29:
    v13 = *(_DWORD *)(v4 + 48);
    v2 = 1;
    if ( v13 > 0 )
    {
      v14 = *(_QWORD *)(a1 + 96);
      v15 = *(_QWORD *)(v4 + 40);
      v16 = v15 + 1;
      v17 = (_BYTE *)(*(_QWORD *)(v4 + 16) + v15);
      if ( v13 == 2 )
      {
        *(_QWORD *)(v4 + 40) = v16;
        *v17 = v14;
        v146 = *(_QWORD *)(v4 + 40);
        v147 = *(_QWORD *)(v4 + 16);
        v148 = *(_QWORD *)(a1 + 96) >> 8;
        *(_QWORD *)(v4 + 40) = v146 + 1;
        *(_BYTE *)(v147 + v146) = v148;
        v149 = *(_QWORD *)(v4 + 40);
        v150 = *(_QWORD *)(v4 + 16);
        v151 = *(_QWORD *)(a1 + 96) >> 16;
        *(_QWORD *)(v4 + 40) = v149 + 1;
        *(_BYTE *)(v150 + v149) = v151;
        v152 = *(_QWORD *)(v4 + 40);
        v153 = *(_QWORD *)(v4 + 16);
        v154 = *(_QWORD *)(a1 + 96) >> 24;
        *(_QWORD *)(v4 + 40) = v152 + 1;
        *(_BYTE *)(v153 + v152) = v154;
        v155 = *(_QWORD *)(v4 + 40);
        v156 = *(_QWORD *)(a1 + 16);
        v157 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 40) = v155 + 1;
        *(_BYTE *)(v157 + v155) = v156;
        v158 = *(_QWORD *)(v4 + 40);
        v159 = *(_QWORD *)(v4 + 16);
        v160 = *(_QWORD *)(a1 + 16) >> 8;
        *(_QWORD *)(v4 + 40) = v158 + 1;
        *(_BYTE *)(v159 + v158) = v160;
        v161 = *(_QWORD *)(v4 + 40);
        v162 = *(_QWORD *)(v4 + 16);
        v163 = *(_QWORD *)(a1 + 16) >> 16;
        *(_QWORD *)(v4 + 40) = v161 + 1;
        *(_BYTE *)(v162 + v161) = v163;
        v164 = *(_QWORD *)(v4 + 40);
        v165 = *(_QWORD *)(v4 + 16);
        v166 = *(_QWORD *)(a1 + 16) >> 24;
        *(_QWORD *)(v4 + 40) = v164 + 1;
        *(_BYTE *)(v165 + v164) = v166;
      }
      else
      {
        v18 = v14 >> 16;
        *(_QWORD *)(v4 + 40) = v16;
        *v17 = BYTE1(v18);
        v19 = *(_QWORD *)(v4 + 40);
        v20 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 40) = v19 + 1;
        *(_BYTE *)(v20 + v19) = v18;
        v21 = *(_QWORD *)(v4 + 16);
        LOWORD(v18) = *(_WORD *)(a1 + 96);
        v22 = *(_QWORD *)(v4 + 40);
        *(_QWORD *)(v4 + 40) = v22 + 1;
        *(_BYTE *)(v21 + v22) = BYTE1(v18);
        v23 = *(_QWORD *)(v4 + 40);
        v24 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 40) = v23 + 1;
        *(_BYTE *)(v24 + v23) = v18;
      }
      sub_9FBF0(a1);
      v25 = *(_DWORD *)(v4 + 48);
      if ( v25 > 0 )
        *(_DWORD *)(v4 + 48) = -v25;
      return *(_QWORD *)(v4 + 40) == 0;
    }
  }
  return v2;
}

