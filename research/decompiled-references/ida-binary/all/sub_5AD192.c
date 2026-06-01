bool __fastcall sub_5AD192(__int64 *a1, unsigned __int64 a2)
{
  bool result; // al
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]

  if ( a2 > sub_5AC25E((__int64)a1) )
    std::__throw_length_error("vector::reserve");
  result = a2 > sub_5AD590(a1);
  if ( result )
  {
    v7 = sub_5AC280((__int64)a1);
    v3 = sub_5AC2D1(a1[4]);
    v4 = sub_5AC2D1(a1[3]);
    v6 = sub_5AD5B8(a1, a2, v4, v3);
    v5 = sub_5AC150((__int64)a1);
    sub_5AC1E2(a1[3], a1[4], v5);
    sub_5AC228((__int64)a1, a1[3], (a1[5] - a1[3]) >> 4);
    a1[3] = v6;
    a1[4] = v6 + 16 * v7;
    a1[5] = a1[3] + 16 * a2;
    return (char)a1;
  }
  return result;
}
