unsigned __int64 __fastcall sub_BE68E0(
        _QWORD *a1,
        int a2,
        __int64 a3,
        const void *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        int a9,
        unsigned __int8 a10)
{
  __int64 v10; // r10
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // r12
  _QWORD *v17; // rdx
  __int16 v18; // ax
  char v19; // al
  bool v20; // di
  _QWORD *v21; // rsi
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  size_t v25; // r13
  unsigned __int8 v26; // al
  __int64 v28; // rax
  int v30; // [rsp+10h] [rbp-58h]
  int v31; // [rsp+18h] [rbp-50h]
  __int64 v33; // [rsp+20h] [rbp-48h]
  int v34; // [rsp+20h] [rbp-48h]
  int v35; // [rsp+2Ch] [rbp-3Ch]

  v10 = a3;
  v13 = 8 * ((unsigned int)a8 + (unsigned __int64)(unsigned int)(a8 + 1)) + 32;
  v14 = a1[294];
  a1[304] += v13;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v13 + v15 && v14 )
  {
    a1[294] = v13 + v15;
  }
  else
  {
    v34 = a6;
    v30 = a2;
    v28 = sub_962430((__int64)(a1 + 294), v13, v13, 3, a5, a6);
    LODWORD(a6) = v34;
    v10 = a3;
    v15 = v28;
    a2 = v30;
  }
  v16 = a1[2384];
  v17 = a7;
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x39;
  if ( unk_2CAD564 )
  {
    v35 = a6;
    v33 = v10;
    v31 = a2;
    sub_EC5E10(57);
    LODWORD(a6) = v35;
    v10 = v33;
    a2 = v31;
    v17 = a7;
  }
  v18 = *(_WORD *)(v15 + 16);
  *(_WORD *)(v15 + 1) &= 0xF801u;
  *(_QWORD *)(v15 + 8) = v16;
  *(_DWORD *)(v15 + 20) = a6;
  *(_DWORD *)(v15 + 4) = a2;
  *(_WORD *)(v15 + 16) = a8 & 0x7FFF | v18 & 0x8000;
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(v15 + 16) & 0x80007FFF | 0x3FFF8000;
  *(_DWORD *)(v15 + 24) = a9;
  *(_QWORD *)(v15 + 8 * (a8 & 0x7FFF) + 32) = v10;
  v19 = *(_BYTE *)(v15 + 19) & 0x40;
  v20 = v19 != 0;
  v21 = (_QWORD *)(v15 + 8LL * v20 + 32);
  v22 = (8 * a8) >> 3;
  if ( 8 * a8 > 0 )
  {
    if ( 8 * a8 <= 8 )
      goto LABEL_11;
    v23 = 0;
    do
    {
      *(__m128i *)&v21[v23] = _mm_loadu_si128((const __m128i *)&a7[v23]);
      v23 += 2;
    }
    while ( v23 != 2 * (v22 >> 1) );
    v24 = v22 & 0xFFFFFFFFFFFFFFFELL;
    v17 = &a7[v24];
    v21 = (_QWORD *)((char *)v21 + v24 * 8);
    if ( (v22 & 0xFFFFFFFFFFFFFFFELL) != v22 )
LABEL_11:
      *v21 = *v17;
    v19 = *(_BYTE *)(v15 + 19) & 0x40;
    v20 = v19 != 0;
  }
  v25 = 8 * a5;
  if ( v25 )
    memmove(
      (void *)(v15 + 8LL * (v19 == 0) + 8LL * ((*(_WORD *)(v15 + 16) & 0x7FFF) + (unsigned int)v20) + 32),
      a4,
      v25);
  v26 = sub_B40BB0(v15, a10);
  *(_BYTE *)(v15 + 1) = (v26 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
  *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v26 >> 2) & 7;
  return v15;
}

