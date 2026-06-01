__int64 __fastcall CoinSimpFactorization::Uxeqb2(
        CoinSimpFactorization *this,
        double *a2,
        double *a3,
        double *a4,
        double *a5)
{
  int v5; // r11d
  int v6; // r13d
  __int64 result; // rax
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r9
  double v13; // xmm2_8
  double v14; // xmm0_8
  double *v15; // r14
  double *v16; // rbx
  double v17; // xmm1_8
  double v18; // xmm2_8
  __int64 v19; // r10
  int *v20; // rax
  int *v21; // r12
  double *v22; // r10
  double i; // xmm0_8
  __int64 v24; // r9
  double v25; // xmm3_8
  int v26; // r13d
  __int64 v27; // rbx
  __int64 v28; // r11
  __int64 v29; // rdi
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // r9
  double v33; // xmm1_8
  double v34; // xmm0_8
  __int64 v35; // r10
  int *v36; // rax
  int *v37; // rbp
  double *j; // r9
  __int64 v39; // r10
  double v40; // xmm2_8
  __int64 v41; // [rsp+0h] [rbp-38h]

  v5 = *((_DWORD *)this + 9);
  v6 = *((_DWORD *)this + 141);
  result = (unsigned int)(v5 - 1);
  if ( (int)result >= v6 )
  {
    v8 = v5 - 2;
    v9 = 4 * ((int)result - v8);
    v10 = v9 + *((_QWORD *)this + 55);
    v41 = *((_QWORD *)this + 51) + v9;
    while ( 1 )
    {
      v11 = *(int *)(v10 + 4 * v8);
      v12 = *(int *)(v41 + 4 * v8);
      v13 = a2[v11];
      v14 = a4[v11];
      v15 = &a3[v12];
      v16 = &a5[v12];
      if ( v13 == 0.0 )
        break;
      v17 = *(double *)(*((_QWORD *)this + 50) + 8 * v11);
      v18 = v13 * v17;
      v19 = *(int *)(*((_QWORD *)this + 41) + 4 * v12);
      v20 = (int *)(*((_QWORD *)this + 44) + 4 * v19);
      v21 = &v20[*(int *)(*((_QWORD *)this + 42) + 4 * v12)];
      v22 = (double *)(*((_QWORD *)this + 43) + 8 * v19);
      if ( v14 == 0.0 )
      {
        while ( v20 != v21 )
        {
          v32 = *v20;
          v33 = *v22;
          ++v20;
          ++v22;
          a2[v32] = a2[v32] - v33 * v18;
        }
        *v15 = v18;
        *v16 = 0.0;
LABEL_5:
        result = (unsigned int)v8--;
        if ( (int)result < v6 )
          goto LABEL_11;
      }
      else
      {
        for ( i = v14 * v17; v20 != v21; *(double *)((char *)a4 + v24) = *(double *)((char *)a4 + v24) - *(v22 - 1) * i )
        {
          v24 = *v20;
          v25 = *v22;
          ++v20;
          ++v22;
          v24 *= 8;
          *(double *)((char *)a2 + v24) = *(double *)((char *)a2 + v24) - v25 * v18;
        }
        result = (unsigned int)v8--;
        *v15 = v18;
        *v16 = i;
        if ( (int)result < v6 )
          goto LABEL_11;
      }
    }
    if ( v14 == 0.0 )
    {
      *v15 = 0.0;
      *v16 = 0.0;
    }
    else
    {
      v34 = v14 * *(double *)(*((_QWORD *)this + 50) + 8 * v11);
      v35 = *(int *)(*((_QWORD *)this + 41) + 4 * v12);
      v36 = (int *)(*((_QWORD *)this + 44) + 4 * v35);
      v37 = &v36[*(int *)(*((_QWORD *)this + 42) + 4 * v12)];
      for ( j = (double *)(*((_QWORD *)this + 43) + 8 * v35); v37 != v36; a4[v39] = a4[v39] - v40 * v34 )
      {
        v39 = *v36;
        v40 = *j;
        ++v36;
        ++j;
      }
      *v15 = 0.0;
      *v16 = v34;
    }
    goto LABEL_5;
  }
LABEL_11:
  v26 = v6 - 1;
  if ( v26 >= 0 )
  {
    v27 = *((_QWORD *)this + 55);
    v28 = *((_QWORD *)this + 51);
    v29 = v26;
    for ( result = v26 - 1LL; ; --result )
    {
      v30 = *(int *)(v27 + 4 * v29);
      v31 = *(int *)(v28 + 4 * v29);
      a3[v31] = -a2[v30];
      a5[v31] = -a4[v30];
      v29 = result;
      if ( result == v26 - 1LL - (unsigned int)v26 )
        break;
    }
  }
  return result;
}

