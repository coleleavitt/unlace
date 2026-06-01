unsigned __int64 __fastcall sub_3F92A0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 dtype_size; // rax
  __m128i v5; // xmm0
  int v6; // r15d
  __int64 v7; // rax
  __m128i v8; // xmm3
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rsi
  int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v16; // [rsp+4h] [rbp-8Ch]
  int v17; // [rsp+18h] [rbp-78h]
  unsigned __int8 v18[16]; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int8 v19[16]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-50h] BYREF
  __m128i *v21; // [rsp+48h] [rbp-48h]
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  v16 = a2;
  v2 = *(_QWORD *)(a1 + 832);
  v17 = *(_DWORD *)(v2 + 56);
  v3 = *(_DWORD *)(v2 + 60);
  dtype_size = get_dtype_size();
  *(_QWORD *)v18 = 1;
  v5 = (__m128i)(unsigned __int64)dtype_size;
  v6 = dtype_size;
  v7 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v19 = 1;
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 468));
  v9 = *(int *)(v7 + 472);
  *(_QWORD *)&v18[4] = _mm_unpacklo_epi32(v5, _mm_cvtsi32_si128(v3)).m128i_u64[0];
  *(_QWORD *)&v19[4] = _mm_unpacklo_epi32(v5, v8).m128i_u64[0];
  v10 = get_dtype_size();
  sub_1D6310(a1, 4u, v10, v17, 0x3BEA45E214ADDC55LL, v9, 0);
  v11 = *(_QWORD *)(a1 + 832);
  v21 = nullptr;
  v20 = 0xFFFFFFFF00000000LL;
  sub_120A10((__int64)&v20, v11, 0, v6, -1, 0);
  if ( *(int *)(*(_QWORD *)(a1 + 832) + 408LL) > 7 )
  {
    v12 = 8;
    do
    {
      if ( v3 != v12 )
      {
        sub_1D6450(a1, 12, v18, (unsigned __int8 *)&v20, v19);
        v13 = sub_3F7E20(
                a1,
                2u,
                v16,
                *(int *)(*(_QWORD *)(a1 + 832) + 472LL),
                *(int *)(*(_QWORD *)(a1 + 832) + 468LL),
                v12,
                v6);
        *(_DWORD *)(v13 + 4) |= 0x10000u;
      }
      v21[1] = _mm_unpacklo_epi64(
                 (__m128i)(unsigned __int64)(v21[1].m128i_i64[0] + v6),
                 (__m128i)(unsigned __int64)(v21[1].m128i_i64[0] + v6));
      v14 = *(_QWORD *)(a1 + 832);
      v12 += *(_DWORD *)(v14 + 80);
    }
    while ( *(_DWORD *)(v14 + 408) >= v12 );
  }
  sub_1D6450(a1, 12, v18, (unsigned __int8 *)&v20, v18);
  sub_11CDA0((__int64)&v20);
  sub_11CDA0((__int64)v19);
  sub_11CDA0((__int64)v18);
  return v22 - __readfsqword(0x28u);
}
