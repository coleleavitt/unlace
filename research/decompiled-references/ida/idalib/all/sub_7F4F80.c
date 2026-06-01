void __fastcall sub_7F4F80(char *src, char *a2)
{
  char *v3; // rbp
  char *v4; // r13
  __m128i si128; // xmm1
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  __m128i *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __m128i *v11; // rdi
  __m128i v12[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( src != a2 )
  {
    v3 = src + 24;
    if ( a2 != src + 24 )
    {
      v4 = &src[((a2 - 48 - src) & 0xFFFFFFFFFFFFFFF8LL) + 48];
      do
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)v3;
          si128 = _mm_loadu_si128((const __m128i *)(v3 + 8));
          v7 = *((unsigned int *)v3 + 1) + ((unsigned __int64)*(unsigned int *)v3 << 32);
          if ( v7 < *((unsigned int *)src + 1) + ((unsigned __int64)*(unsigned int *)src << 32) )
            break;
          v8 = (__m128i *)(v3 - 24);
          if ( v7 >= *((unsigned int *)v3 - 5) + ((unsigned __int64)*((unsigned int *)v3 - 6) << 32) )
          {
            *(_QWORD *)v3 = v6;
            *(__m128i *)(v3 + 8) = si128;
          }
          else
          {
            do
            {
              v9 = _mm_loadu_si128(v8);
              v10 = v8[1].m128i_i64[0];
              v11 = v8;
              v8 = (__m128i *)((char *)v8 - 24);
              v8[3] = v9;
              v8[4].m128i_i64[0] = v10;
            }
            while ( v7 < v8->m128i_u32[1] + ((unsigned __int64)v8->m128i_u32[0] << 32) );
            v11->m128i_i64[0] = v6;
            *(__m128i *)((char *)v11 + 8) = si128;
          }
          v3 += 24;
          if ( v3 == v4 )
            return;
        }
        if ( v3 - src <= 24 )
        {
          if ( v3 - src == 24 )
          {
            *(__m128i *)v3 = _mm_loadu_si128((const __m128i *)src);
            *((_QWORD *)v3 + 2) = *((_QWORD *)src + 2);
          }
        }
        else
        {
          v12[0] = si128;
          memmove(src + 24, src, v3 - src);
          si128 = _mm_load_si128(v12);
        }
        v3 += 24;
        *(_QWORD *)src = v6;
        *(__m128i *)(src + 8) = si128;
      }
      while ( v3 != v4 );
    }
  }
}
