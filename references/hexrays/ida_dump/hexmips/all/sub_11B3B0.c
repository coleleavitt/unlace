__int64 __fastcall sub_11B3B0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  *(__m128i *)(a2 + 8) = _mm_unpacklo_epi64(_mm_loadl_epi64(a1 + 4), (__m128i)(unsigned __int64)a1);
  v2 = a1[3].m128i_i64[0];
  if ( !v2 )
    return 0;
  v4 = a1[31].m128i_i64[0];
  v5 = a1[30].m128i_i64[1];
  while ( 1 )
  {
    if ( a1[31].m128i_i64[1] < (unsigned __int64)(v4 + 1) )
    {
      v8 = qvector_reserve(&a1[30].m128i_u64[1], v5, v4 + 1, 8);
      v4 = a1[31].m128i_i64[0];
      a1[30].m128i_i64[1] = v8;
      v5 = v8;
    }
    *(_QWORD *)(v5 + 8 * v4) = v2;
    ++a1[31].m128i_i64[0];
    *(_QWORD *)(a2 + 24) = v2;
    result = sub_11A700((_BYTE *)v2, a2);
    v7 = a1[31].m128i_i64[0];
    if ( (_DWORD)result )
      break;
    if ( !v7 || (v5 = a1[30].m128i_i64[1], v2 != *(_QWORD *)(v5 + 8 * v7 - 8)) )
    {
      if ( !under_debugger )
        sub_37E160(52515);
      goto LABEL_17;
    }
    v4 = v7 - 1;
    a1[31].m128i_i64[0] = v4;
    v2 = *(_QWORD *)(v2 + 8);
    if ( !v2 )
      return 0;
  }
  if ( !v7 || v2 != *(_QWORD *)(a1[30].m128i_i64[1] + 8 * v7 - 8) )
  {
    if ( !under_debugger )
      sub_37E160(52515);
LABEL_17:
    BUG();
  }
  a1[31].m128i_i64[0] = v7 - 1;
  return result;
}
