__int64 *__fastcall sub_1ED9120(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 *v8; // r15
  unsigned int v9; // eax
  __int64 *result; // rax
  __int64 v11; // rdx
  __int64 *v12; // r13
  __int64 *i; // rdx
  __int64 *v14; // rbx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rax
  void *v22; // r10
  unsigned int v23; // r11d
  void *v24; // rax
  void *v25; // rsi
  int v26; // eax
  __int64 v27; // rdx
  __int64 *j; // rdx
  size_t v29; // rcx
  int v30; // r10d
  __int64 v31; // r11
  __int64 v32; // [rsp+8h] [rbp-50h]
  unsigned int v33; // [rsp+14h] [rbp-44h]
  unsigned int v34; // [rsp+14h] [rbp-44h]
  void *v35; // [rsp+18h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v7 = *((unsigned int *)a1 + 4);
  v8 = *a1;
  v9 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
        | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
        | ((v6 | (v6 >> 1)) >> 2)
        | v6
        | (v6 >> 1)) >> 16)
      | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
      | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
      | ((v6 | (v6 >> 1)) >> 2)
      | v6
      | (v6 >> 1))
     + 1;
  if ( v9 < 0x40 )
    v9 = 64;
  *((_DWORD *)a1 + 4) = v9;
  result = (__int64 *)sub_22300B0(40LL * v9, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v8 )
  {
    v11 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v32 = 40 * v7;
    v12 = &v8[5 * v7];
    for ( i = &result[5 * v11]; i != result; result += 5 )
      *result = -1;
    v14 = v8;
    if ( v12 == v8 )
      return (__int64 *)operator delete(v8, v32, 8);
    while ( 1 )
    {
      v15 = *v14;
      if ( (unsigned __int64)(*v14 + 2) <= 1 )
        goto LABEL_8;
      v16 = *((_DWORD *)a1 + 4);
      if ( !v16 )
      {
        *(_QWORD *)&dword_0 = *v14;
        BUG();
      }
      v17 = v16 - 1;
      v18 = v17 & (((0xBF58476D1CE4E5B9LL * v15) >> 31) ^ (484763065 * v15));
      v19 = (__int64)&(*a1)[5 * v18];
      v20 = *(_QWORD *)v19;
      if ( v15 != *(_QWORD *)v19 )
      {
        v30 = 1;
        v31 = 0;
        if ( v20 != -1 )
        {
          while ( 1 )
          {
            if ( v20 == -2 && !v31 )
              v31 = v19;
            v18 = v17 & (v30 + v18);
            v19 = (__int64)&(*a1)[5 * v18];
            v20 = *(_QWORD *)v19;
            if ( v15 == *(_QWORD *)v19 )
              break;
            if ( v20 == -1 )
            {
              if ( v31 )
                v19 = v31;
              break;
            }
            ++v30;
          }
        }
      }
      v21 = *v14;
      *(_QWORD *)(v19 + 16) = 0x100000000LL;
      v22 = v14 + 3;
      v23 = *((_DWORD *)v14 + 4);
      *(_QWORD *)v19 = v21;
      v24 = (void *)(v19 + 24);
      *(_QWORD *)(v19 + 8) = v19 + 24;
      if ( v23 )
      {
        v25 = (void *)v14[1];
        if ( (__int64 *)(v19 + 8) != v14 + 1 )
        {
          if ( v25 != v22 )
          {
            *(_DWORD *)(v19 + 16) = v23;
            v26 = *((_DWORD *)v14 + 5);
            *(_QWORD *)(v19 + 8) = v25;
            *(_DWORD *)(v19 + 20) = v26;
            v14[1] = (__int64)v22;
            *((_DWORD *)v14 + 5) = 0;
            *((_DWORD *)v14 + 4) = 0;
            ++*((_DWORD *)a1 + 2);
            goto LABEL_8;
          }
          v29 = 16;
          if ( v23 == 1
            || (v34 = v23,
                sub_2237220(v19 + 8, v19 + 24, v23, 16),
                v24 = *(void **)(v19 + 8),
                v25 = (void *)v14[1],
                v23 = v34,
                v29 = 16LL * *((unsigned int *)v14 + 4),
                v22 = v14 + 3,
                v29) )
          {
            v35 = v22;
            v33 = v23;
            memcpy(v24, v25, v29);
            v25 = (void *)v14[1];
            v22 = v35;
            v23 = v33;
          }
          *(_DWORD *)(v19 + 16) = v23;
          *((_DWORD *)v14 + 4) = 0;
        }
      }
      else
      {
        v25 = (void *)v14[1];
      }
      ++*((_DWORD *)a1 + 2);
      if ( v25 == v22 )
      {
LABEL_8:
        v14 += 5;
        if ( v12 == v14 )
          return (__int64 *)operator delete(v8, v32, 8);
      }
      else
      {
        v14 += 5;
        free(v25);
        if ( v12 == v14 )
          return (__int64 *)operator delete(v8, v32, 8);
      }
    }
  }
  v27 = *((unsigned int *)a1 + 4);
  a1[1] = nullptr;
  for ( j = &result[5 * v27]; j != result; result += 5 )
    *result = -1;
  return result;
}
