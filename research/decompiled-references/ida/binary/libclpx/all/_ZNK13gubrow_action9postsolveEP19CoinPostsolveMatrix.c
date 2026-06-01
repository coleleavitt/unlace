__int64 __fastcall gubrow_action::postsolve(gubrow_action *this, CoinPostsolveMatrix *a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  double v11; // xmm4_8
  __int64 v12; // rsi
  double v13; // xmm3_8
  __int64 v14; // r11
  int *v15; // rax
  int v16; // r9d
  double v17; // xmm0_8
  __int64 v18; // r10
  int *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _DWORD *v22; // r8
  double v23; // xmm0_8
  double v24; // xmm1_8
  double *v25; // r10
  int *v26; // [rsp+0h] [rbp-98h]
  double *v27; // [rsp+8h] [rbp-90h]
  __int64 v28; // [rsp+18h] [rbp-80h]
  int v29; // [rsp+24h] [rbp-74h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  __int64 v33; // [rsp+48h] [rbp-50h]
  int *v34; // [rsp+50h] [rbp-48h]
  unsigned __int64 i; // [rsp+58h] [rbp-40h]
  unsigned __int64 v36; // [rsp+60h] [rbp-38h]

  v2 = *((_QWORD *)a2 + 5);
  v3 = *((_QWORD *)a2 + 6);
  v4 = *((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 8);
  v31 = *((_QWORD *)a2 + 13);
  v6 = *((_QWORD *)a2 + 33);
  v36 = *((_QWORD *)this + 3);
  v32 = *((_QWORD *)a2 + 14);
  v33 = *((_QWORD *)a2 + 22);
  v28 = *((_QWORD *)a2 + 21);
  result = v36 + 40LL * *((int *)this + 4) - 40;
  for ( i = result; v36 <= i; result = i )
  {
    v9 = *(_QWORD *)(i + 8);
    v10 = *(int *)(i + 32);
    v11 = *(double *)(*(_QWORD *)(i + 16) + 8 * v10);
    v34 = *(int **)(i + 24);
    v29 = *(_DWORD *)(i + 36);
    v12 = *(int *)(v9 + 4 * v10);
    if ( (int)v10 > 0 )
    {
      v13 = *(double *)i / v11;
      v26 = *(int **)(i + 8);
      v27 = *(double **)(i + 16);
      v30 = v9 + 4LL * (unsigned int)(v10 - 1) + 4;
      v14 = *(_QWORD *)(i + 24) + 4LL * (unsigned int)(*(_DWORD *)(i + 36) - 1) + 4;
      v15 = v26;
      do
      {
        v16 = *v15;
        v17 = *v27;
        v18 = 8LL * *v15;
        *(double *)(v28 + 8 * v12) = *(double *)(v28 + 8 * v12) - *(double *)(v28 + v18) * *v27 / v11;
        if ( v29 > 0 )
        {
          v19 = v34;
          do
          {
            v20 = *((int *)a2 + 64);
            v21 = *v19++;
            v22 = (_DWORD *)(v6 + 4 * v20);
            v21 *= 4;
            *((_DWORD *)a2 + 64) = *v22;
            *v22 = *(_DWORD *)(v2 + v21);
            *(_DWORD *)(v2 + v21) = v20;
            *(double *)(v5 + 8 * v20) = v17;
            *(_DWORD *)(v4 + 4 * v20) = v16;
            ++*(_DWORD *)(v3 + v21);
          }
          while ( v19 != (int *)v14 );
          v18 = 8LL * v16;
        }
        v23 = v17 * v13;
        *(double *)(v18 + v33) = *(double *)(v18 + v33) + v23;
        v24 = *(double *)(v18 + v31);
        if ( v24 > -1.0e20 )
          *(double *)(v18 + v31) = v24 + v23;
        v25 = (double *)(v32 + v18);
        if ( *v25 < 1.0e20 )
          *v25 = v23 + *v25;
        ++v26;
        ++v27;
        v15 = v26;
      }
      while ( (int *)v30 != v26 );
    }
    i -= 40LL;
  }
  return result;
}

