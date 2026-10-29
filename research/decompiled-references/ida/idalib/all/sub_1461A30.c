_DWORD *__fastcall sub_1461A30(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int v10; // eax
  _DWORD *result; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  _DWORD *i; // rdx
  __int64 v15; // rbx
  int v16; // eax
  int v17; // edx
  int v18; // edx
  unsigned int v19; // esi
  __int64 v20; // r13
  int v21; // ecx
  int v22; // eax
  void *v23; // r9
  unsigned int v24; // r10d
  void *v25; // rax
  void *v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  _DWORD *j; // rdx
  size_t v30; // rdx
  int v31; // r9d
  __int64 v32; // r10
  unsigned int v33; // [rsp+4h] [rbp-44h]
  unsigned int v34; // [rsp+4h] [rbp-44h]
  void *v35; // [rsp+8h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = *a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
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
  if ( v10 < 0x40 )
    v10 = 64;
  *((_DWORD *)a1 + 4) = v10;
  result = (_DWORD *)sub_22300B0(152LL * v10, 8, 9LL * v10, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    a1[1] = 0;
    v12 = 152 * v8;
    v13 = v9 + 152 * v8;
    for ( i = &result[38 * *((unsigned int *)a1 + 4)]; i != result; result += 38 )
      *result = 0;
    v15 = v9;
    if ( v13 == v9 )
      return (_DWORD *)operator delete(v9, v12, 8);
    while ( 1 )
    {
      v16 = *(_DWORD *)v15;
      if ( (unsigned int)(*(_DWORD *)v15 + 1) <= 1 )
        goto LABEL_8;
      v17 = *((_DWORD *)a1 + 4);
      if ( !v17 )
      {
        dword_0 = *(_DWORD *)v15;
        BUG();
      }
      v18 = v17 - 1;
      v19 = v18 & v16;
      v20 = *a1 + 152LL * (v18 & (unsigned int)v16);
      v21 = *(_DWORD *)v20;
      if ( v16 != *(_DWORD *)v20 )
      {
        v31 = 1;
        v32 = 0;
        if ( v21 )
        {
          while ( 1 )
          {
            if ( v21 == -1 && !v32 )
              v32 = v20;
            v19 = v18 & (v31 + v19);
            v20 = *a1 + 152LL * v19;
            v21 = *(_DWORD *)v20;
            if ( v16 == *(_DWORD *)v20 )
              break;
            if ( !v21 )
            {
              if ( v32 )
                v20 = v32;
              break;
            }
            ++v31;
          }
        }
      }
      v22 = *(_DWORD *)v15;
      v23 = (void *)(v15 + 24);
      *(_QWORD *)(v20 + 16) = 0x1000000000LL;
      *(_DWORD *)v20 = v22;
      v24 = *(_DWORD *)(v15 + 16);
      v25 = (void *)(v20 + 24);
      *(_QWORD *)(v20 + 8) = v20 + 24;
      if ( v24 )
      {
        v26 = *(void **)(v15 + 8);
        if ( v20 + 8 != v15 + 8 )
        {
          if ( v26 != v23 )
          {
            *(_DWORD *)(v20 + 16) = v24;
            v27 = *(_DWORD *)(v15 + 20);
            *(_QWORD *)(v20 + 8) = v26;
            *(_DWORD *)(v20 + 20) = v27;
            *(_QWORD *)(v15 + 8) = v23;
            *(_DWORD *)(v15 + 20) = 0;
            *(_DWORD *)(v15 + 16) = 0;
            ++*((_DWORD *)a1 + 2);
            goto LABEL_8;
          }
          v30 = 8LL * v24;
          if ( v24 <= 0x10uLL
            || (v34 = v24,
                sub_2237220(v20 + 8, v20 + 24, v24, 8),
                v25 = *(void **)(v20 + 8),
                v26 = *(void **)(v15 + 8),
                v24 = v34,
                v30 = 8LL * *(unsigned int *)(v15 + 16),
                v23 = (void *)(v15 + 24),
                v30) )
          {
            v35 = v23;
            v33 = v24;
            memcpy(v25, v26, v30);
            v26 = *(void **)(v15 + 8);
            v23 = v35;
            v24 = v33;
          }
          *(_DWORD *)(v20 + 16) = v24;
          *(_DWORD *)(v15 + 16) = 0;
        }
      }
      else
      {
        v26 = *(void **)(v15 + 8);
      }
      ++*((_DWORD *)a1 + 2);
      if ( v26 == v23 )
      {
LABEL_8:
        v15 += 152;
        if ( v13 == v15 )
          return (_DWORD *)operator delete(v9, v12, 8);
      }
      else
      {
        free(v26);
        v15 += 152;
        if ( v13 == v15 )
          return (_DWORD *)operator delete(v9, v12, 8);
      }
    }
  }
  v28 = *((unsigned int *)a1 + 4);
  a1[1] = 0;
  for ( j = &result[38 * v28]; j != result; result += 38 )
    *result = 0;
  return result;
}
