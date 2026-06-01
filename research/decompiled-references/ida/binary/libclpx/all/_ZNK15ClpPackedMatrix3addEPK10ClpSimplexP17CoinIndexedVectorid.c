_QWORD *__fastcall ClpPackedMatrix::add(
        ClpPackedMatrix *this,
        const ClpSimplex *a2,
        CoinIndexedVector *a3,
        double a4,
        int a5)
{
  __int64 v5; // r9
  _QWORD *result; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r12
  int *v10; // rbx
  _DWORD *v11; // r9
  __int64 v12; // r8
  int v13; // edi
  double v14; // xmm0_8
  __int64 v15; // rbp
  __int64 v16; // r10
  __int64 v17; // r8
  double v18; // xmm1_8
  bool v19; // si
  int v20; // ecx
  __int64 v21; // rsi
  double v22; // xmm1_8
  double *v23; // rcx
  bool v24; // r12
  __int64 v25; // rdi
  __int64 v26; // r12
  int v27; // ecx
  __int64 v28; // r11
  __int64 v29; // r10
  __int64 v30; // r8
  double v31; // xmm1_8
  bool v32; // si
  int v33; // ecx
  double v34; // xmm1_8
  __int64 v35; // rsi
  double *v36; // rcx
  bool v37; // bp
  __int64 v38; // rdi
  __int64 v39; // rbp

  v5 = 4LL * a5;
  result = *((_QWORD **)this + 11);
  v7 = *((_QWORD *)a2 + 28);
  v8 = result[5];
  v9 = result[4];
  v10 = (int *)(v5 + result[6]);
  v11 = (_DWORD *)(result[7] + v5);
  v12 = *v10;
  v13 = v12 + *v11;
  if ( v7 )
  {
    result = *((_QWORD **)a2 + 29);
    v14 = a4 * *(double *)&result[a5];
    if ( (int)v12 < v13 )
    {
      v15 = *((_QWORD *)a3 + 1);
      result = (_QWORD *)((int)v12 + 1);
      v16 = -4LL * (_QWORD)result + 4 * v12 + v8;
      v17 = v9 + 8 * v12 - 8LL * (_QWORD)result;
      while ( 1 )
      {
        v21 = *(int *)(v16 + 4LL * (_QWORD)result);
        v22 = *(double *)(v17 + 8LL * (_QWORD)result) * v14 * *(double *)(v7 + 8 * v21);
        v23 = (double *)(v15 + 8 * v21);
        if ( *v23 != 0.0 )
          break;
        if ( v22 <= 0.0 )
          v24 = v22 <= -1.0e-50;
        else
          v24 = v22 >= 1.0e-50;
        if ( v24 )
        {
          v25 = *((int *)a3 + 4);
          v26 = *(_QWORD *)a3;
          *((_DWORD *)a3 + 4) = v25 + 1;
          *(_DWORD *)(v26 + 4 * v25) = v21;
          *v23 = v22;
          v13 = *v10 + *v11;
          v27 = (int)result;
          result = (_QWORD *)((char *)result + 1);
          if ( v13 <= v27 )
            return result;
        }
        else
        {
LABEL_8:
          v20 = (int)result;
          result = (_QWORD *)((char *)result + 1);
          if ( v13 <= v20 )
            return result;
        }
      }
      v18 = v22 + *v23;
      if ( v18 <= 0.0 )
        v19 = v18 <= -1.0e-50;
      else
        v19 = v18 >= 1.0e-50;
      if ( v19 )
        *v23 = v18;
      else
        *v23 = 1.0e-100;
      goto LABEL_8;
    }
  }
  else if ( (int)v12 < v13 )
  {
    v28 = *((_QWORD *)a3 + 1);
    result = (_QWORD *)((int)v12 + 1);
    v29 = -4LL * (_QWORD)result + 4 * v12 + v8;
    v30 = v9 + 8 * v12 - 8LL * (_QWORD)result;
    do
    {
      v34 = *(double *)(v30 + 8LL * (_QWORD)result) * a4;
      v35 = *(int *)(v29 + 4LL * (_QWORD)result);
      v36 = (double *)(v28 + 8 * v35);
      if ( *v36 == 0.0 )
      {
        if ( v34 <= 0.0 )
          v37 = v34 <= -1.0e-50;
        else
          v37 = v34 >= 1.0e-50;
        if ( v37 )
        {
          v38 = *((int *)a3 + 4);
          v39 = *(_QWORD *)a3;
          *((_DWORD *)a3 + 4) = v38 + 1;
          *(_DWORD *)(v39 + 4 * v38) = v35;
          *v36 = v34;
          v13 = *v10 + *v11;
        }
      }
      else
      {
        v31 = v34 + *v36;
        if ( v31 <= 0.0 )
          v32 = v31 <= -1.0e-50;
        else
          v32 = v31 >= 1.0e-50;
        if ( v32 )
          *v36 = v31;
        else
          *v36 = 1.0e-100;
      }
      v33 = (int)result;
      result = (_QWORD *)((char *)result + 1);
    }
    while ( v13 > v33 );
  }
  return result;
}

