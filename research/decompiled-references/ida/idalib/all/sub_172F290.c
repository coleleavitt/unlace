__int64 __fastcall sub_172F290(__int64 *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v7; // rbp
  __m128i v8; // xmm4
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  char v14; // r8
  __m128i v15; // xmm0
  __int64 v16; // rsi
  char v17; // di
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  char v21; // di
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  char v24; // r8
  char v25; // di
  char v26; // di
  int v27; // edi

  v3 = a3 - (_QWORD)a2;
  v4 = 0xCF3CF3CF3CF3CF3DLL * (v3 >> 3);
  result = 0x7FFFFFFFFFFFFFF8LL;
  *a1 = v4;
  a1[1] = 0;
  a1[2] = 0;
  if ( v3 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v4 = 0xC30C30C30C30C3LL;
LABEL_5:
    while ( 1 )
    {
      v7 = 168 * v4;
      result = operator new(168 * v4, (const std::nothrow_t *)&std::nothrow);
      if ( result )
        break;
      v4 >>= 1;
      if ( !v4 )
        goto LABEL_3;
    }
    a1[2] = result;
    a1[1] = v4;
    *(_QWORD *)result = a2->m128i_i64[0];
    *(_QWORD *)(result + 8) = a2->m128i_i64[1];
    *(_QWORD *)(result + 16) = a2[1].m128i_i64[0];
    *(_QWORD *)(result + 24) = a2[1].m128i_i64[1];
    *(_QWORD *)(result + 32) = a2[2].m128i_i64[0];
    *(_QWORD *)(result + 40) = a2[2].m128i_i64[1];
    v8 = _mm_loadu_si128(a2 + 3);
    *(_QWORD *)(result + 72) = 0;
    *(_QWORD *)(result + 80) = 0;
    *(__m128i *)(result + 48) = v8;
    *(_QWORD *)(result + 64) = 0;
    *(_QWORD *)(result + 64) = a2[4].m128i_i64[0];
    v9 = a2[4].m128i_i64[1];
    a2[4].m128i_i64[0] = 0;
    v10 = *(_QWORD *)(result + 72);
    *(_QWORD *)(result + 72) = v9;
    v11 = a2[5].m128i_i64[0];
    a2[4].m128i_i64[1] = v10;
    v12 = *(_QWORD *)(result + 80);
    *(_QWORD *)(result + 80) = v11;
    a2[5].m128i_i64[0] = v12;
    *(_DWORD *)(result + 88) = a2[5].m128i_i32[2];
    *(_DWORD *)(result + 92) = a2[5].m128i_i32[3];
    *(_QWORD *)(result + 96) = a2[6].m128i_i64[0];
    LOBYTE(v12) = a2[6].m128i_i8[8] & 1 | *(_BYTE *)(result + 104) & 0xFE;
    *(_BYTE *)(result + 104) = v12;
    LOBYTE(v12) = a2[6].m128i_i8[8] & 2 | v12 & 0xFD;
    *(_BYTE *)(result + 104) = v12;
    LOBYTE(v12) = a2[6].m128i_i8[8] & 4 | v12 & 0xFB;
    *(_BYTE *)(result + 104) = v12;
    LOBYTE(v12) = a2[6].m128i_i8[8] & 8 | v12 & 0xF7;
    *(_BYTE *)(result + 104) = v12;
    LOBYTE(v12) = a2[6].m128i_i8[8] & 0x10 | v12 & 0xEF;
    *(_BYTE *)(result + 104) = v12;
    LOBYTE(v12) = a2[6].m128i_i8[8] & 0x20 | v12 & 0xDF;
    *(_BYTE *)(result + 104) = v12;
    LOBYTE(v12) = a2[6].m128i_i8[8] & 0x40 | v12 & 0xBF;
    *(_BYTE *)(result + 104) = v12;
    *(_BYTE *)(result + 104) = a2[6].m128i_i8[8] & 0x80 | v12 & 0x7F;
    *(_BYTE *)(result + 105) = a2[6].m128i_i8[9] & 3 | *(_BYTE *)(result + 105) & 0xFC;
    *(_DWORD *)(result + 104) = a2[6].m128i_i32[2] & 0x3FC00 | *(_DWORD *)(result + 104) & 0xFFFC03FF;
    *(_DWORD *)(result + 108) = a2[6].m128i_i32[3];
    *(__m128i *)(result + 112) = _mm_loadu_si128(a2 + 7);
    *(__m128i *)(result + 128) = _mm_loadu_si128(a2 + 8);
    *(__m128i *)(result + 144) = _mm_loadu_si128(a2 + 9);
    *(_QWORD *)(result + 160) = a2[10].m128i_i64[0];
    v13 = result + 168;
    if ( result + v7 != result + 168 )
    {
      do
      {
        v14 = *(_BYTE *)(v13 - 64);
        v15 = _mm_loadu_si128((const __m128i *)(v13 - 120));
        v13 += 168;
        v16 = *(_QWORD *)(v13 - 336);
        v17 = *(_BYTE *)(v13 - 232);
        *(__m128i *)(v13 - 120) = v15;
        *(_QWORD *)(v13 - 168) = v16;
        *(_QWORD *)(v13 - 160) = *(_QWORD *)(v13 - 328);
        *(_QWORD *)(v13 - 152) = *(_QWORD *)(v13 - 320);
        *(_QWORD *)(v13 - 144) = *(_QWORD *)(v13 - 312);
        *(_QWORD *)(v13 - 136) = *(_QWORD *)(v13 - 304);
        *(_QWORD *)(v13 - 128) = *(_QWORD *)(v13 - 296);
        v18 = *(_QWORD *)(v13 - 272);
        *(_QWORD *)(v13 - 272) = 0;
        *(_QWORD *)(v13 - 104) = v18;
        v19 = *(_QWORD *)(v13 - 264);
        *(_QWORD *)(v13 - 264) = 0;
        *(_QWORD *)(v13 - 96) = v19;
        v20 = *(_QWORD *)(v13 - 256);
        *(_QWORD *)(v13 - 256) = 0;
        *(_QWORD *)(v13 - 88) = v20;
        *(_DWORD *)(v13 - 80) = *(_DWORD *)(v13 - 248);
        *(_DWORD *)(v13 - 76) = *(_DWORD *)(v13 - 244);
        *(_QWORD *)(v13 - 72) = *(_QWORD *)(v13 - 240);
        LOBYTE(v20) = v17 & 2 | v14 & 1 | *(_BYTE *)(v13 - 64) & 0xFC;
        v21 = *(_BYTE *)(v13 - 232);
        v22 = _mm_loadu_si128((const __m128i *)(v13 - 208));
        v23 = _mm_loadu_si128((const __m128i *)(v13 - 192));
        *(__m128i *)(v13 - 56) = _mm_loadu_si128((const __m128i *)(v13 - 224));
        v24 = *(_BYTE *)(v13 - 232);
        *(__m128i *)(v13 - 40) = v22;
        LOBYTE(v20) = v21 & 8 | v21 & 4 | v20 & 0xF3;
        v25 = *(_BYTE *)(v13 - 232);
        *(__m128i *)(v13 - 24) = v23;
        LOBYTE(v20) = *(_BYTE *)(v13 - 232) & 0x80 | *(_BYTE *)(v13 - 232) & 0x40 | v25 & 0x20 | v24 & 0x10 | v20 & 0xF;
        v26 = *(_BYTE *)(v13 - 231);
        *(_BYTE *)(v13 - 64) = v20;
        LOBYTE(v20) = v26 & 3 | *(_BYTE *)(v13 - 63) & 0xFC;
        v27 = *(_DWORD *)(v13 - 232);
        *(_BYTE *)(v13 - 63) = v20;
        *(_DWORD *)(v13 - 64) = v27 & 0x3FC00 | *(_DWORD *)(v13 - 64) & 0xFFFC03FF;
        *(_DWORD *)(v13 - 60) = *(_DWORD *)(v13 - 228);
        *(_QWORD *)(v13 - 8) = *(_QWORD *)(v13 - 176);
      }
      while ( result + v7 != v13 );
      result += 168 * (((0xF3CF3CF3CF3CF3DLL * ((unsigned __int64)(v7 - 336) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
    }
    return (__int64)sub_172F0A0(a2, (const __m128i *)result);
  }
  else
  {
    if ( v3 > 0 )
      goto LABEL_5;
LABEL_3:
    a1[2] = 0;
    a1[1] = 0;
  }
  return result;
}
