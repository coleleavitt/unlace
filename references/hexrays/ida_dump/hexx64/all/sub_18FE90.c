__int64 __fastcall sub_18FE90(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // r14
  __m128i *v3; // r12
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 result; // rax
  __m128i v14; // xmm0
  void *v15; // rax
  const void *v16; // rsi
  void *v17; // rax
  const void *v18; // rsi
  void *v19; // rax
  const void *v20; // rsi
  void *v21; // rax
  const void *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r8
  __m128i v25; // xmm1
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned __int64 *v31; // rcx
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  struct _Unwind_Exception *v38; // rbp
  __int64 v39; // rdi
  _QWORD *exception; // rax

  v3 = (__m128i *)(a1 + 8);
  v6 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = v6;
  if ( !a2[2] )
    goto LABEL_2;
  v23 = qalloc(56);
  v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
  if ( !v23 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v23 + 48) = 0;
  *(_OWORD *)(v23 + 16) = 0;
  *(_OWORD *)(v23 + 32) = 0;
  *(__m128i *)(v23 + 8) = v25;
  *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(a1 + 8) = v23;
  *(_QWORD *)(a1 + 16) = 0;
  v26 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 3LL;
  *(_QWORD *)v23 = v26;
  *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)(a1 + 8),
                                              (__m128i)*(unsigned __int64 *)(a1 + 8));
  **(_QWORD **)(a1 + 8) &= ~1uLL;
  **(_QWORD **)(a1 + 8) |= 2uLL;
  if ( !a2[2] )
  {
    if ( !under_debugger )
    {
      v38 = (struct _Unwind_Exception *)interr(3439, a2, v26, v23 & 0xFFFFFFFFFFFFFFFCLL, v24);
      sub_93B40(v2);
      v39 = *(_QWORD *)(a1 + 24);
      if ( v39 )
      {
        *(_QWORD *)(a1 + 32) = 0;
        qfree(v39);
      }
      sub_18DA30(v3->m128i_i64);
      _Unwind_Resume(v38);
    }
    goto LABEL_30;
  }
  v27 = (_QWORD *)a2[1];
  if ( v27 )
    v28 = *v27 & 0xFFFFFFFFFFFFFFFCLL;
  else
    v28 = 0;
  v29 = sub_18FCF0(v3, v28, *(_QWORD *)(a1 + 8));
  v31 = *(unsigned __int64 **)(a1 + 8);
  v32 = v29 & 0xFFFFFFFFFFFFFFFCLL;
  v33 = v29 & 0xFFFFFFFFFFFFFFFCLL | *v31 & 3;
  *v31 = v33;
  if ( (*(_BYTE *)v29 & 2) != 0 )
  {
    if ( under_debugger )
      goto LABEL_30;
    v29 = interr(3437, v32, v33, v31, v30);
  }
  v34 = v29;
  do
  {
    v35 = v34;
    v34 = *(_QWORD *)(v34 + 8);
  }
  while ( (*(_BYTE *)v34 & 2) == 0 );
  v36 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v36 + 8) = v35;
  if ( (*(_BYTE *)v29 & 2) != 0 )
  {
    if ( !under_debugger )
    {
      v29 = interr(3438, v32, v36, v35, v30);
      goto LABEL_23;
    }
LABEL_30:
    BUG();
  }
  do
  {
LABEL_23:
    v37 = v29;
    v29 = *(_QWORD *)(v29 + 16);
  }
  while ( (*(_BYTE *)v29 & 2) == 0 );
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = v37;
  *(_QWORD *)(a1 + 16) = a2[2];
LABEL_2:
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v7 = a2[4];
  if ( v7 )
  {
    v21 = (void *)qalloc_or_throw(8 * v7);
    *(_QWORD *)(a1 + 24) = v21;
    v22 = (const void *)a2[3];
    *(_QWORD *)(a1 + 40) = v7;
    memcpy(v21, v22, 8 * v7);
    *(_QWORD *)(a1 + 32) = v7;
  }
  sub_64000((__int64 *)(a1 + 48), (__int64)(a2 + 6));
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v8 = a2[9];
  if ( v8 )
  {
    v19 = (void *)qalloc_or_throw(16 * v8);
    *(_QWORD *)(a1 + 64) = v19;
    v20 = (const void *)a2[8];
    *(_QWORD *)(a1 + 80) = v8;
    memcpy(v19, v20, 16 * v8);
    *(_QWORD *)(a1 + 72) = v8;
  }
  sub_64000((__int64 *)(a1 + 88), (__int64)(a2 + 11));
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  v9 = a2[14];
  if ( v9 )
  {
    v17 = (void *)qalloc_or_throw(16 * v9);
    v18 = (const void *)a2[13];
    *(_QWORD *)(a1 + 104) = v17;
    *(_QWORD *)(a1 + 120) = v9;
    memcpy(v17, v18, 16 * v9);
    *(_QWORD *)(a1 + 112) = v9;
  }
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  v10 = a2[17];
  if ( v10 )
  {
    v15 = (void *)qalloc_or_throw(16 * v10);
    *(_QWORD *)(a1 + 128) = v15;
    v16 = (const void *)a2[16];
    *(_QWORD *)(a1 + 144) = v10;
    memcpy(v15, v16, 16 * v10);
    *(_QWORD *)(a1 + 136) = v10;
  }
  v11 = a2[25];
  *(__m128i *)(a1 + 152) = _mm_loadu_si128((const __m128i *)(a2 + 19));
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 21));
  *(_QWORD *)(a1 + 200) = v11;
  result = *((unsigned __int8 *)a2 + 208);
  *(__m128i *)(a1 + 168) = v12;
  v14 = _mm_loadu_si128((const __m128i *)(a2 + 23));
  *(_BYTE *)(a1 + 208) = result;
  *(__m128i *)(a1 + 184) = v14;
  return result;
}
