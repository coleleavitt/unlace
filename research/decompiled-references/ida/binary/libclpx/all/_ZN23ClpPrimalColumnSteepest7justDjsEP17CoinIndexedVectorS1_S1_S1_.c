__int64 __fastcall ClpPrimalColumnSteepest::justDjs(
        ClpPrimalColumnSteepest *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  __int64 v7; // rax
  double v8; // xmm2_8
  __int64 v9; // r8
  CoinIndexedVector *v10; // rax
  __int64 v11; // r10
  double v12; // xmm6_8
  __int64 v13; // r15
  CoinIndexedVector *v14; // r13
  CoinIndexedVector *v15; // r14
  int v16; // r9d
  __int64 v17; // r11
  __int64 v18; // rsi
  double v19; // xmm3_8
  int v20; // ebp
  __int64 v21; // rax
  double *v22; // rcx
  int v23; // edx
  double v24; // xmm0_8
  __int64 v25; // r12
  double *v26; // rcx
  double v27; // xmm0_8
  __int64 *v28; // rcx
  double *v29; // r12
  bool v30; // r13
  __int64 result; // rax
  double *v32; // rdx
  __int64 v33; // r12
  double *v34; // r12
  bool v35; // zf
  bool v36; // dl
  __int64 v37; // [rsp+0h] [rbp-58h]
  double v38; // [rsp+8h] [rbp-50h]
  CoinIndexedVector *v39; // [rsp+8h] [rbp-50h]
  __int64 v40; // [rsp+10h] [rbp-48h]
  int v41; // [rsp+18h] [rbp-40h]
  int v42; // [rsp+1Ch] [rbp-3Ch]

  v7 = *((_QWORD *)this + 1);
  v41 = *(_DWORD *)(v7 + 1168);
  v37 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL);
  v38 = fmin(0.01, *(double *)(v7 + 768)) + *(double *)(v7 + 872);
  ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v7 + 1264), a3, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 392LL))(
    *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
    *((_QWORD *)this + 1),
    a2,
    a5,
    a4,
    -1.0);
  v8 = v38;
  v9 = *((_QWORD *)this + 1);
  v10 = a4;
  v11 = *(_QWORD *)(v9 + 1184);
  v12 = -v38;
  v13 = 0;
  v14 = a2;
  v15 = v10;
  while ( !v13 )
  {
    v16 = *((_DWORD *)v14 + 4);
    v17 = *(_QWORD *)v14;
    v18 = *((_QWORD *)v14 + 1);
    v20 = *(_DWORD *)(v9 + 108);
    if ( v16 > 0 )
    {
      v19 = 1.01;
      goto LABEL_5;
    }
LABEL_36:
    ++v13;
  }
  v16 = *((_DWORD *)v15 + 4);
  v11 = *(_QWORD *)(v9 + 1192);
  v17 = *(_QWORD *)v15;
  v18 = *((_QWORD *)v15 + 1);
  if ( v16 <= 0 )
    goto LABEL_16;
  v19 = 1.0;
  v20 = 0;
LABEL_5:
  v21 = 0;
  v39 = v14;
  while ( 2 )
  {
    v22 = (double *)(v11 + 8LL * *(int *)(v17 + 4 * v21));
    v23 = v20 + *(_DWORD *)(v17 + 4 * v21);
    v24 = *v22 - *(double *)(v18 + 8 * v21);
    *(_QWORD *)(v18 + 8 * v21) = 0;
    *v22 = v24;
    switch ( *(_BYTE *)(*(_QWORD *)(v9 + 264) + v23) & 7 )
    {
      case 0:
      case 4:
        v25 = 8LL * v23;
        if ( fabs(v24) <= 100.0 * v8 )
          goto LABEL_31;
        v26 = (double *)(v25 + v37);
        v27 = v24 * 10.0 * (v24 * 10.0);
        if ( *(double *)(v25 + v37) != 0.0 )
          goto LABEL_30;
        goto LABEL_9;
      case 1:
        v32 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 8LL * v23);
        if ( *v32 != 0.0 )
          *v32 = 2.225073858507201e-308;
        goto LABEL_23;
      case 2:
        v25 = 8LL * v23;
        if ( v24 <= v8 )
        {
LABEL_31:
          v34 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + v25);
          v35 = *v34 == 0.0;
          goto LABEL_32;
        }
        v26 = (double *)(v25 + v37);
        v27 = v24 * (v24 * v19);
        if ( *(double *)(v25 + v37) != 0.0 )
          goto LABEL_30;
LABEL_9:
        v28 = *((__int64 **)this + 5);
        v29 = (double *)(v28[1] + v25);
        if ( *v29 == 0.0 )
        {
          if ( v27 > 0.0 )
            goto LABEL_11;
          v30 = v27 <= -1.0e-50;
          goto LABEL_12;
        }
        v27 = v27 + *v29;
        if ( v27 > 0.0 )
          goto LABEL_38;
        goto LABEL_45;
      case 3:
        v33 = 8LL * v23;
        if ( v12 <= v24 )
        {
          v34 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + v33);
          v35 = *v34 == 0.0;
LABEL_32:
          if ( !v35 )
            *v34 = 2.225073858507201e-308;
          goto LABEL_23;
        }
        v26 = (double *)(v33 + v37);
        v27 = v24 * (v24 * v19);
        if ( *(double *)(v33 + v37) != 0.0 )
        {
LABEL_30:
          *v26 = v27;
          goto LABEL_23;
        }
        v28 = *((__int64 **)this + 5);
        v29 = (double *)(v28[1] + v33);
        if ( *v29 == 0.0 )
        {
          if ( v27 > 0.0 )
          {
LABEL_11:
            v30 = v27 >= 1.0e-50;
            goto LABEL_12;
          }
          v30 = v27 <= -1.0e-50;
LABEL_12:
          if ( !v30 )
            goto LABEL_23;
          v40 = *v28;
          v42 = *((_DWORD *)v28 + 4);
          *((_DWORD *)v28 + 4) = v42 + 1;
          *(_DWORD *)(v40 + 4LL * v42) = v23;
LABEL_14:
          ++v21;
          *v29 = v27;
          if ( v16 <= (int)v21 )
            goto LABEL_15;
          continue;
        }
        v27 = v27 + *v29;
        if ( v27 > 0.0 )
LABEL_38:
          v36 = v27 >= 1.0e-50;
        else
LABEL_45:
          v36 = v27 <= -1.0e-50;
        if ( v36 )
          goto LABEL_14;
        *v29 = 1.0e-100;
LABEL_23:
        if ( v16 > (int)++v21 )
          continue;
LABEL_15:
        v14 = v39;
LABEL_16:
        if ( (_DWORD)v13 != 1 )
        {
          v11 = *(_QWORD *)(v9 + 1184);
          goto LABEL_36;
        }
        result = (unsigned int)v41;
        *((_DWORD *)v14 + 4) = 0;
        *((_BYTE *)v14 + 28) = 0;
        *((_DWORD *)v15 + 4) = 0;
        *((_BYTE *)v15 + 28) = 0;
        if ( v41 >= 0 )
        {
          result = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 8LL * *(int *)(v9 + 1152);
          if ( *(double *)result != 0.0 )
            *(_QWORD *)result = 0x10000000000000LL;
        }
        return result;
      default:
        goto LABEL_23;
    }
  }
}

