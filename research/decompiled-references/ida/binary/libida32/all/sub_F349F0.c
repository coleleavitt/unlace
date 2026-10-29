__int64 __fastcall sub_F349F0(unsigned __int64 a1, __int64 a2, __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  char v11; // al
  char v12; // di
  char v13; // cl
  char v14; // dl
  char v15; // al
  __int16 v16; // si
  unsigned __int64 v17; // rdx
  __int16 v18; // bp
  char v19; // dl
  char v20; // al
  __int64 result; // rax
  __m128i v22; // xmm1
  __int64 v23; // r13
  __m128i *v24; // rbp
  __int64 v25; // rdi

  v10 = a4;
  v11 = sub_EFF2D0(a3, a2, (__int64)a3, a4, a5, a6);
  v12 = v11 & 8;
  if ( (v11 & 8) != 0 )
    v12 = 16;
  v13 = v11 & 4;
  if ( (v11 & 4) != 0 )
    v13 = 12;
  v14 = v11 & 2;
  if ( (v11 & 2) != 0 )
    v14 = 2;
  v15 = sub_F328B0(v14 | (unsigned __int8)(v13 | v11 & 1 | v12));
  v16 = 8 * (unsigned __int8)a2;
  *(_QWORD *)a1 = a1;
  *(_QWORD *)(a1 + 24) = 0;
  v17 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v17 = a6;
  *(_BYTE *)(a1 + 18) &= 0xF8u;
  v18 = *(_WORD *)(a1 + 18);
  *(_QWORD *)(a1 + 8) = v17;
  v19 = v15 & 0x1F;
  v20 = *(_BYTE *)(a1 + 17) & 0xE0;
  *(_WORD *)(a1 + 18) = v16 | v18 & 0xF807;
  *(_BYTE *)(a1 + 17) = v19 | v20;
  *(_WORD *)(a1 + 16) = *(_WORD *)(a1 + 16) & 0x1F00 | 0x16;
  result = 3 * a5;
  v22 = _mm_loadu_si128(a3);
  v23 = v10 + 24 * a5;
  *(_DWORD *)(a1 + 20) = a5;
  *(__m128i *)(a1 + 32) = v22;
  if ( v10 != v23 )
  {
    v24 = (__m128i *)(a1 + 48);
    do
    {
      v25 = v10;
      v24 = (__m128i *)((char *)v24 + 24);
      v10 += 24;
      *(_BYTE *)(a1 + 17) |= sub_EF9570(v25) & 1;
      *(__m128i *)((char *)v24 - 24) = _mm_loadu_si128((const __m128i *)(v10 - 24));
      result = *(_QWORD *)(v10 - 8);
      v24[-1].m128i_i64[1] = result;
    }
    while ( v23 != v10 );
  }
  return result;
}

