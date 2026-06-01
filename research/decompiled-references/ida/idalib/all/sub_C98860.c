unsigned __int64 __fastcall sub_C98860(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const __m128i *a5,
        __int64 a6,
        void *src,
        __int64 a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  size_t v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int16 v19; // ax
  __int64 v20; // rax
  void *v21; // rdi
  unsigned __int8 v22; // al
  char v23; // dl
  __int64 v25; // rax
  char v27; // [rsp+Ch] [rbp-5Ch]
  __int64 v28; // [rsp+10h] [rbp-58h]
  const __m128i *v29; // [rsp+10h] [rbp-58h]
  const __m128i *v30; // [rsp+18h] [rbp-50h]
  __int64 v32; // [rsp+20h] [rbp-48h]
  __int64 v34; // [rsp+28h] [rbp-40h]

  v10 = a3;
  v11 = a4;
  v13 = a1[294];
  v14 = (a8 - (__int64)src) >> 3;
  v15 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v27 = a6;
  v16 = 8LL * (unsigned int)v14;
  v17 = (unsigned int)(v16 + 64);
  a1[304] += v17;
  if ( a1[295] >= v17 + v15 && v13 )
  {
    a1[294] = v17 + v15;
  }
  else
  {
    v29 = a5;
    v25 = sub_986170((__int64)(a1 + 294), v17, (unsigned int)(v16 + 64), 3, (__int64)a5, a6);
    v11 = a4;
    v10 = a3;
    v15 = v25;
    a5 = v29;
  }
  v18 = a1[2385];
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x18;
  if ( unk_2CD7484 )
  {
    v34 = v11;
    v32 = v10;
    v30 = a5;
    v28 = v18;
    sub_EE9B50(24);
    v11 = v34;
    v10 = v32;
    a5 = v30;
    v18 = v28;
  }
  v19 = *(_WORD *)(v15 + 1);
  *(_QWORD *)(v15 + 8) = v18;
  *(_WORD *)(v15 + 1) = v19 & 0xF801 | 2;
  *(__m128i *)(v15 + 16) = _mm_loadu_si128(a5);
  v20 = a5[1].m128i_i64[0];
  *(_QWORD *)(v15 + 40) = v10;
  *(_QWORD *)(v15 + 32) = v20;
  *(_QWORD *)(v15 + 48) = v11;
  *(_DWORD *)(v15 + 4) = v14;
  *(_BYTE *)(v15 + 2) &= ~8u;
  if ( (_DWORD)v14 )
  {
    v21 = (void *)(v15 + 80);
    if ( (*(_WORD *)v15 & 0x1FF) == 0x18 )
      v21 = (void *)(v15 + 64);
    memcpy(v21, src, v16);
  }
  v22 = sub_B64F10((const __m128i *)v15, a9, a10, 0, (__int64)a5, a6);
  *(_BYTE *)(v15 + 1) = (v22 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
  *(_BYTE *)(v15 + 2) = (v22 >> 2) & 7 | *(_BYTE *)(v15 + 2) & 0xF8;
  if ( (v22 & 4) != 0 )
    *(_QWORD *)(v15 + 8) = a1[2384];
  v23 = *(_BYTE *)(v15 + 2);
  *(_QWORD *)(v15 + 56) = a2;
  *(_BYTE *)(v15 + 2) = v23 & 0xEF | (16 * (v27 & 1));
  return v15;
}
