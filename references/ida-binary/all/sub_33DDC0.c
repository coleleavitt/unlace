__int64 __fastcall sub_33DDC0(
        QT::QAbstractItemView *this,
        __m128i *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  const char *v14; // rsi
  __m128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // r12
  unsigned __int64 v18; // rbp
  __int64 v19; // rdi
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  void *v23; // rax
  __m128i v24; // [rsp+0h] [rbp-88h] BYREF
  __int64 v25; // [rsp+17h] [rbp-71h] BYREF
  char v26; // [rsp+1Fh] [rbp-69h]
  __m128i v27; // [rsp+20h] [rbp-68h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v29; // [rsp+38h] [rbp-50h]
  __m128 v30; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v11 = sub_33D640(-1, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v11 == -1 )
    return 0;
  v12 = v11;
  src = nullptr;
  v29 = 0;
  v30 = (__m128)-1LL;
  v13 = QT::QAbstractItemView::model(this);
  v14 = *(const char **)(v13 + 216);
  if ( !v14 )
    v14 = *(const char **)(v13 + 208);
  v25 = v12;
  v26 = 0;
  v27 = (__m128i)-1LL;
  dirtree_find_entry(&v27, v14, &v25);
  v15 = (__m128)_mm_load_si128(&v27);
  v30 = v15;
  if ( v15.m128_u64[0] != -1 || !_mm_movehl_ps(a4, v15).m128_u64[0] )
  {
    v16 = v29;
    v14 = (const char *)src;
    if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
    {
      v24 = (__m128i)v15;
      src = (void *)qvector_reserve(&src, src, v29 + 1, 16);
      v16 = v29;
      v14 = (const char *)src;
      v15 = (__m128)_mm_load_si128(&v24);
    }
    v17 = 0;
    *(__m128 *)&v14[16 * v16] = v15;
    v18 = v29 + 1;
    *(_QWORD *)&v29 = v18;
    if ( v18 )
    {
      v23 = (void *)qalloc_or_throw(16 * v18);
      v14 = (const char *)src;
      v17 = (__int64)v23;
      memcpy(v23, src, 16 * v18);
    }
    v19 = a2[4].m128i_i64[1];
    v20 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
    if ( v19 )
    {
      a2[5].m128i_i64[0] = 0;
      v24 = v20;
      qfree(v19, v14);
      v20 = _mm_load_si128(&v24);
    }
    a2[8].m128i_i32[2] |= 2u;
    a2[5] = v20;
    v21 = _mm_loadu_si128((const __m128i *)&v30);
    a2[4].m128i_i64[1] = v17;
    a2[6] = v21;
  }
  if ( src )
  {
    *(_QWORD *)&v29 = 0;
    qfree(src, v14);
  }
  return 2;
}
