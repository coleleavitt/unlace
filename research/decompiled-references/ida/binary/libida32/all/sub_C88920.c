int *__fastcall sub_C88920(int **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  int *v9; // r12
  unsigned int v10; // eax
  int *result; // rax
  __int64 v12; // rdx
  int *v13; // r15
  int *i; // rdx
  int *v15; // rbx
  int v16; // eax
  int v17; // edx
  int v18; // edx
  unsigned int v19; // ecx
  __int64 v20; // r13
  int v21; // esi
  void *v22; // rax
  void *v23; // r9
  unsigned int v24; // r10d
  void *v25; // rdi
  int v26; // eax
  __int64 v27; // rdx
  int *j; // rdx
  size_t v29; // rdx
  int v30; // r9d
  __int64 v31; // r10
  unsigned int v32; // [rsp+4h] [rbp-44h]
  unsigned int v33; // [rsp+4h] [rbp-44h]
  void *v34; // [rsp+8h] [rbp-40h]

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
  result = (int *)sub_220C370(48LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = &v9[12 * v8];
    for ( i = &result[12 * v12]; i != result; result += 12 )
      *result = -1;
    v15 = v9;
    if ( v13 == v9 )
      return (int *)operator delete();
    while ( 1 )
    {
      v16 = *v15;
      if ( (unsigned int)(*v15 + 2) <= 1 )
        goto LABEL_8;
      v17 = *((_DWORD *)a1 + 4);
      if ( !v17 )
      {
        dword_0 = 0;
        BUG();
      }
      v18 = v17 - 1;
      v19 = v18 & (37 * v16);
      v20 = (__int64)&(*a1)[12 * v19];
      v21 = *(_DWORD *)v20;
      if ( v16 != *(_DWORD *)v20 )
      {
        v30 = 1;
        v31 = 0;
        if ( v21 != -1 )
        {
          while ( 1 )
          {
            if ( !v31 && v21 == -2 )
              v31 = v20;
            v19 = v18 & (v30 + v19);
            v20 = (__int64)&(*a1)[12 * v19];
            v21 = *(_DWORD *)v20;
            if ( v16 == *(_DWORD *)v20 )
              break;
            if ( v21 == -1 )
            {
              if ( v31 )
                v20 = v31;
              break;
            }
            ++v30;
          }
        }
      }
      *(_DWORD *)v20 = v16;
      v22 = (void *)(v20 + 24);
      v23 = v15 + 6;
      *(_QWORD *)(v20 + 16) = 0x500000000LL;
      v24 = v15[4];
      *(_QWORD *)(v20 + 8) = v20 + 24;
      if ( v24 )
      {
        v25 = *((void **)v15 + 1);
        if ( (int *)(v20 + 8) != v15 + 2 )
        {
          if ( v25 != v23 )
          {
            *(_DWORD *)(v20 + 16) = v24;
            v26 = v15[5];
            *(_QWORD *)(v20 + 8) = v25;
            *(_DWORD *)(v20 + 20) = v26;
            *((_QWORD *)v15 + 1) = v23;
            v15[5] = 0;
            v15[4] = 0;
            ++*((_DWORD *)a1 + 2);
            goto LABEL_8;
          }
          v29 = 4LL * v24;
          if ( v24 <= 5uLL
            || (v33 = v24,
                sub_22134E0(v20 + 8, v20 + 24, v24, 4),
                v22 = *(void **)(v20 + 8),
                v25 = *((void **)v15 + 1),
                v24 = v33,
                v29 = 4LL * (unsigned int)v15[4],
                v23 = v15 + 6,
                v29) )
          {
            v34 = v23;
            v32 = v24;
            memcpy(v22, v25, v29);
            v25 = *((void **)v15 + 1);
            v23 = v34;
            v24 = v32;
          }
          *(_DWORD *)(v20 + 16) = v24;
          v15[4] = 0;
        }
      }
      else
      {
        v25 = *((void **)v15 + 1);
      }
      ++*((_DWORD *)a1 + 2);
      if ( v25 == v23 )
      {
LABEL_8:
        v15 += 12;
        if ( v13 == v15 )
          return (int *)operator delete();
      }
      else
      {
        free(v25);
        v15 += 12;
        if ( v13 == v15 )
          return (int *)operator delete();
      }
    }
  }
  v27 = *((unsigned int *)a1 + 4);
  a1[1] = nullptr;
  for ( j = &result[12 * v27]; j != result; result += 12 )
    *result = -1;
  return result;
}

