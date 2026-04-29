unsigned __int64 __fastcall sub_3F9020(__int64 a1, unsigned __int8 a2)
{
  int *v2; // rax
  signed int v3; // r13d
  __int64 v4; // r15
  __int64 v5; // r14
  int dtype_size; // eax
  signed int v7; // r15d
  __int64 v8; // rsi
  __int64 v9; // rax
  __m128i v10; // xmm3
  __int64 v11; // r9
  int v12; // eax
  int i; // r14d
  int *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // [rsp+0h] [rbp-90h]
  unsigned int v19; // [rsp+14h] [rbp-7Ch]
  unsigned __int64 v20; // [rsp+20h] [rbp-70h] BYREF
  __m128i *v21; // [rsp+28h] [rbp-68h]
  unsigned __int8 v22[16]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int8 v23[24]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  v2 = *(int **)(a1 + 832);
  v3 = v2[15];
  v4 = v2[116];
  v5 = v2[14];
  dtype_size = get_dtype_size(a2);
  sub_1D6310(a1, 4u, dtype_size, v3, 0x3BEA45E214ADDC55LL, v4, 0);
  v19 = a2;
  v7 = get_dtype_size(a2);
  v8 = *(_QWORD *)(a1 + 832);
  v20 = 0xFFFFFFFF00000000LL;
  v21 = nullptr;
  sub_120A10((__int64)&v20, v8, 0, v7, -1, 0);
  v9 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v22 = 1;
  *(_QWORD *)v23 = 1;
  v10 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 468));
  v11 = *(int *)(v9 + 472);
  *(_QWORD *)&v22[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v3)).m128i_u64[0];
  v18 = v11;
  *(_QWORD *)&v23[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), v10).m128i_u64[0];
  v12 = get_dtype_size(v19);
  sub_1D6310(a1, 4u, v12, v5, 0x3BEA45E214ADDC55LL, v18, 0);
  for ( i = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 408LL); i > 7; i -= *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) )
  {
    v21[1] = _mm_unpacklo_epi64(
               (__m128i)(unsigned __int64)(v21[1].m128i_i64[0] + v7),
               (__m128i)(unsigned __int64)(v21[1].m128i_i64[0] + v7));
    sub_1D6450(a1, 13, v22, (unsigned __int8 *)&v20, v23);
    v14 = *(int **)(a1 + 832);
    v15 = i;
    if ( v3 == i )
      v15 = v14[116];
    v16 = sub_3F7E20(a1, 1u, v19, v15, v14[118], v14[117], v7);
    *(_DWORD *)(v16 + 4) |= 0x10000u;
  }
  sub_1D6450(a1, 13, v22, (unsigned __int8 *)&v20, v22);
  sub_11CDA0((__int64)v23);
  sub_11CDA0((__int64)v22);
  sub_11CDA0((__int64)&v20);
  return v24 - __readfsqword(0x28u);
}
