void __fastcall CoinSort_2<double,int>(double *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r8
  double v5; // xmm1_8
  __int64 i; // rax
  int v7; // esi
  unsigned __int64 v8; // r9
  char *v9; // r11
  int v10; // r10d
  char *v11; // rbx
  double v12; // xmm1_8
  double *v13; // rbp
  double v14; // xmm0_8
  int *v15; // rcx
  int v16; // esi
  int *v17; // rax
  int *v18; // rcx
  double v19; // xmm1_8
  int *v20; // rax
  int v21; // esi
  double *v22; // rcx
  char *v23; // rax
  double v24; // xmm1_8
  double v25; // xmm2_8
  double *j; // rsi
  int *v27; // r12
  int v28; // r13d
  int *v29; // r8
  unsigned __int64 v30; // rcx
  int v31; // eax
  double *v32; // rsi
  double v33; // xmm0_8
  double v34; // xmm1_8
  int v35; // r10d
  double *v36; // rax
  double *v37; // rcx
  int v38; // r8d
  int *v39; // rax
  int v40; // esi
  _QWORD v41[32]; // [rsp+0h] [rbp-228h]
  _QWORD v42[37]; // [rsp+100h] [rbp-128h] BYREF

  v3 = a2 - (_QWORD)a1;
  v4 = (a2 - (__int64)a1) >> 3;
  if ( v4 <= 1 )
    return;
  if ( v4 > 0x2710 )
  {
    CoinSort_2<double,int,CoinFirstLess_2<double,int>>(a1, a2, a3, v42);
    return;
  }
  if ( v3 <= 8 )
  {
    v7 = 1;
LABEL_9:
    if ( (_DWORD)v4 == v7 )
      return;
    goto LABEL_10;
  }
  v5 = a1[1];
  if ( v5 >= *a1 )
  {
    for ( i = 2; ; v5 = a1[i - 1] )
    {
      v7 = i;
      if ( (unsigned int)(v4 - 2) + 2LL == i )
        break;
      if ( a1[i++] < v5 )
        goto LABEL_10;
    }
    goto LABEL_9;
  }
LABEL_10:
  v8 = (unsigned __int64)a1 + v3 - 8;
  v41[0] = a1;
  v9 = (char *)a1;
  v10 = 0;
  v42[0] = v8;
  v11 = (char *)v8;
  while ( v11 - v9 > 80 )
  {
    v12 = *(double *)v9;
    v13 = (double *)&v9[8 * ((v11 - v9) >> 4)];
    v14 = *v13;
    if ( *(double *)v9 > *v13 )
    {
      *(double *)v9 = v14;
      v14 = v12;
      *v13 = v12;
      v15 = (int *)(a3 + 4 * ((v9 - (char *)a1) >> 3));
      v16 = *v15;
      v17 = (int *)(a3 + 4 * (v13 - a1));
      *v15 = *v17;
      *v17 = v16;
    }
    if ( v14 > *(double *)v11 )
    {
      *v13 = *(double *)v11;
      *(double *)v11 = v14;
      v18 = (int *)(a3 + 4 * (v13 - a1));
      v19 = *(double *)v9;
      v14 = *v13;
      v20 = (int *)(a3 + 4 * ((v11 - (char *)a1) >> 3));
      v21 = *v18;
      *v18 = *v20;
      *v20 = v21;
      if ( v19 > v14 )
      {
        v38 = *v18;
        *(double *)v9 = v14;
        *v13 = v19;
        v14 = v19;
        v39 = (int *)(a3 + 4 * ((v9 - (char *)a1) >> 3));
        v40 = *v39;
        *v39 = v38;
        *v18 = v40;
      }
    }
    v22 = (double *)v11;
    v23 = v9;
    while ( 1 )
    {
      do
      {
        v23 += 8;
        v24 = *(double *)v23;
      }
      while ( v14 > *(double *)v23 );
      v25 = *(v22 - 1);
      for ( j = v22 - 1; v25 > v14; --j )
      {
        v22 = j;
        v25 = *(j - 1);
      }
      *(double *)v23 = v25;
      *j = v24;
      v27 = (int *)(a3 + 4 * ((v23 - (char *)a1) >> 3));
      v28 = *v27;
      v29 = (int *)(a3 + 4 * (j - a1));
      *v27 = *v29;
      *v29 = v28;
      if ( (char *)j - v23 <= 8 )
        break;
      v22 = j;
    }
    v30 = (unsigned __int64)(v22 - 2);
    v31 = v10 + 1;
    if ( (unsigned __int64)v13 <= v30 )
    {
      v42[v31] = v11;
      v41[v31] = j;
      v42[v10] = v30;
    }
    else
    {
      v41[v31] = v9;
      v42[v31] = v30;
      v41[v10] = j;
    }
    ++v10;
LABEL_12:
    v11 = (char *)v42[v10];
    v9 = (char *)v41[v10];
  }
  if ( --v10 != -1 )
    goto LABEL_12;
  if ( v8 > (unsigned __int64)a1 )
  {
    v32 = a1;
    do
    {
      v33 = *v32;
      v34 = v32[1];
      if ( *v32 > v34 )
      {
        v35 = *(_DWORD *)(a3 + 4 * (v32 - a1) + 4);
        v36 = v32;
        do
        {
          v37 = v36;
          v36[1] = v33;
          --v36;
          *(_DWORD *)(a3 + 4 * (v37 - a1) + 4) = *(_DWORD *)(a3 + 4 * (v37 - a1));
          if ( a1 > v36 )
            break;
          v33 = *v36;
        }
        while ( *v36 > v34 );
        v36[1] = v34;
        *(_DWORD *)(a3 + 4 * (v36 - a1) + 4) = v35;
      }
      ++v32;
    }
    while ( v8 > (unsigned __int64)v32 );
  }
}

