__int64 __fastcall sub_B0CA0(
        const void *a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8,
        int a9,
        __int128 a10,
        __int64 a11)
{
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // r9
  _BYTE v17[216]; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v18; // [rsp+D8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  memset(v17, 0, sizeof(v17));
  sub_A9D10((__int64)v17, 0);
  v13 = _mm_loadu_si128((const __m128i *)&a7);
  v14 = _mm_loadu_si128((const __m128i *)&a10);
  *(_QWORD *)&v17[20] = a8;
  *(__m128i *)&v17[4] = v13;
  *(_DWORD *)&v17[28] = a9;
  *(__m128i *)&v17[152] = v14;
  *(_QWORD *)&v17[168] = a11;
  return sub_B0710(
           a1,
           a2,
           a3,
           a4,
           (const __m128i *)v17,
           v15,
           (__int64 (__fastcall *)(__int64, size_t))a10,
           *((__int64 *)&a10 + 1),
           a11);
}

