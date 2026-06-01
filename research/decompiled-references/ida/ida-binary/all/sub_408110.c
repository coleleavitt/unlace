unsigned __int64 __fastcall sub_408110(const __m128i *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __m128i v5; // xmm0
  __int64 v6; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+10h] [rbp-18h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v1 = a1[9].m128i_i64[1];
  QT::QLineEdit::text((QT::QLineEdit *)ptr);
  v4 = v9;
  v5 = _mm_loadu_si128(a1 + 21);
  v6 = a1[22].m128i_i64[0];
  a1[21] = _mm_load_si128((const __m128i *)ptr);
  a1[22].m128i_i64[0] = v4;
  v9 = v6;
  *(__m128i *)ptr = v5;
  if ( v5.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v5.m128i_i64[0], 1u) )
    free(ptr[0]);
  return sub_407EE0((__int64)a1, v1, v6, v4, v2, v3);
}
