__int64 __fastcall sub_5F9330(_QWORD *a1, __m128i a2, double a3)
{
  int v3; // eax

  if ( !sub_5F9220((__int64)a1, a1[15], 4, 0, a2, a3) )
    return 0xFFFFFFFFLL;
  v3 = sub_5F4860((__int64)a1, a1[15], 0);
  if ( v3 == -1 )
    return 0xFFFFFFFFLL;
  sub_5ECF10(a1, v3);
  return 0;
}
