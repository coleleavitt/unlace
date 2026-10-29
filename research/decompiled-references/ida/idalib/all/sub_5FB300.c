__int64 __fastcall sub_5FB300(__int64 a1, __m128i a2, double a3)
{
  int v3; // ebp
  const __m128i *v4; // rsi

  v3 = *(_DWORD *)(a1 + 216);
  sub_5FAE80(a1, a2, a3);
  v4 = *(const __m128i **)(a1 + 112);
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 216) = v3;
  *(_QWORD *)(a1 + 112) = sub_5F1780(a1, v4);
  sub_5E1E00(a1);
  return 0;
}
