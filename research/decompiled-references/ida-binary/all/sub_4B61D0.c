__int64 __fastcall sub_4B61D0(__m128i *a1, const __m128i *a2)
{
  const __m128i *v2; // r13
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 i; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // r8
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rbp
  size_t v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  _QWORD *v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  size_t v23; // r15
  void *v24; // rax
  __int64 result; // rax
  const __m128i *v26; // r14
  void *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  v2 = a2;
  if ( a2 != a1 )
  {
    v4 = a2->m128i_u64[1];
    if ( v4 > 1 )
    {
      v26 = (const __m128i *)a2->m128i_i64[0];
      v27 = (void *)a1->m128i_i64[0];
      if ( a1[1].m128i_i64[0] < v4 )
      {
        v29 = qvector_reserve(a1, v27, v4, 1);
        a1->m128i_i64[0] = v29;
        v27 = (void *)v29;
      }
      a1->m128i_i64[1] = v4;
      a2 = v26;
      memmove(v27, v26, v4 - 1);
      *(_BYTE *)(a1->m128i_i64[0] + v4 - 1) = 0;
    }
    else
    {
      a1->m128i_i64[1] = 0;
    }
  }
  v5 = a1[1].m128i_i64[1];
  if ( v5 )
  {
    v6 = a1[2].m128i_i64[0];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 40 * i);
        jvalue_t_clear(v8 + 3);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2->m128i_i8);
        }
        v5 = a1[1].m128i_i64[1];
      }
    }
    a1[2].m128i_i64[0] = 0;
    qfree(v5, a2->m128i_i8);
    a1[1].m128i_i64[1] = 0;
    a1[2].m128i_i64[1] = 0;
  }
  v10 = 40 * v2[2].m128i_i64[0];
  v11 = 0xCCCCCCCCCCCCCCCDLL * (v10 >> 3);
  v30 = v11;
  if ( v11 )
  {
    v12 = a1[2].m128i_i64[0];
    v13 = v2[1].m128i_i64[1];
    v14 = 0;
    v15 = 0;
    v16 = 5 * v12;
    v17 = v11 + v12;
    v18 = 8 * v16;
    if ( a1[2].m128i_i64[1] < v17 )
    {
      v31 = 40 * v2[2].m128i_i64[0];
      v15 = qvector_reserve(&a1[1].m128i_u64[1], 0, v17, 40);
      v28 = a1[2].m128i_i64[0];
      v10 = v31;
      a1[1].m128i_i64[1] = v15;
      v14 = 40 * v28 - v18;
    }
    v19 = (_QWORD *)(v15 + v18);
    v20 = v13 + v10;
    memmove((char *)v19 + v10, v19, v14);
    for ( ; v20 != v13; v19 += 5 )
    {
      *v19 = 0;
      *(_OWORD *)(v19 + 1) = 0;
      v23 = *(_QWORD *)(v13 + 8);
      if ( v23 )
      {
        v24 = (void *)qalloc_or_throw(*(_QWORD *)(v13 + 8));
        v19[2] = v23;
        *v19 = v24;
        memcpy(v24, *(const void **)v13, v23);
        v19[1] = v23;
      }
      *((_DWORD *)v19 + 6) = 0;
      jvalue_t_copy(v19 + 3, v13 + 24, v21, v22);
      v13 += 40;
    }
    a1[2].m128i_i64[0] += v30;
  }
  a1[3] = _mm_loadu_si128(v2 + 3);
  QT::QByteArray::operator=(&a1[4], &v2[4]);
  result = v2[5].m128i_u32[2];
  a1[5].m128i_i32[2] = result;
  return result;
}
