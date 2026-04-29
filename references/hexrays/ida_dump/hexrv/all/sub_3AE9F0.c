unsigned __int64 __fastcall sub_3AE9F0(__m128i *a1, unsigned __int64 *a2, char a3, __int64 **a4)
{
  _OWORD *v7; // rax
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rdi
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // al
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v18; // rdx
  _QWORD *exception; // rdi

  v7 = (_OWORD *)qalloc(64);
  if ( !v7 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v8 = (unsigned __int64)v7;
  *v7 = 0;
  v9 = v7 + 2;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v10 = *a4;
  v11 = *v10;
  *v9 = 0;
  *(_QWORD *)(v8 + 24) = v11;
  copy_tinfo_t(v9, v10 + 1);
  v14 = *((_BYTE *)v10 + 16);
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_BYTE *)(v8 + 40) = v14;
  v15 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 1LL;
  *(_QWORD *)v8 = v15;
  v16 = _mm_loadl_epi64(a1);
  *(_QWORD *)v8 = v15 | 1;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v16, v16);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v8 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    v18 = *(_QWORD *)v8 & 2LL;
    *(_QWORD *)v8 &= ~1uLL;
    *(_QWORD *)v8 = v18 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_3AE890(a1, (__int64 *)v8, (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL, v12, v13);
  }
  ++a1->m128i_i64[1];
  return v8;
}
