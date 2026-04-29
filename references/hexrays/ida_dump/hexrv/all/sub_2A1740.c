unsigned __int64 __fastcall sub_2A1740(__m128i *a1, unsigned __int64 *a2, char a3, unsigned int **a4)
{
  _OWORD *v8; // rax
  unsigned __int64 v9; // rbx
  _DWORD *v10; // rdi
  unsigned int *v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v16; // rdx
  _QWORD *exception; // rax

  v8 = (_OWORD *)qalloc(48);
  if ( !v8 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v9 = (unsigned __int64)v8;
  *v8 = 0;
  v10 = v8 + 2;
  v8[1] = 0;
  v8[2] = 0;
  v11 = *a4;
  v12 = *(_QWORD *)*a4;
  *v10 = 0;
  *(_QWORD *)(v9 + 24) = v12;
  sub_29AB70((__int64)v10, v11 + 2);
  v13 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v9 & 1LL;
  *(_QWORD *)v9 = v13;
  v14 = _mm_loadl_epi64(a1);
  *(_QWORD *)v9 = v13 | 1;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v14, v14);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v9 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
    v16 = *(_QWORD *)v9 & 2LL;
    *(_QWORD *)v9 &= ~1uLL;
    *(_QWORD *)v9 = v16 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_2A07F0(a1, (__int64 *)v9);
  }
  ++a1->m128i_i64[1];
  return v9;
}
