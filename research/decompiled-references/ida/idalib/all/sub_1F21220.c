__int64 __fastcall sub_1F21220(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ecx
  __int64 v4; // r9
  int v5; // ecx
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // r11
  unsigned int i; // eax
  __int64 *v11; // r8
  __int64 v12; // r10
  unsigned int v13; // eax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v4 = *a1;
  v5 = v3 - 1;
  v6 = 1;
  v7 = *((_DWORD *)a2 + 2);
  v8 = *a2;
  v9 = 0;
  for ( i = v5
          & (((0xBF58476D1CE4E5B9LL
             * ((unsigned int)(37 * v7) | ((unsigned __int64)(((unsigned int)v8 >> 4) ^ ((unsigned int)v8 >> 9)) << 32))) >> 31)
           ^ (756364221 * v7)); ; i = v5 & v13 )
  {
    v11 = (__int64 *)(v4 + 24LL * i);
    v12 = *v11;
    if ( v8 == *v11 && v7 == *((_DWORD *)v11 + 2) )
    {
      *a3 = v11;
      return 1;
    }
    if ( v12 == -4096 )
      break;
    if ( v12 == -8192 && *((_DWORD *)v11 + 2) == -2 && !v9 )
      v9 = v4 + 24LL * i;
LABEL_9:
    v13 = v6 + i;
    ++v6;
  }
  if ( *((_DWORD *)v11 + 2) != -1 )
    goto LABEL_9;
  if ( !v9 )
    v9 = v4 + 24LL * i;
  *a3 = v9;
  return 0;
}
