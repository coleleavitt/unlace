__int64 *__fastcall sub_1AF7C80(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  int v3; // ecx
  __int64 v4; // rsi
  unsigned int v5; // edx
  __int64 *result; // rax
  __int64 v7; // rdi
  int v8; // ecx
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rdi

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v2 = a1 + 8;
    v3 = 3;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 16);
    v2 = *(_QWORD *)(a1 + 8);
    if ( !v8 )
      return nullptr;
    v3 = v8 - 1;
  }
  v4 = *a2;
  v5 = v3 & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
  result = (__int64 *)(v2 + 16LL * v5);
  v7 = *result;
  if ( v4 != *result )
  {
    result = nullptr;
    if ( v7 != -4096 )
    {
      v9 = 1;
      while ( 1 )
      {
        v10 = v9 + 1;
        v5 = v3 & (v9 + v5);
        result = (__int64 *)(v2 + 16LL * v5);
        v11 = *result;
        if ( *result == v4 )
          break;
        v9 = v10;
        if ( v11 == -4096 )
          return nullptr;
      }
    }
  }
  return result;
}
