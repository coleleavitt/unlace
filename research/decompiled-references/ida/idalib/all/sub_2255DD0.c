__m128i *__fastcall sub_2255DD0(__m128i *a1, char *a2, size_t a3)
{
  __int64 v4; // rax
  __m128i si128; // xmm0
  unsigned __int64 v7; // r13
  _BYTE *v8; // rdi
  size_t v9; // rdx
  __m128i v10; // xmm0
  __int32 v11; // eax
  __m128i *v12; // rax
  __int64 v13; // rax
  size_t v14; // rdx
  void *ptr; // [rsp+0h] [rbp-E8h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-E0h]
  _BYTE v17[72]; // [rsp+18h] [rbp-D0h] BYREF
  __int32 v18; // [rsp+60h] [rbp-88h]
  void *src; // [rsp+68h] [rbp-80h] BYREF
  __m128i v20; // [rsp+70h] [rbp-78h]
  _BYTE v21[104]; // [rsp+80h] [rbp-68h] BYREF

  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  ptr = v17;
  v4 = sub_22553E0(a2, a3, 0, (char **)&ptr);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  if ( !BYTE4(v4) )
  {
    a1[6].m128i_i8[0] = 0;
    goto LABEL_3;
  }
  v7 = n[0];
  v18 = v4;
  v8 = v21;
  v20 = si128;
  src = v21;
  if ( !n[0] )
  {
    a1->m128i_i32[0] = v4;
    a1->m128i_i64[1] = (__int64)a1[2].m128i_i64;
    a1[1] = si128;
LABEL_8:
    a1[6].m128i_i8[0] = 1;
    goto LABEL_3;
  }
  v9 = n[0];
  if ( n[0] <= 0x40
    || (sub_2236E10((__int64)&src, v21, n[0], 1),
        v9 = n[0],
        v8 = src,
        v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D70),
        n[0]) )
  {
    memcpy(v8, ptr, v9);
    v8 = src;
    v10 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  }
  v11 = v18;
  v20.m128i_i64[0] = v7;
  a1[1] = v10;
  a1->m128i_i32[0] = v11;
  v12 = a1 + 2;
  a1->m128i_i64[1] = (__int64)a1[2].m128i_i64;
  if ( v8 != v21 )
  {
    v13 = v20.m128i_i64[1];
    a1->m128i_i64[1] = (__int64)v8;
    a1[1].m128i_i64[0] = v7;
    a1[1].m128i_i64[1] = v13;
    goto LABEL_8;
  }
  v14 = v7;
  if ( v7 <= 0x40
    || (sub_2236E10((__int64)&a1->m128i_i64[1], &a1[2], v7, 1),
        v14 = v20.m128i_i64[0],
        v12 = (__m128i *)a1->m128i_i64[1],
        v8 = src,
        v20.m128i_i64[0]) )
  {
    memcpy(v12, v8, v14);
    v8 = src;
  }
  a1[1].m128i_i64[0] = v7;
  v20.m128i_i64[0] = 0;
  a1[6].m128i_i8[0] = 1;
  if ( v8 != v21 )
    free(v8);
LABEL_3:
  if ( ptr != v17 )
    free(ptr);
  return a1;
}
