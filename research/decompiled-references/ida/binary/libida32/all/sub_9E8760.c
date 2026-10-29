__m128i *__fastcall sub_9E8760(__m128i *dest, _QWORD *a2, _DWORD *a3, unsigned __int64 a4, int a5)
{
  unsigned __int64 v5; // rbp
  __m128i v7; // [rsp+0h] [rbp-78h] BYREF
  __m128i v8; // [rsp+10h] [rbp-68h] BYREF
  __m128i v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h]
  _DWORD src[11]; // [rsp+4Ch] [rbp-2Ch] BYREF

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
      sub_9931E0((unsigned __int64 *)&dest[4], dest);
      *a2 += 64LL;
    }
    else
    {
      sub_9E5E40((unsigned __int64 *)&v7, dest, dest[7].m128i_u64[1]);
      dest[4] = _mm_loadu_si128(&v7);
      dest[5] = _mm_loadu_si128(&v8);
      dest[6] = _mm_loadu_si128(&v9);
      dest[7].m128i_i64[0] = v10;
      *a2 = 64;
    }
    memcpy(dest, (char *)src + v5, 4 - v5);
    return (__m128i *)((char *)dest + 4 - v5);
  }
}

