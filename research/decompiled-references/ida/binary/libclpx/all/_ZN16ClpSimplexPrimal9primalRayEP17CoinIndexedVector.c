_QWORD *__fastcall ClpSimplexPrimal::primalRay(ClpSimplexPrimal *this, CoinIndexedVector *a2)
{
  void *v3; // rdi
  unsigned __int64 v4; // rdi
  _QWORD *result; // rax
  int v6; // edi
  int v7; // r9d
  int *v8; // rcx
  __int64 v9; // r8
  double v10; // xmm1_8
  __int64 v11; // rdx
  int *v12; // rdx
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rsi
  _QWORD *v21; // rdx
  _QWORD *v22; // rdx

  v3 = *((void **)this + 27);
  if ( v3 )
    operator delete[](v3);
  v4 = *((int *)this + 27);
  if ( v4 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  result = (_QWORD *)operator new[](8 * v4);
  v6 = *((_DWORD *)this + 27);
  *((_QWORD *)this + 27) = result;
  if ( v6 )
  {
    if ( v6 / 8 <= 0 )
    {
      v22 = result;
    }
    else
    {
      v21 = result;
      do
      {
        *v21 = 0;
        v21[1] = 0;
        v21 += 8;
        *(v21 - 6) = 0;
        *(v21 - 5) = 0;
        *(v21 - 4) = 0;
        *(v21 - 3) = 0;
        *(v21 - 2) = 0;
        *(v21 - 1) = 0;
      }
      while ( v21 != &result[8 * (unsigned int)(v6 / 8 - 1) + 8] );
      v22 = &result[8 * (v6 / 8 - 1) + 8];
    }
    switch ( v6 % 8 )
    {
      case 1:
        goto LABEL_33;
      case 2:
        goto LABEL_32;
      case 3:
        goto LABEL_31;
      case 4:
        goto LABEL_30;
      case 5:
        goto LABEL_29;
      case 6:
        goto LABEL_28;
      case 7:
        v22[6] = 0;
LABEL_28:
        v22[5] = 0;
LABEL_29:
        v22[4] = 0;
LABEL_30:
        v22[3] = 0;
LABEL_31:
        v22[2] = 0;
LABEL_32:
        v22[1] = 0;
LABEL_33:
        *v22 = 0;
        break;
      default:
        break;
    }
  }
  v7 = *((_DWORD *)a2 + 4);
  v8 = *(int **)a2;
  v9 = *((_QWORD *)a2 + 1);
  v10 = (double)-*((_DWORD *)this + 289);
  v11 = *((int *)this + 288);
  if ( v6 > (int)v11 )
    *(double *)&result[v11] = (double)*((int *)this + 289);
  if ( *((_BYTE *)a2 + 28) )
  {
    if ( v7 > 0 )
    {
      v17 = *((_QWORD *)this + 157);
      v18 = 0;
      v19 = (unsigned int)(v7 - 1) + 1LL;
      do
      {
        v20 = *(int *)(v17 + 4LL * v8[v18]);
        if ( v6 > (int)v20 && fabs(*(double *)(v9 + 8 * v18)) >= 1.0e-12 )
          *(double *)&result[v20] = *(double *)(v9 + 8 * v18) * v10;
        ++v18;
      }
      while ( v19 != v18 );
    }
  }
  else if ( v7 > 0 )
  {
    v12 = v8;
    v13 = *((_QWORD *)this + 157);
    v14 = (__int64)&v8[v7 - 1 + 1];
    do
    {
      v15 = *v12;
      v16 = *(int *)(v13 + 4 * v15);
      if ( v6 > (int)v16 && fabs(*(double *)(v9 + 8 * v15)) >= 1.0e-12 )
        *(double *)&result[v16] = *(double *)(v9 + 8 * v15) * v10;
      ++v12;
    }
    while ( (int *)v14 != v12 );
  }
  return result;
}

