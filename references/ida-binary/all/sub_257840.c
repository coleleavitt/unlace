__int64 __fastcall sub_257840(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // r12

  v10 = &s1;
  if ( *(_QWORD *)(a1 + 16) )
    v10 = *(const char **)(a1 + 8);
  if ( (*(_BYTE *)(dbg + 37) & 0x20) != 0 && (unsigned __int8)sub_257390(0, a3, a4, a5, a6, a7, a8, a9, a10) )
  {
    *(_QWORD *)(a2 + 8) = (int)sub_22FDB0(dbg, 40, v10);
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
