__int64 __fastcall sub_B2B80(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  int v3; // r11d
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  char *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r10

  v3 = *a1;
  v4 = 8;
  if ( *a1 )
    v4 = 4LL * (1 << (v3 - 1)) + 4;
  result = -1;
  if ( a1[1] >= a3 )
  {
    v6 = 0;
    v7 = 0;
    v8 = (char *)a1 + v4;
    while ( 1 )
    {
      v9 = *(unsigned int *)(a2 + 4 * v6);
      if ( (_DWORD)v9 )
      {
        v10 = ((HIWORD(*(_DWORD *)&v8[8 * v6 + 4]) + 1) << 8)
            - ((unsigned int)((((HIWORD(*(_DWORD *)&v8[8 * v6 + 4]) + 1) << 16)
                             - ((1 << v3)
                              + *(_DWORD *)&v8[8 * v6 + 4])) << 8) >> v3);
        if ( (v3 + 1) << 8 <= (unsigned int)v10 )
          return -1;
        v7 += v10 * v9;
      }
      if ( a3 == v6 )
        return v7 >> 8;
      ++v6;
    }
  }
  return result;
}

