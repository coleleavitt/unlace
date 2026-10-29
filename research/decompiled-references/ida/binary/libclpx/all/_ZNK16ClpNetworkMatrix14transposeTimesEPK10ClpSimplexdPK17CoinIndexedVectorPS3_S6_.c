__int64 __fastcall ClpNetworkMatrix::transposeTimes(
        ClpNetworkMatrix *this,
        const ClpSimplex *a2,
        double a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6)
{
  const void *v10; // rdi
  __int64 result; // rax
  int v12; // r13d
  int v13; // ebx
  double v14; // xmm3_8
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r8
  double v19; // xmm2_8
  char v20; // bl
  int v21; // r10d
  __int64 v22; // r9
  __int64 v23; // rcx
  double v24; // xmm1_8
  __int64 v25; // rdx
  int v26; // r11d
  int *v27; // rdx
  __int64 v28; // r10
  __int64 v29; // rsi
  double v30; // xmm0_8
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r10
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rcx
  double v38; // xmm4_8
  int v39; // ecx
  int v40; // esi
  int *v41; // rdx
  double v42; // xmm0_8
  __int64 v43; // r10
  __int64 v44; // rcx
  __int64 v45; // rdx
  double v46; // xmm4_8
  int v47; // r9d

  CoinIndexedVector::clear(a6);
  v10 = *((const void **)a2 + 25);
  result = 0;
  v12 = *((_DWORD *)a4 + 4);
  v13 = *((_DWORD *)a2 + 26);
  if ( v10 )
    result = (__int64)__dynamic_cast(
                        v10,
                        (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
                        (const struct __class_type_info *)&`typeinfo for'ClpPlusMinusOneMatrix,
                        0);
  v14 = 0.3;
  v15 = *((int *)a2 + 27);
  if ( (unsigned __int64)(8 * v15) > 0xF4240 )
  {
    v14 = 0.1;
    if ( 10 * v13 >= (int)v15 )
    {
      v14 = 0.15;
      if ( 4 * v13 >= (int)v15 )
      {
        v14 = 0.3;
        if ( 2 * v13 < (int)v15 )
          v14 = 0.2;
      }
    }
  }
  if ( (double)v12 <= (double)v13 * v14 && result )
    return (*(__int64 (__fastcall **)(__int64, const ClpSimplex *, const CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(*(_QWORD *)result + 488LL))(
             result,
             a2,
             a4,
             a5,
             a6,
             a3);
  v16 = *((_QWORD *)a4 + 1);
  v17 = *(_QWORD *)a6;
  v18 = *((_QWORD *)a6 + 1);
  v19 = *((double *)a2 + 88);
  v20 = *((_BYTE *)this + 120);
  v21 = *((_DWORD *)this + 29);
  if ( *((_BYTE *)a4 + 28) )
  {
    result = (__int64)a5;
    v22 = *(_QWORD *)a4;
    v23 = *((_QWORD *)a5 + 1);
    if ( v12 > 0 )
    {
      result = 0;
      do
      {
        v24 = *(double *)(v16 + 8 * result);
        v25 = *(int *)(v22 + 4 * result++);
        *(double *)(v23 + 8 * v25) = v24 * a3;
      }
      while ( (unsigned int)(v12 - 1) + 1LL != result );
    }
    if ( v20 )
    {
      if ( v21 > 0 )
      {
        v40 = 0;
        v41 = (int *)(*((_QWORD *)this + 13) + 4LL);
        result = 0;
        do
        {
          while ( 1 )
          {
            v42 = 0.0 - *(double *)(v23 + 8LL * *(v41 - 1)) + *(double *)(v23 + 8LL * *v41);
            if ( fabs(v42) <= v19 )
              break;
            v43 = (int)result;
            v41 += 2;
            result = (unsigned int)(result + 1);
            *(double *)(v18 + 8 * v43) = v42;
            *(_DWORD *)(v17 + 4 * v43) = v40;
            v21 = *((_DWORD *)this + 29);
            if ( ++v40 >= v21 )
              goto LABEL_21;
          }
          ++v40;
          v41 += 2;
        }
        while ( v40 < v21 );
LABEL_21:
        if ( v12 <= 0 )
          goto LABEL_24;
        goto LABEL_22;
      }
      result = 0;
      if ( v12 > 0 )
      {
LABEL_22:
        v32 = 0;
        do
        {
          v33 = *(int *)(v22 + 4 * v32++);
          *(_QWORD *)(v23 + 8 * v33) = 0;
        }
        while ( v12 > (int)v32 );
LABEL_24:
        *((_DWORD *)a6 + 4) = result;
        if ( (_DWORD)result )
          return result;
        goto LABEL_25;
      }
    }
    else
    {
      if ( v21 > 0 )
      {
        v26 = 0;
        v27 = (int *)(*((_QWORD *)this + 13) + 4LL);
        result = 0;
        do
        {
          while ( 1 )
          {
            v28 = *(v27 - 1);
            v29 = *v27;
            v30 = 0.0;
            if ( (int)v28 >= 0 )
              v30 = 0.0 - *(double *)(v23 + 8 * v28);
            if ( (int)v29 >= 0 )
              v30 = v30 + *(double *)(v23 + 8 * v29);
            if ( fabs(v30) <= v19 )
              break;
            v31 = (int)result;
            v27 += 2;
            result = (unsigned int)(result + 1);
            *(double *)(v18 + 8 * v31) = v30;
            *(_DWORD *)(v17 + 4 * v31) = v26++;
            if ( *((_DWORD *)this + 29) <= v26 )
              goto LABEL_21;
          }
          ++v26;
          v27 += 2;
        }
        while ( *((_DWORD *)this + 29) > v26 );
        goto LABEL_21;
      }
      if ( v12 > 0 )
      {
        result = 0;
        goto LABEL_22;
      }
    }
LABEL_61:
    *((_DWORD *)a6 + 4) = 0;
LABEL_25:
    *((_BYTE *)a6 + 28) = 0;
    return result;
  }
  if ( v20 )
  {
    if ( v21 <= 0 )
      goto LABEL_61;
    v44 = *((_QWORD *)this + 13);
    v45 = 0;
    for ( result = 0; ; result = v47 )
    {
      while ( 1 )
      {
        v46 = *(double *)(v16 + 8LL * *(int *)(v44 + 8 * v45 + 4)) * a3
            + 0.0
            - *(double *)(v16 + 8LL * *(int *)(v44 + 8 * v45)) * a3;
        if ( fabs(v46) > v19 )
          break;
        if ( v21 <= (int)++v45 )
          goto LABEL_24;
      }
      *(_DWORD *)(v17 + 4 * result) = v45;
      v21 = *((_DWORD *)this + 29);
      v47 = result + 1;
      *(double *)(v18 + 8 * v45++) = v46;
      result = (unsigned int)v45;
      if ( (int)v45 >= v21 )
        break;
    }
    *((_DWORD *)a6 + 4) = v47;
  }
  else
  {
    if ( v21 <= 0 )
      goto LABEL_61;
    v34 = *((_QWORD *)this + 13);
    v35 = 0;
    for ( result = 0; ; result = v39 )
    {
      while ( 1 )
      {
        v36 = *(int *)(v34 + 8 * v35);
        v37 = *(int *)(v34 + 8 * v35 + 4);
        v38 = 0.0;
        if ( (int)v36 >= 0 )
          v38 = 0.0 - *(double *)(v16 + 8 * v36) * a3;
        if ( (int)v37 >= 0 )
          v38 = v38 + *(double *)(v16 + 8 * v37) * a3;
        if ( fabs(v38) > v19 )
          break;
        if ( *((_DWORD *)this + 29) <= (int)++v35 )
          goto LABEL_24;
      }
      *(_DWORD *)(v17 + 4 * result) = v35;
      v39 = result + 1;
      *(double *)(v18 + 8 * v35++) = v38;
      result = (unsigned int)v35;
      if ( *((_DWORD *)this + 29) <= (int)v35 )
        break;
    }
    *((_DWORD *)a6 + 4) = v39;
  }
  return result;
}

