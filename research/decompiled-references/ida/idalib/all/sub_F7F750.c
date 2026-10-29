__int64 __fastcall sub_F7F750(__int64 *a1, __int64 *a2, __int64 **a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 *v5; // r11
  int v6; // ebp
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int i; // eax
  __int64 *v11; // r8
  __int64 v12; // r10
  unsigned int v13; // eax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = nullptr;
    return 0;
  }
  v4 = v3 - 1;
  v5 = nullptr;
  v6 = 1;
  v7 = *a1;
  v8 = a2[1];
  v9 = *a2;
  for ( i = v4
          & (((0xBF58476D1CE4E5B9LL
             * ((unsigned int)(37 * v8) | ((unsigned __int64)(((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4)) << 32))) >> 31)
           ^ (756364221 * v8)); ; i = v4 & v13 )
  {
    v11 = (__int64 *)(v7 + 24LL * i);
    v12 = *v11;
    if ( v9 == *v11 && v8 == v11[1] )
    {
      *a3 = v11;
      return 1;
    }
    if ( v12 == -4096 )
      break;
    if ( v12 == -8192 && v11[1] == 0x7FFFFFFFFFFFFFFELL && !v5 )
      v5 = (__int64 *)(v7 + 24LL * i);
LABEL_9:
    v13 = v6 + i;
    ++v6;
  }
  if ( v11[1] != 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_9;
  if ( !v5 )
    v5 = (__int64 *)(v7 + 24LL * i);
  *a3 = v5;
  return 0;
}
