__int64 __fastcall sub_A28A10(__int64 a1, __int64 a2)
{
  sub_A28120(a1, a2);
  sub_A0AB90((__m128i *)(a1 + 72), (__m128i *)(a2 + 72));
  sub_A0AB90((__m128i *)(a1 + 112), (__m128i *)(a2 + 112));
  return a1;
}
