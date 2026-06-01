void __fastcall ClpSimplexOther::checkDualRatios(
        ClpSimplexOther *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        double *a4,
        int *a5,
        double *a6,
        double *a7,
        int *a8,
        double *a9)
{
  double v9; // xmm7_8
  double v10; // xmm10_8
  __int64 v11; // xmm12_8
  int v12; // r13d
  double v14; // xmm1_8
  __int64 v15; // r14
  int v16; // r15d
  int v17; // r10d
  __int64 v18; // rbx
  __int64 v19; // rbp
  int v20; // r12d
  __int64 v21; // rax
  double v22; // xmm3_8
  int v23; // esi
  double v24; // xmm0_8
  unsigned __int8 v25; // cl
  double v26; // xmm2_8
  double v27; // xmm2_8
  double v28; // xmm11_8

  v9 = 1.0e31;
  v10 = 0.0;
  v11 = 0;
  v12 = -1;
  v14 = 1.0e31;
  v15 = 0;
  v16 = -1;
  while ( 1 )
  {
    if ( !v15 )
    {
      v20 = *((_DWORD *)this + 27);
      v17 = *((_DWORD *)a2 + 4);
      v18 = *((_QWORD *)a2 + 1);
      v19 = *(_QWORD *)a2;
      if ( v17 > 0 )
        goto LABEL_5;
      goto LABEL_28;
    }
    v17 = *((_DWORD *)a3 + 4);
    v18 = *((_QWORD *)a3 + 1);
    v19 = *(_QWORD *)a3;
    if ( v17 > 0 )
    {
      v20 = 0;
LABEL_5:
      v21 = 0;
      do
      {
        while ( 1 )
        {
          v22 = *(double *)(v18 + 8 * v21);
          if ( fabs(v22) < 0.000000001 )
            goto LABEL_10;
          v23 = v20 + *(_DWORD *)(v19 + 4 * v21);
          v24 = *(double *)(*((_QWORD *)this + 147) + 8LL * v23);
          v25 = *(_BYTE *)(*((_QWORD *)this + 33) + v23) & 7;
          if ( v25 == 2 )
            break;
          if ( v25 <= 2u )
          {
            if ( v25 )
              goto LABEL_10;
LABEL_9:
            v9 = 0.0;
            v12 = v20 + *(_DWORD *)(v19 + 4 * v21);
            v16 = v12;
            v14 = 0.0;
            goto LABEL_10;
          }
          if ( v25 == 3 )
          {
            v27 = *((double *)this + 109);
            v28 = -v27;
            if ( v22 < 0.0 )
            {
              if ( v28 > v9 * v22 + v24 )
              {
                v10 = *(double *)(v18 + 8 * v21);
                v12 = v20 + *(_DWORD *)(v19 + 4 * v21);
                v9 = -(v24 + v27) / v22;
              }
            }
            else if ( v28 > v24 - v14 * v22 )
            {
              v11 = *(_QWORD *)(v18 + 8 * v21);
              v16 = v20 + *(_DWORD *)(v19 + 4 * v21);
              v14 = (v24 + v27) / v22;
            }
            goto LABEL_10;
          }
          if ( v25 == 4 )
            goto LABEL_9;
LABEL_10:
          if ( v17 <= (int)++v21 )
            goto LABEL_16;
        }
        v26 = *((double *)this + 109);
        if ( v22 <= 0.0 )
        {
          if ( v24 - v14 * v22 > v26 )
          {
            v11 = *(_QWORD *)(v18 + 8 * v21);
            v16 = v20 + *(_DWORD *)(v19 + 4 * v21);
            v14 = -(v26 - v24) / v22;
          }
          goto LABEL_10;
        }
        if ( v9 * v22 + v24 <= v26 )
          goto LABEL_10;
        ++v21;
        v12 = v23;
        v10 = v22;
        v9 = (v26 - v24) / v22;
      }
      while ( v17 > (int)v21 );
    }
LABEL_16:
    if ( (_DWORD)v15 == 1 )
      break;
LABEL_28:
    ++v15;
  }
  if ( v12 >= 0 )
  {
    *a4 = v9;
    *a5 = v12;
    *a6 = v10;
  }
  if ( v16 >= 0 )
  {
    *a7 = v14;
    *a8 = v16;
    *(_QWORD *)a9 = v11;
  }
}

