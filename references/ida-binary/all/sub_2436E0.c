_BOOL8 __fastcall sub_2436E0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        char *a12)
{
  if ( !dbg )
    return 0;
  if ( dword_8CC5E8 )
  {
    byte_8CC5EC = 1;
    byte_8CC2A8 = 0;
    return 1;
  }
  else
  {
    return dword_8CC5F0 >= 0
        || (int)sub_243000(
                  *(_BYTE *)(a1 + 12),
                  nullptr,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9,
                  (unsigned int)dword_8CC5E8,
                  a12) > 0;
  }
}
