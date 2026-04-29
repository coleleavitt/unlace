__int64 *__fastcall sub_FFE0(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  __int64 v16; // rax
  __m128i v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v8 = _mm_loadu_si128(a3);
  v17 = v8;
  v18 = a3[1].m128i_i64[0];
  v9 = *a1;
  if ( v9 )
  {
    a1[1] = 0;
    qfree(v9, a2, a3, *(double *)v8.m128i_i64);
    *a1 = 0;
    a1[2] = 0;
  }
  v10 = (int)qvsnprintf(0, 0, a2, a3, a5, a6, v17.m128i_i64[0], v17.m128i_i64[1], v18, v19);
  if ( (_DWORD)v10 )
  {
    v13 = *a1;
    v14 = (int)v10 + 1LL;
    if ( a1[2] < v14 )
    {
      v16 = qvector_reserve(a1, *a1, v10 + 1, 1, v11, v12);
      *a1 = v16;
      v13 = v16;
    }
    a1[1] = v14;
    ((void (__fastcall *)(__int64, unsigned __int64, __int64, __m128i *, __int64, __int64))qvsnprintf)(
      v13,
      v14,
      a2,
      &v17,
      v11,
      v12);
  }
  return a1;
}
