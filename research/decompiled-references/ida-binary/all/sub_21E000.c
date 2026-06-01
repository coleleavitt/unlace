unsigned __int64 __fastcall sub_21E000(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // r12
  unsigned __int64 result; // rax
  __int64 i; // rbx
  _QWORD *v10; // r13

  v6 = a1[9];
  if ( 0x3FFFFFFFFFFFFFFLL
     - (16 * ((unsigned __int64)(v6 == 0) + ((v6 - a1[5]) >> 3) - 1)
      + ((__int64)(a1[4] - a1[2]) >> 5)
      + ((__int64)(a1[6] - a1[7]) >> 5)) < a2 )
    std::__throw_length_error("deque::_M_new_elements_at_back");
  v7 = (a2 + 15) >> 4;
  result = a1[1] - ((v6 - *a1) >> 3);
  if ( result < v7 + 1 )
    result = sub_21DCE0((__int64)a1, (a2 + 15) >> 4, 0, v7 + 1, a5, a6);
  if ( v7 )
  {
    for ( i = 1; ; ++i )
    {
      v10 = (_QWORD *)(a1[9] + 8 * i);
      *v10 = operator new(0x200u);
      result = i + 1;
      if ( i == v7 )
        break;
    }
  }
  return result;
}
