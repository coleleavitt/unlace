unsigned __int64 *__fastcall sub_9A2F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128d v10; // xmm0
  __m128d v12; // [rsp+0h] [rbp-48h] BYREF
  int v13; // [rsp+10h] [rbp-38h]

  if ( !*(_DWORD *)(a2 + 80) )
    return sub_9A23B0((__m128i *)a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    v7 = *(_BYTE *)(a1 + 320) == 0;
    *(_QWORD *)(a1 + 24) = v6;
    if ( !v7 )
      return nullptr;
  }
  v8 = sub_999AE0(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(v8 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  v9 = *(_QWORD *)(a1 + 128);
  LODWORD(v8) = *(_DWORD *)(a1 + 136);
  v12.m128d_f64[0] = *(double *)(a1 + 16);
  *(_QWORD *)&v12.m128d_f64[1] = v9;
  v13 = v8;
  sub_994520((__m128i **)(a1 + 168), (const __m128i *)&v12);
  v10 = _mm_shuffle_pd(
          (__m128d)_mm_loadu_si128((const __m128i *)(a1 + 24)),
          (__m128d)_mm_loadu_si128((const __m128i *)(a1 + 120)),
          2);
  v13 = *(_DWORD *)(a1 + 136);
  v12 = v10;
  sub_994520((__m128i **)(a1 + 168), (const __m128i *)&v12);
  return sub_9A21F0((__m128i *)a1, (__int16 *)a2);
}
