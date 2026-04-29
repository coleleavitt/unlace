unsigned __int64 __fastcall sub_1D6C50(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  __m128i si128; // xmm1
  char *v8; // rbx
  __m128i *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rdi
  unsigned int v20; // [rsp+0h] [rbp-114h]
  unsigned int dtype_size; // [rsp+Ch] [rbp-108h]
  __int64 v24; // [rsp+Ch] [rbp-108h]
  __int64 v25; // [rsp+14h] [rbp-100h]
  __int64 v26; // [rsp+24h] [rbp-F0h] BYREF
  _BYTE v27[4]; // [rsp+2Ch] [rbp-E8h] BYREF
  unsigned int v28; // [rsp+30h] [rbp-E4h]
  _BYTE v29[24]; // [rsp+7Ch] [rbp-98h] BYREF
  char v30; // [rsp+CCh] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+D4h] [rbp-40h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v8 = &v30;
  v31 = __readfsqword(0x28u);
  v9 = (__m128i *)v27;
  do
  {
    v9->m128i_i32[1] = -1;
    v9 += 5;
    v9[-5].m128i_i16[0] = 0;
    v9[-5].m128i_i16[1] = 0;
    v9[-5].m128i_i64[1] = 0;
    v9[-4] = si128;
    v9[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v9[-3] + 8) = 0;
    v9[-2].m128i_i32[2] = 0;
    v9[-1].m128i_i64[0] = 0;
    v9[-1].m128i_i32[2] = 0;
  }
  while ( v9 != (__m128i *)&v30 );
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  dtype_size = get_dtype_size();
  sub_32C430(&v26, v25, dtype_size, 2);
  sub_32F0D0(v27, a4, dtype_size, &v26, 0.0);
  clear_tinfo_t();
  sub_32C270(&v26, *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL), v28);
  copy_tinfo_t();
  clear_tinfo_t();
  v24 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  v20 = get_dtype_size();
  sub_32C430(&v26, v24, v20, 2);
  sub_32F0D0(v29, a5, v20, &v26, 0.0);
  clear_tinfo_t();
  v26 = 50;
  copy_tinfo_t();
  clear_tinfo_t();
  v10 = *(_QWORD *)(a1 + 40);
  v11 = sub_1D6BA0(*(_QWORD *)(a1 + 8), v10, a2, (int)v27);
  v14 = j__qalloc_or_throw(80, v10, v12, v13);
  v15 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v14 + 56) = 0;
  *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v14 + 72) = 0;
  sub_330970(v14, v15);
  *(_DWORD *)v14 = 4;
  v16 = _mm_cvtsi32_si128(v28);
  *(_BYTE *)(v14 + 32) = 4;
  *(_QWORD *)(v14 + 40) = v11;
  *(_DWORD *)(v14 + 36) = _mm_cvtsi128_si32(v16);
  *(_BYTE *)(v14 + 64) = 1;
  *(_QWORD *)(v14 + 68) = _mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(a6)).m128i_u64[0];
  sub_B5290(*(_QWORD **)(a1 + 16), v14);
  do
  {
    v8 -= 80;
    cleanup_argloc();
    v17 = *((_QWORD *)v8 + 4);
    if ( v17 )
    {
      *((_QWORD *)v8 + 5) = 0;
      qfree(v17);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v8);
  }
  while ( v8 != v27 );
  return v31 - __readfsqword(0x28u);
}
