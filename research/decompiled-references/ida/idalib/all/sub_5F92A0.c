__int64 __fastcall sub_5F92A0(_QWORD *a1, __m128i a2, double a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  if ( sub_5E95A0((__int64)a1, a1[15]) )
    return set_qerrno(1694);
  if ( !sub_5F9220((__int64)a1, a1[15], 4, 0, a2, a3) )
    return 0xFFFFFFFFLL;
  sub_5ECE50((__int64)a1);
  v5 = a1[16];
  if ( !v5 )
  {
    v5 = a1[17];
    if ( !v5 )
      v5 = a1[14];
  }
  if ( *(_QWORD *)(v5 + 32) )
    return set_qerrno(1696);
  *(_QWORD *)(v5 + 32) = v4;
  return 0;
}
