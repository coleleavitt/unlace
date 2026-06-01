__int64 __fastcall clang_CXCursorSet_contains(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // r10d
  unsigned int i; // eax
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r11
  int v16; // r9d

  if ( !a1 )
  {
    LODWORD(v9) = 0;
    return (unsigned int)v9;
  }
  v9 = *((unsigned int *)a1 + 4);
  v10 = *a1;
  if ( !(_DWORD)v9 )
    return (unsigned int)v9;
  v11 = 1;
  for ( i = (v9 - 1)
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned int)a9 >> 9) ^ ((unsigned int)a9 >> 4)
              | ((unsigned __int64)(((unsigned int)a8 >> 9) ^ ((unsigned int)a8 >> 4)) << 32))) >> 31)
           ^ (484763065 * (((unsigned int)a9 >> 9) ^ ((unsigned int)a9 >> 4)))); ; i = (v9 - 1) & v13 )
  {
    v14 = 40LL * i;
    v15 = v10 + v14;
    v16 = *(_DWORD *)(v10 + v14);
    if ( a7 == v16 && a8 == *(_QWORD *)(v15 + 8) && a9 == *(_QWORD *)(v15 + 16) )
      return 40 * v9 != v14;
    if ( v16 == 70 && !*(_QWORD *)(v15 + 8) && !*(_QWORD *)(v15 + 16) )
      break;
    v13 = v11 + i;
    ++v11;
  }
  return 0;
}

