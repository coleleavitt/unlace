unsigned __int64 __fastcall sub_3EE4C0(__int64 a1, unsigned __int8 a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // r13d
  int v4; // r15d
  int v5; // r14d
  int dtype_size; // eax
  signed int v7; // r15d
  __int64 v8; // rsi
  __int64 v9; // rax
  __m128i v10; // xmm3
  int v11; // r9d
  int v12; // eax
  int v13; // r9d
  int i; // r14d
  _DWORD *v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  int v19; // [rsp+0h] [rbp-90h]
  unsigned int v20; // [rsp+14h] [rbp-7Ch]
  unsigned __int64 v21; // [rsp+20h] [rbp-70h] BYREF
  __m128i *v22; // [rsp+28h] [rbp-68h]
  _BYTE v23[12]; // [rsp+30h] [rbp-60h] BYREF
  _BYTE v24[24]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  v2 = *(_DWORD **)(a1 + 832);
  v3 = v2[15];
  v4 = v2[116];
  v5 = v2[14];
  dtype_size = get_dtype_size();
  sub_1D3790(a1, 4, dtype_size, v3, 346938453, v4, 0);
  v20 = a2;
  v7 = get_dtype_size();
  v8 = *(_QWORD *)(a1 + 832);
  v21 = 0xFFFFFFFF00000000LL;
  v22 = 0;
  sub_11E5D0((__int64)&v21, v8, 0, v7, -1, 0);
  v9 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v23 = 1;
  *(_QWORD *)v24 = 1;
  v10 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 468));
  v11 = *(_DWORD *)(v9 + 472);
  *(_QWORD *)&v23[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v3)).m128i_u64[0];
  v19 = v11;
  *(_QWORD *)&v24[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), v10).m128i_u64[0];
  v12 = get_dtype_size();
  sub_1D3790(a1, 4, v12, v5, 346938453, v19, 0);
  for ( i = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 408LL); i > 7; i -= *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) )
  {
    v22[1] = _mm_unpacklo_epi64(
               (__m128i)(unsigned __int64)(v22[1].m128i_i64[0] + v7),
               (__m128i)(unsigned __int64)(v22[1].m128i_i64[0] + v7));
    sub_1D38D0(a1, 13, (unsigned int)v23, (unsigned int)&v21, (unsigned int)v24, v13);
    v15 = *(_DWORD **)(a1 + 832);
    v16 = i;
    if ( v3 == i )
      v16 = v15[116];
    v17 = sub_3ED260(a1, 1u, v20, v16, (int)v15[118], (int)v15[117], v7);
    *(_DWORD *)(v17 + 4) |= 0x10000u;
  }
  sub_1D38D0(a1, 13, (unsigned int)v23, (unsigned int)&v21, (unsigned int)v23, v13);
  sub_11A960((__int64)v24);
  sub_11A960((__int64)v23);
  sub_11A960((__int64)&v21);
  return v25 - __readfsqword(0x28u);
}
