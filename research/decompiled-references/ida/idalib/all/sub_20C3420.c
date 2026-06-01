__int64 __fastcall sub_20C3420(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ecx
  int v4; // r9d
  int v5; // ebx
  char v6; // r10
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rbp
  unsigned int i; // eax
  __int64 *v12; // r8
  __int64 v13; // r11
  unsigned int v14; // eax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v4 = *((_DWORD *)a2 + 2);
  v5 = 1;
  v6 = *((_BYTE *)a2 + 12);
  v7 = *a2;
  v8 = *a1;
  v9 = v3 - 1;
  v10 = 0;
  for ( i = v9
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned int)(v6 == 0) + 37 * v4 - 1)
              | ((unsigned __int64)(((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4)) << 32))) >> 31)
           ^ (484763065 * ((v6 == 0) + 37 * v4 - 1))); ; i = v9 & v14 )
  {
    v12 = (__int64 *)(v8 + 24LL * i);
    v13 = *v12;
    if ( v7 == *v12 && v4 == *((_DWORD *)v12 + 2) && v6 == *((_BYTE *)v12 + 12) )
    {
      *a3 = v12;
      return 1;
    }
    if ( v13 == -4096 )
      break;
    if ( v13 == -8192 && *((_DWORD *)v12 + 2) == -2 && *((_BYTE *)v12 + 12) != 1 && !v10 )
      v10 = v8 + 24LL * i;
LABEL_7:
    v14 = v5 + i;
    ++v5;
  }
  if ( *((_DWORD *)v12 + 2) != -1 || !*((_BYTE *)v12 + 12) )
    goto LABEL_7;
  if ( !v10 )
    v10 = v8 + 24LL * i;
  *a3 = v10;
  return 0;
}
