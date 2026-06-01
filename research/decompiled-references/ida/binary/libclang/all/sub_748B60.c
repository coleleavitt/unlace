__m128i *__fastcall sub_748B60(
        _QWORD *a1,
        __int32 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int32 a5,
        unsigned __int64 *a6,
        unsigned __int32 a7,
        unsigned __int64 *a8,
        unsigned __int32 a9,
        unsigned __int64 *a10,
        unsigned __int32 a11,
        unsigned int *a12,
        unsigned __int32 a13,
        _QWORD *a14,
        unsigned __int32 a15,
        __int64 a16)
{
  __int64 v19; // rax
  __m128i *v20; // rbx
  __int8 v21; // al
  __int64 v23; // rax
  unsigned __int64 *v24; // [rsp+0h] [rbp-60h]
  __m128i v25; // [rsp+8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+18h] [rbp-48h]
  unsigned __int64 v27; // [rsp+20h] [rbp-40h]

  a1[284] += 144LL;
  v25 = 0;
  v26 = a16;
  v27 = v27 & 0xFC00000000000000LL | 0x7019C00000000LL;
  v19 = a1[274];
  v20 = (__m128i *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= (unsigned __int64)&v20[9] && v19 )
  {
    a1[274] = v20 + 9;
  }
  else
  {
    v24 = a6;
    v23 = sub_722150((__int64)(a1 + 274), 144, 3);
    a6 = v24;
    v20 = (__m128i *)v23;
  }
  sub_748860(v20, (__int64)a1, &v25, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  v21 = v20[1].m128i_i8[14];
  v20[2].m128i_i8[2] |= 4u;
  if ( (~v21 & 0xF0) == 0 && !v20->m128i_i64[0] )
    v20[1].m128i_i8[14] = v21 & 0xF;
  return v20;
}

