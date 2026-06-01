double *__fastcall ClpSimplexDual::checkPossibleValuesMove(
        ClpSimplexDual *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        double a4)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  double v7; // xmm1_8
  double v8; // xmm8_8
  double v9; // xmm6_8
  double v10; // xmm12_8
  double *result; // rax
  int v12; // r8d
  double v13; // xmm11_8
  _DWORD *v14; // rcx
  double v15; // xmm13_8
  int v16; // r11d
  double v17; // xmm7_8
  double v18; // xmm10_8
  int v19; // r15d
  int v20; // r14d
  double *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rbx
  int v24; // r9d
  double v25; // xmm2_8
  double v26; // xmm5_8
  double v27; // xmm14_8
  double v28; // xmm2_8
  double v29; // xmm6_8
  double v30; // xmm2_8
  double v31; // xmm5_8
  double v32; // xmm14_8
  __int64 v33; // rax
  __int64 v34; // xmm0_8
  double v35; // xmm0_8
  double v36; // xmm14_8
  double v37; // xmm15_8
  double v38; // [rsp+0h] [rbp-48h]
  double v39; // [rsp+8h] [rbp-40h]

  v4 = *((int *)this + 290);
  v5 = *((_QWORD *)this + 147);
  v6 = v4;
  v39 = 0.99999 * a4;
  v7 = *(double *)(v5 + 8 * v4);
  v8 = 1.001 * *((double *)this + 109);
  if ( v7 <= 0.0 )
  {
    v7 = -v7;
    v9 = *(double *)(*((_QWORD *)this + 126) + 8 * v4);
  }
  else
  {
    v9 = -*(double *)(*((_QWORD *)this + 123) + 8 * v4);
  }
  v10 = 0.0;
  result = *((double **)a2 + 1);
  v12 = *((_DWORD *)a2 + 4);
  v13 = 0.0;
  v14 = *(_DWORD **)a2;
  v15 = -a4;
  v16 = *((_DWORD *)this + 27);
  v17 = 1.0;
  v18 = 1.0e31;
  v19 = -1;
  v20 = 0;
  v38 = -v8;
LABEL_4:
  if ( v12 <= 0 )
  {
LABEL_11:
    if ( v20 != 1 )
      goto LABEL_25;
    goto LABEL_12;
  }
  v21 = result;
  v22 = *((_QWORD *)this + 33);
  v23 = (__int64)&v14[v12 - 1 + 1];
  while ( 2 )
  {
    v24 = v16 + *v14;
    result = (double *)(*(_BYTE *)(v22 + v24) & 7);
    switch ( (char)result )
    {
      case 0:
      case 4:
        if ( fabs(*v21) > v17 )
        {
          v6 = v24;
          v10 = *v21;
          v13 = *v21;
          v19 = v16 + *v14;
          v17 = fabs(*v21);
          v39 = v17;
          v7 = 0.0;
          v18 = 0.0;
        }
        goto LABEL_23;
      case 2:
        result = *((double **)this + 126);
        v30 = *v21;
        v31 = *(double *)(v5 + 8LL * v24);
        v9 = v9 + result[v24] * *v21;
        if ( *v21 < a4 )
        {
          if ( v15 >= v30 )
          {
            v36 = v31 - v18 * v30;
            if ( v36 > v38 && (v36 > v8 || fabs(v30) > v39) )
            {
              v10 = *v21;
              v19 = v16 + *v14;
              v39 = fabs(v30);
              v18 = v31 / v30;
            }
          }
        }
        else
        {
          v32 = v7 * v30 + v31;
          if ( v32 > v38 && (v32 > v8 || fabs(v30) > v17) )
          {
            v13 = *v21;
            v6 = v24;
            v17 = fabs(v30);
            v7 = -v31 / v30;
          }
        }
        goto LABEL_23;
      case 3:
        result = *((double **)this + 123);
        v25 = *v21;
        v26 = *(double *)(v5 + 8LL * v24);
        v9 = v9 + result[v24] * *v21;
        if ( v15 >= *v21 )
        {
          v27 = v7 * v25 + v26;
          if ( v8 <= v27 || v38 <= v27 && COERCE_DOUBLE(*(_QWORD *)&v25 & 0x7FFFFFFFFFFFFFFFLL) <= v17 )
            goto LABEL_23;
          ++v14;
          ++v21;
          v13 = v25;
          v6 = v24;
          *(_QWORD *)&v17 = *(_QWORD *)&v25 & 0x7FFFFFFFFFFFFFFFLL;
          v7 = -v26 / v25;
          if ( (_DWORD *)v23 == v14 )
            goto LABEL_11;
          continue;
        }
        if ( v25 >= a4 )
        {
          v37 = v26 - v18 * v25;
          if ( v8 > v37 && (v38 > v37 || COERCE_DOUBLE(*(_QWORD *)&v25 & 0x7FFFFFFFFFFFFFFFLL) > v39) )
          {
            v10 = *v21;
            v19 = v16 + *v14;
            v18 = v26 / v25;
            *(_QWORD *)&v39 = *(_QWORD *)&v25 & 0x7FFFFFFFFFFFFFFFLL;
          }
        }
LABEL_23:
        ++v14;
        ++v21;
        if ( (_DWORD *)v23 != v14 )
          continue;
        if ( v20 != 1 )
        {
LABEL_25:
          v20 = 1;
          result = *((double **)a3 + 1);
          v12 = *((_DWORD *)a3 + 4);
          v14 = *(_DWORD **)a3;
          v16 = 0;
          goto LABEL_4;
        }
LABEL_12:
        v28 = v7 * v9;
        v29 = v9 * COERCE_DOUBLE(*(_QWORD *)&v18 ^ 0x8000000000000000LL);
        if ( fmax(fabs(v18), COERCE_DOUBLE(*(_QWORD *)&v7 & 0x7FFFFFFFFFFFFFFFLL)) < 0.00000001 && fabs(v13) > fabs(v10) )
        {
          *((_DWORD *)this + 288) = -1;
        }
        else
        {
          *((_DWORD *)this + 288) = -1;
          if ( v19 >= 0 && v29 > v28 )
          {
            *((double *)this + 100) = v18;
            if ( fabs(v29) >= 1.0e30 )
            {
              *((double *)this + 99) = v10;
            }
            else
            {
              *((_DWORD *)this + 288) = v19;
              *((double *)this + 99) = v10;
              v6 = v19;
              v13 = v10;
LABEL_31:
              v33 = *((_QWORD *)this + 126);
              *((_QWORD *)this + 101) = *(_QWORD *)(*((_QWORD *)this + 123) + 8 * v6);
              v34 = *(_QWORD *)(v33 + 8 * v6);
              result = *((double **)this + 150);
              *((_QWORD *)this + 103) = v34;
              v35 = result[v6];
              *((double *)this + 102) = v35;
              *((_QWORD *)this + 104) = *(_QWORD *)(v5 + 8 * v6);
              if ( v13 < 0.0 )
              {
                *((_DWORD *)this + 289) = -1;
                *((double *)this + 103) = v35;
              }
              else
              {
                *((_DWORD *)this + 289) = 1;
                *((double *)this + 101) = v35;
              }
            }
            return result;
          }
        }
        *((double *)this + 100) = -v7;
        if ( fabs(v28) >= 1.0e30 )
        {
          *((double *)this + 99) = v13;
        }
        else
        {
          *((_DWORD *)this + 288) = v6;
          *((double *)this + 99) = v13;
          if ( (int)v6 >= 0 )
            goto LABEL_31;
        }
        return result;
      case 5:
        result = *((double **)this + 126);
        v9 = v9 + result[v24] * *v21;
        goto LABEL_23;
      default:
        result = (double *)(*(_BYTE *)(v22 + v24) & 7);
        goto LABEL_23;
    }
  }
}

