unsigned __int64 __fastcall sub_C76220(
        _QWORD *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        unsigned __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  __int64 v18; // r10
  char v19; // r14
  bool v21; // bp
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int16 v26; // ax
  char v27; // r12
  char v28; // di
  unsigned __int64 v29; // r8
  _QWORD *v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // r9
  char v33; // al
  unsigned __int8 v34; // al
  char v36; // al
  __int64 v37; // rdi
  int v38; // rax^4
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+8h] [rbp-80h]
  unsigned __int64 v41; // [rsp+8h] [rbp-80h]
  char v42; // [rsp+1Fh] [rbp-69h]
  __int64 v43; // [rsp+20h] [rbp-68h]
  unsigned __int64 v44; // [rsp+28h] [rbp-60h]
  __int64 v46; // [rsp+30h] [rbp-58h]
  __int64 v47; // [rsp+30h] [rbp-58h]
  __int64 v48; // [rsp+38h] [rbp-50h]
  __int64 v49; // [rsp+40h] [rbp-48h]

  v18 = a4;
  v19 = a6;
  LOBYTE(a6) = a13 != 0;
  v21 = HIDWORD(a9) != 0 && (_DWORD)a9 != 0;
  v22 = 8 * (v21 + (unsigned __int64)((unsigned int)a8 + (a13 != 0) + (unsigned __int8)a11)) + 56;
  v23 = a1[294];
  a1[304] += v22;
  v24 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v22 + v24 && v23 )
  {
    a1[294] = v22 + v24;
  }
  else
  {
    v47 = a5;
    v43 = a3;
    v39 = sub_962430((__int64)(a1 + 294), v22, v22, 3, a5, a6);
    a5 = v47;
    v18 = a4;
    v24 = v39;
    a3 = v43;
    LOBYTE(a6) = a13 != 0;
  }
  v25 = a7;
  *(_WORD *)v24 = *(_WORD *)v24 & 0xFE00 | 0x6A;
  if ( unk_2CAD564 )
  {
    v49 = a5;
    v48 = v18;
    v46 = a3;
    v44 = v24;
    v42 = a6;
    sub_EC5E10(106);
    a5 = v49;
    v18 = v48;
    a3 = v46;
    v24 = v44;
    v25 = a7;
    LOBYTE(a6) = v42;
  }
  v26 = *(_WORD *)(v24 + 1);
  *(_QWORD *)(v24 + 16) = a3;
  *(_QWORD *)(v24 + 24) = v18;
  *(_QWORD *)(v24 + 8) = a14;
  v26 &= 0xF801u;
  *(_WORD *)(v24 + 1) = v26;
  *(_QWORD *)(v24 + 32) = a15;
  *(_QWORD *)(v24 + 40) = a16;
  *(_QWORD *)(v24 + 48) = a17;
  v27 = (16 * (a11 & 1)) | HIBYTE(v26) & 0xE7 | (8 * (a2 & 1)) & 0xEF;
  *(_BYTE *)(v24 + 2) = v27;
  LOBYTE(v26) = (32 * (*(_DWORD *)(a5 + 12) == 1)) | v27 & 0xDF;
  *(_BYTE *)(v24 + 2) = v26;
  v28 = *(_DWORD *)(a5 + 8) == 1;
  *(_DWORD *)(v24 + 4) = a8;
  *(_BYTE *)(v24 + 2) = (v19 << 7) | (v28 << 6) | v26 & 0x3F;
  *(_BYTE *)(v24 + 3) = (8 * v21) | (2 * (a12 & 3)) & 0xF7 | *(_BYTE *)(v24 + 3) & 0xF0 | a6 & 0xF7;
  if ( (_BYTE)a11 )
    *(_QWORD *)(v24 + 56) = a10;
  if ( a13 )
    *(_QWORD *)(v24 + 8 * ((*(_QWORD *)v24 >> 20) & 1LL) + 56) = a13;
  v29 = (8 * a8) >> 3;
  v30 = (_QWORD *)(v24 + 8LL * (((*(_QWORD *)v24 & 0x100000LL) != 0) + (BYTE3(*(_QWORD *)v24) & 1)) + 56);
  if ( 8 * a8 > 0 )
  {
    if ( 8 * a8 <= 8 )
      goto LABEL_15;
    v31 = 0;
    do
    {
      *(__m128i *)&v30[v31] = _mm_loadu_si128((const __m128i *)&a7[v31]);
      v31 += 2;
    }
    while ( v31 != 2 * (v29 >> 1) );
    v32 = v29 & 0xFFFFFFFFFFFFFFFELL;
    v25 = &a7[v32];
    v30 = (_QWORD *)((char *)v30 + v32 * 8);
    if ( (v29 & 0xFFFFFFFFFFFFFFFELL) != v29 )
LABEL_15:
      *v30 = *v25;
  }
  if ( !v21 )
  {
    v36 = (*(_BYTE *)(v24 + 3) >> 1) & 3;
    if ( v36 != 1 )
    {
      if ( v36 != 2 )
        goto LABEL_20;
      goto LABEL_23;
    }
LABEL_26:
    *(_DWORD *)(v24 + 44) = HIDWORD(a17);
    goto LABEL_20;
  }
  *(_QWORD *)(v24
            + 8LL * (*(_DWORD *)(v24 + 4) + ((*(_QWORD *)v24 & 0x100000LL) != 0) + (BYTE3(*(_QWORD *)v24) & 1))
            + 56) = a9;
  v33 = (*(_BYTE *)(v24 + 3) >> 1) & 3;
  if ( v33 == 1 )
    goto LABEL_26;
  if ( v33 != 2 )
  {
    *(_DWORD *)(v24 + 44) = HIDWORD(a9);
    goto LABEL_20;
  }
LABEL_23:
  v37 = 0;
  if ( (*(_QWORD *)v24 & 0x1000000) != 0 )
    v37 = *(_QWORD *)(v24 + 8 * ((*(_QWORD *)v24 >> 20) & 1LL) + 56);
  v41 = v24;
  v38 = (unsigned __int64)sub_EC8B80(v37) >> 32;
  v24 = v41;
  *(_DWORD *)(v41 + 44) = v38;
LABEL_20:
  v40 = v24;
  v34 = sub_B40E70((unsigned __int64 *)v24);
  *(_BYTE *)(v40 + 1) = (v34 << 6) | *(_BYTE *)(v40 + 1) & 0x3F;
  *(_BYTE *)(v40 + 2) = *(_BYTE *)(v40 + 2) & 0xF8 | (v34 >> 2) & 7;
  return v40;
}

