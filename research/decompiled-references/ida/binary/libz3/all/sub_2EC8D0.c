const int *__fastcall sub_2EC8D0(__int64 a1, __int64 a2, __int64 a3)
{
  const int *result; // rax
  const char *v4; // rbx

  if ( *(_DWORD *)a3 != 2 )
    return (const int *)sub_160EC40(a2, a3 + 8);
  result = &qword_18D6CD0;
  v4 = *(const char **)(a3 + 88);
  if ( v4 )
  {
    if ( ((unsigned __int8)v4 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      return (const int *)std::ostream::operator<<();
    }
    else
    {
      strlen(v4);
      return (const int *)std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

