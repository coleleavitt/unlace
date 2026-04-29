unsigned __int64 __fastcall sub_394EC0(__m128i *a1, unsigned __int64 *a2, char a3, __int64 **a4)
{
  _OWORD *v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v11; // rdx
  _QWORD *exception; // rax

  v6 = (_OWORD *)qalloc(80);
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v7 = (unsigned __int64)v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v8 = **a4;
  *(_DWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 24) = v8;
  *(_QWORD *)(v7 + 56) = v7 + 40;
  *(_QWORD *)(v7 + 64) = v7 + 40;
  *(_QWORD *)(v7 + 72) = 0;
  *(_QWORD *)v7 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  v9 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v9, v9);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v7 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    v11 = *(_QWORD *)v7 & 2LL;
    *(_QWORD *)v7 &= ~1uLL;
    *(_QWORD *)v7 = v11 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_394AE0(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}
