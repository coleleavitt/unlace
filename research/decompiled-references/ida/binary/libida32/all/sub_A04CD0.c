__int64 __fastcall sub_A04CD0(__int64 a1, __int64 a2)
{
  sub_A043E0(a1, a2);
  sub_9E6E50((__m128i *)(a1 + 72), (__m128i *)(a2 + 72));
  sub_9E6E50((__m128i *)(a1 + 112), (__m128i *)(a2 + 112));
  return a1;
}

