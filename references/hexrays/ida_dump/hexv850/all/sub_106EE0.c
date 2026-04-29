char __fastcall sub_106EE0(__m128i *a1, __int64 a2, const __m128i **a3)
{
  _QWORD *exception; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rsi
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  unsigned __int8 v15; // r14
  char v16; // r13
  unsigned __int8 v17; // al
  _BYTE *v18; // rax
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i v22; // xmm0

  v5 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v21 = qalloc(40);
    v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
    if ( !v21 )
      goto LABEL_26;
    *(_QWORD *)(v21 + 32) = 0;
    *(_OWORD *)(v21 + 16) = 0;
    *(__m128i *)(v21 + 8) = v22;
    *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v21;
    *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v21 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = a1->m128i_i64[0];
LABEL_3:
    v6 = qalloc(40);
    v10 = (_QWORD *)v6;
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
      if ( a1->m128i_i64[0] == v5 )
      {
        *(_QWORD *)v5 = v6 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v6;
        v20 = *(_QWORD *)v6 & 2LL;
        *(_QWORD *)v6 &= ~1uLL;
        v13 = v20 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        *v10 = v13;
      }
      else
      {
        *(_QWORD *)(v5 + 8) = v6;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v5 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
        LOBYTE(v13) = (unsigned __int8)sub_106140(a1, (__int64 *)v6, v7, v8, v9);
      }
      ++a1->m128i_i64[1];
      return v13;
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
  v14 = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v14 & 2) != 0 )
  {
    v19 = 1;
LABEL_18:
    LOBYTE(v13) = sub_1063E0(a1, (unsigned __int64 *)v5, v19, a3);
    return v13;
  }
  v15 = *(_BYTE *)(a2 + 8);
  v16 = 1;
  while ( 1 )
  {
    v17 = *(_BYTE *)(v14 + 32);
    if ( v15 >= v17 && (v17 < v15 || *(_QWORD *)a2 >= *(_QWORD *)(v14 + 24)) )
      break;
    v18 = *(_BYTE **)(v14 + 8);
    v16 = 1;
    if ( (*v18 & 2) != 0 )
      goto LABEL_16;
LABEL_20:
    v14 = (unsigned __int64)v18;
  }
  LOBYTE(v13) = sub_FF080(v14 + 24, a2);
  if ( (_BYTE)v13 )
  {
    v18 = *(_BYTE **)(v14 + 16);
    v16 = 0;
    if ( (*v18 & 2) != 0 )
      goto LABEL_16;
    goto LABEL_20;
  }
  if ( !v14 )
  {
LABEL_16:
    v19 = v16;
    v5 = v14;
    goto LABEL_18;
  }
  return v13;
}
