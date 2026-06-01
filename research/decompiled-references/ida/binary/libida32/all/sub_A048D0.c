_DWORD *__fastcall sub_A048D0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  unsigned int v8; // ebp
  __int64 v9; // rbx
  unsigned int v10; // eax
  _DWORD *result; // rax
  int *v12; // r13
  _DWORD *i; // rdx
  int *j; // rbp
  int *v15; // rdi
  char **v16; // rdx
  _DWORD *k; // rdx
  int *v18; // [rsp+18h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(_DWORD *)(a1 + 16);
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
  result = (_DWORD *)sub_220C370(112LL * v10, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v12 = (int *)(v9 + 112LL * v8);
    for ( i = &result[28 * *(unsigned int *)(a1 + 16)]; i != result; result += 28 )
      *result = -1;
    for ( j = (int *)v9; v12 != j; j += 28 )
    {
      while ( (unsigned int)(*j + 2) <= 1 )
      {
        j += 28;
        if ( v12 == j )
          return (_DWORD *)operator delete();
      }
      sub_9FDCD0((__int64 *)a1, j, &v18);
      v15 = v18;
      v16 = (char **)(j + 2);
      *v18 = *j;
      *((_QWORD *)v15 + 1) = v15 + 6;
      *((_QWORD *)v15 + 2) = 0x100000000LL;
      if ( j[4] )
      {
        sub_9F4D70((__int64)(v15 + 2), (__int64)(j + 2));
        v16 = (char **)(j + 2);
      }
      ++*(_DWORD *)(a1 + 8);
      sub_9FFCF0(v16);
    }
    return (_DWORD *)operator delete();
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[28 * *(unsigned int *)(a1 + 16)]; k != result; result += 28 )
      *result = -1;
  }
  return result;
}

