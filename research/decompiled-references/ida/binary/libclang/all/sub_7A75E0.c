__int64 __fastcall sub_7A75E0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  __int16 v13; // ax
  __int16 v14; // ax
  __m128i v15; // xmm0
  __int64 result; // rax
  __int16 v17; // dx
  unsigned int v18; // eax
  bool v19; // al
  __m128i v20; // [rsp+0h] [rbp-48h] BYREF

  v20.m128i_i64[0] = a6;
  *(_QWORD *)a1 = off_49F5208;
  if ( !a4
    || (v11 = sub_79A2E0(a4), v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) == 0)
    || *(char *)(v11 + 29) < 0
    && (v20.m128i_i64[1] = *(_QWORD *)(v11 + 8) & 7LL, v19 = sub_7946A0(v11), v12 = v20.m128i_i64[1], !v19) )
  {
    v12 = 0;
  }
  *(_QWORD *)(a1 + 8) = v12;
  LOBYTE(v13) = a2 & 0x7F;
  *(_QWORD *)(a1 + 16) = a4 & 0xFFFFFFFFFFFFFFFBLL;
  HIBYTE(v13) = 96;
  *(_DWORD *)(a1 + 24) = a5;
  *(_WORD *)(a1 + 28) = v13;
  v14 = sub_799DF0(a2);
  *(_BYTE *)(a1 + 32) &= 0xF8u;
  *(_WORD *)(a1 + 30) = v14 & 0x3FFF | *(_WORD *)(a1 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(a2);
  *(_QWORD *)(a1 + 56) = a1;
  v15 = _mm_loadl_epi64(&v20);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)a1 = &off_49F5840;
  result = a7;
  *(__m128i *)(a1 + 40) = _mm_unpacklo_epi64(v15, (__m128i)(a3 & 0xFFFFFFFFFFFFFFFCLL | 2));
  *(_QWORD *)(a1 + 72) = a7;
  if ( a8 )
  {
    v17 = *(_WORD *)(a8 + 30);
    v18 = *(unsigned __int16 *)(a1 + 30);
    *(_QWORD *)(a1 + 64) = a8;
    LOWORD(v18) = v18 & 0xC000;
    result = v17 & 0x367F | v18;
    *(_WORD *)(a1 + 30) = result;
  }
  *(_BYTE *)(a1 + 29) |= 2u;
  return result;
}

