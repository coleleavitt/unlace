unsigned __int64 __fastcall sub_B1CC0(__m128i *a1, unsigned __int64 *a2, char a3, _QWORD *a4)
{
  char *v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v17; // rdx
  _QWORD *exception; // rax

  v7 = (char *)qalloc(136);
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
  memset(v7, 0, 0x88u);
  v9 = *a4;
  sub_11F840(v7 + 24, *a4);
  sub_11F840(v8 + 40, v9 + 16);
  sub_5FE00((__int64 *)(v8 + 56), v9 + 32);
  v10 = *(_QWORD *)(v9 + 48);
  v11 = _mm_loadu_si128((const __m128i *)(v9 + 56));
  *(_QWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v8 + 72) = v10;
  *(__m128i *)(v8 + 80) = v11;
  *(_OWORD *)(v9 + 56) = 0;
  sub_5FE00((__int64 *)(v8 + 96), v9 + 72);
  v12 = _mm_loadu_si128((const __m128i *)(v9 + 96));
  v13 = *(_QWORD *)(v9 + 88);
  *(_QWORD *)(v9 + 88) = 0;
  *(__m128i *)(v8 + 120) = v12;
  *(_OWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v8 + 112) = v13;
  v14 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 1LL;
  *(_QWORD *)v8 = v14;
  v15 = _mm_loadl_epi64(a1);
  *(_QWORD *)v8 = v14 | 1;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v15, v15);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v8 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    v17 = *(_QWORD *)v8 & 2LL;
    *(_QWORD *)v8 &= ~1uLL;
    *(_QWORD *)v8 = v17 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_B18E0(a1, (__int64 *)v8);
  }
  ++a1->m128i_i64[1];
  return v8;
}
