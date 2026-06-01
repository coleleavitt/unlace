unsigned __int64 __fastcall sub_17A740(TListViewer *this, double a2, __m128i a3, __m128 a4, __int64 a5, __int64 *a6)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  size_t v13; // r13
  char *v14; // r12
  unsigned __int64 *v15; // r13
  unsigned __int64 *v16; // r15
  __int64 v17; // rbx
  __m128i *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  char *v22; // r13
  unsigned __int64 v23; // rdx
  __m128i *v24; // rbx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 *v28; // rsi
  int v29; // eax
  __m128i *src; // [rsp+10h] [rbp-58h]
  __int128 v31; // [rsp+18h] [rbp-50h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v7 = sub_182CC0(*((_QWORD *)this + 14) + 160LL, a6[1]);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  TListViewer::setRange(this, v8);
  v9 = *(_QWORD *)(*((_QWORD *)this + 14) + 2632LL);
  if ( v9 )
  {
    a3 = _mm_cvtsi32_si128((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7));
    *(_QWORD *)(v9 + 72) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD *)this + 24)), a3).m128i_u64[0];
  }
  v10 = *a6;
  if ( !*a6 || (v11 = *(_QWORD *)(v10 + 16)) == 0 )
  {
    *((_DWORD *)this + 24) = -1;
    *((_DWORD *)this + 26) = -1;
    TView::drawView(this);
    return v32 - __readfsqword(0x28u);
  }
  v13 = 8 * v11;
  v14 = (char *)qalloc_or_throw();
  memcpy(v14, *(const void **)(v10 + 8), v13);
  v15 = (unsigned __int64 *)&v14[v13];
  src = nullptr;
  v31 = 0;
  if ( v15 == (unsigned __int64 *)v14 )
    goto LABEL_32;
  v16 = (unsigned __int64 *)v14;
  do
  {
    while ( 1 )
    {
      v17 = sub_17A5D0((__int64)this, *v16);
      if ( v17 >= 0 )
        break;
      if ( v15 == ++v16 )
        goto LABEL_17;
    }
    v18 = src;
    v19 = v31;
    if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
    {
      src = (__m128i *)qvector_reserve();
      v18 = src;
      v19 = v31;
    }
    ++v16;
    v18->m128i_i64[v19] = v17;
    *(_QWORD *)&v31 = v31 + 1;
  }
  while ( v15 != v16 );
LABEL_17:
  v20 = v31;
  v21 = 8 * v31;
  v22 = &src->m128i_i8[8 * v31];
  if ( src == (__m128i *)v22 )
    goto LABEL_25;
  if ( v21 >> 3 )
  {
    _BitScanReverse64(&v23, v21 >> 3);
    sub_17A3D0(src, (unsigned __int64 *)src + v31, 2LL * (int)v23, 0.0, *(double *)a3.m128i_i64, a4);
    if ( v21 > 128 )
    {
      v24 = src + 8;
      sub_17A300(src->m128i_i8, src[8].m128i_i8);
      do
      {
        v25 = v24->m128i_i64[0];
        v26 = v24[-1].m128i_u64[1];
        v27 = &v24[-1].m128i_i64[1];
        if ( v24->m128i_i64[0] >= v26 )
        {
          v28 = (__int64 *)v24;
        }
        else
        {
          do
          {
            v27[1] = v26;
            v28 = v27;
            v26 = *--v27;
          }
          while ( v25 < v26 );
        }
        v24 = (__m128i *)((char *)v24 + 8);
        *v28 = v25;
      }
      while ( v22 != (char *)v24 );
      goto LABEL_24;
    }
  }
  else
  {
    sub_17A3D0(src, (unsigned __int64 *)src + v31, -2, 0.0, *(double *)a3.m128i_i64, a4);
  }
  sub_17A300(src->m128i_i8, v22);
LABEL_24:
  v20 = v31;
LABEL_25:
  if ( !v20 )
  {
LABEL_32:
    v29 = -1;
    goto LABEL_27;
  }
  v29 = src->m128i_i32[0];
LABEL_27:
  *((_DWORD *)this + 24) = v29;
  *((_DWORD *)this + 26) = -1;
  TView::drawView(this);
  if ( src )
    qfree();
  if ( v14 )
    qfree();
  return v32 - __readfsqword(0x28u);
}

