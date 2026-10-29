void __fastcall CoinSort_2<int,double>(char *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  int v5; // esi
  __int64 i; // rax
  int v7; // ecx
  unsigned __int64 v8; // r11
  char *v9; // rbp
  int v10; // ebx
  char *v11; // r12
  char *v12; // r13
  int v13; // eax
  int v14; // r8d
  __int64 *v15; // rsi
  __int64 v16; // xmm0_8
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // xmm0_8
  __int64 *v20; // rax
  int v21; // eax
  char *v22; // rcx
  char *v23; // rax
  int v24; // r9d
  int v25; // r10d
  char *j; // rsi
  __int64 *v27; // r10
  __int64 v28; // xmm0_8
  __int64 *v29; // r9
  unsigned __int64 v30; // rcx
  int v31; // eax
  char *v32; // rsi
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // xmm1_8
  char *v36; // rax
  char *v37; // rcx
  __int64 v38; // xmm1_8
  __int64 *v39; // rsi
  __int64 v40; // xmm0_8
  _QWORD v41[32]; // [rsp+0h] [rbp-228h]
  _QWORD v42[37]; // [rsp+100h] [rbp-128h] BYREF

  v3 = a2 - (_QWORD)a1;
  v4 = (a2 - (__int64)a1) >> 2;
  if ( v4 <= 1 )
    return;
  if ( v4 > 0x2710 )
  {
    CoinSort_2<int,double,CoinFirstLess_2<int,double>>(a1, a2, a3, v42);
    return;
  }
  if ( v3 <= 4 )
  {
    v7 = 1;
LABEL_9:
    if ( (_DWORD)v4 == v7 )
      return;
    goto LABEL_10;
  }
  v5 = *((_DWORD *)a1 + 1);
  if ( *(_DWORD *)a1 <= v5 )
  {
    for ( i = 2; ; v5 = *(_DWORD *)&a1[4 * i - 4] )
    {
      v7 = i;
      if ( (unsigned int)(v4 - 2) + 2LL == i )
        break;
      ++i;
      if ( *(_DWORD *)&a1[4 * i - 4] < v5 )
        goto LABEL_10;
    }
    goto LABEL_9;
  }
LABEL_10:
  v8 = (unsigned __int64)&a1[v3 - 4];
  v41[0] = a1;
  v9 = a1;
  v10 = 0;
  v42[0] = v8;
  v11 = (char *)v8;
  while ( v11 - v9 > 40 )
  {
    v12 = &v9[4 * ((v11 - v9) >> 3)];
    v13 = *(_DWORD *)v9;
    v14 = *(_DWORD *)v12;
    if ( *(_DWORD *)v9 > *(_DWORD *)v12 )
    {
      *(_DWORD *)v9 = v14;
      *(_DWORD *)v12 = v13;
      v14 = v13;
      v15 = (__int64 *)(a3 + 8 * ((v9 - a1) >> 2));
      v16 = *v15;
      v17 = (__int64 *)(a3 + 8 * ((v12 - a1) >> 2));
      *v15 = *v17;
      *v17 = v16;
    }
    if ( *(_DWORD *)v11 < v14 )
    {
      *(_DWORD *)v12 = *(_DWORD *)v11;
      *(_DWORD *)v11 = v14;
      v14 = *(_DWORD *)v12;
      v18 = (__int64 *)(a3 + 8 * ((v12 - a1) >> 2));
      v19 = *v18;
      v20 = (__int64 *)(a3 + 8 * ((v11 - a1) >> 2));
      *v18 = *v20;
      *v20 = v19;
      v21 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 > v14 )
      {
        v38 = *v18;
        *(_DWORD *)v9 = v14;
        *(_DWORD *)v12 = v21;
        v14 = v21;
        v39 = (__int64 *)(a3 + 8 * ((v9 - a1) >> 2));
        v40 = *v39;
        *v39 = v38;
        *v18 = v40;
      }
    }
    v22 = v11;
    v23 = v9;
    while ( 1 )
    {
      do
      {
        v23 += 4;
        v24 = *(_DWORD *)v23;
      }
      while ( *(_DWORD *)v23 < v14 );
      v25 = *((_DWORD *)v22 - 1);
      for ( j = v22 - 4; v25 > v14; j -= 4 )
      {
        v22 = j;
        v25 = *((_DWORD *)j - 1);
      }
      *(_DWORD *)v23 = v25;
      *(_DWORD *)j = v24;
      v27 = (__int64 *)(a3 + 8 * ((v23 - a1) >> 2));
      v28 = *v27;
      v29 = (__int64 *)(a3 + 8 * ((j - a1) >> 2));
      *v27 = *v29;
      *v29 = v28;
      if ( j - v23 <= 4 )
        break;
      v22 = j;
    }
    v30 = (unsigned __int64)(v22 - 8);
    v31 = v10 + 1;
    if ( (unsigned __int64)v12 <= v30 )
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
      v33 = *(_DWORD *)v32;
      v34 = *((_DWORD *)v32 + 1);
      if ( v34 < *(_DWORD *)v32 )
      {
        v35 = *(_QWORD *)(a3 + 8 * ((v32 - a1) >> 2) + 8);
        v36 = v32;
        do
        {
          *((_DWORD *)v36 + 1) = v33;
          v37 = v36;
          v36 -= 4;
          *(_QWORD *)(a3 + 8 * ((v37 - a1) >> 2) + 8) = *(_QWORD *)(a3 + 8 * ((v37 - a1) >> 2));
          if ( a1 > v36 )
            break;
          v33 = *(_DWORD *)v36;
        }
        while ( *(_DWORD *)v36 > v34 );
        *((_DWORD *)v36 + 1) = v34;
        *(_QWORD *)(a3 + 8 * ((v36 - a1) >> 2) + 8) = v35;
      }
      v32 += 4;
    }
    while ( v8 > (unsigned __int64)v32 );
  }
}

