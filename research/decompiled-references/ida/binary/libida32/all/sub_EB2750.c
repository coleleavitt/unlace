__int64 *__fastcall sub_EB2750(__int64 *a1, __int64 *a2)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rsi
  int v5; // ecx
  unsigned int v6; // edx
  __int64 *result; // rax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rdi

  v2 = *((_DWORD *)a1 + 4);
  v3 = *a1;
  if ( !v2 )
    return nullptr;
  v4 = *a2;
  v5 = v2 - 1;
  v6 = (v2 - 1) & (((unsigned int)v4 >> 4) ^ ((unsigned int)v4 >> 9));
  result = (__int64 *)(v3 + 16LL * v6);
  v8 = *result;
  if ( v4 != *result )
  {
    result = nullptr;
    if ( v8 != -4096 )
    {
      v9 = 1;
      while ( 1 )
      {
        v10 = v9 + 1;
        v6 = v5 & (v9 + v6);
        result = (__int64 *)(v3 + 16LL * v6);
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

