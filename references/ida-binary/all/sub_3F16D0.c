unsigned __int64 sub_3F16D0()
{
  __int64 *v0; // rbx
  unsigned __int64 result; // rax
  __int64 *v2; // rbp

  v0 = (__int64 *)qword_8D14A0;
  result = xmmword_8D14A8;
  v2 = (__int64 *)(qword_8D14A0 + 8 * xmmword_8D14A8);
  if ( v2 != (__int64 *)qword_8D14A0 )
  {
    do
    {
      if ( *v0 )
        result = sub_3F15A0(*v0);
      ++v0;
    }
    while ( v2 != v0 );
  }
  return result;
}
