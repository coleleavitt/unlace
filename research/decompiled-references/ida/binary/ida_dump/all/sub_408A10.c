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
  unsigned int v18; // [rsp-10Ch] [rbp-114h]
  unsigned __int64 v19; // [rsp-100h] [rbp-108h] BYREF
  __int64 v20; // [rsp-F8h] [rbp-100h]
  _BYTE v21[12]; // [rsp-F0h] [rbp-F8h] BYREF
  _BYTE v22[4]; // [rsp-E0h] [rbp-E8h] BYREF
  unsigned __int64 v23; // [rsp-DCh] [rbp-E4h]
  char v24; // [rsp-90h] [rbp-98h]
  unsigned __int64 v25; // [rsp-8Ch] [rbp-94h]
  __int64 v26; // [rsp-40h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp-38h] [rbp-40h]

  v7 = &v26;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v27 = __readfsqword(0x28u);
  v18 = *(_DWORD *)(a1[104] + 448LL);
  v9 = (__m128i *)v22;
  v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(a4)).m128i_u64[0];
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
  while ( v9 != (__m128i *)&v26 );
  v22[0] = 1;
  v11 = 1;
  v23 = v10;
  if ( a5 != -1 )
  {
    v24 = 1;
    v11 = 2;
    v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(a5)).m128i_u64[0];
  }
  *(_QWORD *)v21 = 41;
  copy_tinfo_t();
  clear_tinfo_t();
  *(_QWORD *)v21 = 41;
  copy_tinfo_t();
  clear_tinfo_t();
  v12 = a1[1];
  v13 = a1[5];
  v19 = 0xFFFFFFFF00000000LL;
  v20 = 0;
  *(_QWORD *)v21 = 41;
  v14 = sub_335B10(v12, v13, a2, v21, v11, (__int64)v22, 1);
  clear_tinfo_t();
  v15 = *(_QWORD *)(v14 + 72);
  v20 = v14;
  *(_DWORD *)(v15 + 280) |= 0x10u;
  *(_DWORD *)v21 = 1;
  *(_QWORD *)&v21[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(a3)).m128i_u64[0];
  LOBYTE(v19) = 4;
  HIDWORD(v19) = v18;
  sub_1D6450((__int64)a1, 67, (unsigned __int8 *)&v19, nullptr, v21);
  *(_DWORD *)(a1[100] + 1416LL) |= 1u;
  sub_11CDA0((__int64)v21);
  sub_11CDA0((__int64)&v19);
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
    sub_11CDA0((__int64)v7);
  }
  while ( v7 != (__int64 *)v22 );
  return v27 - __readfsqword(0x28u);
}
