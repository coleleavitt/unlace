bool __fastcall sub_4B16A0(__int64 a1, const char *a2, char a3)
{
  size_t v5; // rax
  __int64 v6; // r15
  size_t v7; // r14
  void *v8; // r14
  unsigned __int64 v9; // rdx
  const char *v10; // rcx
  int *v11; // r12
  _QWORD *v12; // r12
  bool result; // al
  bool v14; // r13
  unsigned __int64 i; // r15
  void *v16; // r14
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  char *v19; // rax
  void *v20; // rdi
  unsigned __int64 v21; // rdi
  __m128i v22; // xmm0
  char *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  const char *v26; // rsi
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-68h] BYREF
  void *v29; // [rsp+10h] [rbp-58h] BYREF
  __m128i v30; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v30 = 0;
  v29 = nullptr;
  if ( !a2 )
  {
    v11 = (int *)sub_4B1590((__int64)&unk_8D1CA0, (__int64)&v29);
    if ( v11 != &dword_8D1CA8 )
      goto LABEL_5;
    return 0;
  }
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  v29 = (void *)qvector_reserve(&v29, 0, v5 + 1, 1);
  v30.m128i_i64[0] = v6;
  memmove(v29, a2, v7);
  *((_BYTE *)v29 + v7) = 0;
  v8 = v29;
  v11 = (int *)sub_4B1590((__int64)&unk_8D1CA0, (__int64)&v29);
  if ( v8 )
  {
    v30.m128i_i64[0] = 0;
    qfree(v8, (const char *)&v29);
  }
  if ( v11 == &dword_8D1CA8 )
    return 0;
LABEL_5:
  if ( a3 )
  {
    v12 = *((_QWORD **)v11 + 9);
  }
  else if ( byte_8D1CD0 )
  {
    v12 = *((_QWORD **)v11 + 8);
  }
  else
  {
    v12 = *((_QWORD **)v11 + 7);
  }
  result = v12 != nullptr;
  v14 = v12 != nullptr && a1 != 0;
  if ( v14 )
  {
    for ( i = 0; i < v12[1]; ++i )
    {
      while ( 1 )
      {
        sub_4B0E40((__int64)&v29, *(_WORD *)(*v12 + 2 * i), (_QWORD *)v9, (unsigned __int64)v10);
        v27 = *(_QWORD *)(a1 + 8);
        v26 = *(const char **)a1;
        v9 = *(_QWORD *)(a1 + 16);
        v21 = v27 + 1;
        if ( (unsigned __int64)&v29 >= *(_QWORD *)a1 )
        {
          v10 = &v26[24 * v9];
          if ( &v29 < (void **)v10 )
            break;
        }
        if ( v9 < v21 )
        {
          v24 = qvector_reserve(a1, v26, v27 + 1, 24);
          *(_QWORD *)a1 = v24;
          v26 = (const char *)v24;
          v27 = *(_QWORD *)(a1 + 8);
        }
        v9 = (unsigned __int64)v29;
        v22 = _mm_loadu_si128(&v30);
        ++i;
        v23 = (char *)&v26[24 * v27];
        *(_QWORD *)v23 = v29;
        *(__m128i *)(v23 + 8) = v22;
        ++*(_QWORD *)(a1 + 8);
        if ( i >= v12[1] )
          return v14;
      }
      v16 = v29;
      v17 = _mm_loadl_epi64(&v30);
      v29 = nullptr;
      v18 = _mm_loadl_epi64((const __m128i *)&v30.m128i_u64[1]);
      v30 = 0;
      if ( v9 < v21 )
      {
        v28.m128i_i64[1] = v18.m128i_i64[0];
        v28.m128i_i64[0] = v17.m128i_i64[0];
        v25 = qvector_reserve(a1, v26, v27 + 1, 24);
        *(_QWORD *)a1 = v25;
        v26 = (const char *)v25;
        v27 = *(_QWORD *)(a1 + 8);
        v18 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
        v17 = _mm_loadl_epi64(&v28);
      }
      v19 = (char *)&v26[24 * v27];
      *(_QWORD *)v19 = v16;
      *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v17, v18);
      v20 = v29;
      ++*(_QWORD *)(a1 + 8);
      if ( v20 )
      {
        v30.m128i_i64[0] = 0;
        qfree(v20, v26);
      }
    }
    return v14;
  }
  return result;
}
