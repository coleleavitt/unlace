__m128i *__fastcall sub_176AF20(__m128i *a1, _QWORD *a2, const __m128i *a3, __m128 a4)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  __m128i v9; // xmm0
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm2
  unsigned int v17; // eax
  void **v18; // rsi
  void **v19; // rax
  void **v20; // r13
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // xmm3_8^8
  __int64 v25; // rsi
  void **v26; // rax
  int v27; // ecx
  __m128i v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+10h] [rbp-38h]

  if ( !a3->m128i_i64[0] )
    goto LABEL_13;
  v7 = a3->m128i_i64[0] & 7;
  v8 = a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (_DWORD)v7 == 7 )
  {
    v11 = 3;
    if ( *(_DWORD *)v8 <= 3u )
      v11 = *(_DWORD *)v8;
    v12 = v11 + 8;
    if ( ((1LL << v12) & 0xE47) != 0 )
      goto LABEL_4;
    if ( ((1LL << v12) & 0x100) != 0 )
    {
      v13 = 0;
      if ( v12 == 8 )
        v13 = *(_QWORD *)(v8 + 16);
      v14 = sub_17473B0((__int64)a2, v13);
      if ( v14 )
      {
        v29 = a3[1].m128i_i64[0];
        v15 = *a2;
        v28 = _mm_loadu_si128(a3);
        v28.m128i_i64[0] = sub_B87960(*(_QWORD *)(v15 + 248) + 17536LL, v14);
        v16 = _mm_load_si128(&v28);
        a1[1].m128i_i64[0] = v29;
        *a1 = v16;
        return a1;
      }
      goto LABEL_13;
    }
    v17 = 4;
    goto LABEL_20;
  }
  if ( ((1LL << v7) & 0xE47) != 0 )
  {
LABEL_4:
    v9 = _mm_loadu_si128(a3);
    a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
    *a1 = v9;
    return a1;
  }
  v17 = v7 - 3;
  if ( (unsigned int)(v7 - 3) > 2 || (v18 = (void **)a3[1].m128i_i64[0]) == nullptr )
  {
LABEL_20:
    v25 = 0;
    if ( v17 <= 2 )
      v25 = *(_QWORD *)(v8 + 8);
    v26 = sub_176A2F0(a2, v25, a4);
    if ( ((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v21 = *(_QWORD *)&byte_8[(unsigned __int64)v26 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[(unsigned __int64)v26 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v26)
          & 7;
      v22 = *(_QWORD *)(*a2 + 248LL) + 17536LL;
      if ( (_DWORD)v7 == 7 )
      {
        v27 = 3;
        if ( *(_DWORD *)v8 <= 3u )
          v27 = *(_DWORD *)v8;
        LODWORD(v7) = v27 + 8;
      }
      v20 = nullptr;
      goto LABEL_18;
    }
LABEL_13:
    a1->m128i_i32[2] = 0;
    a1->m128i_i64[0] = 0;
    a1[1].m128i_i64[0] = 0;
    return a1;
  }
  v19 = sub_176A140(a2, v18, a4);
  v20 = v19;
  if ( !v19 )
    goto LABEL_13;
  v21 = *(_QWORD *)&byte_8[(unsigned __int64)*v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[(unsigned __int64)*v19 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*v19) & 7;
  v22 = *(_QWORD *)(*a2 + 248LL) + 17536LL;
LABEL_18:
  v23 = sub_B87D00(v22, v7, v21);
  v24 = _mm_loadu_si128(a3).m128i_i64[1];
  a1[1].m128i_i64[0] = (__int64)v20;
  v28.m128i_i64[1] = v24;
  v28.m128i_i64[0] = v23;
  *a1 = _mm_load_si128(&v28);
  return a1;
}
