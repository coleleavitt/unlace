void __fastcall sub_43A1D0(__m128i *src, __m128i *a2, double a3, __m128i a4, __m128 a5)
{
  __m128i *v6; // rbx
  __m128 si128; // xmm0
  _BYTE *v8; // rdx
  _BYTE *v9; // rax
  unsigned __int64 v10; // rcx
  signed __int64 v11; // rsi
  __int64 v12; // r14
  __m128i v13[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( src != a2 )
  {
    v6 = (__m128i *)((char *)src + 24);
    if ( a2 != (__m128i *)&src[1].m128i_u64[1] )
    {
      while ( 1 )
      {
        si128 = (__m128)_mm_loadu_si128(v6);
        v8 = (_BYTE *)src->m128i_i64[0];
        a5 = _mm_movehl_ps(a5, si128);
        v9 = (_BYTE *)si128.m128_u64[0];
        v10 = a5.m128_u64[0];
        v11 = src->m128i_i64[1] - src->m128i_i64[0];
        if ( (signed __int64)(a5.m128_u64[0] - si128.m128_u64[0]) > v11 )
          v10 = si128.m128_u64[0] + v11;
        if ( v10 != si128.m128_u64[0] )
          break;
LABEL_15:
        if ( (_BYTE *)src->m128i_i64[1] != v8 )
          goto LABEL_10;
LABEL_16:
        sub_439A50((__int64)v6, *(double *)si128.m128_u64, *(double *)a4.m128i_i64, a5);
LABEL_13:
        v6 = (__m128i *)((char *)v6 + 24);
        if ( a2 == v6 )
          return;
      }
      while ( *v9 >= *v8 )
      {
        if ( *v9 > *v8 )
          goto LABEL_16;
        ++v9;
        ++v8;
        if ( v9 == (_BYTE *)v10 )
          goto LABEL_15;
      }
LABEL_10:
      v12 = v6[1].m128i_i64[0];
      if ( (char *)v6 - (char *)src <= 24 )
      {
        if ( (char *)v6 - (char *)src == 24 )
        {
          a4 = _mm_loadu_si128(src);
          *v6 = a4;
          v6[1].m128i_i64[0] = src[1].m128i_i64[0];
        }
      }
      else
      {
        v13[0] = (__m128i)si128;
        memmove(&src[1].m128i_u64[1], src, (char *)v6 - (char *)src);
        si128 = (__m128)_mm_load_si128(v13);
      }
      src[1].m128i_i64[0] = v12;
      *src = (__m128i)si128;
      goto LABEL_13;
    }
  }
}
