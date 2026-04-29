unsigned __int64 __fastcall sub_13D560(__m128i *a1, unsigned __int64 *a2, char a3, const __m128i **a4)
{
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  unsigned __int64 v10; // rbx
  const __m128i *v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v15; // rdx
  _QWORD *exception; // rax

  v6 = (_OWORD *)qalloc(48);
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v10 = (unsigned __int64)v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v11 = *a4;
  *(_DWORD *)(v10 + 40) = 0;
  v12 = _mm_loadu_si128(v11);
  *(_QWORD *)v10 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v10 + 24) = v12;
  v13 = _mm_loadl_epi64(a1);
  *(_QWORD *)v10 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v13, v13);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v10 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v10;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v10;
    v15 = *(_QWORD *)v10 & 2LL;
    *(_QWORD *)v10 &= ~1uLL;
    *(_QWORD *)v10 = v15 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v10;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v10;
    }
    else
    {
      a2[2] = v10;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v10;
    }
    sub_13D320(a1, (__int64 *)v10, v7, v8, v9);
  }
  ++a1->m128i_i64[1];
  return v10;
}
