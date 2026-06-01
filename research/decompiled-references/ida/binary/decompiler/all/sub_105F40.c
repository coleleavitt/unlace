__int64 __fastcall sub_105F40(__m128i *a1, unsigned __int64 *a2, char a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  __m128i v10; // xmm0
  char v11; // al
  unsigned __int64 v12; // rax
  __m128i v13; // xmm0
  void *v15; // rax
  __int64 v16; // rdx
  _QWORD *exception; // rax

  v6 = qalloc();
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
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  v8 = *a4;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  v9 = *(_QWORD *)(v8 + 8);
  if ( v9 )
  {
    v15 = (void *)qalloc_or_throw();
    *(_QWORD *)(v7 + 40) = v9;
    *(_QWORD *)(v7 + 24) = v15;
    memcpy(v15, *(const void **)v8, 4 * v9);
    *(_QWORD *)(v7 + 32) = v9;
    v9 = *(_QWORD *)v7 & 1LL;
  }
  v10 = _mm_loadu_si128((const __m128i *)(v8 + 24));
  *(_QWORD *)(v7 + 64) = *(_QWORD *)(v8 + 40);
  v11 = *(_BYTE *)(v8 + 48);
  *(__m128i *)(v7 + 48) = v10;
  *(_BYTE *)(v7 + 72) = v11;
  v12 = v9 | (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)v7 = v12;
  v13 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = v12 | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v13, v13);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v7 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    v16 = *(_QWORD *)v7 & 2LL;
    *(_QWORD *)v7 &= ~1uLL;
    *(_QWORD *)v7 = v16 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_105DE0(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}
