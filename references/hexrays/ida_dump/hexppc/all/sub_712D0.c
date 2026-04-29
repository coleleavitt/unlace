__int64 __fastcall sub_712D0(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  _QWORD *exception; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  int v7; // ebp
  _QWORD *v9; // rdi
  signed int v10; // esi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // xmm2_8
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rax
  char v19; // r14
  unsigned __int64 v20; // rax
  bool v21; // cc
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm0

  v7 = HIDWORD(a4);
  v9 = *a2;
  v10 = a4;
  if ( !v9 )
    goto LABEL_13;
  if ( (*v9 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    while ( 1 )
      ;
  }
  if ( (*(_BYTE *)(*v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_13;
  while ( 2 )
  {
    v11 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      if ( *(_DWORD *)(v11 + 24) > v10 )
      {
LABEL_24:
        v11 = *(_QWORD *)(v11 + 8);
        goto LABEL_12;
      }
      if ( *(_DWORD *)(v11 + 24) == v10 )
      {
        if ( *(_DWORD *)(v11 + 28) > v7 )
          goto LABEL_24;
        if ( *(_DWORD *)(v11 + 28) >= v7 )
          break;
      }
      v11 = *(_QWORD *)(v11 + 16);
LABEL_12:
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_13;
    }
    if ( v9 != (_QWORD *)v11 )
    {
      v10 = *(_DWORD *)(v11 + 32);
      v7 = *(_DWORD *)(v11 + 36);
      continue;
    }
    break;
  }
LABEL_13:
  v12 = *(_QWORD *)(a3 + 184);
  v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(v10)).m128i_u64[0];
  if ( !v12 )
  {
    v27 = qalloc(40);
    v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
    if ( !v27 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v27 + 32) = 0;
    *(_OWORD *)(v27 + 16) = 0;
    *(__m128i *)(v27 + 8) = v28;
    *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a3 + 184) = v27;
    *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v27 & 3LL;
    *(__m128i *)(*(_QWORD *)(a3 + 184) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a3 + 184),
                                                  (__m128i)*(unsigned __int64 *)(a3 + 184));
    **(_QWORD **)(a3 + 184) &= ~1uLL;
    **(_QWORD **)(a3 + 184) |= 2uLL;
    v12 = *(_QWORD *)(a3 + 184);
LABEL_15:
    v14 = qalloc(40);
    v15 = v14;
    if ( !v14 )
    {
      v6 = __cxa_allocate_exception(8u);
      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v14 + 32) = 0;
    *(_OWORD *)v14 = 0;
    *(_OWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 24) = v13;
    *(_QWORD *)v14 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    *(_DWORD *)(v14 + 32) = v7;
    v16 = _mm_loadl_epi64((const __m128i *)(a3 + 184));
    *(_QWORD *)v14 = v12 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v16, v16);
    if ( v12 != *(_QWORD *)(a3 + 184) )
      goto LABEL_17;
LABEL_37:
    *(_QWORD *)v12 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v12 & 3LL;
    *(_QWORD *)(*(_QWORD *)(a3 + 184) + 8LL) = v15;
    *(_QWORD *)(*(_QWORD *)(a3 + 184) + 16LL) = v15;
    v26 = *(_QWORD *)v15 & 2LL;
    *(_QWORD *)v15 &= ~1uLL;
    *(_QWORD *)v15 = v26 | *(_QWORD *)(a3 + 184) & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_20;
  }
  if ( !*(_QWORD *)(a3 + 192) )
    goto LABEL_15;
  v19 = 1;
  v20 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v20 & 2) == 0 )
  {
    v21 = (int)a4 <= *(_DWORD *)(v20 + 24);
    if ( (int)a4 >= *(_DWORD *)(v20 + 24) )
      goto LABEL_29;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v20 + 8);
      v19 = 1;
      if ( (*(_BYTE *)v22 & 2) != 0 )
        break;
      while ( 1 )
      {
        v20 = v22;
        v21 = (int)a4 <= *(_DWORD *)(v22 + 24);
        if ( (int)a4 < *(_DWORD *)(v22 + 24) )
          break;
LABEL_29:
        if ( v21 )
        {
          if ( v20 )
            return sub_6C680(a3, v7);
          v12 = 0;
          goto LABEL_32;
        }
        v22 = *(_QWORD *)(v20 + 16);
        v19 = 0;
        if ( (*(_BYTE *)v22 & 2) != 0 )
          goto LABEL_31;
      }
    }
LABEL_31:
    v12 = v20;
  }
LABEL_32:
  v23 = qalloc(40);
  v15 = v23;
  if ( !v23 )
  {
    v5 = __cxa_allocate_exception(8u);
    *v5 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v23 + 32) = 0;
  *(_OWORD *)v23 = 0;
  *(_OWORD *)(v23 + 16) = 0;
  *(_QWORD *)(v23 + 24) = v13;
  *(_QWORD *)v23 = v12 & 0xFFFFFFFFFFFFFFFCLL;
  *(_DWORD *)(v23 + 32) = v7;
  v24 = _mm_loadl_epi64((const __m128i *)(a3 + 184));
  *(_QWORD *)v23 = v12 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v24, v24);
  if ( v12 == *(_QWORD *)(a3 + 184) )
    goto LABEL_37;
  if ( v19 )
  {
LABEL_17:
    *(_QWORD *)(v12 + 8) = v15;
    v17 = *(_QWORD *)(a3 + 184);
    if ( v12 == *(_QWORD *)(v17 + 8) )
      *(_QWORD *)(v17 + 8) = v15;
    goto LABEL_19;
  }
  *(_QWORD *)(v12 + 16) = v23;
  v25 = *(_QWORD *)(a3 + 184);
  if ( v12 == *(_QWORD *)(v25 + 16) )
    *(_QWORD *)(v25 + 16) = v15;
LABEL_19:
  sub_70EF0((_QWORD *)(a3 + 184), (__int64 *)v15);
LABEL_20:
  ++*(_QWORD *)(a3 + 192);
  return sub_6C680(a3, v7);
}
