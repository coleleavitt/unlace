unsigned __int64 __fastcall sub_14D320(__m128i *a1, unsigned __int64 *a2, char a3, _QWORD **a4)
{
  _OWORD *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  unsigned __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v15; // rdx
  _QWORD *exception; // rdi
  _QWORD v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v17[3] = __readfsqword(0x28u);
  v7 = (_OWORD *)qalloc();
  if ( !v7 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v9 = (unsigned __int64)v7;
  *v7 = 0;
  v10 = (__int64)(v7 + 2);
  v7[1] = 0;
  v7[2] = 0;
  v11 = *a4;
  v17[0] = 0xFFFFFFFF00000000LL;
  v17[1] = 0;
  *(_QWORD *)(v9 + 24) = *v11;
  sub_123A40(v10, (unsigned __int8 *)v17, v8, 0xFFFFFFFF00000000LL);
  sub_11CDA0((__int64)v17);
  v12 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v9 & 1LL;
  *(_QWORD *)v9 = v12;
  v13 = _mm_loadl_epi64(a1);
  *(_QWORD *)v9 = v12 | 1;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v13, v13);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v9 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
    v15 = *(_QWORD *)v9 & 2LL;
    *(_QWORD *)v9 &= ~1uLL;
    *(_QWORD *)v9 = v15 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_14CFE0(a1, v9);
  }
  ++a1->m128i_i64[1];
  return v9;
}
