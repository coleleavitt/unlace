__m128i *__fastcall sub_7494E0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int32 a5,
        _QWORD *a6,
        unsigned __int32 a7,
        __int64 a8,
        unsigned __int32 a9,
        __int64 a10)
{
  __int64 v13; // rax
  __m128i *v14; // rbx
  __int8 v15; // al
  __int64 v17; // rax
  _QWORD *v18; // [rsp+0h] [rbp-60h]
  __m128i v19; // [rsp+8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+18h] [rbp-48h]
  unsigned __int64 v21; // [rsp+20h] [rbp-40h]

  a1[284] += 104LL;
  v19 = 0;
  v20 = a10;
  v21 = v21 & 0xFC00000000000000LL | 0x7019C00000000LL;
  v13 = a1[274];
  v14 = (__m128i *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= (unsigned __int64)&v14[6].m128i_u64[1] && v13 )
  {
    a1[274] = (char *)v14 + 104;
  }
  else
  {
    v18 = a6;
    v17 = sub_722150((__int64)(a1 + 274), 104, 3);
    a6 = v18;
    v14 = (__m128i *)v17;
  }
  sub_749220(v14, (__int64)a1, &v19, a2, a3, a4, a5, a6, a7, a8, a9);
  v15 = v14[1].m128i_i8[14];
  v14[2].m128i_i8[2] |= 4u;
  if ( (~v15 & 0xF0) == 0 && !v14->m128i_i64[0] )
    v14[1].m128i_i8[14] = v15 & 0xF;
  return v14;
}

