__int64 __fastcall sub_42B8D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 v6; // rax

  v2 = a1[5];
  v4 = a1[4];
  if ( !v2 || *(_QWORD *)(v4 + 8 * v2 - 8) != a2 )
  {
    if ( a1[6] < (unsigned __int64)(v2 + 1) )
    {
      v6 = qvector_reserve(a1 + 4, v4, v2 + 1, 8);
      a1[4] = v6;
      v4 = v6;
      v2 = a1[5];
    }
    *(_QWORD *)(v4 + 8 * v2) = a2;
    ++a1[5];
  }
  return 0;
}
