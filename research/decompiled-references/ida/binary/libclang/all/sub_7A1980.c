__int64 __fastcall sub_7A1980(__int64 a1)
{
  __m128i v2; // [rsp+0h] [rbp-18h] BYREF

  v2 = _mm_unpacklo_epi64(
         _mm_loadl_epi64((const __m128i *)*(_QWORD *)(a1 + 64)),
         (__m128i)(unsigned __int64)(*(_QWORD *)(a1 + 64) + 8LL));
  return (sub_B1E800(&v2) << 32) | *(unsigned int *)(a1 + 56);
}

