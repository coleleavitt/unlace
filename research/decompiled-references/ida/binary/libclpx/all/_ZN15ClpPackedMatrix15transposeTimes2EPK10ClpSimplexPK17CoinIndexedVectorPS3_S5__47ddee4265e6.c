__int64 __fastcall ClpPackedMatrix::transposeTimes2(
        ClpPackedMatrix *this,
        const ClpSimplex *a2,
        const CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        const CoinIndexedVector *a5,
        CoinIndexedVector *a6,
        double a7,
        double a8,
        double a9,
        double *a10,
        double *a11,
        unsigned int *a12,
        double *a13)
{
  __int64 v14; // rbx
  double v15; // xmm6_8
  double v16; // xmm4_8
  _QWORD *v17; // rax
  const double *v18; // r12
  int *v19; // r13
  __int64 v20; // rsi
  double v21; // xmm10_8
  int v22; // eax
  int *v23; // r15
  double v24; // xmm4_8
  ClpPackedMatrix *v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(ClpPackedMatrix *); // rax
  __int64 (__fastcall *v29)(ClpPackedMatrix *); // rax
  __int64 (__fastcall *v30)(ClpPackedMatrix *); // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // xmm5_8
  ClpPackedMatrix3 *v34; // rdi
  __int64 v35; // rax
  int v36; // r11d
  __int64 v37; // rdx
  int v38; // ebx
  int v39; // r8d
  double v40; // xmm7_8
  __int64 v41; // rdi
  __int64 v42; // r10
  __int64 v43; // rsi
  __int64 v44; // rax
  double v45; // xmm5_8
  __int64 v46; // rax
  int v47; // r10d
  int v48; // ecx
  int *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdi
  __int64 v52; // r14
  __int64 v53; // rcx
  int v54; // r9d
  double v55; // xmm7_8
  double v56; // xmm5_8
  __int64 v57; // r8
  __int64 v58; // r15
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  double v62; // xmm4_8
  double v63; // xmm5_8
  __int64 v65; // rax
  __int64 v66; // rdx
  double v67; // xmm5_8
  int v68; // edx
  int *v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rcx
  bool v72; // al
  int v73; // r9d
  __int64 v74; // rax
  __int64 v75; // rdx
  int v76; // r8d
  double v77; // xmm8_8
  double v78; // xmm7_8
  __int64 v79; // rdi
  __int64 v80; // r11
  __int64 v81; // rsi
  __int64 v82; // rax
  double v83; // xmm5_8
  double v84; // xmm7_8
  int v85; // edx
  __int64 v86; // rdx
  __int64 v87; // rax
  CoinIndexedVector *v88; // rax
  double v89; // xmm13_8
  __int64 v90; // rdx
  double v91; // xmm4_8
  double v92; // xmm7_8
  double *v93; // rax
  double v94; // xmm13_8
  double v95; // xmm14_8
  double v96; // xmm7_8
  double v97; // xmm7_8
  unsigned int v98; // eax
  __int64 v99; // rdx
  int v100; // r8d
  double v101; // xmm5_8
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // r15
  __int64 v105; // rax
  __int64 v106; // r15
  double v107; // xmm4_8
  _QWORD *v108; // rax
  double v109; // xmm9_8
  __int64 v110; // rcx
  double v111; // xmm5_8
  double v112; // xmm8_8
  double *v113; // rax
  double v114; // xmm5_8
  double v115; // xmm8_8
  double v116; // xmm5_8
  unsigned int v117; // eax
  double v118; // xmm8_8
  double v119; // xmm5_8
  unsigned __int8 v120; // al
  double *v121; // rax
  bool v122; // zf
  double v123; // xmm5_8
  double v124; // xmm7_8
  __int64 v125; // rcx
  double v126; // xmm4_8
  double *v127; // rax
  double v128; // xmm12_8
  double v129; // xmm13_8
  double v130; // xmm7_8
  double v131; // xmm7_8
  unsigned int v132; // eax
  double v133; // xmm8_8
  __int64 v134; // rcx
  double v135; // xmm5_8
  double *v136; // rax
  double v137; // xmm5_8
  double v138; // xmm8_8
  double v139; // xmm5_8
  unsigned int v140; // eax
  double v141; // xmm8_8
  double v142; // xmm5_8
  unsigned __int8 v143; // al
  double *v144; // rax
  double v145; // xmm5_8
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  unsigned int v151; // [rsp+8h] [rbp-B0h]
  ClpPackedMatrix *v152; // [rsp+8h] [rbp-B0h]
  ClpPackedMatrix *v153; // [rsp+8h] [rbp-B0h]
  __int64 v155; // [rsp+18h] [rbp-A0h]
  __int64 v156; // [rsp+20h] [rbp-98h]
  char v159; // [rsp+3Bh] [rbp-7Dh]
  int v160; // [rsp+3Ch] [rbp-7Ch]
  __int64 v161; // [rsp+40h] [rbp-78h]
  __int64 v162; // [rsp+48h] [rbp-70h]
  __int64 v163; // [rsp+50h] [rbp-68h]
  double v164; // [rsp+50h] [rbp-68h]
  double v165; // [rsp+50h] [rbp-68h]
  double v166; // [rsp+50h] [rbp-68h]

  v162 = *((_QWORD *)a4 + 1);
  v161 = *(_QWORD *)a4;
  v14 = *((_QWORD *)a3 + 1);
  v15 = *((double *)a2 + 88);
  v16 = fmin(0.01, *((double *)a2 + 96));
  v159 = *((_BYTE *)a3 + 28);
  v17 = *((_QWORD **)this + 11);
  v18 = *((const double **)a5 + 1);
  v19 = (int *)v17[6];
  v155 = v17[5];
  v20 = *((_QWORD *)a2 + 28);
  v156 = v17[4];
  v21 = 1.0;
  if ( a9 == 0.0 )
  {
    if ( v159 )
      goto LABEL_3;
  }
  else
  {
    v21 = a9;
    if ( v159 )
    {
LABEL_3:
      v22 = *((_DWORD *)a3 + 4);
      v23 = *(int **)a3;
      v24 = v16 + *((double *)a2 + 109);
      v25 = *((ClpPackedMatrix **)a2 + 26);
      v160 = v22;
      v26 = *((_QWORD *)a6 + 1);
      if ( v20 && v25 )
      {
        v27 = *(_QWORD *)v25;
        v28 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v25 + 48LL);
        if ( v28 == ClpPackedMatrix::getIndices )
        {
          v155 = *(_QWORD *)(*((_QWORD *)v25 + 11) + 40LL);
        }
        else
        {
          v152 = *((ClpPackedMatrix **)a2 + 26);
          v164 = v24;
          v147 = v28(v25);
          v25 = v152;
          v155 = v147;
          v27 = *(_QWORD *)v152;
          v24 = v164;
        }
        v29 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v27 + 56);
        if ( v29 == ClpPackedMatrix::getVectorStarts )
        {
          v19 = *(int **)(*((_QWORD *)v25 + 11) + 48LL);
        }
        else
        {
          v153 = v25;
          v166 = v24;
          v148 = v29(v25);
          v25 = v153;
          v19 = (int *)v148;
          v27 = *(_QWORD *)v153;
          v24 = v166;
        }
        v30 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v27 + 40);
        if ( v30 == ClpPackedMatrix::getElements )
        {
          v156 = *(_QWORD *)(*((_QWORD *)v25 + 11) + 32LL);
        }
        else
        {
          v165 = v24;
          v156 = v30(v25);
          v24 = v165;
        }
LABEL_11:
        if ( v160 > 0 )
        {
          v31 = 0;
          do
          {
            v32 = v23[v31];
            v33 = *(_QWORD *)(v14 + 8 * v31++);
            *(_QWORD *)(v26 + 8 * v32) = v33;
          }
          while ( (unsigned int)(v160 - 1) + 1LL != v31 );
        }
        v34 = *((ClpPackedMatrix3 **)this + 14);
        v151 = a10 != nullptr;
        if ( a9 == 0.0 || !v34 )
        {
          v35 = *v19;
          v36 = *((_DWORD *)this + 24);
          if ( v36 > 0 )
          {
            v37 = 0;
            v38 = 0;
            while ( 1 )
            {
              v39 = v19[v37 + 1];
              if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v37) & 3) != 1 )
              {
                if ( v39 <= (int)v35 )
                {
                  if ( v15 >= 0.0 )
                    goto LABEL_23;
                  v40 = 0.0;
                  v133 = 0.0;
                }
                else
                {
                  v40 = 0.0;
                  v41 = v155 + 4 * v35;
                  v42 = (unsigned int)(v39 - v35 - 1) + 1LL;
                  v43 = v156 + 8 * v35;
                  v44 = 0;
                  do
                  {
                    v45 = *(double *)(v26 + 8LL * *(int *)(v41 + 4 * v44)) * *(double *)(v43 + 8 * v44);
                    ++v44;
                    v40 = v40 - v45;
                  }
                  while ( v42 != v44 );
                  if ( fabs(v40) <= v15 )
                    goto LABEL_23;
                  v133 = 0.0;
                  v134 = 0;
                  do
                  {
                    v135 = v18[*(int *)(v41 + 4 * v134)] * *(double *)(v43 + 8 * v134);
                    ++v134;
                    v133 = v133 + v135;
                  }
                  while ( v44 != v134 );
                }
                v136 = a13;
                v137 = v21 * v40 * (v21 * v40);
                v138 = v133 * (v21 * v40) + a8 * v137 + a13[v37];
                if ( v138 < 0.0001 )
                {
                  if ( a7 < 0.0 )
                  {
                    v138 = fmax(0.0001, v137 + 1.0);
                  }
                  else
                  {
                    v139 = v137 * a7;
                    v140 = a12[(int)v37 >> 5];
                    v141 = v139;
                    if ( _bittest((const int *)&v140, v37) )
                      v141 = v139 + 1.0;
                    v138 = fmax(v141, 0.0001);
                    v136 = a13;
                  }
                }
                v136[v37] = v138;
                if ( a9 == 0.0 )
                  goto LABEL_23;
                v142 = a11[v37] - v40;
                a11[v37] = v142;
                v143 = *(_BYTE *)(*((_QWORD *)a2 + 33) + v37) & 7;
                if ( v143 == 2 )
                {
                  if ( v142 > v24 )
                  {
LABEL_174:
                    v144 = a10;
                    v145 = v142 * v142;
                    if ( a10[v37] != 0.0 )
                    {
LABEL_176:
                      v144[v37] = v145;
                      goto LABEL_23;
                    }
                    v146 = v38;
                    *(double *)(v162 + 8LL * v38) = v145;
                    goto LABEL_146;
                  }
LABEL_168:
                  v146 = v38;
                  *(_QWORD *)(v162 + 8LL * v38) = 0;
LABEL_146:
                  ++v38;
                  *(_DWORD *)(v161 + 4 * v146) = v37;
                  v36 = *((_DWORD *)this + 24);
                  goto LABEL_23;
                }
                if ( v143 <= 2u )
                {
                  if ( v143 )
                    goto LABEL_23;
LABEL_143:
                  if ( fabs(v142) <= 100.0 * v24 )
                    goto LABEL_168;
                  v144 = a10;
                  v145 = v142 * 10.0 * (v142 * 10.0);
                  if ( a10[v37] != 0.0 )
                    goto LABEL_176;
                  v146 = v38;
                  *(double *)(v162 + 8LL * v38) = v145;
                  goto LABEL_146;
                }
                if ( v143 == 3 )
                {
                  if ( -v24 > v142 )
                    goto LABEL_174;
                  goto LABEL_168;
                }
                if ( v143 == 4 )
                  goto LABEL_143;
              }
LABEL_23:
              ++v37;
              v35 = v39;
              if ( v36 <= (int)v37 )
                goto LABEL_61;
            }
          }
          goto LABEL_87;
        }
LABEL_52:
        ClpPackedMatrix3::transposeTimes2(v34, a2, (const double *)v26, a4, v18, a10, a7, a8, v21, a11, a12, a13);
        v38 = *((_DWORD *)a4 + 4);
        goto LABEL_61;
      }
      if ( !v20 )
        goto LABEL_11;
      if ( v22 > 0 )
      {
        v65 = 0;
        do
        {
          v66 = v23[v65];
          v67 = *(double *)(v20 + 8 * v66) * *(double *)(v14 + 8 * v65++);
          *(double *)(v26 + 8 * v66) = v67;
        }
        while ( (unsigned int)(v160 - 1) + 1LL != v65 );
      }
      v68 = *((_DWORD *)a5 + 4);
      v69 = *(int **)a5;
      if ( v68 > 0 )
      {
        v70 = (__int64)&v69[v68 - 1 + 1];
        do
        {
          v71 = *v69++;
          v18[v71] = v18[v71] * *(double *)(v20 + 8 * v71);
        }
        while ( (int *)v70 != v69 );
      }
      v34 = *((ClpPackedMatrix3 **)this + 14);
      v151 = a10 != nullptr;
      if ( v34 )
      {
        v72 = 1;
        if ( a9 != 0.0 )
          v72 = v34 == nullptr;
        if ( !v72 )
          goto LABEL_52;
      }
      v73 = *((_DWORD *)this + 24);
      v163 = *((_QWORD *)a2 + 29);
      v74 = *v19;
      if ( v73 <= 0 )
      {
LABEL_87:
        v38 = 0;
LABEL_61:
        v85 = *((_DWORD *)a2 + 26);
        if ( 4 * v160 >= v85 )
        {
          if ( v85 )
          {
            if ( v85 / 8 > 0 )
            {
              v108 = (_QWORD *)v26;
              do
              {
                *v108 = 0;
                v108[1] = 0;
                v108 += 8;
                *(v108 - 6) = 0;
                *(v108 - 5) = 0;
                *(v108 - 4) = 0;
                *(v108 - 3) = 0;
                *(v108 - 2) = 0;
                *(v108 - 1) = 0;
              }
              while ( v108 != (_QWORD *)(v26 + (((unsigned int)(v85 / 8 - 1) + 1LL) << 6)) );
              v26 += (v85 / 8 - 1 + 1LL) << 6;
            }
            switch ( v85 % 8 )
            {
              case 1:
                goto LABEL_100;
              case 2:
                goto LABEL_99;
              case 3:
                goto LABEL_98;
              case 4:
                goto LABEL_97;
              case 5:
                goto LABEL_96;
              case 6:
                goto LABEL_95;
              case 7:
                *(_QWORD *)(v26 + 48) = 0;
LABEL_95:
                *(_QWORD *)(v26 + 40) = 0;
LABEL_96:
                *(_QWORD *)(v26 + 32) = 0;
LABEL_97:
                *(_QWORD *)(v26 + 24) = 0;
LABEL_98:
                *(_QWORD *)(v26 + 16) = 0;
LABEL_99:
                *(_QWORD *)(v26 + 8) = 0;
LABEL_100:
                *(_QWORD *)v26 = 0;
                break;
              default:
                break;
            }
          }
        }
        else if ( v160 > 0 )
        {
          v86 = (__int64)&v23[v160 - 1 + 1];
          do
          {
            v87 = *v23++;
            *(_QWORD *)(v26 + 8 * v87) = 0;
          }
          while ( (int *)v86 != v23 );
        }
        v88 = a4;
        *((_DWORD *)a4 + 4) = v38;
        if ( v38 )
        {
          *((_DWORD *)a6 + 4) = 0;
          *((_BYTE *)a6 + 28) = 0;
          goto LABEL_67;
        }
LABEL_66:
        *((_BYTE *)v88 + 28) = 0;
        *((_DWORD *)a6 + 4) = 0;
        *((_BYTE *)a6 + 28) = 0;
        if ( !v159 )
          return v151;
LABEL_67:
        *((_BYTE *)a4 + 28) = 1;
        return v151;
      }
      v75 = 0;
      v38 = 0;
      while ( 1 )
      {
        v76 = v19[v75 + 1];
        if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v75) & 3) != 1 )
        {
          v77 = *(double *)(v163 + 8 * v75);
          if ( v76 <= (int)v74 )
          {
            v84 = v77 * 0.0;
            if ( fabs(v77 * 0.0) <= v15 )
              goto LABEL_60;
            v112 = v77 * 0.0;
          }
          else
          {
            v78 = 0.0;
            v79 = v155 + 4 * v74;
            v80 = (unsigned int)(v76 - v74 - 1) + 1LL;
            v81 = v156 + 8 * v74;
            v82 = 0;
            do
            {
              v83 = *(double *)(v26 + 8LL * *(int *)(v79 + 4 * v82)) * *(double *)(v81 + 8 * v82);
              ++v82;
              v78 = v78 - v83;
            }
            while ( v80 != v82 );
            v84 = v78 * v77;
            if ( fabs(v84) <= v15 )
              goto LABEL_60;
            v109 = 0.0;
            v110 = 0;
            do
            {
              v111 = v18[*(int *)(v79 + 4 * v110)] * *(double *)(v81 + 8 * v110);
              ++v110;
              v109 = v109 + v111;
            }
            while ( v82 != v110 );
            v112 = v77 * v109;
          }
          v113 = a13;
          v114 = v21 * v84 * (v21 * v84);
          v115 = v112 * (v21 * v84) + a8 * v114 + a13[v75];
          if ( v115 < 0.0001 )
          {
            if ( a7 < 0.0 )
            {
              v115 = fmax(0.0001, v114 + 1.0);
            }
            else
            {
              v116 = v114 * a7;
              v117 = a12[(int)v75 >> 5];
              v118 = v116;
              if ( _bittest((const int *)&v117, v75) )
                v118 = v116 + 1.0;
              v115 = fmax(v118, 0.0001);
              v113 = a13;
            }
          }
          v113[v75] = v115;
          if ( a9 == 0.0 )
            goto LABEL_60;
          v119 = a11[v75] - v84;
          a11[v75] = v119;
          v120 = *(_BYTE *)(*((_QWORD *)a2 + 33) + v75) & 7;
          if ( v120 == 2 )
          {
            if ( v119 > v24 )
            {
LABEL_154:
              v121 = a10;
              v123 = v119 * v119;
              v122 = a10[v75] == 0.0;
LABEL_116:
              if ( v122 )
              {
                v150 = v38++;
                *(double *)(v162 + 8 * v150) = v123;
                *(_DWORD *)(v161 + 4 * v150) = v75;
                v73 = *((_DWORD *)this + 24);
              }
              else
              {
                v121[v75] = v123;
              }
              goto LABEL_60;
            }
LABEL_164:
            v149 = v38;
            *(_QWORD *)(v162 + 8LL * v38) = 0;
LABEL_165:
            ++v38;
            *(_DWORD *)(v161 + 4 * v149) = v75;
            v73 = *((_DWORD *)this + 24);
            goto LABEL_60;
          }
          if ( v120 <= 2u )
          {
            if ( v120 )
              goto LABEL_60;
LABEL_114:
            if ( fabs(v119) > 100.0 * v24 )
            {
              v121 = a10;
              v122 = a10[v75] == 0.0;
              v123 = v119 * 10.0 * (v119 * 10.0);
              goto LABEL_116;
            }
            v149 = v38;
            *(_QWORD *)(v162 + 8LL * v38) = 0;
            goto LABEL_165;
          }
          if ( v120 == 3 )
          {
            if ( -v24 > v119 )
              goto LABEL_154;
            goto LABEL_164;
          }
          if ( v120 == 4 )
            goto LABEL_114;
        }
LABEL_60:
        ++v75;
        v74 = v76;
        if ( v73 <= (int)v75 )
          goto LABEL_61;
      }
    }
  }
  v46 = *v19;
  v47 = *((_DWORD *)this + 24);
  if ( v20 )
  {
    v48 = *((_DWORD *)a5 + 4);
    v49 = *(int **)a5;
    if ( v48 > 0 )
    {
      v50 = (__int64)&v49[v48 - 1 + 1];
      do
      {
        v51 = *v49++;
        v18[v51] = v18[v51] * *(double *)(v20 + 8 * v51);
      }
      while ( (int *)v50 != v49 );
    }
    v52 = *((_QWORD *)a2 + 29);
    if ( v47 > 0 )
    {
      v53 = 0;
      v151 = 0;
      while ( 1 )
      {
        v54 = v19[v53 + 1];
        if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v53) & 3) != 1 )
        {
          v55 = *(double *)(v52 + 8 * v53);
          if ( v54 <= (int)v46 )
          {
            v92 = v55 * 0.0;
            v63 = v92;
            if ( fabs(v92) > v15 )
              goto LABEL_71;
          }
          else
          {
            v56 = 0.0;
            v57 = v155 + 4 * v46;
            v58 = (unsigned int)(v54 - v46 - 1) + 1LL;
            v59 = v156 + 8 * v46;
            v60 = 0;
            do
            {
              v61 = *(int *)(v57 + 4 * v60);
              v62 = *(double *)(v14 + 8 * v61) * *(double *)(v59 + 8 * v60++);
              v56 = v56 - v62 * *(double *)(v20 + 8 * v61);
            }
            while ( v58 != v60 );
            v63 = v56 * v55;
            if ( fabs(v63) > v15 )
            {
              v89 = 0.0;
              v90 = 0;
              do
              {
                v91 = v18[*(int *)(v57 + 4 * v90)] * *(double *)(v59 + 8 * v90);
                ++v90;
                v89 = v89 + v91;
              }
              while ( v60 != v90 );
              v92 = v55 * v89;
LABEL_71:
              v93 = a13;
              v94 = v21 * v63;
              v96 = v92 * (v21 * v63) + v94 * v94 * a8 + a13[v53];
              if ( v96 < 0.0001 )
              {
                v95 = v94 * v94;
                if ( a7 < 0.0 )
                {
                  v96 = fmax(0.0001, v95 + 1.0);
                }
                else
                {
                  v97 = v95 * a7;
                  v98 = a12[(int)v53 >> 5];
                  if ( _bittest((const int *)&v98, v53) )
                    v97 = v97 + 1.0;
                  v96 = fmax(v97, 0.0001);
                  v93 = a13;
                }
              }
              v93[v53] = v96;
              if ( a9 != 0.0 )
              {
                *(double *)(v162 + 8 * v53) = v63;
                *(_DWORD *)(v161 + 4LL * (int)v151) = v53;
                v47 = *((_DWORD *)this + 24);
                ++v151;
              }
            }
          }
        }
        ++v53;
        v46 = v54;
        if ( v47 <= (int)v53 )
          goto LABEL_38;
      }
    }
LABEL_148:
    v88 = a4;
    v151 = 0;
    *((_DWORD *)a4 + 4) = 0;
    goto LABEL_66;
  }
  if ( v47 <= 0 )
    goto LABEL_148;
  v99 = 0;
  v151 = 0;
  do
  {
    v100 = v19[v99 + 1];
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v99) & 3) == 1 )
      goto LABEL_85;
    if ( v100 <= (int)v46 )
    {
      if ( v15 >= 0.0 )
        goto LABEL_85;
      v101 = 0.0;
      v124 = 0.0;
    }
    else
    {
      v101 = 0.0;
      v102 = v155 + 4 * v46;
      v103 = v156 + 8 * v46;
      v104 = (unsigned int)(v100 - v46 - 1);
      v105 = 0;
      v106 = v104 + 1;
      do
      {
        v107 = *(double *)(v14 + 8LL * *(int *)(v102 + 4 * v105)) * *(double *)(v103 + 8 * v105);
        ++v105;
        v101 = v101 - v107;
      }
      while ( v106 != v105 );
      if ( fabs(v101) <= v15 )
        goto LABEL_85;
      v124 = 0.0;
      v125 = 0;
      do
      {
        v126 = v18[*(int *)(v102 + 4 * v125)] * *(double *)(v103 + 8 * v125);
        ++v125;
        v124 = v124 + v126;
      }
      while ( v105 != v125 );
    }
    v127 = a13;
    v128 = v21 * v101;
    v130 = v124 * (v21 * v101) + a8 * (v128 * v128) + a13[v99];
    if ( v130 < 0.0001 )
    {
      v129 = v128 * v128;
      if ( a7 < 0.0 )
      {
        v130 = fmax(0.0001, v129 + 1.0);
      }
      else
      {
        v131 = v129 * a7;
        v132 = a12[(int)v99 >> 5];
        if ( _bittest((const int *)&v132, v99) )
          v131 = v131 + 1.0;
        v130 = fmax(v131, 0.0001);
        v127 = a13;
      }
    }
    v127[v99] = v130;
    if ( a9 != 0.0 )
    {
      *(double *)(v162 + 8 * v99) = v101;
      *(_DWORD *)(v161 + 4LL * (int)v151) = v99;
      v47 = *((_DWORD *)this + 24);
      ++v151;
    }
LABEL_85:
    ++v99;
    v46 = v100;
  }
  while ( v47 > (int)v99 );
LABEL_38:
  *((_DWORD *)a4 + 4) = v151;
  if ( !v151 )
  {
    v88 = a4;
    goto LABEL_66;
  }
  v151 = 0;
  *((_DWORD *)a6 + 4) = 0;
  *((_BYTE *)a6 + 28) = 0;
  return v151;
}

