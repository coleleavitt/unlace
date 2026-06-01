unsigned __int64 sub_19A120()
{
  __int64 v0; // rax
  __int128 v1; // rax
  __int64 v2; // rsi
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  __m128i v5; // xmm0
  __int64 v6; // rax
  __int64 v8; // rbx
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // rdi
  __m128i v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h] BYREF
  __m128i v15; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v15 = 0;
  v14 = 0;
  v0 = qvector_reserve(&v14, 0, 4, 1);
  v14 = v0;
  v15.m128i_i64[0] = 4;
  *(_WORD *)v0 = 17481;
  *(_BYTE *)(v0 + 2) = 67;
  *(_BYTE *)(v14 + 3) = 0;
  v1 = xmmword_8CACB8;
  v2 = qword_8CACB0;
  v3 = xmmword_8CACB8 + 1;
  if ( (unsigned __int64)&v14 >= qword_8CACB0
    && (v4 = qword_8CACB0 + 24LL * *((_QWORD *)&xmmword_8CACB8 + 1), (unsigned __int64)&v14 < v4) )
  {
    v8 = v14;
    v9 = _mm_loadl_epi64(&v15);
    v14 = 0;
    v10 = _mm_loadl_epi64((const __m128i *)&v15.m128i_u64[1]);
    v15 = 0;
    if ( *((_QWORD *)&xmmword_8CACB8 + 1) < v3 )
    {
      v13.m128i_i64[1] = v10.m128i_i64[0];
      v13.m128i_i64[0] = v9.m128i_i64[0];
      qword_8CACB0 = qvector_reserve(&qword_8CACB0, qword_8CACB0, xmmword_8CACB8 + 1, 24);
      v2 = qword_8CACB0;
      v10 = _mm_loadl_epi64((const __m128i *)&v13.m128i_u64[1]);
      *(_QWORD *)&v1 = xmmword_8CACB8;
      v9 = _mm_loadl_epi64(&v13);
    }
    v11 = v2 + 24 * v1;
    *(_QWORD *)v11 = v8;
    v12 = v14;
    *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v9, v10);
    *(_QWORD *)&xmmword_8CACB8 = xmmword_8CACB8 + 1;
    if ( v12 )
    {
      v15.m128i_i64[0] = 0;
      qfree(v12, v2, *((_QWORD *)&v1 + 1), v4, v3);
    }
  }
  else
  {
    if ( *((_QWORD *)&xmmword_8CACB8 + 1) < v3 )
    {
      qword_8CACB0 = qvector_reserve(&qword_8CACB0, qword_8CACB0, xmmword_8CACB8 + 1, 24);
      v2 = qword_8CACB0;
      *(_QWORD *)&v1 = xmmword_8CACB8;
    }
    v5 = _mm_loadu_si128(&v15);
    v6 = v2 + 24 * v1;
    *(_QWORD *)v6 = v14;
    *(__m128i *)(v6 + 8) = v5;
    *(_QWORD *)&xmmword_8CACB8 = xmmword_8CACB8 + 1;
  }
  return v16 - __readfsqword(0x28u);
}
