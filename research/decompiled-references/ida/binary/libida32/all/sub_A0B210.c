_DWORD *__fastcall sub_A0B210(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  _DWORD *i; // rdx
  __int64 j; // rbp
  int *v16; // rdi
  char *v17; // r14
  __int64 v18; // rax
  char *v19; // r15
  __int64 v20; // rdx
  _DWORD *k; // rdx
  int *v22; // [rsp+18h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
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
  *(_DWORD *)(a1 + 16) = v10;
  result = (_DWORD *)sub_220C370(408LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = v9 + 408 * v8;
    for ( i = &result[102 * v12]; i != result; *(result - 101) = -1 )
    {
      *result = -1;
      result += 102;
    }
    for ( j = v9; v13 != j; j += 408 )
    {
      if ( *(_DWORD *)j == -1 )
      {
        if ( *(_DWORD *)(j + 4) != -1 )
          goto LABEL_9;
      }
      else if ( *(_DWORD *)j != -2 || *(_DWORD *)(j + 4) != -2 )
      {
LABEL_9:
        sub_9FEEC0((__int64 *)a1, (__int64 *)j, &v22);
        v16 = v22;
        *(_QWORD *)v22 = *(_QWORD *)j;
        *((_QWORD *)v16 + 1) = v16 + 6;
        *((_QWORD *)v16 + 2) = 0x100000000LL;
        if ( *(_DWORD *)(j + 16) )
          sub_9F5D40((char **)v16 + 1, (char **)(j + 8));
        ++*(_DWORD *)(a1 + 8);
        v17 = *(char **)(j + 8);
        v18 = 384LL * *(unsigned int *)(j + 16);
        v19 = &v17[v18];
        if ( v17 != &v17[v18] )
        {
          do
          {
            v19 -= 384;
            sub_9E66A0((__int64)(v19 + 16));
          }
          while ( v17 != v19 );
          v19 = *(char **)(j + 8);
        }
        if ( v19 != (char *)(j + 24) )
          free(v19);
      }
    }
    return (_DWORD *)operator delete();
  }
  else
  {
    v20 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[102 * v20]; k != result; *(result - 101) = -1 )
    {
      *result = -1;
      result += 102;
    }
  }
  return result;
}

