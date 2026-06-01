_QWORD *__fastcall sub_718270(_QWORD *a1, _QWORD *a2, const void *a3, __int64 a4, _BYTE *a5)
{
  size_t v6; // r14
  __m128i *v8; // rbp
  unsigned __int64 v9; // r12
  unsigned int v11; // eax
  __m128i *i; // r12
  __m128i *v13; // rdi
  __m128i v15; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16; // [rsp+20h] [rbp-68h]
  __m128i v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]

  v6 = 24 * a4;
  v8 = (__m128i *)(a1 + 2);
  v9 = 0xAAAAAAAAAAAAAAABLL * ((24 * a4) >> 3);
  *a1 = a1 + 2;
  a1[1] = 0x1000000000LL;
  if ( (unsigned __int64)(24 * a4) > 0x180 )
  {
    sub_25D6060(a1, a1 + 2, 0xAAAAAAAAAAAAAAABLL * ((24 * a4) >> 3), 24);
    v8 = (__m128i *)(*a1 + 24LL * *((unsigned int *)a1 + 2));
  }
  else
  {
    v11 = 24 * a4;
    if ( !v6 )
      goto LABEL_3;
  }
  memcpy(v8, a3, v6);
  v8 = (__m128i *)*a1;
  v11 = v9 + *((_DWORD *)a1 + 2);
LABEL_3:
  *((_DWORD *)a1 + 2) = v11;
  for ( i = (__m128i *)((char *)v8 + 24 * v11); i != v8; *a5 |= (unsigned __int8)sub_AFDE80(v13, &v17) ^ 1 )
  {
    v17 = _mm_loadu_si128(v8);
    v18 = v8[1].m128i_i64[0];
    sub_717FD0(&v15, a2, v8);
    v13 = v8;
    v8 = (__m128i *)((char *)v8 + 24);
    *(__m128i *)((char *)v8 - 24) = _mm_loadu_si128(&v15);
    v8[-1].m128i_i64[1] = v16;
  }
  return a1;
}

