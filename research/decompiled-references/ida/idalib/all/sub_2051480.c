__int64 __fastcall sub_2051480(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // edx
  _QWORD *v7; // rbx
  __int64 v8; // r12
  int i; // edi

  v1 = sub_20CB0D0(a1);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)v1;
  result = *(unsigned int *)(*(_QWORD *)v1 + 1408LL);
  v5 = *(_QWORD *)(v3 + 1392);
  if ( (_DWORD)result )
  {
    v6 = result - 1;
    result = ((_DWORD)result - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
    v7 = (_QWORD *)(v5 + 16 * result);
    if ( v2 != *v7 )
    {
      if ( *v7 == -4096 )
        return result;
      for ( i = 1; ; ++i )
      {
        result = v6 & (unsigned int)(i + result);
        v7 = (_QWORD *)(v5 + 16LL * (unsigned int)result);
        if ( v2 == *v7 )
          break;
        if ( *v7 == -4096 )
          return result;
      }
    }
    v8 = v7[1];
    if ( v8 )
    {
      sub_20CC0C0(v7[1]);
      result = sub_20C9BF0(v8);
    }
    *v7 = -8192;
    --*(_DWORD *)(v3 + 1400);
    ++*(_DWORD *)(v3 + 1404);
  }
  return result;
}
