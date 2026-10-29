__int64 __fastcall sub_1237D10(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 *v9; // r13

  v3 = a1[5];
  result = ((((a1[9] - v3) >> 3) - 1) << 6) + ((__int64)(a1[6] - a1[7]) >> 3) + ((__int64)(a1[4] - a1[2]) >> 3);
  if ( 0x1FFFFFFFFFFFFFFFLL - result < a2 )
    std::__throw_length_error("deque::_M_new_elements_at_front");
  v5 = (a2 + 63) >> 6;
  if ( v5 > (v3 - *a1) >> 3 )
    result = sub_1237B90((__int64)a1, (a2 + 63) >> 6, 1);
  if ( v5 )
  {
    v6 = -8;
    v7 = 8 * ~v5;
    do
    {
      v8 = a1[5];
      result = operator new(0x200u);
      v9 = (__int64 *)(v6 + v8);
      v6 -= 8;
      *v9 = result;
    }
    while ( v7 != v6 );
  }
  return result;
}
