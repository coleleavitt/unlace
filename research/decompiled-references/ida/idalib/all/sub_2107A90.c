unsigned __int64 __fastcall sub_2107A90(
        __int64 a1,
        const void *a2,
        size_t a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned int a9,
        __int64 a10)
{
  int v10; // r14d
  _QWORD *v12; // rbp
  unsigned __int64 v13; // rbx
  __int64 v14; // r13
  __m128i si128; // xmm0
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __m128i v21[4]; // [rsp+10h] [rbp-48h] BYREF

  v10 = a3;
  v21[0] = _mm_unpacklo_epi64(
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)),
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(a6)));
  v12 = (_QWORD *)sub_2107990(a1, a2, a3);
  sub_2123710(v12, 0);
  sub_2123760(v12, 3);
  v13 = sub_2105F40((__int64 *)(a1 + 576), 224, 3u);
  v14 = 4LL * a8;
  sub_2113B00(v13, 1, (_DWORD)a2, v10, (a5 >> 2) & 1, a4 == 8, (__int64)v12);
  si128 = _mm_load_si128(v21);
  *(_QWORD *)v13 = off_2BE8D50;
  *(__m128i *)(v13 + 172) = si128;
  *(_QWORD *)(v13 + 192) = v14 | a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v13 + 200) = a10;
  v16 = v14 & 0xFFFFFFFFFFFFFFF8LL | a7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v16 )
    ((void (__fastcall *)(unsigned __int64, __int64))sub_21237C0)(v16, 1);
  v17 = sub_2105F80(a1);
  *(_QWORD *)(v17 + 8) = v13;
  **(_QWORD **)(v13 + 8) = v17;
  *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) = v17;
  *v12 = v17;
  return v13;
}
