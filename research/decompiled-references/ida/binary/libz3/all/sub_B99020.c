bool __fastcall sub_B99020(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v4; // rax
  __int64 *v5; // rsi
  int v6; // r9d
  unsigned int v7; // edx
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 *v10; // r10
  __int64 *i; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx

  result = 0;
  if ( *(_DWORD *)(a1 + 98948) )
  {
    v4 = *(unsigned int *)(a1 + 98944);
    v5 = *(__int64 **)((char *)&stru_18278.r_offset + a1);
    v6 = *(_DWORD *)(*(_QWORD *)a2 + 12LL);
    v7 = v4 - 1;
    v4 *= 8;
    v8 = (__int64 *)((char *)v5 + v4);
    v9 = 8LL * (v6 & v7);
    v10 = &v5[(unsigned __int64)v9 / 8];
    if ( v9 != v4 )
    {
      for ( i = &v5[(unsigned __int64)v9 / 8]; v8 != i; ++i )
      {
        v12 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          result = v12 == a2 && *(_DWORD *)(*(_QWORD *)v12 + 12LL) == v6;
          if ( result )
            return result;
        }
        else if ( !v12 )
        {
          return 0;
        }
      }
    }
    for ( ; v10 != v5; ++v5 )
    {
      v13 = *v5;
      if ( (unsigned __int64)*v5 > 1 )
      {
        result = v13 == a2 && *(_DWORD *)(*(_QWORD *)v13 + 12LL) == v6;
        if ( result )
          return result;
      }
      else if ( !v13 )
      {
        return 0;
      }
    }
    return 0;
  }
  return result;
}

