unsigned __int64 __fastcall sub_1D2430(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  __m128i si128; // xmm1
  char *v7; // rbx
  __m128i *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __int64 v13; // rdi
  unsigned int v16; // [rsp+0h] [rbp-114h]
  unsigned int dtype_size; // [rsp+Ch] [rbp-108h]
  __int64 v20; // [rsp+Ch] [rbp-108h]
  __int64 v21; // [rsp+14h] [rbp-100h]
  __int64 v22; // [rsp+24h] [rbp-F0h] BYREF
  _BYTE v23[4]; // [rsp+2Ch] [rbp-E8h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-E4h]
  _BYTE v25[56]; // [rsp+44h] [rbp-D0h] BYREF
  _BYTE v26[24]; // [rsp+7Ch] [rbp-98h] BYREF
  _BYTE v27[56]; // [rsp+94h] [rbp-80h] BYREF
  char v28; // [rsp+CCh] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+D4h] [rbp-40h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_407230);
  v7 = &v28;
  v29 = __readfsqword(0x28u);
  v8 = (__m128i *)v23;
  do
  {
    v8->m128i_i32[1] = -1;
    v8 += 5;
    v8[-5].m128i_i16[0] = 0;
    v8[-5].m128i_i16[1] = 0;
    v8[-5].m128i_i64[1] = 0;
    v8[-4] = si128;
    v8[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v8[-3] + 8) = 0;
    v8[-2].m128i_i32[2] = 0;
    v8[-1].m128i_i64[0] = 0;
    v8[-1].m128i_i32[2] = 0;
  }
  while ( v8 != (__m128i *)&v28 );
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  dtype_size = get_dtype_size(a3);
  sub_327500(&v22, v21, dtype_size, 2);
  sub_32A190(v23, a4, dtype_size, &v22, 0.0);
  clear_tinfo_t(&v22);
  sub_327340(&v22, *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL), v24);
  copy_tinfo_t(v25, &v22);
  clear_tinfo_t(&v22);
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  v16 = get_dtype_size(0);
  sub_327500(&v22, v20, v16, 2);
  sub_32A190(v26, a5, v16, &v22, 0.0);
  clear_tinfo_t(&v22);
  v22 = 50;
  copy_tinfo_t(v27, &v22);
  clear_tinfo_t(&v22);
  v9 = sub_1D2380(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), a2, (__int64)v23);
  v10 = j__qalloc_or_throw(80);
  v11 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(v10 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 72) = 0;
  sub_32B920(v10, v11);
  *(_DWORD *)v10 = 4;
  v12 = _mm_cvtsi32_si128(v24);
  *(_BYTE *)(v10 + 32) = 4;
  *(_QWORD *)(v10 + 40) = v9;
  *(_DWORD *)(v10 + 36) = _mm_cvtsi128_si32(v12);
  *(_BYTE *)(v10 + 64) = 1;
  *(_QWORD *)(v10 + 68) = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(a6)).m128i_u64[0];
  sub_B1090(*(_QWORD **)(a1 + 16), v10);
  do
  {
    v7 -= 80;
    cleanup_argloc(v7 + 56);
    v13 = *((_QWORD *)v7 + 4);
    if ( v13 )
    {
      *((_QWORD *)v7 + 5) = 0;
      qfree(v13);
    }
    clear_tinfo_t(v7 + 24);
    sub_118BA0((__int64)v7);
  }
  while ( v7 != v23 );
  return v29 - __readfsqword(0x28u);
}
