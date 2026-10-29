__int64 __fastcall ClpSimplexDual::updateDualsInValuesPass(
        ClpSimplexDual *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        double a4)
{
  int v4; // eax
  double v5; // xmm3_8
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r11
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // r10
  double v12; // xmm2_8
  double *v13; // r8
  int v14; // eax
  double v15; // xmm1_8
  double v16; // xmm1_8
  char v17; // al
  __int64 result; // rax
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r11
  __int64 v22; // r10
  __int64 v23; // r10
  __int64 v24; // rcx
  double v25; // xmm2_8
  double *v26; // rsi
  double v27; // xmm1_8
  double v28; // xmm1_8
  char v29; // cl

  v4 = *((_DWORD *)a2 + 4);
  v5 = *((double *)this + 109);
  v6 = *((_QWORD *)this + 148);
  v7 = *((_QWORD *)a2 + 1);
  v8 = *(_QWORD *)a2;
  if ( v4 > 0 )
  {
    v9 = *((_DWORD *)this + 27);
    v10 = 0;
    v11 = (unsigned int)(v4 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v12 = *(double *)(v7 + 8 * v10) * a4;
        v13 = (double *)(v6 + 8LL * *(int *)(v8 + 4 * v10));
        v14 = v9 + *(_DWORD *)(v8 + 4 * v10);
        v15 = *v13;
        *(_QWORD *)(v7 + 8 * v10) = 0;
        v16 = v15 - v12;
        *v13 = v16;
        v17 = *(_BYTE *)(*((_QWORD *)this + 33) + v14) & 7;
        if ( v17 == 2 )
          break;
        if ( v17 == 3 && -v5 > v16 )
          goto LABEL_7;
LABEL_4:
        if ( v11 == ++v10 )
          goto LABEL_8;
      }
      if ( v16 <= v5 )
        goto LABEL_4;
LABEL_7:
      ++v10;
      *v13 = 0.0;
    }
    while ( v11 != v10 );
  }
LABEL_8:
  *((_DWORD *)a2 + 4) = 0;
  result = *((unsigned int *)a3 + 4);
  *((_BYTE *)a2 + 28) = 0;
  v19 = *((_QWORD *)this + 149);
  v20 = *((_QWORD *)a3 + 1);
  v21 = *(_QWORD *)a3;
  if ( (int)result > 0 )
  {
    v22 = (unsigned int)(result - 1);
    result = 0;
    v23 = v22 + 1;
    do
    {
      while ( 1 )
      {
        v24 = *(int *)(v21 + 4 * result);
        v25 = *(double *)(v20 + 8 * result) * a4;
        v26 = (double *)(v19 + 8 * v24);
        v27 = *v26;
        *(_QWORD *)(v20 + 8 * result) = 0;
        v28 = v27 - v25;
        *v26 = v28;
        v29 = *(_BYTE *)(*((_QWORD *)this + 33) + v24) & 7;
        if ( v29 == 3 )
          break;
        if ( v29 == 2 && v28 > v5 )
          goto LABEL_14;
LABEL_11:
        if ( ++result == v23 )
          goto LABEL_15;
      }
      if ( -v5 <= v28 )
        goto LABEL_11;
LABEL_14:
      ++result;
      *v26 = 0.0;
    }
    while ( result != v23 );
  }
LABEL_15:
  *((_DWORD *)a3 + 4) = 0;
  *((_BYTE *)a3 + 28) = 0;
  return result;
}

