__int64 __fastcall ClpNetworkBasis::updateColumn(ClpNetworkBasis *this, CoinIndexedVector *a2, double *a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r12
  __int64 v8; // rsi
  int v9; // r10d
  __int64 v10; // rdi
  double v11; // xmm0_8
  int v12; // edx
  __int64 v13; // rax
  int v14; // r11d
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE *v17; // rdi
  __int64 i; // rcx
  int *v19; // r9
  int v20; // r13d
  __int64 result; // rax
  __int64 v22; // rdx
  int *v23; // rsi
  __int64 v24; // rcx
  double *v25; // rsi
  double v26; // xmm0_8
  int v27; // edi

  CoinIndexedVector::clear(a2);
  v5 = *(int *)this;
  v6 = *((_QWORD *)a2 + 1);
  v7 = *(_QWORD *)a2;
  if ( (int)v5 <= 0 )
    goto LABEL_21;
  v8 = 0;
  v9 = -1;
  v10 = 0;
  do
  {
    while ( 1 )
    {
      v11 = a3[v8];
      v12 = v8;
      if ( v11 != 0.0 )
        break;
      if ( (int)++v8 >= (int)v5 )
        goto LABEL_10;
    }
    v13 = *((_QWORD *)this + 12);
    a3[v8] = 0.0;
    *(double *)(v6 + 8 * v8) = v11;
    *(_DWORD *)(v7 + 4 * v10) = v8;
    v14 = v10 + 1;
    v15 = *(int *)(v13 + 4 * v8);
    v16 = v8;
    if ( v9 < (int)v15 )
      v9 = v15;
    v17 = (_BYTE *)(v8 + *((_QWORD *)this + 13));
    for ( i = 4 * v15; !*v17; v12 = v16 )
    {
      v19 = (int *)(i + *((_QWORD *)this + 11));
      i -= 4;
      v20 = *v19;
      *v19 = v12;
      *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v16) = v20;
      *v17 = 1;
      v16 = *(int *)(*((_QWORD *)this + 2) + 4 * v16);
      v17 = (_BYTE *)(v16 + *((_QWORD *)this + 13));
    }
    v5 = *(int *)this;
    ++v8;
    v10 = v14;
  }
  while ( (int)v8 < (int)v5 );
LABEL_10:
  if ( v9 == -1 )
  {
LABEL_21:
    result = 0;
  }
  else
  {
    result = 0;
    v22 = 4LL * v9;
    do
    {
      while ( 1 )
      {
        v23 = (int *)(v22 + *((_QWORD *)this + 11));
        v24 = *v23;
        *v23 = -1;
        if ( (int)v24 >= 0 )
          break;
LABEL_15:
        v22 -= 4;
        if ( v22 == -4 )
          goto LABEL_16;
      }
      do
      {
        while ( 1 )
        {
          *(_BYTE *)(*((_QWORD *)this + 13) + v24) = 0;
          v25 = (double *)(v6 + 8 * v24);
          v26 = *v25;
          if ( *v25 == 0.0 )
            break;
          result = (unsigned int)(result + 1);
          v27 = *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v24);
          a3[*(int *)(*((_QWORD *)this + 10) + 4 * v24)] = *(double *)(*((_QWORD *)this + 7) + 8 * v24) * v26;
          *v25 = 0.0;
          *(double *)(v6 + 8LL * v27) = v26 + *(double *)(v6 + 8LL * v27);
          v24 = *(int *)(*((_QWORD *)this + 8) + 4 * v24);
          if ( (int)v24 < 0 )
            goto LABEL_15;
        }
        v24 = *(int *)(*((_QWORD *)this + 8) + 4 * v24);
      }
      while ( (int)v24 >= 0 );
      v22 -= 4;
    }
    while ( v22 != -4 );
LABEL_16:
    v5 = *(int *)this;
  }
  *(_QWORD *)(v6 + 8 * v5) = 0;
  return result;
}

