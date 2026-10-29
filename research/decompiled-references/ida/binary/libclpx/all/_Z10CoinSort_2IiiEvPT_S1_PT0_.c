void __fastcall CoinSort_2<int,int>(char *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  int v5; // esi
  __int64 i; // rax
  int v7; // ecx
  unsigned __int64 v8; // r12
  char *v9; // rbx
  int v10; // r11d
  char *v11; // rbp
  char *v12; // r13
  int v13; // eax
  int v14; // r8d
  int *v15; // rcx
  int *v16; // rax
  int v17; // esi
  int *v18; // rcx
  int *v19; // rax
  int v20; // esi
  int v21; // ecx
  char *v22; // rcx
  char *v23; // rax
  int v24; // r9d
  int v25; // r10d
  char *j; // rsi
  int *v27; // r10
  int *v28; // r9
  int v29; // r14d
  unsigned __int64 v30; // rcx
  int v31; // eax
  int *v32; // r10
  char *v33; // rsi
  int v34; // ecx
  int v35; // r8d
  int v36; // r11d
  char *v37; // rax
  char *v38; // rcx
  int *v39; // rcx
  int v40; // esi
  _QWORD v41[32]; // [rsp+0h] [rbp-238h]
  _QWORD v42[39]; // [rsp+100h] [rbp-138h] BYREF

  v3 = a2 - (_QWORD)a1;
  v4 = (a2 - (__int64)a1) >> 2;
  if ( v4 <= 1 )
    return;
  if ( v4 > 0x2710 )
  {
    CoinSort_2<int,int,CoinFirstLess_2<int,int>>(a1, a2, a3, v42);
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
      if ( i == (unsigned int)(v4 - 2) + 2LL )
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
      v15 = (int *)(a3 + v9 - a1);
      v16 = (int *)(a3 + v12 - a1);
      v17 = *v15;
      *v15 = *v16;
      *v16 = v17;
      v14 = *(_DWORD *)v12;
    }
    if ( *(_DWORD *)v11 < v14 )
    {
      *(_DWORD *)v12 = *(_DWORD *)v11;
      *(_DWORD *)v11 = v14;
      v18 = (int *)(a3 + v11 - a1);
      v19 = (int *)(a3 + v12 - a1);
      v20 = *v19;
      *v19 = *v18;
      *v18 = v20;
      v21 = *(_DWORD *)v9;
      v14 = *(_DWORD *)v12;
      if ( *(_DWORD *)v9 > *(_DWORD *)v12 )
      {
        *(_DWORD *)v9 = v14;
        *(_DWORD *)v12 = v21;
        v39 = (int *)(a3 + v9 - a1);
        v40 = *v39;
        *v39 = *v19;
        *v19 = v40;
        v14 = *(_DWORD *)v12;
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
      while ( v14 > *(_DWORD *)v23 );
      v25 = *((_DWORD *)v22 - 1);
      for ( j = v22 - 4; v14 < v25; j -= 4 )
      {
        v22 = j;
        v25 = *((_DWORD *)j - 1);
      }
      *(_DWORD *)v23 = v25;
      *(_DWORD *)j = v24;
      v27 = (int *)(a3 + v23 - a1);
      v28 = (int *)(a3 + j - a1);
      v29 = *v27;
      *v27 = *v28;
      *v28 = v29;
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
    v32 = (int *)(a3 + 4);
    v33 = a1;
    do
    {
      v34 = *(_DWORD *)v33;
      v35 = *((_DWORD *)v33 + 1);
      if ( v35 < *(_DWORD *)v33 )
      {
        v36 = *v32;
        v37 = v33;
        do
        {
          *((_DWORD *)v37 + 1) = v34;
          v38 = v37;
          v37 -= 4;
          *(_DWORD *)(a3 + v38 - a1 + 4) = *(_DWORD *)(a3 + v38 - a1);
          if ( a1 > v37 )
            break;
          v34 = *(_DWORD *)v37;
        }
        while ( *(_DWORD *)v37 > v35 );
        *((_DWORD *)v37 + 1) = v35;
        *(_DWORD *)(a3 + v37 - a1 + 4) = v36;
      }
      v33 += 4;
      ++v32;
    }
    while ( v8 > (unsigned __int64)v33 );
  }
}

