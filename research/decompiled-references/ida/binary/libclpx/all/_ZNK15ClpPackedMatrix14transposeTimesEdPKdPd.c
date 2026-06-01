__int64 __fastcall ClpPackedMatrix::transposeTimes(ClpPackedMatrix *this, double a2, const double *a3, double *a4)
{
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // rbx
  int *v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  int v11; // r12d
  double v12; // xmm1_8
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rax
  double v17; // xmm0_8
  _DWORD *v18; // rbp
  unsigned __int64 v19; // r8
  __int64 v20; // r12
  int v21; // ecx
  double v22; // xmm2_8
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // r9
  __int64 v26; // rdi
  double v27; // xmm1_8
  unsigned __int64 v28; // rbp
  int v29; // r12d
  double v30; // xmm2_8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdi
  double v36; // xmm1_8

  result = *((_QWORD *)this + 11);
  v5 = *((_DWORD *)this + 24);
  v6 = *(_QWORD *)(result + 40);
  v7 = *(int **)(result + 48);
  v8 = *(_QWORD *)(result + 32);
  if ( (*((_BYTE *)this + 100) & 2) != 0 )
  {
    v18 = *(_DWORD **)(result + 56);
    if ( v5 > 0 )
    {
      v19 = 0;
      v20 = 4LL * (unsigned int)(v5 - 1) + 4;
      result = *v7;
      v21 = result + *v18;
      if ( (int)result >= v21 )
        goto LABEL_16;
LABEL_12:
      v22 = 0.0;
      v23 = (unsigned int)(v21 - result - 1);
      v24 = v6 + 4 * result;
      v25 = v8 + 8 * result;
      result = 0;
      v26 = v23 + 1;
      do
      {
        v27 = a3[*(int *)(v24 + 4 * result)] * *(double *)(v25 + 8 * result);
        ++result;
        v22 = v22 + v27;
      }
      while ( v26 != result );
      while ( 1 )
      {
        a4[v19 / 4] = v22 * a2 + a4[v19 / 4];
        v19 += 4LL;
        if ( v20 == v19 )
          break;
        result = v7[v19 / 4];
        v21 = result + v18[v19 / 4];
        if ( (int)result < v21 )
          goto LABEL_12;
LABEL_16:
        v22 = 0.0;
      }
    }
  }
  else
  {
    result = *v7;
    if ( a2 == -1.0 )
    {
      if ( v5 > 0 )
      {
        v9 = 0;
        v10 = 4LL * (unsigned int)(v5 - 1) + 4;
        do
        {
          v11 = v7[v9 / 4 + 1];
          v12 = a4[v9 / 4];
          if ( v11 > (int)result )
          {
            v13 = v6 + 4 * result;
            v14 = v8 + 8 * result;
            v15 = v11 - result;
            v16 = 0;
            do
            {
              v17 = a3[*(int *)(v13 + 4 * v16)] * *(double *)(v14 + 8 * v16);
              ++v16;
              v12 = v12 - v17;
            }
            while ( (unsigned int)(v15 - 1) + 1LL != v16 );
          }
          a4[v9 / 4] = v12;
          v9 += 4LL;
          result = v11;
        }
        while ( v10 != v9 );
      }
    }
    else if ( v5 > 0 )
    {
      v28 = 0;
      v29 = v7[1];
      if ( v29 <= (int)result )
        goto LABEL_23;
LABEL_19:
      v30 = 0.0;
      v31 = v6 + 4 * result;
      v32 = v8 + 8 * result;
      v33 = (unsigned int)(v29 - result - 1);
      v34 = 0;
      v35 = v33 + 1;
      do
      {
        v36 = a3[*(int *)(v31 + 4 * v34)] * *(double *)(v32 + 8 * v34);
        ++v34;
        v30 = v30 + v36;
      }
      while ( v35 != v34 );
      while ( 1 )
      {
        result = v29;
        a4[v28 / 4] = v30 * a2 + a4[v28 / 4];
        v28 += 4LL;
        if ( 4LL * (unsigned int)(v5 - 1) + 4 == v28 )
          break;
        v29 = v7[v28 / 4 + 1];
        if ( v29 > (int)result )
          goto LABEL_19;
LABEL_23:
        v30 = 0.0;
      }
    }
  }
  return result;
}

