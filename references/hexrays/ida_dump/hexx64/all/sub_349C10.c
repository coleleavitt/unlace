__int64 __fastcall sub_349C10(__m128i *a1, unsigned __int64 *a2, char a3, __int64 **a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rbx
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  __m128i v15; // xmm0
  void *v17; // rax
  __int64 v18; // rdx
  _QWORD *exception; // rax

  v6 = qalloc(72);
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v6 + 64) = 0;
  v10 = v6;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  v11 = *a4;
  v12 = **a4;
  *(_QWORD *)(v10 + 32) = 0;
  *(_OWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 24) = v12;
  v13 = v11[2];
  if ( v13 )
  {
    v17 = (void *)qalloc_or_throw(16 * v13);
    *(_QWORD *)(v10 + 48) = v13;
    *(_QWORD *)(v10 + 32) = v17;
    memcpy(v17, (const void *)v11[1], 16 * v13);
    *(_QWORD *)(v10 + 40) = v13;
    v13 = *(_QWORD *)v10 & 1LL;
  }
  *(_QWORD *)(v10 + 56) = 0;
  *(_DWORD *)(v10 + 64) = -1;
  v14 = v13 | (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)v10 = v14;
  v15 = _mm_loadl_epi64(a1);
  *(_QWORD *)v10 = v14 | 1;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v15, v15);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v10 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v10;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v10;
    v18 = *(_QWORD *)v10 & 2LL;
    *(_QWORD *)v10 &= ~1uLL;
    *(_QWORD *)v10 = v18 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_3499D0(a1, (__int64 *)v10, v7, v8, v9);
  }
  ++a1->m128i_i64[1];
  return v10;
}
