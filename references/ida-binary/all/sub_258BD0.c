__int64 __fastcall sub_258BD0(
        const char *a1,
        const char *a2,
        __int64 *a3,
        const char *a4,
        const char *a5,
        const char *a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        unsigned int a15)
{
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 result; // rax

  if ( a1 )
    sub_258520(a1, "Path", 0);
  if ( a2 )
    sub_258520(a2, "Parameters", 0);
  if ( a3 )
    sub_234730(a3);
  if ( a4 )
    sub_258520(a4, "StartDir", 1);
  sub_258B10(a5, a6, a15);
  result = (unsigned int)dword_8CC5F0;
  if ( !dword_8CC5F0 )
  {
    result = dbg;
    if ( dbg )
    {
      if ( (*(_BYTE *)(dbg + 32) & 1) != 0 )
      {
        if ( byte_8CC5F6 )
          return sub_233440(a7, a8, a9, a10, v19, v20, a13, a14, (__int64)a5, a6);
      }
    }
  }
  return result;
}
