bool __fastcall sub_59C596(_QWORD *a1, unsigned __int64 a2)
{
  bool result; // al
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]

  if ( a2 > sub_59D22C(a1) )
    std::__throw_length_error("vector::reserve");
  result = a2 > sub_59D24E(a1);
  if ( result )
  {
    v7 = sub_5986F2((__int64)a1);
    v3 = sub_59D275(a1[4]);
    v4 = sub_59D275(a1[3]);
    v6 = sub_59D29A(a1, a2, v4, v3);
    v5 = sub_59C726(a1);
    sub_59C734(a1[3], a1[4], v5);
    sub_59D332(a1, a1[3], (__int64)(a1[5] - a1[3]) >> 3);
    a1[3] = v6;
    a1[4] = v6 + 8 * v7;
    a1[5] = a1[3] + 8 * a2;
    return (char)a1;
  }
  return result;
}
