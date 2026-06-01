__m128i *__fastcall sub_1D3AAD0(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 v8; // r14
  unsigned int v9; // r13d
  __m128i v12; // xmm3
  unsigned __int64 v13; // rax
  __int64 v15; // rax
  __m128i v16; // xmm4
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rbp
  __m128i si128; // xmm2
  __int64 v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rsi
  unsigned __int64 v30; // rax
  __m128i v31; // xmm5
  _QWORD *v32; // rsi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __m128i v35; // xmm6
  _QWORD *v36; // rsi
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // [rsp+8h] [rbp-50h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v41; // [rsp+20h] [rbp-38h]

  v8 = a4;
  v9 = a5;
  switch ( a3->m128i_i32[0] & 0x7FFFFFFF )
  {
    case 0:
    case 9:
      v15 = a3[1].m128i_i64[0];
      v16 = _mm_loadu_si128(a3);
      a1[1].m128i_i64[1] = 0;
      a1[1].m128i_i64[0] = v15;
      *a1 = v16;
      return a1;
    case 1:
      v17 = (unsigned __int64)sub_A81910(*(_QWORD **)(a2 + 248), a3->m128i_i64[1], a5);
      v18 = a3[1].m128i_i64[0];
      *a1 = _mm_loadu_si128(a3);
      a1[1].m128i_i64[1] = v17 & 0xFFFFFFFFFFFFFFFCLL | 2;
      a1[1].m128i_i64[0] = v18;
      return a1;
    case 2:
      if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        v8 = a3->m128i_i64[1];
      v19 = sub_1CB5030(a2, (__int64)a3, v8, a5, a6, a6, a7, a8);
      goto LABEL_9;
    case 3:
      if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        v8 = a3->m128i_i64[1];
      v21 = sub_1CB5030(a2, (__int64)a3, v8, a5, 0, a6, a7, a8);
      sub_F1D250((__int64)ptr, v8, 1, 0);
      si128 = _mm_load_si128((const __m128i *)ptr);
      a1[1].m128i_i64[0] = v41;
      a1[1].m128i_i64[1] = v21 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *a1 = si128;
      return a1;
    case 4:
    case 5:
      v19 = sub_1CB5680(a2, (__int64)a3, a5, a7, a8, a4, a5, a6);
LABEL_9:
      a1->m128i_i64[0] = a1->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
      v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
      a1[1].m128i_i64[1] = v19 & 0xFFFFFFFFFFFFFFFCLL | 1;
      a1->m128i_i64[1] = v20;
      return a1;
    case 6:
    case 7:
      v23 = a3->m128i_i64[1];
      v41 = 0;
      *(_OWORD *)ptr = 0;
      sub_F22A90(&v39, v23);
      v24 = (_QWORD *)sub_F22F70(&v39);
      if ( v24 )
      {
        sub_E90890((__int64)ptr, *(_QWORD **)(a2 + 248), *v24 & 0xFFFFFFFFFFFFFFF8LL, ((unsigned __int64)v9 << 32) | v9);
      }
      else
      {
        v38 = sub_F22F50(&v39);
        if ( v38 )
          sub_E90890(
            (__int64)ptr,
            *(_QWORD **)(a2 + 248),
            *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL,
            ((unsigned __int64)v9 << 32) | v9);
      }
      v29 = *(_QWORD **)(a2 + 248);
      if ( (a3->m128i_i32[0] & 0x7FFFFFFF) == 6 )
      {
        v34 = sub_E911A0((__int64 *)ptr, v29, v25, v26, v27, v28);
        v35 = _mm_loadu_si128(a3);
        v36 = *(_QWORD **)(a2 + 248);
        a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
        *a1 = v35;
        sub_F1ECA0(&a1[1].m128i_u64[1], v36, v34, v37, v9, 0);
      }
      else
      {
        v30 = sub_E911A0((__int64 *)ptr, v29, v25, v26, v27, v28);
        v31 = _mm_loadu_si128(a3);
        v32 = *(_QWORD **)(a2 + 248);
        a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
        *a1 = v31;
        sub_F1ECA0(&a1[1].m128i_u64[1], v32, v30, v33, v9, v9);
      }
      if ( HIDWORD(v41) )
        free(ptr[1]);
      return a1;
    case 8:
      v12 = _mm_loadu_si128(a3);
      v13 = a3->m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
      a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
      *a1 = v12;
      a1[1].m128i_i64[1] = v13 | 1;
      return a1;
  }
}
