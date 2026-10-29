__int64 *__fastcall sub_2236570(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ecx
  unsigned int v4; // edx
  __int64 *result; // rax
  __int64 v6; // rdi
  int i; // eax
  int v8; // r9d

  v2 = *a1;
  v3 = *((_DWORD *)a1 + 2) - 1;
  v4 = v3 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  result = (__int64 *)(*a1 + 8LL * v4);
  v6 = *result;
  if ( a2 != *result )
  {
    result = nullptr;
    if ( v6 != -1 )
    {
      for ( i = 1; ; i = v8 )
      {
        v8 = i + 1;
        v4 = v3 & (i + v4);
        result = (__int64 *)(v2 + 8LL * v4);
        if ( *result == a2 )
          break;
        if ( *result == -1 )
          return nullptr;
      }
    }
  }
  return result;
}
