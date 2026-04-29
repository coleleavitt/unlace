__int64 __fastcall sub_1F0FD0(__m128i *a1, unsigned __int64 *a2, char a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r15
  size_t v9; // r14
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  void *v13; // rax
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
  v7 = v6;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)v6 = 0;
  v8 = *a4;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  v9 = *(_QWORD *)(v8 + 8);
  if ( v9 )
  {
    v13 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 8));
    *(_QWORD *)(v7 + 40) = v9;
    *(_QWORD *)(v7 + 24) = v13;
    memcpy(v13, *(const void **)v8, v9);
    *(_QWORD *)(v7 + 32) = v9;
    v9 = *(_QWORD *)v7 & 1LL;
  }
  v10 = v9 | (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)v7 = v10;
  v11 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = v10 | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v11, v11);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v7 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    v14 = *(_QWORD *)v7 & 2LL;
    *(_QWORD *)v7 &= ~1uLL;
    *(_QWORD *)v7 = v14 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v7;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    }
    else
    {
      a2[2] = v7;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    }
    sub_846F0(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}
