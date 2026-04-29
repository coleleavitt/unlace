unsigned __int64 __fastcall sub_203FF0(__m128i *a1, unsigned __int64 *a2, char a3, const __m128i **a4)
{
  _OWORD *v6; // rax
  unsigned __int64 v7; // rbx
  const __m128i *v8; // rax
  __m128i v9; // xmm0
  __int32 v10; // edx
  __m128i v11; // xmm0
  __int64 v13; // rdx
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
  v6[3] = 0;
  v6[2] = 0;
  v6[4] = 0;
  v8 = *a4;
  *(_QWORD *)(v7 + 24) = (*a4)->m128i_i64[0];
  *(_QWORD *)(v7 + 32) = v8->m128i_i64[1];
  *(_QWORD *)(v7 + 40) = v8[1].m128i_i64[0];
  *(_DWORD *)(v7 + 48) = v8[1].m128i_i32[2];
  v9 = _mm_loadu_si128(v8 + 2);
  v10 = v8[3].m128i_i32[0];
  LOBYTE(v8) = v8[3].m128i_i8[4];
  *(__m128i *)(v7 + 56) = v9;
  *(_BYTE *)(v7 + 76) = (_BYTE)v8;
  *(_DWORD *)(v7 + 72) = v10;
  *(_QWORD *)v7 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  v11 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v11, v11);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v7 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    v13 = *(_QWORD *)v7 & 2LL;
    *(_QWORD *)v7 &= ~1uLL;
    *(_QWORD *)v7 = v13 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_1F2A40(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}
