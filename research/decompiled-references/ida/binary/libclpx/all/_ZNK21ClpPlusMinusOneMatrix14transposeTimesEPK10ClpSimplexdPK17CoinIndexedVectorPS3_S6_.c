__int64 __fastcall ClpPlusMinusOneMatrix::transposeTimes(
        ClpPlusMinusOneMatrix *this,
        const ClpSimplex *a2,
        double a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6)
{
  const void *v10; // rdi
  void *v11; // rax
  int v12; // r12d
  int v13; // r8d
  double v14; // xmm3_8
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  double v19; // xmm2_8
  int v20; // r8d
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rdi
  int v24; // r10d
  __int64 v25; // r8
  int v26; // r12d
  int v27; // r11d
  __int64 v28; // rsi
  double v29; // xmm1_8
  int *v30; // rax
  unsigned __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  int *v34; // rax
  unsigned __int64 v35; // rsi
  __int64 v36; // rdx
  double v37; // xmm1_8
  int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 v41; // rax
  double v42; // xmm1_8
  __int64 v43; // rsi
  __int64 v44; // r13
  __int64 v45; // rdi
  int v46; // r10d
  int v47; // ecx
  __int64 v48; // r11
  double v49; // xmm0_8
  int *v50; // rax
  __int64 v51; // r10
  __int64 v52; // rsi
  __int64 v53; // r11
  int *v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // [rsp+8h] [rbp-50h]
  __int64 v60; // [rsp+10h] [rbp-48h]
  __int64 v61; // [rsp+18h] [rbp-40h]

  CoinIndexedVector::clear(a6);
  v10 = *((const void **)a2 + 25);
  v11 = nullptr;
  v12 = *((_DWORD *)a4 + 4);
  v13 = *((_DWORD *)a2 + 26);
  if ( v10 )
  {
    v59 = *((_DWORD *)a2 + 26);
    v11 = __dynamic_cast(
            v10,
            (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
            (const struct __class_type_info *)&`typeinfo for'ClpPlusMinusOneMatrix,
            0);
    v13 = v59;
  }
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
  if ( (double)v12 <= (double)v13 * v14 && v11 )
    return (*(__int64 (__fastcall **)(void *, const ClpSimplex *, const CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(*(_QWORD *)v11 + 488LL))(
             v11,
             a2,
             a4,
             a5,
             a6,
             a3);
  result = *(_QWORD *)a6;
  v17 = *((_QWORD *)a4 + 1);
  v18 = *((_QWORD *)a6 + 1);
  v19 = *((double *)a2 + 88);
  v20 = *((_DWORD *)this + 33);
  v60 = *(_QWORD *)a6;
  if ( *((_BYTE *)a4 + 28) )
  {
    v39 = *((_QWORD *)a5 + 1);
    v40 = *(_QWORD *)a4;
    if ( v12 <= 0 )
    {
      if ( v20 <= 0 )
        goto LABEL_53;
    }
    else
    {
      v41 = 0;
      do
      {
        v42 = *(double *)(v17 + 8 * v41);
        v43 = *(int *)(v40 + 4 * v41++);
        *(double *)(v39 + 8 * v43) = v42 * a3;
      }
      while ( (unsigned int)(v12 - 1) + 1LL != v41 );
      if ( v20 <= 0 )
      {
        LODWORD(v25) = 0;
LABEL_36:
        result = 0;
        do
        {
          v58 = *(int *)(v40 + 4 * result++);
          *(_QWORD *)(v39 + 8 * v58) = 0;
        }
        while ( v12 > (int)result );
        goto LABEL_38;
      }
    }
    v44 = *((_QWORD *)this + 13);
    v45 = 0;
    v46 = 0;
    LODWORD(v25) = 0;
    v61 = *((_QWORD *)this + 14);
    do
    {
      while ( 1 )
      {
        v47 = *(_DWORD *)(v61 + 4 * v45);
        if ( v47 <= v46 )
        {
          v47 = v46;
          v49 = 0.0;
        }
        else
        {
          v48 = *((_QWORD *)this + 15);
          v49 = 0.0;
          v50 = (int *)(v48 + 4LL * v46);
          v51 = v48 + 4 * ((unsigned int)(v47 - v46 - 1) + (__int64)v46) + 4;
          do
          {
            v52 = *v50++;
            v49 = v49 + *(double *)(v39 + 8 * v52);
          }
          while ( (int *)v51 != v50 );
        }
        v46 = *(_DWORD *)(v44 + 4 * v45 + 4);
        if ( v46 <= v47 )
        {
          v46 = v47;
        }
        else
        {
          v53 = *((_QWORD *)this + 15);
          v54 = (int *)(v53 + 4LL * v47);
          v55 = v53 + 4 * ((unsigned int)(v46 - 1 - v47) + (__int64)v47) + 4;
          do
          {
            v56 = *v54++;
            v49 = v49 - *(double *)(v39 + 8 * v56);
          }
          while ( (int *)v55 != v54 );
        }
        if ( fabs(v49) <= v19 )
          break;
        v57 = (int)v25;
        *(double *)(v18 + 8LL * (int)v25) = v49;
        LODWORD(v25) = v25 + 1;
        *(_DWORD *)(v60 + 4 * v57) = v45++;
        result = (unsigned int)v45;
        if ( *((_DWORD *)this + 33) <= (int)v45 )
        {
          if ( v12 > 0 )
            goto LABEL_36;
          *((_DWORD *)a6 + 4) = v25;
          return result;
        }
      }
      result = (unsigned int)++v45;
    }
    while ( *((_DWORD *)this + 33) > (int)v45 );
    if ( v12 > 0 )
      goto LABEL_36;
LABEL_38:
    *((_DWORD *)a6 + 4) = v25;
    if ( (_DWORD)v25 )
      return result;
    goto LABEL_39;
  }
  if ( v20 > 0 )
  {
    v21 = *((_QWORD *)this + 14);
    v22 = *((_QWORD *)this + 13);
    v23 = 0;
    v24 = 0;
    v25 = 0;
    while ( 2 )
    {
      v26 = *(_DWORD *)(v21 + 4 * v23);
      v27 = v23;
      if ( v26 > v24 )
      {
LABEL_12:
        v28 = *((_QWORD *)this + 15);
        v29 = 0.0;
        v30 = (int *)(v28 + 4LL * v24);
        v31 = v28 + 4 * (v24 + (unsigned __int64)(unsigned int)(v26 - v24 - 1)) + 4;
        do
        {
          v32 = *v30++;
          v29 = v29 + *(double *)(v17 + 8 * v32);
        }
        while ( (int *)v31 != v30 );
        v24 = *(_DWORD *)(v22 + 4 * v23 + 4);
        if ( v24 <= v26 )
          goto LABEL_21;
LABEL_15:
        v33 = *((_QWORD *)this + 15);
        v34 = (int *)(v33 + 4LL * v26);
        v35 = v33 + 4 * (v26 + (unsigned __int64)(unsigned int)(v24 - 1 - v26)) + 4;
        do
        {
          v36 = *v34++;
          v29 = v29 - *(double *)(v17 + 8 * v36);
        }
        while ( (int *)v35 != v34 );
        goto LABEL_17;
      }
      while ( 1 )
      {
        v26 = v24;
        v24 = *(_DWORD *)(v22 + 4 * v23 + 4);
        v29 = 0.0;
        if ( v24 > v26 )
          goto LABEL_15;
LABEL_21:
        v24 = v26;
LABEL_17:
        v37 = v29 * a3;
        if ( fabs(v37) <= v19 )
          break;
        v38 = v25 + 1;
        *(_DWORD *)(v60 + 4 * v25) = v27;
        *(double *)(v18 + 8 * v23++) = v37;
        result = (unsigned int)v23;
        if ( (int)v23 >= *((_DWORD *)this + 33) )
        {
          *((_DWORD *)a6 + 4) = v38;
          return result;
        }
        v26 = *(_DWORD *)(v21 + 4 * v23);
        v25 = v38;
        v27 = v23;
        if ( v26 > v24 )
          goto LABEL_12;
      }
      result = (unsigned int)++v23;
      if ( *((_DWORD *)this + 33) > (int)v23 )
        continue;
      goto LABEL_38;
    }
  }
LABEL_53:
  *((_DWORD *)a6 + 4) = 0;
LABEL_39:
  *((_BYTE *)a6 + 28) = 0;
  return result;
}

