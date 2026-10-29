bool __fastcall sub_655780(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 *v5; // rsi
  __int64 v6; // rax
  int v7; // r9d
  unsigned int v8; // edx
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 *v11; // r10
  __int64 *i; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx

  result = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(a2 + 16);
    v5 = *(__int64 **)(v3 + 2288);
    v6 = *(unsigned int *)(v3 + 2296);
    v7 = *(_DWORD *)(v4 + 12);
    v8 = v6 - 1;
    v6 *= 8;
    v9 = (__int64 *)((char *)v5 + v6);
    v10 = 8LL * (v7 & v8);
    v11 = &v5[(unsigned __int64)v10 / 8];
    if ( v10 != v6 )
    {
      for ( i = &v5[(unsigned __int64)v10 / 8]; v9 != i; ++i )
      {
        v13 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          result = v4 == v13 && *(_DWORD *)(v13 + 12) == v7;
          if ( result )
            return result;
        }
        else if ( !v13 )
        {
          return 0;
        }
      }
    }
    for ( ; v11 != v5; ++v5 )
    {
      v14 = *v5;
      if ( (unsigned __int64)*v5 > 1 )
      {
        result = v4 == v14 && *(_DWORD *)(v14 + 12) == v7;
        if ( result )
          return result;
      }
      else if ( !v14 )
      {
        return 0;
      }
    }
    return 0;
  }
  return result;
}

