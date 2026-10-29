__m128i *__fastcall sub_1D204A0(
        __m128i *a1,
        _QWORD *a2,
        const __m128i *a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rbx
  unsigned __int64 v12; // r13
  __m128i v13; // xmm0
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i v20; // xmm2
  unsigned int v21; // eax
  __int64 v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // r13
  unsigned __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // xmm3_8^8
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  int v31; // ecx
  __m128i v32; // [rsp+0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+10h] [rbp-38h]

  if ( !a3->m128i_i64[0] )
    goto LABEL_13;
  v11 = a3->m128i_i64[0] & 7;
  v12 = a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (_DWORD)v11 == 7 )
  {
    v15 = 3;
    if ( *(_DWORD *)v12 <= 3u )
      v15 = *(_DWORD *)v12;
    v16 = (unsigned int)(v15 + 8);
    if ( ((1LL << v16) & 0xE47) != 0 )
      goto LABEL_4;
    if ( ((1LL << v16) & 0x100) != 0 )
    {
      v17 = 0;
      if ( (_DWORD)v16 == 8 )
        v17 = *(_QWORD *)(v12 + 16);
      v18 = sub_1D1B120((__int64)a2, v17, a4, a5, (__int64)a3, v16, a7, a8);
      if ( v18 )
      {
        v33 = a3[1].m128i_i64[0];
        v19 = *a2;
        v32 = _mm_loadu_si128(a3);
        v32.m128i_i64[0] = sub_B87960(*(_QWORD *)(v19 + 248) + 17536LL, v18);
        v20 = _mm_load_si128(&v32);
        a1[1].m128i_i64[0] = v33;
        *a1 = v20;
        return a1;
      }
      goto LABEL_13;
    }
    v21 = 4;
    goto LABEL_20;
  }
  if ( ((1LL << v11) & 0xE47) != 0 )
  {
LABEL_4:
    v13 = _mm_loadu_si128(a3);
    a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
    *a1 = v13;
    return a1;
  }
  v21 = v11 - 3;
  if ( (unsigned int)(v11 - 3) > 2 || (v22 = a3[1].m128i_i64[0]) == 0 )
  {
LABEL_20:
    v29 = 0;
    if ( v21 <= 2 )
      v29 = *(_QWORD *)(v12 + 8);
    v30 = (unsigned __int64)sub_1D1AC70(a2, v29, a4, a5);
    if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v25 = *(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v30) & 7;
      v26 = *(_QWORD *)(*a2 + 248LL) + 17536LL;
      if ( (_DWORD)v11 == 7 )
      {
        v31 = 3;
        if ( *(_DWORD *)v12 <= 3u )
          v31 = *(_DWORD *)v12;
        LODWORD(v11) = v31 + 8;
      }
      v24 = nullptr;
      goto LABEL_18;
    }
LABEL_13:
    a1->m128i_i32[2] = 0;
    a1->m128i_i64[0] = 0;
    a1[1].m128i_i64[0] = 0;
    return a1;
  }
  v23 = sub_1D1AAC0(a2, v22, a4, a5);
  v24 = v23;
  if ( !v23 )
    goto LABEL_13;
  v25 = *(_QWORD *)&byte_8[*v23 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[*v23 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*v23) & 7;
  v26 = *(_QWORD *)(*a2 + 248LL) + 17536LL;
LABEL_18:
  v27 = sub_B87D00(v26, v11, v25);
  v28 = _mm_loadu_si128(a3).m128i_i64[1];
  a1[1].m128i_i64[0] = (__int64)v24;
  v32.m128i_i64[1] = v28;
  v32.m128i_i64[0] = v27;
  *a1 = _mm_load_si128(&v32);
  return a1;
}
