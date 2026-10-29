unsigned __int64 __fastcall sub_1AF29B0(
        __int64 a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rdx

  v7 = 0;
  if ( a2 )
    v7 = (unsigned int)sub_C00A40(a2, a2, 0, a6, a7);
  return sub_19B4A30(a1, a2, v7, 0, 0, 0, a3, a4) & 0xFFFFFFFFFFFFFFFELL;
}
