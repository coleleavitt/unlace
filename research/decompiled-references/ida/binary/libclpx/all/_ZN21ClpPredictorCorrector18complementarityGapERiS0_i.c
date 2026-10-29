__int128 __usercall ClpPredictorCorrector::complementarityGap@<xmm0>(
        ClpPredictorCorrector *this@<rdi>,
        int *a2@<rsi>,
        int *a3@<rdx>,
        int a4@<ecx>)
{
  int v5; // eax
  __int64 v6; // r8
  int v7; // ebp
  __int64 v8; // rax
  double v9; // xmm0_8
  __int64 v10; // r8
  __int128 v11; // xmm3
  char v12; // si
  __int64 v13; // rsi
  double v14; // xmm1_8
  double v15; // xmm2_8
  double v16; // xmm1_8
  __int64 v17; // rsi
  double v18; // xmm1_8
  double v19; // xmm2_8
  double v20; // xmm1_8
  CoinMessageHandler *v21; // rax
  CoinMessageHandler *v22; // rax
  __int64 v23; // rax

  *a2 = 0;
  *a3 = 0;
  v5 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  if ( v5 <= 0 )
  {
    v11 = 0;
  }
  else
  {
    v6 = (unsigned int)(v5 - 1);
    v7 = 0;
    v8 = 0;
    v9 = 0.0;
    v10 = v6 + 1;
    v11 = 0;
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v8) & 4) == 0 )
      {
        ++*a2;
        v12 = *(_BYTE *)(*((_QWORD *)this + 33) + v8);
        if ( (v12 & 8) != 0 )
        {
          v13 = *((_QWORD *)this + 159);
          ++*a3;
          v14 = *(double *)(v13 + 8 * v8);
          v15 = *(double *)(*((_QWORD *)this + 141) + 8 * v8);
          if ( a4 )
          {
            v14 = v14 + *(double *)(*((_QWORD *)this + 147) + 8 * v8) * *((double *)this + 127);
            v15 = v15
                + (*(double *)(*((_QWORD *)this + 143) + 8 * v8)
                 + *(double *)(*((_QWORD *)this + 145) + 8 * v8)
                 - v15
                 - *(double *)(*((_QWORD *)this + 94) + 8 * v8))
                * *((double *)this + 126);
          }
          v16 = v14 * fmin(1.0e30, v15);
          if ( v16 < 0.0 )
          {
            v9 = v9 - v16;
            v16 = 0.0;
            ++v7;
          }
          *(double *)&v11 = *(double *)&v11 + v16;
          v12 = *(_BYTE *)(*((_QWORD *)this + 33) + v8);
        }
        if ( (v12 & 0x10) != 0 )
        {
          v17 = *((_QWORD *)this + 160);
          ++*a3;
          v18 = *(double *)(v17 + 8 * v8);
          v19 = *(double *)(*((_QWORD *)this + 140) + 8 * v8);
          if ( a4 )
          {
            v18 = v18 + *(double *)(*((_QWORD *)this + 148) + 8 * v8) * *((double *)this + 127);
            v19 = v19
                + (*(double *)(*((_QWORD *)this + 97) + 8 * v8)
                 - *(double *)(*((_QWORD *)this + 143) + 8 * v8)
                 - *(double *)(*((_QWORD *)this + 145) + 8 * v8)
                 - v19)
                * *((double *)this + 126);
          }
          v20 = v18 * fmin(1.0e30, v19);
          if ( v20 < 0.0 )
          {
            v9 = v9 - v20;
            v20 = 0.0;
            ++v7;
          }
          *(double *)&v11 = *(double *)&v11 + v20;
        }
      }
      ++v8;
    }
    while ( v8 != v10 );
    if ( !a4 && v7 )
    {
      v21 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)this + 43),
                                    71,
                                    (ClpPredictorCorrector *)((char *)this + 416));
      v22 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v21);
      v23 = CoinMessageHandler::operator<<(v22);
      CoinMessageHandler::operator<<(v23, 0, v9);
      v11 = (unsigned __int64)v11;
    }
  }
  if ( !*a2 )
    *a2 = 1;
  return v11;
}

