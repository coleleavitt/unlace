bool __fastcall sub_C05A60(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  bool result; // al
  __int64 v5; // rax
  int v6; // r9d
  __int64 *v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 *v12; // r10
  __int64 *i; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx

  v2 = *(_DWORD **)(a2 + 24);
  if ( !v2 || (result = *v2 == 4 || *v2 == -1) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    v6 = *(_DWORD *)(a2 + 12);
    v7 = *(__int64 **)(v5 + 88);
    v8 = *(unsigned int *)(v5 + 96);
    v9 = v8 - 1;
    v8 *= 8;
    v10 = (__int64 *)((char *)v7 + v8);
    v11 = 8LL * (v6 & v9);
    v12 = &v7[(unsigned __int64)v11 / 8];
    if ( v11 != v8 )
    {
      for ( i = &v7[(unsigned __int64)v11 / 8]; v10 != i; ++i )
      {
        v14 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          result = a2 == v14 && *(_DWORD *)(v14 + 12) == v6;
          if ( result )
            return result;
        }
        else if ( !v14 )
        {
          return 0;
        }
      }
    }
    for ( ; v12 != v7; ++v7 )
    {
      v15 = *v7;
      if ( (unsigned __int64)*v7 > 1 )
      {
        result = a2 == v15 && *(_DWORD *)(v15 + 12) == v6;
        if ( result )
          return result;
      }
      else if ( !v15 )
      {
        return 0;
      }
    }
    return 0;
  }
  return result;
}

