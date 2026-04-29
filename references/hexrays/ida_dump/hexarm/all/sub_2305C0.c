unsigned __int64 __fastcall sub_2305C0(__m128i *a1, unsigned __int64 *a2, const __m128i **a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  unsigned __int64 result; // rax
  char v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i v19; // xmm0
  _QWORD *exception; // rax

  v4 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v18 = qalloc(40);
    v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
    if ( !v18 )
      goto LABEL_27;
    *(_QWORD *)(v18 + 32) = 0;
    *(_OWORD *)(v18 + 16) = 0;
    *(__m128i *)(v18 + 8) = v19;
    *(_QWORD *)v18 = v18 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v18;
    *(_QWORD *)v18 = v18 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v18 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v5 = qalloc(40);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)(v5 + 32) = 0;
      *(_OWORD *)v5 = 0;
      *(_OWORD *)(v5 + 16) = 0;
      v7 = _mm_loadu_si128(*a3);
      *(_QWORD *)v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v5 + 24) = v7;
      v8 = _mm_loadl_epi64(a1);
      *(_QWORD *)v5 = v4 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v5 + 8) = _mm_unpacklo_epi64(v8, v8);
      if ( a1->m128i_i64[0] != v4 )
        goto LABEL_5;
      goto LABEL_21;
    }
    goto LABEL_27;
  }
  v10 = 1;
  result = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)result & 2) != 0 )
  {
LABEL_16:
    v14 = qalloc(40);
    v6 = v14;
    if ( v14 )
    {
      *(_QWORD *)(v14 + 32) = 0;
      *(_OWORD *)v14 = 0;
      *(_OWORD *)(v14 + 16) = 0;
      v15 = _mm_loadu_si128(*a3);
      *(_QWORD *)v14 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v14 + 24) = v15;
      v16 = _mm_loadl_epi64(a1);
      *(_QWORD *)v14 = v4 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v16, v16);
      if ( a1->m128i_i64[0] != v4 )
      {
        if ( !v10 )
        {
          *(_QWORD *)(v4 + 16) = v14;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v4 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v14;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v4 + 8) = v6;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v4 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
LABEL_7:
        sub_89B50(a1, (__int64 *)v6);
LABEL_8:
        ++a1->m128i_i64[1];
        return v6;
      }
LABEL_21:
      *(_QWORD *)v4 = v6 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v4 & 3LL;
      *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
      *(_QWORD *)(a1->m128i_i64[0] + 16) = v6;
      v17 = *(_QWORD *)v6 & 2LL;
      *(_QWORD *)v6 &= ~1uLL;
      *(_QWORD *)v6 = v17 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
  v11 = *a2;
  v12 = *(_QWORD *)(result + 24);
  if ( *a2 >= v12 )
    goto LABEL_13;
LABEL_11:
  v13 = *(_QWORD *)(result + 8);
  v10 = 1;
  if ( (*(_BYTE *)v13 & 2) != 0 )
  {
LABEL_15:
    v4 = result;
    goto LABEL_16;
  }
  while ( 1 )
  {
    result = v13;
    v12 = *(_QWORD *)(v13 + 24);
    if ( v11 < v12 )
      goto LABEL_11;
LABEL_13:
    if ( v12 >= v11 )
      break;
    v13 = *(_QWORD *)(result + 16);
    v10 = 0;
    if ( (*(_BYTE *)v13 & 2) != 0 )
      goto LABEL_15;
  }
  if ( !result )
  {
    v4 = 0;
    goto LABEL_16;
  }
  return result;
}
