__int64 __fastcall sub_140B60(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i v9; // xmm0
  _QWORD *exception; // rax

  if ( (*(_BYTE *)a2 & 2) != 0 )
    return a1->m128i_i64[0];
  v6 = qalloc(72);
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
  *(_QWORD *)(v6 + 64) = 0;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  copy_argloc(v6 + 24, a2 + 24);
  v7 = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 40) = v7;
  copy_argloc(v3 + 48, a2 + 48);
  v8 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)v3 &= ~2uLL;
  *(_QWORD *)(v3 + 64) = v8;
  *(_QWORD *)v3 = a3 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a2 & 1LL;
  v9 = _mm_loadl_epi64(a1);
  *(__m128i *)(v3 + 8) = _mm_unpacklo_epi64(v9, v9);
  *(_QWORD *)(v3 + 8) = sub_140B60(a1, *(_QWORD *)(a2 + 8), v3);
  *(_QWORD *)(v3 + 16) = sub_140B60(a1, *(_QWORD *)(a2 + 16), v3);
  return v3;
}
