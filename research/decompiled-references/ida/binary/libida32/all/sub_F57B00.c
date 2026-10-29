__int64 *__fastcall sub_F57B00(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // rbx
  __int64 *i; // rdx
  __int64 *v15; // r13
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rdi
  unsigned int v22; // r10d
  void *v23; // r9
  void *v24; // rax
  void *v25; // rdi
  int v26; // eax
  size_t v27; // rdx
  __int64 v28; // rdx
  __int64 *j; // rdx
  int v30; // r9d
  __int64 v31; // r10
  unsigned int v32; // [rsp+14h] [rbp-44h]
  unsigned int v33; // [rsp+14h] [rbp-44h]
  void *v34; // [rsp+18h] [rbp-40h]

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
  result = (__int64 *)sub_220C370(280LL * v10, 8, a3, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = &v9[35 * v8];
    for ( i = &result[35 * v12]; i != result; result += 35 )
      *result = -4096;
    v15 = v9;
    if ( v13 != v9 )
    {
      while ( 1 )
      {
        v16 = *v15;
        if ( *v15 == -8192 || v16 == -4096 )
          goto LABEL_15;
        v17 = *((_DWORD *)a1 + 4);
        if ( !v17 )
        {
          *(_QWORD *)&dword_0 = *v15;
          BUG();
        }
        v18 = v17 - 1;
        v19 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v20 = (__int64)&(*a1)[35 * v19];
        v21 = *(_QWORD *)v20;
        if ( v16 != *(_QWORD *)v20 )
        {
          v30 = 1;
          v31 = 0;
          if ( v21 != -4096 )
          {
            while ( 1 )
            {
              if ( v21 == -8192 && !v31 )
                v31 = v20;
              v19 = v18 & (v30 + v19);
              v20 = (__int64)&(*a1)[35 * v19];
              v21 = *(_QWORD *)v20;
              if ( v16 == *(_QWORD *)v20 )
                break;
              if ( v21 == -4096 )
              {
                if ( v31 )
                  v20 = v31;
                break;
              }
              ++v30;
            }
          }
        }
        *(_QWORD *)(v20 + 16) = 0x1000000000LL;
        v22 = *((_DWORD *)v15 + 4);
        v23 = v15 + 3;
        *(_QWORD *)v20 = v16;
        v24 = (void *)(v20 + 24);
        *(_QWORD *)(v20 + 8) = v20 + 24;
        if ( !v22 )
          break;
        v25 = (void *)v15[1];
        if ( (__int64 *)(v20 + 8) == v15 + 1 )
          goto LABEL_13;
        if ( v25 == v23 )
        {
          v27 = 16LL * v22;
          if ( v22 <= 0x10uLL
            || (v33 = v22,
                sub_22134E0(v20 + 8, v20 + 24, v22, 16),
                v24 = *(void **)(v20 + 8),
                v25 = (void *)v15[1],
                v22 = v33,
                v27 = 16LL * *((unsigned int *)v15 + 4),
                v23 = v15 + 3,
                v27) )
          {
            v34 = v23;
            v32 = v22;
            memcpy(v24, v25, v27);
            v25 = (void *)v15[1];
            v23 = v34;
            v22 = v32;
          }
          *(_DWORD *)(v20 + 16) = v22;
          *((_DWORD *)v15 + 4) = 0;
          goto LABEL_13;
        }
        *(_DWORD *)(v20 + 16) = v22;
        v26 = *((_DWORD *)v15 + 5);
        *(_QWORD *)(v20 + 8) = v25;
        *(_DWORD *)(v20 + 20) = v26;
        v15[1] = (__int64)v23;
        *((_DWORD *)v15 + 5) = 0;
        *((_DWORD *)v15 + 4) = 0;
        ++*((_DWORD *)a1 + 2);
LABEL_15:
        v15 += 35;
        if ( v13 == v15 )
          return (__int64 *)operator delete();
      }
      v25 = (void *)v15[1];
LABEL_13:
      ++*((_DWORD *)a1 + 2);
      if ( v25 != v23 )
        free(v25);
      goto LABEL_15;
    }
    return (__int64 *)operator delete();
  }
  else
  {
    v28 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[35 * v28]; j != result; result += 35 )
      *result = -4096;
  }
  return result;
}

