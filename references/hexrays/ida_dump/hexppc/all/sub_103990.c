__int64 __fastcall sub_103990(__m128i *a1, unsigned __int64 *a2, char a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r14
  __m128i v13; // xmm0
  char v14; // al
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  void *v18; // rax
  __int64 v19; // rdx
  _QWORD *exception; // rax

  v6 = qalloc(80);
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
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  v11 = *a4;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 )
  {
    v18 = (void *)qalloc_or_throw(4 * v12);
    *(_QWORD *)(v10 + 40) = v12;
    *(_QWORD *)(v10 + 24) = v18;
    memcpy(v18, *(const void **)v11, 4 * v12);
    *(_QWORD *)(v10 + 32) = v12;
    v12 = *(_QWORD *)v10 & 1LL;
  }
  v13 = _mm_loadu_si128((const __m128i *)(v11 + 24));
  *(_QWORD *)(v10 + 64) = *(_QWORD *)(v11 + 40);
  v14 = *(_BYTE *)(v11 + 48);
  *(__m128i *)(v10 + 48) = v13;
  *(_BYTE *)(v10 + 72) = v14;
  v15 = v12 | (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)v10 = v15;
  v16 = _mm_loadl_epi64(a1);
  *(_QWORD *)v10 = v15 | 1;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v16, v16);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v10 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v10;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v10;
    v19 = *(_QWORD *)v10 & 2LL;
    *(_QWORD *)v10 &= ~1uLL;
    *(_QWORD *)v10 = v19 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_103830(a1, (__int64 *)v10, v7, v8, v9);
  }
  ++a1->m128i_i64[1];
  return v10;
}
