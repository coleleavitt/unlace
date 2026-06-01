__int64 __fastcall ClpSimplexNonlinear::pivotNonlinearResult(ClpSimplexNonlinear *this)
{
  int v2; // r8d
  __int64 v3; // rcx
  double *v4; // r10
  int v5; // edx
  _DWORD *v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // r11
  double v11; // xmm5_8
  __int64 v12; // r9
  double v13; // xmm4_8
  __int64 v14; // r9
  double v15; // xmm5_8
  double v16; // xmm1_8
  __int64 i; // rax
  char v18; // bp
  double v19; // xmm0_8
  double v20; // xmm2_8
  double v21; // xmm7_8
  char v22; // r12
  CoinIndexedVector *v23; // rdx
  ClpFactorization *v24; // rdi
  int v25; // eax
  bool v26; // cl
  unsigned int v27; // r13d
  CoinIndexedVector *v28; // rsi
  double v29; // xmm0_8
  double v30; // xmm1_8
  int v31; // esi
  double v32; // xmm0_8
  int v33; // eax
  double v34; // xmm1_8
  __int64 v35; // rcx
  double v36; // xmm2_8
  __int64 v37; // rdx
  ClpNonLinearCost *v38; // rdi
  int v39; // eax
  _BYTE *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // r11
  __int64 v49; // r9
  __int64 v50; // rbp
  __int64 v51; // r12
  double v52; // xmm7_8
  __int64 v53; // rax
  __int64 v54; // r8
  double v55; // xmm2_8
  __int64 v56; // rax
  __int64 v57; // rax
  double *v58; // rdi
  double v59; // xmm0_8
  __int64 v60; // rdx
  __int64 v61; // rax
  int v62; // eax
  int v63; // eax
  ClpNonLinearCost *v64; // rdi
  double v65; // xmm3_8
  int v66; // eax
  __int64 v67; // rdx
  ClpNonLinearCost *v68; // rdi
  double v69; // xmm2_8
  __int64 v70; // rsi
  double v71; // xmm1_8
  int v72; // r8d
  int v73; // edx
  __int64 v74; // rax
  int v75; // edx
  double *v76; // rdi
  CoinMessageHandler *v77; // rax
  CoinMessageHandler *v78; // rdi
  __int64 v79; // rax
  int v80; // eax
  double v81; // [rsp+0h] [rbp-48h]
  double v82[6]; // [rsp+18h] [rbp-30h] BYREF

  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
  ClpSimplex::unpackPacked(this, *((CoinIndexedVector **)this + 133));
  ClpFactorization::updateColumnFT(
    *((ClpFactorization **)this + 158),
    *((CoinIndexedVector **)this + 134),
    *((CoinIndexedVector **)this + 133));
  v2 = *((_DWORD *)this + 292);
  v3 = *((_QWORD *)this + 133);
  *((_QWORD *)this + 100) = 0;
  v4 = *(double **)(v3 + 8);
  v5 = *(_DWORD *)(v3 + 16);
  v6 = *(_DWORD **)v3;
  if ( v2 < 0 )
  {
    v15 = *((double *)this + 110);
    v48 = *((_QWORD *)this + 157);
    v49 = *((_QWORD *)this + 150);
    v50 = *((_QWORD *)this + 123);
    v51 = *((_QWORD *)this + 126);
    if ( v5 > 0 )
    {
      v52 = 1.797693134862316e308;
      v53 = 0;
      do
      {
        if ( fabs(v4[v53]) > 0.000001 )
        {
          v54 = (int)v6[v53];
          v55 = fmin(
                  *(double *)(v51 + 8LL * *(int *)(v48 + 4 * v54)) - *(double *)(v49 + 8LL * *(int *)(v48 + 4 * v54)),
                  *(double *)(v49 + 8LL * *(int *)(v48 + 4 * v54)) - *(double *)(v50 + 8LL * *(int *)(v48 + 4 * v54)));
          if ( v52 > v55 )
          {
            *((double *)this + 99) = v4[v53];
            v52 = v55;
            *((_DWORD *)this + 292) = v54;
          }
        }
        ++v53;
      }
      while ( (unsigned int)(v5 - 1) + 1LL != v53 );
      if ( v52 > v15 )
      {
        v69 = 1.797693134862316e308;
        v70 = 0;
        do
        {
          v71 = v4[v70];
          if ( fabs(v71) > 0.000001 )
          {
            v72 = v6[v70];
            v73 = 1664525 * *((_DWORD *)this + 89) + 1013904223;
            *((_DWORD *)this + 89) = v73;
            if ( v69 > (double)v73 * 2.328306436538696e-10 )
            {
              *((double *)this + 99) = v71;
              v69 = (double)v73 * 2.328306436538696e-10;
              *((_DWORD *)this + 292) = v72;
            }
          }
          ++v70;
        }
        while ( v53 != v70 );
      }
      v2 = *((_DWORD *)this + 292);
    }
    v56 = *(int *)(v48 + 4LL * v2);
    v19 = *((double *)this + 99);
    v81 = 0.0;
    *((_DWORD *)this + 290) = v56;
    v9 = v56;
    v10 = 8 * v56;
    v20 = *(double *)(v49 + 8 * v56);
    *((double *)this + 106) = v20;
    v13 = *(double *)(v50 + 8 * v56);
    v18 = 0;
    *((double *)this + 105) = v13;
    v16 = *(double *)(v51 + 8 * v56);
    *((double *)this + 107) = v16;
  }
  else
  {
    v7 = *((_QWORD *)this + 150);
    v8 = *(int *)(*((_QWORD *)this + 157) + 4LL * v2);
    *((_DWORD *)this + 290) = v8;
    v9 = v8;
    v10 = 8 * v8;
    v11 = *(double *)(v7 + 8 * v8);
    v12 = *((_QWORD *)this + 123);
    *((double *)this + 106) = v11;
    v81 = v11;
    v13 = *(double *)(v12 + 8 * v8);
    v14 = *((_QWORD *)this + 126);
    *((double *)this + 105) = v13;
    v15 = *((double *)this + 110);
    v16 = *(double *)(v14 + 8 * v8);
    *((double *)this + 107) = v16;
    if ( v5 <= 0 )
    {
LABEL_8:
      v18 = 1;
      v19 = *((double *)this + 99);
      v20 = v81;
      goto LABEL_9;
    }
    if ( v2 != *v6 )
    {
      for ( i = 1; (unsigned int)(v5 - 1) + 1LL != i; ++i )
      {
        if ( v2 == v6[i] )
        {
          v4 += i;
          goto LABEL_72;
        }
      }
      goto LABEL_8;
    }
LABEL_72:
    v19 = *v4;
    v18 = 1;
    v20 = v81;
    *((double *)this + 99) = *v4;
  }
LABEL_9:
  v21 = v20 - 0.0 * v19;
  if ( v20 >= v16 - v15 )
  {
    v64 = *((ClpNonLinearCost **)this + 165);
    *((_DWORD *)this + 291) = -1;
    ClpNonLinearCost::nearest(v64, v9, v21);
    *((double *)this + 107) = v20 - 0.0 * v19;
  }
  else
  {
    if ( v13 + v15 < v20 )
    {
      *((double *)this + 105) = v20;
      v22 = 1;
      *((double *)this + 107) = v20;
      goto LABEL_12;
    }
    v68 = *((ClpNonLinearCost **)this + 165);
    *((_DWORD *)this + 291) = 1;
    ClpNonLinearCost::nearest(v68, v9, v21);
    *((double *)this + 105) = v21;
  }
  v19 = *((double *)this + 99);
  v22 = 0;
  v3 = *((_QWORD *)this + 133);
  v2 = *((_DWORD *)this + 292);
  v10 = 8LL * *((int *)this + 290);
LABEL_12:
  v23 = *((CoinIndexedVector **)this + 134);
  v24 = *((ClpFactorization **)this + 158);
  *((_QWORD *)this + 108) = *(_QWORD *)(*((_QWORD *)this + 147) + v10);
  v25 = ClpFactorization::replaceColumn(v24, this, v23, (CoinIndexedVector *)v3, v2, v19, 0, 0.00000001);
  if ( v25 != 2 )
  {
    v26 = v25 == 4;
    if ( v25 != 1 && v25 != 4 )
    {
      if ( v25 == 3 )
      {
        v27 = -2;
        v74 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
        if ( v74 )
        {
          v75 = *(_DWORD *)(v74 + 68);
          if ( (double)*(int *)(v74 + 64) * 0.5 <= (double)v75 || v75 > 199 )
            v27 = -2;
          else
            *(double *)(v74 + 16) = 1.1 * *(double *)(v74 + 16);
        }
      }
      else
      {
        v27 = -1;
        if ( v25 == 5 )
          *((_DWORD *)this + 80) = -2;
      }
      goto LABEL_18;
    }
LABEL_42:
    v45 = *((_QWORD *)this + 158);
    v46 = *(_QWORD *)(v45 + 8);
    if ( v46 )
      v47 = *(_DWORD *)(v46 + 68);
    else
      v47 = *(_DWORD *)(*(_QWORD *)(v45 + 16) + 52LL);
    if ( v47 > 5 || (v27 = -1, v26) )
      v27 = -3;
LABEL_18:
    v28 = *((CoinIndexedVector **)this + 133);
    v29 = *((double *)this + 100);
    v82[0] = 0.0;
    ClpSimplexPrimal::updatePrimalsInPrimal(this, v28, v29, v82, 1);
    v30 = *((double *)this + 102);
    v31 = *((_DWORD *)this + 290);
    if ( *((_DWORD *)this + 289) == -1 )
    {
      if ( *((_DWORD *)this + 288) != v31 )
      {
        v32 = v30 - fabs(*((double *)this + 100));
        *((double *)this + 102) = v32;
LABEL_21:
        v33 = *((_DWORD *)this + 291);
        v82[0] = *((double *)this + 104) * (v32 - v30) + v82[0];
        if ( v33 <= 0 )
          v34 = *((double *)this + 107);
        else
          v34 = *((double *)this + 105);
        v35 = *((_QWORD *)this + 123);
        *((double *)this + 106) = v34;
        v36 = *((double *)this + 110);
        v37 = 8LL * v31;
        if ( *(double *)(v35 + v37) - v36 <= v34 )
        {
          v65 = *(double *)(*((_QWORD *)this + 126) + 8LL * v31);
          if ( v34 > v36 + v65 )
          {
            v38 = *((ClpNonLinearCost **)this + 165);
            v34 = v36 * 0.9 + v65;
            *((double *)this + 106) = v34;
            if ( v22 )
              goto LABEL_26;
            goto LABEL_78;
          }
        }
        else
        {
          v34 = *(double *)(v35 + 8LL * v31) - v36 * 0.9;
          *((double *)this + 106) = v34;
        }
        v38 = *((ClpNonLinearCost **)this + 165);
        if ( v22 )
        {
LABEL_26:
          *(double *)(*((_QWORD *)this + 150) + v37) = v34;
          v31 = *((_DWORD *)this + 288);
LABEL_27:
          ClpNonLinearCost::setOne(v38, v31, v32);
          v39 = ClpSimplex::housekeeping(this, v82[0]);
          if ( v18 )
            *(double *)(*((_QWORD *)this + 150) + 8LL * *((int *)this + 290)) = v81;
          if ( v22 )
          {
            v40 = (_BYTE *)(*((_QWORD *)this + 33) + *((int *)this + 290));
            *v40 = *v40 & 0xF8 | 4;
          }
          if ( v39 == 1 )
          {
            v27 = -2;
          }
          else if ( v39 == 2 )
          {
            v27 = 3;
          }
          else
          {
            v41 = *((_QWORD *)this + 158);
            v42 = *(_QWORD *)(v41 + 8);
            if ( v42 )
              v43 = *(_DWORD *)(v42 + 64);
            else
              v43 = *(_DWORD *)(*(_QWORD *)(v41 + 16) + 48LL);
            if ( *((_DWORD *)this + 77) == *((_DWORD *)this + 293) + 2 * v43 )
              v27 = -2;
          }
          if ( (***((int (__fastcall ****)(_QWORD, __int64))this + 45))(*((_QWORD *)this + 45), 100) >= 0 )
          {
            v27 = 4;
            *((_QWORD *)this + 40) = 0x6400000005LL;
          }
          return v27;
        }
LABEL_78:
        v66 = ClpNonLinearCost::setOneOutgoing(v38, v31, (double *)this + 106);
        v67 = *((int *)this + 290);
        *((_DWORD *)this + 291) = v66;
        v34 = *((double *)this + 106);
        v38 = *((ClpNonLinearCost **)this + 165);
        v32 = *((double *)this + 102);
        v37 = 8 * v67;
        goto LABEL_26;
      }
      v32 = *((double *)this + 101);
      *((double *)this + 102) = v32;
    }
    else
    {
      if ( *((_DWORD *)this + 288) != v31 )
      {
        v32 = fabs(*((double *)this + 100)) + v30;
        *((double *)this + 102) = v32;
        goto LABEL_21;
      }
      v32 = *((double *)this + 103);
      *((double *)this + 102) = v32;
    }
    v38 = *((ClpNonLinearCost **)this + 165);
    v82[0] = *((double *)this + 104) * (v32 - v30) + v82[0];
    goto LABEL_27;
  }
  if ( *((_DWORD *)this + 293) == *((_DWORD *)this + 77) && fabs(*((double *)this + 99)) > 0.00001 )
  {
    v26 = 1;
    goto LABEL_42;
  }
  v57 = *((_QWORD *)this + 158);
  v58 = *(double **)(v57 + 8);
  if ( v58 )
  {
    v59 = fmin(v58[1], 1.0e-15);
    CoinFactorization::zeroTolerance((CoinFactorization *)v58, v59);
  }
  else
  {
    v76 = *(double **)(v57 + 16);
    v59 = fmin(v76[2], 1.0e-15);
    CoinOtherFactorization::zeroTolerance((CoinOtherFactorization *)v76, v59);
  }
  v60 = *((_QWORD *)this + 158);
  v61 = *(_QWORD *)(v60 + 8);
  if ( v61 )
    v62 = *(_DWORD *)(v61 + 64);
  else
    v62 = *(_DWORD *)(*(_QWORD *)(v60 + 16) + 48LL);
  if ( v62 > 10 )
  {
    if ( *((int *)this + 326) >= 0 )
      v62 = *((_DWORD *)this + 326);
    v63 = v62 >> 1;
    if ( v63 <= 0 )
      v63 = 1;
    *((_DWORD *)this + 326) = v63;
  }
  if ( *((_DWORD *)this + 293) == *((_DWORD *)this + 77) )
  {
    v27 = -5;
    v77 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  12,
                                  (ClpSimplexNonlinear *)((char *)this + 416));
    v78 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v77);
    v79 = CoinMessageHandler::operator<<(v78);
    CoinMessageHandler::operator<<(v79, 0, v59);
    ClpSimplex::setFlagged(this, *((_DWORD *)this + 288));
    v80 = *((_DWORD *)this + 77);
    *((_DWORD *)this + 425) = 0;
    *((_DWORD *)this + 332) = v80;
    ClpSimplexPrimal::clearAll(this);
    *((_DWORD *)this + 292) = -1;
    *((_DWORD *)this + 290) = -1;
  }
  else
  {
    v27 = -4;
    ClpSimplexPrimal::clearAll(this);
    *((_DWORD *)this + 292) = -1;
  }
  return v27;
}

