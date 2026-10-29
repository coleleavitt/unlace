__int64 __fastcall sub_9CCA80(__int64 a1, __int64 a2, __int64 a3)
{
  const __m128i *v3; // rcx
  unsigned __int64 v4; // r8
  __int64 v5; // rsi
  __int8 v6; // di
  const __m128i *v7; // rdi

  if ( a1 == a2 )
    return a3;
  v3 = (const __m128i *)(a1 + 40);
  v4 = ((unsigned __int64)(a2 - 64 - a1) >> 6) + 1;
  v5 = a3;
  do
  {
    *(_QWORD *)v5 = v3[-3].m128i_i64[1];
    *(_DWORD *)(v5 + 8) = v3[-2].m128i_i32[0];
    *(_QWORD *)(v5 + 12) = *(__int64 *)((char *)v3[-2].m128i_i64 + 4);
    *(_DWORD *)(v5 + 20) = v3[-2].m128i_i32[3];
    *(_QWORD *)(v5 + 24) = v5 + 40;
    v7 = (const __m128i *)v3[-1].m128i_i64[0];
    if ( v7 == v3 )
    {
      *(__m128i *)(v5 + 40) = _mm_loadu_si128(v3);
    }
    else
    {
      *(_QWORD *)(v5 + 24) = v7;
      *(_QWORD *)(v5 + 40) = v3->m128i_i64[0];
    }
    v5 += 64;
    *(_QWORD *)(v5 - 32) = v3[-1].m128i_i64[1];
    v6 = v3[1].m128i_i8[0];
    v3[-1].m128i_i64[0] = (__int64)v3;
    v3 += 4;
    v3[-5].m128i_i64[1] = 0;
    v3[-4].m128i_i8[0] = 0;
    *(_BYTE *)(v5 - 8) = v6;
  }
  while ( v5 != a3 + (v4 << 6) );
  return a3 + (v4 << 6);
}

