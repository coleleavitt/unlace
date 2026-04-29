unsigned __int64 __fastcall sub_3EFF60(__int64 a1, signed int a2, unsigned int a3, __int16 a4, char a5)
{
  __m128i v5; // xmm3
  __int64 v6; // rdx
  __int64 v8; // rbx
  __m128i v9; // xmm2
  __int64 v10; // r8
  __int64 v11; // rsi
  __m128i v12; // xmm1
  double v13; // xmm0_8
  __int64 v14; // rdx
  __int64 v15; // rax
  signed int v16; // r15d
  unsigned __int8 v17; // dl
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdi
  int dtype_size; // eax
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v26; // rax
  char v27; // [rsp-80h] [rbp-88h]
  _BYTE v28[12]; // [rsp-70h] [rbp-78h] BYREF
  _BYTE v29[12]; // [rsp-60h] [rbp-68h] BYREF
  _QWORD v30[3]; // [rsp-50h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp-38h] [rbp-40h]

  v5 = _mm_cvtsi32_si128(a3);
  v6 = (unsigned __int16)(64 - a4 - a5);
  v8 = a2;
  v9 = _mm_cvtsi32_si128(a2);
  v27 = a4;
  v10 = *(_QWORD *)(a1 + 40);
  v31 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v28 = 1;
  *(_QWORD *)v29 = 1;
  v30[0] = 0xFFFFFFFF00000000LL;
  v30[1] = 0;
  v12 = _mm_cvtsi32_si128(*(_DWORD *)(v11 + 80));
  *(_QWORD *)&v13 = _mm_unpacklo_epi32(v12, v5).m128i_u64[0];
  *(double *)&v29[4] = v13;
  *(_QWORD *)&v28[4] = _mm_unpacklo_epi32(v12, v9).m128i_u64[0];
  sub_11CFD0((__int64)v30, v11, v6, 1, v10, 0);
  sub_1D2850(a1, 23, v29, (unsigned __int8 *)v30, v28);
  v14 = *(_QWORD *)(a1 + 832);
  v15 = *(_QWORD *)(v14 + 4464);
  if ( !v15 )
    sub_3E6800(v13, a1, 23);
  v16 = *(_DWORD *)(*(_QWORD *)(v14 + 4456) + 4 * v15 - 4);
  *(_QWORD *)(v14 + 4464) = v15 - 1;
  v17 = 2;
  v18 = 64 - v27;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v17 = 7;
  v19 = -1;
  if ( v18 <= 63 && v18 )
    v19 = ~(-1LL << v27);
  sub_3E9CF0(a1, v19, v17, v16);
  v20 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v20 = 7;
  dtype_size = get_dtype_size(v20);
  sub_1D2710(a1, 0x14u, dtype_size, v8, v16, v8, 0);
  v22 = *(_QWORD **)(a1 + 832);
  v23 = v22[558];
  v24 = v22[557];
  if ( v22[559] < (unsigned __int64)(v23 + 1) )
  {
    v26 = qvector_reserve(v22 + 557, v24, v23 + 1, 4);
    v22[557] = v26;
    v24 = v26;
    v23 = v22[558];
  }
  *(_DWORD *)(v24 + 4 * v23) = v16;
  ++v22[558];
  sub_119360((__int64)v30);
  sub_119360((__int64)v29);
  sub_119360((__int64)v28);
  return v31 - __readfsqword(0x28u);
}
