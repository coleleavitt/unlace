__m128i *__fastcall sub_8BAFD0(_QWORD *a1, __m128i *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rdx
  __m128i *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __m128i *v9; // rdx
  __int64 *v10; // rcx
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v5 = a2->m128i_u64[1];
  if ( v5 < a4 )
  {
    if ( !under_debugger )
      interr(591);
    BUG();
  }
  result = a2;
  if ( v5 == a4
    || (a2->m128i_i64[1] = a4,
        v8 = a2[1].m128i_i64[0] + 4 * (a4 - a2->m128i_i64[0]),
        v11 = _mm_unpacklo_epi64((__m128i)a4, (__m128i)v5),
        v12 = v8,
        v9 = sub_8B8CE0(a1, &v11),
        result = (__m128i *)((char *)v9 - 24),
        (__m128i *)a1[2] != v9) )
  {
    v7 = result->m128i_i64[0];
    if ( result->m128i_i64[0] == a3 )
      return result;
  }
  else
  {
    result = (__m128i *)a1[11];
    v7 = result->m128i_i64[0];
    if ( result->m128i_i64[0] == a3 )
      return result;
  }
  result->m128i_i64[0] = a3;
  v12 = result[1].m128i_i64[0];
  v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)a3);
  result = sub_8B8CE0(a1, &v11);
  v10 = (__int64 *)result;
  if ( (__m128i *)a1[11] != result )
    result = (__m128i *)((char *)result + 24);
  result[1].m128i_i64[0] = v10[2] + 4 * (v10[1] - *v10);
  return result;
}
