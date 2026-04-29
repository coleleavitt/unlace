unsigned __int64 __fastcall sub_306620(__m128i *a1, unsigned __int64 *a2, char a3, __int64 **a4)
{
  _OWORD *v7; // rax
  unsigned __int64 v8; // rbx
  char *v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v17; // rdx
  _QWORD *exception; // rdi
  __int64 v19; // [rsp+0h] [rbp-58h] BYREF
  __int128 v20; // [rsp+8h] [rbp-50h]
  _QWORD v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v21[2] = __readfsqword(0x28u);
  v7 = (_OWORD *)qalloc(64);
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
  v9 = (char *)v7 + 56;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v10 = *a4;
  v21[0] = 0;
  v19 = 0;
  v20 = 0;
  v11 = *v10;
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 24) = v11;
  *(_QWORD *)(v8 + 56) = 0;
  *(_OWORD *)(v8 + 40) = 0;
  copy_tinfo_t(v9, v21);
  sub_2AFDA0(&v19);
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
    sub_2CF2D0(a1, (__int64 *)v8, (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL, v12, v13);
  }
  ++a1->m128i_i64[1];
  return v8;
}
