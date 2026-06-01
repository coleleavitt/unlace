__int64 __fastcall sub_5A3C30(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rdi

  sub_5A3680(a1, 1, a3);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 104) + 120LL))(*(_QWORD *)(a1 + 104), a2);
  result = *(_QWORD *)(a1 + 112);
  if ( result )
  {
    v5 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v5 )
    {
      v6 = 0;
      while ( 1 )
      {
        if ( *(_QWORD *)(result + 8 * v6) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v6);
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 120LL))(v7, a2);
        }
        if ( v5 == ++v6 )
          break;
        result = *(_QWORD *)(a1 + 112);
      }
    }
  }
  return result;
}

