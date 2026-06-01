__int64 **__fastcall sub_186390(__int64 *a1)
{
  __int64 **result; // rax
  __int64 **v2; // rdx

  result = (__int64 **)qword_2566B0;
  v2 = (__int64 **)(qword_2566B0 + 8 * xmmword_2566B8);
  if ( (__int64 **)qword_2566B0 != v2 )
  {
    while ( a1 != *result )
    {
      if ( v2 == ++result )
        return result;
    }
    if ( v2 != result )
      return (__int64 **)sub_185FD0(a1, 0xFFFFFFFC);
  }
  return result;
}

