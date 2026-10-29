CoinIndexedVector *__fastcall CoinIndexedVector::operator*(CoinIndexedVector *this, CoinIndexedVector *a2, int **a3)
{
  int v5; // ebp
  int v7; // esi
  int v8; // eax
  int *v9; // rdx
  __int64 v10; // rcx
  int *v11; // r10
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  char v15; // cl
  __int64 v16; // rdx
  double v17; // xmm0_8
  double v18; // xmm0_8
  __int64 v19; // r9
  __int64 v20; // rdi
  int *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  double *v25; // rdx

  v5 = *((_DWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 5);
  if ( *((_DWORD *)a3 + 5) >= v7 )
    v7 = *((_DWORD *)a3 + 5);
  CoinIndexedVector::CoinIndexedVector(this, a2);
  CoinIndexedVector::reserve(this, v7);
  v8 = *((_DWORD *)a3 + 4);
  if ( v8 <= 0 )
    goto LABEL_17;
  v9 = *a3;
  v10 = (unsigned int)(v8 - 1);
  v11 = a3[1];
  v12 = *((_QWORD *)a2 + 1);
  v13 = (__int64)(*a3 + 1);
  v14 = v13 + 4 * v10;
  v15 = 0;
  while ( 1 )
  {
    v16 = *v9;
    v17 = *(double *)(v12 + 8 * v16);
    if ( v17 != 0.0 )
    {
      v18 = v17 * *(double *)&v11[2 * v16];
      *(double *)(*((_QWORD *)this + 1) + 8 * v16) = v18;
      if ( fabs(v18) < 1.0e-50 )
        v15 = 1;
    }
    v9 = (int *)v13;
    if ( v14 == v13 )
      break;
    v13 += 4;
  }
  if ( v15 )
  {
    *((_DWORD *)this + 4) = 0;
    if ( v5 > 0 )
    {
      v19 = *(_QWORD *)this;
      v20 = *((_QWORD *)this + 1);
      v21 = *(int **)this;
      v22 = *(_QWORD *)this + 4LL * (unsigned int)(v5 - 1) + 4;
      do
      {
        while ( 1 )
        {
          v24 = *v21;
          v25 = (double *)(v20 + 8 * v24);
          if ( fabs(*v25) < 1.0e-50 )
            break;
          v23 = *((int *)this + 4);
          ++v21;
          *((_DWORD *)this + 4) = v23 + 1;
          *(_DWORD *)(v19 + 4 * v23) = v24;
          if ( (int *)v22 == v21 )
            return this;
        }
        ++v21;
        *v25 = 0.0;
      }
      while ( (int *)v22 != v21 );
    }
    return this;
  }
  else
  {
LABEL_17:
    *((_DWORD *)this + 4) = v5;
    return this;
  }
}

