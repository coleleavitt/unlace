__int64 (__fastcall **__fastcall sub_2273D00(
        __int64 a1,
        __int64 ***a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6))()
{
  __int64 **v6; // rax
  __int64 *v7; // rax
  __m128i v8; // xmm0

  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = off_2BEBBC8;
  v6 = *a2;
  *(_QWORD *)(a1 + 24) = 0;
  v7 = *v6;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  v8 = _mm_loadl_epi64((const __m128i *)(sub_2273810(*v7, a2, a3, a4, a5, a6) + 8));
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64(v8, v8);
  *(_QWORD *)a1 = off_2BEBBE8;
  return off_2BEBBE8;
}
