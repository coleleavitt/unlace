__int64 __fastcall sub_AC9E20(__int64 *a1, int *a2, _QWORD *a3)
{
  int v3; // r10d
  int v4; // r10d
  __int64 v5; // r9
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rbp
  int v10; // ebx
  unsigned int i; // eax
  __int64 v12; // rcx
  __int64 v13; // r11
  unsigned int v14; // eax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v4 = v3 - 1;
  v5 = *a1;
  v6 = *a2;
  v7 = *((_QWORD *)a2 + 1);
  v8 = *((_QWORD *)a2 + 2);
  v9 = 0;
  v10 = 1;
  for ( i = v4
          & (((0xBF58476D1CE4E5B9LL
             * ((unsigned int)((0xBF58476D1CE4E5B9LL
                              * ((unsigned int)(1512728442 * v6)
                               | ((unsigned __int64)(((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4)) << 32))) >> 31)
              ^ (-1747130070 * v6)
              | ((unsigned __int64)(((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4)) << 32))) >> 31)
           ^ (484763065
            * (((0xBF58476D1CE4E5B9LL
               * ((unsigned int)(1512728442 * v6)
                | ((unsigned __int64)(((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4)) << 32))) >> 31)
             ^ (-1747130070 * v6)))); ; i = v4 & v14 )
  {
    v12 = v5 + 24LL * i;
    v13 = *(_QWORD *)(v12 + 16);
    if ( v13 == v8 && v7 == *(_QWORD *)(v12 + 8) && v6 == *(_DWORD *)v12 )
    {
      *a3 = v12;
      return 1;
    }
    if ( v13 == -4096 )
      break;
    if ( v13 == -8192 && *(_QWORD *)(v12 + 8) == -8192 && *(_DWORD *)v12 == 0x80000000 && !v9 )
      v9 = v5 + 24LL * i;
LABEL_7:
    v14 = v10 + i;
    ++v10;
  }
  if ( *(_QWORD *)(v12 + 8) != -4096 || *(_DWORD *)v12 != 0x7FFFFFFF )
    goto LABEL_7;
  if ( !v9 )
    v9 = v5 + 24LL * i;
  *a3 = v9;
  return 0;
}

