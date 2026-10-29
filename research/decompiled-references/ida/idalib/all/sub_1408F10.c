__int64 __fastcall sub_1408F10(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  char *v6; // rbp
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  char *v9; // rbp
  __int64 v10; // r15
  char v11; // al
  int v12; // eax
  char *v13; // r14
  char *v15; // rax
  char *i; // rbx
  __int64 v17; // rbp
  __int64 j; // rbx
  char *k; // rbx
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rbp
  __int64 v29; // rbx
  __int64 v30; // r14
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned int v34; // [rsp+4h] [rbp-44h]
  __int64 v35; // [rsp+8h] [rbp-40h]
  unsigned __int64 v36; // [rsp+8h] [rbp-40h]

  if ( (__int64 *)a1 == a2 )
    return a1;
  v3 = *a2;
  v4 = (__int64)(a2 + 2);
  v6 = *(char **)a1;
  v7 = *(unsigned int *)(a1 + 8);
  if ( a2 + 2 == (__int64 *)*a2 )
  {
    v34 = *((_DWORD *)a2 + 2);
    v8 = v34;
    if ( v34 <= v7 )
    {
      v15 = *(char **)a1;
      if ( v34 )
      {
        v21 = (__int64)(a2 + 3);
        v35 = 14LL * v34;
        v22 = (__int64)(v6 + 8);
        v23 = (__int64)&a2[v35 + 3];
        do
        {
          v24 = *(_DWORD *)(v21 - 8);
          v25 = v21;
          v26 = v22;
          v21 += 112;
          v22 += 112;
          *(_DWORD *)(v22 - 120) = v24;
          sub_14078B0(v26, v25);
          *(_BYTE *)(v22 - 16) = *(_BYTE *)(v21 - 16);
        }
        while ( v23 != v21 );
        v6 += v35 * 8;
        v15 = *(char **)a1;
        v7 = *(unsigned int *)(a1 + 8);
      }
      for ( i = &v15[112 * v7]; v6 != i; sub_13F4560((__int64)(i + 8)) )
        i -= 112;
      v17 = *a2;
      *(_DWORD *)(a1 + 8) = v34;
      for ( j = v17 + 112LL * *((unsigned int *)a2 + 2); v17 != j; sub_13F4560(j + 8) )
        j -= 112;
    }
    else
    {
      if ( v34 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        for ( k = &v6[112 * v7]; v6 != k; sub_13F4560((__int64)(k + 8)) )
          k -= 112;
        *(_DWORD *)(a1 + 8) = 0;
        sub_1408BF0(a1, v34);
        v3 = *a2;
        v8 = *((unsigned int *)a2 + 2);
        v7 = 0;
        v6 = *(char **)a1;
        v4 = *a2;
      }
      else if ( *(_DWORD *)(a1 + 8) )
      {
        v27 = (__int64)(a2 + 3);
        v28 = (__int64)(v6 + 8);
        v29 = 112 * v7;
        v7 = v29;
        v30 = (__int64)&a2[(unsigned __int64)v29 / 8 + 3];
        do
        {
          v31 = *(_DWORD *)(v27 - 8);
          v32 = v27;
          v33 = v28;
          v36 = v7;
          v27 += 112;
          v28 += 112;
          *(_DWORD *)(v28 - 120) = v31;
          sub_14078B0(v33, v32);
          v7 = v36;
          *(_BYTE *)(v28 - 16) = *(_BYTE *)(v27 - 16);
        }
        while ( v27 != v30 );
        v3 = *a2;
        v8 = *((unsigned int *)a2 + 2);
        v6 = *(char **)a1;
        v4 = *a2 + v29;
      }
      v9 = &v6[v7];
      v10 = v3 + 112 * v8;
      if ( v10 != v4 )
      {
        do
        {
          v12 = *(_DWORD *)v4;
          *((_DWORD *)v9 + 4) = 0;
          *((_DWORD *)v9 + 5) = 2;
          *(_DWORD *)v9 = v12;
          *((_QWORD *)v9 + 1) = v9 + 24;
          if ( *(_DWORD *)(v4 + 16) )
            sub_14078B0((__int64)(v9 + 8), v4 + 8);
          v11 = *(_BYTE *)(v4 + 104);
          v4 += 112;
          v9 += 112;
          *(v9 - 8) = v11;
        }
        while ( v10 != v4 );
        v3 = *a2;
      }
      *(_DWORD *)(a1 + 8) = v34;
      v20 = v3 + 112LL * *((unsigned int *)a2 + 2);
      if ( v20 != v3 )
      {
        do
        {
          v20 -= 112;
          sub_13F4560(v20 + 8);
        }
        while ( v20 != v3 );
        *((_DWORD *)a2 + 2) = 0;
        return a1;
      }
    }
    *((_DWORD *)a2 + 2) = 0;
    return a1;
  }
  v13 = &v6[112 * v7];
  if ( v6 != v13 )
  {
    do
    {
      v13 -= 112;
      sub_13F4560((__int64)(v13 + 8));
    }
    while ( v6 != v13 );
    v13 = *(char **)a1;
  }
  if ( v13 != (char *)(a1 + 16) )
    free(v13);
  *(_QWORD *)a1 = *a2;
  *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 3);
  *a2 = v4;
  a2[1] = 0;
  return a1;
}
