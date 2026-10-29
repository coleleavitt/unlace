unsigned __int64 __fastcall sub_3EE740(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 dtype_size; // rax
  __m128i v5; // xmm0
  int v6; // r15d
  __int64 v7; // rax
  __m128i v8; // xmm3
  int v9; // r12d
  int v10; // eax
  __int64 v11; // rsi
  int v12; // r9d
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v17; // [rsp+4h] [rbp-8Ch]
  int v18; // [rsp+18h] [rbp-78h]
  _BYTE v19[12]; // [rsp+20h] [rbp-70h] BYREF
  _BYTE v20[12]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-50h] BYREF
  __m128i *v22; // [rsp+48h] [rbp-48h]
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  v17 = a2;
  v2 = *(_QWORD *)(a1 + 832);
  v18 = *(_DWORD *)(v2 + 56);
  v3 = *(_DWORD *)(v2 + 60);
  dtype_size = get_dtype_size();
  *(_QWORD *)v19 = 1;
  v5 = (__m128i)(unsigned __int64)dtype_size;
  v6 = dtype_size;
  v7 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v20 = 1;
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 468));
  v9 = *(_DWORD *)(v7 + 472);
  *(_QWORD *)&v19[4] = _mm_unpacklo_epi32(v5, _mm_cvtsi32_si128(v3)).m128i_u64[0];
  *(_QWORD *)&v20[4] = _mm_unpacklo_epi32(v5, v8).m128i_u64[0];
  v10 = get_dtype_size();
  sub_1D3790(a1, 4, v10, v18, 346938453, v9, 0);
  v11 = *(_QWORD *)(a1 + 832);
  v22 = 0;
  v21 = 0xFFFFFFFF00000000LL;
  sub_11E5D0((__int64)&v21, v11, 0, v6, -1, 0);
  if ( *(int *)(*(_QWORD *)(a1 + 832) + 408LL) > 7 )
  {
    v13 = 8;
    do
    {
      if ( v3 != v13 )
      {
        sub_1D38D0(a1, 12, (unsigned int)v19, (unsigned int)&v21, (unsigned int)v20, v12);
        v14 = sub_3ED260(
                a1,
                2u,
                v17,
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL),
                *(int *)(*(_QWORD *)(a1 + 832) + 468LL),
                v13,
                v6);
        *(_DWORD *)(v14 + 4) |= 0x10000u;
      }
      v22[1] = _mm_unpacklo_epi64(
                 (__m128i)(unsigned __int64)(v22[1].m128i_i64[0] + v6),
                 (__m128i)(unsigned __int64)(v22[1].m128i_i64[0] + v6));
      v15 = *(_QWORD *)(a1 + 832);
      v13 += *(_DWORD *)(v15 + 80);
    }
    while ( *(_DWORD *)(v15 + 408) >= v13 );
  }
  sub_1D38D0(a1, 12, (unsigned int)v19, (unsigned int)&v21, (unsigned int)v19, v12);
  sub_11A960((__int64)&v21);
  sub_11A960((__int64)v20);
  sub_11A960((__int64)v19);
  return v23 - __readfsqword(0x28u);
}
