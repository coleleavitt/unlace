__int64 __fastcall sub_215670(__m128i *a1, unsigned __int64 *a2, char a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __m128i si128; // xmm0
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v14; // rdx
  _QWORD *exception; // rdi
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  __m128i v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v6 = qalloc(72);
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v6 + 64) = 0;
  v7 = v6;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  v8 = *a4;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
  *(_DWORD *)(v6 + 24) = 0;
  v16 = 0;
  v17 = si128;
  copy_argloc(v6 + 24, v8);
  v10 = *(_QWORD *)(v8 + 16);
  *(_DWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 40) = v10;
  copy_argloc(v7 + 48, &v16);
  *(_QWORD *)(v7 + 64) = v17.m128i_i64[1];
  cleanup_argloc(&v16);
  v11 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v7 & 1LL;
  *(_QWORD *)v7 = v11;
  v12 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = v11 | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v12, v12);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v7 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    v14 = *(_QWORD *)v7 & 2LL;
    *(_QWORD *)v7 &= ~1uLL;
    *(_QWORD *)v7 = v14 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_215290(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}
