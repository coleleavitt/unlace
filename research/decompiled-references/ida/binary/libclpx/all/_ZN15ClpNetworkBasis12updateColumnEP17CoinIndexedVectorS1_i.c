unsigned __int64 __fastcall ClpNetworkBasis::updateColumn(
        ClpNetworkBasis *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        int a4)
{
  int v6; // r10d
  __int64 v7; // rdi
  double *v8; // r9
  int *v9; // rdx
  __int64 v10; // r11
  __int64 v11; // rcx
  double v12; // xmm0_8
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  _BYTE *v18; // r8
  int v19; // esi
  __int64 v20; // rcx
  int *v21; // r12
  int v22; // r15d
  __int64 v23; // r12
  __int64 v24; // r14
  int v25; // r13d
  __int64 v26; // rax
  double v27; // xmm0_8
  __int64 v28; // rcx
  _BYTE *v29; // r8
  int v30; // esi
  __int64 v31; // rcx
  int *v32; // r12
  int v33; // r15d
  __int64 v34; // r13
  unsigned __int64 result; // rax
  int *v36; // rsi
  __int64 v37; // rcx
  double *v38; // rsi
  double v39; // xmm0_8
  int v40; // r10d
  __int64 v41; // r8
  double v42; // xmm2_8
  __int64 v43; // rax
  _QWORD *v44; // rdx
  __int64 v45; // r10
  int *v46; // rsi
  __int64 v47; // rcx
  double *v48; // rsi
  double v49; // xmm1_8
  int v50; // r8d
  __int64 v51; // r13
  int v52; // r8d
  __int64 v53; // r8
  int v54; // r15d
  int *v55; // r13
  double *v56; // r12
  __int64 v57; // rsi
  int v58; // r14d
  int v59; // r13d
  double *v60; // rax
  __int64 v61; // r11
  __int64 v62; // r15
  __int64 v63; // r10
  __int128 v64; // xmm0
  double v65; // xmm1_8
  double *v66; // rax
  _DWORD *v67; // r12
  __int64 v68; // r9
  int v69; // ecx
  _QWORD *v70; // r8
  __int128 v71; // xmm2
  double *v72; // r8
  __int64 v73; // r12
  double *v74; // rcx
  int *v75; // rdx
  __int64 v76; // r8
  int v77; // r9d
  _QWORD *v78; // rbx
  __int128 v79; // xmm2
  double *v80; // rbx
  int v81; // ebp
  double *v82; // r9
  double v83; // xmm1_8
  _QWORD *v84; // rdx
  __int64 v85; // rsi
  double *v86; // rax
  __int64 v87; // r14
  double *v88; // r8
  int v89; // r13d
  int v90; // r14d
  __int64 v91; // r11
  int *v92; // r12
  __int64 v93; // r10
  __int64 v94; // r8
  double v95; // xmm0_8
  __int64 v96; // rcx
  double v97; // xmm1_8
  int v98; // r15d
  double *v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r14
  __int64 v102; // r13
  __int64 v103; // r12
  int *v104; // rcx
  __int64 v105; // rsi
  __int64 v106; // rdx
  double *v107; // r10
  double *v108; // r15
  double v109; // xmm1_8
  double v110; // xmm0_8
  int v111; // r11d
  __int64 v112; // rdx
  double v113; // xmm0_8
  double v114; // xmm1_8
  __int64 v115; // r10
  int *v116; // rsi
  __int64 v117; // rcx
  double *v118; // rsi
  double v119; // xmm0_8
  int v120; // r12d
  __int64 v121; // r8
  int v122; // eax
  int v123; // ecx
  int v124; // ecx
  __int64 v125; // r11
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r10
  double v129; // xmm0_8
  int v130; // r12d
  int v131; // r15d
  double *v132; // r12
  double *v133; // r9
  int *v134; // rdx
  __int64 v135; // r8
  int v136; // r12d
  double *v137; // r15
  int v138; // r14d
  int v139; // r13d
  double *v140; // r12
  double v141; // xmm0_8
  int v142; // eax
  int v144; // [rsp+8h] [rbp-60h]
  ClpNetworkBasis *v145; // [rsp+8h] [rbp-60h]
  __int64 v146; // [rsp+10h] [rbp-58h]
  CoinIndexedVector *v147; // [rsp+10h] [rbp-58h]
  __int64 v148; // [rsp+18h] [rbp-50h]
  double *v149; // [rsp+28h] [rbp-40h]

  CoinIndexedVector::clear(a2);
  v6 = *((_DWORD *)a3 + 4);
  v7 = *((_QWORD *)a2 + 1);
  v8 = *((double **)a3 + 1);
  v9 = *(int **)a3;
  v10 = *(_QWORD *)a2;
  if ( v6 == 2 )
  {
    v11 = *((_QWORD *)this + 12);
    v54 = v9[1];
    v144 = *v9;
    v53 = *v9;
    v55 = (int *)(v11 + 4 * v53);
    v56 = (double *)(v7 + 8 * v53);
    if ( *((_BYTE *)a3 + 28) )
    {
      if ( v8[1] * *v8 >= 0.0 )
      {
LABEL_15:
        v23 = *((_QWORD *)this + 13);
        v24 = 0;
        v25 = -1;
        while ( 1 )
        {
          v26 = v9[v24];
          v27 = v8[v24];
          v8[v24] = 0.0;
          *(double *)(v7 + 8 * v26) = v27;
          *(_DWORD *)(v10 + 4 * v24) = v26;
          v28 = *(int *)(v11 + 4 * v26);
          v29 = (_BYTE *)(v23 + v26);
          v30 = v26;
          if ( v25 < (int)v28 )
            v25 = v28;
          if ( !*v29 )
          {
            v31 = 4 * v28;
            do
            {
              v32 = (int *)(v31 + *((_QWORD *)this + 11));
              v31 -= 4;
              v33 = *v32;
              *v32 = v30;
              *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v26) = v33;
              *v29 = 1;
              v23 = *((_QWORD *)this + 13);
              v26 = *(int *)(*((_QWORD *)this + 2) + 4 * v26);
              v29 = (_BYTE *)(v23 + v26);
              v30 = v26;
            }
            while ( !*(_BYTE *)(v23 + v26) );
          }
          if ( v6 <= (int)++v24 )
            break;
          v11 = *((_QWORD *)this + 12);
        }
        if ( a4 >= 0 )
        {
          if ( v25 != -1 )
          {
            v45 = 4LL * v25;
            result = 0;
            do
            {
              v46 = (int *)(v45 + *((_QWORD *)this + 11));
              v47 = *v46;
              for ( *v46 = -1; (int)v47 >= 0; v47 = *(int *)(*((_QWORD *)this + 8) + 4 * v47) )
              {
                *(_BYTE *)(*((_QWORD *)this + 13) + v47) = 0;
                v48 = (double *)(v7 + 8 * v47);
                v49 = *v48;
                if ( *v48 != 0.0 )
                {
                  v50 = *(_DWORD *)(*((_QWORD *)this + 10) + 4 * v47);
                  v51 = (int)result;
                  result = (unsigned int)(result + 1);
                  v8[v51] = *(double *)(*((_QWORD *)this + 7) + 8 * v47) * v49;
                  v9[v51] = v50;
                  v52 = *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v47);
                  *v48 = 0.0;
                  *(double *)(v7 + 8LL * v52) = v49 + *(double *)(v7 + 8LL * v52);
                }
              }
              v45 -= 4;
            }
            while ( v45 != -4 );
            v44 = (_QWORD *)(v7 + 8LL * *(int *)this);
            goto LABEL_30;
          }
LABEL_103:
          result = v7 + 8LL * *(int *)this;
          goto LABEL_85;
        }
        if ( v25 == -1 )
          goto LABEL_103;
        result = 0;
        v115 = 4LL * v25;
        do
        {
          v116 = (int *)(v115 + *((_QWORD *)this + 11));
          v117 = *v116;
          for ( *v116 = -1; (int)v117 >= 0; v117 = *(int *)(*((_QWORD *)this + 8) + 4 * v117) )
          {
            while ( 1 )
            {
              *(_BYTE *)(*((_QWORD *)this + 13) + v117) = 0;
              v118 = (double *)(v7 + 8 * v117);
              v119 = *v118;
              if ( *v118 == 0.0 )
                break;
              v120 = *(_DWORD *)(*((_QWORD *)this + 10) + 4 * v117);
              v121 = (int)result;
              result = (unsigned int)(result + 1);
              v8[v121] = *(double *)(*((_QWORD *)this + 7) + 8 * v117) * v119;
              v9[v121] = v120;
              LODWORD(v121) = *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v117);
              *v118 = 0.0;
              *(double *)(v7 + 8LL * (int)v121) = v119 + *(double *)(v7 + 8LL * (int)v121);
              v117 = *(int *)(*((_QWORD *)this + 8) + 4 * v117);
              if ( (int)v117 < 0 )
                goto LABEL_78;
            }
          }
LABEL_78:
          v115 -= 4;
        }
        while ( v115 != -4 );
        v44 = (_QWORD *)(v7 + 8LL * *(int *)this);
LABEL_30:
        *v44 = 0;
        *((_DWORD *)a3 + 4) = result;
        if ( (_DWORD)result )
          return result;
        goto LABEL_31;
      }
      v57 = v54;
      *v56 = *v8;
      v58 = *v55;
      v59 = *(_DWORD *)(v11 + 4LL * v54);
      v60 = (double *)(v7 + 8LL * v54);
      *v8 = 0.0;
      *v60 = v8[1];
      v8[1] = 0.0;
      if ( v58 < v59 )
      {
        if ( a4 >= 0 )
        {
LABEL_49:
          v61 = *((_QWORD *)this + 7);
          v62 = *((_QWORD *)this + 2);
          v63 = *((_QWORD *)this + 10);
          v64 = 0;
          v65 = *v60;
          v66 = v8;
          v67 = v9;
          v149 = v8;
          v146 = v61;
          v148 = v62;
          v68 = (__int64)&v8[(unsigned int)(v59 - 1 - v58) + 1];
          do
          {
            v71 = *(unsigned __int64 *)(v61 + 8 * v57);
            v69 = *(_DWORD *)(v63 + 4 * v57);
            v70 = (_QWORD *)(v7 + 8 * v57);
            *(double *)&v71 = *(double *)&v71 * v65;
            *(_QWORD *)v66 = v71;
            *v67 = v69;
            if ( a4 == v69 )
              v64 = v71;
            v57 = *(int *)(v62 + 4 * v57);
            ++v66;
            ++v67;
            *v70 = 0;
            v72 = (double *)(v7 + 8 * v57);
            v65 = v65 + *v72;
            *v72 = v65;
          }
          while ( v66 != (double *)v68 );
          v8 = v149;
          result = (unsigned int)(v59 - v58);
          if ( v144 == (_DWORD)v57 )
            goto LABEL_62;
          goto LABEL_54;
        }
LABEL_93:
        v125 = *((_QWORD *)this + 10);
        v126 = *((_QWORD *)this + 7);
        v127 = 1;
        v128 = *((_QWORD *)this + 2);
        v129 = *v60;
        do
        {
          v130 = *(_DWORD *)(v125 + 4 * v57);
          --v59;
          result = (unsigned int)v127;
          v8[v127 - 1] = *(double *)(v126 + 8 * v57) * v129;
          v9[v127 - 1] = v130;
          v131 = *(_DWORD *)(v128 + 4 * v57);
          *(_QWORD *)(v7 + 8 * v57) = 0;
          ++v127;
          v57 = v131;
          v132 = (double *)(v7 + 8LL * v131);
          v129 = v129 + *v132;
          *v132 = v129;
        }
        while ( v59 > v58 );
        if ( v131 == v144 )
          goto LABEL_99;
        goto LABEL_96;
      }
      if ( a4 < 0 )
      {
        if ( v58 > v59 )
        {
          v124 = v59;
          v60 = (double *)(v7 + 8 * v53);
          v59 = v58;
          v144 = v54;
          v58 = v124;
          v57 = v53;
          goto LABEL_93;
        }
        if ( v144 != v54 )
        {
          v125 = *((_QWORD *)this + 10);
          v128 = *((_QWORD *)this + 2);
          v57 = v144;
          v126 = *((_QWORD *)this + 7);
          v129 = *v56;
          v144 = v54;
          LODWORD(result) = 0;
LABEL_96:
          v133 = &v8[(int)result];
          v134 = &v9[(int)result];
          v135 = v144;
          while ( 1 )
          {
            v136 = *(_DWORD *)(v125 + 4 * v57);
            v137 = (double *)(v7 + 8 * v135);
            result = (unsigned int)(result + 2);
            v133 += 2;
            v134 += 2;
            *(v133 - 2) = *(double *)(v126 + 8 * v57) * v129;
            *(v134 - 2) = v136;
            v138 = *(_DWORD *)(v128 + 4 * v57);
            *(_QWORD *)(v7 + 8 * v57) = 0;
            v139 = *(_DWORD *)(v125 + 4 * v135);
            v57 = v138;
            v140 = (double *)(v7 + 8LL * v138);
            *v140 = v129 + *v140;
            v141 = *v137;
            *(v133 - 1) = *(double *)(v126 + 8 * v135) * *v137;
            *(v134 - 1) = v139;
            v135 = *(int *)(v128 + 4 * v135);
            *v137 = 0.0;
            *(double *)(v7 + 8 * v135) = v141 + *(double *)(v7 + 8 * v135);
            if ( v138 == (_DWORD)v135 )
              break;
            v129 = *v140;
          }
LABEL_99:
          v84 = (_QWORD *)(v7 + 8LL * *(int *)this);
          goto LABEL_63;
        }
      }
      else
      {
        if ( v58 > v59 )
        {
          v123 = v59;
          v57 = v144;
          v59 = v58;
          v60 = (double *)(v7 + 8 * v53);
          v58 = v123;
          v144 = v54;
          goto LABEL_49;
        }
        if ( v144 != v54 )
        {
          v63 = *((_QWORD *)this + 10);
          v57 = v144;
          v65 = *v56;
          v144 = v54;
          v64 = 0;
          v148 = *((_QWORD *)this + 2);
          v146 = *((_QWORD *)this + 7);
          LODWORD(result) = 0;
LABEL_54:
          v73 = v146;
          v74 = &v8[(int)result];
          v75 = &v9[(int)result];
          v147 = a3;
          v76 = v144;
          v145 = this;
          while ( 1 )
          {
            v79 = *(unsigned __int64 *)(v73 + 8 * v57);
            v77 = *(_DWORD *)(v63 + 4 * v57);
            v78 = (_QWORD *)(v7 + 8 * v57);
            *(double *)&v79 = *(double *)&v79 * v65;
            *(_QWORD *)v74 = v79;
            *v75 = v77;
            if ( a4 != v77 )
              v79 = v64;
            v57 = *(int *)(v148 + 4 * v57);
            result = (unsigned int)(result + 2);
            *v78 = 0;
            v80 = (double *)(v7 + 8 * v76);
            v81 = *(_DWORD *)(v63 + 4 * v76);
            v82 = (double *)(v7 + 8 * v57);
            *v82 = v65 + *v82;
            v83 = *v80;
            v64 = *(unsigned __int64 *)(v73 + 8 * v76);
            *(double *)&v64 = *(double *)&v64 * *v80;
            *((_QWORD *)v74 + 1) = v64;
            v75[1] = v81;
            if ( a4 != v81 )
              v64 = v79;
            v76 = *(int *)(v148 + 4 * v76);
            v74 += 2;
            v75 += 2;
            *v80 = 0.0;
            *(double *)(v7 + 8 * v76) = v83 + *(double *)(v7 + 8 * v76);
            if ( (_DWORD)v57 == (_DWORD)v76 )
              break;
            v65 = *v82;
          }
          this = v145;
          a3 = v147;
LABEL_62:
          v84 = (_QWORD *)(v7 + 8LL * *(int *)this);
LABEL_63:
          *v84 = 0;
          *((_DWORD *)a3 + 4) = result;
          return result;
        }
      }
      result = *(int *)this;
      *(_QWORD *)(v7 + 8 * result) = 0;
      *((_DWORD *)a3 + 4) = 0;
      goto LABEL_31;
    }
    v85 = v54;
    v86 = &v8[v144];
    v87 = v54;
    v12 = *v86;
    v88 = &v8[v87];
    if ( v8[v87] * *v86 >= 0.0 )
      goto LABEL_5;
    *v56 = v12;
    v89 = *v55;
    *v86 = 0.0;
    result = v7 + v87 * 8;
    v90 = *(_DWORD *)(v11 + 4LL * v54);
    *(double *)result = *v88;
    *v88 = 0.0;
    if ( v89 >= v90 )
    {
      if ( v89 <= v90 )
      {
        v142 = v54;
        v98 = v144;
        v144 = v142;
        result = 0;
LABEL_68:
        if ( v98 == v144 )
        {
LABEL_29:
          v44 = (_QWORD *)(v7 + 8LL * *(int *)this);
          goto LABEL_30;
        }
        v100 = v144;
        v101 = *((_QWORD *)this + 10);
        v102 = *((_QWORD *)this + 2);
        v103 = *((_QWORD *)this + 7);
        v104 = &v9[(int)result];
        v105 = v98;
        do
        {
          v106 = *(int *)(v101 + 4 * v105);
          v107 = (double *)(v7 + 8 * v105);
          v108 = (double *)(v7 + 8 * v100);
          v109 = *(double *)(v103 + 8 * v105);
          result = (unsigned int)(result + 2);
          v110 = *v107;
          v104 += 2;
          *(v104 - 2) = v106;
          v111 = *(_DWORD *)(v102 + 4 * v105);
          v105 = v111;
          v8[v106] = v109 * v110;
          *v107 = 0.0;
          *(double *)(v7 + 8LL * v111) = v110 + *(double *)(v7 + 8LL * v111);
          v112 = *(int *)(v101 + 4 * v100);
          v113 = *v108;
          v114 = *(double *)(v103 + 8 * v100);
          *(v104 - 1) = v112;
          LODWORD(v107) = *(_DWORD *)(v102 + 4 * v100);
          v100 = (int)v107;
          v8[v112] = v114 * v113;
          *v108 = 0.0;
          *(double *)(v7 + 8LL * (int)v107) = v113 + *(double *)(v7 + 8LL * (int)v107);
        }
        while ( v111 != (_DWORD)v107 );
        v44 = (_QWORD *)(v7 + 8LL * *(int *)this);
        if ( a4 < 0 )
        {
          *v44 = 0;
          *((_DWORD *)a3 + 4) = result;
          return result;
        }
        goto LABEL_30;
      }
      v122 = v90;
      v85 = v144;
      v90 = v89;
      v89 = v122;
      v144 = v54;
      result = (unsigned __int64)v56;
    }
    v91 = *((_QWORD *)this + 10);
    v92 = v9;
    v93 = *((_QWORD *)this + 2);
    v94 = *((_QWORD *)this + 7);
    v95 = *(double *)result;
    LODWORD(result) = 0;
    do
    {
      v96 = *(int *)(v91 + 4 * v85);
      result = (unsigned int)(result + 1);
      ++v92;
      v97 = *(double *)(v94 + 8 * v85) * v95;
      *(v92 - 1) = v96;
      v98 = *(_DWORD *)(v93 + 4 * v85);
      v8[v96] = v97;
      *(_QWORD *)(v7 + 8 * v85) = 0;
      v85 = v98;
      v99 = (double *)(v7 + 8LL * v98);
      v95 = v95 + *v99;
      *v99 = v95;
    }
    while ( v89 < v90 - (int)result );
    goto LABEL_68;
  }
  if ( *((_BYTE *)a3 + 28) )
  {
    if ( v6 <= 0 )
    {
      result = v7 + 8LL * *(int *)this;
      goto LABEL_85;
    }
    v11 = *((_QWORD *)this + 12);
    goto LABEL_15;
  }
  if ( v6 <= 0 )
    goto LABEL_82;
  v11 = *((_QWORD *)this + 12);
  v12 = v8[*v9];
LABEL_5:
  v13 = *((_QWORD *)this + 13);
  v14 = 0;
  v15 = -1;
  while ( 1 )
  {
    v16 = v9[v14];
    v8[v16] = 0.0;
    *(double *)(v7 + 8 * v16) = v12;
    *(_DWORD *)(v10 + 4 * v14) = v16;
    v17 = *(int *)(v11 + 4 * v16);
    v18 = (_BYTE *)(v13 + v16);
    v19 = v16;
    if ( (int)v15 < (int)v17 )
      v15 = v17;
    if ( !*v18 )
    {
      v20 = 4 * v17;
      do
      {
        v21 = (int *)(v20 + *((_QWORD *)this + 11));
        v20 -= 4;
        v22 = *v21;
        *v21 = v19;
        *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v16) = v22;
        *v18 = 1;
        v13 = *((_QWORD *)this + 13);
        v16 = *(int *)(*((_QWORD *)this + 2) + 4 * v16);
        v18 = (_BYTE *)(v13 + v16);
        v19 = v16;
      }
      while ( !*(_BYTE *)(v13 + v16) );
    }
    if ( v6 <= (int)++v14 )
      break;
    v11 = *((_QWORD *)this + 12);
    v12 = v8[v9[v14]];
  }
  if ( (_DWORD)v15 != -1 )
  {
    v34 = 4 * v15;
    result = 0;
    do
    {
      while ( 1 )
      {
        v36 = (int *)(v34 + *((_QWORD *)this + 11));
        v37 = *v36;
        *v36 = -1;
        if ( (int)v37 >= 0 )
          break;
LABEL_28:
        v34 -= 4;
        if ( v34 == -4 )
          goto LABEL_29;
      }
      do
      {
        while ( 1 )
        {
          *(_BYTE *)(*((_QWORD *)this + 13) + v37) = 0;
          v38 = (double *)(v7 + 8 * v37);
          v39 = *v38;
          if ( *v38 == 0.0 )
            break;
          v40 = result + 1;
          v41 = *(int *)(*((_QWORD *)this + 10) + 4 * v37);
          v42 = *(double *)(*((_QWORD *)this + 7) + 8 * v37) * v39;
          v9[result] = v41;
          v43 = *(int *)(*((_QWORD *)this + 2) + 4 * v37);
          v8[v41] = v42;
          *v38 = 0.0;
          *(double *)(v7 + 8 * v43) = v39 + *(double *)(v7 + 8 * v43);
          v37 = *(int *)(*((_QWORD *)this + 8) + 4 * v37);
          result = v40;
          if ( (int)v37 < 0 )
            goto LABEL_28;
        }
        v37 = *(int *)(*((_QWORD *)this + 8) + 4 * v37);
      }
      while ( (int)v37 >= 0 );
      v34 -= 4;
    }
    while ( v34 != -4 );
    goto LABEL_29;
  }
LABEL_82:
  result = v7 + 8LL * *(int *)this;
  if ( a4 < 0 )
  {
LABEL_85:
    *(_QWORD *)result = 0;
    *((_DWORD *)a3 + 4) = 0;
    goto LABEL_31;
  }
  *(_QWORD *)result = 0;
  *((_DWORD *)a3 + 4) = 0;
LABEL_31:
  *((_BYTE *)a3 + 28) = 0;
  return result;
}

