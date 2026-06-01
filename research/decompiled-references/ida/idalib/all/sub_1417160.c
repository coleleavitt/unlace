__int64 __fastcall sub_1417160(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  signed __int64 v3; // rbp
  int v4; // eax
  unsigned __int64 v5; // rax
  __m128i v6; // xmm0
  const __m128i *v7; // rbp
  __int64 v8; // rdx
  __m128i *v9; // r15
  const __m128i *v10; // r13
  __int64 v11; // rax
  int v12; // eax
  __int64 result; // rax
  __m128i v14[4]; // [rsp+8h] [rbp-40h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x200000000LL;
  if ( *(_DWORD *)(a2 + 8) )
    sub_13FA600(a1, a2);
  v2 = 0;
  v3 = *(_QWORD *)(a2 + 112) - *(_QWORD *)(a2 + 104);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  v4 = *(_DWORD *)(a2 + 100);
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 100) = v4;
  *(_QWORD *)(a1 + 112) = 0;
  v5 = 0x8E38E38E38E38E39LL * (v3 >> 4);
  *(_QWORD *)(a1 + 120) = 0;
  if ( v5 )
  {
    if ( v5 > 0x1C71C71C71C71C7LL )
      std::__throw_bad_alloc();
    v2 = operator new(v3);
  }
  v14[0].m128i_i64[0] = v2;
  v6 = _mm_loadl_epi64(v14);
  *(_QWORD *)(a1 + 120) = v2 + v3;
  *(__m128i *)(a1 + 104) = _mm_unpacklo_epi64(v6, v6);
  v7 = *(const __m128i **)(a2 + 112);
  v8 = *(_QWORD *)(a2 + 104);
  if ( v7 != (const __m128i *)v8 )
  {
    v9 = (__m128i *)v2;
    v10 = *(const __m128i **)(a2 + 104);
    do
    {
      v9[8].m128i_i8[8] = -1;
      v11 = v10[8].m128i_u8[8];
      if ( (_BYTE)v11 != 0xFF )
      {
        v14[0].m128i_i64[0] = v8;
        ((void (__fastcall *)(__m128i *, const __m128i *))funcs_1410492[v11])(v9, v10);
        v8 = v14[0].m128i_i64[0];
        v9[8].m128i_i8[8] = v10[8].m128i_i8[8];
      }
      v10 += 9;
      v9 += 9;
    }
    while ( v7 != v10 );
    v2 += 16 * (9 * ((0xE38E38E38E38E39LL * (((unsigned __int64)&v7[-9] - v8) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 9);
  }
  *(_QWORD *)(a1 + 112) = v2;
  v12 = *(_BYTE *)(a2 + 128) & 1 | *(_BYTE *)(a1 + 128) & 0xFE;
  *(_BYTE *)(a1 + 128) = v12;
  result = *(_BYTE *)(a2 + 128) & 2 | v12 & 0xFFFFFFFD;
  *(_BYTE *)(a1 + 128) = result;
  return result;
}
