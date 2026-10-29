_DWORD *__fastcall sub_A0D9C0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned int v10; // eax
  _DWORD *result; // rax
  __int64 v12; // r12
  _DWORD *i; // rdx
  __int64 j; // r15
  int *v15; // rdi
  char *v16; // r13
  __int64 v17; // rax
  char *v18; // r14
  __int64 v19; // rdx
  _DWORD *k; // rdx
  int *v21; // [rsp+18h] [rbp-40h] BYREF

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
  result = (_DWORD *)sub_220C370(200LL * v10, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v12 = v9 + 200 * v8;
    for ( i = &result[50 * *(unsigned int *)(a1 + 16)]; i != result; *(result - 49) = -1 )
    {
      *result = -1;
      result += 50;
    }
    for ( j = v9; v12 != j; j += 200 )
    {
      if ( *(_DWORD *)j == -1 )
      {
        if ( *(_DWORD *)(j + 4) != -1 )
          goto LABEL_9;
      }
      else if ( *(_DWORD *)j != -2 || *(_DWORD *)(j + 4) != -2 )
      {
LABEL_9:
        sub_9FEF90((__int64 *)a1, (__int64 *)j, &v21);
        v15 = v21;
        *(_QWORD *)v21 = *(_QWORD *)j;
        *((_QWORD *)v15 + 1) = v15 + 6;
        *((_QWORD *)v15 + 2) = 0x100000000LL;
        if ( *(_DWORD *)(j + 16) )
          sub_9F8800((__int64)(v15 + 2), j + 8);
        ++*(_DWORD *)(a1 + 8);
        v16 = *(char **)(j + 8);
        v17 = 176LL * *(unsigned int *)(j + 16);
        v18 = &v16[v17];
        if ( v16 != &v16[v17] )
        {
          do
          {
            v18 -= 176;
            sub_9E5F30((__int64)(v18 + 16));
          }
          while ( v16 != v18 );
          v18 = *(char **)(j + 8);
        }
        if ( v18 != (char *)(j + 24) )
          free(v18);
      }
    }
    return (_DWORD *)operator delete();
  }
  else
  {
    v19 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[50 * v19]; k != result; *(result - 49) = -1 )
    {
      *result = -1;
      result += 50;
    }
  }
  return result;
}

