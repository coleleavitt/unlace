CoinIndexedVector *__fastcall CoinIndexedVector::operator-(CoinIndexedVector *this, CoinIndexedVector *a2, __int64 *a3)
{
  int v5; // ebp
  int v7; // esi
  int v8; // esi
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r8
  char v13; // di
  __int64 v14; // rsi
  int v15; // edx
  __int64 v16; // rdx
  double v17; // xmm0_8
  int v18; // ecx
  double v19; // xmm1_8
  double v20; // xmm0_8
  int v21; // edx
  __int64 v22; // r9
  __int64 v23; // rdi
  int *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  double *v28; // rdx

  v5 = *((_DWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 5);
  if ( *((_DWORD *)a3 + 5) >= v7 )
    v7 = *((_DWORD *)a3 + 5);
  CoinIndexedVector::CoinIndexedVector(this, a2);
  CoinIndexedVector::reserve(this, v7);
  v8 = *((_DWORD *)a3 + 4);
  if ( v8 <= 0 )
    goto LABEL_19;
  v9 = *a3;
  v10 = a3[1];
  v11 = 1;
  v12 = *((_QWORD *)a2 + 1);
  v13 = 0;
  do
  {
    while ( 1 )
    {
      v16 = *(int *)(v9 + 4 * v11 - 4);
      v17 = *(double *)(v12 + 8 * v16);
      v18 = *(_DWORD *)(v9 + 4 * v11 - 4);
      v19 = *(double *)(v10 + 8 * v16);
      if ( v17 == 0.0 )
        break;
      v20 = v17 - v19;
      *(double *)(*((_QWORD *)this + 1) + 8 * v16) = v20;
      v21 = v11;
      if ( fabs(v20) < 1.0e-50 )
        v13 = 1;
      ++v11;
      if ( v21 >= v8 )
        goto LABEL_12;
    }
    if ( fabs(v19) >= 1.0e-50 )
    {
      *(double *)(*((_QWORD *)this + 1) + 8 * v16) = -v19;
      v14 = v5++;
      *(_DWORD *)(*(_QWORD *)this + 4 * v14) = v18;
      v8 = *((_DWORD *)a3 + 4);
    }
    v15 = v11++;
  }
  while ( v15 < v8 );
LABEL_12:
  if ( v13 )
  {
    *((_DWORD *)this + 4) = 0;
    if ( v5 > 0 )
    {
      v22 = *(_QWORD *)this;
      v23 = *((_QWORD *)this + 1);
      v24 = *(int **)this;
      v25 = *(_QWORD *)this + 4LL * (unsigned int)(v5 - 1) + 4;
      do
      {
        while ( 1 )
        {
          v27 = *v24;
          v28 = (double *)(v23 + 8 * v27);
          if ( fabs(*v28) < 1.0e-50 )
            break;
          v26 = *((int *)this + 4);
          ++v24;
          *((_DWORD *)this + 4) = v26 + 1;
          *(_DWORD *)(v22 + 4 * v26) = v27;
          if ( (int *)v25 == v24 )
            return this;
        }
        ++v24;
        *v28 = 0.0;
      }
      while ( (int *)v25 != v24 );
    }
    return this;
  }
  else
  {
LABEL_19:
    *((_DWORD *)this + 4) = v5;
    return this;
  }
}

