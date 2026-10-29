void __fastcall sub_629D90(char *src, char *a2)
{
  char *i; // rbx
  __int64 v4; // rdi
  const char *v5; // r12
  __m128i v6; // xmm1
  __int64 v7; // r8
  char v8; // r14
  __m128i si128; // xmm0
  __int64 v10; // r15
  __int64 v11; // [rsp+0h] [rbp-60h]
  __m128i v12; // [rsp+8h] [rbp-58h] BYREF
  __m128i v13[4]; // [rsp+18h] [rbp-48h] BYREF

  if ( src != a2 )
  {
    for ( i = src + 64; a2 != i; *(__m128i *)(src + 40) = si128 )
    {
      while ( 1 )
      {
        v5 = *(const char **)i;
        if ( strcmp(*(const char **)i, *(const char **)src) < 0 )
          break;
        v4 = (__int64)i;
        i += 64;
        sub_629CE0(v4);
        if ( a2 == i )
          return;
      }
      v6 = _mm_loadu_si128((const __m128i *)(i + 8));
      v7 = *((_QWORD *)i + 3);
      v8 = i[32];
      si128 = _mm_loadu_si128((const __m128i *)(i + 40));
      v10 = *((_QWORD *)i + 7);
      if ( i - src <= 64 )
      {
        if ( i - src == 64 )
        {
          *(__m128i *)i = _mm_loadu_si128((const __m128i *)src);
          *((__m128i *)i + 1) = _mm_loadu_si128((const __m128i *)src + 1);
          *((__m128i *)i + 2) = _mm_loadu_si128((const __m128i *)src + 2);
          *((__m128i *)i + 3) = _mm_loadu_si128((const __m128i *)src + 3);
        }
      }
      else
      {
        v11 = *((_QWORD *)i + 3);
        v13[0] = si128;
        v12 = v6;
        memmove(src + 64, src, i - src);
        v7 = v11;
        v6 = _mm_load_si128(&v12);
        si128 = _mm_load_si128(v13);
      }
      i += 64;
      *(_QWORD *)src = v5;
      *((_QWORD *)src + 3) = v7;
      src[32] = v8;
      *((_QWORD *)src + 7) = v10;
      *(__m128i *)(src + 8) = v6;
    }
  }
}
