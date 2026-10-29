__int64 __fastcall move_idcv(__m128i *a1, __m128i *a2)
{
  __m128i *v2; // rbx
  __int64 v3; // rax
  __m128i v5; // xmm0

  if ( a1 == a2 )
    return 0;
  v2 = a1;
  if ( a1->m128i_i8[0] == 10 )
  {
    v2 = (__m128i *)deref_idcv(a1, 1);
    if ( !v2 )
      return get_qerrno(a1);
  }
  free_idcv(v2);
  v3 = a2->m128i_u8[0];
  v2->m128i_i8[0] = v3;
  switch ( v3 )
  {
    case 2LL:
    case 5LL:
    case 8LL:
    case 9LL:
      v2->m128i_i64[1] = a2->m128i_i64[1];
      break;
    case 3LL:
    case 10LL:
      *(__m128i *)((char *)v2 + 8) = _mm_loadu_si128((const __m128i *)&a2->m128i_u64[1]);
      break;
    case 6LL:
      v2->m128i_i32[2] = a2->m128i_i32[2];
      break;
    case 7LL:
      v5 = _mm_loadu_si128(v2 + 1);
      v2->m128i_i64[1] = a2->m128i_i64[1];
      v2[1].m128i_i64[0] = a2[1].m128i_i64[0];
      v2[1].m128i_i64[1] = a2[1].m128i_i64[1];
      a2[1] = v5;
      break;
    default:
      if ( !under_debugger )
        interr(282);
      BUG();
  }
  a2->m128i_i8[0] = 2;
  a2->m128i_i64[1] = 0;
  return 0;
}
