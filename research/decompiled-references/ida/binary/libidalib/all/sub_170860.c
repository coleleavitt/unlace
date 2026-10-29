void __fastcall sub_170860(__m128i *src, __m128i *a2)
{
  __m128i *v3; // rbp
  unsigned __int8 v4; // dl
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // al
  unsigned __int8 v8; // si
  __m128i *i; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm0
  __int16 v12; // r15

  if ( src != a2 )
  {
    v3 = src + 1;
    if ( a2 != &src[1] )
    {
      while ( 1 )
      {
        v5 = v3->m128i_i64[0];
        if ( v3->m128i_i64[0] < (unsigned __int64)src->m128i_i64[0] )
          goto LABEL_17;
        v6 = v3->m128i_u8[9];
        if ( src->m128i_i64[0] < v5 )
        {
          v8 = v3->m128i_u8[8];
          goto LABEL_14;
        }
        v7 = src->m128i_u8[9];
        if ( v6 < v7 || (v8 = v3->m128i_u8[8], v7 >= v6) && v8 < (unsigned int)src->m128i_i8[8] )
        {
LABEL_17:
          v12 = v3->m128i_i16[4];
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
          src->m128i_i64[0] = v5;
          src->m128i_i16[4] = v12;
          if ( a2 == v3 )
            return;
        }
        else
        {
LABEL_14:
          for ( i = v3; ; i[1] = v11 )
          {
            v10 = i[-1].m128i_u64[0];
            if ( v5 >= v10 )
            {
              if ( v10 < v5 )
                break;
              v4 = i[-1].m128i_u8[9];
              if ( v6 >= v4 && (v4 < v6 || v8 >= (unsigned int)i[-1].m128i_i8[8]) )
                break;
            }
            v11 = _mm_loadu_si128(--i);
          }
          ++v3;
          i->m128i_i64[0] = v5;
          i->m128i_i8[8] = v8;
          i->m128i_i8[9] = v6;
          if ( a2 == v3 )
            return;
        }
      }
    }
  }
}

