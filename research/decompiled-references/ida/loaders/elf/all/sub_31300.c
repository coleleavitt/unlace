unsigned __int64 __fastcall sub_31300(const __m128i **a1, const __m128i *a2)
{
  const __m128i *v3; // rdx
  const __m128i *v6; // rax
  const __m128i *v7; // r13
  __m128i v8; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int8 *v12; // rax
  __int64 v13; // rax
  const __m128i *v14; // rdx
  const __m128i *v15; // r14
  const __m128i *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __m128i v19; // xmm0
  bool v20; // cf
  __int64 v21; // rax
  const __m128i *v22; // rdx
  const __m128i *v23; // r14
  const __m128i *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __m128i v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+10h] [rbp-38h]
  unsigned __int64 v30; // [rsp+18h] [rbp-30h]

  v3 = a1[1];
  v30 = __readfsqword(0x28u);
  v28 = 0;
  v29 = 0;
  if ( a2 < v3 )
    goto LABEL_9;
  if ( v3 < a2 )
  {
    v6 = *a1;
    v7 = a1[2];
    if ( &v28 < *a1 || &v28 >= (const __m128i *)((char *)v6 + 24 * (_QWORD)v7) )
    {
      if ( v7 < a2 )
      {
        v13 = qvector_reserve(a1, 0, a2, 24);
        v14 = a1[1];
        v15 = a1[2];
        a1[2] = v7;
        v16 = *a1;
        v17 = v13;
        v18 = (__int64)&v14[-1].m128i_i64[1] + 7;
        if ( v18 >= 0 )
        {
          do
          {
            v19 = _mm_loadu_si128(v16);
            v13 += 24;
            v16 = (const __m128i *)((char *)v16 + 24);
            *(__m128i *)(v13 - 24) = v19;
            *(_QWORD *)(v13 - 8) = v16[-1].m128i_i64[1];
            v20 = v18-- == 0;
          }
          while ( !v20 );
          v16 = *a1;
        }
        qfree(v16);
        v3 = a1[1];
        *a1 = (const __m128i *)v17;
        a1[2] = v15;
        if ( v3 >= a2 )
          goto LABEL_9;
        v6 = (const __m128i *)v17;
      }
      v8 = _mm_load_si128(&v28);
      v9 = v29;
      v10 = 3LL * (_QWORD)v3;
      while ( 1 )
      {
        v3 = (const __m128i *)((char *)v3 + 1);
        v6[1].m128i_i64[v10] = v9;
        *(__m128i *)((char *)v6 + v10 * 8) = v8;
        v10 += 3;
        if ( a2 == v3 )
          break;
        v6 = *a1;
      }
    }
    else
    {
      if ( v7 >= a2 )
        goto LABEL_12;
      v21 = qvector_reserve(a1, 0, a2, 24);
      v22 = a1[1];
      v23 = a1[2];
      a1[2] = v7;
      v24 = *a1;
      v25 = v21;
      v26 = (__int64)&v22[-1].m128i_i64[1] + 7;
      if ( v26 >= 0 )
      {
        do
        {
          v27 = _mm_loadu_si128(v24);
          v21 += 24;
          v24 = (const __m128i *)((char *)v24 + 24);
          *(__m128i *)(v21 - 24) = v27;
          *(_QWORD *)(v21 - 8) = v24[-1].m128i_i64[1];
          v20 = v26-- == 0;
        }
        while ( !v20 );
        v24 = *a1;
      }
      qfree(v24);
      v3 = a1[1];
      *a1 = (const __m128i *)v25;
      v6 = (const __m128i *)v25;
      a1[2] = v23;
      if ( v3 < a2 )
      {
LABEL_12:
        v11 = 24LL * (_QWORD)v3;
        while ( 1 )
        {
          v12 = &v6->m128i_i8[v11];
          v3 = (const __m128i *)((char *)v3 + 1);
          v11 += 24;
          *((_QWORD *)v12 + 2) = 0;
          *(_OWORD *)v12 = 0;
          if ( a2 == v3 )
            break;
          v6 = *a1;
        }
      }
    }
LABEL_9:
    a1[1] = a2;
  }
  return v30 - __readfsqword(0x28u);
}

