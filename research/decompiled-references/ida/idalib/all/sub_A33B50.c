void __fastcall sub_A33B50(const __m128i *a1, __int64 a2)
{
  __int8 v2; // al
  __m128i _0[7]; // [rsp+0h] [rbp+0h] BYREF
  char vars70; // [rsp+70h] [rbp+70h]

  sub_A0A1C0(_0, a1);
  vars70 = a1[7].m128i_i8[0] & 3 | vars70 & 0xFC;
  sub_A0B090((__int64)a1, a2);
  v2 = *(_BYTE *)(a2 + 112) & 1 | a1[7].m128i_i8[0] & 0xFE;
  a1[7].m128i_i8[0] = v2;
  a1[7].m128i_i8[0] = *(_BYTE *)(a2 + 112) & 2 | v2 & 0xFD;
  sub_A0B090(a2, (__int64)_0);
  *(_BYTE *)(a2 + 112) = vars70 & 3 | *(_BYTE *)(a2 + 112) & 0xFC;
  sub_A09CE0((__int64)_0);
}
