signed __int64 __fastcall sub_3E44F0(__m128i *a1, __int64 *a2, __int64 a3)
{
  signed __int64 result; // rax
  __int64 v4; // r13
  __int64 *v5; // r12
  __int64 v7; // rax
  __int64 i; // rbx
  unsigned __int16 v9; // si
  __int64 v10; // r9
  __m128i *v11; // rax
  unsigned __int16 v12; // dx
  __int32 v13; // r8d
  __m128i *v14; // rbx
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // di
  __m128i v17; // xmm0
  unsigned __int16 v18; // si
  __m128i *v19; // rax
  unsigned __int16 j; // cx
  __int64 v21; // rsi
  __int32 v22; // ecx
  __int64 k; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v4 = a3;
    v5 = a2;
    v7 = result >> 5;
    for ( i = ((char *)a2 - (char *)a1) >> 4; v4; i = v14 - a1 )
    {
      v9 = a1[1].m128i_u16[4];
      v10 = a1->m128i_i64[0];
      --v4;
      v11 = &a1[v7];
      v12 = a1->m128i_u16[4];
      v13 = a1->m128i_i32[3];
      v14 = a1 + 1;
      v15 = v11->m128i_u16[4];
      v16 = *((_WORD *)v5 - 4);
      if ( v9 >= v15 )
      {
        if ( v9 >= v16 )
        {
          if ( v15 >= v16 )
          {
LABEL_25:
            *a1 = _mm_loadu_si128(v11);
            v11->m128i_i64[0] = v10;
            v11->m128i_i16[4] = v12;
            v11->m128i_i32[3] = v13;
            v12 = a1[1].m128i_u16[4];
            v18 = *((_WORD *)v5 - 4);
            goto LABEL_7;
          }
LABEL_16:
          v18 = a1->m128i_u16[4];
          *a1 = _mm_loadu_si128((const __m128i *)v5 - 1);
          *(v5 - 2) = v10;
          *((_WORD *)v5 - 4) = v12;
          *((_DWORD *)v5 - 1) = v13;
          v12 = a1[1].m128i_u16[4];
          goto LABEL_7;
        }
      }
      else
      {
        if ( v15 < v16 )
          goto LABEL_25;
        if ( v9 < v16 )
          goto LABEL_16;
      }
      v17 = _mm_loadu_si128(a1 + 1);
      a1[1].m128i_i64[0] = v10;
      a1[1].m128i_i16[4] = v12;
      a1[1].m128i_i32[3] = v13;
      *a1 = v17;
      v18 = *((_WORD *)v5 - 4);
LABEL_7:
      v19 = (__m128i *)v5;
      while ( 1 )
      {
        for ( j = a1->m128i_u16[4]; v12 < j; ++v14 )
          v12 = v14[1].m128i_u16[4];
        --v19;
        if ( j < v18 )
        {
          do
            --v19;
          while ( j < (unsigned int)v19->m128i_i16[4] );
        }
        if ( v14 >= v19 )
          break;
        v21 = v14->m128i_i64[0];
        v22 = v14->m128i_i32[3];
        ++v14;
        v14[-1] = _mm_loadu_si128(v19);
        v19->m128i_i64[0] = v21;
        v18 = v19[-1].m128i_u16[4];
        v19->m128i_i16[4] = v12;
        v19->m128i_i32[3] = v22;
        v12 = v14->m128i_u16[4];
      }
      sub_3E44F0(v14, v5, v4);
      result = (char *)v14 - (char *)a1;
      if ( (char *)v14 - (char *)a1 <= 256 )
        return result;
      v5 = (__int64 *)v14;
      v7 = result >> 5;
    }
    for ( k = v7 - 1; ; --k )
    {
      sub_3E41C0((__int64)a1, k, i, a1[k].m128i_i64[0], a1[k].m128i_i64[1]);
      if ( !k )
        break;
    }
    for ( result = (char *)v5 - (char *)a1;
          (char *)v5 - (char *)a1 > 16;
          result = (signed __int64)sub_3E41C0((__int64)a1, 0, ((char *)v5 - (char *)a1) >> 4, v24, v25) )
    {
      v5 -= 2;
      v24 = *v5;
      v25 = v5[1];
      *(__m128i *)v5 = _mm_loadu_si128(a1);
    }
  }
  return result;
}
