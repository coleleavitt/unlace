_QWORD *__fastcall ClpPackedMatrix::unpack(ClpPackedMatrix *this, const ClpSimplex *a2, CoinIndexedVector *a3, int a4)
{
  __int64 v4; // r9
  _QWORD *result; // rax
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r12
  int *v9; // rbx
  _DWORD *v10; // r9
  __int64 v11; // r8
  int v12; // edi
  double v13; // xmm3_8
  __int64 v14; // rbp
  __int64 v15; // r10
  __int64 v16; // r8
  double v17; // xmm0_8
  bool v18; // si
  int v19; // ecx
  __int64 v20; // rsi
  double v21; // xmm0_8
  double *v22; // rcx
  bool v23; // r12
  __int64 v24; // rdi
  __int64 v25; // r12
  int v26; // ecx
  __int64 v27; // r11
  __int64 v28; // r12
  __int64 v29; // r10
  double v30; // xmm0_8
  bool v31; // si
  int v32; // ecx
  double v33; // xmm0_8
  __int64 v34; // rsi
  double *v35; // rcx
  bool v36; // r8
  __int64 v37; // rdi
  __int64 v38; // r8

  v4 = 4LL * a4;
  result = *((_QWORD **)this + 11);
  v6 = *((_QWORD *)a2 + 28);
  v7 = result[5];
  v8 = result[4];
  v9 = (int *)(v4 + result[6]);
  v10 = (_DWORD *)(result[7] + v4);
  v11 = *v9;
  v12 = v11 + *v10;
  if ( v6 )
  {
    result = *((_QWORD **)a2 + 29);
    v13 = *(double *)&result[a4];
    if ( (int)v11 < v12 )
    {
      v14 = *((_QWORD *)a3 + 1);
      result = (_QWORD *)((int)v11 + 1);
      v15 = 4 * v11 - 4LL * (int)result + v7;
      v16 = v8 + 8 * v11 - 8LL * (int)result;
      while ( 1 )
      {
        v20 = *(int *)(v15 + 4LL * (_QWORD)result);
        v21 = *(double *)(v16 + 8LL * (_QWORD)result) * v13 * *(double *)(v6 + 8 * v20);
        v22 = (double *)(v14 + 8 * v20);
        if ( *v22 != 0.0 )
          break;
        if ( v21 <= 0.0 )
          v23 = v21 <= -1.0e-50;
        else
          v23 = v21 >= 1.0e-50;
        if ( v23 )
        {
          v24 = *((int *)a3 + 4);
          v25 = *(_QWORD *)a3;
          *((_DWORD *)a3 + 4) = v24 + 1;
          *(_DWORD *)(v25 + 4 * v24) = v20;
          *v22 = v21;
          v12 = *v9 + *v10;
          v26 = (int)result;
          result = (_QWORD *)((char *)result + 1);
          if ( v12 <= v26 )
            return result;
        }
        else
        {
LABEL_8:
          v19 = (int)result;
          result = (_QWORD *)((char *)result + 1);
          if ( v12 <= v19 )
            return result;
        }
      }
      v17 = v21 + *v22;
      if ( v17 <= 0.0 )
        v18 = v17 <= -1.0e-50;
      else
        v18 = v17 >= 1.0e-50;
      if ( v18 )
        *v22 = v17;
      else
        *v22 = 1.0e-100;
      goto LABEL_8;
    }
  }
  else if ( (int)v11 < v12 )
  {
    v27 = *((_QWORD *)a3 + 1);
    result = (_QWORD *)((int)v11 + 1);
    v28 = 8 * v11 - 8LL * (_QWORD)result + v8;
    v29 = -4LL * (_QWORD)result + 4 * v11 + v7;
    do
    {
      v33 = *(double *)(v28 + 8LL * (_QWORD)result);
      v34 = *(int *)(v29 + 4LL * (_QWORD)result);
      v35 = (double *)(v27 + 8 * v34);
      if ( *v35 == 0.0 )
      {
        if ( v33 <= 0.0 )
          v36 = v33 <= -1.0e-50;
        else
          v36 = v33 >= 1.0e-50;
        if ( v36 )
        {
          v37 = *((int *)a3 + 4);
          v38 = *(_QWORD *)a3;
          *((_DWORD *)a3 + 4) = v37 + 1;
          *(_DWORD *)(v38 + 4 * v37) = v34;
          *v35 = v33;
          v12 = *v9 + *v10;
        }
      }
      else
      {
        v30 = v33 + *v35;
        if ( v30 <= 0.0 )
          v31 = v30 <= -1.0e-50;
        else
          v31 = v30 >= 1.0e-50;
        if ( v31 )
          *v35 = v30;
        else
          *v35 = 1.0e-100;
      }
      v32 = (int)result;
      result = (_QWORD *)((char *)result + 1);
    }
    while ( v12 > v32 );
  }
  return result;
}

