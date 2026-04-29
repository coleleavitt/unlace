__int64 __fastcall sub_80220(_QWORD *a1, __int16 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 v6; // rax

  v2 = a1[17];
  v4 = a1[16];
  if ( a1[18] < (unsigned __int64)(v2 + 1) )
  {
    v6 = qvector_reserve(a1 + 16, v4, v2 + 1, 2);
    a1[16] = v6;
    v4 = v6;
    v2 = a1[17];
  }
  *(_WORD *)(v4 + 2 * v2) = a2;
  ++a1[17];
  return 0;
}
