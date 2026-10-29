__int64 __fastcall sub_596970(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbx

  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    v4 = v2 + v3;
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v2 != v2 + v3 )
    {
      v5 = v2 + 1;
      std::ostream::_M_insert<bool>();
      if ( (_DWORD)v3 != 1 )
      {
        do
        {
          ++v5;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<bool>();
        }
        while ( v4 != v5 );
      }
    }
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 120LL))(*(_QWORD *)(a1 + 64), a2);
}

