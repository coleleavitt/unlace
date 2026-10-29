__int64 __fastcall sub_21DED0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  _QWORD *v10; // r13

  result = a1[5];
  v7 = 0x3FFFFFFFFFFFFFFLL
     - (16 * ((a1[9] == 0) + ((a1[9] - result) >> 3) - 1)
      + ((__int64)(a1[4] - a1[2]) >> 5)
      + ((__int64)(a1[6] - a1[7]) >> 5));
  if ( v7 < a2 )
    std::__throw_length_error("deque::_M_new_elements_at_front");
  v8 = (a2 + 15) >> 4;
  if ( (result - *a1) >> 3 < v8 )
  {
    sub_21DCE0((__int64)a1, v8, 1u, v7, a5, a6);
    result = a1[5];
  }
  else if ( !v8 )
  {
    return result;
  }
  v9 = 1;
  while ( 1 )
  {
    v10 = (_QWORD *)(result - 8 * v9);
    result = operator new(0x200u);
    ++v9;
    *v10 = result;
    if ( v8 < v9 )
      break;
    result = a1[5];
  }
  return result;
}
