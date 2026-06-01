bool __fastcall sub_59C35A(_QWORD *a1, unsigned __int64 a2)
{
  bool result; // al
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]

  if ( a2 > sub_59D08C(a1) )
    std::__throw_length_error("vector::reserve");
  result = a2 > sub_59D0AE(a1);
  if ( result )
  {
    v7 = sub_59BDEE((__int64)a1);
    v3 = sub_59D0D5(a1[4]);
    v4 = sub_59D0D5(a1[3]);
    v6 = sub_59D0FA(a1, a2, v4, v3);
    v5 = sub_59C4EA(a1);
    sub_59C4F8(a1[3], a1[4], v5);
    sub_59D192(a1, a1[3], (__int64)(a1[5] - a1[3]) >> 2);
    a1[3] = v6;
    a1[4] = v6 + 4 * v7;
    a1[5] = a1[3] + 4 * a2;
    return (char)a1;
  }
  return result;
}
