bool __fastcall sub_F7DD90(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  v2 = *(_QWORD **)a2;
  v3 = *(_QWORD **)a1;
  v4 = 8LL * *(unsigned int *)(a1 + 8);
  v5 = 8LL * *(unsigned int *)(a2 + 8);
  v6 = *(_QWORD *)a1 + v4;
  v7 = &v3[(unsigned __int64)v5 / 8];
  if ( v4 <= v5 )
    v7 = (_QWORD *)v6;
  if ( v7 == v3 )
  {
    v8 = v2;
    return v8 != &v2[(unsigned __int64)v5 / 8];
  }
  if ( *v3 < *v2 )
    return 1;
  if ( *v3 <= *v2 )
  {
    v8 = v2;
    while ( 1 )
    {
      ++v3;
      ++v8;
      if ( v7 == v3 )
        break;
      if ( *v3 < *v8 )
        return 1;
      if ( *v3 > *v8 )
        return 0;
    }
    return v8 != &v2[(unsigned __int64)v5 / 8];
  }
  return 0;
}
