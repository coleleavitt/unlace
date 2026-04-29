__int64 __fastcall sub_86FD0(__m128i *a1, unsigned __int64 *a2, char a3, const __m128i **a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 m128i_i64; // rsi
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // rdx
  _QWORD *exception; // rax

  v7 = qalloc(72);
  if ( !v7 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v7 + 64) = 0;
  v8 = v7;
  *(_OWORD *)(v7 + 16) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  *(_OWORD *)v7 = 0;
  *(_OWORD *)(v7 + 48) = 0;
  m128i_i64 = (__int64)(*a4)[1].m128i_i64;
  *(__m128i *)(v7 + 24) = _mm_loadu_si128(*a4);
  sub_30DB40(v7 + 40, m128i_i64);
  v10 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 1LL;
  *(_QWORD *)v8 = v10;
  v11 = _mm_loadl_epi64(a1);
  *(_QWORD *)v8 = v10 | 1;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v11, v11);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v8 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    v13 = *(_QWORD *)v8 & 2LL;
    *(_QWORD *)v8 &= ~1uLL;
    *(_QWORD *)v8 = v13 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v8;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    }
    else
    {
      a2[2] = v8;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    }
    sub_86D00(a1, (__int64 *)v8);
  }
  ++a1->m128i_i64[1];
  return v8;
}
