__int64 __fastcall sub_AE270(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 *v5; // r13

  result = a1[5];
  if ( 0x3FFFFFFFFFFFFFFLL
     - (16 * ((unsigned __int64)(a1[9] == 0) + ((a1[9] - result) >> 3) - 1)
      + ((__int64)(a1[4] - a1[2]) >> 5)
      + ((__int64)(a1[6] - a1[7]) >> 5)) < a2 )
    std::__throw_length_error("deque::_M_new_elements_at_front");
  v3 = (a2 + 15) >> 4;
  if ( (result - *a1) >> 3 < v3 )
  {
    sub_AE080((__int64)a1, v3, 1);
    result = a1[5];
  }
  else if ( !v3 )
  {
    return result;
  }
  v4 = 1;
  while ( 1 )
  {
    v5 = (__int64 *)(result - 8 * v4);
    result = operator new(0x200u);
    ++v4;
    *v5 = result;
    if ( v3 < v4 )
      break;
    result = a1[5];
  }
  return result;
}

