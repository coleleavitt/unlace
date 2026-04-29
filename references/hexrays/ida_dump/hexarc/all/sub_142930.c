unsigned __int64 __fastcall sub_142930(__m128i *a1, unsigned __int64 *a2, char a3, _DWORD **a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 *v9; // rdi
  _DWORD *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v16; // rdx
  _QWORD *exception; // rdi
  _QWORD v18[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h]
  __m128i v20; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v7 = qalloc(72);
  if ( !v7 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v8 = v7;
  *(_QWORD *)(v7 + 64) = 0;
  *(_OWORD *)v7 = 0;
  v9 = (__int64 *)(v7 + 32);
  *(_OWORD *)(v7 + 16) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 48) = 0;
  v10 = *a4;
  v20 = 0;
  v18[0] = 0;
  v18[1] = 0;
  v19 = 0;
  *(_DWORD *)(v8 + 24) = *v10;
  sub_5DA80(v9, (__int64)v18);
  v11 = _mm_loadu_si128(&v20);
  v12 = v18[0];
  *(_QWORD *)(v8 + 48) = v19;
  *(__m128i *)(v8 + 56) = v11;
  qfree(v12);
  v13 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 1LL;
  *(_QWORD *)v8 = v13;
  v14 = _mm_loadl_epi64(a1);
  *(_QWORD *)v8 = v13 | 1;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v14, v14);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v8 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    v16 = *(_QWORD *)v8 & 2LL;
    *(_QWORD *)v8 &= ~1uLL;
    *(_QWORD *)v8 = v16 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_1425F0(a1, v8);
  }
  ++a1->m128i_i64[1];
  return v8;
}
