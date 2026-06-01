__int64 __fastcall sub_20C3330(__int64 *a1, __int64 *a2, __int64 **a3)
{
  int v3; // ecx
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rsi
  __int64 v7; // r9
  int v8; // ebx
  __int64 *v9; // r11
  unsigned int i; // eax
  __int64 *v11; // rdi
  __int64 v12; // r10
  unsigned int v13; // eax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = nullptr;
    return 0;
  }
  v4 = a2[1];
  v5 = v3 - 1;
  v6 = *a2;
  v7 = *a1;
  v8 = 1;
  v9 = nullptr;
  for ( i = v5
          & (((0xBF58476D1CE4E5B9LL
             * ((484763065 * (_DWORD)v4) ^ (unsigned int)((0xBF58476D1CE4E5B9LL * v4) >> 31)
              | ((unsigned __int64)(((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)) << 32))) >> 31)
           ^ (484763065 * ((484763065 * v4) ^ ((0xBF58476D1CE4E5B9LL * v4) >> 31)))); ; i = v5 & v13 )
  {
    v11 = (__int64 *)(v7 + 24LL * i);
    v12 = *v11;
    if ( v6 == *v11 && v4 == v11[1] )
    {
      *a3 = v11;
      return 1;
    }
    if ( v12 == -4096 )
      break;
    if ( v12 == -8192 && v11[1] == -2 && !v9 )
      v9 = (__int64 *)(v7 + 24LL * i);
LABEL_9:
    v13 = v8 + i;
    ++v8;
  }
  if ( v11[1] != -1 )
    goto LABEL_9;
  if ( !v9 )
    v9 = (__int64 *)(v7 + 24LL * i);
  *a3 = v9;
  return 0;
}
