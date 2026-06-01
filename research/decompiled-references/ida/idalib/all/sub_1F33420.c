__int64 __fastcall sub_1F33420(__int64 *a1, __int64 *a2, __int64 **a3)
{
  int v3; // ecx
  __int64 v4; // r9
  int v5; // ecx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 *v9; // r11
  unsigned int i; // eax
  __int64 *v11; // rsi
  __int64 v12; // r10
  unsigned int v13; // eax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = nullptr;
    return 0;
  }
  v4 = *a1;
  v5 = v3 - 1;
  v6 = 1;
  v7 = *a2;
  v8 = a2[1];
  v9 = nullptr;
  for ( i = v5
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned int)v8 >> 4) ^ ((unsigned int)v8 >> 9)
              | ((unsigned __int64)(((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)) << 32))) >> 31)
           ^ (484763065 * (((unsigned int)v8 >> 4) ^ ((unsigned int)v8 >> 9)))); ; i = v5 & v13 )
  {
    v11 = (__int64 *)(v4 + 24LL * i);
    v12 = *v11;
    if ( v7 == *v11 && v8 == v11[1] )
    {
      *a3 = v11;
      return 1;
    }
    if ( v12 == -4096 )
      break;
    if ( v12 == -8192 && v11[1] == -8192 && !v9 )
      v9 = (__int64 *)(v4 + 24LL * i);
LABEL_9:
    v13 = v6 + i;
    ++v6;
  }
  if ( v11[1] != -4096 )
    goto LABEL_9;
  if ( !v9 )
    v9 = (__int64 *)(v4 + 24LL * i);
  *a3 = v9;
  return 0;
}
