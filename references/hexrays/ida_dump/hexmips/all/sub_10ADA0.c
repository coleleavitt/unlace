void __fastcall sub_10ADA0(__int64 *a1, __int64 a2)
{
  bool v2; // zf
  __int64 v5; // rax
  __int64 v6; // r8
  __m128i v7; // xmm1
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 *v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 *v17; // rdx
  __int64 v18; // rdx
  void *v19; // rdi
  _QWORD *exception; // rax

  v2 = *(_QWORD *)(a2 + 8) == 0;
  *a1 = 0;
  a1[1] = 0;
  if ( v2 )
    return;
  v5 = qalloc(80);
  v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
  if ( !v5 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_OWORD *)(v5 + 16) = 0;
  *(_OWORD *)(v5 + 32) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  *(_QWORD *)v5 = v5 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_OWORD *)(v5 + 64) = 0;
  *(__m128i *)(v5 + 8) = v7;
  *a1 = v5;
  a1[1] = 0;
  v8 = v5 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
  *(_QWORD *)v5 = v8;
  *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
  *(_QWORD *)*a1 &= ~1uLL;
  *(_QWORD *)*a1 |= 2uLL;
  if ( !*(_QWORD *)(a2 + 8) )
  {
    if ( !under_debugger )
    {
      v19 = (void *)interr(3439, a2, v8, v5 & 0xFFFFFFFFFFFFFFFCLL, v6);
      __cxa_begin_catch(v19);
      sub_102470((unsigned __int64 **)a1);
      __cxa_rethrow();
    }
    goto LABEL_19;
  }
  if ( *(_QWORD *)a2 )
    v9 = **(_QWORD **)a2 & 0xFFFFFFFFFFFFFFFCLL;
  else
    v9 = 0;
  v10 = sub_10AC00((const __m128i *)a1, v9, *a1);
  v12 = (unsigned __int64 *)*a1;
  v13 = v10 & 0xFFFFFFFFFFFFFFFCLL;
  v14 = v10 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)*a1 & 3LL;
  *(_QWORD *)*a1 = v14;
  if ( (*(_BYTE *)v10 & 2) != 0 )
  {
    if ( under_debugger )
      goto LABEL_19;
    v10 = interr(3437, v13, v14, v12, v11);
  }
  v15 = v10;
  do
  {
    v16 = v15;
    v15 = *(_QWORD *)(v15 + 8);
  }
  while ( (*(_BYTE *)v15 & 2) == 0 );
  v17 = (unsigned __int64 *)*a1;
  *(_QWORD *)(*a1 + 8) = v16;
  if ( (*(_BYTE *)v10 & 2) != 0 )
  {
    if ( !under_debugger )
    {
      v10 = interr(3438, v13, v17, v16, v11);
      goto LABEL_14;
    }
LABEL_19:
    BUG();
  }
  do
  {
LABEL_14:
    v18 = v10;
    v10 = *(_QWORD *)(v10 + 16);
  }
  while ( (*(_BYTE *)v10 & 2) == 0 );
  *(_QWORD *)(*a1 + 16) = v18;
  a1[1] = *(_QWORD *)(a2 + 8);
}
