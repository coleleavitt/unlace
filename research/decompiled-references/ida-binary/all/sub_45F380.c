unsigned __int64 __fastcall sub_45F380(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned __int64 result; // rax

  if ( !a2 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
        return sub_3A3A20(a1);
    }
    else
    {
      return sub_3A3A40(a1, **(_QWORD **)(a4 + 8), a5, a6, a7, a8, a9, a10, a11, a12);
    }
  }
  return result;
}
