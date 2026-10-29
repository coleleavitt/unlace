void __fastcall sub_81D1A0(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  __m128i v5; // xmm0
  int v6; // ecx
  int v7; // edi
  __int64 *j; // rax
  __int64 *v9; // rsi
  bool v10; // sf
  bool v11; // of
  __int64 v12; // [rsp+0h] [rbp-30h]

  if ( src != a2 )
  {
    for ( i = (__m128i *)&src->m128i_u64[1]; a2 != i; i = (__m128i *)((char *)i + 8) )
    {
      v5 = _mm_loadl_epi64(i);
      v6 = _mm_cvtsi128_si32(v5);
      v7 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v5, 229));
      if ( src->m128i_i32[0] == v6 )
      {
        if ( src->m128i_i32[1] > v7 )
        {
LABEL_14:
          if ( (char *)i - (char *)src <= 8 )
          {
            if ( (char *)i - (char *)src == 8 )
              i->m128i_i64[0] = src->m128i_i64[0];
          }
          else
          {
            v12 = v5.m128i_i64[0];
            memmove(&src->m128i_u64[1], src, (char *)i - (char *)src);
            v5.m128i_i64[0] = v12;
          }
          src->m128i_i64[0] = v5.m128i_i64[0];
          continue;
        }
      }
      else if ( src->m128i_i32[0] > v6 )
      {
        goto LABEL_14;
      }
      for ( j = (__int64 *)i; ; j[1] = *j )
      {
        v9 = j;
        v11 = __OFSUB__(v6, *((_DWORD *)j - 2));
        v10 = v6 - *((_DWORD *)j - 2) < 0;
        if ( v6 == *((_DWORD *)j - 2) )
        {
          v11 = __OFSUB__(v7, *((_DWORD *)j - 1));
          v10 = v7 - *((_DWORD *)j - 1) < 0;
        }
        --j;
        if ( v10 == v11 )
          break;
      }
      *v9 = v5.m128i_i64[0];
    }
  }
}

