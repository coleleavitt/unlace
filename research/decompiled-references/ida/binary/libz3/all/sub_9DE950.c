__int64 __fastcall sub_9DE950(__int64 *a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 i; // rbp
  unsigned int v8; // edx

  v3 = a3;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = (__int64 *)(a1[79] + 24 * v3);
  result = sub_9DD420(a1, (__int64)a2, v4, 1);
  v6 = *v4;
  if ( v6 )
  {
    result = 5LL * *(unsigned int *)(v6 - 4);
    for ( i = v6 + 40LL * *(unsigned int *)(v6 - 4); i != v6; v6 += 40 )
    {
      v8 = *(_DWORD *)(v6 + 32);
      if ( v8 != -1 )
        result = sub_9DD9E0(a1, a2, v8);
    }
  }
  return result;
}

