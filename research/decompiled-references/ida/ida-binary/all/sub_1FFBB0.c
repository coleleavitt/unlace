unsigned __int64 __fastcall sub_1FFBB0(
        __int64 a1,
        __m128i *a2,
        unsigned __int8 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 *v12; // rdi
  __int64 v15; // rax

  v12 = (__int64 *)qword_8CB508;
  if ( !qword_8CB508 )
  {
    v15 = operator new(0x18u);
    a4 = 0;
    *(_QWORD *)v15 = 0;
    v12 = (__int64 *)v15;
    qword_8CB508 = v15;
    *(_OWORD *)(v15 + 8) = 0;
  }
  return sub_1FEEB0(v12, *(__m128i **)(a1 + 96), a2, 0, a4, a5, a6, a7, a8, a9, a10, a11, 0, a3);
}
