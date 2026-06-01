CoinIndexedVector *__fastcall ClpPrimalColumnSteepest::djsAndSteepest(
        ClpPrimalColumnSteepest *this,
        double **a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  double **v8; // rbp
  __int64 v9; // rax
  double v10; // xmm5_8
  double v11; // xmm0_8
  __int64 v12; // rsi
  double v13; // xmm5_8
  signed int v14; // edi
  int v15; // eax
  double v16; // xmm8_8
  int v17; // edi
  __int64 v18; // rax
  int v19; // edi
  CoinIndexedVector *v20; // rcx
  __int64 v21; // r10
  double *v22; // r9
  double *v23; // r12
  __int64 v24; // r14
  int v25; // r8d
  double v26; // xmm0_8
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // r11
  double v30; // xmm1_8
  signed int v31; // ecx
  double *v32; // r13
  double *v33; // rbp
  double v34; // xmm2_8
  double v35; // xmm1_8
  double v36; // xmm13_8
  double v37; // xmm1_8
  int v38; // r11d
  double v39; // xmm1_8
  __int64 v40; // rdx
  double *v41; // r11
  double v42; // xmm2_8
  int v43; // esi
  double *v44; // rax
  double *v45; // rdx
  double *v46; // r13
  double *v47; // rbp
  double v48; // xmm2_8
  double v49; // xmm1_8
  double v50; // xmm13_8
  double v51; // xmm1_8
  int v52; // r11d
  double v53; // xmm1_8
  __int64 *v54; // r11
  double *v55; // rdx
  double v56; // xmm1_8
  bool v57; // bp
  __int64 v58; // rbp
  __int64 v59; // r13
  double *v60; // r13
  double *v61; // rbp
  double v62; // xmm2_8
  double v63; // xmm1_8
  double v64; // xmm13_8
  double v65; // xmm1_8
  int v66; // r11d
  double v67; // xmm1_8
  int v68; // r14d
  __int64 v69; // r13
  __int64 v70; // r12
  __int64 *v71; // r11
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rsi
  double v75; // xmm0_8
  __int64 v76; // rcx
  double *v77; // rdx
  double v78; // xmm0_8
  bool v79; // cl
  double *v80; // rax
  double *v82; // rdx
  bool v83; // cl
  __int64 v84; // r9
  __int64 v85; // r10
  __int64 v86; // rax
  __int64 v87; // r14
  __int64 v88; // rcx
  double v89; // xmm1_8
  __int64 v90; // rdx
  int v91; // r8d
  double *v92; // rsi
  double v93; // xmm0_8
  double v94; // xmm0_8
  unsigned __int8 v95; // cl
  double *v96; // rcx
  double v97; // xmm0_8
  double *v98; // rdx
  double v99; // xmm1_8
  bool v100; // cl
  double *v101; // rdx
  bool v102; // cl
  bool v103; // r8
  __int64 v104; // r8
  __int64 v105; // r9
  double *v106; // rdx
  bool v107; // cl
  __int64 v108; // rcx
  double v109; // [rsp+0h] [rbp-98h]
  __int64 v110; // [rsp+0h] [rbp-98h]
  __int64 v111; // [rsp+10h] [rbp-88h]
  __int64 v113; // [rsp+20h] [rbp-78h]
  double v114; // [rsp+28h] [rbp-70h]
  signed int v115; // [rsp+34h] [rbp-64h]
  CoinIndexedVector *v116; // [rsp+38h] [rbp-60h]
  int v118; // [rsp+48h] [rbp-50h]
  CoinIndexedVector *v119; // [rsp+50h] [rbp-48h]
  CoinIndexedVector *v120; // [rsp+58h] [rbp-40h]

  v8 = a2;
  v9 = *((_QWORD *)this + 1);
  v10 = 1.0 / *a2[1];
  v111 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL);
  v11 = fmin(0.01, *(double *)(v9 + 768)) + *(double *)(v9 + 872);
  *((_DWORD *)this + 23) = -1;
  v114 = v11;
  v109 = v10;
  ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v9 + 1264), a3, (CoinIndexedVector *)a2);
  ClpFactorization::updateColumnTranspose(
    *(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL),
    a3,
    *((CoinIndexedVector **)this + 6));
  v12 = *((_QWORD *)this + 1);
  v13 = v109;
  v14 = *(_DWORD *)(v12 + 1152);
  v115 = v14;
  if ( *((_DWORD *)this + 19) == 1 )
  {
    v16 = -1.0;
  }
  else
  {
    v15 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v14 >> 5));
    if ( _bittest(&v15, v14) )
      v16 = 1.0;
    else
      v16 = 0.0;
  }
  v113 = 0;
  v17 = *(_DWORD *)(v12 + 1160);
  v118 = v17;
  v18 = *((_QWORD *)this + 4);
  if ( v17 >= 0 )
    v113 = *(_QWORD *)(v18 + 8LL * v17);
  v19 = *((_DWORD *)v8 + 4);
  v20 = *((CoinIndexedVector **)this + 6);
  v21 = *(_QWORD *)(v12 + 1184);
  v22 = *v8;
  v23 = v8[1];
  v116 = v20;
  v24 = *((_QWORD *)v20 + 1);
  v25 = *(_DWORD *)(v12 + 108);
  v26 = -v109;
  v110 = v18 + 8LL * v25;
  if ( v19 > 0 )
  {
    v120 = a4;
    v27 = 0;
    v28 = (unsigned int)(v19 - 1) + 1LL;
    v119 = (CoinIndexedVector *)v8;
    while ( 1 )
    {
      v29 = *((int *)v22 + v27);
      v30 = v23[v27];
      v31 = v29 + v25;
      switch ( *(_BYTE *)(*(_QWORD *)(v12 + 264) + (int)v29 + v25) & 7 )
      {
        case 0:
        case 4:
          v60 = (double *)(v21 + 8 * v29);
          v61 = (double *)(v110 + 8 * v29);
          v62 = *v60 - v30;
          v63 = v30 * v13;
          v64 = v63 * v63;
          v65 = v63 * *(double *)(v24 + 8 * v29) + *((double *)this + 3) * (v63 * v63) + *v61;
          *v60 = v62;
          if ( v65 < 0.0001 )
          {
            if ( *((_DWORD *)this + 19) == 1 )
            {
              v65 = fmax(0.0001, v64 + 1.0);
            }
            else
            {
              v66 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v31 >> 5));
              v67 = v64 * v16;
              if ( _bittest(&v66, v31) )
                v67 = v67 + 1.0;
              v65 = fmax(v67, 0.0001);
            }
          }
          *v61 = v65;
          v40 = 8LL * v31;
          if ( fabs(v62) <= 100.0 * v114 )
            goto LABEL_80;
          v41 = (double *)(v40 + v111);
          v42 = v62 * 10.0 * (v62 * 10.0);
          if ( *(double *)(v40 + v111) != 0.0 )
            goto LABEL_16;
          goto LABEL_48;
        case 1:
          v45 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 8LL * ((int)v29 + v25));
          if ( *v45 != 0.0 )
            *v45 = 2.225073858507201e-308;
          *(_QWORD *)(v21 + 8 * v29) = 0;
          goto LABEL_26;
        case 2:
          v32 = (double *)(v21 + 8 * v29);
          v33 = (double *)(v110 + 8 * v29);
          v34 = *v32 - v30;
          v35 = v30 * v13;
          v36 = v35 * v35;
          v37 = v35 * *(double *)(v24 + 8 * v29) + *((double *)this + 3) * (v35 * v35) + *v33;
          *v32 = v34;
          if ( v37 < 0.0001 )
          {
            if ( *((_DWORD *)this + 19) == 1 )
            {
              v37 = fmax(0.0001, v36 + 1.0);
            }
            else
            {
              v38 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v31 >> 5));
              v39 = v36 * v16;
              if ( _bittest(&v38, v31) )
                v39 = v39 + 1.0;
              v37 = fmax(v39, 0.0001);
            }
          }
          v40 = 8LL * v31;
          *v33 = v37;
          if ( v34 <= v114 )
            goto LABEL_80;
          v41 = (double *)(v40 + v111);
          v42 = v34 * (1.01 * v34);
          if ( *(double *)(v40 + v111) != 0.0 )
            goto LABEL_16;
LABEL_48:
          v54 = *((__int64 **)this + 5);
          v55 = (double *)(v54[1] + v40);
          v56 = *v55;
          if ( *v55 != 0.0 )
            goto LABEL_82;
          if ( v42 > 0.0 )
            goto LABEL_37;
          v57 = v42 <= -1.0e-50;
          goto LABEL_38;
        case 3:
          v46 = (double *)(v21 + 8 * v29);
          v47 = (double *)(v110 + 8 * v29);
          v48 = *v46 - v30;
          v49 = v30 * v13;
          v50 = v49 * v49;
          v51 = v49 * *(double *)(v24 + 8 * v29) + *((double *)this + 3) * (v49 * v49) + *v47;
          *v46 = v48;
          if ( v51 < 0.0001 )
          {
            if ( *((_DWORD *)this + 19) == 1 )
            {
              v51 = fmax(0.0001, v50 + 1.0);
            }
            else
            {
              v52 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v31 >> 5));
              v53 = v50 * v16;
              if ( _bittest(&v52, v31) )
                v53 = v53 + 1.0;
              v51 = fmax(v53, 0.0001);
            }
          }
          v40 = 8LL * v31;
          *v47 = v51;
          if ( -v114 <= v48 )
          {
LABEL_80:
            v82 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + v40);
            if ( *v82 != 0.0 )
              *v82 = 2.225073858507201e-308;
            goto LABEL_26;
          }
          v41 = (double *)(v40 + v111);
          v42 = v48 * (v48 * 1.01);
          if ( *(double *)(v40 + v111) == 0.0 )
          {
            v54 = *((__int64 **)this + 5);
            v55 = (double *)(v54[1] + v40);
            v56 = *v55;
            if ( *v55 == 0.0 )
            {
              if ( v42 <= 0.0 )
                v57 = v42 <= -1.0e-50;
              else
LABEL_37:
                v57 = v42 >= 1.0e-50;
LABEL_38:
              if ( !v57 )
                goto LABEL_26;
              v58 = *((int *)v54 + 4);
              v59 = *v54;
              *((_DWORD *)v54 + 4) = v58 + 1;
              *(_DWORD *)(v59 + 4 * v58) = v31;
            }
            else
            {
LABEL_82:
              v42 = v42 + v56;
              if ( v42 <= 0.0 )
                v83 = v42 <= -1.0e-50;
              else
                v83 = v42 >= 1.0e-50;
              if ( !v83 )
              {
                *v55 = 1.0e-100;
                goto LABEL_26;
              }
            }
            *v55 = v42;
LABEL_26:
            if ( v28 == ++v27 )
            {
LABEL_17:
              v8 = (double **)v119;
              a4 = v120;
              v43 = ClpPrimalColumnSteepest::transposeTimes2(this, v119, v120, v116, a5, a3, v26);
              goto LABEL_18;
            }
          }
          else
          {
LABEL_16:
            ++v27;
            *v41 = v42;
            if ( v28 == v27 )
              goto LABEL_17;
          }
          break;
        default:
          goto LABEL_26;
      }
    }
  }
  v43 = ClpPrimalColumnSteepest::transposeTimes2(this, (const CoinIndexedVector *)v8, a4, v20, a5, a3, v26);
  if ( v19 )
  {
LABEL_18:
    if ( v19 / 8 > 0 )
    {
      v44 = v23;
      do
      {
        *v44 = 0.0;
        v44[1] = 0.0;
        v44 += 8;
        *(v44 - 6) = 0.0;
        *(v44 - 5) = 0.0;
        *(v44 - 4) = 0.0;
        *(v44 - 3) = 0.0;
        *(v44 - 2) = 0.0;
        *(v44 - 1) = 0.0;
      }
      while ( v44 != &v23[8 * (unsigned int)(v19 / 8 - 1) + 8] );
      v23 += 8 * (v19 / 8 - 1) + 8;
    }
    switch ( v19 % 8 )
    {
      case 1:
        goto LABEL_58;
      case 2:
        goto LABEL_57;
      case 3:
        goto LABEL_56;
      case 4:
        goto LABEL_55;
      case 5:
        goto LABEL_54;
      case 6:
        goto LABEL_53;
      case 7:
        v23[6] = 0.0;
LABEL_53:
        v23[5] = 0.0;
LABEL_54:
        v23[4] = 0.0;
LABEL_55:
        v23[3] = 0.0;
LABEL_56:
        v23[2] = 0.0;
LABEL_57:
        v23[1] = 0.0;
LABEL_58:
        *v23 = 0.0;
        break;
      default:
        break;
    }
  }
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 6));
  if ( v43 == 2 )
  {
    v72 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL);
    goto LABEL_75;
  }
  v68 = *((_DWORD *)a4 + 4);
  v69 = *(_QWORD *)a4;
  v70 = *((_QWORD *)a4 + 1);
  if ( *((_DWORD *)this + 20) )
    ClpPrimalColumnSteepest::redoInfeasibilities(this);
  v71 = *((__int64 **)this + 5);
  v72 = v71[1];
  if ( v43 != 1 )
  {
    if ( v43 )
      goto LABEL_75;
    v84 = *((_QWORD *)this + 1);
    v85 = *(_QWORD *)(v84 + 1192);
    if ( v68 <= 0 )
      goto LABEL_75;
    v86 = 0;
    v87 = (unsigned int)(v68 - 1) + 1LL;
    while ( 1 )
    {
      v88 = *(int *)(v69 + 4 * v86);
      v89 = *(double *)(v70 + 8 * v86);
      v90 = 8 * v88;
      v91 = *(_DWORD *)(v69 + 4 * v86);
      v92 = (double *)(v85 + 8 * v88);
      v93 = *v92;
      *(_QWORD *)(v70 + 8 * v86) = 0;
      v94 = v93 - v89;
      *v92 = v94;
      v95 = *(_BYTE *)(*(_QWORD *)(v84 + 264) + v88) & 7;
      if ( v95 == 2 )
      {
        if ( v94 <= v114 )
        {
LABEL_107:
          v101 = (double *)(v72 + v90);
          if ( *v101 != 0.0 )
            *v101 = 2.225073858507201e-308;
          goto LABEL_98;
        }
        v97 = v94 * v94;
        v96 = (double *)(v111 + v90);
        if ( *(double *)(v111 + v90) != 0.0 )
          goto LABEL_97;
        v98 = (double *)(v72 + v90);
        v99 = *v98;
        if ( *v98 != 0.0 )
        {
LABEL_103:
          v97 = v97 + v99;
          if ( v97 <= 0.0 )
            v100 = v97 <= -1.0e-50;
          else
            v100 = v97 >= 1.0e-50;
          if ( v100 )
            goto LABEL_133;
          *v98 = 1.0e-100;
          goto LABEL_98;
        }
        if ( v97 <= 0.0 )
        {
          v102 = v97 <= -1.0e-50;
          goto LABEL_131;
        }
LABEL_130:
        v102 = v97 >= 1.0e-50;
        goto LABEL_131;
      }
      if ( v95 <= 2u )
        break;
      if ( v95 != 3 )
      {
        if ( v95 != 4 )
          goto LABEL_98;
LABEL_95:
        if ( fabs(v94) <= v114 * 100.0 )
        {
          v106 = (double *)(v72 + v90);
          if ( *v106 != 0.0 )
            *v106 = 2.225073858507201e-308;
          goto LABEL_98;
        }
        v96 = (double *)(v111 + v90);
        v97 = v94 * 10.0 * (v94 * 10.0);
        if ( *(double *)(v111 + v90) != 0.0 )
        {
LABEL_97:
          *v96 = v97;
          goto LABEL_98;
        }
        v98 = (double *)(v72 + v90);
        if ( *v98 != 0.0 )
        {
          v97 = v97 + *v98;
          if ( v97 <= 0.0 )
            v107 = v97 <= -1.0e-50;
          else
            v107 = v97 >= 1.0e-50;
          if ( v107 )
            goto LABEL_133;
          *v98 = 1.0e-100;
          goto LABEL_98;
        }
        goto LABEL_129;
      }
      if ( -v114 <= v94 )
        goto LABEL_107;
      v97 = v94 * v94;
      v96 = (double *)(v111 + v90);
      if ( *(double *)(v111 + v90) != 0.0 )
        goto LABEL_97;
      v98 = (double *)(v72 + v90);
      v99 = *v98;
      if ( *v98 != 0.0 )
        goto LABEL_103;
LABEL_129:
      if ( v97 > 0.0 )
        goto LABEL_130;
      v102 = v97 <= -1.0e-50;
LABEL_131:
      if ( v102 )
      {
        v108 = *((int *)v71 + 4);
        *((_DWORD *)v71 + 4) = v108 + 1;
        *(_DWORD *)(*v71 + 4 * v108) = v91;
LABEL_133:
        *v98 = v97;
      }
LABEL_98:
      if ( v87 == ++v86 )
        goto LABEL_75;
    }
    if ( v95 )
      goto LABEL_98;
    goto LABEL_95;
  }
  if ( v68 > 0 )
  {
    v73 = 0;
    v74 = (unsigned int)(v68 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v75 = *(double *)(v70 + 8 * v73);
        v76 = *(int *)(v69 + 4 * v73);
        v77 = (double *)(v72 + 8 * v76);
        if ( v75 == 0.0 )
        {
          if ( *v77 != 0.0 )
            *v77 = 2.225073858507201e-308;
          goto LABEL_67;
        }
        *(_QWORD *)(v70 + 8 * v73) = 0;
        if ( *v77 != 0.0 )
          break;
        if ( v75 <= 0.0 )
          v103 = v75 <= -1.0e-50;
        else
          v103 = v75 >= 1.0e-50;
        if ( v103 )
        {
          v104 = *((int *)v71 + 4);
          v105 = *v71;
          *((_DWORD *)v71 + 4) = v104 + 1;
          *(_DWORD *)(v105 + 4 * v104) = v76;
          *v77 = v75;
          goto LABEL_74;
        }
LABEL_67:
        if ( v74 == ++v73 )
          goto LABEL_75;
      }
      v78 = v75 + *v77;
      if ( v78 <= 0.0 )
        v79 = v78 <= -1.0e-50;
      else
        v79 = v78 >= 1.0e-50;
      if ( !v79 )
      {
        *v77 = 1.0e-100;
        goto LABEL_67;
      }
      *v77 = v78;
LABEL_74:
      ++v73;
    }
    while ( v74 != v73 );
  }
LABEL_75:
  if ( v118 >= 0 )
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v118) = v113;
  v80 = (double *)(v72 + 8LL * v115);
  if ( *v80 != 0.0 )
    *v80 = 2.225073858507201e-308;
  *((_DWORD *)a5 + 4) = 0;
  *((_BYTE *)a5 + 28) = 0;
  *((_DWORD *)v8 + 4) = 0;
  *((_BYTE *)v8 + 28) = 0;
  *((_DWORD *)a4 + 4) = 0;
  *((_BYTE *)a4 + 28) = 0;
  return a5;
}

