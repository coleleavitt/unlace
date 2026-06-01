_DWORD *__fastcall sub_14631E0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int v10; // eax
  _DWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r15
  _DWORD *i; // rdx
  __int64 v16; // rbx
  int v17; // eax
  int v18; // edx
  int v19; // edx
  unsigned int v20; // esi
  __int64 v21; // r13
  int v22; // ecx
  int v23; // eax
  void *v24; // r9
  unsigned int v25; // r10d
  void *v26; // rax
  void *v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  _DWORD *j; // rdx
  size_t v31; // rdx
  int v32; // r9d
  __int64 v33; // r10
  unsigned int v34; // [rsp+4h] [rbp-44h]
  unsigned int v35; // [rsp+4h] [rbp-44h]
  void *v36; // [rsp+8h] [rbp-40h]

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
  result = (_DWORD *)sub_22300B0(72LL * v10, 8, 64, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    v13 = 72 * v8;
    v14 = v9 + 72 * v8;
    for ( i = &result[18 * v12]; i != result; result += 18 )
      *result = 0;
    v16 = v9;
    if ( v14 == v9 )
      return (_DWORD *)operator delete(v9, v13, 8);
    while ( 1 )
    {
      v17 = *(_DWORD *)v16;
      if ( (unsigned int)(*(_DWORD *)v16 + 1) <= 1 )
        goto LABEL_8;
      v18 = *((_DWORD *)a1 + 4);
      if ( !v18 )
      {
        dword_0 = *(_DWORD *)v16;
        BUG();
      }
      v19 = v18 - 1;
      v20 = v19 & v17;
      v21 = *a1 + 72LL * (v19 & (unsigned int)v17);
      v22 = *(_DWORD *)v21;
      if ( v17 != *(_DWORD *)v21 )
      {
        v32 = 1;
        v33 = 0;
        if ( v22 )
        {
          while ( 1 )
          {
            if ( !v33 && v22 == -1 )
              v33 = v21;
            v20 = v19 & (v32 + v20);
            v21 = *a1 + 72LL * v20;
            v22 = *(_DWORD *)v21;
            if ( v17 == *(_DWORD *)v21 )
              break;
            if ( !v22 )
            {
              if ( v33 )
                v21 = v33;
              break;
            }
            ++v32;
          }
        }
      }
      v23 = *(_DWORD *)v16;
      v24 = (void *)(v16 + 24);
      *(_QWORD *)(v21 + 16) = 0x600000000LL;
      *(_DWORD *)v21 = v23;
      v25 = *(_DWORD *)(v16 + 16);
      v26 = (void *)(v21 + 24);
      *(_QWORD *)(v21 + 8) = v21 + 24;
      if ( v25 )
      {
        v27 = *(void **)(v16 + 8);
        if ( v21 + 8 != v16 + 8 )
        {
          if ( v27 != v24 )
          {
            *(_DWORD *)(v21 + 16) = v25;
            v28 = *(_DWORD *)(v16 + 20);
            *(_QWORD *)(v21 + 8) = v27;
            *(_DWORD *)(v21 + 20) = v28;
            *(_QWORD *)(v16 + 8) = v24;
            *(_DWORD *)(v16 + 20) = 0;
            *(_DWORD *)(v16 + 16) = 0;
            ++*((_DWORD *)a1 + 2);
            goto LABEL_8;
          }
          v31 = 8LL * v25;
          if ( v25 <= 6uLL
            || (v35 = v25,
                sub_2237220(v21 + 8, v21 + 24, v25, 8),
                v26 = *(void **)(v21 + 8),
                v27 = *(void **)(v16 + 8),
                v25 = v35,
                v31 = 8LL * *(unsigned int *)(v16 + 16),
                v24 = (void *)(v16 + 24),
                v31) )
          {
            v36 = v24;
            v34 = v25;
            memcpy(v26, v27, v31);
            v27 = *(void **)(v16 + 8);
            v24 = v36;
            v25 = v34;
          }
          *(_DWORD *)(v21 + 16) = v25;
          *(_DWORD *)(v16 + 16) = 0;
        }
      }
      else
      {
        v27 = *(void **)(v16 + 8);
      }
      ++*((_DWORD *)a1 + 2);
      if ( v27 == v24 )
      {
LABEL_8:
        v16 += 72;
        if ( v14 == v16 )
          return (_DWORD *)operator delete(v9, v13, 8);
      }
      else
      {
        free(v27);
        v16 += 72;
        if ( v14 == v16 )
          return (_DWORD *)operator delete(v9, v13, 8);
      }
    }
  }
  v29 = *((unsigned int *)a1 + 4);
  a1[1] = 0;
  for ( j = &result[18 * v29]; j != result; result += 18 )
    *result = 0;
  return result;
}
