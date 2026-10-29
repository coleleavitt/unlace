_QWORD *__fastcall sub_7EFF40(const __m128i *a1, double a2, __m128 a3)
{
  __int64 v3; // rdx
  __m128i v4; // xmm0
  _QWORD *v5; // rcx
  _QWORD *v6; // xmm1_8
  _QWORD *result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __m128i *v11; // rcx

  v3 = a1[1].m128i_i64[0];
  v4 = _mm_loadu_si128(a1 + 1);
  v5 = *(_QWORD **)(v3 + 48);
  v6 = (_QWORD *)_mm_movehl_ps(a3, (__m128)v4).m128_u64[0];
  result = v6;
  if ( v5 )
  {
    if ( v5 != v6 )
    {
      v8 = *v6;
      v9 = (_QWORD *)v6[1];
      *v9 = *v6;
      *(_QWORD *)(v8 + 8) = v9;
      **(_QWORD **)(*(_QWORD *)(v3 + 48) + 8LL) = v6;
      v6[1] = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 8LL);
      v10 = *(_QWORD *)(v3 + 48);
      *v6 = v10;
      *(_QWORD *)(v10 + 8) = v6;
      *(_QWORD *)(v3 + 48) = v6;
    }
  }
  else
  {
    v11 = (__m128i *)a1[1].m128i_i64[1];
    *(_QWORD *)(v3 + 48) = v6;
    *v11 = _mm_unpackhi_epi64(v4, v4);
  }
  return result;
}

