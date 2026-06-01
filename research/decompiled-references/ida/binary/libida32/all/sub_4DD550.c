__int64 __fastcall sub_4DD550(__m128i *a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 *i; // r12
  __int32 *v9; // rsi
  unsigned __int32 v10; // ecx
  unsigned int *v11; // rbx
  __m128i v12; // xmm0
  unsigned __int32 v13; // eax
  unsigned __int32 v14; // edi
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // esi
  __int64 *v18; // rax
  unsigned int j; // ecx
  __m128i v20; // xmm1
  __int64 k; // rbx
  __int64 v22; // rcx

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    v4 = result >> 4;
    v5 = a3;
    v6 = ((char *)a2 - (char *)a1) >> 3;
    for ( i = a2; v5; v6 = ((char *)v11 - (char *)a1) >> 3 )
    {
      v9 = &a1->m128i_i32[2 * v4];
      v10 = a1->m128i_u32[2];
      --v5;
      v11 = &a1->m128i_u32[2];
      v12 = _mm_loadl_epi64(a1);
      v13 = *v9;
      v14 = *((_DWORD *)i - 2);
      v15 = _mm_cvtsi128_si32(v12);
      if ( v10 >= *v9 )
      {
        if ( v10 >= v14 )
        {
          if ( v13 >= v14 )
          {
LABEL_25:
            a1->m128i_i64[0] = *(_QWORD *)v9;
            *(_QWORD *)v9 = v12.m128i_i64[0];
            v15 = a1->m128i_u32[2];
            v17 = *((_DWORD *)i - 2);
            goto LABEL_7;
          }
LABEL_16:
          v17 = v15;
          a1->m128i_i64[0] = *(i - 1);
          *(i - 1) = v12.m128i_i64[0];
          v15 = a1->m128i_u32[2];
          goto LABEL_7;
        }
      }
      else
      {
        if ( v13 < v14 )
          goto LABEL_25;
        if ( v10 < v14 )
          goto LABEL_16;
      }
      v16 = a1->m128i_i64[1];
      a1->m128i_i64[1] = v12.m128i_i64[0];
      a1->m128i_i64[0] = v16;
      v17 = *((_DWORD *)i - 2);
LABEL_7:
      v18 = i;
      while ( 1 )
      {
        for ( j = a1->m128i_i32[0]; v15 < j; v11 += 2 )
          v15 = v11[2];
        --v18;
        if ( j < v17 )
        {
          do
            --v18;
          while ( j < *(_DWORD *)v18 );
        }
        if ( v11 >= (unsigned int *)v18 )
          break;
        v20 = _mm_cvtsi32_si128(v11[1]);
        v11 += 2;
        *((_QWORD *)v11 - 1) = *v18;
        v17 = *((_DWORD *)v18 - 2);
        *v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), v20).m128i_u64[0];
        v15 = *v11;
      }
      sub_4DD550(v11, i, v5);
      result = (char *)v11 - (char *)a1;
      if ( (char *)v11 - (char *)a1 <= 128 )
        return result;
      i = (__int64 *)v11;
      v4 = result >> 4;
    }
    for ( k = v4 - 1; ; --k )
    {
      sub_4DCA40((__int64)a1, k, v6, a1->m128i_i64[k]);
      if ( !k )
        break;
    }
    for ( result = (char *)i - (char *)a1;
          (char *)i - (char *)a1 > 8;
          result = sub_4DCA40((__int64)a1, 0, ((char *)i - (char *)a1) >> 3, v22) )
    {
      v22 = *--i;
      *i = a1->m128i_i64[0];
    }
  }
  return result;
}

