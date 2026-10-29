__int64 __fastcall sub_160AB70(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 *v9; // r13

  v3 = a1[5];
  result = 32 * (((a1[9] - v3) >> 3) - 1) + ((__int64)(a1[6] - a1[7]) >> 4) + ((__int64)(a1[4] - a1[2]) >> 4);
  if ( 0xFFFFFFFFFFFFFFFLL - result < a2 )
    std::__throw_length_error("deque::_M_new_elements_at_front");
  v5 = (a2 + 31) >> 5;
  if ( v5 > (v3 - *a1) >> 3 )
    result = sub_160A9F0((__int64)a1, (a2 + 31) >> 5, 1);
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
