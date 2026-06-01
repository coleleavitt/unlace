void __fastcall sub_7D2600(char *src, char *a2)
{
  char *v3; // rbx
  char *v4; // r13
  __m128i v5; // xmm1
  __m128i si128; // xmm2
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned int *v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rdx
  unsigned int *v12; // rdi
  __m128i v13; // xmm0
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+10h] [rbp-38h] BYREF

  if ( src != a2 )
  {
    v3 = src + 40;
    if ( a2 != src + 40 )
    {
      v4 = &src[((a2 - 80 - src) & 0xFFFFFFFFFFFFFFF8LL) + 80];
      do
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)v3;
          si128 = _mm_loadu_si128((const __m128i *)(v3 + 8));
          v5 = _mm_loadu_si128((const __m128i *)(v3 + 24));
          v8 = *((unsigned int *)v3 + 1) + ((unsigned __int64)*(unsigned int *)v3 << 32);
          if ( v8 < *((unsigned int *)src + 1) + ((unsigned __int64)*(unsigned int *)src << 32) )
            break;
          v9 = (unsigned int *)(v3 - 40);
          if ( v8 >= *((unsigned int *)v3 - 9) + ((unsigned __int64)*((unsigned int *)v3 - 10) << 32) )
          {
            *(_QWORD *)v3 = v7;
            *(__m128i *)(v3 + 8) = si128;
            *(__m128i *)(v3 + 24) = v5;
          }
          else
          {
            do
            {
              v10 = _mm_loadu_si128((const __m128i *)v9);
              v11 = *((_QWORD *)v9 + 4);
              v12 = v9;
              v9 -= 10;
              *((__m128i *)v9 + 5) = v10;
              v13 = _mm_loadu_si128((const __m128i *)(v9 + 14));
              *((_QWORD *)v9 + 14) = v11;
              *((__m128i *)v9 + 6) = v13;
            }
            while ( v8 < v9[1] + ((unsigned __int64)*v9 << 32) );
            *(_QWORD *)v12 = v7;
            *(__m128i *)(v12 + 2) = si128;
            *(__m128i *)(v12 + 6) = v5;
          }
          v3 += 40;
          if ( v3 == v4 )
            return;
        }
        if ( v3 - src <= 40 )
        {
          if ( v3 - src == 40 )
          {
            *(__m128i *)v3 = _mm_loadu_si128((const __m128i *)src);
            *((__m128i *)v3 + 1) = _mm_loadu_si128((const __m128i *)src + 1);
            *((_QWORD *)v3 + 4) = *((_QWORD *)src + 4);
          }
        }
        else
        {
          v15[0] = si128;
          v14 = v5;
          memmove(src + 40, src, v3 - src);
          v5 = _mm_load_si128(&v14);
          si128 = _mm_load_si128(v15);
        }
        v3 += 40;
        *(_QWORD *)src = v7;
        *(__m128i *)(src + 8) = si128;
        *(__m128i *)(src + 24) = v5;
      }
      while ( v3 != v4 );
    }
  }
}

