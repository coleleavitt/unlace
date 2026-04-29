unsigned __int64 __fastcall sub_3EF7C0(__int64 a1, int a2, unsigned int a3, char a4, char a5)
{
  __int64 v5; // rsi
  __m128i v6; // xmm0
  __int64 v8; // r8
  double v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm0
  unsigned int v13; // r15d
  char v15; // [rsp+1h] [rbp-7Dh]
  _DWORD v17[4]; // [rsp+6h] [rbp-78h] BYREF
  _QWORD v18[2]; // [rsp+16h] [rbp-68h] BYREF
  unsigned __int8 v19[24]; // [rsp+26h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+3Eh] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 832);
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(v5 + 80));
  v20 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 40);
  v17[0] = 1;
  v18[1] = 0;
  *(_QWORD *)&v9 = _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(a3)).m128i_u64[0];
  *(double *)&v17[1] = v9;
  v15 = a5 + a4;
  v18[0] = 0xFFFFFFFF00000000LL;
  sub_11CFD0((__int64)v18, v5, (unsigned __int16)a5, 1, v8, 0);
  v10 = *(_QWORD *)(a1 + 832);
  v11 = *(_QWORD *)(v10 + 4464);
  if ( !v11 )
    sub_3E6800(v9, (__int64)v18, v5);
  v12 = _mm_cvtsi32_si128(v17[1]);
  v13 = *(_DWORD *)(*(_QWORD *)(v10 + 4456) + 4 * v11 - 4);
  *(_DWORD *)v19 = 1;
  *(_QWORD *)(v10 + 4464) = v11 - 1;
  v12.m128i_i64[0] = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(v13)).m128i_u64[0];
  *(_QWORD *)&v19[4] = v12.m128i_i64[0];
  sub_1D2850(a1, 23, (unsigned __int8 *)v17, (unsigned __int8 *)v18, v19);
  sub_3EF3E0(a1, a2, a5 + 32, v15 + 31, v13, *(double *)v12.m128i_i64);
  sub_119360((__int64)v19);
  sub_119360((__int64)v18);
  sub_119360((__int64)v17);
  return v20 - __readfsqword(0x28u);
}
