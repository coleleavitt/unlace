__int64 __fastcall sub_1F21CC0(__int64 a1, __int64 *a2, __int64 **a3)
{
  __int64 v3; // r9
  int v4; // r8d
  __int64 v5; // rdi
  int v6; // ebx
  __int64 *v7; // r11
  __int64 v8; // rsi
  unsigned int i; // eax
  __int64 *v10; // rcx
  __int64 v11; // r10
  unsigned int v12; // eax
  __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = a1 + 8;
    v4 = 1;
  }
  else
  {
    result = *(unsigned int *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = result - 1;
    if ( !(_DWORD)result )
    {
      *a3 = nullptr;
      return result;
    }
  }
  v5 = *a2;
  v6 = 1;
  v7 = nullptr;
  v8 = a2[1];
  for ( i = v4
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4)
              | ((unsigned __int64)(((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4)) << 32))) >> 31)
           ^ (484763065 * (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4)))); ; i = v4 & v12 )
  {
    v10 = (__int64 *)(v3 + 24LL * i);
    v11 = *v10;
    if ( *v10 == v5 && v8 == v10[1] )
    {
      *a3 = v10;
      return 1;
    }
    if ( v11 == -4096 )
      break;
    if ( v11 == -8192 && v10[1] == -8192 && !v7 )
      v7 = (__int64 *)(v3 + 24LL * i);
LABEL_10:
    v12 = v6 + i;
    ++v6;
  }
  if ( v10[1] != -4096 )
    goto LABEL_10;
  if ( !v7 )
    v7 = (__int64 *)(v3 + 24LL * i);
  *a3 = v7;
  return 0;
}
