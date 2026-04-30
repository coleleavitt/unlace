__int64 __fastcall sub_21E360(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx

  v6 = a1[9];
  if ( 16 * ((v6 == 0) + ((v6 - a1[5]) >> 3) - 1) + ((__int64)(a1[4] - a1[2]) >> 5) + ((__int64)(a1[6] - a1[7]) >> 5) == 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( (unsigned __int64)(a1[1] - ((v6 - *a1) >> 3)) <= 1 )
  {
    sub_21DCE0((__int64)a1, 1u, 0, a4, a5, a6);
    v6 = a1[9];
  }
  *(_QWORD *)(v6 + 8) = operator new(0x200u);
  sub_20DD80(a1[6], a2);
  v7 = (__int64 *)(a1[9] + 8LL);
  a1[9] = v7;
  result = *v7;
  v9 = *v7 + 512;
  a1[7] = result;
  a1[8] = v9;
  a1[6] = result;
  return result;
}
