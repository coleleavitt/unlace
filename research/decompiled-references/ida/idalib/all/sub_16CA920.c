__int64 __fastcall sub_16CA920(__int64 *a1, __int64 *a2, __int64 **a3)
{
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // ebx
  __int64 *v8; // r11
  int v9; // r10d
  unsigned int i; // eax
  __int64 *v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // eax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = nullptr;
    return 0;
  }
  v4 = *a1;
  v5 = a2[1];
  v6 = *a2;
  v7 = 1;
  v8 = nullptr;
  v9 = v3 - 1;
  for ( i = (v3 - 1)
          & (((0xBF58476D1CE4E5B9LL
             * ((484763065 * (_DWORD)v5) ^ (unsigned int)((0xBF58476D1CE4E5B9LL * v5) >> 31)
              | ((unsigned __int64)(((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)) << 32))) >> 31)
           ^ (484763065 * ((484763065 * v5) ^ ((0xBF58476D1CE4E5B9LL * v5) >> 31)))); ; i = v9 & v13 )
  {
    v11 = (__int64 *)(v4 + 32LL * i);
    v12 = *v11;
    if ( v6 == *v11 && v5 == v11[1] )
    {
      *a3 = v11;
      return 1;
    }
    if ( v12 == -4096 )
      break;
    if ( v12 == -8192 && v11[1] == -2 && !v8 )
      v8 = (__int64 *)(v4 + 32LL * i);
LABEL_9:
    v13 = v7 + i;
    ++v7;
  }
  if ( v11[1] != -1 )
    goto LABEL_9;
  if ( !v8 )
    v8 = (__int64 *)(v4 + 32LL * i);
  *a3 = v8;
  return 0;
}
