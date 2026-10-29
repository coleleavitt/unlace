void __fastcall sub_678E20(unsigned int *src, __m128i *a2)
{
  __m128i *v3; // rbx
  __m128i *i; // rax
  __m128i v5; // xmm0
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned __int32 v8; // edx
  __int64 v9; // [rsp+0h] [rbp-30h]

  if ( src != (unsigned int *)a2 )
  {
    v3 = (__m128i *)(src + 2);
    if ( a2 != (__m128i *)(src + 2) )
    {
      do
      {
        while ( 1 )
        {
          v5 = _mm_loadl_epi64(v3);
          v6 = _mm_cvtsi128_si32(v5);
          v7 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v5, 229));
          if ( *src < v6 || v6 == *src && v7 >= src[1] )
            break;
          if ( (char *)v3 - (char *)src <= 8 )
          {
            if ( (char *)v3 - (char *)src == 8 )
              v3->m128i_i64[0] = *(_QWORD *)src;
          }
          else
          {
            v9 = v5.m128i_i64[0];
            memmove(src + 2, src, (char *)v3 - (char *)src);
            v5.m128i_i64[0] = v9;
          }
          v3 = (__m128i *)((char *)v3 + 8);
          *(_QWORD *)src = v5.m128i_i64[0];
          if ( a2 == v3 )
            return;
        }
        v8 = v3[-1].m128i_u32[2];
        i = v3;
        if ( v8 >= v6 )
        {
          for ( i = (__m128i *)((char *)v3 - 8); v6 < v8 || v7 < i->m128i_i32[1]; i = (__m128i *)((char *)i - 8) )
          {
            i->m128i_i64[1] = i->m128i_i64[0];
            v8 = i[-1].m128i_u32[2];
            if ( v8 < v6 )
              goto LABEL_6;
          }
          i = (__m128i *)((char *)i + 8);
        }
LABEL_6:
        v3 = (__m128i *)((char *)v3 + 8);
        i->m128i_i64[0] = v5.m128i_i64[0];
      }
      while ( a2 != v3 );
    }
  }
}

