__int64 __fastcall sub_1408080(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  char *v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r15
  char *v10; // r13
  __int64 v11; // rdi
  char *v12; // r13
  char *v14; // rax
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 i; // r13
  __int64 v20; // r13
  __int64 j; // rbx
  __int64 k; // r15
  __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rbx
  unsigned __int64 v28; // [rsp+0h] [rbp-48h]
  unsigned int v29; // [rsp+Ch] [rbp-3Ch]

  if ( a1 == a2 )
    return a1;
  v3 = *(_QWORD *)a2;
  v5 = *(char **)a1;
  v6 = *(unsigned int *)(a1 + 8);
  if ( a2 + 16 == *(_QWORD *)a2 )
  {
    v29 = *(_DWORD *)(a2 + 8);
    v7 = v29;
    if ( v29 <= v6 )
    {
      v14 = *(char **)a1;
      if ( v29 )
      {
        v15 = v3 + 96LL * v29;
        v16 = *(_QWORD *)a1;
        do
        {
          v17 = v3;
          v18 = v16;
          v3 += 96;
          v16 += 96;
          sub_14078B0(v18, v17);
        }
        while ( v3 != v15 );
        v14 = *(char **)a1;
        v6 = *(unsigned int *)(a1 + 8);
        v5 += 96 * v29;
      }
      for ( i = (__int64)&v14[96 * v6]; v5 != (char *)i; sub_13F4560(i) )
        i -= 96;
      v20 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = v29;
      for ( j = v20 + 96LL * *(unsigned int *)(a2 + 8); v20 != j; sub_13F4560(j) )
        j -= 96;
    }
    else
    {
      if ( v29 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        for ( k = (__int64)&v5[96 * v6]; (char *)k != v5; sub_13F4560(k) )
          k -= 96;
        *(_DWORD *)(a1 + 8) = 0;
        sub_1407F20(a1, v29);
        v3 = *(_QWORD *)a2;
        v7 = *(unsigned int *)(a2 + 8);
        v6 = 0;
        v5 = *(char **)a1;
        v8 = *(_QWORD *)a2;
      }
      else
      {
        v8 = *(_QWORD *)a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v9 = 96 * v6;
          v6 = v9;
          v10 = &v5[v9];
          do
          {
            v11 = (__int64)v5;
            v5 += 96;
            v28 = v6;
            sub_14078B0(v11, v3);
            v3 += 96;
            v6 = v28;
          }
          while ( v5 != v10 );
          v3 = *(_QWORD *)a2;
          v7 = *(unsigned int *)(a2 + 8);
          v5 = *(char **)a1;
          v8 = *(_QWORD *)a2 + v9;
        }
      }
      v23 = (__int64)&v5[v6];
      v24 = v3 + 96 * v7;
      if ( v24 != v8 )
      {
        do
        {
          while ( 1 )
          {
            *(_DWORD *)(v23 + 8) = 0;
            *(_QWORD *)v23 = v23 + 16;
            *(_DWORD *)(v23 + 12) = 2;
            if ( *(_DWORD *)(v8 + 8) )
              break;
            v8 += 96;
            v23 += 96;
            if ( v24 == v8 )
              goto LABEL_33;
          }
          v25 = v8;
          v26 = v23;
          v8 += 96;
          v23 += 96;
          sub_14078B0(v26, v25);
        }
        while ( v24 != v8 );
LABEL_33:
        v3 = *(_QWORD *)a2;
      }
      *(_DWORD *)(a1 + 8) = v29;
      v27 = v3 + 96LL * *(unsigned int *)(a2 + 8);
      if ( v27 != v3 )
      {
        do
        {
          v27 -= 96;
          sub_13F4560(v27);
        }
        while ( v27 != v3 );
        *(_DWORD *)(a2 + 8) = 0;
        return a1;
      }
    }
    *(_DWORD *)(a2 + 8) = 0;
    return a1;
  }
  v12 = &v5[96 * v6];
  if ( v5 != v12 )
  {
    do
    {
      v12 -= 96;
      sub_13F4560((__int64)v12);
    }
    while ( v5 != v12 );
    v12 = *(char **)a1;
  }
  if ( v12 != (char *)(a1 + 16) )
    free(v12);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)a2 = a2 + 16;
  *(_QWORD *)(a2 + 8) = 0;
  return a1;
}
