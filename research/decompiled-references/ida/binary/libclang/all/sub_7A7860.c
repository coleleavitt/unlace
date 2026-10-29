unsigned __int64 __fastcall sub_7A7860(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v8; // r15
  unsigned __int8 v9; // al
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int32 v13; // eax
  __int16 v14; // ax
  __m128i v15; // xmm0
  __int16 v16; // cx
  __int16 v17; // ax
  char v18; // cl
  char v19; // al
  char v20; // al
  __int64 v21; // rcx
  bool v23; // al
  __int8 v24; // cl
  char v25; // al
  __m128i v26; // [rsp+8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+18h] [rbp-40h]

  v26.m128i_i64[1] = __PAIR64__(a3, a6);
  v8 = sub_79A610(104, (_QWORD *)a1, a2, 0);
  v9 = *(_BYTE *)(a5 + 28) & 0x7F;
  if ( ((v9 + 54) & 0x7Fu) <= 1 || (v10 = a5, (unsigned int)v9 - 51 <= 1) )
    v10 = sub_77AA60(a5);
  v26.m128i_i64[0] = *(_QWORD *)(a4 + 40);
  *(_QWORD *)v8 = off_49F5208;
  if ( !a2
    || (v11 = sub_79A2E0(a2), v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) == 0)
    || *(char *)(v11 + 29) < 0 && (v27 = *(_QWORD *)(v11 + 8) & 7LL, v23 = sub_7946A0(v11), v12 = v27, !v23) )
  {
    v12 = 0;
  }
  v13 = v26.m128i_i32[3];
  *(_QWORD *)(v8 + 8) = v12;
  *(_QWORD *)(v8 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v8 + 24) = v13;
  *(_WORD *)(v8 + 28) = 24628;
  v14 = sub_799DF0(0x34u);
  *(_BYTE *)(v8 + 32) &= 0xF8u;
  *(_WORD *)(v8 + 30) = v14 & 0x3FFF | *(_WORD *)(v8 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(52);
  v15 = _mm_loadl_epi64(&v26);
  *(_QWORD *)(v8 + 56) = v8;
  *(_QWORD *)(v8 + 64) = 0;
  *(_QWORD *)(v8 + 72) = a4;
  *(_QWORD *)v8 = &off_49F5840;
  *(__m128i *)(v8 + 40) = _mm_unpacklo_epi64(v15, (__m128i)(a1 & 0xFFFFFFFFFFFFFFFCLL | 2));
  if ( v10 )
  {
    v16 = *(_WORD *)(v10 + 30);
    v17 = *(_WORD *)(v8 + 30);
    *(_QWORD *)(v8 + 64) = v10;
    *(_WORD *)(v8 + 30) = v16 & 0x367F | v17 & 0xC000;
  }
  *(_BYTE *)(v8 + 29) |= 2u;
  *(_QWORD *)v8 = &off_49F58B8;
  if ( (*(_BYTE *)(a5 + 28) & 0x7F) == 0x34 )
  {
    v18 = v26.m128i_i8[8] & 1;
    v19 = *(_BYTE *)(v8 + 96) & 0xFE;
    *(__m128i *)(v8 + 80) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a5, (__m128i)(unsigned __int64)a5);
    v20 = v18 | v19;
    *(_BYTE *)(v8 + 96) = v20;
    if ( (*(_BYTE *)(a5 + 96) & 1) != 0 )
    {
      v21 = *(_QWORD *)(a5 + 88);
      *(_BYTE *)(v8 + 96) = v20 | 1;
      *(_QWORD *)(v8 + 88) = v21;
    }
  }
  else
  {
    v24 = v26.m128i_i8[8];
    v25 = *(_BYTE *)(v8 + 96);
    *(_OWORD *)(v8 + 80) = 0;
    *(_BYTE *)(v8 + 96) = v24 & 1 | v25 & 0xFE;
  }
  return v8;
}

