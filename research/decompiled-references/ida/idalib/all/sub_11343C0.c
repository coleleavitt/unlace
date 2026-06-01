char *__fastcall sub_11343C0(__int64 a1, const __m128i *a2, __m128i *a3)
{
  __int8 *v4; // r13
  __m128i *v5; // rcx
  __m128i *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r15
  __m128i *v12; // rdx

  v4 = &a2->m128i_i8[-*(_QWORD *)a1];
  v5 = *(__m128i **)(a1 + 8);
  if ( v5 == *(__m128i **)(a1 + 16) )
  {
    sub_A82970((void ***)a1, a2, a3);
  }
  else
  {
    v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
    if ( v5 == a2 )
    {
      v12 = (__m128i *)a3->m128i_i64[0];
      if ( v12 == &a3[1] )
      {
        v5[1] = _mm_loadu_si128(a3 + 1);
      }
      else
      {
        v5->m128i_i64[0] = (__int64)v12;
        v5[1].m128i_i64[0] = a3[1].m128i_i64[0];
      }
      v5->m128i_i64[1] = a3->m128i_i64[1];
      a3->m128i_i64[0] = (__int64)a3[1].m128i_i64;
      a3->m128i_i64[1] = 0;
      a3[1].m128i_i8[0] = 0;
      *(_QWORD *)(a1 + 8) += 32LL;
    }
    else
    {
      v6 = (__m128i *)v5[-2].m128i_i64[0];
      if ( v6 == &v5[-1] )
      {
        v5[1] = _mm_loadu_si128(v5 - 1);
      }
      else
      {
        v5->m128i_i64[0] = (__int64)v6;
        v5[1].m128i_i64[0] = v5[-1].m128i_i64[0];
      }
      v7 = v5[-2].m128i_i64[1];
      v5[-1].m128i_i8[0] = 0;
      v5[-2].m128i_i64[0] = (__int64)v5[-1].m128i_i64;
      v5->m128i_i64[1] = v7;
      v8 = *(_QWORD *)(a1 + 8);
      v5[-2].m128i_i64[1] = 0;
      v9 = v8 - 32;
      *(_QWORD *)(a1 + 8) = v8 + 32;
      v10 = (v8 - 32 - (__int64)a2) >> 5;
      if ( v8 - 32 - (__int64)a2 > 0 )
      {
        while ( 1 )
        {
          sub_A0AAD0(v9, (_QWORD *)(v8 - 64));
          if ( !--v10 )
            break;
          v8 = v9;
          v9 -= 32;
        }
      }
      sub_A0AAD0((__int64)a2, a3);
    }
  }
  return &v4[*(_QWORD *)a1];
}
