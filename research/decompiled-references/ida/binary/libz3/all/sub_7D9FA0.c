__int64 (__fastcall **__fastcall sub_7D9FA0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4))()
{
  __int8 *v5; // rdi
  __m128i v6; // xmm0
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  void *v12; // rdi
  __int64 v13; // rdi
  void *v14; // rdi
  __m128i v15; // xmm6
  __int64 v16; // rdi
  __int64 v17; // rdi
  __m128i si128; // xmm7
  __int64 v19; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v21; // rdi
  __m128i v22; // [rsp+0h] [rbp-48h] BYREF
  __m128i v23[3]; // [rsp+10h] [rbp-38h] BYREF

  v5 = &a1[195].m128i_i8[8];
  v6 = _mm_loadl_epi64((const __m128i *)off_1C54A38);
  *((_QWORD *)v5 - 395) = &off_1C6B850;
  v23[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  *((_QWORD *)v5 - 389) = off_1C6BB08;
  *(__m128i *)(v5 - 3128) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)off_1C6BAE0);
  v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  sub_148D160(v5, a2, algn_1C6C7D0, a4);
  v7 = (__int64 *)a1[195].m128i_i64[0];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[194].m128i_i64[1];
          if ( (*(_DWORD *)(v9 + 8))-- == 1 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_8;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_8:
    v7 = (__int64 *)a1[195].m128i_i64[0];
    if ( v7 )
LABEL_9:
      sub_186B220(v7 - 1);
  }
  v12 = (void *)a1[193].m128i_i64[0];
  if ( v12 )
    sub_186B220(v12);
  v13 = a1[192].m128i_i64[1];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = (void *)a1[191].m128i_i64[0];
  if ( v14 )
    sub_186B220(v14);
  sub_7D8F40((__int64)a1[23].m128i_i64);
  sub_7D89E0((__m128i *)a1[5].m128i_i64);
  v15 = _mm_load_si128(&v22);
  v16 = a1[4].m128i_i64[0];
  a1[-2].m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[1].m128i_i64[0] = (__int64)off_1C6C848;
  *a1 = v15;
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = a1[3].m128i_i64[1];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  si128 = _mm_load_si128(v23);
  v19 = a1[2].m128i_i64[0];
  a1[-2].m128i_i64[0] = (__int64)qword_1C6C2C8;
  result = off_1C6A6A8;
  a1[1].m128i_i64[0] = (__int64)off_1C6A6A8;
  *a1 = si128;
  if ( v19 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v19 - 8));
  v21 = a1[1].m128i_i64[1];
  if ( v21 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v21 - 8));
  return result;
}

