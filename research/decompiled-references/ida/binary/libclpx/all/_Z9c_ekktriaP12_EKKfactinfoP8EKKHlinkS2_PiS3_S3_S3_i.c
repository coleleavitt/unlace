__int64 __fastcall c_ekktria(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        int *a5,
        unsigned int *a6,
        double a7,
        double a8,
        double a9,
        _DWORD *a10,
        int a11)
{
  _DWORD *v11; // r13
  __int64 v13; // r15
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // r14
  int v17; // eax
  double v18; // xmm3_8
  int v19; // esi
  __int64 v20; // rax
  int v21; // edx
  int v22; // edi
  int v23; // edx
  __int64 v24; // rdx
  int v25; // edx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rdi
  int v29; // r8d
  int v30; // r11d
  int v31; // edx
  int *v32; // rax
  unsigned __int64 v33; // r11
  int v34; // edx
  __int64 v35; // r11
  __int64 v36; // rbp
  int v37; // r9d
  int *v38; // rax
  __int64 v39; // rdx
  __int64 i; // rdi
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r10
  int *v45; // rsi
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // edx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rsi
  double *v53; // rcx
  double *v54; // rdx
  _DWORD *v55; // rdx
  __int64 v56; // rsi
  unsigned int v57; // edi
  int v58; // r9d
  int v59; // edx
  int *v60; // rax
  __int64 v61; // rbp
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  int v65; // r10d
  int v66; // eax
  int v67; // ebp
  __int64 v68; // r14
  __int64 v69; // rax
  __int64 v70; // r13
  int v71; // r12d
  __int64 v72; // r11
  int v73; // ebx
  int *v74; // rax
  _DWORD *v75; // r11
  int v76; // edx
  int v77; // r10d
  __int64 v78; // rax
  int v79; // ecx
  _DWORD *v80; // rsi
  __int64 v81; // rax
  _DWORD *v82; // rax
  unsigned int v83; // r9d
  int v84; // eax
  int v85; // edx
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rdx
  int v89; // r13d
  __int64 v90; // r11
  __int64 v91; // r9
  int *v92; // r8
  __int64 v93; // r12
  __int64 v94; // rcx
  int *v95; // rax
  int v96; // r10d
  int v97; // edi
  int v98; // edx
  int v99; // ecx
  int v100; // edx
  __int64 j; // rax
  __int64 v102; // rdi
  _DWORD *v103; // rsi
  __int64 v104; // rcx
  double *v105; // rax
  double v106; // xmm0_8
  _DWORD *v107; // rax
  unsigned int v108; // eax
  int v109; // ebx
  int v111; // r10d
  _DWORD *v112; // r8
  int v113; // r10d
  _OWORD *v114; // rax
  __int64 v115; // rsi
  int v116; // r11d
  _DWORD *v117; // rax
  _OWORD *v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // [rsp+0h] [rbp-F8h]
  __int64 v121; // [rsp+8h] [rbp-F0h]
  __int64 v122; // [rsp+10h] [rbp-E8h]
  int v123; // [rsp+1Ch] [rbp-DCh]
  int v124; // [rsp+20h] [rbp-D8h]
  _DWORD *v125; // [rsp+20h] [rbp-D8h]
  __int64 v126; // [rsp+28h] [rbp-D0h]
  int v127; // [rsp+30h] [rbp-C8h]
  unsigned int v128; // [rsp+30h] [rbp-C8h]
  int v129; // [rsp+34h] [rbp-C4h]
  unsigned int v130; // [rsp+38h] [rbp-C0h]
  _DWORD *v131; // [rsp+38h] [rbp-C0h]
  __int64 v132; // [rsp+40h] [rbp-B8h]
  __int64 v134; // [rsp+50h] [rbp-A8h]
  int v135; // [rsp+50h] [rbp-A8h]
  _DWORD *v136; // [rsp+58h] [rbp-A0h]
  __int64 v137; // [rsp+60h] [rbp-98h]
  int v138; // [rsp+60h] [rbp-98h]
  __int64 v140; // [rsp+68h] [rbp-90h]
  int v141; // [rsp+70h] [rbp-88h]
  unsigned int v142; // [rsp+74h] [rbp-84h]
  int v143; // [rsp+78h] [rbp-80h]
  int *v144; // [rsp+78h] [rbp-80h]
  __int64 v145; // [rsp+80h] [rbp-78h]
  __int64 v146; // [rsp+80h] [rbp-78h]
  int v147; // [rsp+88h] [rbp-70h]
  _DWORD *v148; // [rsp+90h] [rbp-68h]
  unsigned int v149; // [rsp+90h] [rbp-68h]
  __int64 v150; // [rsp+A0h] [rbp-58h]
  int v153; // [rsp+B8h] [rbp-40h]
  int v154; // [rsp+BCh] [rbp-3Ch]

  v11 = (_DWORD *)a1;
  v13 = *(_QWORD *)(a1 + 160);
  v14 = *(int *)(a1 + 240);
  v134 = *(_QWORD *)(a1 + 176);
  v15 = *(_DWORD *)(a1 + 256);
  v124 = *(_DWORD *)(a1 + 240);
  v16 = *(_QWORD *)(a1 + 64);
  v132 = *(_QWORD *)(a1 + 40);
  v17 = 2 * v14;
  v18 = *(double *)a1;
  v122 = *(_QWORD *)(a1 + 168);
  v126 = *(_QWORD *)(a1 + 48);
  v120 = *(_QWORD *)(a1 + 56);
  v121 = *(_QWORD *)(a1 + 72);
  v150 = *(_QWORD *)(a1 + 80);
  if ( 2 * (_DWORD)v14 )
  {
    v111 = v17 + 7;
    v112 = (_DWORD *)(a2 + 8);
    if ( (v14 & 0x40000000) == 0 )
      v111 = 2 * v14;
    v113 = v111 >> 3;
    if ( v113 > 0 )
    {
      a7 = 0.0;
      v114 = (_OWORD *)(a2 + 8);
      v115 = (unsigned int)(v113 - 1);
      do
      {
        *v114 = 0;
        v114 += 2;
        *(v114 - 1) = 0;
      }
      while ( (_OWORD *)(a2 + 32 * v115 + 40) != v114 );
      v112 += 8 * (int)v115 + 8;
      v116 = 2 * (int)v14 % 8;
      v117 = (_DWORD *)(a3 + 8);
      switch ( v116 )
      {
        case 1:
          goto LABEL_104;
        case 2:
          goto LABEL_103;
        case 3:
          goto LABEL_102;
        case 4:
          goto LABEL_101;
        case 5:
          goto LABEL_100;
        case 6:
          goto LABEL_99;
        case 7:
          goto LABEL_98;
        default:
          goto LABEL_106;
      }
    }
    v119 = (unsigned int)(v17 % 8);
    v116 = v17 % 8;
    v117 = (_DWORD *)(a3 + 8);
    switch ( v119 )
    {
      case 1LL:
        goto LABEL_104;
      case 2LL:
        goto LABEL_103;
      case 3LL:
        goto LABEL_102;
      case 4LL:
        goto LABEL_101;
      case 5LL:
        goto LABEL_100;
      case 6LL:
        goto LABEL_99;
      case 7LL:
LABEL_98:
        v112[6] = 0;
        v116 = 7;
LABEL_99:
        v112[5] = 0;
LABEL_100:
        v112[4] = 0;
LABEL_101:
        v112[3] = 0;
LABEL_102:
        v112[2] = 0;
LABEL_103:
        v112[1] = 0;
LABEL_104:
        *v112 = 0;
        if ( v113 > 0 )
        {
          LODWORD(v115) = v113 - 1;
LABEL_106:
          v118 = v117;
          a7 = 0.0;
          do
          {
            *v118 = 0;
            v118 += 2;
            *(v118 - 1) = 0;
          }
          while ( (_OWORD *)(a3 + 32LL * (unsigned int)v115 + 40) != v118 );
          v117 += 8 * (unsigned int)v115 + 8;
        }
        switch ( v116 )
        {
          case 1:
            goto LABEL_116;
          case 2:
            goto LABEL_115;
          case 3:
            goto LABEL_114;
          case 4:
            goto LABEL_113;
          case 5:
            goto LABEL_112;
          case 6:
            goto LABEL_111;
          case 7:
            v117[6] = 0;
LABEL_111:
            v117[5] = 0;
LABEL_112:
            v117[4] = 0;
LABEL_113:
            v117[3] = 0;
LABEL_114:
            v117[2] = 0;
LABEL_115:
            v117[1] = 0;
LABEL_116:
            *v117 = 0;
            break;
          default:
            goto LABEL_2;
        }
        break;
      default:
        break;
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 352) = 0;
  v141 = v124 + v15 + 4;
  v130 = *(_DWORD *)(v132 + 4 * v14) + *(_DWORD *)(v120 + 4 * v14) - 1;
  v129 = *(_DWORD *)(a1 + 260) + 1;
  v153 = v129 - a11;
  if ( v124 <= 0 )
  {
    v142 = 0;
    v138 = 0;
    v109 = *(_DWORD *)(v132 + 4 * v14) + *(_DWORD *)(v120 + 4 * v14) - 1;
    goto LABEL_91;
  }
  if ( *(_DWORD *)(v16 + 4) == 1 )
  {
    a7 = -1.0;
    v19 = *(_DWORD *)(v122 + 4LL * *(int *)(v126 + 4));
    v20 = 2;
    if ( v19 > 0 )
    {
      while ( *(double *)(v134 + 8LL * *(int *)(v132 + 4LL * v19)) == -1.0 )
      {
        v21 = v11[74];
        v22 = v21 + 1;
        v23 = ~v21;
        v11[74] = v22;
        *(_DWORD *)(a2 + 8LL * v19 + 4) = v23;
        *(_DWORD *)(a3 + 8 * v20 - 4) = v23;
        *(_DWORD *)(v16 + 4 * v20 - 4) = 0;
        v11[88] += *(_DWORD *)(v120 + 4LL * v19);
        if ( v124 < (int)v20 )
          break;
        if ( *(_DWORD *)(v16 + 4 * v20) != 1 )
          break;
        v24 = *(int *)(v126 + 4 * v20++);
        v25 = *(_DWORD *)(v122 + 4 * v24);
        if ( v25 <= v19 )
          break;
        v19 = v25;
      }
    }
  }
  v26 = 1;
  v27 = 0;
  v28 = (unsigned int)(v124 - 1) + 2LL;
  do
  {
    while ( 1 )
    {
      v29 = v26;
      if ( *(_DWORD *)(v16 + 4 * v26) )
        break;
LABEL_12:
      if ( v28 == ++v26 )
        goto LABEL_19;
    }
    v30 = *(_DWORD *)(v126 + 4 * v26);
    v31 = *(_DWORD *)(v126 + 4 * v26 + 4);
    if ( v30 >= v31 )
    {
      *(_DWORD *)(v16 + 4 * v26) = 0;
      goto LABEL_12;
    }
    v32 = (int *)(v122 + 4LL * v30);
    v33 = v122 + 4 + 4 * (v30 + (unsigned __int64)(unsigned int)(v31 - 1 - v30));
    v34 = 0;
    do
      v34 += *(_DWORD *)(a2 + 8LL * *v32++ + 4) < 0x80000000;
    while ( (int *)v33 != v32 );
    *(_DWORD *)(v16 + 4 * v26) = v34;
    if ( v34 != 1 )
      goto LABEL_12;
    ++v27;
    ++v26;
    *(_DWORD *)(v121 + 4LL * v27) = v29;
  }
  while ( v28 != v26 );
LABEL_19:
  if ( v27 )
  {
    v35 = 1;
    v142 = 0;
    v123 = -1;
    a9 = NAN;
    v145 = v26;
    v143 = ~v124;
    do
    {
      while ( 1 )
      {
        v127 = v35;
        v36 = *(int *)(v121 + 4 * v35);
        v37 = *(_DWORD *)(v121 + 4 * v35);
        if ( *(_DWORD *)(v16 + 4 * v36) )
          break;
        ++v35;
        if ( v27 <= v127 )
          goto LABEL_36;
      }
      v38 = (int *)(v122 + 4LL * *(int *)(v126 + 4 * v36));
      v39 = *v38;
      for ( i = a2 + 8 * v39; *(int *)(i + 4) < 0; i = a2 + 8 * v39 )
      {
        v39 = v38[1];
        ++v38;
      }
      v41 = *(_DWORD *)(v132 + 4 * v39);
      v136 = (_DWORD *)(v120 + 4 * v39);
      if ( v41 < v41 + *v136 )
      {
        v42 = v41 + 1LL;
        v137 = v41;
        v43 = v41;
        v44 = v42 + (unsigned int)(*v136 - 1);
        while ( 1 )
        {
          v45 = (int *)(v16 + 4LL * *(int *)(v13 + 4 * v43));
          v46 = *(_DWORD *)(v13 + 4 * v43);
          v47 = *v45 - 1;
          *v45 = v47;
          if ( v37 == v46 )
          {
            v123 = v43;
            v43 = v42;
            if ( v44 == v42 )
              goto LABEL_33;
          }
          else
          {
            if ( v47 == 1 )
              *(_DWORD *)(v121 + 4LL * ++v27) = v46;
            v43 = v42;
            if ( v44 == v42 )
              goto LABEL_33;
          }
          ++v42;
        }
      }
      v137 = *(int *)(v132 + 4 * v39);
LABEL_33:
      v48 = v11[74];
      v49 = v48 + 1;
      v50 = ~v48;
      v11[74] = v49;
      v51 = a3 + 8 * v36;
      *(_DWORD *)(i + 4) = v50;
      v52 = v134;
      *(_DWORD *)(v51 + 4) = v50;
      v11[88] += *v136;
      v53 = (double *)(v134 + 8LL * v123);
      a7 = *v53;
      if ( v18 > fabs(*v53) )
      {
        v142 = 7;
        ++*a4;
        *(_DWORD *)(i + 4) = v143;
        *(_DWORD *)(v51 + 4) = v143;
        v52 = v134;
      }
      ++v35;
      v54 = (double *)(v52 + 8 * v137);
      a8 = *v54;
      *v53 = *v54;
      *v54 = a7;
      v55 = (_DWORD *)(v13 + 4 * v137);
      *(_DWORD *)(v13 + 4LL * v123) = *v55;
      *v55 = v37;
    }
    while ( v27 > v127 );
LABEL_36:
    v26 = v145;
  }
  else
  {
    v142 = 0;
    v123 = -1;
  }
  if ( v11[74] >= v124 )
  {
    v138 = 0;
    v109 = v130;
    goto LABEL_91;
  }
  v56 = 4;
  v57 = 0;
  do
  {
    if ( *(int *)(a3 + 2 * v56 + 4) >= 0 )
    {
      v58 = *(_DWORD *)(v126 + v56);
      v59 = *(_DWORD *)(v126 + v56 + 4);
      *(_DWORD *)(v126 + v56) = v57 + 1;
      if ( v58 >= v59 )
      {
        v63 = 0;
      }
      else
      {
        v60 = (int *)(v122 + 4LL * v58);
        v61 = v122 + 4 + 4 * ((unsigned int)(v59 - 1 - v58) + (__int64)v58);
        do
        {
          v62 = *v60;
          if ( *(int *)(a2 + 8 * v62 + 4) >= 0 )
            *(_DWORD *)(v122 + 4LL * (int)++v57) = v62;
          ++v60;
        }
        while ( (int *)v61 != v60 );
        v63 = v57 - *(_DWORD *)(v126 + v56) + 1;
      }
      *(_DWORD *)(v16 + v56) = v63;
    }
    v56 += 4;
  }
  while ( 4 * v26 != v56 );
  v64 = 1;
  v128 = v57;
  v65 = 0;
  do
  {
    if ( *(int *)(a2 + 8 * v64 + 4) >= 0 && *(_DWORD *)(v120 + 4 * v64) == 1 )
      *(_DWORD *)(v121 + 4LL * ++v65) = v64;
    ++v64;
  }
  while ( v26 != v64 );
  v138 = 0;
  if ( !v65 )
    goto LABEL_122;
  v66 = v124;
  v140 = v16;
  v67 = v65;
  v68 = v134;
  v125 = v11;
  v146 = a2;
  v154 = ~v66;
  while ( 2 )
  {
    while ( 1 )
    {
      v69 = v67--;
      v70 = *(int *)(v121 + 4 * v69);
      v71 = *(_DWORD *)(v121 + 4 * v69);
      if ( *(_DWORD *)(v120 + 4 * v70) )
        break;
LABEL_55:
      if ( !v67 )
        goto LABEL_88;
    }
    v72 = 4LL * *(int *)(v13 + 4LL * *(int *)(v132 + 4 * v70));
    v73 = *(_DWORD *)(v13 + 4LL * *(int *)(v132 + 4 * v70));
    v74 = (int *)(v72 + v126);
    v75 = (_DWORD *)(v140 + v72);
    v76 = *v74;
    v144 = v74;
    LODWORD(v74) = *v75;
    *v75 = 0;
    v77 = (_DWORD)v74 - 1;
    v78 = 4LL * v76;
    v79 = v76 + v77;
    v80 = (_DWORD *)(v122 + v78);
    if ( v76 <= v76 + v77 && (_DWORD)v70 != *v80 )
    {
      v81 = v122 + v78 + 4;
      do
      {
        ++v76;
        v80 = (_DWORD *)v81;
        if ( v79 < v76 )
          break;
        v81 += 4;
      }
      while ( *(_DWORD *)(v81 - 4) != v71 );
    }
    v82 = (_DWORD *)(v122 + 4LL * v79);
    *v80 = *v82;
    *v82 = 0;
    if ( (int)(v77 + v130) < v129 )
    {
      if ( (int)(v77 + v128) < v129 )
        goto LABEL_66;
      if ( v153 > v77 )
      {
        v83 = v130;
        goto LABEL_86;
      }
LABEL_121:
      v11 = v125;
      v142 = -5;
LABEL_122:
      v109 = v128;
      goto LABEL_91;
    }
    v148 = v75;
    v147 = v77;
    if ( v153 <= v77 )
      goto LABEL_121;
    v83 = c_ekkrwco(v125, v68, v13, v132, v120, v130, a7, a8, a9);
    v77 = v147;
    ++v138;
    v75 = v148;
    a11 += 2 * (v130 - v83);
    if ( (int)(v147 + v128) < v129 )
    {
      v130 = v83;
      goto LABEL_66;
    }
LABEL_86:
    v149 = v83;
    v131 = v75;
    v108 = c_ekkclco(v125, v122, v126, v140, v128);
    v75 = v131;
    v128 = v108;
    ++v138;
    v77 = *v131;
    v130 = v149;
LABEL_66:
    v84 = v125[74];
    v85 = v84 + 1;
    v86 = ~v84;
    v125[74] = v85;
    v87 = v146 + 8 * v70;
    *(_DWORD *)(v87 + 4) = v86;
    v88 = a3 + 8LL * v73;
    *(_DWORD *)(v88 + 4) = v86;
    a7 = *(double *)(v68 + 8LL * *(int *)(v132 + 4 * v70));
    a8 = fabs(a7);
    if ( v18 > a8 )
    {
      v142 = 7;
      *(_DWORD *)(v87 + 4) = v154;
      *(_DWORD *)(v88 + 4) = v154;
    }
    if ( v77 <= 0 )
      goto LABEL_55;
    ++v141;
    a9 = -1.0 / a7;
    *(_DWORD *)(v126 + 4LL * v141) = v129 - 1;
    *(_DWORD *)(v150 + 4LL * v141) = v71;
    v89 = *v144;
    *v75 = 0;
    v135 = v77 + v89;
    if ( v77 + v89 <= v89 )
      goto LABEL_55;
    v90 = v129;
    v91 = v129 - 1LL;
    v92 = (int *)(v122 + 4LL * v89);
    v93 = v91 - (unsigned int)(v77 + v89 + ~v89);
    while ( 1 )
    {
      v94 = *v92;
      *v92 = 0;
      v95 = (int *)(v120 + 4 * v94);
      v96 = v94;
      v97 = *v95;
      v98 = *v95 - 1;
      *v95 = v98;
      if ( v97 == 2 )
      {
        *(_DWORD *)(v121 + 4LL * ++v67) = v94;
        v98 = *v95;
      }
      v99 = *(_DWORD *)(v132 + 4 * v94);
      v100 = v99 + v98;
      if ( v99 > v100 )
        goto LABEL_79;
      j = v99;
      v102 = 4LL * v99;
      v103 = (_DWORD *)(v13 + v102);
      if ( v73 != *(_DWORD *)(v13 + v102) )
      {
        LODWORD(j) = v99 + 1;
        v104 = v13 + v102 + 4;
        for ( j = (int)j; v100 >= (int)j; ++j )
        {
          v103 = (_DWORD *)v104;
          v104 += 4;
          if ( *v103 == v73 )
          {
            v123 = j;
            goto LABEL_80;
          }
        }
LABEL_79:
        j = v123;
        v103 = (_DWORD *)(v13 + 4LL * v123);
        goto LABEL_80;
      }
      v123 = v99;
LABEL_80:
      v105 = (double *)(v68 + 8 * j);
      ++v92;
      a8 = *(double *)(v68 + 8LL * v100);
      v106 = *v105;
      *v105 = a8;
      v107 = (_DWORD *)(v13 + 4LL * v100);
      a7 = v106 * a9;
      *v103 = *v107;
      *v107 = 0;
      *(double *)(v68 + 8 * v90 - 8) = a7;
      *(_DWORD *)(v13 + 4 * v90 - 4) = v96;
      v90 = v91;
      if ( v91 == v93 )
        break;
      --v91;
    }
    v129 = v129 + v89 - v135;
    if ( v67 )
      continue;
    break;
  }
LABEL_88:
  v11 = v125;
  v109 = v128;
LABEL_91:
  *a5 = v109;
  *a6 = v130;
  v11[72] = v129 - v153;
  v11[76] = v141;
  v11[75] = a11;
  *a10 = v138;
  return v142;
}

