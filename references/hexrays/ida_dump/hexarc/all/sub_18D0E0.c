unsigned __int64 __fastcall sub_18D0E0(__m128i *a1, __int64 a2, const __m128i **a3)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  unsigned __int64 result; // rax
  char v11; // r14
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // dl
  __int64 v14; // rdi
  _BYTE *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm1
  _QWORD *exception; // rax

  v5 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v20 = qalloc(64);
    v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
    if ( !v20 )
      goto LABEL_30;
    *(_OWORD *)(v20 + 16) = 0;
    *(_OWORD *)(v20 + 32) = 0;
    *(_OWORD *)(v20 + 48) = 0;
    *(_QWORD *)v20 = v20 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v20 + 8) = v21;
    a1->m128i_i64[0] = v20;
    *(_QWORD *)v20 = v20 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v20 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v6 = qalloc(64);
    v7 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0;
      *(_OWORD *)(v6 + 16) = 0;
      *(_OWORD *)(v6 + 32) = 0;
      *(_OWORD *)(v6 + 48) = 0;
      v8 = _mm_loadu_si128(*a3);
      *(_QWORD *)(v6 + 40) = 0;
      *(__m128i *)(v6 + 24) = v8;
      *(_QWORD *)v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      *(_OWORD *)(v6 + 48) = 0;
      v9 = _mm_loadl_epi64(a1);
      *(_QWORD *)v6 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v9, v9);
      if ( a1->m128i_i64[0] != v5 )
        goto LABEL_5;
      goto LABEL_19;
    }
    goto LABEL_30;
  }
  v11 = 1;
  result = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)result & 2) != 0 )
    goto LABEL_22;
  v12 = *(_BYTE *)(a2 + 8);
  while ( 1 )
  {
    v13 = *(_BYTE *)(result + 32);
    if ( v12 >= v13 )
    {
      if ( v13 < v12 )
        goto LABEL_17;
      v14 = *(_QWORD *)(result + 24);
      if ( *(_QWORD *)a2 >= v14 )
        break;
    }
    v15 = *(_BYTE **)(result + 8);
    v11 = 1;
    if ( (*v15 & 2) != 0 )
    {
LABEL_21:
      v5 = result;
      goto LABEL_22;
    }
LABEL_18:
    result = (unsigned __int64)v15;
  }
  if ( *(_QWORD *)a2 > v14 )
  {
LABEL_17:
    v15 = *(_BYTE **)(result + 16);
    v11 = 0;
    if ( (*v15 & 2) != 0 )
      goto LABEL_21;
    goto LABEL_18;
  }
  if ( !result )
  {
    v5 = 0;
LABEL_22:
    v17 = qalloc(64);
    v7 = v17;
    if ( v17 )
    {
      *(_OWORD *)v17 = 0;
      *(_OWORD *)(v17 + 16) = 0;
      *(_OWORD *)(v17 + 32) = 0;
      *(_OWORD *)(v17 + 48) = 0;
      v18 = _mm_loadu_si128(*a3);
      *(_QWORD *)(v17 + 40) = 0;
      *(__m128i *)(v17 + 24) = v18;
      *(_QWORD *)v17 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      *(_OWORD *)(v17 + 48) = 0;
      v19 = _mm_loadl_epi64(a1);
      *(_QWORD *)v17 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v19, v19);
      if ( a1->m128i_i64[0] != v5 )
      {
        if ( !v11 )
        {
          *(_QWORD *)(v5 + 16) = v17;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v5 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v17;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v5 + 8) = v7;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v5 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
LABEL_7:
        sub_18C780(a1, (__int64 *)v7);
LABEL_8:
        ++a1->m128i_i64[1];
        return v7;
      }
LABEL_19:
      *(_QWORD *)v5 = v7 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
      *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
      v16 = *(_QWORD *)v7 & 2LL;
      *(_QWORD *)v7 &= ~1uLL;
      *(_QWORD *)v7 = v16 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
