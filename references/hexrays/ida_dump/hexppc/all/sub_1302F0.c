unsigned __int64 __fastcall sub_1302F0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  _QWORD *exception; // rax
  __m128i *v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __m128i v8; // xmm0
  unsigned __int64 result; // rax
  char v10; // r13
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm0

  v4 = *(__m128i **)(a1 + 72);
  v5 = v4->m128i_i64[0];
  if ( !v4->m128i_i64[0] )
  {
    v17 = qalloc(32);
    v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
    if ( !v17 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v17 + 16) = 0;
    *(__m128i *)(v17 + 8) = v18;
    *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v4->m128i_i64[0] = v17;
    *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 3LL;
    *(__m128i *)(v4->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v4->m128i_u64[0], (__m128i)v4->m128i_u64[0]);
    *(_QWORD *)v4->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v4->m128i_i64[0] |= 2uLL;
    v5 = v4->m128i_i64[0];
LABEL_3:
    v6 = qalloc(32);
    v7 = v6;
    if ( !v6 )
    {
      v2 = __cxa_allocate_exception(8u);
      *v2 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)v6 = 0;
    *(_OWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    v8 = _mm_loadl_epi64(v4);
    *(_QWORD *)v6 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v8, v8);
    if ( v4->m128i_i64[0] != v5 )
      goto LABEL_5;
LABEL_22:
    *(_QWORD *)v5 = v7 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
    *(_QWORD *)(v4->m128i_i64[0] + 8) = v7;
    *(_QWORD *)(v4->m128i_i64[0] + 16) = v7;
    v16 = *(_QWORD *)v7 & 2LL;
    *(_QWORD *)v7 &= ~1uLL;
    result = v16 | v4->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)v7 = result;
    goto LABEL_8;
  }
  if ( !v4->m128i_i64[1] )
    goto LABEL_3;
  v10 = 1;
  result = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)result & 2) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(result + 24);
    if ( v11 >= v12 )
      goto LABEL_14;
    while ( 1 )
    {
      v13 = *(_QWORD *)(result + 8);
      v10 = 1;
      if ( (*(_BYTE *)v13 & 2) != 0 )
        break;
      while ( 1 )
      {
        result = v13;
        v12 = *(_QWORD *)(v13 + 24);
        if ( v11 < v12 )
          break;
LABEL_14:
        if ( v12 >= v11 )
        {
          if ( result )
            return result;
          v5 = 0;
          goto LABEL_17;
        }
        v13 = *(_QWORD *)(result + 16);
        v10 = 0;
        if ( (*(_BYTE *)v13 & 2) != 0 )
          goto LABEL_16;
      }
    }
LABEL_16:
    v5 = result;
  }
LABEL_17:
  v14 = qalloc(32);
  v7 = v14;
  if ( !v14 )
  {
    v1 = __cxa_allocate_exception(8u);
    *v1 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v1, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_OWORD *)v14 = 0;
  *(_OWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v14 = v5 & 0xFFFFFFFFFFFFFFFCLL;
  v15 = _mm_loadl_epi64(v4);
  *(_QWORD *)v14 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v15, v15);
  if ( v4->m128i_i64[0] == v5 )
    goto LABEL_22;
  if ( !v10 )
  {
    *(_QWORD *)(v5 + 16) = v14;
    if ( *(_QWORD *)(v4->m128i_i64[0] + 16) == v5 )
      *(_QWORD *)(v4->m128i_i64[0] + 16) = v14;
    goto LABEL_7;
  }
LABEL_5:
  *(_QWORD *)(v5 + 8) = v7;
  if ( *(_QWORD *)(v4->m128i_i64[0] + 8) == v5 )
    *(_QWORD *)(v4->m128i_i64[0] + 8) = v7;
LABEL_7:
  result = (unsigned __int64)sub_12FF10(v4, (__int64 *)v7);
LABEL_8:
  ++v4->m128i_i64[1];
  return result;
}
