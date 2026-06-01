unsigned __int64 __fastcall std::deque<std::vector<double>>::_M_new_elements_at_back(
        _QWORD *a1,
        unsigned __int64 a2,
        double a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 *v6; // r13

  if ( 0xAAAAAAAAAAAAAAALL
     - (21 * (((__int64)(a1[9] - a1[5]) >> 3) - 1)
      - 0x5555555555555555LL * ((__int64)(a1[6] - a1[7]) >> 3)
      - 0x5555555555555555LL * ((__int64)(a1[4] - a1[2]) >> 3)) < a2 )
    std::__throw_length_error("deque::_M_new_elements_at_back");
  result = a1[1] - ((__int64)(a1[9] - *a1) >> 3);
  v4 = (a2 + 20) / 0x15;
  if ( v4 + 1 > result )
    result = std::deque<std::vector<double>>::_M_reallocate_map(a1, v4, 0, a3);
  if ( v4 )
  {
    for ( i = 1; i <= v4; ++i )
    {
      v6 = (unsigned __int64 *)(a1[9] + 8 * i);
      result = operator new(0x1F8u);
      *v6 = result;
    }
  }
  return result;
}

