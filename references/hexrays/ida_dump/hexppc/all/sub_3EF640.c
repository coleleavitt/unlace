unsigned __int64 __fastcall sub_3EF640(__int64 a1, int a2, unsigned int a3, __int16 a4, char a5)
{
  __int64 v5; // rsi
  __m128i v6; // xmm0
  __int64 v8; // r8
  double v9; // xmm0_8
  char v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned int v14; // esi
  _DWORD v17[4]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v18[2]; // [rsp+18h] [rbp-68h] BYREF
  unsigned __int8 v19[24]; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 832);
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(v5 + 80));
  v20 = __readfsqword(0x28u);
  v18[0] = 0xFFFFFFFF00000000LL;
  v8 = *(_QWORD *)(a1 + 40);
  v17[0] = 1;
  *(_QWORD *)&v9 = _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(a3)).m128i_u64[0];
  v18[1] = 0;
  *(double *)&v17[1] = v9;
  v10 = a5 + a4;
  sub_11CFD0((__int64)v18, v5, (unsigned __int16)(32 - a4 - a5), 1, v8, 0);
  v11 = *(_QWORD *)(a1 + 832);
  v12 = *(_QWORD *)(v11 + 4464);
  if ( !v12 )
    sub_3E6800(v9, (__int64)v18, v5);
  v13 = _mm_cvtsi32_si128(v17[1]);
  v14 = *(_DWORD *)(*(_QWORD *)(v11 + 4456) + 4 * v12 - 4);
  *(_DWORD *)v19 = 1;
  *(_QWORD *)(v11 + 4464) = v12 - 1;
  v13.m128i_i64[0] = _mm_unpacklo_epi32(v13, _mm_cvtsi32_si128(v14)).m128i_u64[0];
  *(_QWORD *)&v19[4] = v13.m128i_i64[0];
  sub_1D2850(a1, 22, (unsigned __int8 *)v17, (unsigned __int8 *)v18, v19);
  sub_3EF3E0(a1, a2, a5 + 32, v10 + 31, v14, *(double *)v13.m128i_i64);
  sub_119360((__int64)v19);
  sub_119360((__int64)v18);
  sub_119360((__int64)v17);
  return v20 - __readfsqword(0x28u);
}
