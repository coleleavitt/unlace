__int64 __fastcall dwarfstring_constructor_static(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  __m128i si128; // xmm0
  __m128i v5[2]; // [rsp+0h] [rbp-28h] BYREF

  v5[0] = _mm_unpacklo_epi64((__m128i)a3, (__m128i)a3);
  dwarfstring_constructor(a1);
  si128 = _mm_load_si128(v5);
  *(_QWORD *)a1 = a2;
  *a2 = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(__m128i *)(a1 + 8) = si128;
  return 1;
}

