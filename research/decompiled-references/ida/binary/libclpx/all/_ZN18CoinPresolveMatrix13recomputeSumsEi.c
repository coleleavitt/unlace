__int64 __fastcall CoinPresolveMatrix::recomputeSums(CoinPresolveMatrix *this, int a2)
{
  int v2; // eax
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r10
  double *v6; // rbx
  double *v7; // r11
  double *v8; // r9
  double *v9; // r10
  int *v10; // rcx
  int *v11; // r8
  int *v12; // r12
  double v13; // xmm0_8
  int v14; // eax
  double v15; // xmm1_8
  double v16; // xmm0_8
  __int64 v17; // rdx
  int v18; // eax
  int v19; // ebp
  int v20; // r13d
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // r15
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 v26; // rdx
  double v27; // xmm0_8
  __int64 v28; // rax
  double *v29; // rsi
  double *v30; // rax
  double v31; // xmm0_8
  double v32; // xmm13_8
  double v33; // xmm4_8
  double v34; // xmm5_8
  double v35; // xmm1_8
  int *v37; // [rsp+0h] [rbp-80h]
  __int64 v38; // [rsp+8h] [rbp-78h]
  unsigned int v39; // [rsp+14h] [rbp-6Ch]
  int *v40; // [rsp+18h] [rbp-68h]
  __int64 v41; // [rsp+30h] [rbp-50h]
  __int64 v42; // [rsp+38h] [rbp-48h]
  __int64 v43; // [rsp+40h] [rbp-40h]
  __int64 v44; // [rsp+48h] [rbp-38h]

  v41 = *((_QWORD *)this + 11);
  v42 = *((_QWORD *)this + 12);
  v43 = *((_QWORD *)this + 37);
  v44 = *((_QWORD *)this + 38);
  v2 = 0;
  if ( a2 < 0 )
    a2 = *((_DWORD *)this + 1);
  else
    v2 = a2;
  if ( a2 > v2 )
  {
    v3 = *((_QWORD *)this + 61);
    v4 = 4LL * v2;
    v5 = 8LL * v2;
    v6 = (double *)(v5 + *((_QWORD *)this + 62));
    v7 = (double *)(v5 + *((_QWORD *)this + 64));
    v8 = (double *)(v5 + *((_QWORD *)this + 13));
    v9 = (double *)(*((_QWORD *)this + 14) + v5);
    v10 = (int *)(v3 + v4);
    v11 = (int *)(v4 + *((_QWORD *)this + 63));
    v37 = (int *)(*((_QWORD *)this + 35) + v4);
    v12 = (int *)(v4 + *((_QWORD *)this + 36));
    v38 = v3 + 4 * ((unsigned int)(a2 + ~v2) + (__int64)v2) + 4;
    v39 = 0;
    while ( 1 )
    {
      *v10 = 0;
      *v6 = 0.0;
      *v11 = 0;
      *v7 = 0.0;
      v13 = *v8;
      v14 = *v12;
      if ( *v8 <= -1.0e20 && *v9 >= 1.0e20 )
      {
        if ( v14 > 0 )
        {
LABEL_8:
          *v10 = *(_DWORD *)this + 1;
          *v11 = *(_DWORD *)this + 1;
          goto LABEL_9;
        }
LABEL_12:
        if ( v13 <= 0.0 )
        {
          v16 = *v9;
          if ( *v9 >= 0.0 )
            goto LABEL_9;
          v15 = *((double *)this + 42) * 10.0;
LABEL_15:
          ++v39;
        }
        else
        {
          v15 = *((double *)this + 42) * 10.0;
          if ( v15 <= v13 )
          {
            v16 = *v9;
            goto LABEL_15;
          }
          *v8 = 0.0;
          v16 = *v9;
        }
        if ( v16 < 0.0 && v16 > -v15 )
        {
          *v9 = 0.0;
          goto LABEL_9;
        }
        goto LABEL_39;
      }
      if ( v14 <= 0 )
        goto LABEL_12;
      v17 = *v37;
      v18 = v17 + v14;
      if ( (int)v17 >= v18 )
      {
        v32 = 0.0;
        v19 = 0;
        v31 = 0.0;
        v20 = 0;
        v21 = 0.0;
        v22 = 0.0;
        goto LABEL_33;
      }
      v40 = v11;
      v19 = 0;
      v20 = 0;
      v21 = 0.0;
      v22 = 0.0;
      v23 = v44 + 4 * v17;
      v24 = (unsigned int)(~(_DWORD)v17 + v18) + 1LL;
      v25 = v43 + 8 * v17;
      v26 = 0;
      do
      {
        while ( 1 )
        {
          v27 = *(double *)(v25 + 8 * v26);
          v28 = 8LL * *(int *)(v23 + 4 * v26);
          v29 = (double *)(v41 + v28);
          v30 = (double *)(v42 + v28);
          if ( v27 > 0.0 )
          {
            if ( *v30 >= 1.0e20 )
              ++v20;
            else
              v22 = v22 + *v30 * v27;
            if ( *v29 <= -1.0e20 )
              ++v19;
            else
              v21 = v21 + v27 * *v29;
            goto LABEL_25;
          }
          if ( v27 < 0.0 )
            break;
LABEL_25:
          if ( v24 == ++v26 )
            goto LABEL_32;
        }
        if ( *v30 >= 1.0e20 )
          ++v19;
        else
          v21 = v21 + *v30 * v27;
        if ( *v29 <= -1.0e20 )
        {
          ++v20;
          goto LABEL_25;
        }
        ++v26;
        v22 = v22 + v27 * *v29;
      }
      while ( v24 != v26 );
LABEL_32:
      v11 = v40;
      v31 = (double)v20 * 1.0e20 + v22;
      v32 = v21 - (double)v19 * 1.0e20;
LABEL_33:
      *v10 = v20;
      *v6 = v22;
      *v11 = v19;
      *v7 = v21;
      v33 = *((double *)this + 42);
      v34 = *v9 + v33;
      v35 = *v8 - v33;
      if ( v34 >= v31 && v32 >= v35 )
        goto LABEL_8;
      if ( v35 <= v31 )
      {
        v39 += v32 > v34;
        goto LABEL_9;
      }
LABEL_39:
      ++v39;
LABEL_9:
      ++v10;
      ++v6;
      ++v11;
      ++v7;
      ++v8;
      ++v9;
      ++v37;
      ++v12;
      if ( v10 == (int *)v38 )
        return v39;
    }
  }
  return 0;
}

