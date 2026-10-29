__int64 __fastcall sub_5DF440(__int64 a1, __m128i a2, double a3)
{
  int v3; // ebp
  const __m128i *v4; // rsi

  v3 = *(_DWORD *)(a1 + 208);
  sub_5DEFC0(a1, a2, a3);
  v4 = *(const __m128i **)(a1 + 104);
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 208) = v3;
  *(_QWORD *)(a1 + 104) = sub_5D5940(a1, v4);
  sub_5C6100(a1);
  return 0;
}

