unsigned __int64 __fastcall sub_3FC6F0(__m128i *a1, __int64 a2, const __m128i **a3)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rbx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  unsigned __int64 result; // rax
  char v14; // r14
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // dl
  __int64 v17; // rdi
  _BYTE *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i v24; // xmm0
  _QWORD *exception; // rax

  v5 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v23 = qalloc(40);
    v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
    if ( !v23 )
      goto LABEL_30;
    *(_QWORD *)(v23 + 32) = 0;
    *(_OWORD *)(v23 + 16) = 0;
    *(__m128i *)(v23 + 8) = v24;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v23;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v6 = qalloc(40);
    v10 = v6;
    if ( v6 )
    {
      *(_QWORD *)(v6 + 32) = 0;
      *(_OWORD *)v6 = 0;
      *(_OWORD *)(v6 + 16) = 0;
      v11 = _mm_loadu_si128(*a3);
      *(_QWORD *)v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v6 + 24) = v11;
      v12 = _mm_loadl_epi64(a1);
      *(_QWORD *)v6 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v12, v12);
      if ( a1->m128i_i64[0] != v5 )
        goto LABEL_5;
      goto LABEL_19;
    }
    goto LABEL_30;
  }
  v14 = 1;
  result = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)result & 2) != 0 )
    goto LABEL_22;
  v15 = *(_BYTE *)(a2 + 8);
  while ( 1 )
  {
    v16 = *(_BYTE *)(result + 32);
    if ( v15 >= v16 )
    {
      if ( v16 < v15 )
        goto LABEL_17;
      v17 = *(_QWORD *)(result + 24);
      if ( *(_QWORD *)a2 >= v17 )
        break;
    }
    v18 = *(_BYTE **)(result + 8);
    v14 = 1;
    if ( (*v18 & 2) != 0 )
    {
LABEL_21:
      v5 = result;
      goto LABEL_22;
    }
LABEL_18:
    result = (unsigned __int64)v18;
  }
  if ( *(_QWORD *)a2 > v17 )
  {
LABEL_17:
    v18 = *(_BYTE **)(result + 16);
    v14 = 0;
    if ( (*v18 & 2) != 0 )
      goto LABEL_21;
    goto LABEL_18;
  }
  if ( !result )
  {
    v5 = 0;
LABEL_22:
    v20 = qalloc(40);
    v10 = v20;
    if ( v20 )
    {
      *(_QWORD *)(v20 + 32) = 0;
      *(_OWORD *)v20 = 0;
      *(_OWORD *)(v20 + 16) = 0;
      v21 = _mm_loadu_si128(*a3);
      *(_QWORD *)v20 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v20 + 24) = v21;
      v22 = _mm_loadl_epi64(a1);
      *(_QWORD *)v20 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v22, v22);
      if ( a1->m128i_i64[0] != v5 )
      {
        if ( !v14 )
        {
          *(_QWORD *)(v5 + 16) = v20;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v5 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v20;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v5 + 8) = v10;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v5 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v10;
LABEL_7:
        sub_1072C0(a1, (__int64 *)v10, v7, v8, v9);
LABEL_8:
        ++a1->m128i_i64[1];
        return v10;
      }
LABEL_19:
      *(_QWORD *)v5 = v10 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      *(_QWORD *)(a1->m128i_i64[0] + 8) = v10;
      *(_QWORD *)(a1->m128i_i64[0] + 16) = v10;
      v19 = *(_QWORD *)v10 & 2LL;
      *(_QWORD *)v10 &= ~1uLL;
      *(_QWORD *)v10 = v19 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_8;
    }
LABEL_30:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  return result;
}
