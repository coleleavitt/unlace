void __fastcall sub_92FC0(__m128i *a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *i; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __m128i v7; // xmm0
  unsigned __int64 v8; // r12
  char v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __m128i v12; // xmm0
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm0
  _QWORD *v19; // rax
  _QWORD *exception; // rax
  _QWORD *v21; // rax

  if ( a2 != a3 )
  {
    for ( i = a2; a3 != i; ++i )
    {
      v8 = a1->m128i_i64[0];
      if ( !a1->m128i_i64[0] )
      {
        v17 = qalloc();
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
        *(_QWORD *)(v17 + 32) = 0;
        *(_OWORD *)(v17 + 16) = 0;
        *(__m128i *)(v17 + 8) = v18;
        *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | 2;
        a1->m128i_i64[0] = v17;
        *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 3LL;
        *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
        *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
        v8 = a1->m128i_i64[0];
LABEL_3:
        v5 = qalloc();
        v6 = v5;
        if ( !v5 )
        {
          v19 = __cxa_allocate_exception(8u);
          *v19 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v19,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v5 + 32) = 0;
        *(_OWORD *)(v5 + 16) = 0;
        *(_OWORD *)v5 = 0;
        *(__m128i *)(v5 + 24) = _mm_loadu_si128(i);
        *(_QWORD *)v5 = v8 & 0xFFFFFFFFFFFFFFFCLL;
        v7 = _mm_loadl_epi64(a1);
        *(_QWORD *)v5 = v8 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v5 + 8) = _mm_unpacklo_epi64(v7, v7);
        if ( a1->m128i_i64[0] == v8 )
        {
LABEL_24:
          *(_QWORD *)v8 = v6 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 3LL;
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
          *(_QWORD *)(a1->m128i_i64[0] + 16) = v6;
          v16 = *(_QWORD *)v6 & 2LL;
          *(_QWORD *)v6 &= ~1uLL;
          *(_QWORD *)v6 = v16 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
          goto LABEL_8;
        }
LABEL_5:
        *(_QWORD *)(v8 + 8) = v6;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v8 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
        goto LABEL_7;
      }
      if ( !a1->m128i_i64[1] )
        goto LABEL_3;
      v9 = 1;
      v10 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v10 & 2) == 0 )
      {
        v13 = i->m128i_i64[0];
        v14 = *(_QWORD *)(v10 + 24);
        if ( i->m128i_i64[0] < v14 )
        {
LABEL_19:
          v15 = *(_QWORD *)(v10 + 8);
          v9 = 1;
          if ( (*(_BYTE *)v15 & 2) == 0 )
            goto LABEL_20;
LABEL_23:
          v8 = v10;
          goto LABEL_13;
        }
        while ( v14 < v13 )
        {
          v15 = *(_QWORD *)(v10 + 16);
          v9 = 0;
          if ( (*(_BYTE *)v15 & 2) != 0 )
            goto LABEL_23;
LABEL_20:
          v10 = v15;
          v14 = *(_QWORD *)(v15 + 24);
          if ( v13 < v14 )
            goto LABEL_19;
        }
        if ( v10 )
          continue;
        v8 = 0;
      }
LABEL_13:
      v11 = qalloc();
      v6 = v11;
      if ( !v11 )
      {
        v21 = __cxa_allocate_exception(8u);
        *v21 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v21,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v11 + 32) = 0;
      *(_OWORD *)(v11 + 16) = 0;
      *(_OWORD *)v11 = 0;
      *(__m128i *)(v11 + 24) = _mm_loadu_si128(i);
      *(_QWORD *)v11 = v8 & 0xFFFFFFFFFFFFFFFCLL;
      v12 = _mm_loadl_epi64(a1);
      *(_QWORD *)v11 = v8 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v12, v12);
      if ( a1->m128i_i64[0] == v8 )
        goto LABEL_24;
      if ( v9 )
        goto LABEL_5;
      *(_QWORD *)(v8 + 16) = v11;
      if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v8 )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v11;
LABEL_7:
      sub_92CF0(a1, (__int64 *)v6);
LABEL_8:
      ++a1->m128i_i64[1];
    }
  }
}
