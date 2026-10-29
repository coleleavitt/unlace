__int64 __fastcall sub_5DD3E0(_QWORD *a1, __m128i a2, double a3)
{
  __int64 v3; // rsi
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rax

  v3 = a1[14];
  if ( sub_5CD7B0((__int64)a1, v3) )
    return set_qerrno(1694, v3);
  v5 = a1[14];
  if ( !sub_5DD360((__int64)a1, v5, 4, 0, a2, a3) )
    return 0xFFFFFFFFLL;
  sub_5D1040((__int64)a1);
  v7 = a1[15];
  if ( !v7 )
  {
    v7 = a1[16];
    if ( !v7 )
      v7 = a1[13];
  }
  if ( *(_QWORD *)(v7 + 32) )
    return set_qerrno(1696, v5);
  *(_QWORD *)(v7 + 32) = v6;
  return 0;
}

