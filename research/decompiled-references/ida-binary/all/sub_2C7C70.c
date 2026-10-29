void __fastcall sub_2C7C70(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  void *v6; // rbp
  __m128i si128; // xmm0
  __int64 v8; // rdi
  size_t v9; // r13
  void *v10; // rax
  __m128i v11[3]; // [rsp+0h] [rbp-38h] BYREF

  nullsub_8();
  if ( (a2[112] & 8) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 200);
    v6 = nullptr;
    si128 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    if ( v5 )
    {
      v11[0] = si128;
      v9 = 20 * v5;
      v10 = (void *)qalloc_or_throw(20 * v5);
      a2 = *(_BYTE **)(a1 + 192);
      v6 = v10;
      memcpy(v10, a2, v9);
      si128 = _mm_load_si128(v11);
    }
    v8 = *(_QWORD *)(a4 + 32);
    if ( v8 )
    {
      *(_QWORD *)(a4 + 40) = 0;
      v11[0] = si128;
      qfree(v8, a2);
      si128 = _mm_load_si128(v11);
    }
    *(_QWORD *)(a4 + 32) = v6;
    *(_BYTE *)(a4 + 56) = 1;
    *(__m128i *)(a4 + 40) = si128;
  }
}
