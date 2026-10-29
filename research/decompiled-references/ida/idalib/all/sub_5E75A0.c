__int64 __fastcall sub_5E75A0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // rax

  v1 = a1[56];
  v2 = a1[17];
  v3 = a1[55];
  if ( a1[57] < (unsigned __int64)(v1 + 1) )
  {
    v6 = qvector_reserve(a1 + 55, v3, v1 + 1, 8);
    a1[55] = v6;
    v3 = v6;
    v1 = a1[56];
  }
  *(_QWORD *)(v3 + 8 * v1) = v2;
  ++a1[56];
  v4 = sub_5E7430((__int64)a1);
  a1[17] = v4;
  *(_QWORD *)(v4 + 40) |= 0x800uLL;
  return 0;
}
