__int64 __fastcall sub_7C6460(
        __int64 a1,
        int a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        __int64 a12,
        __int64 a13)
{
  const char *v14; // rsi
  __int64 *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r8
  size_t v23; // rsi
  __int64 v24; // rbp
  void *v26; // rax
  void *v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  void *v33; // rax
  const void *v34; // rsi
  size_t v35; // [rsp+8h] [rbp-50h]
  __int64 nb; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+10h] [rbp-48h]
  size_t na; // [rsp+10h] [rbp-48h]
  __int64 v39; // [rsp+18h] [rbp-40h]

  v14 = a3;
  v19 = (__int64 *)(a1 + 8);
  *((_DWORD *)v19 - 2) = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  sub_7BC640(v19, a3);
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v20 = *(_QWORD *)(a4 + 8);
  if ( v20 )
  {
    v35 = *(_QWORD *)(a4 + 8);
    nb = 16 * v20;
    v26 = (void *)qalloc_or_throw(16 * v20, v14);
    v14 = *(const char **)a4;
    *(_QWORD *)(a1 + 32) = v26;
    *(_QWORD *)(a1 + 48) = v35;
    memcpy(v26, v14, nb);
    *(_QWORD *)(a1 + 40) = v35;
  }
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v21 = *(_QWORD *)(a5 + 8);
  if ( v21 )
  {
    v33 = (void *)qalloc_or_throw(16 * v21, v14);
    v34 = *(const void **)a5;
    *(_QWORD *)(a1 + 56) = v33;
    *(_QWORD *)(a1 + 72) = v21;
    memcpy(v33, v34, 16 * v21);
    *(_QWORD *)(a1 + 64) = v21;
  }
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  sub_7BC640((__int64 *)(a1 + 80), a6);
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  sub_7BC640((__int64 *)(a1 + 104), a7);
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  sub_7BC640((__int64 *)(a1 + 128), a8);
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  sub_7BC640((__int64 *)(a1 + 152), a9);
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v22 = a10[1];
  if ( v22 )
  {
    v39 = a10[1];
    na = 16 * v22;
    v31 = qalloc_or_throw(16 * v22, (const char *)(16 * v22));
    *(_QWORD *)(a1 + 176) = v31;
    v32 = 0;
    *(_QWORD *)(a1 + 192) = v39;
    do
    {
      *(__m128i *)(v31 + v32) = _mm_loadu_si128((const __m128i *)(*a10 + v32));
      v32 += 16;
    }
    while ( v32 != na );
    *(_QWORD *)(a1 + 184) = v39;
  }
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  v23 = a11[1];
  if ( v23 )
  {
    n = a11[1];
    v28 = 16 * v23;
    v29 = qalloc_or_throw(16 * v23, (const char *)v23);
    v23 = n;
    *(_QWORD *)(a1 + 200) = v29;
    v30 = 0;
    *(_QWORD *)(a1 + 216) = n;
    do
    {
      *(__m128i *)(v29 + v30) = _mm_loadu_si128((const __m128i *)(*a11 + v30));
      v30 += 16;
    }
    while ( v30 != v28 );
    *(_QWORD *)(a1 + 208) = n;
  }
  *(_QWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  v24 = *(_QWORD *)(a12 + 8);
  if ( v24 )
  {
    v27 = (void *)qalloc_or_throw(16 * v24, (const char *)v23);
    *(_QWORD *)(a1 + 224) = v27;
    *(_QWORD *)(a1 + 240) = v24;
    memcpy(v27, *(const void **)a12, 16 * v24);
    *(_QWORD *)(a1 + 232) = v24;
  }
  *(_QWORD *)(a1 + 248) = a13;
  return a13;
}

