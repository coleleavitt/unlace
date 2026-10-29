__m128i *__fastcall sub_1B91AC0(__m128i *a1, __int64 *a2, const __m128i *a3, __m128 a4, __m128 a5)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // r13
  __m128i v10; // xmm0
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm2
  unsigned int v18; // eax
  __int64 v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // r13
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // xmm3_8^8
  __int64 v26; // rsi
  unsigned __int64 v27; // rax
  int v28; // ecx
  __m128i v29; // [rsp+0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+10h] [rbp-38h]

  if ( !a3->m128i_i64[0] )
    goto LABEL_13;
  v8 = a3->m128i_i64[0] & 7;
  v9 = a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (_DWORD)v8 == 7 )
  {
    v12 = 3;
    if ( *(_DWORD *)v9 <= 3u )
      v12 = *(_DWORD *)v9;
    v13 = v12 + 8;
    if ( ((1LL << v13) & 0xE47) != 0 )
      goto LABEL_4;
    if ( ((1LL << v13) & 0x100) != 0 )
    {
      v14 = 0;
      if ( v13 == 8 )
        v14 = *(_QWORD *)(v9 + 16);
      v15 = sub_1B04070((__int64)a2, v14);
      if ( v15 )
      {
        v30 = a3[1].m128i_i64[0];
        v16 = *a2;
        v29 = _mm_loadu_si128(a3);
        v29.m128i_i64[0] = sub_B87960(*(_QWORD *)(v16 + 248) + 17536LL, v15);
        v17 = _mm_load_si128(&v29);
        a1[1].m128i_i64[0] = v30;
        *a1 = v17;
        return a1;
      }
      goto LABEL_13;
    }
    v18 = 4;
    goto LABEL_20;
  }
  if ( ((1LL << v8) & 0xE47) != 0 )
  {
LABEL_4:
    v10 = _mm_loadu_si128(a3);
    a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
    *a1 = v10;
    return a1;
  }
  v18 = v8 - 3;
  if ( (unsigned int)(v8 - 3) > 2 || (v19 = a3[1].m128i_i64[0]) == 0 )
  {
LABEL_20:
    v26 = 0;
    if ( v18 <= 2 )
      v26 = *(_QWORD *)(v9 + 8);
    v27 = (unsigned __int64)sub_1B90FD0(a2, v26, a4, a5);
    if ( (v27 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v22 = *(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v27) & 7;
      v23 = *(_QWORD *)(*a2 + 248) + 17536LL;
      if ( (_DWORD)v8 == 7 )
      {
        v28 = 3;
        if ( *(_DWORD *)v9 <= 3u )
          v28 = *(_DWORD *)v9;
        LODWORD(v8) = v28 + 8;
      }
      v21 = nullptr;
      goto LABEL_18;
    }
LABEL_13:
    a1->m128i_i32[2] = 0;
    a1->m128i_i64[0] = 0;
    a1[1].m128i_i64[0] = 0;
    return a1;
  }
  v20 = sub_1B90E50(a2, v19, a4, a5);
  v21 = v20;
  if ( !v20 )
    goto LABEL_13;
  v22 = *(_QWORD *)&byte_8[*v20 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[*v20 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*v20) & 7;
  v23 = *(_QWORD *)(*a2 + 248) + 17536LL;
LABEL_18:
  v24 = sub_B87D00(v23, v8, v22);
  v25 = _mm_loadu_si128(a3).m128i_i64[1];
  a1[1].m128i_i64[0] = (__int64)v21;
  v29.m128i_i64[1] = v25;
  v29.m128i_i64[0] = v24;
  *a1 = _mm_load_si128(&v29);
  return a1;
}
