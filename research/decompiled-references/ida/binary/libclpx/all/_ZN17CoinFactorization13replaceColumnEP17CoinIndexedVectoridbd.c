__int64 __fastcall CoinFactorization::replaceColumn(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        int a3,
        double a4,
        char a5,
        double a6)
{
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r14
  __int64 v18; // rax
  int *v19; // r15
  double *v20; // r9
  double v21; // xmm5_8
  int v22; // r8d
  __int64 v23; // r8
  __int64 v24; // r8
  _DWORD *v25; // rax
  int v26; // r9d
  int v27; // ecx
  int v28; // eax
  int v29; // r9d
  __int64 v30; // r11
  __int64 v31; // rbx
  __int64 v32; // r13
  __int64 v33; // r11
  unsigned __int64 v34; // rcx
  __int64 v35; // r10
  _QWORD *v36; // r9
  int v37; // ebx
  CoinFactorization *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r12
  unsigned __int64 v45; // r10
  int v46; // eax
  __int64 v47; // rcx
  double v48; // xmm0_8
  __int64 v49; // rax
  __int64 v50; // rcx
  double v51; // xmm1_8
  __int64 v52; // rdx
  unsigned int v53; // eax
  int *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // rax
  bool v62; // cc
  __int64 v63; // rdi
  __int64 v64; // rsi
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // xmm0_8
  __int64 v68; // rcx
  __int64 v69; // r11
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rax
  int v79; // r8d
  __int64 v80; // rax
  __int64 v81; // rbp
  __int64 v82; // r11
  __int64 v83; // r8
  double v84; // xmm2_8
  CoinFactorization *v85; // r9
  int *v86; // rbx
  _DWORD *v87; // r13
  int v88; // r12d
  int v89; // eax
  double v90; // xmm0_8
  int v91; // edx
  int v92; // esi
  __int64 v93; // r15
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rcx
  int v97; // ecx
  __m128d v98; // xmm1
  __int64 v99; // r13
  int v100; // edi
  __int64 v101; // rax
  int v102; // r11d
  unsigned int v103; // edx
  __m128d v104; // xmm2
  unsigned int v105; // r9d
  __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rax
  int v109; // edi
  int v110; // r8d
  int v111; // r13d
  int v112; // esi
  int v113; // r8d
  int v114; // edi
  int v115; // esi
  int v116; // eax
  bool v117; // al
  __int64 v118; // rax
  __int64 v119; // rdi
  __int64 v120; // rax
  int v121; // r13d
  __int64 v122; // r9
  int v123; // eax
  int *v124; // rbp
  __int64 v125; // r8
  __int64 v126; // rax
  int v127; // r15d
  __int64 v128; // r13
  __int64 v129; // r14
  __int64 v130; // r9
  int v131; // r11d
  int *v132; // rdi
  double *v133; // r12
  double v134; // xmm0_8
  int v135; // edx
  int v136; // eax
  bool v137; // zf
  int v138; // eax
  __int64 v139; // r12
  __int64 v140; // r10
  int v141; // eax
  __int64 v143; // r10
  __int64 v144; // r13
  __int64 v145; // r11
  __int64 v146; // r10
  unsigned __int64 v147; // rcx
  int v148; // r8d
  int v149; // eax
  std::ostream *v150; // rbp
  _BYTE *v151; // rbx
  char v152; // al
  std::ostream *v153; // rax
  char ColumnSpaceIterateR; // al
  int v155; // esi
  int v156; // [rsp+8h] [rbp-100h]
  __int64 v157; // [rsp+8h] [rbp-100h]
  unsigned int v158; // [rsp+8h] [rbp-100h]
  unsigned int v159; // [rsp+8h] [rbp-100h]
  __int64 v160; // [rsp+10h] [rbp-F8h]
  __int64 v161; // [rsp+18h] [rbp-F0h]
  __int64 v162; // [rsp+18h] [rbp-F0h]
  double *v163; // [rsp+18h] [rbp-F0h]
  __int64 v164; // [rsp+20h] [rbp-E8h]
  __int64 v165; // [rsp+20h] [rbp-E8h]
  int v166; // [rsp+20h] [rbp-E8h]
  int v167; // [rsp+28h] [rbp-E0h]
  double *v168; // [rsp+28h] [rbp-E0h]
  __int64 v169; // [rsp+28h] [rbp-E0h]
  __int64 v170; // [rsp+28h] [rbp-E0h]
  __int64 v171; // [rsp+30h] [rbp-D8h]
  __int64 v172; // [rsp+30h] [rbp-D8h]
  int v173; // [rsp+38h] [rbp-D0h]
  int v174; // [rsp+38h] [rbp-D0h]
  __int64 v175; // [rsp+38h] [rbp-D0h]
  int v177; // [rsp+4Ch] [rbp-BCh]
  int v178; // [rsp+4Ch] [rbp-BCh]
  int *v179; // [rsp+50h] [rbp-B8h]
  char v180; // [rsp+5Bh] [rbp-ADh]
  int v181; // [rsp+5Ch] [rbp-ACh]
  int v182; // [rsp+5Ch] [rbp-ACh]
  __int64 v183; // [rsp+60h] [rbp-A8h]
  __int64 v184; // [rsp+60h] [rbp-A8h]
  __int64 v185; // [rsp+68h] [rbp-A0h]
  int *v186; // [rsp+70h] [rbp-98h]
  CoinFactorization *v187; // [rsp+70h] [rbp-98h]
  int v188; // [rsp+78h] [rbp-90h]
  __int64 v189; // [rsp+80h] [rbp-88h]
  __int64 v190; // [rsp+80h] [rbp-88h]
  _DWORD *v191; // [rsp+88h] [rbp-80h]
  double *v192; // [rsp+88h] [rbp-80h]
  __int64 v193; // [rsp+90h] [rbp-78h]
  __int64 v194; // [rsp+90h] [rbp-78h]
  double v195; // [rsp+98h] [rbp-70h]
  __int64 v196; // [rsp+A0h] [rbp-68h]
  __int64 v197; // [rsp+B0h] [rbp-58h]
  double *v198; // [rsp+B8h] [rbp-50h]
  __int64 v199; // [rsp+B8h] [rbp-50h]
  double v200; // [rsp+C0h] [rbp-48h]
  double *v201; // [rsp+C8h] [rbp-40h]

  v7 = 0;
  v8 = *((_QWORD *)this + 81);
  v9 = *((int *)this + 13);
  if ( *((int *)this + 164) <= -2 )
    v8 = 0;
  if ( *((_DWORD *)this + 12) >= (int)v9 )
    return 5;
  if ( *((_DWORD *)this + 148) < *(_DWORD *)(v8 + 4 * v9) )
    return 3;
  v10 = *((_QWORD *)this + 26);
  v11 = *((_QWORD *)this + 29);
  v12 = *((_QWORD *)this + 32);
  v13 = *((_QWORD *)this + 75);
  v193 = a3;
  v14 = *((_QWORD *)this + 69);
  if ( *((int *)this + 54) <= -2 )
    v10 = 0;
  v171 = v10;
  if ( *((int *)this + 60) <= -2 )
    v11 = 0;
  v183 = v11;
  if ( *((int *)this + 66) <= -2 )
    v12 = 0;
  v160 = v12;
  v15 = *((_QWORD *)this + 10);
  if ( *((int *)this + 22) <= -2 )
    v15 = 0;
  v16 = *(int *)(v15 + 4LL * a3);
  v17 = *((_QWORD *)a2 + 1);
  if ( *((int *)this + 152) <= -2 )
    v13 = 0;
  if ( !*((_DWORD *)this + 17) )
    a5 = 1;
  v18 = 4 * v16;
  v156 = v16;
  v180 = a5;
  v189 = v16;
  v19 = (int *)(4 * v16 + v11);
  *((_DWORD *)this + 18) -= *v19;
  if ( *((int *)this + 140) <= -2 )
    v14 = 0;
  v196 = v14;
  v20 = (double *)(v14 + 8 * v16);
  v21 = *v20;
  v198 = v20;
  *v20 = 0.0;
  v200 = v21;
  v186 = (int *)(v8 + v18);
  v195 = a4 / v21;
  v22 = *(_DWORD *)(v8 + 4 * v16) + *v19;
  *v19 = 0;
  v188 = v22;
  v23 = *((_QWORD *)this + 63);
  v179 = *(int **)a2;
  if ( *((int *)this + 128) <= -2 )
    v23 = 0;
  v164 = v23;
  v24 = *((_QWORD *)this + 84);
  if ( *((int *)this + 170) <= -2 )
    v24 = 0;
  v161 = v24;
  if ( *((int *)this + 48) > -2 )
    v7 = *((_QWORD *)this + 23);
  v25 = (_DWORD *)(v10 + v18);
  v26 = *v25;
  v185 = v7;
  v27 = *(_DWORD *)(v7 + 4 * v16);
  v191 = v25;
  v28 = *((_DWORD *)this + 9);
  v29 = v27 + v26;
  v167 = v27;
  v181 = v29;
  if ( a5 )
  {
    if ( v27 < v29 )
    {
      v37 = v29 - v27;
      v143 = 4LL * v27;
      v144 = 4LL * (unsigned int)(v29 - v27 - 1) + 4;
      v145 = v164 + v143;
      v146 = v24 + v143;
      v147 = 0;
      do
      {
        v148 = *(_DWORD *)(v145 + v147);
        if ( v28 > v148 )
          v28 = *(_DWORD *)(v145 + v147);
        *(_QWORD *)(v17 + 8LL * v148) = *(_QWORD *)(v13 + 8LL * *(int *)(v146 + v147));
        v179[v147 / 4] = v148;
        v147 += 4LL;
      }
      while ( v144 != v147 );
      goto LABEL_32;
    }
  }
  else if ( v27 < v29 )
  {
    v30 = 4LL * v27;
    v173 = v29 - v27;
    v31 = 4LL * (unsigned int)(v29 - v27 - 1) + 4;
    v32 = v164 + v30;
    v33 = v24 + v30;
    v34 = 0;
    do
    {
      v35 = *(int *)(v32 + v34);
      v36 = (_QWORD *)(v13 + 8LL * *(int *)(v33 + v34));
      if ( v28 > (int)v35 )
        v28 = *(_DWORD *)(v32 + v34);
      *(_QWORD *)(v17 + 8 * v35) = *v36;
      *v36 = 0;
      v179[v34 / 4] = v35;
      v34 += 4LL;
    }
    while ( v31 != v34 );
    v37 = v173;
LABEL_32:
    *((_DWORD *)a2 + 4) = v37;
    goto LABEL_33;
  }
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
LABEL_33:
  v39 = this;
  CoinFactorization::updateColumnTransposeU(this, a2, v28);
  v40 = *((int *)this + 12);
  v41 = 0;
  v177 = *((_DWORD *)a2 + 4);
  v42 = *((_QWORD *)this + 78);
  v174 = *(_DWORD *)(v8 + 4 * v40);
  if ( *((int *)this + 158) <= -2 )
    v42 = 0;
  v43 = v42 + 4LL * v174;
  v44 = v43;
  if ( *((int *)v39 + 152) > -2 )
    v41 = *((_QWORD *)v39 + 75);
  v197 = v41;
  v45 = v41 + 8LL * v174;
  if ( v180 )
  {
    v46 = *(_DWORD *)(v183 + 4 * v40);
    if ( v46 > 0 )
    {
      v47 = (unsigned int)(v46 - 1);
      v48 = 0.0;
      v49 = 0;
      v50 = v47 + 1;
      while ( 1 )
      {
        v51 = *(double *)(v45 + 8 * v49);
        if ( fabs(v51) <= *((double *)v39 + 1) )
          goto LABEL_41;
        v52 = *(int *)(v43 + 4 * v49);
        if ( v156 == (_DWORD)v52 )
        {
          ++v49;
          v48 = v48 + v51;
          if ( v50 == v49 )
            goto LABEL_45;
        }
        else
        {
          v48 = v48 - v51 * *(double *)(v17 + 8 * v52);
LABEL_41:
          if ( v50 == ++v49 )
            goto LABEL_45;
        }
      }
    }
    v48 = 0.0;
LABEL_45:
    v201 = (double *)v45;
    v53 = CoinFactorization::checkPivot(v39, v48, v195);
    v45 = (unsigned __int64)v201;
    if ( v53 )
    {
      v158 = v53;
      *v198 = v200;
      v149 = v188 - *v186;
      *((_DWORD *)v39 + 18) += v149;
      *v19 = v149;
      CoinIndexedVector::clear(a2);
      return v158;
    }
    if ( v167 < v181 )
    {
      v54 = (int *)(v161 + 4LL * v167);
      do
      {
        v55 = *v54++;
        *(_QWORD *)(v13 + 8 * v55) = 0;
      }
      while ( (int *)(v161 + 4 * (v167 + (unsigned __int64)(unsigned int)(v181 - v167 - 1)) + 4) != v54 );
    }
  }
  v56 = *v186;
  if ( v188 > (int)v56 )
  {
    v168 = (double *)v45;
    memset((void *)(v13 + 8 * v56), 0, 8LL * (unsigned int)(v188 - v56 - 1) + 8);
    v45 = (unsigned __int64)v168;
  }
  v57 = *((_QWORD *)v39 + 102);
  v58 = *((int *)v39 + 197);
  v59 = *((_QWORD *)v39 + 101);
  v60 = *((_QWORD *)v39 + 100);
  if ( *((int *)v39 + 206) <= -2 )
    v57 = 0;
  v61 = *((int *)v39 + 198);
  *(_DWORD *)(v57 + 4 * v58) = v61;
  *(_DWORD *)(v57 + 4 * v58 + 4) = v61 + v177;
  *((_DWORD *)v39 + 18) += v177;
  v62 = (int)v61 + v177 < *((_DWORD *)v39 + 199);
  *((_DWORD *)v39 + 197) = v58 + 1;
  *((_DWORD *)v39 + 198) = v61 + v177;
  if ( !v62 )
    goto LABEL_143;
  if ( v177 > 0 )
  {
    v63 = v60 + 8 * v61;
    v64 = v59 + 4 * v61;
    v65 = 0;
    do
    {
      v66 = v179[v65 / 4];
      v67 = *(_QWORD *)(v17 + 8 * v66);
      *(_DWORD *)(v64 + v65) = v66;
      *(_QWORD *)(v63 + 2 * v65) = v67;
      v65 += 4LL;
    }
    while ( 4LL * (unsigned int)(v177 - 1) + 4 != v65 );
  }
  v68 = *((_QWORD *)v39 + 50);
  v69 = *((_QWORD *)v39 + 53);
  v70 = 0;
  if ( *((int *)v39 + 102) <= -2 )
    v68 = 0;
  v71 = *(int *)(v68 + 4 * v189);
  if ( *((int *)v39 + 108) <= -2 )
    v69 = 0;
  v72 = *(int *)(v69 + 4 * v189);
  *(_DWORD *)(v68 + 4 * v72) = v71;
  *(_DWORD *)(v69 + 4 * v71) = v72;
  v73 = *((_QWORD *)v39 + 13);
  *v191 = 0;
  if ( *((int *)v39 + 28) > -2 )
    v70 = v73;
  *(_DWORD *)(v70 + 4LL * *((int *)v39 + 9)) = v156;
  v74 = 0;
  v75 = *((_QWORD *)v39 + 16);
  if ( *((int *)v39 + 34) > -2 )
    v74 = *((_QWORD *)v39 + 16);
  *(_DWORD *)(v74 + 4 * v189) = *((_DWORD *)v39 + 9);
  if ( *((int *)v39 + 34) <= -2 )
    v75 = 0;
  *(_DWORD *)(v75 + 4LL * *((int *)v39 + 9)) = -1;
  if ( *((int *)v39 + 28) <= -2 )
    v73 = 0;
  *(_DWORD *)(v73 + 4LL * *((int *)v39 + 9) + 4) = 0;
  v76 = *((_QWORD *)v39 + 10);
  if ( *((int *)v39 + 22) <= -2 )
    v76 = 0;
  *(_DWORD *)(v76 + 4 * v193) = *((_DWORD *)v39 + 9);
  v77 = *((_QWORD *)v39 + 19);
  if ( *((int *)v39 + 40) <= -2 )
    v77 = 0;
  *(_DWORD *)(v77 + 4LL * *((int *)v39 + 9)) = a3;
  v78 = *((int *)v39 + 12);
  ++*((_DWORD *)v39 + 145);
  v79 = *(_DWORD *)(v183 + 4 * v78);
  LODWORD(v78) = *((_DWORD *)v39 + 147);
  *((_DWORD *)v39 + 18) += v79;
  LODWORD(v78) = v79 + v78;
  v62 = (int)v78 < *((_DWORD *)v39 + 148);
  *((_DWORD *)v39 + 147) = v78;
  if ( !v62 )
  {
LABEL_143:
    CoinIndexedVector::clear(a2);
    return 3;
  }
  if ( v79 <= 0 )
  {
    v84 = 0.0;
  }
  else
  {
    v80 = (unsigned int)(v79 - 1);
    v182 = v79;
    v184 = v69;
    v81 = 0;
    v82 = v17;
    v83 = v44;
    v84 = 0.0;
    v169 = v80 + 1;
    v85 = v39;
    do
    {
      while ( 1 )
      {
        v92 = *(_DWORD *)(v83 + 4 * v81);
        if ( v156 != v92 )
          break;
        v84 = v84 + *(double *)(v45 + 8 * v81);
        *(_QWORD *)(v45 + 8 * v81++) = 0;
        if ( v169 == v81 )
          goto LABEL_81;
      }
      v86 = (int *)(v171 + 4LL * v92);
      v87 = (_DWORD *)(v185 + 4LL * v92);
      v88 = *v86;
      v89 = *v86 + *v87;
      if ( *(_DWORD *)(v185 + 4LL * *(int *)(v68 + 4LL * v92)) - v89 <= 0 )
      {
        v199 = v68;
        v194 = v82;
        v192 = (double *)v45;
        v190 = v83;
        v187 = v85;
        CoinFactorization::getRowSpaceIterate(v85, v92, v88 + 4);
        v68 = v199;
        v82 = v194;
        v45 = (unsigned __int64)v192;
        v83 = v190;
        v89 = v88 + *v87;
        v85 = v187;
      }
      v90 = *(double *)(v82 + 8LL * v92) * *(double *)(v45 + 8 * v81);
      *(_DWORD *)(v164 + 4LL * v89) = *((_DWORD *)v85 + 12);
      v91 = v174 + v81++;
      v84 = v84 - v90;
      *(_DWORD *)(v161 + 4LL * v89) = v91;
      *v86 = v88 + 1;
    }
    while ( v169 != v81 );
LABEL_81:
    v17 = v82;
    v79 = v182;
    v69 = v184;
    v39 = v85;
  }
  v93 = *((_QWORD *)v39 + 44);
  v94 = *(int *)(v69 + 4LL * *((int *)v39 + 10));
  *(_DWORD *)(v68 + 4 * v94) = *((_DWORD *)v39 + 9);
  *(_DWORD *)(v69 + 4LL * *((int *)v39 + 10)) = *((_DWORD *)v39 + 9);
  *(_DWORD *)(v69 + 4LL * *((int *)v39 + 9)) = v94;
  *(_DWORD *)(v68 + 4LL * *((int *)v39 + 9)) = *((_DWORD *)v39 + 10);
  *(_DWORD *)(v185 + 4LL * *((int *)v39 + 9)) = *(_DWORD *)(v185 + 4LL * *((int *)v39 + 10));
  *(_DWORD *)(v171 + 4LL * *((int *)v39 + 9)) = 0;
  v95 = *((_QWORD *)v39 + 47);
  if ( *((int *)v39 + 90) <= -2 )
    v93 = 0;
  if ( *((int *)v39 + 96) <= -2 )
    v95 = 0;
  v96 = *(int *)(v93 + 4LL * *((int *)v39 + 13));
  *(_DWORD *)(v95 + 4 * v96) = *((_DWORD *)v39 + 12);
  *(_DWORD *)(v93 + 4LL * *((int *)v39 + 13)) = *((_DWORD *)v39 + 12);
  *(_DWORD *)(v93 + 4LL * *((int *)v39 + 12)) = v96;
  *(_DWORD *)(v95 + 4LL * *((int *)v39 + 12)) = *((_DWORD *)v39 + 13);
  v97 = 0;
  if ( v180
    || (v166 = v79,
        v163 = (double *)v45,
        v97 = CoinFactorization::checkPivot(v39, v84, v195),
        v45 = (unsigned __int64)v163,
        v79 = v166,
        v97 != 2) )
  {
    v98 = (__m128d)0x3FF0000000000000uLL;
    v98.m128d_f64[0] = 1.0 / v84;
    v99 = *((int *)v39 + 9);
    *(double *)(v196 + 8 * v99) = 1.0 / v84;
    if ( v79 > 0 )
    {
      v100 = 0;
      v101 = (v45 >> 3) & 1;
      if ( (unsigned int)(v79 - 1) <= 1 )
        goto LABEL_94;
      if ( (_DWORD)v101 )
      {
        v100 = 1;
        *(double *)v45 = *(double *)v45 * v98.m128d_f64[0];
      }
      v102 = v79 - v101;
      v103 = 0;
      v104 = _mm_unpacklo_pd(v98, v98);
      v105 = (unsigned int)(v79 - v101) >> 1;
      v106 = v197 + 8 * (v174 + v101);
      v107 = 0;
      do
      {
        ++v103;
        *(__m128d *)(v106 + v107) = _mm_mul_pd(*(__m128d *)(v106 + v107), v104);
        v107 += 16;
      }
      while ( v103 < v105 );
      v100 += v102 & 0xFFFFFFFE;
      if ( (v102 & 0xFFFFFFFE) != v102 )
      {
LABEL_94:
        v108 = v100;
        v109 = v100 + 1;
        *(double *)(v45 + 8 * v108) = *(double *)(v45 + 8 * v108) * v98.m128d_f64[0];
        if ( v79 > v109 )
          *(double *)(v45 + 8LL * v109) = v98.m128d_f64[0] * *(double *)(v45 + 8LL * v109);
      }
    }
    v110 = v174 + v79;
    if ( v110 < *((_DWORD *)v39 + 146) )
      v110 = *((_DWORD *)v39 + 146);
    ++*((_DWORD *)v39 + 12);
    ++*((_DWORD *)v39 + 14);
    v111 = v99 + 1;
    *((_DWORD *)v39 + 146) = v110;
    ++*((_DWORD *)v39 + 17);
    *((_DWORD *)v39 + 9) = v111;
  }
  else
  {
    v111 = *((_DWORD *)v39 + 9);
  }
  v112 = *((_DWORD *)v39 + 8);
  if ( v112 + 50 >= v111 )
    goto LABEL_105;
  v113 = *((_DWORD *)v39 + 19);
  v114 = v113 >> 1;
  if ( v112 + v112 / 500 + 100 >= v111 )
  {
    v155 = 5 * v112;
    if ( v155 >= v114 )
      v114 = v155;
  }
  else
  {
    v115 = 2 * v112;
    if ( v115 >= v114 )
      v114 = v115;
  }
  v116 = *((_DWORD *)v39 + 18) - v113;
  if ( v114 < v116 && (v117 = v97 == 0 && 2 * v113 < v116) )
  {
    if ( 3 * *((_DWORD *)v39 + 18) > 2 * (*((_DWORD *)v39 + 148) + *((_DWORD *)v39 + 177)) )
    {
      v97 = 3;
      if ( (*((_BYTE *)v39 + 496) & 4) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        v150 = (std::ostream *)std::ostream::operator<<();
        v151 = *(_BYTE **)((char *)v150 + *(_QWORD *)(*(_QWORD *)v150 - 24LL) + 240);
        if ( !v151 )
          std::__throw_bad_cast();
        if ( v151[56] )
        {
          v152 = v151[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v152 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v151 + 48LL))(v151, 10);
        }
        v153 = (std::ostream *)std::ostream::put(v150, v152);
        std::ostream::flush(v153);
        v97 = 3;
      }
      goto LABEL_139;
    }
    v97 = 0;
  }
  else
  {
LABEL_105:
    v117 = v97 <= 1;
  }
  if ( !v160 || !v117 )
  {
LABEL_139:
    v159 = v97;
    CoinIndexedVector::clear(a2);
    return v159;
  }
  v157 = *((_QWORD *)v39 + 100);
  v118 = *((int *)v39 + 199);
  v165 = *((_QWORD *)v39 + 101);
  v119 = 8 * v118;
  v170 = 4 * v118;
  v120 = *((_QWORD *)v39 + 102);
  v162 = v119;
  if ( *((int *)v39 + 206) <= -2 )
    v120 = 0;
  v121 = v111 - 1;
  v122 = v120 + 4LL * *((int *)v39 + 16) + 4;
  v123 = v177;
  if ( v177 <= 0 )
  {
LABEL_142:
    *((_DWORD *)a2 + 4) = 0;
    *((_BYTE *)a2 + 28) = 0;
  }
  else
  {
    v124 = v179;
    v178 = v97;
    v125 = (__int64)&v179[v123 - 1 + 1];
    v126 = v93;
    v127 = v121;
    v128 = v17;
    v129 = v122;
    v130 = v126;
    do
    {
      v139 = *v124;
      v140 = *(int *)(v130 + 4 * v139);
      v141 = *(_DWORD *)(v129 + 4 * v139);
      if ( *((_DWORD *)v39 + 13) == (_DWORD)v140 )
        v131 = *((_DWORD *)v39 + 199);
      else
        v131 = *(_DWORD *)(v129 + 4LL * (int)v140);
      v132 = (int *)(v160 + 4 * v139);
      v133 = (double *)(v128 + 8 * v139);
      v134 = *v133;
      v135 = *v132;
      if ( v131 - v141 <= *v132 )
      {
        v175 = v125;
        v172 = v130;
        ColumnSpaceIterateR = CoinFactorization::getColumnSpaceIterateR(v39, *v124, v134, v127);
        v130 = v172;
        v125 = v175;
        if ( !ColumnSpaceIterateR )
        {
          CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)v39 + 256));
          CoinIndexedVector::clear(a2);
          v97 = v178;
          goto LABEL_142;
        }
      }
      else
      {
        v136 = v135 + v141;
        *v132 = v135 + 1;
        *(_DWORD *)(v165 + 4LL * v136 + v170) = v127;
        v137 = *((_DWORD *)v39 + 13) == (_DWORD)v140;
        *(double *)(v157 + 8LL * v136 + v162) = v134;
        if ( v137 )
        {
          v138 = v136 + 4;
          if ( *((_DWORD *)v39 + 199) <= v138 )
            v138 = *((_DWORD *)v39 + 199);
          *(_DWORD *)(v129 + 4 * v140) = v138;
        }
      }
      ++v124;
      *v133 = 0.0;
    }
    while ( (int *)v125 != v124 );
    v97 = v178;
    *((_DWORD *)a2 + 4) = 0;
    *((_BYTE *)a2 + 28) = 0;
  }
  return (unsigned int)v97;
}

