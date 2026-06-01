__int64 **__fastcall sub_185850(__int64 *a1)
{
  __int64 **result; // rax
  __int64 **v2; // rdx

  result = (__int64 **)qword_2554F0;
  v2 = (__int64 **)(qword_2554F0 + 8 * xmmword_2554F8);
  if ( (__int64 **)qword_2554F0 != v2 )
  {
    while ( a1 != *result )
    {
      if ( v2 == ++result )
        return result;
    }
    if ( v2 != result )
      return (__int64 **)sub_185490(a1, 0xFFFFFFFC);
  }
  return result;
}

