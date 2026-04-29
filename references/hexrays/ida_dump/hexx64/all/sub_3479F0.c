__int64 __fastcall sub_3479F0(__m128i *a1, const __m128i *a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // r8
  unsigned __int64 v6; // rbx
  __m128i v7; // xmm0
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __m128i v10; // xmm0
  char v12; // dl
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _BYTE *v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rdx
  _QWORD *exception; // rdi
  const __m128i *v20[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1->m128i_i64[0];
  v20[1] = (const __m128i *)__readfsqword(0x28u);
  v20[0] = a2;
  if ( !v2 )
  {
    v16 = qalloc(56);
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
    if ( !v16 )
      goto LABEL_24;
    *(_QWORD *)(v16 + 48) = 0;
    *(_OWORD *)(v16 + 16) = 0;
    *(_OWORD *)(v16 + 32) = 0;
    *(__m128i *)(v16 + 8) = v17;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v16;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v2 = a1->m128i_i64[0];
LABEL_3:
    v3 = qalloc(56);
    v6 = v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 48) = 0;
      *(_OWORD *)v3 = 0;
      *(_OWORD *)(v3 + 16) = 0;
      *(_OWORD *)(v3 + 32) = 0;
      *(_QWORD *)(v3 + 24) = a2->m128i_i64[0];
      v7 = _mm_loadu_si128(a2 + 1);
      v8 = a2->m128i_i64[1];
      a2->m128i_i64[1] = 0;
      *(__m128i *)(v6 + 40) = v7;
      a2[1] = 0;
      *(_QWORD *)(v6 + 32) = v8;
      v9 = v2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6 & 1LL;
      *(_QWORD *)v6 = v9;
      v10 = _mm_loadl_epi64(a1);
      *(_QWORD *)v6 = v9 | 1;
      *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v10, v10);
      if ( a1->m128i_i64[0] == v2 )
      {
        *(_QWORD *)v2 = v6 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v2 & 3LL;
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v6;
        v18 = *(_QWORD *)v6 & 2LL;
        *(_QWORD *)v6 &= ~1uLL;
        *(_QWORD *)v6 = v18 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v2 + 8) = v6;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v2 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
        sub_25E5C0(a1, (__int64 *)v6, v2 & 0xFFFFFFFFFFFFFFFCLL, v4, v5);
      }
      ++a1->m128i_i64[1];
      return v6;
    }
LABEL_24:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !a1->m128i_i64[1] )
    goto LABEL_3;
  v12 = 1;
  v6 = *(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v6 & 2) != 0 )
    return sub_347880(a1, (unsigned __int64 *)v2, v12, v20);
  v13 = a2->m128i_i64[0];
  while ( 1 )
  {
    v14 = *(_QWORD *)(v6 + 24);
    if ( v13 < v14 )
    {
      v15 = *(_BYTE **)(v6 + 8);
      v12 = 1;
      if ( (*v15 & 2) != 0 )
        goto LABEL_14;
      goto LABEL_18;
    }
    if ( v14 >= v13 )
      break;
    v15 = *(_BYTE **)(v6 + 16);
    v12 = 0;
    if ( (*v15 & 2) != 0 )
      goto LABEL_14;
LABEL_18:
    v6 = (unsigned __int64)v15;
  }
  if ( !v6 )
  {
LABEL_14:
    v2 = v6;
    return sub_347880(a1, (unsigned __int64 *)v2, v12, v20);
  }
  return v6;
}
