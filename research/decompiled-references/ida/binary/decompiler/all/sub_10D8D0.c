__int64 __fastcall sub_10D8D0(const __m128i *a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  _OWORD *v6; // rax
  unsigned __int64 v7; // r15
  __m128i v8; // xmm0
  char v9; // al
  __m128i v10; // xmm0
  void *v11; // rax
  _QWORD *exception; // rax

  if ( (*(_BYTE *)a2 & 2) != 0 )
    return a1->m128i_i64[0];
  v6 = (_OWORD *)qalloc();
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
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v7 = *(_QWORD *)(a2 + 32);
  if ( v7 )
  {
    v11 = (void *)qalloc_or_throw();
    *((_QWORD *)v3 + 5) = v7;
    *((_QWORD *)v3 + 3) = v11;
    memcpy(v11, *(const void **)(a2 + 24), 4 * v7);
    *((_QWORD *)v3 + 4) = v7;
    v7 = *(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFDLL;
  }
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *((_QWORD *)v3 + 8) = *(_QWORD *)(a2 + 64);
  v9 = *(_BYTE *)(a2 + 72);
  v3[3] = v8;
  *(_QWORD *)v3 = v7;
  *((_BYTE *)v3 + 72) = v9;
  *(_QWORD *)v3 = *(_QWORD *)a2 & 1LL | a3 & 0xFFFFFFFFFFFFFFFCLL;
  v10 = _mm_loadl_epi64(a1);
  *(__m128i *)((char *)v3 + 8) = _mm_unpacklo_epi64(v10, v10);
  *((_QWORD *)v3 + 1) = sub_10D8D0(a1, *(_QWORD *)(a2 + 8), v3);
  *((_QWORD *)v3 + 2) = sub_10D8D0(a1, *(_QWORD *)(a2 + 16), v3);
  return (__int64)v3;
}
