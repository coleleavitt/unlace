int *__fastcall sub_CAC660(int **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  int *v9; // r12
  unsigned int v10; // eax
  int *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  int *v14; // r15
  int *i; // rdx
  int *v16; // rbx
  int v17; // eax
  int v18; // edx
  int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // r13
  int v22; // esi
  void *v23; // rax
  void *v24; // r9
  unsigned int v25; // r10d
  void *v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  int *j; // rdx
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
  result = (int *)sub_22300B0(48LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = 48 * v8;
    v14 = &v9[12 * v8];
    for ( i = &result[12 * v12]; i != result; result += 12 )
      *result = -1;
    v16 = v9;
    if ( v14 == v9 )
      return (int *)operator delete(v9, v13, 8);
    while ( 1 )
    {
      v17 = *v16;
      if ( (unsigned int)(*v16 + 2) <= 1 )
        goto LABEL_8;
      v18 = *((_DWORD *)a1 + 4);
      if ( !v18 )
      {
        dword_0 = 0;
        BUG();
      }
      v19 = v18 - 1;
      v20 = v19 & (37 * v17);
      v21 = (__int64)&(*a1)[12 * v20];
      v22 = *(_DWORD *)v21;
      if ( v17 != *(_DWORD *)v21 )
      {
        v31 = 1;
        v32 = 0;
        if ( v22 != -1 )
        {
          while ( 1 )
          {
            if ( !v32 && v22 == -2 )
              v32 = v21;
            v20 = v19 & (v31 + v20);
            v21 = (__int64)&(*a1)[12 * v20];
            v22 = *(_DWORD *)v21;
            if ( v17 == *(_DWORD *)v21 )
              break;
            if ( v22 == -1 )
            {
              if ( v32 )
                v21 = v32;
              break;
            }
            ++v31;
          }
        }
      }
      *(_DWORD *)v21 = v17;
      v23 = (void *)(v21 + 24);
      v24 = v16 + 6;
      *(_QWORD *)(v21 + 16) = 0x500000000LL;
      v25 = v16[4];
      *(_QWORD *)(v21 + 8) = v21 + 24;
      if ( v25 )
      {
        v26 = *((void **)v16 + 1);
        if ( (int *)(v21 + 8) != v16 + 2 )
        {
          if ( v26 != v24 )
          {
            *(_DWORD *)(v21 + 16) = v25;
            v27 = v16[5];
            *(_QWORD *)(v21 + 8) = v26;
            *(_DWORD *)(v21 + 20) = v27;
            *((_QWORD *)v16 + 1) = v24;
            v16[5] = 0;
            v16[4] = 0;
            ++*((_DWORD *)a1 + 2);
            goto LABEL_8;
          }
          v30 = 4LL * v25;
          if ( v25 <= 5uLL
            || (v34 = v25,
                sub_2237220(v21 + 8, v21 + 24, v25, 4),
                v23 = *(void **)(v21 + 8),
                v26 = *((void **)v16 + 1),
                v25 = v34,
                v30 = 4LL * (unsigned int)v16[4],
                v24 = v16 + 6,
                v30) )
          {
            v35 = v24;
            v33 = v25;
            memcpy(v23, v26, v30);
            v26 = *((void **)v16 + 1);
            v24 = v35;
            v25 = v33;
          }
          *(_DWORD *)(v21 + 16) = v25;
          v16[4] = 0;
        }
      }
      else
      {
        v26 = *((void **)v16 + 1);
      }
      ++*((_DWORD *)a1 + 2);
      if ( v26 == v24 )
      {
LABEL_8:
        v16 += 12;
        if ( v14 == v16 )
          return (int *)operator delete(v9, v13, 8);
      }
      else
      {
        free(v26);
        v16 += 12;
        if ( v14 == v16 )
          return (int *)operator delete(v9, v13, 8);
      }
    }
  }
  v28 = *((unsigned int *)a1 + 4);
  a1[1] = nullptr;
  for ( j = &result[12 * v28]; j != result; result += 12 )
    *result = -1;
  return result;
}
