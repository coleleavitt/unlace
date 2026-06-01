__int64 __fastcall sub_B709B0(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rbp
  __int64 *i; // r13
  __int64 v4; // r15
  __int64 v5; // rbx

  result = std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *(__int64 **)(a1 + 32);
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    for ( i = &v2[result]; i != v2; result = sub_B70150(v5, v4) )
    {
      v4 = *v2++;
      v5 = std::ostream::_M_insert<void const*>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

