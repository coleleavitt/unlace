__int64 __fastcall sub_18FE90(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r14
  __m128i *v5; // r12
  _QWORD *v6; // rbp
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  const void *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r13
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 result; // rax
  __m128i v20; // xmm0
  void *v21; // rax
  const void *v22; // rsi
  void *v23; // rax
  void *v24; // rax
  const void *v25; // rsi
  void *v26; // rax
  const void *v27; // rsi
  __int64 v28; // rax
  __m128i v29; // xmm1
  _QWORD *v30; // rax
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  struct _Unwind_Exception *v34; // rbp
  __int64 v35; // rdi
  _QWORD *exception; // rax

  v5 = (__m128i *)(a1 + 8);
  v6 = a2;
  v8 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = v8;
  if ( !a2[2] )
    goto LABEL_2;
  v28 = qalloc();
  v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
  if ( !v28 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v28 + 48) = 0;
  *(_OWORD *)(v28 + 16) = 0;
  *(_OWORD *)(v28 + 32) = 0;
  *(__m128i *)(v28 + 8) = v29;
  *(_QWORD *)v28 = v28 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(a1 + 8) = v28;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)v28 = v28 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v28 & 3LL;
  *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)(a1 + 8),
                                              (__m128i)*(unsigned __int64 *)(a1 + 8));
  **(_QWORD **)(a1 + 8) &= ~1uLL;
  **(_QWORD **)(a1 + 8) |= 2uLL;
  if ( !a2[2] )
  {
    if ( !under_debugger )
    {
      v34 = (struct _Unwind_Exception *)interr();
      sub_93B40(v4);
      v35 = *(_QWORD *)(a1 + 24);
      if ( v35 )
      {
        *(_QWORD *)(a1 + 32) = 0;
        qfree(v35);
      }
      sub_18DA30(v5->m128i_i64);
      _Unwind_Resume(v34);
    }
    goto LABEL_30;
  }
  v30 = (_QWORD *)a2[1];
  if ( v30 )
    v31 = *v30 & 0xFFFFFFFFFFFFFFFCLL;
  else
    v31 = 0;
  v32 = sub_18FCF0(v5, v31, *(_QWORD *)(a1 + 8));
  a2 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
  **(_QWORD **)(a1 + 8) = v32 & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(a1 + 8) & 3LL;
  if ( (*(_BYTE *)v32 & 2) != 0 )
  {
    if ( under_debugger )
      goto LABEL_30;
    v32 = interr();
  }
  v33 = v32;
  do
  {
    a4 = v33;
    v33 = *(_QWORD *)(v33 + 8);
  }
  while ( (*(_BYTE *)v33 & 2) == 0 );
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a4;
  if ( (*(_BYTE *)v32 & 2) != 0 )
  {
    if ( !under_debugger )
    {
      v32 = interr();
      goto LABEL_23;
    }
LABEL_30:
    BUG();
  }
  do
  {
LABEL_23:
    a3 = v32;
    v32 = *(_QWORD *)(v32 + 16);
  }
  while ( (*(_BYTE *)v32 & 2) == 0 );
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  *(_QWORD *)(a1 + 16) = v6[2];
LABEL_2:
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v9 = v6[4];
  if ( v9 )
  {
    v26 = (void *)qalloc_or_throw(8 * v9, (__int64)a2, a3, a4);
    *(_QWORD *)(a1 + 24) = v26;
    v27 = (const void *)v6[3];
    *(_QWORD *)(a1 + 40) = v9;
    memcpy(v26, v27, 8 * v9);
    *(_QWORD *)(a1 + 32) = v9;
  }
  sub_64000((__int64 *)(a1 + 48), (__int64)(v6 + 6));
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v12 = v6[9];
  if ( v12 )
  {
    v24 = (void *)qalloc_or_throw(16 * v12, (__int64)(v6 + 6), v10, v11);
    *(_QWORD *)(a1 + 64) = v24;
    v25 = (const void *)v6[8];
    *(_QWORD *)(a1 + 80) = v12;
    memcpy(v24, v25, 16 * v12);
    *(_QWORD *)(a1 + 72) = v12;
  }
  v13 = v6 + 11;
  sub_64000((__int64 *)(a1 + 88), (__int64)(v6 + 11));
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  v15 = v6[14];
  if ( v15 )
  {
    v23 = (void *)qalloc_or_throw(16 * v15, (__int64)v13, 16 * v15, v14);
    v13 = (const void *)v6[13];
    *(_QWORD *)(a1 + 104) = v23;
    *(_QWORD *)(a1 + 120) = v15;
    memcpy(v23, v13, 16 * v15);
    *(_QWORD *)(a1 + 112) = v15;
  }
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  v16 = v6[17];
  if ( v16 )
  {
    v21 = (void *)qalloc_or_throw(16 * v16, (__int64)v13, 16 * v16, v14);
    *(_QWORD *)(a1 + 128) = v21;
    v22 = (const void *)v6[16];
    *(_QWORD *)(a1 + 144) = v16;
    memcpy(v21, v22, 16 * v16);
    *(_QWORD *)(a1 + 136) = v16;
  }
  v17 = v6[25];
  *(__m128i *)(a1 + 152) = _mm_loadu_si128((const __m128i *)(v6 + 19));
  v18 = _mm_loadu_si128((const __m128i *)(v6 + 21));
  *(_QWORD *)(a1 + 200) = v17;
  result = *((unsigned __int8 *)v6 + 208);
  *(__m128i *)(a1 + 168) = v18;
  v20 = _mm_loadu_si128((const __m128i *)(v6 + 23));
  *(_BYTE *)(a1 + 208) = result;
  *(__m128i *)(a1 + 184) = v20;
  return result;
}
