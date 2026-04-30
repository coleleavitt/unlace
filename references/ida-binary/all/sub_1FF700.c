unsigned __int64 __fastcall sub_1FF700(
        __int64 a1,
        __m128i *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128i *v11; // rdx
  __int64 *v12; // rdi
  __int64 v14; // rax

  v11 = a2;
  v12 = (__int64 *)qword_8CB508;
  if ( !qword_8CB508 )
  {
    v14 = operator new(0x18u);
    a3 = 0;
    v11 = a2;
    *(_QWORD *)v14 = 0;
    v12 = (__int64 *)v14;
    qword_8CB508 = v14;
    *(_OWORD *)(v14 + 8) = 0;
  }
  return sub_1FEEB0(v12, *(__m128i **)(a1 + 96), v11, 1, a3, a4, a5, a6, a7, a8, a9, a10, 0, 0);
}
