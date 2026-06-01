__int64 __fastcall sub_7C0160(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // r11d
  int v5; // r9d
  int v6; // r11d
  int v7; // r10d
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 *v10; // rbx
  unsigned int i; // eax
  unsigned int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rdx

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v5 = *((_DWORD *)a2 + 2);
  v6 = v3 - 1;
  v7 = 1;
  v8 = *a2;
  v9 = *a1;
  v10 = nullptr;
  for ( i = v6
          & (((0xBF58476D1CE4E5B9LL
             * ((unsigned int)(37 * v5) | ((unsigned __int64)(((unsigned int)v8 >> 4) ^ ((unsigned int)v8 >> 9)) << 32))) >> 31)
           ^ (756364221 * v5)); ; i = v6 & v12 )
  {
    v13 = (__int64 *)(v9 + 24LL * i);
    v14 = *v13;
    if ( v8 == *v13 && v5 == *((_DWORD *)v13 + 2) )
    {
      *a3 = v13;
      return 1;
    }
    if ( v14 == -4096 )
      break;
    if ( v14 == -8192 && *((_DWORD *)v13 + 2) == -2 && !v10 )
      v10 = (__int64 *)(v9 + 24LL * i);
LABEL_5:
    v12 = v7 + i;
    ++v7;
  }
  if ( *((_DWORD *)v13 + 2) != -1 )
    goto LABEL_5;
  if ( v10 )
    v13 = v10;
  *a3 = v13;
  return 0;
}

