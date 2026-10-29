__int64 __fastcall CoinPartitionedVector::scan(CoinPartitionedVector *this, int a2, double a3)
{
  int *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // r10
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // r8
  double v13; // xmm0_8
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdi
  double v18; // xmm1_8
  __int64 v19; // r8

  v3 = (int *)((char *)this + 4 * a2);
  v4 = v3[8];
  v5 = *((_QWORD *)this + 1) + 8 * v4;
  v6 = v3[8];
  v7 = *(_QWORD *)this + 4 * v4;
  v8 = v3[9] - v6;
  if ( a3 == 0.0 )
  {
    if ( v8 > 0 )
    {
      v9 = (unsigned int)(v8 - 1);
      v10 = 0;
      result = 0;
      v12 = v9 + 1;
      do
      {
        v13 = *(double *)(v5 + 8 * v10);
        if ( v13 != 0.0 )
        {
          v14 = (int)result;
          *(_QWORD *)(v5 + 8 * v10) = 0;
          result = (unsigned int)(result + 1);
          *(double *)(v5 + 8 * v14) = v13;
          *(_DWORD *)(v7 + 4 * v14) = v6 + v10;
        }
        ++v10;
      }
      while ( v10 != v12 );
      v3[17] = result;
      return result;
    }
LABEL_15:
    v3[17] = 0;
    return 0;
  }
  if ( v8 <= 0 )
    goto LABEL_15;
  v15 = (unsigned int)(v8 - 1);
  v16 = 0;
  result = 0;
  v17 = v15 + 1;
  do
  {
    v18 = *(double *)(v5 + 8 * v16);
    if ( v18 != 0.0 )
    {
      *(_QWORD *)(v5 + 8 * v16) = 0;
      if ( fabs(v18) > a3 )
      {
        v19 = (int)result;
        result = (unsigned int)(result + 1);
        *(double *)(v5 + 8 * v19) = v18;
        *(_DWORD *)(v7 + 4 * v19) = v6 + v16;
      }
    }
    ++v16;
  }
  while ( v16 != v17 );
  v3[17] = result;
  return result;
}

