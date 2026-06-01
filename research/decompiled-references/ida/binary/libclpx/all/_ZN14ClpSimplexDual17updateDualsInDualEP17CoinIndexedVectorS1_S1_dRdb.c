__int64 __fastcall ClpSimplexDual::updateDualsInDual(
        ClpSimplexDual *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        double a5,
        double *a6,
        char a7)
{
  int v10; // edx
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r15
  double v14; // xmm1_8
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r13
  double v25; // xmm2_8
  __int64 v26; // rbp
  __int64 v27; // r14
  __int64 v28; // rcx
  double v29; // xmm0_8
  int v30; // esi
  double *v31; // r9
  double v32; // xmm0_8
  double v33; // xmm3_8
  double v34; // xmm0_8
  int v35; // eax
  double v36; // xmm3_8
  double *v37; // rdi
  double v38; // xmm3_8
  bool v39; // cl
  CoinIndexedVector *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r14
  int v43; // eax
  __int64 v44; // r15
  double v45; // xmm1_8
  ClpSimplexDual *v46; // r10
  __int64 v47; // r8
  __int64 v48; // r13
  __int64 v49; // rbx
  __int64 v50; // rsi
  double v51; // xmm0_8
  int v52; // edi
  double *v53; // rbp
  double v54; // xmm3_8
  double v55; // xmm0_8
  int v56; // ebp
  double v57; // xmm3_8
  CoinIndexedVector *v58; // rax
  int v59; // r8d
  __int64 v60; // rcx
  double v61; // xmm3_8
  __int64 v62; // rdx
  __int64 v63; // rdi
  double v64; // xmm0_8
  _BYTE *v65; // r9
  unsigned int v66; // esi
  char v67; // al
  double v68; // xmm0_8
  int v69; // eax
  double v70; // xmm0_8
  _BYTE *v71; // rdx
  double *v72; // rdi
  double v73; // xmm11_8
  bool v74; // dl
  __int64 v75; // r12
  __int64 v76; // r13
  __int64 v77; // r14
  CoinIndexedVector *v78; // rax
  __int64 v79; // rax
  __int64 v80; // r14
  __int64 v81; // r15
  __int64 v82; // rdi
  double v83; // xmm3_8
  __int64 v84; // rbp
  __int64 v85; // r13
  double v86; // xmm0_8
  _BYTE *v87; // r11
  unsigned int v88; // r10d
  char v89; // si
  int v90; // r12d
  double v91; // xmm0_8
  _BYTE *v92; // rsi
  double v93; // xmm0_8
  CoinIndexedVector *v94; // rax
  CoinIndexedVector *v95; // rdx
  double v97; // xmm0_8
  double v98; // xmm0_8
  _BYTE *v99; // rdx
  double v100; // xmm0_8
  bool v101; // dl
  double v102; // xmm0_8
  __int64 v103; // xmm11_8
  _BYTE *v104; // rsi
  double v105; // xmm0_8
  double v106; // xmm0_8
  __int64 v107; // xmm4_8
  __int64 v108; // r13
  double v109; // xmm5_8
  __int64 v110; // rbp
  __int64 v111; // r12
  __int64 v112; // r15
  __int64 v113; // rdi
  double v114; // xmm0_8
  char v115; // si
  double *v116; // rsi
  double v117; // xmm3_8
  double v118; // xmm0_8
  __int64 v119; // rsi
  double *v120; // rsi
  double v121; // xmm3_8
  bool v122; // dl
  __int64 v123; // rax
  __int64 v124; // rdx
  bool v125; // cl
  __int64 v126; // rcx
  bool v127; // dl
  __int64 v128; // rax
  __int64 v129; // rdx
  double v130; // xmm0_8
  int v134; // [rsp+10h] [rbp-A8h]
  __int64 v135; // [rsp+18h] [rbp-A0h]
  ClpSimplexDual *v136; // [rsp+18h] [rbp-A0h]
  int v137; // [rsp+18h] [rbp-A0h]
  __int64 v139; // [rsp+28h] [rbp-90h]
  double v140; // [rsp+28h] [rbp-90h]
  __int64 v141; // [rsp+28h] [rbp-90h]
  int v142; // [rsp+28h] [rbp-90h]
  double v143; // [rsp+30h] [rbp-88h]
  __int64 v144; // [rsp+30h] [rbp-88h]
  __int64 v145; // [rsp+30h] [rbp-88h]
  double v146; // [rsp+30h] [rbp-88h]
  int v147; // [rsp+30h] [rbp-88h]
  __int64 v148; // [rsp+38h] [rbp-80h]
  double v149; // [rsp+38h] [rbp-80h]
  __int64 v150; // [rsp+40h] [rbp-78h]
  __int64 v151; // [rsp+48h] [rbp-70h]
  int v152; // [rsp+48h] [rbp-70h]
  __int64 v153; // [rsp+50h] [rbp-68h]
  __int64 v154; // [rsp+50h] [rbp-68h]
  double v155; // [rsp+50h] [rbp-68h]
  __int64 v156; // [rsp+58h] [rbp-60h]
  double v157; // [rsp+58h] [rbp-60h]
  _OWORD v158[5]; // [rsp+60h] [rbp-58h]

  CoinIndexedVector::clear(a4);
  v10 = *((_DWORD *)this + 27);
  v11 = *(_QWORD *)a2;
  v12 = *((_QWORD *)this + 148);
  v139 = *((_QWORD *)this + 127);
  v13 = *((_QWORD *)this + 124);
  v135 = *((_QWORD *)this + 130);
  v14 = fmin(0.01, *((double *)this + 96)) + *((double *)this + 109);
  if ( !a7 )
  {
    v15 = v10;
    v16 = *((_DWORD *)a2 + 4);
    v17 = *((_QWORD *)this + 128);
    v18 = *((_QWORD *)this + 33);
    v153 = *((_QWORD *)this + 149);
    v19 = *((_QWORD *)this + 125);
    v20 = *((_QWORD *)a2 + 1);
    v150 = *((_QWORD *)this + 131);
    v158[0] = 0;
    v148 = v19;
    v151 = v17;
    v158[1] = xmmword_28D780;
    if ( v16 > 0 )
    {
      v22 = (unsigned int)(v16 - 1);
      v23 = 0;
      v24 = v22 + 1;
      v25 = 0.0;
      v26 = 0;
      v27 = v18 + v15;
      while ( 1 )
      {
        v28 = *(int *)(v11 + 4 * v23);
        v29 = *(double *)(v20 + 8 * v23);
        *(_QWORD *)(v20 + 8 * v23) = 0;
        v30 = v28;
        if ( (*(_BYTE *)(v27 + v28) & 3) == 1 )
          goto LABEL_4;
        v31 = (double *)(v12 + 8 * v28);
        v32 = *v31 - v29 * a5;
        v33 = *((double *)v158 + (*(_BYTE *)(v27 + v28) & 3));
        *v31 = v32;
        if ( -v14 <= v32 * v33 )
          goto LABEL_4;
        v34 = *(double *)(v13 + 8 * v28) - *(double *)(v139 + 8 * v28);
        *(_DWORD *)(v11 + 4 * v26) = v28;
        v35 = v26 + 1;
        v36 = v33 * v34;
        v37 = (double *)(*((_QWORD *)a4 + 1) + 8 * v28);
        v25 = v25 - *(double *)(v135 + 8 * v28) * v36;
        if ( *v37 == 0.0 )
        {
          if ( v36 <= 0.0 )
            v125 = v36 <= -1.0e-50;
          else
            v125 = v36 >= 1.0e-50;
          v26 = v35;
          if ( v125 )
          {
            v126 = *(_QWORD *)a4;
            v147 = *((_DWORD *)a4 + 4);
            *((_DWORD *)a4 + 4) = v147 + 1;
            *(_DWORD *)(v126 + 4LL * v147) = v30;
            *v37 = v36;
          }
          goto LABEL_4;
        }
        v38 = v36 + *v37;
        if ( v38 <= 0.0 )
          v39 = v38 <= -1.0e-50;
        else
          v39 = v38 >= 1.0e-50;
        if ( v39 )
        {
          ++v23;
          *v37 = v38;
          v26 = v35;
          if ( v24 == v23 )
          {
LABEL_12:
            v40 = a2;
            v158[0] = xmmword_28D780;
            *((_DWORD *)a2 + 4) = v26;
            if ( (_DWORD)v26 )
              goto LABEL_13;
            goto LABEL_81;
          }
        }
        else
        {
          v26 = v35;
          *v37 = 1.0e-100;
LABEL_4:
          if ( v24 == ++v23 )
            goto LABEL_12;
        }
      }
    }
    v40 = a2;
    v25 = 0.0;
    v158[0] = xmmword_28D780;
    *((_DWORD *)a2 + 4) = 0;
LABEL_81:
    *((_BYTE *)v40 + 28) = 0;
    LODWORD(v26) = 0;
LABEL_13:
    LODWORD(v41) = *((_DWORD *)this + 182) & 8;
    v42 = *((_QWORD *)a3 + 1);
    v43 = *((_DWORD *)a3 + 4);
    v44 = *(_QWORD *)a3;
    if ( (_DWORD)v41 )
    {
      if ( v43 <= 0 )
      {
        v58 = a3;
        *((_DWORD *)a3 + 4) = 0;
        goto LABEL_22;
      }
      v45 = -v14;
      v46 = this;
      v47 = v153;
      v48 = 0;
      v41 = 0;
      v134 = v26;
      v49 = (unsigned int)(v43 - 1) + 1LL;
      do
      {
        v50 = *(int *)(v44 + 4 * v48);
        v51 = *(double *)(v42 + 8 * v48);
        *(_QWORD *)(v42 + 8 * v48) = 0;
        v52 = (*(_BYTE *)(v18 + v50) & 3) - 1;
        if ( (*(_BYTE *)(v18 + v50) & 3) != 1 )
        {
          v53 = (double *)(v47 + 8 * v50);
          v54 = *v53 - v51 * a5;
          v55 = *((double *)&v158[-1] + (*(_BYTE *)(v18 + v50) & 3));
          *v53 = v54;
          if ( v45 > v54 * v55 && v52 > 0 )
          {
            v156 = v47;
            v143 = a5;
            v56 = v41 + 1;
            v136 = v46;
            v57 = *(double *)(v151 + 8 * v50) - *(double *)(v148 + 8 * v50);
            *(_DWORD *)(v44 + 4 * v41) = v50;
            v140 = v25 + *(double *)(v150 + 8 * v50) * (v55 * v57);
            (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, CoinIndexedVector *, __int64))(**((_QWORD **)v46 + 24)
                                                                                           + 248LL))(
              *((_QWORD *)v46 + 24),
              v46,
              a4,
              v50);
            v47 = v156;
            v41 = v56;
            v46 = v136;
            a5 = v143;
            v25 = v140;
          }
        }
        ++v48;
      }
      while ( v49 != v48 );
      v58 = a3;
      LODWORD(v26) = v134;
      *((_DWORD *)a3 + 4) = v41;
      if ( (_DWORD)v41 )
LABEL_93:
        LODWORD(v26) = v41 + v26;
      else
LABEL_22:
        *((_BYTE *)v58 + 28) = 0;
      goto LABEL_52;
    }
    if ( v43 <= 0 )
    {
      v58 = a3;
      *((_DWORD *)a3 + 4) = 0;
      goto LABEL_22;
    }
    v137 = v26;
    v108 = 0;
    v109 = -v14;
    v110 = (unsigned int)(v43 - 1) + 1LL;
    v111 = *(_QWORD *)a3;
    v112 = v153;
    while ( 1 )
    {
      while ( 1 )
      {
        v113 = *(int *)(v111 + 4 * v108);
        v114 = *(double *)(v42 + 8 * v108);
        *(_QWORD *)(v42 + 8 * v108) = 0;
        v115 = *(_BYTE *)(*((_QWORD *)this + 33) + v113) & 7;
        if ( v115 == 3 )
          break;
        if ( v115 == 2 )
        {
          v120 = (double *)(v112 + 8 * v113);
          v121 = *v120 - v114 * a5;
          *v120 = v121;
          if ( v121 > v14 )
          {
            v157 = v109;
            *(_DWORD *)(v111 + 4LL * (int)v41) = v113;
            v155 = a5;
            v142 = v41 + 1;
            v118 = *(double *)(v148 + 8 * v113);
            v119 = v151;
            goto LABEL_91;
          }
        }
        else if ( !v115 )
        {
          *(double *)(v112 + 8 * v113) = *(double *)(v112 + 8 * v113) - v114 * a5;
        }
LABEL_87:
        if ( ++v108 == v110 )
          goto LABEL_92;
      }
      v116 = (double *)(v112 + 8 * v113);
      v117 = *v116 - v114 * a5;
      *v116 = v117;
      if ( v109 <= v117 )
        goto LABEL_87;
      v157 = v109;
      v155 = a5;
      v142 = v41 + 1;
      v118 = *(double *)(v151 + 8 * v113);
      v119 = v148;
      *(_DWORD *)(v111 + 4LL * (int)v41) = v113;
LABEL_91:
      ++v108;
      v146 = v25 + *(double *)(v150 + 8 * v113) * (v118 - *(double *)(v119 + 8 * v113));
      (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, CoinIndexedVector *, __int64))(**((_QWORD **)this + 24) + 248LL))(
        *((_QWORD *)this + 24),
        this,
        a4,
        v113);
      LODWORD(v41) = v142;
      v25 = v146;
      a5 = v155;
      v109 = v157;
      if ( v108 == v110 )
      {
LABEL_92:
        v58 = a3;
        LODWORD(v26) = v137;
        *((_DWORD *)a3 + 4) = v41;
        if ( (_DWORD)v41 )
          goto LABEL_93;
        goto LABEL_22;
      }
    }
  }
  v59 = *((_DWORD *)this + 26);
  if ( v59 > 0 )
  {
    v144 = *((_QWORD *)this + 151);
    v60 = 0;
    v25 = 0.0;
    v26 = 0;
    v61 = -v14;
    while ( 1 )
    {
      v62 = (int)v60 + v10;
      v63 = 8 * v60;
      v64 = *(double *)(v12 + 8 * v60);
      v65 = (_BYTE *)(v62 + *((_QWORD *)this + 33));
      v66 = (unsigned __int8)*v65;
      v67 = *v65 & 7;
      if ( v67 != 2 )
        break;
      if ( v64 <= v14 )
      {
        if ( v64 <= v61 || ((v66 >> 3) & 3) != 2 )
          goto LABEL_26;
        v102 = *(double *)(v13 + 8 * v60) - *(double *)(v139 + 8 * v60);
        *v65 = v66 & 0xF8 | 3;
        v103 = *(_QWORD *)(v13 + 8 * v60);
        goto LABEL_79;
      }
      v68 = *(double *)(v13 + 8 * v60);
      *(_DWORD *)(v11 + 4 * v26) = v60;
      v69 = v26 + 1;
      v70 = v68 - *(double *)(v139 + 8 * v60);
      if ( fabs(v70) > *((double *)this + 98) )
      {
        v71 = (_BYTE *)(*((_QWORD *)this + 33) + v62);
        if ( (*v71 & 0x18) == 0 )
        {
          *v71 = *v71 & 0xE7 | 8;
          v130 = *(double *)(v139 + 8 * v60) - *((double *)this + 98);
          *(double *)(v13 + 8 * v60) = v130;
          v59 = *((_DWORD *)this + 26);
          v70 = v130 - *(double *)(v139 + 8 * v60);
          ++*((_DWORD *)this + 334);
        }
      }
      v72 = (double *)(*((_QWORD *)a4 + 1) + v63);
      v25 = v25 + *(double *)(v135 + 8 * v60) * v70;
      if ( *v72 == 0.0 )
      {
        if ( v70 >= 0.0 )
          v122 = v70 >= 1.0e-50;
        else
          v122 = v70 <= -1.0e-50;
        v26 = v69;
        if ( v122 )
        {
          v123 = *((int *)a4 + 4);
          v124 = *(_QWORD *)a4;
          *((_DWORD *)a4 + 4) = v123 + 1;
          *(_DWORD *)(v124 + 4 * v123) = v60;
          *v72 = -v70;
        }
        goto LABEL_26;
      }
      v73 = *v72 - v70;
      if ( v73 <= 0.0 )
        v74 = v73 <= -1.0e-50;
      else
        v74 = v73 >= 1.0e-50;
      if ( v74 )
        goto LABEL_114;
      v26 = v69;
      ++v60;
      *v72 = 1.0e-100;
      if ( (int)v60 >= v59 )
      {
LABEL_38:
        v75 = *((_QWORD *)this + 149);
        v76 = *((_QWORD *)this + 125);
        v77 = *((_QWORD *)this + 128);
        v154 = *((_QWORD *)this + 152);
        v141 = *((_QWORD *)this + 131);
        v78 = a2;
        *((_DWORD *)a2 + 4) = v26;
        v10 = *((_DWORD *)this + 27);
        if ( (_DWORD)v26 )
          goto LABEL_39;
        goto LABEL_97;
      }
LABEL_27:
      v10 = *((_DWORD *)this + 27);
    }
    if ( v67 != 3 )
      goto LABEL_26;
    if ( v61 > v64 )
    {
      v97 = *(double *)(v139 + 8 * v60);
      *(_DWORD *)(v11 + 4 * v26) = v60;
      v69 = v26 + 1;
      v98 = v97 - *(double *)(v13 + 8 * v60);
      if ( fabs(v98) > *((double *)this + 98) )
      {
        v99 = (_BYTE *)(*((_QWORD *)this + 33) + v62);
        if ( (*v99 & 0x18) == 0 )
        {
          *v99 = *v99 & 0xE7 | 0x10;
          v100 = *(double *)(v13 + 8 * v60) + *((double *)this + 98);
          *(double *)(v139 + 8 * v60) = v100;
          v59 = *((_DWORD *)this + 26);
          v98 = v100 - *(double *)(v13 + 8 * v60);
          ++*((_DWORD *)this + 334);
        }
      }
      v72 = (double *)(*((_QWORD *)a4 + 1) + v63);
      v25 = v25 + *(double *)(v135 + 8 * v60) * v98;
      if ( *v72 == 0.0 )
      {
        if ( v98 >= 0.0 )
          v127 = v98 >= 1.0e-50;
        else
          v127 = v98 <= -1.0e-50;
        v26 = v69;
        if ( v127 )
        {
          v128 = *((int *)a4 + 4);
          v129 = *(_QWORD *)a4;
          *((_DWORD *)a4 + 4) = v128 + 1;
          *(_DWORD *)(v129 + 4 * v128) = v60;
          *v72 = -v98;
        }
      }
      else
      {
        v73 = *v72 - v98;
        if ( v73 <= 0.0 )
          v101 = v73 <= -1.0e-50;
        else
          v101 = v73 >= 1.0e-50;
        if ( v101 )
        {
LABEL_114:
          *v72 = v73;
          v26 = v69;
        }
        else
        {
          v26 = v69;
          *v72 = 1.0e-100;
        }
      }
LABEL_26:
      if ( (int)++v60 >= v59 )
        goto LABEL_38;
      goto LABEL_27;
    }
    if ( v14 <= v64 || ((v66 >> 3) & 3) != 1 )
      goto LABEL_26;
    v102 = *(double *)(v139 + 8 * v60) - *(double *)(v13 + 8 * v60);
    *v65 = v66 & 0xF8 | 2;
    v103 = *(_QWORD *)(v139 + 8 * v60);
LABEL_79:
    *(_QWORD *)(v144 + 8 * v60) = v103;
    v59 = *((_DWORD *)this + 26);
    v25 = v25 + v102 * *(double *)(v135 + 8 * v60);
    goto LABEL_26;
  }
  v25 = 0.0;
  v75 = *((_QWORD *)this + 149);
  v76 = *((_QWORD *)this + 125);
  v77 = *((_QWORD *)this + 128);
  v154 = *((_QWORD *)this + 152);
  v141 = *((_QWORD *)this + 131);
  v78 = a2;
  *((_DWORD *)a2 + 4) = 0;
LABEL_97:
  *((_BYTE *)v78 + 28) = 0;
  LODWORD(v26) = 0;
LABEL_39:
  v145 = *(_QWORD *)a3;
  if ( v10 <= 0 )
  {
    v94 = a3;
    *((_DWORD *)a3 + 4) = 0;
    goto LABEL_116;
  }
  v79 = v77;
  v152 = v26;
  v80 = v76;
  v81 = 0;
  v82 = 0;
  v83 = -v14;
  v84 = v75;
  v85 = v79;
  do
  {
    while ( 1 )
    {
      v86 = *(double *)(v84 + 8 * v81);
      v87 = (_BYTE *)(v81 + *((_QWORD *)this + 33));
      v88 = (unsigned __int8)*v87;
      v89 = *v87 & 7;
      if ( v89 != 3 )
        break;
      if ( v83 > v86 )
      {
        v90 = v82 + 1;
        v91 = *(double *)(v85 + 8 * v81) - *(double *)(v80 + 8 * v81);
        *(_DWORD *)(v145 + 4 * v82) = v81;
        if ( fabs(v91) > *((double *)this + 98) )
        {
          v92 = (_BYTE *)(v81 + *((_QWORD *)this + 33));
          if ( (*v92 & 0x18) == 0 )
          {
            *v92 = *v92 & 0xE7 | 0x10;
            v93 = *(double *)(v80 + 8 * v81) + *((double *)this + 98);
            *(double *)(v85 + 8 * v81) = v93;
            v91 = v93 - *(double *)(v80 + 8 * v81);
            ++*((_DWORD *)this + 334);
          }
        }
        goto LABEL_48;
      }
      if ( v14 > v86 && ((v88 >> 3) & 3) == 1 )
      {
        v106 = *(double *)(v85 + 8 * v81) - *(double *)(v80 + 8 * v81);
        *v87 = v88 & 0xF8 | 2;
        v107 = *(_QWORD *)(v85 + 8 * v81);
LABEL_75:
        *(_QWORD *)(v154 + 8 * v81) = v107;
        v10 = *((_DWORD *)this + 27);
        v25 = v25 + v106 * *(double *)(v141 + 8 * v81);
      }
LABEL_42:
      if ( (int)++v81 >= v10 )
        goto LABEL_49;
    }
    if ( v89 != 2 )
      goto LABEL_42;
    if ( v86 <= v14 )
    {
      if ( v86 <= v83 || ((v88 >> 3) & 3) != 2 )
        goto LABEL_42;
      v106 = *(double *)(v80 + 8 * v81) - *(double *)(v85 + 8 * v81);
      *v87 = v88 & 0xF8 | 3;
      v107 = *(_QWORD *)(v80 + 8 * v81);
      goto LABEL_75;
    }
    v90 = v82 + 1;
    v91 = *(double *)(v80 + 8 * v81) - *(double *)(v85 + 8 * v81);
    *(_DWORD *)(v145 + 4 * v82) = v81;
    if ( fabs(v91) > *((double *)this + 98) )
    {
      v104 = (_BYTE *)(v81 + *((_QWORD *)this + 33));
      if ( (*v104 & 0x18) == 0 )
      {
        *v104 = *v104 & 0xE7 | 8;
        v105 = *(double *)(v85 + 8 * v81) - *((double *)this + 98);
        *(double *)(v80 + 8 * v81) = v105;
        v91 = v105 - *(double *)(v85 + 8 * v81);
        ++*((_DWORD *)this + 334);
      }
    }
LABEL_48:
    v149 = v25 + *(double *)(v141 + 8 * v81) * v91;
    (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, CoinIndexedVector *, _QWORD))(**((_QWORD **)this + 24) + 248LL))(
      *((_QWORD *)this + 24),
      this,
      a4,
      (unsigned int)v81);
    v10 = *((_DWORD *)this + 27);
    ++v81;
    v82 = v90;
    v25 = v149;
  }
  while ( (int)v81 < v10 );
LABEL_49:
  v94 = a3;
  LODWORD(v26) = v152;
  *((_DWORD *)a3 + 4) = v82;
  if ( (_DWORD)v82 )
  {
    LODWORD(v26) = v82 + v152;
    v95 = a3;
    goto LABEL_51;
  }
LABEL_116:
  *((_BYTE *)v94 + 28) = 0;
  v95 = v94;
LABEL_51:
  ClpSimplexDual::flipBounds(this, a2, v95);
LABEL_52:
  *a6 = v25 + *a6;
  return (unsigned int)v26;
}

