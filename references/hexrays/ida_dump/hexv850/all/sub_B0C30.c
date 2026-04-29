unsigned __int64 __fastcall sub_B0C30(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *exception; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __m128i v11; // xmm0
  __int64 v12; // rax
  char i; // cl
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i v22; // xmm0
  char v23; // [rsp+Fh] [rbp-39h]

  result = sub_9FD60(a1, a3);
  if ( result == a2 )
    return result;
  v7 = *(_QWORD *)(a1 + 1144);
  v8 = result;
  if ( !v7 )
  {
    v21 = qalloc(40);
    v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
    if ( !v21 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v21 + 32) = 0;
    *(_OWORD *)(v21 + 16) = 0;
    *(__m128i *)(v21 + 8) = v22;
    *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 1144) = v21;
    *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v21 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1144));
    **(_QWORD **)(a1 + 1144) &= ~1uLL;
    **(_QWORD **)(a1 + 1144) |= 2uLL;
    v7 = *(_QWORD *)(a1 + 1144);
LABEL_4:
    v9 = qalloc(40);
    v10 = v9;
    if ( !v9 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v9 + 32) = 0;
    *(_OWORD *)(v9 + 16) = 0;
    *(_OWORD *)v9 = 0;
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)v9 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = _mm_loadl_epi64((const __m128i *)(a1 + 1144));
    *(_QWORD *)v9 = v7 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v11, v11);
    if ( *(_QWORD *)(a1 + 1144) != v7 )
      goto LABEL_6;
    goto LABEL_23;
  }
  if ( !*(_QWORD *)(a1 + 1152) )
    goto LABEL_4;
  i = 1;
  v14 = *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v14 & 2) == 0 )
  {
    v18 = *(_QWORD *)(v14 + 24);
    result = v14 + 24;
    if ( a2 >= v18 )
      goto LABEL_21;
LABEL_18:
    v19 = *(_QWORD *)(v14 + 8);
    for ( i = 1; ; i = 0 )
    {
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
        v7 = v14;
        goto LABEL_12;
      }
      v14 = v19;
      v18 = *(_QWORD *)(v19 + 24);
      result = v19 + 24;
      if ( a2 < v18 )
        goto LABEL_18;
LABEL_21:
      if ( v18 >= a2 )
        break;
      v19 = *(_QWORD *)(v14 + 16);
    }
    if ( v14 )
      goto LABEL_10;
    v7 = 0;
  }
LABEL_12:
  v23 = i;
  v15 = qalloc(40);
  v10 = v15;
  if ( !v15 )
  {
    v4 = __cxa_allocate_exception(8u);
    *v4 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v15 + 32) = 0;
  *(_OWORD *)(v15 + 16) = 0;
  *(_OWORD *)v15 = 0;
  *(_QWORD *)(v15 + 24) = a2;
  *(_QWORD *)v15 = v7 & 0xFFFFFFFFFFFFFFFCLL;
  v16 = _mm_loadl_epi64((const __m128i *)(a1 + 1144));
  *(_QWORD *)v15 = v7 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64(v16, v16);
  if ( *(_QWORD *)(a1 + 1144) != v7 )
  {
    if ( !v23 )
    {
      *(_QWORD *)(v7 + 16) = v15;
      v17 = *(_QWORD *)(a1 + 1144);
      if ( *(_QWORD *)(v17 + 16) == v7 )
        *(_QWORD *)(v17 + 16) = v10;
      goto LABEL_8;
    }
LABEL_6:
    *(_QWORD *)(v7 + 8) = v10;
    v12 = *(_QWORD *)(a1 + 1144);
    if ( *(_QWORD *)(v12 + 8) == v7 )
      *(_QWORD *)(v12 + 8) = v10;
LABEL_8:
    sub_85550((_QWORD *)(a1 + 1144), (__int64 *)v10);
    goto LABEL_9;
  }
LABEL_23:
  *(_QWORD *)v7 = v10 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v7 & 3LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 8LL) = v10;
  *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 16LL) = v10;
  v20 = *(_QWORD *)v10 & 2LL;
  *(_QWORD *)v10 &= ~1uLL;
  *(_QWORD *)v10 = v20 | *(_QWORD *)(a1 + 1144) & 0xFFFFFFFFFFFFFFFCLL;
LABEL_9:
  ++*(_QWORD *)(a1 + 1152);
  result = v10 + 24;
LABEL_10:
  *(_QWORD *)(result + 8) = v8;
  return result;
}
