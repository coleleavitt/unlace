__int64 *__fastcall sub_179AA0(const __m128i *a1, unsigned __int64 a2, int a3, char a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *exception; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 *result; // rax
  __int64 v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __m128i v25; // xmm1
  char v26; // [rsp+Fh] [rbp-39h]

  v9 = a1[1].m128i_u64[0];
  if ( !v9 )
  {
    v24 = qalloc(48);
    v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
    if ( !v24 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v24 + 16) = 0;
    *(_OWORD *)(v24 + 32) = 0;
    *(__m128i *)(v24 + 8) = v25;
    *(_QWORD *)v24 = v24 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1[1].m128i_i64[0] = v24;
    *(_QWORD *)v24 = v24 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v24 & 3LL;
    *(__m128i *)(a1[1].m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1[1].m128i_u64[0], (__m128i)a1[1].m128i_u64[0]);
    *(_QWORD *)a1[1].m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1[1].m128i_i64[0] |= 2uLL;
    v9 = a1[1].m128i_u64[0];
LABEL_3:
    v10 = qalloc(48);
    v11 = v10;
    if ( !v10 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v10 + 16) = 0;
    *(_OWORD *)v10 = 0;
    *(_QWORD *)(v10 + 24) = a2;
    *(_OWORD *)(v10 + 32) = 0;
    *(_QWORD *)v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    v12 = _mm_loadl_epi64(a1 + 1);
    *(_QWORD *)v10 = v9 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v12, v12);
    if ( a1[1].m128i_i64[0] != v9 )
      goto LABEL_5;
LABEL_22:
    *(_QWORD *)v9 = v11 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v9 & 3LL;
    *(_QWORD *)(a1[1].m128i_i64[0] + 8) = v11;
    *(_QWORD *)(a1[1].m128i_i64[0] + 16) = v11;
    v23 = *(_QWORD *)v11 & 2LL;
    *(_QWORD *)v11 &= ~1uLL;
    *(_QWORD *)v11 = v23 | a1[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
  if ( !a1[1].m128i_i64[1] )
    goto LABEL_3;
  v16 = 1;
  v17 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v17 & 2) == 0 )
  {
    v18 = *(_QWORD *)(v17 + 24);
    result = (__int64 *)(v17 + 24);
    if ( a2 >= v18 )
      goto LABEL_14;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v17 + 8);
      v16 = 1;
      if ( (*(_BYTE *)v19 & 2) != 0 )
        break;
      while ( 1 )
      {
        v17 = v19;
        v18 = *(_QWORD *)(v19 + 24);
        result = (__int64 *)(v19 + 24);
        if ( a2 < v18 )
          break;
LABEL_14:
        if ( v18 >= a2 )
        {
          if ( v17 )
            goto LABEL_9;
          v9 = 0;
          goto LABEL_17;
        }
        v19 = *(_QWORD *)(v17 + 16);
        v16 = 0;
        if ( (*(_BYTE *)v19 & 2) != 0 )
          goto LABEL_16;
      }
    }
LABEL_16:
    v9 = v17;
  }
LABEL_17:
  v26 = v16;
  v20 = qalloc(48);
  v11 = v20;
  if ( !v20 )
  {
    v4 = __cxa_allocate_exception(8u);
    *v4 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_OWORD *)(v20 + 16) = 0;
  *(_OWORD *)v20 = 0;
  *(_QWORD *)(v20 + 24) = a2;
  *(_OWORD *)(v20 + 32) = 0;
  *(_QWORD *)v20 = v9 & 0xFFFFFFFFFFFFFFFCLL;
  v21 = _mm_loadl_epi64(a1 + 1);
  *(_QWORD *)v20 = v9 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v21, v21);
  if ( a1[1].m128i_i64[0] == v9 )
    goto LABEL_22;
  if ( !v26 )
  {
    *(_QWORD *)(v9 + 16) = v20;
    v22 = a1[1].m128i_i64[0];
    if ( *(_QWORD *)(v22 + 16) == v9 )
      *(_QWORD *)(v22 + 16) = v11;
    goto LABEL_7;
  }
LABEL_5:
  *(_QWORD *)(v9 + 8) = v11;
  v13 = a1[1].m128i_i64[0];
  if ( *(_QWORD *)(v13 + 8) == v9 )
    *(_QWORD *)(v13 + 8) = v11;
LABEL_7:
  sub_1796C0((const __m128i *)a1[1].m128i_i64, (__int64 *)v11);
LABEL_8:
  ++a1[1].m128i_i64[1];
  result = (__int64 *)(v11 + 24);
LABEL_9:
  v15 = *(_QWORD *)(a2 + 24);
  *((_DWORD *)result + 4) = a3;
  *((_BYTE *)result + 20) = a4;
  result[1] = v15;
  return result;
}
