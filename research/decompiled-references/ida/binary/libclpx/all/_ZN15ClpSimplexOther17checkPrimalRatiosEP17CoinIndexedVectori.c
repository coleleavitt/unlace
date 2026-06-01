__int64 __fastcall ClpSimplexOther::checkPrimalRatios(ClpSimplexOther *this, CoinIndexedVector *a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // rcx
  double v10; // xmm2_8
  double v11; // xmm1_8
  double v12; // xmm0_8
  double v13; // xmm6_8
  __int64 v14; // rsi
  __int64 v15; // rdx
  double v16; // xmm1_8

  *((_DWORD *)this + 292) = -1;
  result = *((unsigned int *)a2 + 4);
  v4 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  *((_QWORD *)this + 100) = 0x46293E5939A08CEALL;
  if ( (int)result > 0 )
  {
    v6 = (unsigned int)(result - 1);
    v7 = *((_QWORD *)this + 157);
    v8 = *((_QWORD *)this + 150);
    result = 0;
    v9 = v6 + 1;
    v10 = (double)a3;
    while ( 1 )
    {
      v12 = *(double *)(v4 + 8 * result) * v10;
      if ( fabs(v12) <= 0.0000001 )
        goto LABEL_4;
      v13 = *((double *)this + 100) * v12;
      v14 = *(int *)(v5 + 4 * result);
      v15 = *(int *)(v7 + 4 * v14);
      v16 = *(double *)(v8 + 8 * v15);
      if ( v12 > 0.0 )
      {
        v11 = v16 - *(double *)(*((_QWORD *)this + 123) + 8 * v15);
        if ( v11 - v13 >= 0.0 )
          goto LABEL_4;
LABEL_8:
        ++result;
        *((_DWORD *)this + 292) = v14;
        *((double *)this + 100) = fmax(0.0, v11 / v12);
        if ( v9 == result )
          return result;
      }
      else
      {
        v11 = v16 - *(double *)(*((_QWORD *)this + 126) + 8 * v15);
        if ( v11 - v13 > 0.0 )
          goto LABEL_8;
LABEL_4:
        if ( v9 == ++result )
          return result;
      }
    }
  }
  return result;
}

