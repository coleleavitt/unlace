__int64 __fastcall sub_1614D0(__int64 *a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  if ( *a2 == 14 || *a2 == 4 )
    return 0;
  if ( !sub_11F4A0(a2, a1[6], 0) )
    return 0xFFFFFFFFLL;
  v4 = a1[8];
  v5 = a1[7];
  if ( a1[9] < (unsigned __int64)(v4 + 1) )
  {
    v6 = qvector_reserve(a1 + 7, v5, v4 + 1, 8);
    a1[7] = v6;
    v5 = v6;
    v4 = a1[8];
  }
  *(_QWORD *)(v5 + 8 * v4) = a2;
  ++a1[8];
  return 0;
}
