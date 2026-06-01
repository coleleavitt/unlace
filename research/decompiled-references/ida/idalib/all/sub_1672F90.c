__m128i *__fastcall sub_1672F90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // rbx
  __m128i v8[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+20h] [rbp-28h]

  memset(v8, 0, sizeof(v8));
  v9 = v9 & 0xFF000000 | 0x101A4;
  HIBYTE(v9) &= 0xFCu;
  v6 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(*(_QWORD *)a1 + 248LL) + 2352LL), 40, 3u, a4, a5, a6);
  sub_B0D9D0(v6, *(_QWORD *)(*(_QWORD *)a1 + 248LL), v8);
  return v6;
}
