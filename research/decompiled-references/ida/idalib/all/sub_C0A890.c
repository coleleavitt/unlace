unsigned __int64 __fastcall sub_C0A890(
        _QWORD *a1,
        int a2,
        __int64 a3,
        const void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        unsigned __int8 a10)
{
  const void *v11; // r10
  unsigned __int8 v14; // r11
  _QWORD *v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // r12
  _QWORD *v20; // rdx
  int v21; // ecx
  __int16 v22; // ax
  __int16 v23; // si
  unsigned int v24; // eax
  int v25; // eax
  bool v26; // r9
  _QWORD *v27; // rdi
  unsigned __int64 v28; // r11
  __int64 v29; // rax
  unsigned __int64 v30; // rsi
  size_t v31; // r13
  unsigned __int8 v32; // al
  __int64 v34; // rax
  int v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+8h] [rbp-60h]
  _QWORD *v38; // [rsp+10h] [rbp-58h]
  int v39; // [rsp+10h] [rbp-58h]
  const void *v40; // [rsp+18h] [rbp-50h]
  int v41; // [rsp+20h] [rbp-48h]
  _QWORD *v42; // [rsp+28h] [rbp-40h]

  v11 = a4;
  v14 = a10;
  v15 = (_QWORD *)a7;
  v16 = 8 * ((unsigned int)a8 + (unsigned __int64)(unsigned int)(a8 + 1)) + 32;
  v17 = a1[294];
  a1[304] += v16;
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v16 + v18 && v17 )
  {
    a1[294] = v16 + v18;
  }
  else
  {
    v39 = a6;
    v34 = sub_986170((__int64)(a1 + 294), v16, v16, 3, a7, a6);
    v15 = (_QWORD *)a7;
    v14 = a10;
    v18 = v34;
    LODWORD(a6) = v39;
    v11 = a4;
  }
  v19 = a1[2384];
  v20 = v15;
  v21 = v14;
  *(_WORD *)v18 = *(_WORD *)v18 & 0xFE00 | 0x39;
  if ( unk_2CD7484 )
  {
    v42 = v15;
    v41 = a6;
    v40 = v11;
    v38 = v15;
    v36 = v14;
    sub_EE9B50(57);
    v15 = v42;
    LODWORD(a6) = v41;
    v11 = v40;
    v20 = v38;
    v21 = v36;
  }
  v22 = *(_WORD *)(v18 + 16);
  *(_WORD *)(v18 + 1) &= 0xF801u;
  v23 = a8 & 0x7FFF;
  *(_DWORD *)(v18 + 20) = a6;
  *(_QWORD *)(v18 + 8) = v19;
  *(_DWORD *)(v18 + 24) = a9;
  *(_WORD *)(v18 + 16) = a8 & 0x7FFF | v22 & 0x8000;
  v24 = *(_DWORD *)(v18 + 16);
  *(_DWORD *)(v18 + 4) = a2;
  v24 |= 0x7FFF8000u;
  *(_QWORD *)(v18 + 32) = a3;
  *(_DWORD *)(v18 + 16) = v24;
  v25 = HIBYTE(v24) & 0x40;
  v26 = v25 != 0;
  v27 = (_QWORD *)(v18 + 8LL * (v25 != 0) + 32);
  v28 = (8 * a8) >> 3;
  if ( 8 * a8 > 0 )
  {
    if ( 8 * a8 <= 8 )
      goto LABEL_11;
    v29 = 0;
    do
    {
      *(__m128i *)&v27[v29] = _mm_loadu_si128((const __m128i *)&v15[v29]);
      v29 += 2;
    }
    while ( v29 != 2 * (v28 >> 1) );
    v30 = v28 & 0xFFFFFFFFFFFFFFFELL;
    v20 = &v15[v30];
    v27 = (_QWORD *)((char *)v27 + v30 * 8);
    if ( (v28 & 0xFFFFFFFFFFFFFFFELL) != v28 )
LABEL_11:
      *v27 = *v20;
    v23 = *(_WORD *)(v18 + 16) & 0x7FFF;
    LOBYTE(v25) = *(_BYTE *)(v18 + 19) & 0x40;
    v26 = (unsigned __int8)v25 != 0;
  }
  v31 = 8 * a5;
  if ( v31 )
  {
    v35 = v21;
    memmove((void *)(v18 + 8LL * (unsigned __int16)(v26 + v23) + 8LL * ((_BYTE)v25 == 0) + 32), v11, v31);
    v21 = v35;
  }
  v32 = sub_B648F0(v18, v21);
  *(_BYTE *)(v18 + 1) = (v32 << 6) | *(_BYTE *)(v18 + 1) & 0x3F;
  *(_BYTE *)(v18 + 2) = *(_BYTE *)(v18 + 2) & 0xF8 | (v32 >> 2) & 7;
  return v18;
}
