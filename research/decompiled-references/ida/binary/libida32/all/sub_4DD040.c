void __fastcall sub_4DD040(__m128i *src, __m128i *a2)
{
  __m128i *v3; // rbx
  __int64 v4; // r15
  __m128i *v5; // rdi
  unsigned __int32 v6; // r12d
  unsigned __int32 v7; // eax
  __int32 v8; // r14d

  if ( src != a2 )
  {
    v3 = src + 1;
    if ( a2 != &src[1] )
    {
      while ( 1 )
      {
        v6 = v3->m128i_u32[2];
        v7 = src->m128i_u32[2];
        if ( v6 < v7 )
          break;
        if ( v7 >= v6 && (v4 = v3->m128i_i64[0], v3->m128i_i64[0] < (unsigned __int64)src->m128i_i64[0]) )
        {
LABEL_9:
          v8 = v3->m128i_i32[3];
          if ( (char *)v3 - (char *)src <= 16 )
          {
            if ( (char *)v3 - (char *)src == 16 )
              *v3 = _mm_loadu_si128(src);
          }
          else
          {
            memmove(&src[1], src, (char *)v3 - (char *)src);
          }
          ++v3;
          src->m128i_i64[0] = v4;
          src->m128i_i32[2] = v6;
          src->m128i_i32[3] = v8;
          if ( a2 == v3 )
            return;
        }
        else
        {
          v5 = v3++;
          sub_4DCD60(v5);
          if ( a2 == v3 )
            return;
        }
      }
      v4 = v3->m128i_i64[0];
      goto LABEL_9;
    }
  }
}

