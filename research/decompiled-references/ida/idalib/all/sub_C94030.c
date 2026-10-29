__int64 __fastcall sub_C94030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        int a8,
        int a9,
        __int128 a10)
{
  __int64 v12; // r13
  int v13; // ecx
  int v14; // eax
  __m128i v15; // xmm0
  int v16; // eax
  __int64 v17; // rcx
  __m128i v18; // xmm1
  unsigned __int8 v19; // al
  __int64 result; // rax
  unsigned int v21; // [rsp+4h] [rbp-34h]
  __int64 v22; // [rsp+8h] [rbp-30h]

  v12 = *(_QWORD *)(a2 + 19088);
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x66;
  if ( unk_2CD7484 )
  {
    v22 = a6;
    v21 = a5;
    sub_EE9B50(102);
    a6 = v22;
    a5 = v21;
  }
  v13 = *(unsigned __int8 *)(a1 + 24);
  v14 = a8;
  *(_QWORD *)(a1 + 8) = v12;
  *(_WORD *)(a1 + 1) &= 0xF801u;
  v15 = _mm_loadu_si128((const __m128i *)&a7);
  *(_DWORD *)(a1 + 56) = v14;
  v16 = a9;
  v17 = a4 & 1 | v13 & 0xFFFFFFFE;
  *(_QWORD *)(a1 + 16) = a3;
  v18 = _mm_loadu_si128((const __m128i *)&a10);
  *(_BYTE *)(a1 + 24) = v17;
  *(_DWORD *)(a1 + 28) = a5;
  *(_QWORD *)(a1 + 48) = a6;
  *(_DWORD *)(a1 + 60) = v16;
  *(__m128i *)(a1 + 32) = v15;
  *(__m128i *)(a1 + 64) = v18;
  v19 = sub_B64D60(a1, a2, a3, v17, a5);
  *(_BYTE *)(a1 + 1) = (v19 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v19 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}
