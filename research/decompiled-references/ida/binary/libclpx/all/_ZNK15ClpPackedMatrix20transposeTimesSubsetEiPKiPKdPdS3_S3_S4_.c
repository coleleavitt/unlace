double *__fastcall ClpPackedMatrix::transposeTimesSubset(
        ClpPackedMatrix *this,
        int a2,
        const int *a3,
        const double *a4,
        double *a5,
        const double *a6,
        const double *a7,
        double *a8)
{
  double *result; // rax
  __int64 v9; // rbp
  __int64 v10; // r11
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rdi
  double v14; // xmm0_8
  const int *v15; // r14
  __int64 v16; // r13
  __int64 v17; // rax
  int v18; // ecx
  double v19; // xmm1_8
  __int64 v20; // rsi
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rsi
  double v25; // xmm0_8
  __int64 v26; // r14
  const int *v27; // r15
  __int64 v28; // rax
  int v29; // esi
  double v30; // xmm1_8
  __int64 v31; // rdi
  __int64 v32; // r13
  __int64 v33; // r10
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  double v37; // xmm0_8
  __int64 v38; // r12
  const int *v39; // r13
  __int64 v40; // rax
  int v41; // esi
  double v42; // xmm1_8
  __int64 v43; // rdi
  __int64 v44; // r10
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdi
  double v48; // xmm0_8

  result = *((double **)this + 11);
  v9 = *((_QWORD *)result + 5);
  v10 = *((_QWORD *)result + 6);
  v11 = *((_QWORD *)result + 4);
  if ( a8 && a6 )
  {
    v12 = *((_DWORD *)result + 16);
    if ( *((_BYTE *)result + 8) )
      v12 = *((_DWORD *)result + 17);
    if ( v12 > 0 )
    {
      v13 = 8LL * (unsigned int)(v12 - 1) + 8;
      result = nullptr;
      do
      {
        while ( 1 )
        {
          v14 = *(double *)((char *)result + (_QWORD)a4);
          if ( v14 == 0.0 )
            break;
          *(double *)((char *)result + (_QWORD)a8) = v14 * *(double *)((char *)result + (_QWORD)a6);
          if ( (double *)v13 == ++result )
            goto LABEL_10;
        }
        *(double *)((char *)result++ + (_QWORD)a8) = 0.0;
      }
      while ( (double *)v13 != result );
    }
LABEL_10:
    if ( a2 > 0 )
    {
      v15 = &a3[a2 - 1 + 1];
      do
      {
        v16 = *a3;
        v17 = *(int *)(v10 + 4 * v16);
        v18 = *(_DWORD *)(v10 + 4 * v16 + 4);
        if ( (int)v17 >= v18 )
        {
          v19 = 0.0;
        }
        else
        {
          v19 = 0.0;
          v20 = (unsigned int)(v18 - v17 - 1);
          v21 = v9 + 4 * v17;
          v22 = v11 + 8 * v17;
          v23 = 0;
          v24 = v20 + 1;
          do
          {
            v25 = a8[*(int *)(v21 + 4 * v23)] * *(double *)(v22 + 8 * v23);
            ++v23;
            v19 = v19 + v25;
          }
          while ( v24 != v23 );
        }
        result = &a5[v16];
        ++a3;
        *result = *result - v19 * a7[v16];
      }
      while ( v15 != a3 );
    }
  }
  else if ( a6 )
  {
    if ( a2 > 0 )
    {
      v26 = *a3;
      v27 = &a3[a2 - 1 + 1];
      v28 = *(int *)(v10 + 4 * v26);
      v29 = *(_DWORD *)(v10 + 4 * v26 + 4);
      if ( (int)v28 >= v29 )
        goto LABEL_24;
LABEL_20:
      v30 = 0.0;
      v31 = (unsigned int)(v29 - v28 - 1);
      v32 = v9 + 4 * v28;
      v33 = v11 + 8 * v28;
      v34 = 0;
      v35 = v31 + 1;
      do
      {
        v36 = *(int *)(v32 + 4 * v34);
        v37 = a4[v36] * *(double *)(v33 + 8 * v34++);
        v30 = v30 + v37 * a6[v36];
      }
      while ( v35 != v34 );
      while ( 1 )
      {
        result = &a5[v26];
        ++a3;
        *result = *result - v30 * a7[v26];
        if ( v27 == a3 )
          break;
        v26 = *a3;
        v28 = *(int *)(v10 + 4 * v26);
        v29 = *(_DWORD *)(v10 + 4 * v26 + 4);
        if ( (int)v28 < v29 )
          goto LABEL_20;
LABEL_24:
        v30 = 0.0;
      }
    }
  }
  else if ( a2 > 0 )
  {
    v38 = *a3;
    v39 = &a3[a2 - 1 + 1];
    v40 = *(int *)(v10 + 4 * v38);
    v41 = *(_DWORD *)(v10 + 4 * v38 + 4);
    if ( (int)v40 >= v41 )
      goto LABEL_32;
LABEL_28:
    v42 = 0.0;
    v43 = (unsigned int)(v41 - v40 - 1);
    v44 = v9 + 4 * v40;
    v45 = v11 + 8 * v40;
    v46 = 0;
    v47 = v43 + 1;
    do
    {
      v48 = a4[*(int *)(v44 + 4 * v46)] * *(double *)(v45 + 8 * v46);
      ++v46;
      v42 = v42 + v48;
    }
    while ( v47 != v46 );
    while ( 1 )
    {
      result = &a5[v38];
      ++a3;
      *result = *result - v42;
      if ( v39 == a3 )
        break;
      v38 = *a3;
      v40 = *(int *)(v10 + 4 * v38);
      v41 = *(_DWORD *)(v10 + 4 * v38 + 4);
      if ( (int)v40 < v41 )
        goto LABEL_28;
LABEL_32:
      v42 = 0.0;
    }
  }
  return result;
}

