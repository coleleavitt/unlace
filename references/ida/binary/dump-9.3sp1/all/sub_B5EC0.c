unsigned __int64 __fastcall sub_B5EC0(__m128i *a1, unsigned __int64 *a2, char a3, __int64 *a4)
{
  char *v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v16; // rdx
  _QWORD *exception; // rax

  v6 = (char *)qalloc();
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
  memset(v6, 0, 0x88u);
  v8 = *a4;
  sub_123A40(v6 + 24);
  sub_123A40(v7 + 40);
  sub_64000((__int64 *)(v7 + 56), v8 + 32);
  v9 = *(_QWORD *)(v8 + 48);
  v10 = _mm_loadu_si128((const __m128i *)(v8 + 56));
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v7 + 72) = v9;
  *(__m128i *)(v7 + 80) = v10;
  *(_OWORD *)(v8 + 56) = 0;
  sub_64000((__int64 *)(v7 + 96), v8 + 72);
  v11 = _mm_loadu_si128((const __m128i *)(v8 + 96));
  v12 = *(_QWORD *)(v8 + 88);
  *(_QWORD *)(v8 + 88) = 0;
  *(__m128i *)(v7 + 120) = v11;
  *(_OWORD *)(v8 + 96) = 0;
  *(_QWORD *)(v7 + 112) = v12;
  v13 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v7 & 1LL;
  *(_QWORD *)v7 = v13;
  v14 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = v13 | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v14, v14);
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
    sub_B5AE0(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}
