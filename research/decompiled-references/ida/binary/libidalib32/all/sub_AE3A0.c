unsigned __int64 __fastcall sub_AE3A0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r12
  unsigned __int64 result; // rax
  __int64 i; // rbx
  __int64 *v6; // r13

  v2 = a1[9];
  if ( 0x3FFFFFFFFFFFFFFLL
     - (16 * ((unsigned __int64)(v2 == 0) + ((v2 - a1[5]) >> 3) - 1)
      + ((__int64)(a1[4] - a1[2]) >> 5)
      + ((__int64)(a1[6] - a1[7]) >> 5)) < a2 )
    std::__throw_length_error("deque::_M_new_elements_at_back");
  v3 = (a2 + 15) >> 4;
  result = a1[1] - ((v2 - *a1) >> 3);
  if ( result < v3 + 1 )
    result = sub_AE080((__int64)a1, (a2 + 15) >> 4, 0);
  if ( v3 )
  {
    for ( i = 1; ; ++i )
    {
      v6 = (__int64 *)(a1[9] + 8 * i);
      *v6 = operator new(0x200u);
      result = i + 1;
      if ( i == v3 )
        break;
    }
  }
  return result;
}

