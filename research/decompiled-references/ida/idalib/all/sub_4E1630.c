__int64 __fastcall sub_4E1630(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rax

  v4 = a3[1];
  v5 = *a3;
  if ( a3[2] < (unsigned __int64)(v4 + 1) )
  {
    v7 = qvector_reserve(a3, v5, v4 + 1, 8);
    *a3 = v7;
    v5 = v7;
    v4 = a3[1];
  }
  *(_QWORD *)(v5 + 8 * v4) = a1;
  ++a3[1];
  return 0;
}
