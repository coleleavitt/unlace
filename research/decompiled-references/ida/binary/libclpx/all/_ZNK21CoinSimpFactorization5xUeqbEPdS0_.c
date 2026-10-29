void __fastcall CoinSimpFactorization::xUeqb(CoinSimpFactorization *this, double *a2, double *a3)
{
  __int64 v3; // r10
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  double v9; // xmm1_8
  double *v10; // rbx
  double v11; // xmm1_8
  __int64 v12; // r8
  int *v13; // rax
  int *v14; // r11
  double *i; // rcx
  __int64 v16; // r8
  double v17; // xmm2_8
  int v18; // eax
  int v19; // r11d
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rbp
  __int64 v23; // r10
  int v24; // eax
  __int64 v25; // rcx
  double v26; // xmm1_8
  double *v27; // r12
  double v28; // xmm1_8
  __int64 v29; // r8
  int *v30; // rax
  int *v31; // rbx
  double *j; // rcx
  __int64 v33; // r8
  double v34; // xmm2_8
  int v35; // eax

  v3 = *((int *)this + 141);
  if ( (int)v3 > 0 )
  {
    v4 = *((_QWORD *)this + 55);
    v5 = *((_QWORD *)this + 51);
    v6 = 1;
    do
    {
      while ( 1 )
      {
        v8 = *(int *)(v4 + 4 * v6 - 4);
        v9 = a2[*(int *)(v5 + 4 * v6 - 4)];
        v10 = &a3[v8];
        if ( v9 != 0.0 )
          break;
        v7 = v6++;
        *v10 = 0.0;
        if ( v7 >= (int)v3 )
          goto LABEL_8;
      }
      v11 = -v9;
      v12 = *(int *)(*((_QWORD *)this + 33) + 4 * v8);
      v13 = (int *)(*((_QWORD *)this + 36) + 4 * v12);
      v14 = &v13[*(int *)(*((_QWORD *)this + 34) + 4 * v8)];
      for ( i = (double *)(*((_QWORD *)this + 35) + 8 * v12); v14 != v13; a2[v16] = a2[v16] - v17 * v11 )
      {
        v16 = *v13;
        v17 = *i;
        ++v13;
        ++i;
      }
      v18 = v6++;
      *v10 = v11;
    }
    while ( v18 < (int)v3 );
  }
LABEL_8:
  v19 = *((_DWORD *)this + 9);
  if ( (int)v3 < v19 )
  {
    v20 = (int)v3 + 1;
    v21 = 4 * (v3 - v20);
    v22 = v21 + *((_QWORD *)this + 55);
    v23 = *((_QWORD *)this + 51) + v21;
    do
    {
      while ( 1 )
      {
        v25 = *(int *)(v22 + 4 * v20);
        v26 = a2[*(int *)(v23 + 4 * v20)];
        v27 = &a3[v25];
        if ( v26 != 0.0 )
          break;
        v24 = v20++;
        *v27 = 0.0;
        if ( v24 >= v19 )
          return;
      }
      v28 = v26 * *(double *)(*((_QWORD *)this + 50) + 8 * v25);
      v29 = *(int *)(*((_QWORD *)this + 33) + 4 * v25);
      v30 = (int *)(*((_QWORD *)this + 36) + 4 * v29);
      v31 = &v30[*(int *)(*((_QWORD *)this + 34) + 4 * v25)];
      for ( j = (double *)(*((_QWORD *)this + 35) + 8 * v29); v31 != v30; a2[v33] = a2[v33] - v34 * v28 )
      {
        v33 = *v30;
        v34 = *j;
        ++v30;
        ++j;
      }
      v35 = v20++;
      *v27 = v28;
    }
    while ( v35 < v19 );
  }
}

