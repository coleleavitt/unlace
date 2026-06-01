__int64 __fastcall sub_B45690(const __m128i *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  __int64 v5; // r13
  unsigned int v6; // edx
  unsigned __int64 v7; // rax
  __m128i v9[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a3;
  v5 = *(_QWORD *)(a1[14].m128i_i64[1] + 8LL * a3);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  while ( 1 )
  {
    v6 = v4;
    v4 = *(_DWORD *)(a1[16].m128i_i64[0] + 4 * v3);
    if ( v6 == v4 )
      break;
    v3 = v4;
  }
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v7 = *(_QWORD *)(v5 + 8);
  if ( v7 )
  {
    v9[0] = _mm_unpacklo_epi64(_mm_loadl_epi64(a1 + 1), (__m128i)v7);
    sub_AA7260(a2, v9);
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

