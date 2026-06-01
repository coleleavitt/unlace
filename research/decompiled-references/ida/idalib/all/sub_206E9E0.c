__m128i *__fastcall sub_206E9E0(__m128i *dest, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  __m128i v7; // [rsp+0h] [rbp-78h] BYREF
  __m128i v8; // [rsp+10h] [rbp-68h] BYREF
  __m128i v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h]
  _QWORD src[6]; // [rsp+48h] [rbp-30h] BYREF

  src[0] = a5;
  if ( a4 >= (unsigned __int64)(a3 + 1) )
  {
    *a3 = src[0];
    return (__m128i *)(a3 + 1);
  }
  else
  {
    v5 = a4 - (_QWORD)a3;
    memcpy(a3, src, a4 - (_QWORD)a3);
    if ( *a2 )
    {
      sub_9B6F20((unsigned __int64 *)&dest[4], dest);
      *a2 += 64LL;
    }
    else
    {
      sub_A09B80((unsigned __int64 *)&v7, dest, dest[7].m128i_u64[1]);
      dest[4] = _mm_loadu_si128(&v7);
      dest[5] = _mm_loadu_si128(&v8);
      dest[6] = _mm_loadu_si128(&v9);
      dest[7].m128i_i64[0] = v10;
      *a2 = 64;
    }
    memcpy(dest, (char *)src + v5, 8 - v5);
    return (__m128i *)((char *)dest + 8 - v5);
  }
}
