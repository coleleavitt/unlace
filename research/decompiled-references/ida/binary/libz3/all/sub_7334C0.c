bool __fastcall sub_7334C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // r9d
  __int64 *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // r10
  __int64 *i; // rdx
  bool result; // al
  __int64 v14; // rcx
  __int64 v15; // rdx

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(__int64 **)(v4 + 80);
  v7 = *(unsigned int *)(v4 + 88);
  v8 = v7 - 1;
  v7 *= 8;
  v9 = (__int64 *)((char *)v6 + v7);
  v10 = 8LL * (v5 & v8);
  v11 = &v6[(unsigned __int64)v10 / 8];
  if ( v10 != v7 )
  {
    for ( i = &v6[(unsigned __int64)v10 / 8]; v9 != i; ++i )
    {
      v14 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        result = v14 == a2 && *(_DWORD *)(v14 + 12) == v5;
        if ( result )
          return result;
      }
      else if ( !v14 )
      {
        return 0;
      }
    }
  }
  if ( v6 == v11 )
    return 0;
  while ( 1 )
  {
    v15 = *v6;
    if ( (unsigned __int64)*v6 > 1 )
    {
      result = v15 == a2 && *(_DWORD *)(v15 + 12) == v5;
      if ( result )
        return result;
      goto LABEL_11;
    }
    if ( !v15 )
      return 0;
LABEL_11:
    if ( v11 == ++v6 )
      return 0;
  }
}

