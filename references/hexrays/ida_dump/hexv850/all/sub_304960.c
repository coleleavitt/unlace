unsigned __int64 __fastcall sub_304960(__m128i *a1, unsigned __int64 *a2, char a3, __int64 *a4)
{
  _DWORD *v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v14; // rdx
  _QWORD *exception; // rdi
  __int64 v16; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-A0h]
  __int64 v18; // [rsp+18h] [rbp-90h]
  __int128 v19; // [rsp+20h] [rbp-88h]
  __int64 v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  __int128 v22; // [rsp+40h] [rbp-68h]
  __int64 v23; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h]
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v6 = (_DWORD *)qalloc(160);
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
  memset(v6, 0, 0xA0u);
  v24 = 0;
  v18 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_400180);
  v8 = *a4;
  v20 = 0;
  v21 = 0;
  v23 = -1;
  v19 = 0;
  v22 = 0;
  v6[6] = 0;
  LODWORD(v16) = 0;
  copy_argloc(v6 + 6, v8);
  *(_QWORD *)(v7 + 40) = *(_QWORD *)(v8 + 16);
  *(_QWORD *)(v7 + 48) = *(_QWORD *)(v8 + 24);
  *(_DWORD *)(v7 + 56) = *(_DWORD *)(v8 + 32);
  sub_2B7ED0((__m128i *)(v7 + 64), (const __m128i *)&v16);
  sub_2B45C0(&v16);
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
    sub_2D38D0(a1, (__int64 *)v7, (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL, v9, v10);
  }
  ++a1->m128i_i64[1];
  return v7;
}
