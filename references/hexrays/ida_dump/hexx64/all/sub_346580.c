__int64 __fastcall sub_346580(__m128i *a1, unsigned __int64 *a2, char a3, _QWORD **a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v19; // rdx
  _QWORD *exception; // rax

  v8 = qalloc(64);
  if ( !v8 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v9 = v8;
  *(_OWORD *)v8 = 0;
  v10 = v8 + 56;
  *(_OWORD *)(v8 + 16) = 0;
  *(_OWORD *)(v8 + 32) = 0;
  *(_OWORD *)(v8 + 48) = 0;
  v11 = (__int64)(*a4 + 4);
  *(_QWORD *)(v8 + 24) = **a4;
  v12 = _mm_loadu_si128((const __m128i *)(v11 - 16));
  v13 = *(_QWORD *)(v11 - 24);
  *(_QWORD *)(v11 - 24) = 0;
  *(__m128i *)(v9 + 40) = v12;
  *(_OWORD *)(v11 - 16) = 0;
  *(_QWORD *)(v9 + 32) = v13;
  *(_QWORD *)(v9 + 56) = 0;
  copy_tinfo_t(v10, v11);
  v16 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v9 & 1LL;
  *(_QWORD *)v9 = v16;
  v17 = _mm_loadl_epi64(a1);
  *(_QWORD *)v9 = v16 | 1;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v17, v17);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v9 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
    v19 = *(_QWORD *)v9 & 2LL;
    *(_QWORD *)v9 &= ~1uLL;
    *(_QWORD *)v9 = v19 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_2D4690(a1, (__int64 *)v9, (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL, v14, v15);
  }
  ++a1->m128i_i64[1];
  return v9;
}
