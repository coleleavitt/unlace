__int64 __fastcall ClpSimplexOther::tightenIntegerBounds(ClpSimplexOther *this, double *a2)
{
  double *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  __int64 (*v7)(void); // rdx
  __int64 v8; // r15
  __int64 (*v9)(void); // rdx
  __int64 (*v10)(void); // rdx
  __int64 v11; // r13
  __int64 (*v12)(void); // rax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // edi
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r11
  __int64 v19; // rdx
  int v20; // ecx
  double v21; // xmm9_8
  double v22; // xmm2_8
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // rdx
  double *v29; // rdi
  double *v30; // rdx
  int v31; // edx
  double v32; // xmm0_8
  double *v33; // rsi
  double v34; // xmm1_8
  double v35; // xmm2_8
  __int64 v36; // rdi
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  double v39; // xmm1_8
  double v41; // xmm0_8
  __int64 v42; // rdx
  double *v43; // rdi
  double *v44; // rdx
  bool v45; // cc
  double v46; // xmm0_8
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r10
  double v52; // xmm0_8
  __int64 v53; // rdx
  double *v54; // rdi
  double *v55; // rdx
  double v56; // xmm0_8
  double v57; // xmm10_8
  __int64 v58; // rdx
  double *v59; // rdi
  double *v60; // rdx
  __int64 v61; // r8
  int v62; // r9d
  __int64 v63; // rdx
  int v64; // ecx
  __int64 v65; // rsi
  double *v66; // r10
  double v67; // xmm2_8
  double *v68; // rsi
  double v69; // xmm3_8
  __int64 v70; // rcx
  int v71; // edi
  __m128d v72; // xmm5
  __int64 v73; // r15
  __m128d v74; // xmm4
  __int64 v75; // r14
  __int64 v76; // r11
  __int64 v77; // rcx
  double v78; // xmm11_8
  double v79; // xmm9_8
  double v80; // xmm12_8
  __int64 v81; // rdi
  double v82; // xmm9_8
  double v83; // xmm11_8
  double v84; // xmm11_8
  double v85; // xmm11_8
  __m128d v86; // xmm12
  double v87; // xmm9_8
  __m128d v88; // xmm4
  double v89; // xmm9_8
  __int64 v90; // rdi
  double v91; // xmm4_8
  double v92; // xmm5_8
  double v93; // xmm3_8
  __int64 v94; // rsi
  double v95; // xmm2_8
  double *v96; // r9
  double *v97; // rsi
  __m128d v98; // xmm11
  __m128d v99; // xmm9
  int v100; // r9d
  double *v101; // rdx
  __int64 v102; // rsi
  double *v103; // rdx
  __int64 v104; // r8
  double *v105; // rdx
  double *v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __m128d v110; // xmm11
  __m128d v111; // xmm11
  __int64 v112; // [rsp+8h] [rbp-50h]
  unsigned int v113; // [rsp+14h] [rbp-44h]
  __int64 v114; // [rsp+18h] [rbp-40h]

  v4 = *((double **)this + 16);
  v5 = *((_QWORD **)this + 24);
  v6 = (_QWORD *)*v5;
  v7 = *(__int64 (**)(void))(*v5 + 40LL);
  if ( (char *)v7 == (char *)ClpPackedMatrix::getElements )
  {
    v8 = *(_QWORD *)(v5[11] + 32LL);
  }
  else
  {
    v109 = v7();
    v5 = *((_QWORD **)this + 24);
    v8 = v109;
    v6 = (_QWORD *)*v5;
  }
  v9 = (__int64 (*)(void))v6[6];
  if ( (char *)v9 == (char *)ClpPackedMatrix::getIndices )
  {
    v112 = *(_QWORD *)(v5[11] + 40LL);
  }
  else
  {
    v108 = v9();
    v5 = *((_QWORD **)this + 24);
    v112 = v108;
    v6 = (_QWORD *)*v5;
  }
  v10 = (__int64 (*)(void))v6[7];
  if ( (char *)v10 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v11 = *(_QWORD *)(v5[11] + 48LL);
  }
  else
  {
    v107 = v10();
    v5 = *((_QWORD **)this + 24);
    v11 = v107;
    v6 = (_QWORD *)*v5;
  }
  v12 = (__int64 (*)(void))v6[8];
  if ( (char *)v12 == (char *)ClpPackedMatrix::getVectorLengths )
    v13 = *(_QWORD *)(v5[11] + 56LL);
  else
    v13 = v12();
  v14 = *((_DWORD *)this + 26);
  v15 = *((_DWORD *)this + 27);
  if ( v14 )
  {
    v100 = v14 / 8;
    if ( v14 / 8 > 0 )
    {
      v101 = v4;
      v102 = (unsigned int)(v100 - 1);
      do
      {
        *v101 = 0.0;
        v101[1] = 0.0;
        v101 += 8;
        *(v101 - 6) = 0.0;
        *(v101 - 5) = 0.0;
        *(v101 - 4) = 0.0;
        *(v101 - 3) = 0.0;
        *(v101 - 2) = 0.0;
        *(v101 - 1) = 0.0;
      }
      while ( v101 != &v4[8 * v102 + 8] );
      v103 = &v4[8 * (int)v102 + 8];
      v104 = (unsigned int)(v14 % 8);
      switch ( (int)v104 )
      {
        case 1:
          goto LABEL_88;
        case 2:
          goto LABEL_104;
        case 3:
          goto LABEL_106;
        case 4:
          goto LABEL_116;
        case 5:
          goto LABEL_119;
        case 6:
          goto LABEL_121;
        case 7:
          goto LABEL_124;
        default:
          goto LABEL_90;
      }
    }
    v104 = (unsigned int)(v14 % 8);
    switch ( (int)v104 )
    {
      case 1:
        v103 = v4;
        goto LABEL_88;
      case 2:
        v103 = v4;
LABEL_104:
        v103[1] = 0.0;
        goto LABEL_88;
      case 3:
        v103 = v4;
LABEL_106:
        v103[2] = 0.0;
        goto LABEL_107;
      case 4:
        v103 = v4;
LABEL_116:
        v103[3] = 0.0;
        goto LABEL_117;
      case 5:
        v103 = v4;
        goto LABEL_119;
      case 6:
        v103 = v4;
        goto LABEL_121;
      case 7:
        v103 = v4;
LABEL_124:
        v103[6] = 0.0;
        v104 = 7;
LABEL_121:
        v103[5] = 0.0;
LABEL_119:
        v103[4] = 0.0;
        v103[3] = 0.0;
LABEL_117:
        v103[2] = 0.0;
LABEL_107:
        v103[1] = 0.0;
LABEL_88:
        *v103 = 0.0;
        if ( v100 <= 0 )
        {
          v106 = a2;
        }
        else
        {
          LODWORD(v102) = v100 - 1;
LABEL_90:
          v105 = a2;
          do
          {
            *v105 = 0.0;
            v105[1] = 0.0;
            v105 += 8;
            *(v105 - 6) = 0.0;
            *(v105 - 5) = 0.0;
            *(v105 - 4) = 0.0;
            *(v105 - 3) = 0.0;
            *(v105 - 2) = 0.0;
            *(v105 - 1) = 0.0;
          }
          while ( v105 != &a2[8 * (unsigned int)v102 + 8] );
          v106 = &a2[8 * (unsigned int)v102 + 8];
        }
        switch ( v104 )
        {
          case 1LL:
            goto LABEL_100;
          case 2LL:
            goto LABEL_99;
          case 3LL:
            goto LABEL_98;
          case 4LL:
            goto LABEL_97;
          case 5LL:
            goto LABEL_96;
          case 6LL:
            goto LABEL_95;
          case 7LL:
            v106[6] = 0.0;
LABEL_95:
            v106[5] = 0.0;
LABEL_96:
            v106[4] = 0.0;
LABEL_97:
            v106[3] = 0.0;
LABEL_98:
            v106[2] = 0.0;
LABEL_99:
            v106[1] = 0.0;
LABEL_100:
            *v106 = 0.0;
            break;
          default:
            goto LABEL_101;
        }
        break;
      default:
        break;
    }
LABEL_101:
    if ( v15 <= 0 )
      goto LABEL_22;
  }
  else if ( v15 <= 0 )
  {
    return 0;
  }
  v16 = *((_QWORD *)this + 23);
  v17 = 1;
  v18 = *((_QWORD *)this + 22);
  do
  {
    v19 = *(int *)(v11 + 4 * v17 - 4);
    v20 = *(_DWORD *)(v13 + 4 * v17 - 4);
    v21 = *(double *)(v16 + 8 * v17 - 8);
    v22 = *(double *)(v18 + 8 * v17 - 8);
    if ( (int)v19 < (int)v19 + v20 )
    {
      if ( v22 > -1.0e20 )
      {
        v47 = (unsigned int)(v20 - 1);
        v48 = 0;
        v49 = v8 + 8 * v19;
        v50 = v47 + 1;
        v51 = v112 + 4 * v19;
        if ( v21 < 1.0e20 )
        {
          do
          {
            v56 = *(double *)(v49 + 8 * v48);
            v57 = v21 * v56;
            v58 = *(int *)(v51 + 4 * v48);
            v59 = &v4[v58];
            v60 = &a2[v58];
            if ( v56 > 0.0 )
            {
              *v60 = v57 + *v60;
              *v59 = v56 * v22 + *v59;
            }
            else
            {
              *v59 = v57 + *v59;
              *v60 = v56 * v22 + *v60;
            }
            ++v48;
          }
          while ( v50 != v48 );
        }
        else
        {
          do
          {
            v52 = *(double *)(v49 + 8 * v48);
            v53 = *(int *)(v51 + 4 * v48);
            v54 = &v4[v53];
            v55 = &a2[v53];
            if ( v52 > 0.0 )
            {
              *v55 = 1.797693134862316e308;
              *v54 = v52 * v22 + *v54;
            }
            else
            {
              *v54 = -1.797693134862316e308;
              *v55 = v52 * v22 + *v55;
            }
            ++v48;
          }
          while ( v50 != v48 );
        }
      }
      else
      {
        v23 = (unsigned int)(v20 - 1);
        v24 = 0;
        v25 = v8 + 8 * v19;
        v26 = v23 + 1;
        v27 = v112 + 4 * v19;
        if ( v21 < 1.0e20 )
        {
          do
          {
            v41 = *(double *)(v25 + 8 * v24);
            v42 = *(int *)(v27 + 4 * v24);
            v43 = &v4[v42];
            v44 = &a2[v42];
            v45 = v41 <= 0.0;
            v46 = v41 * v21;
            if ( v45 )
            {
              *v43 = v46 + *v43;
              *v44 = 1.797693134862316e308;
            }
            else
            {
              *v44 = v46 + *v44;
              *v43 = -1.797693134862316e308;
            }
            ++v24;
          }
          while ( v26 != v24 );
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v28 = *(int *)(v27 + 4 * v24);
              v29 = &v4[v28];
              v30 = &a2[v28];
              if ( *(double *)(v25 + 8 * v24) <= 0.0 )
                break;
              ++v24;
              *v30 = 1.797693134862316e308;
              *v29 = -1.797693134862316e308;
              if ( v24 == v26 )
                goto LABEL_19;
            }
            ++v24;
            *v29 = -1.797693134862316e308;
            *v30 = 1.797693134862316e308;
          }
          while ( v24 != v26 );
        }
      }
LABEL_19:
      v15 = *((_DWORD *)this + 27);
    }
    v31 = v17++;
  }
  while ( v31 < v15 );
  v14 = *((_DWORD *)this + 26);
LABEL_22:
  v32 = *((double *)this + 4);
  if ( v14 > 0 )
  {
    v33 = *((double **)this + 19);
    v34 = *v4;
    v35 = *v33;
    if ( *v4 <= v32 + *v33 )
    {
      v36 = *((_QWORD *)this + 18);
      v37 = 0;
      v38 = 8LL * (unsigned int)(v14 - 1);
      do
      {
        v4[v37 / 8] = fmin(v34 - v35, 0.0) - v32;
        v39 = a2[v37 / 8];
        if ( *(double *)(v36 + v37) - v32 > v39 )
          break;
        a2[v37 / 8] = fmax(v39 - *(double *)(v36 + v37), 0.0) + v32;
        if ( v38 == v37 )
          goto LABEL_44;
        v37 += 8LL;
        v35 = v33[v37 / 8];
        v34 = v4[v37 / 8];
      }
      while ( v34 <= v35 + v32 );
    }
    return (unsigned int)-1;
  }
LABEL_44:
  v61 = *((_QWORD *)this + 34);
  if ( !v61 )
    return 0;
  v62 = *((_DWORD *)this + 27);
  if ( v62 <= 0 )
    return 0;
  v63 = 1;
  v113 = 0;
  v114 = v8;
  while ( 2 )
  {
    if ( !*(_BYTE *)(v61 + v63 - 1) )
      goto LABEL_47;
    v65 = 8 * v63 - 8;
    v66 = (double *)(v65 + *((_QWORD *)this + 22));
    v67 = *v66;
    if ( *v66 <= -1000.0 )
      goto LABEL_47;
    v68 = (double *)(*((_QWORD *)this + 23) + v65);
    v69 = *v68;
    if ( *v68 >= 1000.0 )
      goto LABEL_47;
    v70 = *(int *)(v11 + 4 * v63 - 4);
    v71 = *(_DWORD *)(v13 + 4 * v63 - 4);
    if ( (int)v70 >= (int)v70 + v71 )
      goto LABEL_47;
    v72 = (__m128d)*(unsigned __int64 *)v66;
    v73 = (unsigned int)(v71 - 1) + 1LL;
    v74.m128d_f64[0] = *v68;
    v75 = v112 + 4 * v70;
    v76 = v114 + 8 * v70;
    v77 = 0;
    do
    {
      while ( 1 )
      {
        v80 = *(double *)(v76 + 8 * v77);
        v81 = *(int *)(v75 + 4 * v77);
        v82 = (v69 - v67) * v80;
        v83 = a2[v81];
        if ( v80 > 0.0 )
        {
          v78 = v83 - v82;
          if ( v78 < 0.0 )
            v72.m128d_f64[0] = fmax(v72.m128d_f64[0], v67 - (v78 + v32) / v80);
          v79 = v82 + v4[v81];
          if ( v79 > 0.0 )
            v74.m128d_f64[0] = fmin(v74.m128d_f64[0], v69 - (v79 - v32) / v80);
          goto LABEL_57;
        }
        v84 = v83 + v82;
        if ( v84 < 0.0 )
          v74.m128d_f64[0] = fmin(v74.m128d_f64[0], v69 - (v84 + v32) / v80);
        v85 = v4[v81] - v82;
        if ( v85 > 0.0 )
          break;
LABEL_57:
        if ( ++v77 == v73 )
          goto LABEL_63;
      }
      ++v77;
      v72.m128d_f64[0] = fmax(v72.m128d_f64[0], v67 - (v85 - v32) / v80);
    }
    while ( v77 != v73 );
LABEL_63:
    if ( v72.m128d_f64[0] <= v67 && v69 <= v74.m128d_f64[0] )
      goto LABEL_47;
    v86.m128d_f64[0] = v74.m128d_f64[0] + 0.5;
    if ( fabs(v74.m128d_f64[0] + 0.5) < 4.503599627370496e15 )
    {
      v99 = 0;
      v99.m128d_f64[0] = (double)(int)v86.m128d_f64[0];
      *(_QWORD *)&v86.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                       v99.m128d_f64[0]
                                     - COERCE_DOUBLE(
                                         COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v99, v86).m128d_f64[0]))
                                       & 0x3FF0000000000000LL))
                                   | *(_QWORD *)&v86.m128d_f64[0] & 0x8000000000000000LL;
    }
    v87 = v86.m128d_f64[0];
    if ( fabs(v74.m128d_f64[0] - v86.m128d_f64[0]) > 0.000001 )
    {
      v87 = v74.m128d_f64[0];
      if ( fabs(v74.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v110 = 0;
        v110.m128d_f64[0] = (double)(int)v74.m128d_f64[0];
        *(_QWORD *)&v87 = COERCE_UNSIGNED_INT64(
                            v110.m128d_f64[0]
                          - COERCE_DOUBLE(
                              COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v110, v74).m128d_f64[0]))
                            & 0x3FF0000000000000LL))
                        | *(_QWORD *)&v74.m128d_f64[0] & 0x8000000000000000LL;
      }
    }
    v88.m128d_f64[1] = 0.0;
    v88.m128d_f64[0] = v72.m128d_f64[0] - 0.5;
    if ( fabs(v72.m128d_f64[0] - 0.5) < 4.503599627370496e15 )
    {
      v98.m128d_f64[0] = (double)(int)v88.m128d_f64[0];
      *(_QWORD *)&v88.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                       COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v88, v98).m128d_f64[0] & 0x3FF0000000000000LL)
                                     + v98.m128d_f64[0])
                                   | *(_QWORD *)&v88.m128d_f64[0] & 0x8000000000000000LL;
    }
    if ( fabs(v72.m128d_f64[0] - v88.m128d_f64[0]) > 0.000001
      && (v88.m128d_f64[0] = v72.m128d_f64[0], fabs(v72.m128d_f64[0]) < 4.503599627370496e15) )
    {
      v111.m128d_f64[0] = (double)(int)v72.m128d_f64[0];
      *(_QWORD *)&v88.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                       COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v72, v111).m128d_f64[0] & 0x3FF0000000000000LL)
                                     + v111.m128d_f64[0])
                                   | *(_QWORD *)&v72.m128d_f64[0] & 0x8000000000000000LL;
      if ( v88.m128d_f64[0] <= v67 )
        goto LABEL_74;
    }
    else if ( v88.m128d_f64[0] <= v67 )
    {
LABEL_74:
      if ( v69 <= v87 )
        goto LABEL_47;
    }
    if ( v87 < v88.m128d_f64[0] )
      return (unsigned int)-1;
    *v68 = v87;
    ++v113;
    v89 = v87 - v69;
    *v66 = v88.m128d_f64[0];
    v90 = 0;
    v91 = v88.m128d_f64[0] - v67;
    do
    {
      while ( 1 )
      {
        v92 = *(double *)(v76 + 8 * v90);
        v93 = v89 * v92;
        v94 = *(int *)(v75 + 4 * v90);
        v95 = v91 * v92;
        v96 = &v4[v94];
        v97 = &a2[v94];
        if ( v92 <= 0.0 )
          break;
        ++v90;
        *v97 = v93 + *v97;
        *v96 = v95 + *v96;
        if ( v77 == v90 )
          goto LABEL_80;
      }
      ++v90;
      *v96 = v93 + *v96;
      *v97 = v95 + *v97;
    }
    while ( v77 != v90 );
LABEL_80:
    v62 = *((_DWORD *)this + 27);
LABEL_47:
    v64 = v63++;
    if ( v64 < v62 )
      continue;
    return v113;
  }
}

