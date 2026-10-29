unsigned __int64 __fastcall sub_BE7070(
        _QWORD *a1,
        int a2,
        __int64 a3,
        const void *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        int a9,
        unsigned __int8 a10,
        int a11)
{
  const void *v12; // r10
  unsigned __int8 v14; // r11
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // ecx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  char v21; // r11
  __int64 v22; // rsi
  char v23; // al
  __int16 v24; // si
  _QWORD *v25; // rdi
  bool v26; // r9
  __int16 v27; // ax
  unsigned __int64 v28; // r11
  unsigned int v29; // eax
  char v30; // al
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  size_t v33; // r8
  unsigned __int8 v34; // al
  __int64 v36; // rax
  int v37; // [rsp+0h] [rbp-68h]
  int v38; // [rsp+0h] [rbp-68h]
  __int64 v40; // [rsp+8h] [rbp-60h]
  const void *v41; // [rsp+18h] [rbp-50h]
  __int64 v42; // [rsp+20h] [rbp-48h]
  char v43; // [rsp+28h] [rbp-40h]
  int v44; // [rsp+28h] [rbp-40h]
  int v45; // [rsp+2Ch] [rbp-3Ch]

  v12 = a4;
  v14 = a10;
  v15 = 8 * ((unsigned int)a8 + (unsigned __int64)(unsigned int)(a8 + 1)) + 32;
  v16 = a1[294];
  a1[304] += v15;
  v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v15 + v17 && v16 )
  {
    a1[294] = v15 + v17;
  }
  else
  {
    v44 = a6;
    v40 = a5;
    v36 = sub_962430((__int64)(a1 + 294), v15, v15, 3, a5, a6);
    v14 = a10;
    LODWORD(a6) = v44;
    v17 = v36;
    a5 = v40;
    v12 = a4;
  }
  v18 = v14;
  v19 = a7;
  v20 = a7[a11];
  v21 = *(_BYTE *)(v20 + 1);
  v22 = *(_QWORD *)(v20 + 8);
  *(_WORD *)v17 = *(_WORD *)v17 & 0xFE00 | 0x39;
  if ( unk_2CAD564 )
  {
    v45 = a6;
    v42 = a5;
    v41 = v12;
    v43 = v21;
    v38 = v18;
    sub_EC5E10(57);
    LODWORD(a6) = v45;
    a5 = v42;
    v12 = v41;
    v21 = v43;
    v19 = a7;
    v18 = v38;
  }
  v23 = *(_BYTE *)(v17 + 1);
  *(_QWORD *)(v17 + 8) = v22;
  v24 = a8 & 0x7FFF;
  *(_BYTE *)(v17 + 2) &= 0xF8u;
  v25 = (_QWORD *)(v17 + 40);
  *(_DWORD *)(v17 + 20) = a6;
  v26 = 1;
  *(_DWORD *)(v17 + 4) = a2;
  *(_BYTE *)(v17 + 1) = v21 & 0x3E | v23 & 1;
  v27 = *(_WORD *)(v17 + 16);
  v28 = (8 * a8) >> 3;
  *(_QWORD *)(v17 + 32) = a3;
  *(_WORD *)(v17 + 16) = a8 & 0x7FFF | v27 & 0x8000;
  v29 = ((a11 & 0x7FFF) << 15) | *(_DWORD *)(v17 + 16) & 0xC0007FFF;
  *(_DWORD *)(v17 + 16) = v29;
  *(_BYTE *)(v17 + 19) = HIBYTE(v29) | 0x40;
  *(_DWORD *)(v17 + 24) = a9;
  v30 = 64;
  if ( 8 * a8 > 0 )
  {
    if ( 8 * a8 <= 8 )
      goto LABEL_11;
    v31 = 0;
    do
    {
      *(__m128i *)&v25[v31] = _mm_loadu_si128((const __m128i *)&a7[v31]);
      v31 += 2;
    }
    while ( v31 != 2 * (v28 >> 1) );
    v32 = v28 & 0xFFFFFFFFFFFFFFFELL;
    v19 = &a7[v32];
    v25 = (_QWORD *)((char *)v25 + v32 * 8);
    if ( (v28 & 0xFFFFFFFFFFFFFFFELL) != v28 )
LABEL_11:
      *v25 = *v19;
    v24 = *(_WORD *)(v17 + 16) & 0x7FFF;
    v30 = *(_BYTE *)(v17 + 19) & 0x40;
    v26 = v30 != 0;
  }
  v33 = 8 * a5;
  if ( v33 )
  {
    v37 = v18;
    memmove((void *)(v17 + 8LL * (unsigned __int16)(v26 + v24) + 8LL * (v30 == 0) + 32), v12, v33);
    v18 = v37;
  }
  v34 = sub_B40BB0(v17, v18);
  *(_BYTE *)(v17 + 1) = (v34 << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
  *(_BYTE *)(v17 + 2) = *(_BYTE *)(v17 + 2) & 0xF8 | (v34 >> 2) & 7;
  return v17;
}

