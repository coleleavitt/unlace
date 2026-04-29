unsigned __int64 __fastcall sub_342300(__m128i *a1, const __m128i *a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // r8
  unsigned __int64 v7; // rbx
  __m128i v8; // xmm0
  char v10; // r14
  _BYTE *v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm1
  _QWORD *exception; // rax

  v2 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v15 = qalloc(48);
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
    if ( !v15 )
      goto LABEL_28;
    *(_OWORD *)(v15 + 16) = 0;
    *(_OWORD *)(v15 + 32) = 0;
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
    v3 = qalloc(48);
    v7 = v3;
    if ( v3 )
    {
      *(_OWORD *)(v3 + 16) = 0;
      *(_OWORD *)(v3 + 32) = 0;
      *(_OWORD *)v3 = 0;
      *(__m128i *)(v3 + 24) = _mm_loadu_si128(a2);
      *(_QWORD *)(v3 + 40) = a2[1].m128i_i64[0];
      *(_QWORD *)v3 = v2 & 0xFFFFFFFFFFFFFFFCLL;
      v8 = _mm_loadl_epi64(a1);
      *(_QWORD *)v3 = v2 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v3 + 8) = _mm_unpacklo_epi64(v8, v8);
      if ( a1->m128i_i64[0] != v2 )
        goto LABEL_5;
      goto LABEL_20;
    }
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
  {
    v10 = 1;
    goto LABEL_14;
  }
  v2 = *(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL;
  v10 = 1;
  while ( 1 )
  {
    if ( (int)sub_253070((__int64)a2, v2 + 24) < 0 )
    {
      v11 = *(_BYTE **)(v2 + 8);
      v10 = 1;
      goto LABEL_13;
    }
    if ( (int)sub_253070(v2 + 24, (__int64)a2) >= 0 )
      break;
    v11 = *(_BYTE **)(v2 + 16);
    v10 = 0;
LABEL_13:
    if ( (*v11 & 2) != 0 )
      goto LABEL_14;
    v2 = (unsigned __int64)v11;
  }
  if ( !v2 )
  {
LABEL_14:
    v12 = qalloc(48);
    v7 = v12;
    if ( v12 )
    {
      *(_OWORD *)(v12 + 16) = 0;
      *(_OWORD *)(v12 + 32) = 0;
      *(_OWORD *)v12 = 0;
      *(__m128i *)(v12 + 24) = _mm_loadu_si128(a2);
      *(_QWORD *)(v12 + 40) = a2[1].m128i_i64[0];
      *(_QWORD *)v12 = v2 & 0xFFFFFFFFFFFFFFFCLL;
      v13 = _mm_loadl_epi64(a1);
      *(_QWORD *)v12 = v2 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v13, v13);
      if ( a1->m128i_i64[0] != v2 )
      {
        if ( !v10 )
        {
          *(_QWORD *)(v2 + 16) = v12;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v2 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v12;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v2 + 8) = v7;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v2 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
LABEL_7:
        sub_258980(a1, (__int64 *)v7, v4, v5, v6);
LABEL_8:
        ++a1->m128i_i64[1];
        return v7;
      }
LABEL_20:
      *(_QWORD *)v2 = v7 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v2 & 3LL;
      *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
      *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
      v14 = *(_QWORD *)v7 & 2LL;
      *(_QWORD *)v7 &= ~1uLL;
      *(_QWORD *)v7 = v14 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_8;
    }
LABEL_28:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  return v2;
}
