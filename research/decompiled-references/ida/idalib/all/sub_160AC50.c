unsigned __int64 __fastcall sub_160AC50(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned __int64 *v9; // r12

  v3 = a1[9];
  if ( 0xFFFFFFFFFFFFFFFLL
     - (32 * (((v3 - a1[5]) >> 3) - 1)
      + ((__int64)(a1[6] - a1[7]) >> 4)
      + ((__int64)(a1[4] - a1[2]) >> 4)) < a2 )
    std::__throw_length_error("deque::_M_new_elements_at_back");
  v4 = (a2 + 31) >> 5;
  result = a1[1] - ((v3 - *a1) >> 3);
  if ( v4 + 1 > result )
    result = sub_160A9F0((__int64)a1, (a2 + 31) >> 5, 0);
  if ( v4 )
  {
    v6 = 8 * (v4 + 1);
    v7 = 8;
    do
    {
      v8 = a1[9];
      result = operator new(0x200u);
      v9 = (unsigned __int64 *)(v7 + v8);
      v7 += 8;
      *v9 = result;
    }
    while ( v6 != v7 );
  }
  return result;
}
