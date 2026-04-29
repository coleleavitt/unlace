unsigned __int64 __fastcall sub_144E10(__m128i *a1, unsigned __int64 *a2, char a3, __int64 **a4)
{
  void *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // rdx
  _QWORD *exception; // rax

  v6 = (void *)qalloc(88);
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v9 = (unsigned __int64)v6;
  memset(v6, 0, 0x58u);
  v10 = **a4;
  *(_QWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 24) = v10;
  *(_QWORD *)(v9 + 48) = -1;
  *(_QWORD *)v9 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v9 + 56) = 0;
  *(_BYTE *)(v9 + 80) = 0;
  *(_OWORD *)(v9 + 64) = 0;
  v11 = _mm_loadl_epi64(a1);
  *(_QWORD *)v9 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v11, v11);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v9 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
    v13 = *(_QWORD *)v9 & 2LL;
    *(_QWORD *)v9 &= ~1uLL;
    *(_QWORD *)v9 = v13 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_144BD0(a1, (__int64 *)v9, v7, 0, v8);
  }
  ++a1->m128i_i64[1];
  return v9;
}
