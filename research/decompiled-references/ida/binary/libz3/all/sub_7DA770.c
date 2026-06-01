void __fastcall sub_7DA770(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *v4; // r14
  __int8 *v6; // rdi
  __m128i v7; // xmm0
  __int64 *v8; // rbx
  __int64 *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v13; // rdi
  __int64 v14; // rdi
  void *v15; // rdi
  __m128i v16; // xmm6
  __int64 v17; // rdi
  __int64 v18; // rdi
  __m128i si128; // xmm7
  __int64 v20; // rdi
  __int64 v21; // rdi
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __m128i v23[4]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a1 - 2;
  v6 = &a1[195].m128i_i8[8];
  v7 = _mm_loadl_epi64((const __m128i *)off_1C54A38);
  *((_QWORD *)v6 - 395) = &off_1C6B850;
  v23[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  *((_QWORD *)v6 - 389) = off_1C6BB08;
  *(__m128i *)(v6 - 3128) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)off_1C6BAE0);
  v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  sub_148D160(v6, a2, algn_1C6C7D0, a4);
  v8 = (__int64 *)a1[195].m128i_i64[0];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[194].m128i_i64[1];
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_8;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_8:
    v8 = (__int64 *)a1[195].m128i_i64[0];
    if ( v8 )
LABEL_9:
      sub_186B220(v8 - 1);
  }
  v13 = (void *)a1[193].m128i_i64[0];
  if ( v13 )
    sub_186B220(v13);
  v14 = a1[192].m128i_i64[1];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = (void *)a1[191].m128i_i64[0];
  if ( v15 )
    sub_186B220(v15);
  sub_7D8F40((__int64)a1[23].m128i_i64);
  sub_7D89E0((__m128i *)a1[5].m128i_i64);
  v16 = _mm_load_si128(&v22);
  v17 = a1[4].m128i_i64[0];
  a1[-2].m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[1].m128i_i64[0] = (__int64)off_1C6C848;
  *a1 = v16;
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = a1[3].m128i_i64[1];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  si128 = _mm_load_si128(v23);
  v20 = a1[2].m128i_i64[0];
  a1[-2].m128i_i64[0] = (__int64)qword_1C6C2C8;
  a1[1].m128i_i64[0] = (__int64)off_1C6A6A8;
  *a1 = si128;
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = a1[1].m128i_i64[1];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  operator delete(v4, 0xC60u);
}

