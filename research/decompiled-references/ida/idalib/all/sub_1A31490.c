__int64 *__fastcall sub_1A31490(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 *v9; // rbx
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 *v12; // r13
  __int64 *i; // rdx
  __int64 *v14; // rbp
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // edx
  __int64 v19; // r15
  __int64 v20; // rsi
  unsigned int v21; // r10d
  void *v22; // r9
  void *v23; // rax
  void *v24; // rdi
  int v25; // eax
  size_t v26; // rdx
  __int64 *j; // rdx
  int v28; // r9d
  __int64 v29; // r10
  __int64 v30; // [rsp+8h] [rbp-50h]
  unsigned int v31; // [rsp+14h] [rbp-44h]
  unsigned int v32; // [rsp+14h] [rbp-44h]
  void *v33; // [rsp+18h] [rbp-40h]

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
  result = (__int64 *)sub_22300B0(56LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    a1[1] = nullptr;
    v30 = 56 * v8;
    v12 = &v9[7 * v8];
    for ( i = &result[7 * *((unsigned int *)a1 + 4)]; i != result; result += 7 )
      *result = -4096;
    v14 = v9;
    if ( v12 != v9 )
    {
      while ( 1 )
      {
        v15 = *v14;
        if ( *v14 == -8192 || v15 == -4096 )
          goto LABEL_15;
        v16 = *((_DWORD *)a1 + 4);
        if ( !v16 )
        {
          *(_QWORD *)&dword_0 = *v14;
          BUG();
        }
        v17 = v16 - 1;
        v18 = (v16 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v19 = (__int64)&(*a1)[7 * v18];
        v20 = *(_QWORD *)v19;
        if ( v15 != *(_QWORD *)v19 )
        {
          v28 = 1;
          v29 = 0;
          if ( v20 != -4096 )
          {
            while ( 1 )
            {
              if ( v20 == -8192 && !v29 )
                v29 = v19;
              v18 = v17 & (v28 + v18);
              v19 = (__int64)&(*a1)[7 * v18];
              v20 = *(_QWORD *)v19;
              if ( v15 == *(_QWORD *)v19 )
                break;
              if ( v20 == -4096 )
              {
                if ( v29 )
                  v19 = v29;
                break;
              }
              ++v28;
            }
          }
        }
        *(_QWORD *)(v19 + 16) = 0x400000000LL;
        v21 = *((_DWORD *)v14 + 4);
        v22 = v14 + 3;
        *(_QWORD *)v19 = v15;
        v23 = (void *)(v19 + 24);
        *(_QWORD *)(v19 + 8) = v19 + 24;
        if ( !v21 )
          break;
        v24 = (void *)v14[1];
        if ( (__int64 *)(v19 + 8) == v14 + 1 )
          goto LABEL_13;
        if ( v24 == v22 )
        {
          v26 = 8LL * v21;
          if ( v21 <= 4uLL
            || (v32 = v21,
                sub_2237220(v19 + 8, v19 + 24, v21, 8),
                v23 = *(void **)(v19 + 8),
                v24 = (void *)v14[1],
                v21 = v32,
                v26 = 8LL * *((unsigned int *)v14 + 4),
                v22 = v14 + 3,
                v26) )
          {
            v33 = v22;
            v31 = v21;
            memcpy(v23, v24, v26);
            v24 = (void *)v14[1];
            v22 = v33;
            v21 = v31;
          }
          *(_DWORD *)(v19 + 16) = v21;
          *((_DWORD *)v14 + 4) = 0;
          goto LABEL_13;
        }
        *(_DWORD *)(v19 + 16) = v21;
        v25 = *((_DWORD *)v14 + 5);
        *(_QWORD *)(v19 + 8) = v24;
        *(_DWORD *)(v19 + 20) = v25;
        v14[1] = (__int64)v22;
        *((_DWORD *)v14 + 5) = 0;
        *((_DWORD *)v14 + 4) = 0;
        ++*((_DWORD *)a1 + 2);
LABEL_15:
        v14 += 7;
        if ( v12 == v14 )
          return (__int64 *)operator delete(v9, v30, 8);
      }
      v24 = (void *)v14[1];
LABEL_13:
      ++*((_DWORD *)a1 + 2);
      if ( v24 != v22 )
        free(v24);
      goto LABEL_15;
    }
    return (__int64 *)operator delete(v9, v30, 8);
  }
  else
  {
    a1[1] = nullptr;
    for ( j = &result[7 * *((unsigned int *)a1 + 4)]; j != result; result += 7 )
      *result = -4096;
  }
  return result;
}
