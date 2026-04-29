unsigned __int64 __fastcall sub_48A20(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__m128 *, __m128i *))
{
  signed __int64 v4; // r13

  if ( a2 - a1 <= 1456 )
    return sub_47AD0(a1, a2, a3);
  v4 = 8
     * (((0x4EC4EC4EC4EC4EC5LL * ((a2 - a1) >> 3)) >> 1)
      + 4
      * (((0x4EC4EC4EC4EC4EC5LL * ((a2 - a1) >> 3)) >> 1)
       + ((0x4EC4EC4EC4EC4EC5LL * ((a2 - a1) >> 3)) & 0xFFFFFFFFFFFFFFFELL)));
  sub_48A20(a1, a1 + v4, a3);
  sub_48A20(a1 + v4, a2, a3);
  return sub_484F0(
           a1,
           a1 + v4,
           a2,
           0x4EC4EC4EC4EC4EC5LL * (v4 >> 3),
           0x4EC4EC4EC4EC4EC5LL * ((a2 - (a1 + v4)) >> 3),
           (__int64)a3);
}
