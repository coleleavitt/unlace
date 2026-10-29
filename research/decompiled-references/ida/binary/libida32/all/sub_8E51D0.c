__int64 __fastcall sub_8E51D0(__m128i *a1, const __m128i *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r11
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 i; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // rcx

  v4 = 8 * a3;
  *a1 = _mm_loadu_si128(a2);
  a1[1] = _mm_loadu_si128(a2 + 1);
  a1[2] = _mm_loadu_si128(a2 + 2);
  a1[3] = _mm_loadu_si128(a2 + 3);
  a1[4] = _mm_loadu_si128(a2 + 4);
  if ( a3 )
  {
    v5 = a1->m128i_i64[0];
    v6 = v4 + a2->m128i_i64[0];
    a1->m128i_i64[1] = v6;
    v7 = (v6 - v5) >> 3;
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i != v7; ++i )
      {
        while ( 1 )
        {
          v8 += *(unsigned __int16 *)(v5 + 8 * i + 4);
          if ( a1[4].m128i_i32[3] == i && a1[4].m128i_i32[2] == 1 )
            break;
          if ( v7 == ++i )
            goto LABEL_8;
        }
        v8 += 0x10000;
      }
    }
    else
    {
      v8 = 0;
    }
LABEL_8:
    a1[1].m128i_i64[0] += v8;
  }
  if ( a2[4].m128i_i32[2] )
  {
    v10 = a2[4].m128i_u32[3];
    if ( v10 <= a4 && v10 >= a3 )
      a1[4].m128i_i32[3] -= a3;
    else
      a1[4].m128i_i32[2] = 0;
  }
  v11 = a2->m128i_i64[0] + v4;
  a1->m128i_i64[0] = v11;
  v12 = a2->m128i_i64[0] + 8 * a4;
  a1->m128i_i64[1] = v12;
  result = (a2->m128i_i64[1] - a2->m128i_i64[0]) >> 3;
  if ( result != a4 )
  {
    v14 = (v12 - v11) >> 3;
    if ( v14 )
    {
      v15 = 0;
      for ( result = 0; result != v14; ++result )
      {
        while ( 1 )
        {
          v15 += *(unsigned __int16 *)(v11 + 8 * result + 4);
          if ( a1[4].m128i_i32[3] == result && a1[4].m128i_i32[2] == 1 )
            break;
          if ( v14 == ++result )
            goto LABEL_20;
        }
        v15 += 0x10000;
      }
    }
    else
    {
      v15 = 0;
    }
LABEL_20:
    a1[1].m128i_i64[1] = a1[1].m128i_i64[0] + v15;
  }
  a1[2].m128i_i64[0] += a3;
  a1[2].m128i_i64[1] += a3;
  a1[3].m128i_i64[0] += a3;
  return result;
}

