__int64 __fastcall sub_1D3C880(__int64 a1, int *a2, _QWORD *a3)
{
  __int64 v3; // r8
  int v4; // r9d
  int v5; // ecx
  int v6; // ebx
  __int64 v7; // r11
  unsigned __int64 v8; // rdi
  unsigned int i; // eax
  int *v10; // rsi
  int v11; // r10d
  unsigned int v12; // eax
  __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = a1 + 8;
    v4 = 3;
  }
  else
  {
    result = *(unsigned int *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = result - 1;
    if ( !(_DWORD)result )
    {
      *a3 = 0;
      return result;
    }
  }
  v5 = *a2;
  v6 = 1;
  v7 = 0;
  v8 = *((_QWORD *)a2 + 1);
  for ( i = v4
          & (((0xBF58476D1CE4E5B9LL
             * ((unsigned int)v8 ^ (unsigned int)(v8 >> 9) | ((unsigned __int64)(unsigned int)(37 * *a2) << 32))) >> 31)
           ^ (484763065 * (v8 ^ (v8 >> 9)))); ; i = v4 & v12 )
  {
    v10 = (int *)(v3 + 24LL * i);
    v11 = *v10;
    if ( v5 == *v10 && v8 == *((_QWORD *)v10 + 1) )
    {
      *a3 = v10;
      return 1;
    }
    if ( v11 == -1 )
      break;
    if ( v11 == -2 && *((_QWORD *)v10 + 1) == -1 && !v7 )
      v7 = v3 + 24LL * i;
LABEL_10:
    v12 = v6 + i;
    ++v6;
  }
  if ( *((_QWORD *)v10 + 1) )
    goto LABEL_10;
  if ( !v7 )
    v7 = v3 + 24LL * i;
  *a3 = v7;
  return 0;
}
