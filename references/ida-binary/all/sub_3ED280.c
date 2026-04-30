__int64 __fastcall sub_3ED280(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  __int64 v13; // rbx
  __m128i v15; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v15 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v13 = qalloc_or_throw(280);
  if ( *(_QWORD *)(a1 + 8) == 16 )
    v15 = _mm_loadu_si128((const __m128i *)*(_QWORD *)a1);
  sub_3ECEF0(v13, &v15);
  sub_3EBDF0(v13);
  return sub_4A0300(*(void **)(v13 + 40), a7, a8, a9, a10, a11, a12, a13);
}
