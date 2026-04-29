__int64 __fastcall sub_18FCF0(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __m128i v11; // xmm0
  void *v12; // rax
  _QWORD *exception; // rax

  if ( (*(_BYTE *)a2 & 2) != 0 )
    return a1->m128i_i64[0];
  v6 = qalloc();
  v3 = v6;
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v6 + 48) = 0;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  v9 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 24) = v9;
  *(_OWORD *)(v3 + 40) = 0;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 )
  {
    v12 = (void *)qalloc_or_throw(32 * v10, a2, v7, v8);
    *(_QWORD *)(v3 + 48) = v10;
    *(_QWORD *)(v3 + 32) = v12;
    memcpy(v12, *(const void **)(a2 + 32), 32 * v10);
    *(_QWORD *)(v3 + 40) = v10;
    v10 = *(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFDLL;
  }
  *(_QWORD *)v3 = v10;
  *(_QWORD *)v3 = *(_QWORD *)a2 & 1LL | a3 & 0xFFFFFFFFFFFFFFFCLL;
  v11 = _mm_loadl_epi64(a1);
  *(__m128i *)(v3 + 8) = _mm_unpacklo_epi64(v11, v11);
  *(_QWORD *)(v3 + 8) = sub_18FCF0(a1, *(_QWORD *)(a2 + 8), v3);
  *(_QWORD *)(v3 + 16) = sub_18FCF0(a1, *(_QWORD *)(a2 + 16), v3);
  return v3;
}
