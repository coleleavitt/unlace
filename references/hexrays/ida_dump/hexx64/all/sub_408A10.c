unsigned __int64 __fastcall sub_408A10(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
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
  __int64 v16; // rdi
  unsigned int v19; // [rsp-10Ch] [rbp-114h]
  unsigned __int64 v20; // [rsp-100h] [rbp-108h] BYREF
  __int64 v21; // [rsp-F8h] [rbp-100h]
  _BYTE v22[12]; // [rsp-F0h] [rbp-F8h] BYREF
  _BYTE v23[4]; // [rsp-E0h] [rbp-E8h] BYREF
  unsigned __int64 v24; // [rsp-DCh] [rbp-E4h]
  _BYTE v25[60]; // [rsp-C8h] [rbp-D0h] BYREF
  unsigned __int64 v26; // [rsp-8Ch] [rbp-94h]
  __int64 v27; // [rsp-78h] [rbp-80h] BYREF
  __int64 v28; // [rsp-40h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp-38h] [rbp-40h]

  v7 = &v28;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v29 = __readfsqword(0x28u);
  v19 = *(_DWORD *)(a1[104] + 448LL);
  v9 = (__m128i *)v23;
  v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128(a4)).m128i_u64[0];
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
  while ( v9 != (__m128i *)&v28 );
  v23[0] = 1;
  v11 = 1;
  v24 = v10;
  if ( a5 != -1 )
  {
    v25[56] = 1;
    v11 = 2;
    v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128(a5)).m128i_u64[0];
  }
  *(_QWORD *)v22 = 41;
  copy_tinfo_t(v25, v22);
  clear_tinfo_t(v22);
  *(_QWORD *)v22 = 41;
  copy_tinfo_t(&v27, v22);
  clear_tinfo_t(v22);
  v12 = a1[1];
  v13 = a1[5];
  v20 = 0xFFFFFFFF00000000LL;
  v21 = 0;
  *(_QWORD *)v22 = 41;
  v14 = sub_335B10(v12, v13, a2, v22, v11, (__int64)v23, 1);
  clear_tinfo_t(v22);
  v15 = *(_QWORD *)(v14 + 72);
  v21 = v14;
  *(_DWORD *)(v15 + 280) |= 0x10u;
  *(_DWORD *)v22 = 1;
  *(_QWORD *)&v22[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128(a3)).m128i_u64[0];
  LOBYTE(v20) = 4;
  HIDWORD(v20) = v19;
  sub_1D6450((__int64)a1, 67, (unsigned __int8 *)&v20, nullptr, v22);
  *(_DWORD *)(a1[100] + 1416LL) |= 1u;
  sub_11CDA0((__int64)v22);
  sub_11CDA0((__int64)&v20);
  do
  {
    v7 -= 10;
    cleanup_argloc(v7 + 7);
    v16 = v7[4];
    if ( v16 )
    {
      v7[5] = 0;
      qfree(v16);
    }
    clear_tinfo_t(v7 + 3);
    sub_11CDA0((__int64)v7);
  }
  while ( v7 != (__int64 *)v23 );
  return v29 - __readfsqword(0x28u);
}
