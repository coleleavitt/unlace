unsigned __int64 __fastcall sub_7FC00(__int64 a1, __int64 *a2)
{
  __int64 v3; // r13
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  char v6; // cl
  __m128i v7; // xmm0
  const __m128i *v8; // r15
  __int64 v9; // r14
  __m128i v10; // xmm0
  unsigned __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rax
  char v14; // [rsp+7h] [rbp-41h]

  v3 = *(_QWORD *)(a1 + 8);
  result = sub_7F320(a2, v3);
  if ( v3 )
  {
    v5 = *a2;
    v6 = **(_QWORD **)a1 == 0;
    v7 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)a1 + 16 * (v3 - 1)));
    result = a2[1];
    if ( _mm_add_epi64(v7, _mm_srli_si128(v7, 8)).m128i_u64[0] == -1 )
      v6 |= 2u;
    v14 = v6;
    if ( a2[2] < result + 1 )
    {
      v13 = qvector_reserve(a2, v5, result + 1, 1);
      *a2 = v13;
      v5 = v13;
      result = a2[1];
    }
    *(_BYTE *)(v5 + result) = v14;
    ++a2[1];
    v8 = *(const __m128i **)a1;
    if ( (v14 & 1) == 0 )
    {
      v9 = 0;
      result = sub_7F5B0(a2, v8->m128i_i64[0] - a2[5]);
      goto LABEL_14;
    }
    if ( v3 != 1 || (v14 & 2) == 0 )
    {
      v12 = _mm_loadu_si128(v8);
      v9 = 0;
      v11 = _mm_add_epi64(v12, _mm_srli_si128(v12, 8)).m128i_u64[0];
      result = sub_7F5B0(a2, v11 - a2[5]);
      while ( v3 != ++v9 )
      {
        v8 = (const __m128i *)(*(_QWORD *)a1 + 16 * v9);
        result = sub_7F380(a2, v8->m128i_i64[0] - v11);
LABEL_14:
        if ( v3 - 1 == v9 && (v14 & 2) != 0 )
          break;
        result = sub_7F380(a2, v8->m128i_i64[1]);
        v10 = _mm_loadu_si128(v8);
        v11 = _mm_add_epi64(v10, _mm_srli_si128(v10, 8)).m128i_u64[0];
      }
    }
  }
  return result;
}
