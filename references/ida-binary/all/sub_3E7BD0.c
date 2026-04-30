_BOOL8 __fastcall sub_3E7BD0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const char *a10)
{
  QT::QAbstractItemView *v10; // rbx
  __int64 v11; // rcx

  v10 = sub_3E77C0(-1, a10, a1, a2, a3, a4, a5, a6, a7, a8);
  sub_2DE3A0(a1, (__int64)v10, 4194308, nullptr, v11);
  return v10 != nullptr;
}
