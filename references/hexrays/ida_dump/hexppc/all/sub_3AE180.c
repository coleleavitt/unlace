unsigned __int64 __fastcall sub_3AE180(__m128i *a1, unsigned __int64 *a2, char a3, const __m128i **a4)
{
  _OWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  const __m128i *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v17; // rdx
  _QWORD *exception; // rax

  v6 = (_OWORD *)qalloc(64);
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v9 = (unsigned __int64)v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v10 = *a4;
  *(_QWORD *)(v9 + 24) = (*a4)->m128i_i64[0];
  v11 = _mm_loadu_si128(v10 + 1);
  v12 = v10->m128i_i64[1];
  v10->m128i_i64[1] = 0;
  *(__m128i *)(v9 + 40) = v11;
  v10[1] = 0;
  *(_QWORD *)(v9 + 32) = v12;
  v13 = v10[2].m128i_i64[0];
  *(_QWORD *)(v9 + 56) = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 104);
  v14 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v9 & 1LL;
  *(_QWORD *)v9 = v14;
  v15 = _mm_loadl_epi64(a1);
  *(_QWORD *)v9 = v14 | 1;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v15, v15);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v9 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
    v17 = *(_QWORD *)v9 & 2LL;
    *(_QWORD *)v9 &= ~1uLL;
    *(_QWORD *)v9 = v17 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v9;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
    }
    else
    {
      a2[2] = v9;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
    }
    sub_3AE020(a1, (__int64 *)v9, (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL, v7, v8);
  }
  ++a1->m128i_i64[1];
  return v9;
}
