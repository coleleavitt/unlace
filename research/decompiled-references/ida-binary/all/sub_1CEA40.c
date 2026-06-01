unsigned __int64 __fastcall sub_1CEA40(
        const __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        double a5,
        __m128 a6)
{
  __int32 v7; // ebp
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v7 = a4;
  if ( a1->m128i_i32[2] != (_DWORD)a2 )
    sub_1CD1B0((__int64)a1, a2, (__int64)a3, a4, a5);
  sub_1CE9C0((__m128i *)ptr, a3, a5, a6);
  v8 = _mm_loadu_si128(a1 + 1);
  v9 = a1[2].m128i_i64[0];
  v10 = v13;
  a1[1] = _mm_load_si128((const __m128i *)ptr);
  a1[2].m128i_i64[0] = v10;
  v13 = v9;
  *(__m128i *)ptr = v8;
  if ( v8.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v8.m128i_i64[0], 1u) )
    free(ptr[0]);
  a1[2].m128i_i32[2] = v7;
  return v14 - __readfsqword(0x28u);
}
