unsigned __int64 __fastcall sub_14D320(__m128i *a1, unsigned __int64 *a2, char a3, _QWORD **a4)
{
  _OWORD *v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v14; // rdx
  _QWORD *exception; // rdi
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v16[3] = __readfsqword(0x28u);
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
  v8 = (unsigned __int64)v7;
  *v7 = 0;
  v9 = (__int64)(v7 + 2);
  v7[1] = 0;
  v7[2] = 0;
  v10 = *a4;
  v16[0] = 0xFFFFFFFF00000000LL;
  v16[1] = 0;
  *(_QWORD *)(v8 + 24) = *v10;
  sub_123A40(v9, (unsigned __int8 *)v16);
  sub_11CDA0((__int64)v16);
  v11 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 1LL;
  *(_QWORD *)v8 = v11;
  v12 = _mm_loadl_epi64(a1);
  *(_QWORD *)v8 = v11 | 1;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v12, v12);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v8 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    v14 = *(_QWORD *)v8 & 2LL;
    *(_QWORD *)v8 &= ~1uLL;
    *(_QWORD *)v8 = v14 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_14CFE0(a1, v8);
  }
  ++a1->m128i_i64[1];
  return v8;
}
