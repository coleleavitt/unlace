unsigned __int64 __fastcall sub_37A240(__m128i *a1, const __m128i *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __m128i v5; // xmm0
  char v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  bool v10; // cc
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm0
  _QWORD *exception; // rax

  v2 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v15 = qalloc();
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
    if ( !v15 )
      goto LABEL_27;
    *(_QWORD *)(v15 + 32) = 0;
    *(_OWORD *)(v15 + 16) = 0;
    *(__m128i *)(v15 + 8) = v16;
    *(_QWORD *)v15 = v15 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v15;
    *(_QWORD *)v15 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v2 = a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v3 = qalloc();
    v4 = v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 32) = 0;
      *(_OWORD *)(v3 + 16) = 0;
      *(_OWORD *)v3 = 0;
      *(__m128i *)(v3 + 24) = _mm_loadu_si128(a2);
      *(_QWORD *)v3 = v2 & 0xFFFFFFFFFFFFFFFCLL;
      v5 = _mm_loadl_epi64(a1);
      *(_QWORD *)v3 = v2 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v3 + 8) = _mm_unpacklo_epi64(v5, v5);
      if ( a1->m128i_i64[0] != v2 )
        goto LABEL_5;
      goto LABEL_21;
    }
    goto LABEL_27;
  }
  v7 = 1;
  v8 = *(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
LABEL_16:
    v12 = qalloc();
    v4 = v12;
    if ( v12 )
    {
      *(_QWORD *)(v12 + 32) = 0;
      *(_OWORD *)(v12 + 16) = 0;
      *(_OWORD *)v12 = 0;
      *(__m128i *)(v12 + 24) = _mm_loadu_si128(a2);
      *(_QWORD *)v12 = v2 & 0xFFFFFFFFFFFFFFFCLL;
      v13 = _mm_loadl_epi64(a1);
      *(_QWORD *)v12 = v2 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v13, v13);
      if ( a1->m128i_i64[0] != v2 )
      {
        if ( !v7 )
        {
          *(_QWORD *)(v2 + 16) = v12;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v2 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v12;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v2 + 8) = v4;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v2 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v4;
LABEL_7:
        sub_D7DE0(a1, (__int64 *)v4);
LABEL_8:
        ++a1->m128i_i64[1];
        return v4;
      }
LABEL_21:
      *(_QWORD *)v2 = v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v2 & 3LL;
      *(_QWORD *)(a1->m128i_i64[0] + 8) = v4;
      *(_QWORD *)(a1->m128i_i64[0] + 16) = v4;
      v14 = *(_QWORD *)v4 & 2LL;
      *(_QWORD *)v4 &= ~1uLL;
      *(_QWORD *)v4 = v14 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_8;
    }
LABEL_27:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v9 = a2->m128i_i64[0];
  v10 = a2->m128i_i64[0] <= *(_QWORD *)(v8 + 24);
  if ( a2->m128i_i64[0] >= *(_QWORD *)(v8 + 24) )
    goto LABEL_13;
LABEL_11:
  v11 = *(_QWORD *)(v8 + 8);
  v7 = 1;
  if ( (*(_BYTE *)v11 & 2) != 0 )
  {
LABEL_15:
    v2 = v8;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v8 = v11;
    v10 = v9 <= *(_QWORD *)(v11 + 24);
    if ( v9 < *(_QWORD *)(v11 + 24) )
      goto LABEL_11;
LABEL_13:
    if ( v10 )
      break;
    v11 = *(_QWORD *)(v8 + 16);
    v7 = 0;
    if ( (*(_BYTE *)v11 & 2) != 0 )
      goto LABEL_15;
  }
  if ( !v8 )
  {
    v2 = 0;
    goto LABEL_16;
  }
  return v8;
}
