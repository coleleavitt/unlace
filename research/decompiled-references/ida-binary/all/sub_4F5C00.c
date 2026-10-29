__int64 __fastcall sub_4F5C00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi

  v1 = qword_8D1E90;
  v2 = qword_8D1E90 + 8 * xmmword_8D1E98;
  if ( v2 == qword_8D1E90 )
    return 0;
  while ( a1 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v1 + 56LL) + 40LL) )
  {
    v1 += 8;
    if ( v2 == v1 )
      return 0;
  }
  return *(_QWORD *)v1;
}
