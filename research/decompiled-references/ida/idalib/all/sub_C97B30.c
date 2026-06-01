unsigned __int64 __fastcall sub_C97B30(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  _QWORD *v17; // r15
  int v18; // eax
  __int16 v19; // di
  _QWORD *v20; // r10
  __int64 v21; // r8
  __int64 v22; // r9
  __int16 v23; // cx
  _QWORD *v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int64 v28; // r9
  unsigned __int8 v29; // al
  __int64 v31; // rax
  _QWORD *v33; // [rsp+10h] [rbp-68h]
  int v34; // [rsp+10h] [rbp-68h]
  _QWORD *v35; // [rsp+10h] [rbp-68h]
  __int64 v36; // [rsp+18h] [rbp-60h]
  _QWORD *v37; // [rsp+18h] [rbp-60h]
  __int64 v38; // [rsp+18h] [rbp-60h]
  __int64 v39; // [rsp+20h] [rbp-58h]
  __int64 v40; // [rsp+20h] [rbp-58h]
  __int64 v41; // [rsp+20h] [rbp-58h]
  __int64 v42; // [rsp+28h] [rbp-50h]
  _QWORD v43[9]; // [rsp+30h] [rbp-48h] BYREF

  v13 = (unsigned int)(8 * a6) + 48LL;
  v14 = a1[294];
  a1[304] += v13;
  v15 = v13 + ((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= v15 && v14 )
  {
    a1[294] = v15;
    v16 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v41 = a6;
    v38 = a5;
    v35 = a4;
    v31 = sub_986170((__int64)(a1 + 294), v13, (unsigned int)(8 * a6) + 48LL, 3, a5, a6);
    a6 = v41;
    a5 = v38;
    v16 = v31;
    a4 = v35;
  }
  v39 = a6;
  v17 = (_QWORD *)a5;
  v36 = a5;
  v43[0] = *a4;
  v33 = a4;
  v43[1] = a4 + 1;
  v18 = sub_F6CCB0(v43);
  v19 = 114;
  v20 = v33;
  v21 = v36;
  v22 = v39;
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x72;
  if ( unk_2CD7484 )
  {
    v42 = v39;
    v40 = v36;
    v37 = v33;
    v34 = v18;
    sub_EE9B50(114);
    v22 = v42;
    v21 = v40;
    v20 = v37;
    v19 = *(_WORD *)v16 & 0x1FF;
    v18 = v34;
  }
  v23 = *(_WORD *)(v16 + 1);
  *(_QWORD *)(v16 + 16) = a2;
  v23 &= 0xF801u;
  *(_DWORD *)(v16 + 4) = v18;
  v24 = (_QWORD *)(v16 + 40);
  *(_WORD *)(v16 + 1) = v23;
  *(_QWORD *)(v16 + 24) = a7;
  *(_DWORD *)(v16 + 32) = v22;
  *(_QWORD *)(v16 + 8) = a3;
  *(_BYTE *)(v16 + 2) = (a11 << 7)
                      | ((a10 & 1) << 6) & 0x7F
                      | (32 * (a9 & 1)) & 0x7F
                      | (16 * (a8 & 1)) & 0x1F
                      | HIBYTE(v23) & 0xF;
  *(_WORD *)(v16 + 2) &= 0xF0F7u;
  if ( v19 == 114 )
    v24 = (_QWORD *)(v16 + 48);
  v25 = 8 * v22;
  v26 = v25 >> 3;
  if ( v25 > 0 )
  {
    if ( v25 <= 8 )
      goto LABEL_13;
    v27 = 0;
    do
    {
      *(__m128i *)&v24[v27] = _mm_loadu_si128((const __m128i *)(v21 + v27 * 8));
      v27 += 2;
    }
    while ( v27 != 2 * (v26 >> 1) );
    v28 = 8 * (v26 & 0xFFFFFFFFFFFFFFFELL);
    v17 = (_QWORD *)(v21 + v28);
    v24 = (_QWORD *)((char *)v24 + v28);
    if ( v26 != (v26 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_13:
      *v24 = *v17;
  }
  *(_QWORD *)(v16 + 40) = v20;
  v29 = sub_B65490(v16);
  *(_BYTE *)(v16 + 1) = (v29 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v29 >> 2) & 7;
  return v16;
}
