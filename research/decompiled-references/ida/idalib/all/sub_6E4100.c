__int64 __fastcall sub_6E4100(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v11; // rax

  v11 = *(_QWORD *)(a3 + 128);
  if ( v11 && (*(_BYTE *)(v11 + 10) & 0x20) != 0 )
    return sub_6E0240(a1, a2, a3);
  else
    return sub_6E3040(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
