unsigned __int64 __fastcall sub_4885F0(__int64 a1, QT::QAbstractItemView *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 *i; // r15
  __int64 v8; // rdx
  const char *v9; // rsi
  char *v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdx
  void *v14; // r12
  void *v15; // r13
  __int64 v17; // rax
  size_t v18; // r8
  __m128i v19; // [rsp+8h] [rbp-80h] BYREF
  size_t n; // [rsp+18h] [rbp-70h]
  __m128i v21; // [rsp+20h] [rbp-68h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v19.m128i_i64[0] = a4;
  v24 = __readfsqword(0x28u);
  if ( a3 )
  {
    v4 = *(unsigned __int64 **)(a3 + 32);
    v5 = *(_QWORD *)(a3 + 40);
    v19.m128i_i8[15] = a4 != -1;
    for ( i = &v4[v5]; i != v4; ++v4 )
    {
      v11 = *v4;
      v21 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v19), (__m128i)*v4);
      if ( !v11 || v19.m128i_i8[15] )
      {
        v12 = QT::QAbstractItemView::model(a2);
        v13 = *(_QWORD **)(v12 + 216);
        if ( !v13 )
          v13 = *(_QWORD **)(v12 + 208);
        src = nullptr;
        v23 = 0;
        dirtree_get_abspath_by_cursor(&src, *v13, &v21, 0);
        v18 = v23;
        v14 = src;
        v15 = nullptr;
        if ( (_QWORD)v23 )
        {
          n = v23;
          v15 = (void *)qalloc_or_throw(v23);
          memcpy(v15, v14, n);
          v18 = n;
        }
        v8 = *(_QWORD *)(a1 + 8);
        v9 = *(const char **)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v8 + 1) )
        {
          n = v18;
          v17 = qvector_reserve(a1, v9, v8 + 1, 24);
          v8 = *(_QWORD *)(a1 + 8);
          v18 = n;
          *(_QWORD *)a1 = v17;
          v9 = (const char *)v17;
        }
        v10 = (char *)&v9[24 * v8];
        *(_QWORD *)v10 = v15;
        *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
        ++*(_QWORD *)(a1 + 8);
        if ( v14 )
          qfree(v14, v9);
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}
