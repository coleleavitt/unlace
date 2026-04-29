unsigned __int64 __fastcall sub_1D6B0(__m128i *src, __m128i *a2, __int64 (__fastcall *a3)(__m128i *, __m128i *))
{
  __m128i *v3; // rbp
  char i; // al
  __int64 v6; // rcx
  __int32 v7; // ebx
  __m128i *v8; // rbx
  __m128i v9; // xmm0
  __int64 v11; // [rsp+8h] [rbp-60h]
  __m128i v12; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( src != a2 )
  {
    v3 = src + 1;
    if ( a2 != &src[1] )
    {
      for ( i = a3(v3, src); ; i = a3(v3, src) )
      {
        if ( i )
        {
          v6 = v3->m128i_i64[0];
          v7 = v3->m128i_i32[2];
          if ( (char *)v3 - (char *)src <= 16 )
          {
            if ( (char *)v3 - (char *)src == 16 )
              *v3 = _mm_loadu_si128(src);
          }
          else
          {
            v11 = v3->m128i_i64[0];
            memmove(&src[1], src, (char *)v3 - (char *)src);
            v6 = v11;
          }
          ++v3;
          src->m128i_i64[0] = v6;
          src->m128i_i32[2] = v7;
          if ( a2 == v3 )
            return v13 - __readfsqword(0x28u);
        }
        else
        {
          v8 = v3 - 1;
          v12 = _mm_loadu_si128(v3);
          while ( (unsigned __int8)a3(&v12, v8) )
          {
            v9 = _mm_loadu_si128(v8--);
            v8[2] = v9;
          }
          ++v3;
          v8[1] = _mm_load_si128(&v12);
          if ( a2 == v3 )
            return v13 - __readfsqword(0x28u);
        }
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}
