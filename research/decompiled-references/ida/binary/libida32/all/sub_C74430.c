unsigned __int64 __fastcall sub_C74430(
        _QWORD *a1,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned __int8 v14; // al
  __m128i v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+10h] [rbp-28h]

  v7 = 16LL * a2 + 32LL * a3 + 56;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v10 = v7 + v9;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v10;
  else
    v9 = sub_962430((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  v11 = *(_WORD *)v9;
  v16.m128i_i32[2] = 0;
  v16.m128i_i64[0] = 0;
  v17 = 0;
  *(_WORD *)v9 = v11 & 0xFE00 | 0x45;
  if ( unk_2CAD564 )
    sub_EC5E10(69);
  v12 = v17;
  v13 = _mm_load_si128(&v16);
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 48) = v12;
  LOWORD(v12) = *(_WORD *)(v9 + 1);
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(__m128i *)(v9 + 32) = v13;
  *(_WORD *)(v9 + 1) = v12 & 0xF001 | 2;
  v14 = sub_B414D0((const __m128i *)v9, v7, v10, a4, a5, a6);
  *(_BYTE *)(v9 + 1) = (v14 << 6) | *(_BYTE *)(v9 + 1) & 0x3F;
  *(_BYTE *)(v9 + 2) = (8 * (a2 & 1)) | (v14 >> 2) & 7 | *(_BYTE *)(v9 + 2) & 0xF0;
  return v9;
}

