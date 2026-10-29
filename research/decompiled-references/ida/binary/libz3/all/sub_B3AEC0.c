__int64 __fastcall sub_B3AEC0(__int64 a1)
{
  _DWORD *v1; // r15
  _DWORD *v2; // rbx
  __int64 result; // rax
  char v4; // si

  v1 = *(_DWORD **)(a1 + 32);
  v2 = v1 + 1;
  if ( !v1 || (result = 4LL * (unsigned int)*(v1 - 1), v1 = (_DWORD *)((char *)v1 + result), result != 4) )
  {
    v4 = 1;
    do
    {
      result = (unsigned int)(2 * *v2);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8848LL) + result) )
      {
        if ( v4 )
          std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        result = std::__ostream_insert<char,std::char_traits<char>>();
        v4 = 0;
      }
      ++v2;
    }
    while ( v1 != v2 );
    if ( !v4 )
      return std::__ostream_insert<char,std::char_traits<char>>();
  }
  return result;
}

