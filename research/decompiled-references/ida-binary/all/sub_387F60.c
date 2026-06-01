__int128 *__fastcall sub_387F60(
        const char *a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8

  if ( (*(_BYTE *)(get_ph(a1, a2) + 8) & 1) == 0 )
    return nullptr;
  if ( !(_BYTE)byte_8CF2B8 )
  {
    if ( __cxa_guard_acquire(&byte_8CF2B8) )
    {
      a3 = 0;
      xmmword_8CF2C0 = 0;
      __cxa_guard_release(&byte_8CF2B8);
    }
  }
  if ( (unsigned __int8)sub_387400(
                          (__int64)&xmmword_8CF2C0,
                          (_BYTE *)&dword_0 + 1,
                          a1,
                          -1,
                          a3,
                          a4,
                          a5,
                          a6,
                          v10,
                          v11,
                          a9,
                          a10) )
    return &xmmword_8CF2C0;
  else
    return nullptr;
}
