__int64 __fastcall sub_4D5920(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 result; // rax
  _QWORD v5[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = *a1;
  v5[0] = 0;
  (*(void (__fastcall **)(__int64 *, _QWORD *))(v1 + 24))(a1, v5);
  v2 = v5[0];
  if ( v5[0] )
  {
    v3 = v5[0] + 8LL * *(unsigned int *)(v5[0] - 4LL);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v2 != v3 )
    {
      while ( 1 )
      {
        std::ostream::_M_insert<unsigned long>();
        v2 += 8;
        if ( v3 == v2 )
          break;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  result = std::__ostream_insert<char,std::char_traits<char>>();
  if ( v5[0] )
    return sub_186B220((void *)(v5[0] - 8LL));
  return result;
}

