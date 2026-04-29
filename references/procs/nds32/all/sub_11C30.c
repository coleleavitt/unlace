__int64 *__fastcall sub_11C30(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  __int64 v16; // rax
  __int128 v17; // [rsp+0h] [rbp-48h] BYREF

  v7 = _mm_loadu_si128(a3);
  v8 = (int)qvsnprintf(0, 0, a2, a3, a5, a6, v7.m128i_i64[0], v7.m128i_i64[1], a3[1].m128i_i64[0], __readfsqword(0x28u));
  if ( (_DWORD)v8 )
  {
    v11 = (int)v8 + 1LL;
    v12 = *a1;
    v13 = (a1[1] == 0) + a1[1] - 1;
    v14 = (a1[1] == 0) + a1[1] + (int)v8;
    if ( a1[2] < v14 )
    {
      v16 = qvector_reserve(a1, v12, (a1[1] == 0) + a1[1] + v8, 1);
      *a1 = v16;
      v12 = v16;
    }
    a1[1] = v14;
    ((void (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64, __int64))qvsnprintf)(
      v12 + v13,
      v11,
      a2,
      &v17,
      v9,
      v10);
  }
  return a1;
}
