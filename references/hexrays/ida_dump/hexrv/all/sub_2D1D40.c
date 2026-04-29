__int64 __fastcall sub_2D1D40(__m128i *a1, unsigned __int64 *a2, char a3, const __m128i **a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  const __m128i *v8; // r14
  __m128i v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // r8
  __int32 v12; // eax
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v16; // rdx
  _QWORD *exception; // rax

  v6 = qalloc(152);
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v7 = v6;
  memset((void *)v6, 0, 0x98u);
  v8 = *a4;
  v9 = _mm_loadu_si128(v8);
  *(_QWORD *)(v6 + 40) = v8[1].m128i_i64[0];
  *(__m128i *)(v6 + 24) = v9;
  sub_2B0FF0(v6 + 48, (__int64)&v8[1].m128i_i64[1]);
  *(_DWORD *)(v7 + 128) = v8[6].m128i_i32[2];
  v12 = v8[7].m128i_i32[0];
  *(_BYTE *)(v7 + 144) = 0;
  *(_DWORD *)(v7 + 136) = v12;
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
    sub_2D1BE0(a1, (__int64 *)v7, (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL, v10, v11);
  }
  ++a1->m128i_i64[1];
  return v7;
}
