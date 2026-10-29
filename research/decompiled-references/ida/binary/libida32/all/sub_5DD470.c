__int64 __fastcall sub_5DD470(_QWORD *a1, __m128i a2, double a3)
{
  int v3; // eax

  if ( !sub_5DD360((__int64)a1, a1[14], 4, 0, a2, a3) )
    return 0xFFFFFFFFLL;
  v3 = sub_5D89D0((__int64)a1, a1[14], 0);
  if ( v3 == -1 )
    return 0xFFFFFFFFLL;
  sub_5D10F0(a1, v3);
  return 0;
}

