__int64 __fastcall sub_DDF6A0(const char **a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rbp

  result = *(unsigned int *)a1;
  switch ( (_DWORD)result )
  {
    case 1:
      v4 = *(_QWORD *)(a3 + 8LL * *((int *)a1 + 2));
      v5 = *(_QWORD *)(v4 + 24);
      if ( (v5 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        return std::ostream::operator<<();
      }
      else
      {
        if ( v5 )
          strlen(*(const char **)(v4 + 24));
        return std::__ostream_insert<char,std::char_traits<char>>();
      }
    case 2:
      return sub_39A600(a2, a1[2]);
    case 0:
      return (*(__int64 (__fastcall **)(const char *))(*(_QWORD *)a1[1] + 48LL))(a1[1]);
  }
  return result;
}

