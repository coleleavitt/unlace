__int64 __fastcall sub_1E9310(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v5 + 80 * v3;
  if ( v5 == v6 )
    return 0;
  while ( (*(_BYTE *)(v5 + 72) & 4) != 0 )
  {
    v5 += 80;
    if ( v6 == v5 )
      return 0;
  }
  if ( v5 )
    return sub_1E90E0(a1, v5, a2, a3);
  else
    return 0;
}
