__int64 **__fastcall sub_4F9C50(__int64 *a1)
{
  __int64 **result; // rax
  __int64 **v2; // rdx

  result = (__int64 **)qword_8D2310;
  v2 = (__int64 **)(qword_8D2310 + 8 * xmmword_8D2318);
  if ( (__int64 **)qword_8D2310 != v2 )
  {
    while ( a1 != *result )
    {
      if ( v2 == ++result )
        return result;
    }
    if ( v2 != result )
      return (__int64 **)sub_4F9A60(a1, 0xFFFFFFFC);
  }
  return result;
}
