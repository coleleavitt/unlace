__int64 __fastcall sub_2CDA00(__m128i *a1, unsigned __int64 *a2, char a3, const __m128i **a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rbx
  const __m128i *v11; // roff
  __m128i v12; // xmm0
  __int64 v14; // rdx
  _QWORD *exception; // rax

  v6 = qalloc(48);
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v10 = v6;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 32) = 0;
  v11 = *a4;
  *(__m128i *)(v6 + 24) = _mm_loadu_si128(*a4);
  *(_QWORD *)(v6 + 40) = v11[1].m128i_i64[0];
  *(_QWORD *)v6 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  v12 = _mm_loadl_epi64(a1);
  *(_QWORD *)v6 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v12, v12);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v6 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v6;
    v14 = *(_QWORD *)v6 & 2LL;
    *(_QWORD *)v6 &= ~1uLL;
    *(_QWORD *)v6 = v14 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v6;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
    }
    else
    {
      a2[2] = v6;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v6;
    }
    sub_2581C0(a1, (__int64 *)v6, v7, v8, v9);
  }
  ++a1->m128i_i64[1];
  return v10;
}
