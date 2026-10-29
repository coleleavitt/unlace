__int64 __fastcall std::deque<std::vector<double>>::_M_new_elements_at_front(
        _QWORD *a1,
        unsigned __int64 a2,
        double a3)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 i; // rbx
  __int64 *v8; // r13

  v3 = a1[5];
  if ( 0xAAAAAAAAAAAAAAALL
     - (21 * (((a1[9] - v3) >> 3) - 1)
      - 0x5555555555555555LL * ((__int64)(a1[6] - a1[7]) >> 3)
      - 0x5555555555555555LL * ((__int64)(a1[4] - a1[2]) >> 3)) < a2 )
    std::__throw_length_error("deque::_M_new_elements_at_front");
  v4 = a2 + 20;
  result = 0x8618618618618619LL * v4;
  v6 = v4 / 0x15;
  if ( v4 / 0x15 > (v3 - *a1) >> 3 )
    result = std::deque<std::vector<double>>::_M_reallocate_map(a1, v6, 1, a3);
  if ( v6 )
  {
    for ( i = 1; i <= v6; ++i )
    {
      v8 = (__int64 *)(a1[5] - 8 * i);
      result = operator new(0x1F8u);
      *v8 = result;
    }
  }
  return result;
}

