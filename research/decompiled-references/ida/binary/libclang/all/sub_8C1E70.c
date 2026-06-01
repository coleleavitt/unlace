__int64 __fastcall sub_8C1E70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int128 a7,
        int a8,
        int a9,
        __int128 a10)
{
  __int64 v14; // r15
  __m128i si128; // xmm0
  __m128i v16; // xmm1
  char v17; // cl
  int v18; // eax
  int v19; // eax
  unsigned __int8 v20; // al
  __int64 result; // rax
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __m128i v23[4]; // [rsp+10h] [rbp-48h] BYREF

  v14 = *(_QWORD *)(a2 + 18928);
  si128 = _mm_loadu_si128((const __m128i *)&a10);
  v16 = _mm_loadu_si128((const __m128i *)&a7);
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x67;
  if ( byte_4AD234C )
  {
    v23[0] = si128;
    v22 = v16;
    sub_AC4570(103);
    si128 = _mm_load_si128(v23);
    v16 = _mm_load_si128(&v22);
  }
  v17 = *(_BYTE *)(a1 + 24);
  v18 = a8;
  *(_QWORD *)(a1 + 8) = v14;
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_DWORD *)(a1 + 56) = v18;
  v19 = a9;
  *(_QWORD *)(a1 + 16) = a3;
  *(_BYTE *)(a1 + 24) = a4 & 1 | v17 & 0xFE;
  *(_DWORD *)(a1 + 28) = a5;
  *(_QWORD *)(a1 + 48) = a6;
  *(_DWORD *)(a1 + 60) = v19;
  *(__m128i *)(a1 + 32) = v16;
  *(__m128i *)(a1 + 64) = si128;
  v20 = sub_76CB20(a1);
  *(_BYTE *)(a1 + 1) = (v20 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v20 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

