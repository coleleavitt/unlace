__int64 __fastcall ClpInterior::checkSolution(ClpInterior *this)
{
  int v1; // esi
  double *v3; // rbp
  __int64 v4; // r12
  double *v5; // rdi
  double *v6; // rdx
  double *v7; // rax
  __int64 v8; // rcx
  double v9; // xmm0_8
  __int64 v10; // rax
  double *v11; // rax
  double v12; // xmm0_8
  __int64 v13; // r8
  __int64 result; // rax
  double v15; // xmm5_8
  double v16; // xmm4_8
  int v17; // r10d
  __int64 v18; // r8
  double v19; // xmm5_8
  double v20; // xmm2_8
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v26; // r8
  double v27; // xmm9_8
  double v28; // xmm1_8
  double v29; // xmm1_8
  double v30; // xmm7_8
  double v31; // xmm1_8
  double v32; // xmm8_8
  double v33; // xmm7_8
  bool v34; // cc
  double v35; // xmm7_8
  double v36; // xmm1_8
  double v37; // xmm1_8
  double v38; // xmm7_8
  double v39; // xmm7_8
  __int64 v40; // r8
  __int64 v41; // rdx
  double v42; // xmm8_8
  double v43; // xmm9_8
  double v44; // xmm1_8
  double v45; // xmm1_8
  double v46; // xmm7_8
  double v47; // xmm1_8
  double v48; // xmm11_8
  double v49; // xmm7_8
  double v50; // xmm7_8
  double v51; // xmm1_8
  double v52; // xmm1_8
  double v53; // xmm7_8
  double v54; // xmm7_8

  v1 = *((_DWORD *)this + 27);
  v3 = *((double **)this + 17);
  v4 = *((_QWORD *)this + 16);
  v5 = *((double **)this + 100);
  if ( v1 && v5 != v3 )
  {
    if ( v1 >> 3 <= 0 )
    {
      v11 = v3;
    }
    else
    {
      v6 = v5;
      v7 = v3;
      v8 = (unsigned int)((v1 >> 3) - 1);
      do
      {
        v9 = *v6;
        v7 += 8;
        v6 += 8;
        *(v7 - 8) = v9;
        *(v7 - 7) = *(v6 - 7);
        *(v7 - 6) = *(v6 - 6);
        *(v7 - 5) = *(v6 - 5);
        *(v7 - 4) = *(v6 - 4);
        *(v7 - 3) = *(v6 - 3);
        *(v7 - 2) = *(v6 - 2);
        *(v7 - 1) = *(v6 - 1);
      }
      while ( v7 != &v3[8 * v8 + 8] );
      v10 = ((int)v8 + 1LL) << 6;
      v5 = (double *)((char *)v5 + v10);
      v11 = (double *)((char *)v3 + v10);
    }
    switch ( v1 % 8 )
    {
      case 1:
        goto LABEL_14;
      case 2:
        goto LABEL_13;
      case 3:
        goto LABEL_12;
      case 4:
        goto LABEL_11;
      case 5:
        goto LABEL_10;
      case 6:
        goto LABEL_9;
      case 7:
        v11[6] = v5[6];
LABEL_9:
        v11[5] = v5[5];
LABEL_10:
        v11[4] = v5[4];
LABEL_11:
        v11[3] = v5[3];
LABEL_12:
        v11[2] = v5[2];
LABEL_13:
        v11[1] = v5[1];
LABEL_14:
        *v11 = *v5;
        break;
      default:
        break;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64, double *, double))(**((_QWORD **)this + 24) + 376LL))(
    *((_QWORD *)this + 24),
    v4,
    v3,
    -1.0);
  v12 = *((double *)this + 125);
  ClpInterior::quadraticDjs(this, v3, *((const double **)this + 143), v12);
  v13 = *((int *)this + 27);
  result = *((unsigned int *)this + 26);
  *((_QWORD *)this + 9) = 0;
  v15 = *((double *)this + 3);
  *((_QWORD *)this + 90) = 0;
  v16 = *((double *)this + 4);
  *((_QWORD *)this + 89) = 0;
  v17 = v13;
  v18 = 8 * v13;
  v19 = v15 * 10.0;
  *((_QWORD *)this + 91) = 0;
  *((_QWORD *)this + 134) = 0;
  v20 = 10.0 * v16;
  v21 = *((_QWORD *)this + 94);
  v22 = *((_QWORD *)this + 97);
  if ( (int)result > 0 )
  {
    v23 = v22 + v18;
    v24 = *((_QWORD *)this + 14);
    v25 = 8LL * (unsigned int)(result - 1) + 8;
    result = 0;
    v26 = v21 + v18;
    v27 = -v19;
    do
    {
      v29 = *(double *)(v24 + result);
      v30 = fmin(*(double *)(v23 + result) - v29, 1.0e10);
      v31 = fmin(v29 - *(double *)(v26 + result), 1.0e10);
      if ( v30 > v20 )
      {
        v32 = *(double *)(v4 + result);
        if ( v27 > v32 )
        {
          v33 = v30 * -v32;
          v34 = v33 <= *((double *)this + 91);
          *((double *)this + 89) = v27 - v32 + *((double *)this + 89);
          if ( !v34 )
            *((double *)this + 91) = v33;
          *((double *)this + 134) = v33 + *((double *)this + 134);
        }
      }
      if ( v31 > v20 )
      {
        v35 = *(double *)(v4 + result);
        if ( v35 > v19 )
        {
          v36 = v31 * v35;
          v34 = v36 <= *((double *)this + 91);
          *((double *)this + 89) = v35 - v19 + *((double *)this + 89);
          if ( !v34 )
            *((double *)this + 91) = v36;
          *((double *)this + 134) = v36 + *((double *)this + 134);
        }
      }
      v37 = *(double *)(v24 + result);
      v38 = *(double *)(v23 + result);
      if ( v37 > v38 )
      {
        v28 = v37 - v38;
      }
      else
      {
        v39 = *(double *)(v26 + result);
        if ( v39 <= v37 )
          v28 = 0.0;
        else
          v28 = v39 - v37;
      }
      if ( v28 > v16 )
        *((double *)this + 90) = v28 - v16 + *((double *)this + 90);
      result += 8;
    }
    while ( result != v25 );
  }
  if ( v17 <= 0 )
  {
    v42 = 0.0;
  }
  else
  {
    v40 = *((_QWORD *)this + 100);
    v41 = *((_QWORD *)this + 15);
    result = 0;
    v42 = 0.0;
    v43 = -v19;
    do
    {
      v42 = v42 + *(double *)(v40 + result) * *(double *)(v41 + result);
      *((double *)this + 9) = v42;
      v45 = *(double *)(v41 + result);
      v46 = fmin(*(double *)(v22 + result) - v45, 1.0e10);
      v47 = fmin(v45 - *(double *)(v21 + result), 1.0e10);
      if ( v46 > v20 )
      {
        v48 = *(double *)((char *)v3 + result);
        if ( v43 > v48 )
        {
          v49 = v46 * -v48;
          v34 = v49 <= *((double *)this + 91);
          *((double *)this + 89) = v43 - v48 + *((double *)this + 89);
          if ( !v34 )
            *((double *)this + 91) = v49;
          *((double *)this + 134) = v49 + *((double *)this + 134);
        }
      }
      if ( v47 > v20 )
      {
        v50 = *(double *)((char *)v3 + result);
        if ( v50 > v19 )
        {
          v51 = v47 * v50;
          v34 = v51 <= *((double *)this + 91);
          *((double *)this + 89) = v50 - v19 + *((double *)this + 89);
          if ( !v34 )
            *((double *)this + 91) = v51;
          *((double *)this + 134) = v51 + *((double *)this + 134);
        }
      }
      v52 = *(double *)(v41 + result);
      v53 = *(double *)(v22 + result);
      if ( v52 > v53 )
      {
        v44 = v52 - v53;
      }
      else
      {
        v54 = *(double *)(v21 + result);
        if ( v54 <= v52 )
          v44 = 0.0;
        else
          v44 = v54 - v52;
      }
      if ( v44 > v16 )
        *((double *)this + 90) = v44 - v16 + *((double *)this + 90);
      result += 8;
    }
    while ( 8LL * (unsigned int)(v17 - 1) + 8 != result );
  }
  *((double *)this + 9) = v42 + v12 * 0.5;
  return result;
}

