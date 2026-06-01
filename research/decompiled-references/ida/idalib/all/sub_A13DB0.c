unsigned __int64 __fastcall sub_A13DB0(__int64 a1, __int64 a2)
{
  char v3; // al
  char v4; // al
  char v5; // al
  signed __int64 v6; // r12
  unsigned __int64 result; // rax
  __int64 v8; // r14
  __m128i v9; // xmm0
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rbp
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // dl
  char v19; // dl
  char v20; // dl
  char v21; // dl
  __m128i v22[4]; // [rsp+8h] [rbp-40h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  sub_A09AE0((_QWORD *)a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  v3 = *(_BYTE *)(a2 + 32) & 1 | *(_BYTE *)(a1 + 32) & 0xFE;
  *(_BYTE *)(a1 + 32) = v3;
  v4 = *(_BYTE *)(a2 + 32) & 2 | v3 & 0xFD;
  *(_BYTE *)(a1 + 32) = v4;
  v5 = *(_BYTE *)(a2 + 32) & 4 | v4 & 0xFB;
  *(_BYTE *)(a1 + 32) = v5;
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32) & 8 | v5 & 0xF7;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  sub_A09AE0((_QWORD *)(a1 + 40), *(_BYTE **)(a2 + 40), *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 48));
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 72) & 1 | *(_BYTE *)(a1 + 72) & 0xFE;
  *(_WORD *)(a1 + 72) = *(_WORD *)(a2 + 72) & 0x1FE | *(_WORD *)(a1 + 72) & 0xFE01;
  *(_BYTE *)(a1 + 73) = *(_BYTE *)(a2 + 73) & 0xE | *(_BYTE *)(a1 + 73) & 0xF1;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = a1 + 104;
  sub_A09AE0((_QWORD *)(a1 + 88), *(_BYTE **)(a2 + 88), *(_QWORD *)(a2 + 88) + *(_QWORD *)(a2 + 96));
  *(_QWORD *)(a1 + 120) = a1 + 136;
  sub_A09AE0((_QWORD *)(a1 + 120), *(_BYTE **)(a2 + 120), *(_QWORD *)(a2 + 120) + *(_QWORD *)(a2 + 128));
  v6 = *(_QWORD *)(a2 + 160) - *(_QWORD *)(a2 + 152);
  *(_OWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  result = 0xEEEEEEEEEEEEEEEFLL * (v6 >> 3);
  v8 = 0;
  if ( result )
  {
    if ( result > 0x222222222222222LL )
      std::__throw_bad_alloc();
    result = operator new(v6);
    v8 = result;
  }
  v22[0].m128i_i64[0] = v8;
  v9 = _mm_loadl_epi64(v22);
  *(_QWORD *)(a1 + 168) = v8 + v6;
  *(__m128i *)(a1 + 152) = _mm_unpacklo_epi64(v9, v9);
  v10 = *(_QWORD *)(a2 + 160);
  v11 = *(_QWORD *)(a2 + 152);
  if ( v10 != v11 )
  {
    v12 = *(_QWORD *)(a2 + 152);
    v13 = v8;
    do
    {
      *(_QWORD *)v13 = v13 + 16;
      sub_A09AE0((_QWORD *)v13, *(_BYTE **)v12, *(_QWORD *)v12 + *(_QWORD *)(v12 + 8));
      v14 = *(_BYTE *)(v12 + 32) & 1 | *(_BYTE *)(v13 + 32) & 0xFE;
      *(_BYTE *)(v13 + 32) = v14;
      v15 = *(_BYTE *)(v12 + 32) & 2 | v14 & 0xFD;
      *(_BYTE *)(v13 + 32) = v15;
      v16 = *(_BYTE *)(v12 + 32) & 4 | v15 & 0xFB;
      *(_BYTE *)(v13 + 32) = v16;
      *(_BYTE *)(v13 + 32) = *(_BYTE *)(v12 + 32) & 8 | v16 & 0xF7;
      *(_QWORD *)(v13 + 40) = v13 + 56;
      sub_A09AE0((_QWORD *)(v13 + 40), *(_BYTE **)(v12 + 40), *(_QWORD *)(v12 + 40) + *(_QWORD *)(v12 + 48));
      v17 = *(_BYTE *)(v12 + 72) & 1 | *(_BYTE *)(v13 + 72) & 0xFE;
      *(_BYTE *)(v13 + 72) = v17;
      *(_BYTE *)(v13 + 72) = *(_BYTE *)(v12 + 72) & 6 | v17 & 0xF9;
      *(_QWORD *)(v13 + 80) = v13 + 96;
      sub_A09AE0((_QWORD *)(v13 + 80), *(_BYTE **)(v12 + 80), *(_QWORD *)(v12 + 80) + *(_QWORD *)(v12 + 88));
      v18 = *(_BYTE *)(v12 + 112) & 1 | *(_BYTE *)(v13 + 112) & 0xFE;
      *(_BYTE *)(v13 + 112) = v18;
      v19 = *(_BYTE *)(v12 + 112) & 2 | v18 & 0xFD;
      *(_BYTE *)(v13 + 112) = v19;
      v20 = *(_BYTE *)(v12 + 112) & 4 | v19 & 0xFB;
      v12 += 120;
      v13 += 120;
      *(_BYTE *)(v13 - 8) = v20;
      v21 = *(_BYTE *)(v12 - 8) & 8 | v20 & 0xF7;
      *(_BYTE *)(v13 - 8) = v21;
      *(_BYTE *)(v13 - 8) = *(_BYTE *)(v12 - 8) & 0x70 | v21 & 0x8F;
    }
    while ( v10 != v12 );
    result = ((0xEEEEEEEEEEEEEEFLL * ((unsigned __int64)(v10 - 120 - v11) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1;
    v8 += 120 * result;
  }
  *(_QWORD *)(a1 + 160) = v8;
  return result;
}
