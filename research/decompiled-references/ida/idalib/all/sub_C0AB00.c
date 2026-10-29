unsigned __int64 __fastcall sub_C0AB00(
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
  unsigned int v24; // eax
  char v25; // al
  bool v26; // di
  _QWORD *v27; // rsi
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  size_t v31; // r8
  unsigned __int8 v32; // al
  __int64 v34; // rax
  int v35; // [rsp+0h] [rbp-68h]
  int v36; // [rsp+0h] [rbp-68h]
  __int64 v38; // [rsp+8h] [rbp-60h]
  const void *v39; // [rsp+18h] [rbp-50h]
  __int64 v40; // [rsp+20h] [rbp-48h]
  char v41; // [rsp+28h] [rbp-40h]
  int v42; // [rsp+28h] [rbp-40h]
  int v43; // [rsp+2Ch] [rbp-3Ch]

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
    v42 = a6;
    v38 = a5;
    v34 = sub_986170((__int64)(a1 + 294), v15, v15, 3, a5, a6);
    v14 = a10;
    LODWORD(a6) = v42;
    v17 = v34;
    a5 = v38;
    v12 = a4;
  }
  v18 = v14;
  v19 = a7;
  v20 = a7[a11];
  v21 = *(_BYTE *)(v20 + 1);
  v22 = *(_QWORD *)(v20 + 8);
  *(_WORD *)v17 = *(_WORD *)v17 & 0xFE00 | 0x39;
  if ( unk_2CD7484 )
  {
    v43 = a6;
    v40 = a5;
    v39 = v12;
    v41 = v21;
    v36 = v18;
    sub_EE9B50(57);
    LODWORD(a6) = v43;
    a5 = v40;
    v12 = v39;
    v21 = v41;
    v19 = a7;
    v18 = v36;
  }
  v23 = *(_BYTE *)(v17 + 1);
  *(_QWORD *)(v17 + 8) = v22;
  *(_BYTE *)(v17 + 2) &= 0xF8u;
  *(_DWORD *)(v17 + 20) = a6;
  *(_DWORD *)(v17 + 4) = a2;
  *(_BYTE *)(v17 + 1) = v21 & 0x3E | v23 & 1;
  *(_WORD *)(v17 + 16) = a8 & 0x7FFF | *(_WORD *)(v17 + 16) & 0x8000;
  v24 = ((a11 & 0x7FFF) << 15) | *(_DWORD *)(v17 + 16) & 0xC0007FFF;
  *(_DWORD *)(v17 + 16) = v24;
  *(_BYTE *)(v17 + 19) = HIBYTE(v24) & 0xBF;
  *(_DWORD *)(v17 + 24) = a9;
  *(_QWORD *)(v17 + 8 * (a8 & 0x7FFF) + 32) = a3;
  v25 = *(_BYTE *)(v17 + 19) & 0x40;
  v26 = v25 != 0;
  v27 = (_QWORD *)(v17 + 8LL * v26 + 32);
  v28 = (8 * a8) >> 3;
  if ( 8 * a8 > 0 )
  {
    if ( 8 * a8 <= 8 )
      goto LABEL_11;
    v29 = 0;
    do
    {
      *(__m128i *)&v27[v29] = _mm_loadu_si128((const __m128i *)&a7[v29]);
      v29 += 2;
    }
    while ( v29 != 2 * (v28 >> 1) );
    v30 = v28 & 0xFFFFFFFFFFFFFFFELL;
    v19 = &a7[v30];
    v27 = (_QWORD *)((char *)v27 + v30 * 8);
    if ( (v28 & 0xFFFFFFFFFFFFFFFELL) != v28 )
LABEL_11:
      *v27 = *v19;
    v25 = *(_BYTE *)(v17 + 19) & 0x40;
    v26 = v25 != 0;
  }
  v31 = 8 * a5;
  if ( v31 )
  {
    v35 = v18;
    memmove(
      (void *)(v17 + 8LL * (v25 == 0) + 8LL * ((*(_WORD *)(v17 + 16) & 0x7FFF) + (unsigned int)v26) + 32),
      v12,
      v31);
    v18 = v35;
  }
  v32 = sub_B648F0(v17, v18);
  *(_BYTE *)(v17 + 1) = (v32 << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
  *(_BYTE *)(v17 + 2) = *(_BYTE *)(v17 + 2) & 0xF8 | (v32 >> 2) & 7;
  return v17;
}
