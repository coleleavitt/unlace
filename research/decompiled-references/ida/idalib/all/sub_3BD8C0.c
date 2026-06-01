__int64 __fastcall sub_3BD8C0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  const __m128i *range; // rax
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax

  v4 = *(_QWORD *)(a2 + 1672);
  range = (const __m128i *)rangeset_t_find_range(v4 + 1120, a3);
  if ( range )
  {
    if ( a1 )
      *a1 = _mm_loadu_si128(range);
    return 1;
  }
  else
  {
    v7 = *(_QWORD *)(v4 + 1016);
    v8 = sub_8B8E80(v7, a3);
    result = 0xFFFFFFFFLL;
    if ( v8 )
    {
      v9 = **(_QWORD **)(v7 + 56);
      if ( v9 != -1 )
      {
        if ( a1 )
        {
          a1->m128i_i64[0] = v9;
          v10 = *(_QWORD *)(v4 + 1016);
          v11 = sub_8B8E80(v10, v9);
          if ( v11 )
            v11 = *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8LL);
          a1->m128i_i64[1] = v11;
        }
        return 0;
      }
    }
  }
  return result;
}
