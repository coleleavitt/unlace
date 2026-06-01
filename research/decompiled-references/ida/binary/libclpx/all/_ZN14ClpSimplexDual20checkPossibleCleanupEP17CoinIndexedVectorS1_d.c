unsigned __int64 __fastcall ClpSimplexDual::checkPossibleCleanup(
        ClpSimplexDual *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        double a4)
{
  double v4; // xmm7_8
  double v5; // xmm10_8
  unsigned __int64 result; // rax
  double v7; // xmm8_8
  int v8; // r15d
  __int64 v9; // r14
  double v10; // xmm1_8
  __int64 v11; // r13
  __int64 v12; // rbp
  double v13; // xmm4_8
  double v14; // xmm13_8
  double v15; // xmm6_8
  double v16; // xmm12_8
  int v17; // r9d
  __int64 v18; // rbx
  __int64 v19; // r11
  int v20; // r10d
  __int64 v21; // rcx
  int v22; // r8d
  double v23; // xmm2_8
  double v24; // xmm5_8
  double v25; // xmm14_8
  double v26; // xmm15_8
  double v27; // xmm14_8
  __int64 v28; // rdx
  __int64 v29; // xmm0_8
  __int64 v30; // rdx
  __int64 v31; // xmm0_8
  double v32; // xmm14_8
  double v33; // xmm15_8
  double v34; // xmm14_8
  double v35; // [rsp+0h] [rbp-48h]
  int v36; // [rsp+10h] [rbp-38h]

  v4 = 1.001 * *((double *)this + 109);
  v5 = 10.0 * a4;
  result = *((unsigned int *)this + 27);
  v7 = -a4;
  v8 = -1;
  v9 = 0;
  v10 = 1.0e31;
  v11 = *((_QWORD *)this + 147);
  v12 = *((_QWORD *)this + 33);
  v13 = 0.0;
  v35 = 0.0;
  v14 = -v4;
  v15 = 10.0 * a4;
  v16 = 1.0e31;
  v36 = -1;
  while ( !v9 )
  {
    result = (unsigned __int64)a2;
    v17 = *((_DWORD *)a2 + 4);
    v18 = *((_QWORD *)a2 + 1);
    v19 = *(_QWORD *)a2;
    if ( v17 > 0 )
    {
      v20 = *((_DWORD *)this + 27);
      goto LABEL_5;
    }
LABEL_23:
    ++v9;
  }
  v17 = *((_DWORD *)a3 + 4);
  v18 = *((_QWORD *)a3 + 1);
  v19 = *(_QWORD *)a3;
  if ( v17 <= 0 )
  {
LABEL_11:
    if ( (_DWORD)v9 != 1 )
      goto LABEL_23;
    goto LABEL_12;
  }
  v20 = 0;
LABEL_5:
  v21 = 0;
  while ( 2 )
  {
    v22 = v20 + *(_DWORD *)(v19 + 4 * v21);
    result = *(_BYTE *)(v12 + v22) & 7;
    switch ( (char)result )
    {
      case 0:
      case 4:
        if ( fabs(*(double *)(v18 + 8 * v21)) > v15 )
        {
          v13 = *(double *)(v18 + 8 * v21);
          v35 = v13;
          v8 = v20 + *(_DWORD *)(v19 + 4 * v21);
          v36 = v8;
          v15 = fabs(v13);
          v5 = v15;
          v10 = 0.0;
          v16 = 0.0;
        }
        goto LABEL_21;
      case 2:
        v23 = *(double *)(v18 + 8 * v21);
        v24 = *(double *)(v11 + 8LL * v22);
        if ( v23 >= a4 )
        {
          v27 = v23 * v10 + v24;
          if ( v27 <= v14 )
            goto LABEL_21;
          v26 = fabs(v23);
          if ( v27 <= v4 )
          {
LABEL_18:
            if ( v26 > v15 )
              goto LABEL_10;
            goto LABEL_21;
          }
LABEL_10:
          ++v21;
          v35 = v23;
          v8 = v22;
          v15 = v26;
          v10 = -v24 / v23;
          if ( v17 <= (int)v21 )
            goto LABEL_11;
          continue;
        }
        if ( v7 >= v23 )
        {
          v34 = v24 - v16 * v23;
          if ( v34 > v14 )
          {
            v33 = fabs(v23);
            if ( v34 <= v4 )
              goto LABEL_34;
            goto LABEL_35;
          }
        }
LABEL_21:
        if ( v17 > (int)++v21 )
          continue;
        if ( (_DWORD)v9 != 1 )
          goto LABEL_23;
LABEL_12:
        *((_DWORD *)this + 288) = -1;
        if ( v15 <= v5 )
        {
          result = (unsigned int)v36;
          if ( v36 >= 0 )
          {
            *((double *)this + 100) = v16;
            *((_DWORD *)this + 288) = v36;
            *((double *)this + 99) = v13;
            goto LABEL_28;
          }
        }
        else if ( v8 >= 0 )
        {
          *((_DWORD *)this + 288) = v8;
          v36 = v8;
          v13 = v35;
          *((double *)this + 99) = v35;
          *((double *)this + 100) = -v10;
LABEL_28:
          result = v36;
          v28 = *((_QWORD *)this + 126);
          *((_QWORD *)this + 101) = *(_QWORD *)(*((_QWORD *)this + 123) + 8LL * v36);
          v29 = *(_QWORD *)(v28 + 8LL * v36);
          v30 = *((_QWORD *)this + 150);
          *((_QWORD *)this + 103) = v29;
          v31 = *(_QWORD *)(v30 + 8LL * v36);
          *((_QWORD *)this + 102) = v31;
          *((_QWORD *)this + 104) = *(_QWORD *)(v11 + 8LL * v36);
          if ( v13 < 0.0 )
          {
            *((_DWORD *)this + 289) = -1;
            *((_QWORD *)this + 103) = v31;
          }
          else
          {
            *((_QWORD *)this + 101) = v31;
            *((_DWORD *)this + 289) = 1;
          }
        }
        return result;
      case 3:
        goto LABEL_7;
      case 5:
        if ( !v20 )
          goto LABEL_21;
LABEL_7:
        v23 = *(double *)(v18 + 8 * v21);
        v24 = *(double *)(v11 + 8LL * v22);
        if ( v7 >= v23 )
        {
          v25 = v23 * v10 + v24;
          if ( v4 <= v25 )
            goto LABEL_21;
          v26 = fabs(v23);
          if ( v14 <= v25 )
            goto LABEL_18;
          goto LABEL_10;
        }
        if ( v23 >= a4 )
        {
          v32 = v24 - v16 * v23;
          if ( v4 > v32 )
          {
            v33 = fabs(v23);
            if ( v14 <= v32 )
            {
LABEL_34:
              if ( v33 <= v5 )
                goto LABEL_21;
            }
LABEL_35:
            v13 = v23;
            v36 = v20 + *(_DWORD *)(v19 + 4 * v21);
            v5 = v33;
            v16 = v24 / v23;
            goto LABEL_21;
          }
        }
        goto LABEL_21;
      default:
        result = *(_BYTE *)(v12 + v22) & 7;
        goto LABEL_21;
    }
  }
}

