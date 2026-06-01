/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442230
// Address: 0x0000000000442230

//----- (0000000000442230) ----------------------------------------------------
__int64 __fastcall sub_442230(
        __m128i *a1,
        __m128i *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128i *v10; // rbx
  __int64 v11; // rax
  __m128i v13; // xmm0

  if ( a1 == a2 )
    return 0;
  v10 = a1;
  if ( a1->m128i_i8[0] == 10 )
  {
    v10 = (__m128i *)sub_4419D0((unsigned __int8 *)a1, 1, a3, a4, a5, a6, a7, a8, a9, a10);
    if ( !v10 )
      return sub_479E90();
  }
  sub_441540((__int64)v10, a3, a4, a5, a6, a7, a8, a9, a10);
  v11 = a2->m128i_u8[0];
  v10->m128i_i8[0] = v11;
  switch ( v11 )
  {
    case 2LL:
    case 5LL:
    case 8LL:
    case 9LL:
      v10->m128i_i64[1] = a2->m128i_i64[1];
      break;
    case 3LL:
    case 10LL:
      *(__m128i *)((char *)v10 + 8) = _mm_loadu_si128((const __m128i *)&a2->m128i_u64[1]);
      break;
    case 6LL:
      v10->m128i_i32[2] = a2->m128i_i32[2];
      break;
    case 7LL:
      v13 = _mm_loadu_si128(v10 + 1);
      *(__m128i *)((char *)v10 + 8) = *(__m128i *)((char *)a2 + 8);
      v10[1].m128i_i64[1] = a2[1].m128i_i64[1];
      a2[1] = v13;
      break;
    default:
      if ( !byte_4C94E1 )
        sub_481AC0(282);
      BUG();
  }
  a2->m128i_i8[0] = 2;
  a2->m128i_i64[1] = 0;
  return 0;
}
// 442249: variable 'a7' is possibly undefined
// 442249: variable 'a8' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
