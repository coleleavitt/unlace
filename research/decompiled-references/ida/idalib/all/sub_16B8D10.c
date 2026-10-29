__int64 __fastcall sub_16B8D10(__m128i *a1, __m128i *a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __m128i *v8; // r15

  v6 = (__int64)(0xCCCCCCCCCCCCCCCDLL * (a2 - a1) + 1) / 2;
  v7 = 80 * v6;
  v8 = &a1[5 * v6];
  if ( v6 <= a4 )
  {
    sub_16B78C0(a1, &a1[5 * v6], a3);
    sub_16B78C0(v8, a2, a3);
  }
  else
  {
    sub_16B8D10(a1, &a1[5 * v6], a3);
    sub_16B8D10(v8, a2, a3);
  }
  return sub_16B8330((__int64)a1, v8, a2, 0xCCCCCCCCCCCCCCCDLL * (v7 >> 4), 0xCCCCCCCCCCCCCCCDLL * (a2 - v8), a3, a4);
}
