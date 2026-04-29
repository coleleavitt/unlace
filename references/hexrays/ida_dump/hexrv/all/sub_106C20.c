__int64 __fastcall sub_106C20(__m128i *a1, __int64 a2, const __m128i **a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // r14
  char v15; // r13
  unsigned __int8 v16; // al
  _BYTE *v17; // rax
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rax
  __m128i v21; // xmm0
  _QWORD *exception; // rax

  v4 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v20 = qalloc(40);
    v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
    if ( !v20 )
      goto LABEL_26;
    *(_QWORD *)(v20 + 32) = 0;
    *(_OWORD *)(v20 + 16) = 0;
    *(__m128i *)(v20 + 8) = v21;
    *(_QWORD *)v20 = v20 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v20;
    *(_QWORD *)v20 = v20 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v20 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = a1->m128i_i64[0];
LABEL_3:
    v5 = qalloc(40);
    v9 = v5;
    if ( v5 )
    {
      *(_QWORD *)(v5 + 32) = 0;
      *(_OWORD *)v5 = 0;
      *(_OWORD *)(v5 + 16) = 0;
      v10 = _mm_loadu_si128(*a3);
      *(_QWORD *)v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v5 + 24) = v10;
      v11 = _mm_loadl_epi64(a1);
      *(_QWORD *)v5 = v4 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v5 + 8) = _mm_unpacklo_epi64(v11, v11);
      if ( a1->m128i_i64[0] == v4 )
      {
        *(_QWORD *)v4 = v5 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v4 & 3LL;
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v5;
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v5;
        v19 = *(_QWORD *)v5 & 2LL;
        *(_QWORD *)v5 &= ~1uLL;
        *(_QWORD *)v5 = v19 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v4 + 8) = v5;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v4 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v5;
        sub_106840(a1, (__int64 *)v5, v6, v7, v8);
      }
      ++a1->m128i_i64[1];
      return v9;
    }
LABEL_26:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !a1->m128i_i64[1] )
    goto LABEL_3;
  v13 = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v13 & 2) != 0 )
  {
    v18 = 1;
    return sub_1069A0(a1, (unsigned __int64 *)v4, v18, a3);
  }
  v14 = *(_BYTE *)(a2 + 8);
  v15 = 1;
  while ( 1 )
  {
    v16 = *(_BYTE *)(v13 + 32);
    if ( v14 >= v16 && (v16 < v14 || *(_QWORD *)a2 >= *(_QWORD *)(v13 + 24)) )
      break;
    v17 = *(_BYTE **)(v13 + 8);
    v15 = 1;
    if ( (*v17 & 2) != 0 )
      goto LABEL_16;
LABEL_20:
    v13 = (unsigned __int64)v17;
  }
  if ( sub_FF780(v13 + 24, a2) )
  {
    v17 = *(_BYTE **)(v13 + 16);
    v15 = 0;
    if ( (*v17 & 2) != 0 )
      goto LABEL_16;
    goto LABEL_20;
  }
  if ( !v13 )
  {
LABEL_16:
    v18 = v15;
    v4 = v13;
    return sub_1069A0(a1, (unsigned __int64 *)v4, v18, a3);
  }
  return v13;
}
