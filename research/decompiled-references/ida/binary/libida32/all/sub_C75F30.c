unsigned __int64 __fastcall sub_C75F30(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int128 a10,
        __int64 a11,
        __int64 a12)
{
  unsigned int v14; // r13d
  __int64 v15; // r12
  __int64 v16; // r10
  __int64 v17; // r11
  int v18; // edx
  int v19; // eax
  _BOOL8 v20; // rcx
  _BOOL4 v21; // esi
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  __int64 v25; // rbp
  __int16 v26; // ax
  __int16 v27; // ax
  __int64 v28; // rdx
  __m128i v29; // xmm1
  __int16 v30; // ax
  __int64 v31; // rdx
  __int64 v32; // r9
  unsigned __int8 v33; // al
  __int64 v35; // rax
  unsigned __int8 v37; // [rsp+Bh] [rbp-9Dh]
  unsigned int v38; // [rsp+Ch] [rbp-9Ch]
  unsigned int v39; // [rsp+Ch] [rbp-9Ch]
  __int64 v40; // [rsp+10h] [rbp-98h]
  __int64 v41; // [rsp+18h] [rbp-90h]
  char v42; // [rsp+2Fh] [rbp-79h] BYREF
  __m128i v43; // [rsp+30h] [rbp-78h]
  __int64 v44; // [rsp+40h] [rbp-68h]
  __m128i v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+60h] [rbp-48h]

  v14 = a6;
  v15 = a12;
  v16 = a7;
  v17 = a8;
  if ( a12 )
  {
    v18 = 16;
    v19 = 32 * *(_DWORD *)(a12 + 8);
  }
  else
  {
    v19 = 0;
    v18 = 16 * ((_DWORD)a6 != 0);
  }
  LOBYTE(a6) = a9 != 0;
  v20 = a9 != 0;
  v21 = v19 + 8 * v20 + 72;
  v22 = a1[294];
  v23 = (unsigned int)(v18 + v21);
  a1[304] += v23;
  v24 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v23 + v24 && v22 )
  {
    a1[294] = v23 + v24;
  }
  else
  {
    v39 = a5;
    v35 = sub_962430((__int64)(a1 + 294), v23, v23, 3, a5, a6);
    v17 = a8;
    v16 = a7;
    v24 = v35;
    a5 = v39;
    LODWORD(a6) = a9 != 0;
  }
  v25 = a1[2384];
  v44 = a11;
  v46 = a11;
  v26 = *(_WORD *)v24;
  v43 = _mm_loadu_si128((const __m128i *)&a10);
  v45 = v43;
  *(_WORD *)v24 = v26 & 0xFE00 | 0x6D;
  if ( unk_2CAD564 )
  {
    v41 = v17;
    v40 = v16;
    v38 = a5;
    v37 = a6;
    sub_EC5E10(109);
    v17 = v41;
    v16 = v40;
    a5 = v38;
    LODWORD(a6) = v37;
  }
  v27 = *(_WORD *)(v24 + 1);
  v28 = v46;
  *(_QWORD *)(v24 + 8) = v25;
  v29 = _mm_load_si128(&v45);
  *(_QWORD *)(v24 + 16) = a2;
  *(_QWORD *)(v24 + 64) = v28;
  v30 = v27 & 0xF801 | 2;
  *(_QWORD *)(v24 + 24) = a3;
  *(_WORD *)(v24 + 1) = v30;
  v31 = 8 * (a4 & 1u);
  *(_QWORD *)(v24 + 32) = v16;
  *(_QWORD *)(v24 + 40) = v17;
  *(__m128i *)(v24 + 48) = v29;
  *(_BYTE *)(v24 + 2) = (8 * (a4 & 1)) | HIBYTE(v30) & 0xF7;
  if ( v15 )
  {
    *(_DWORD *)(v24 + 4) = a5;
    v42 = 0;
    v23 = v14;
    *(_BYTE *)(v24 + 2) = (8 * (a4 & 1)) & 0xCF | HIBYTE(v30) & 0xC7 | 0x10 | (32 * a6);
    sub_EFA9B0(v24 + 72, v14, v15, v24 + ((*(_QWORD *)v24 >> 16) & 0x10LL) + 72, &v42);
  }
  else if ( v14 )
  {
    *(_DWORD *)(v24 + 4) = a5;
    v23 = v14;
    *(_BYTE *)(v24 + 2) = (8 * (a4 & 1)) & 0xCF | HIBYTE(v30) & 0xC7 | 0x10 | (32 * a6);
    sub_EFA990(v24 + 72, v14);
  }
  else
  {
    v32 = (unsigned int)(32 * a6);
    *(_DWORD *)(v24 + 4) = a5;
    *(_BYTE *)(v24 + 2) = v32 | (8 * (a4 & 1)) & 0xCF | HIBYTE(v30) & 0xC7;
  }
  if ( (*(_QWORD *)v24 & 0x200000LL) != 0 )
  {
    v31 = 16LL * ((*(_QWORD *)v24 & 0x100000LL) != 0) + 72;
    if ( (*(_QWORD *)v24 & 0x100000LL) != 0 && *(_DWORD *)(v24 + 72) )
      v31 += 32LL * *(unsigned int *)(v24 + 84);
    *(_QWORD *)(v24 + v31) = a9;
  }
  v33 = sub_B41A20(v24, v23, v31, v20, a5, v32);
  *(_BYTE *)(v24 + 1) = (v33 << 6) | *(_BYTE *)(v24 + 1) & 0x3F;
  *(_BYTE *)(v24 + 2) = *(_BYTE *)(v24 + 2) & 0xF8 | (v33 >> 2) & 7;
  return v24;
}

