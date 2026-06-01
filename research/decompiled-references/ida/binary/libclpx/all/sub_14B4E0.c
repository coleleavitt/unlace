const __m128i *__fastcall sub_14B4E0(__int64 a1, int *a2, __m128i *a3)
{
  const __m128i *result; // rax
  const __m128i *v4; // rbx
  __int32 v5; // ecx
  __int64 v6; // r12
  size_t v7; // r13

  result = (const __m128i *)(*(_QWORD *)(a1 + 16) + *a2);
  switch ( a2[1] )
  {
    case 1:
    case 4:
      v4 = (const __m128i *)((char *)result + 24);
      v5 = result[1].m128i_i32[1];
      *a3 = _mm_loadu_si128(result);
      a3[1].m128i_i64[0] = result[1].m128i_i64[0];
      goto LABEL_5;
    case 2:
      *a3 = _mm_loadu_si128(result);
      a3[1] = _mm_loadu_si128(result + 1);
      a3[2] = _mm_loadu_si128(result + 2);
      a3[3] = _mm_loadu_si128(result + 3);
      a3[4] = _mm_loadu_si128(result + 4);
      return result;
    case 8:
    case 9:
      v4 = result + 4;
      v5 = result[1].m128i_i32[1];
      *a3 = _mm_loadu_si128(result);
      a3[1] = _mm_loadu_si128(result + 1);
      a3[2] = _mm_loadu_si128(result + 2);
      a3[3] = _mm_loadu_si128(result + 3);
      goto LABEL_5;
    case 11:
      v4 = result + 2;
      v5 = result[1].m128i_i32[3];
      *a3 = _mm_loadu_si128(result);
      a3[1] = _mm_loadu_si128(result + 1);
      goto LABEL_5;
    case 13:
      *a3 = _mm_loadu_si128(result);
      result = (const __m128i *)result[1].m128i_i64[0];
      a3[1].m128i_i64[0] = (__int64)result;
      return result;
    case 14:
      v4 = result + 5;
      v5 = result[4].m128i_i32[2];
      *a3 = _mm_loadu_si128(result);
      a3[1] = _mm_loadu_si128(result + 1);
      a3[2] = _mm_loadu_si128(result + 2);
      a3[3] = _mm_loadu_si128(result + 3);
      a3[4] = _mm_loadu_si128(result + 4);
LABEL_5:
      if ( v5 )
      {
        v6 = v5;
        v7 = 4LL * v5;
        memcpy(*(void **)(a1 + 8), v4, v7);
        result = (const __m128i *)memcpy(*(void **)a1, &v4->m128i_i8[v7], 8 * v6);
      }
      break;
    default:
      return result;
  }
  return result;
}

