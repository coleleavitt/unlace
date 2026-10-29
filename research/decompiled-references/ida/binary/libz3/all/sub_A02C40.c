__int64 __fastcall sub_A02C40(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *i; // r13
  __int64 v5; // rdx

  result = std::__ostream_insert<char,std::char_traits<char>>();
  v3 = *(__int64 **)(a1 + 792);
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    for ( i = &v3[result]; i != v3; result = sub_A02A90(a1, a2, v5, 0) )
      v5 = *v3++;
  }
  return result;
}

