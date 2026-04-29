unsigned __int64 __fastcall sub_3E9760(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // r13
  __int64 v9; // rax
  int v10; // r15d
  __int16 v11; // ax
  int v12; // esi
  __int64 v13; // rax
  __m128i v14; // xmm0
  unsigned int *v15; // rax
  __m128i v16; // xmm1
  __int64 v20; // [rsp+8h] [rbp-78h]
  unsigned __int64 v21; // [rsp+10h] [rbp-70h] BYREF
  __int64 v22; // [rsp+18h] [rbp-68h]
  unsigned __int8 v23[16]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int8 v24[24]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 8);
  v25 = __readfsqword(0x28u);
  v8 = sub_63C50(v6, v5, 2);
  v9 = sub_63C50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
  v22 = 0;
  v20 = v9;
  v10 = *(_DWORD *)(v9 + 72);
  v21 = 0xFFFFFFFF00000000LL;
  sub_1188E0((__int64)&v21);
  v11 = *(_WORD *)(a1 + 48);
  LOBYTE(v21) = 7;
  v12 = 43;
  LODWORD(v22) = v10;
  if ( v11 != 441 )
  {
    v12 = 44;
    if ( v11 != 442 )
      v12 = 0;
  }
  v13 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v23 = 1;
  v14 = _mm_cvtsi32_si128(*(_DWORD *)(v13 + 80));
  v15 = *(unsigned int **)(v13 + 632);
  *(_QWORD *)&v23[4] = _mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(a4)).m128i_u64[0];
  v16 = _mm_cvtsi32_si128(*v15);
  *(_DWORD *)v24 = 1;
  *(_QWORD *)&v24[4] = _mm_unpacklo_epi32(v14, v16).m128i_u64[0];
  sub_3E9430(a1, v12, v23, v24, (unsigned __int8 *)&v21);
  *(_QWORD *)(a1 + 16) = v8;
  sub_3E8D60(a1, 4u, *(unsigned __int16 *)(a1 + 842), a3, 0x3BEA45E214ADDC55LL, a2, 0);
  *(_QWORD *)(a1 + 16) = v20;
  sub_1188E0((__int64)v24);
  sub_1188E0((__int64)v23);
  sub_1188E0((__int64)&v21);
  return v25 - __readfsqword(0x28u);
}
