__int64 __fastcall sub_1999C0(const __m128i **a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // r15
  __int64 v9; // rax
  const __m128i *v10; // rax
  const __m128i *v11; // r13
  const __m128i *v12; // r8
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __m128i *v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  const __m128i *v21; // rdx
  const __m128i *v22; // rbp
  const __m128i *v23; // rdi
  __int64 v24; // rdx
  __m128i v25; // xmm0
  bool v26; // cf
  __int64 v27; // rax
  const __m128i *v28; // rdx
  const __m128i *v29; // rsi
  const __m128i *v30; // rdi
  __int64 v31; // rdx
  __m128i v32; // xmm0
  const __m128i *v33; // [rsp+8h] [rbp-70h]
  const __m128i *v34; // [rsp+8h] [rbp-70h]
  unsigned __int128 v35; // [rsp+10h] [rbp-68h] BYREF
  __m128i v36; // [rsp+20h] [rbp-58h] BYREF
  __int64 v37; // [rsp+30h] [rbp-48h]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v35 = __PAIR128__(a4, a3);
  v36.m128i_i64[1] = a2;
  LOBYTE(v37) = 0;
  if ( (a4 == 0) != (a3 == 0) )
  {
    if ( !under_debugger )
      sub_383060(52551);
    BUG();
  }
  v8 = -1;
  if ( a4 )
  {
    v9 = *(_QWORD *)(a4 + 24);
    v8 = v9 + 2;
    if ( v9 != *(_QWORD *)(*(_QWORD *)(a3 + 64) + 40LL) )
      v8 = v9 + 1;
  }
  v10 = a1[1];
  v11 = *a1;
  v36.m128i_i64[0] = v8;
  v12 = a1[2];
  v13 = (unsigned __int64)v10->m128i_u64 + 1;
  if ( &v35 >= (unsigned __int128 *)v11 && &v35 < (unsigned __int128 *)((char *)v11 + 40 * (_QWORD)v12) )
  {
    if ( (unsigned __int64)v12 < v13 )
    {
      v34 = a1[2];
      v27 = qvector_reserve((__int64)a1, 0, (__int64)v10->m128i_i64 + 1, 40);
      v28 = a1[1];
      v29 = a1[2];
      v30 = *a1;
      v11 = (const __m128i *)v27;
      a1[2] = v34;
      v31 = (__int64)&v28[-1].m128i_i64[1] + 7;
      if ( v31 >= 0 )
      {
        do
        {
          v32 = _mm_loadu_si128(v30);
          v27 += 40;
          v30 = (const __m128i *)((char *)v30 + 40);
          *(__m128i *)(v27 - 40) = v32;
          *(__m128i *)(v27 - 24) = _mm_loadu_si128((const __m128i *)((char *)v30 - 24));
          *(_QWORD *)(v27 - 8) = v30[-1].m128i_i64[1];
          v26 = v31-- == 0;
        }
        while ( !v26 );
        v30 = *a1;
      }
      qfree((__int64)v30);
      v10 = a1[1];
      *a1 = v11;
      a1[2] = v29;
    }
    v19 = &v11->m128i_i64[5 * (_QWORD)v10];
    *v19 = a3;
    v19[1] = a4;
    v19[2] = v8;
    v19[3] = a2;
    *((_BYTE *)v19 + 32) = 0;
  }
  else
  {
    if ( (unsigned __int64)v12 < v13 )
    {
      v33 = a1[2];
      v20 = qvector_reserve((__int64)a1, 0, (__int64)v10->m128i_i64 + 1, 40);
      v21 = a1[1];
      v22 = a1[2];
      v23 = *a1;
      v11 = (const __m128i *)v20;
      a1[2] = v33;
      v24 = (__int64)&v21[-1].m128i_i64[1] + 7;
      if ( v24 >= 0 )
      {
        do
        {
          v25 = _mm_loadu_si128(v23);
          v20 += 40;
          v23 = (const __m128i *)((char *)v23 + 40);
          *(__m128i *)(v20 - 40) = v25;
          *(__m128i *)(v20 - 24) = _mm_loadu_si128((const __m128i *)((char *)v23 - 24));
          *(_QWORD *)(v20 - 8) = v23[-1].m128i_i64[1];
          v26 = v24-- == 0;
        }
        while ( !v26 );
        v23 = *a1;
      }
      qfree((__int64)v23);
      *a1 = v11;
      v10 = a1[1];
      a1[2] = v22;
    }
    v14 = v37;
    v15 = (__m128i *)((char *)v11 + 40 * (_QWORD)v10);
    *v15 = _mm_load_si128((const __m128i *)&v35);
    v16 = _mm_load_si128(&v36);
    v15[2].m128i_i64[0] = v14;
    v15[1] = v16;
  }
  v17 = (__int64)a1[1]->m128i_i64 + 1;
  a1[1] = (const __m128i *)v17;
  return (__int64)&(*a1)[-2] + 40 * v17 - 8;
}
