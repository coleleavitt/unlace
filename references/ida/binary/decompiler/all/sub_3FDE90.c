unsigned __int64 __fastcall sub_3FDE90(_QWORD *a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  __int64 *v7; // rbx
  __m128i si128; // xmm1
  __m128i *v9; // rax
  unsigned __int64 v10; // xmm2_8
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  int v16; // r9d
  __int64 v18; // [rsp-118h] [rbp-120h]
  unsigned int v20; // [rsp-110h] [rbp-118h]
  unsigned int v21; // [rsp-10Ch] [rbp-114h]
  unsigned int v22; // [rsp-10Ch] [rbp-114h]
  __int64 v23; // [rsp-108h] [rbp-110h]
  _BYTE v24[4]; // [rsp-100h] [rbp-108h] BYREF
  unsigned int v25; // [rsp-FCh] [rbp-104h]
  __int64 v26; // [rsp-F8h] [rbp-100h]
  _BYTE v27[12]; // [rsp-F0h] [rbp-F8h] BYREF
  _BYTE v28[4]; // [rsp-E0h] [rbp-E8h] BYREF
  unsigned __int64 v29; // [rsp-DCh] [rbp-E4h]
  char v30; // [rsp-90h] [rbp-98h]
  unsigned __int64 v31; // [rsp-8Ch] [rbp-94h]
  __int64 v32; // [rsp-40h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp-38h] [rbp-40h]

  v7 = &v32;
  si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
  v33 = __readfsqword(0x28u);
  v21 = *(_DWORD *)(a1[104] + 448LL);
  v9 = (__m128i *)v28;
  v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(a4)).m128i_u64[0];
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
  while ( v9 != (__m128i *)&v32 );
  v28[0] = 1;
  v11 = 1;
  v29 = v10;
  if ( a5 != -1 )
  {
    v30 = 1;
    v11 = 2;
    v31 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(a5)).m128i_u64[0];
  }
  *(_QWORD *)v27 = 41;
  copy_tinfo_t();
  clear_tinfo_t();
  *(_QWORD *)v27 = 41;
  copy_tinfo_t();
  clear_tinfo_t();
  v12 = a1[1];
  v13 = a1[5];
  *(_QWORD *)v27 = 41;
  v14 = sub_332690(v12, v13, a2, (unsigned int)v27, v11, (unsigned int)v28, 1, v18, a3, (unsigned int)v27, 0, 0);
  clear_tinfo_t();
  v15 = *(_QWORD *)(v14 + 72);
  v26 = v14;
  *(_DWORD *)(v15 + 280) |= 0x10u;
  *(_DWORD *)v27 = 1;
  *(_QWORD *)&v27[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v20)).m128i_u64[0];
  v24[0] = 4;
  v25 = v22;
  sub_1D38D0((_DWORD)a1, 67, (unsigned int)v24, 0, v23, v16);
  *(_DWORD *)(a1[100] + 1400LL) |= 1u;
  sub_11A960(v23);
  sub_11A960((__int64)v24);
  do
  {
    v7 -= 10;
    cleanup_argloc();
    if ( v7[4] )
    {
      v7[5] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11A960((__int64)v7);
  }
  while ( v7 != (__int64 *)v28 );
  return v33 - __readfsqword(0x28u);
}
