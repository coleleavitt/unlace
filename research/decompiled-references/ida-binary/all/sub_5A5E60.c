bool __fastcall sub_5A5E60(_QWORD *a1, unsigned __int64 a2)
{
  bool result; // al
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]

  if ( a2 > sub_5A6864(a1) )
    std::__throw_length_error("vector::reserve");
  result = a2 > sub_5A6886(a1);
  if ( result )
  {
    v7 = sub_5A6030(a1);
    v3 = sub_5A68A9(a1[4]);
    v4 = sub_5A68A9(a1[3]);
    v6 = sub_5A68CE(a1, a2, v4, v3);
    v5 = sub_5A5FDC(a1);
    sub_5A5FEA(a1[3], a1[4], v5);
    sub_5A6966(a1, a1[3], a1[5] - a1[3]);
    a1[3] = v6;
    a1[4] = v7 + v6;
    a1[5] = a2 + a1[3];
    return (char)a1;
  }
  return result;
}
