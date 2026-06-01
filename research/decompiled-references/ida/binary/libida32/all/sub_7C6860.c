__int64 __fastcall sub_7C6860(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  __int64 *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r12
  const char *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 result; // rax
  void *v13; // rax
  void *v14; // rax
  const void *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // rax
  const void *v21; // rsi
  __int64 nb; // [rsp+8h] [rbp-48h]
  size_t n; // [rsp+8h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-48h]
  __int64 v25; // [rsp+10h] [rbp-40h]
  __int64 v26; // [rsp+10h] [rbp-40h]
  __int64 v27; // [rsp+10h] [rbp-40h]

  v3 = a2 + 1;
  v5 = (__int64 *)(a1 + 8);
  *((_DWORD *)v5 - 2) = *((_DWORD *)v3 - 2);
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  sub_7BC640(v5, v3);
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v6 = a2[5];
  if ( v6 )
  {
    v13 = (void *)qalloc_or_throw(16 * v6, (const char *)v3);
    *(_QWORD *)(a1 + 32) = v13;
    v3 = (_QWORD *)a2[4];
    *(_QWORD *)(a1 + 48) = v6;
    memcpy(v13, v3, 16 * v6);
    *(_QWORD *)(a1 + 40) = v6;
  }
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v7 = a2[8];
  if ( v7 )
  {
    v20 = (void *)qalloc_or_throw(16 * v7, (const char *)v3);
    *(_QWORD *)(a1 + 56) = v20;
    v21 = (const void *)a2[7];
    *(_QWORD *)(a1 + 72) = v7;
    memcpy(v20, v21, 16 * v7);
    *(_QWORD *)(a1 + 64) = v7;
  }
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  sub_7BC640((__int64 *)(a1 + 80), a2 + 10);
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  sub_7BC640((__int64 *)(a1 + 104), a2 + 13);
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  sub_7BC640((__int64 *)(a1 + 128), a2 + 16);
  *(_QWORD *)(a1 + 152) = 0;
  v8 = (const char *)(a2 + 19);
  *(_OWORD *)(a1 + 160) = 0;
  sub_7BC640((__int64 *)(a1 + 152), a2 + 19);
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v9 = a2[23];
  if ( v9 )
  {
    v27 = a2[23];
    na = 16 * v9;
    v18 = qalloc_or_throw(16 * v9, v8);
    *(_QWORD *)(a1 + 176) = v18;
    v19 = 0;
    *(_QWORD *)(a1 + 192) = v27;
    do
    {
      v8 = (const char *)a2[22];
      *(__m128i *)(v18 + v19) = _mm_loadu_si128((const __m128i *)&v8[v19]);
      v19 += 16;
    }
    while ( v19 != na );
    *(_QWORD *)(a1 + 184) = v27;
  }
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  v10 = a2[26];
  if ( v10 )
  {
    v26 = a2[26];
    n = 16 * v10;
    v16 = qalloc_or_throw(16 * v10, v8);
    *(_QWORD *)(a1 + 200) = v16;
    v17 = 0;
    *(_QWORD *)(a1 + 216) = v26;
    do
    {
      v8 = (const char *)a2[25];
      *(__m128i *)(v16 + v17) = _mm_loadu_si128((const __m128i *)&v8[v17]);
      v17 += 16;
    }
    while ( v17 != n );
    *(_QWORD *)(a1 + 208) = v26;
  }
  *(_QWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  v11 = a2[29];
  if ( v11 )
  {
    v25 = a2[29];
    nb = 16 * v11;
    v14 = (void *)qalloc_or_throw(16 * v11, v8);
    *(_QWORD *)(a1 + 224) = v14;
    v15 = (const void *)a2[28];
    *(_QWORD *)(a1 + 240) = v25;
    memcpy(v14, v15, nb);
    *(_QWORD *)(a1 + 232) = v25;
  }
  result = a2[31];
  *(_QWORD *)(a1 + 248) = result;
  return result;
}

