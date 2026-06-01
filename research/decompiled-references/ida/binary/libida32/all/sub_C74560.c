unsigned __int64 __fastcall sub_C74560(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        unsigned int a11,
        char a12,
        __int64 a13)
{
  __int64 v14; // r10
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // r9
  __int64 v21; // rsi
  unsigned __int64 v22; // r15
  _QWORD *v23; // rcx
  __int16 v24; // si
  __int16 v25; // ax
  _QWORD *v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // r9
  unsigned __int8 v30; // al
  __int64 v32; // rax
  _QWORD *v34; // [rsp+8h] [rbp-60h]
  __int64 v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  __int64 v38; // [rsp+18h] [rbp-50h]
  char v39; // [rsp+20h] [rbp-48h]
  __int64 v40; // [rsp+28h] [rbp-40h]

  v14 = a4;
  v17 = a1[294];
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v19 = a7;
  v20 = a11;
  v21 = (unsigned int)(8 * a8) + 40LL;
  a1[304] += v21;
  if ( a1[295] >= v21 + v18 && v17 )
  {
    a1[294] = v21 + v18;
    v22 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v35 = a2;
    v32 = sub_962430((__int64)(a1 + 294), v21, v21, 3, a7, a11);
    v19 = a7;
    v20 = a11;
    v22 = v32;
    v14 = a4;
    a2 = v35;
  }
  v23 = (_QWORD *)v19;
  v24 = 113;
  *(_WORD *)v22 = *(_WORD *)v22 & 0xFE00 | 0x71;
  if ( unk_2CAD564 )
  {
    v40 = v19;
    v39 = v20;
    v38 = v14;
    v36 = a2;
    v34 = (_QWORD *)v19;
    sub_EC5E10(113);
    v19 = v40;
    v20 = v39;
    v14 = v38;
    v24 = *(_WORD *)v22 & 0x1FF;
    a2 = v36;
    v23 = v34;
  }
  v25 = *(_WORD *)(v22 + 1);
  *(_DWORD *)(v22 + 32) = a8;
  v25 &= 0xF801u;
  *(_QWORD *)(v22 + 8) = a2;
  *(_WORD *)(v22 + 1) = v25;
  *(_QWORD *)(v22 + 16) = v14;
  *(_QWORD *)(v22 + 24) = a13;
  LOBYTE(v25) = a12 & 7 | *(_BYTE *)(v22 + 3) & 0xF0;
  *(_BYTE *)(v22 + 2) = ((a10 & 1) << 6)
                      | (32 * (a9 & 1)) & 0x3F
                      | (16 * (a6 & 1)) & 0x3F
                      | (8 * (a5 & 1)) & 0xF
                      | HIBYTE(v25) & 7
                      | (v20 << 7);
  *(_BYTE *)(v22 + 3) = v25;
  *(_DWORD *)(v22 + 4) = a3;
  v26 = (_QWORD *)(v22 + 40);
  if ( v24 == 114 )
    v26 = (_QWORD *)(v22 + 48);
  v27 = (8 * a8) >> 3;
  if ( 8 * a8 > 0 )
  {
    if ( 8 * a8 <= 8 )
      goto LABEL_13;
    v28 = 0;
    do
    {
      *(__m128i *)&v26[v28] = _mm_loadu_si128((const __m128i *)(v19 + v28 * 8));
      v28 += 2;
    }
    while ( 2 * (v27 >> 1) != v28 );
    v29 = 8 * (v27 & 0xFFFFFFFFFFFFFFFELL);
    v23 = (_QWORD *)(v19 + v29);
    v26 = (_QWORD *)((char *)v26 + v29);
    if ( v27 != (v27 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_13:
      *v26 = *v23;
  }
  v30 = sub_B41690(v22);
  *(_BYTE *)(v22 + 1) = (v30 << 6) | *(_BYTE *)(v22 + 1) & 0x3F;
  *(_BYTE *)(v22 + 2) = *(_BYTE *)(v22 + 2) & 0xF8 | (v30 >> 2) & 7;
  return v22;
}

