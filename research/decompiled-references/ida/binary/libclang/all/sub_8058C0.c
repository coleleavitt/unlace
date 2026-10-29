unsigned __int64 __fastcall sub_8058C0(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int8 a6,
        int a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  __int64 v16; // r13
  __m128i v17; // xmm0
  __int64 v18; // rax
  _BOOL8 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int16 v24; // dx
  char v25; // al
  __int16 v26; // bp
  __int16 v27; // ax
  __int16 v28; // dx
  __int16 v29; // ax
  __int64 v30; // rax
  unsigned __int8 v31; // al
  __int16 v33; // ax
  __int64 v34; // rax
  __m128i v36; // [rsp+10h] [rbp-78h] BYREF
  char v37; // [rsp+2Fh] [rbp-59h] BYREF
  __int64 v38; // [rsp+30h] [rbp-58h]
  int v39; // [rsp+38h] [rbp-50h]
  _QWORD v40[9]; // [rsp+40h] [rbp-48h] BYREF

  v16 = a10;
  v38 = *(_QWORD *)(a5 + 40);
  v39 = a7;
  sub_792560(v40, v38);
  v17 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a3);
  if ( a5 == a10 )
  {
    v18 = 0;
    v16 = 0;
    if ( !a11 )
    {
      v20 = 32;
      v19 = a4 != 0;
      goto LABEL_5;
    }
  }
  else
  {
    v18 = 8LL * (a10 != 0);
    if ( !a11 )
    {
      v19 = a4 != 0;
      goto LABEL_4;
    }
  }
  v19 = 1;
  v18 += 32LL * *(unsigned int *)(a11 + 8);
LABEL_4:
  v20 = v18 + 32;
LABEL_5:
  v21 = v20 + 16 * (v19 - ((a2 == 0) - 1LL));
  v22 = a1[274];
  a1[284] += v21;
  v23 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v21 + v23 && v22 )
  {
    a1[274] = v21 + v23;
  }
  else
  {
    v36 = v17;
    v34 = sub_804090((__int64)(a1 + 274), v21, 3);
    v17 = _mm_load_si128(&v36);
    v23 = v34;
  }
  *(_WORD *)v23 = *(_WORD *)v23 & 0xFE00 | 0x48;
  if ( byte_4AD234C )
  {
    v36 = v17;
    sub_AC4570(72);
    v17 = _mm_load_si128(&v36);
  }
  v24 = *(_WORD *)(v23 + 1);
  *(_QWORD *)(v23 + 16) = a5;
  *(_WORD *)(v23 + 1) = v24 & 0xF801 | (2 * (a9 & 3));
  *(_QWORD *)(v23 + 8) = a8;
  *(_QWORD *)(v23 + 24) = v40[0];
  *(_DWORD *)(v23 + 4) = v39;
  if ( a2 )
  {
    *(_BYTE *)(v23 + 2) |= 8u;
    *(__m128i *)(v23 + 32) = v17;
  }
  else
  {
    *(_BYTE *)(v23 + 2) &= ~8u;
  }
  if ( v16 )
  {
    v25 = *(_BYTE *)(v23 + 2) | 0x20;
    *(_BYTE *)(v23 + 2) = v25;
    *(_QWORD *)(v23 + 16LL * ((v25 & 8) != 0) + 32) = v16;
  }
  else
  {
    *(_BYTE *)(v23 + 2) &= ~0x20u;
  }
  v26 = a6 << 7;
  v27 = (a12 & 3) << 9;
  if ( a11 )
  {
    v28 = *(_WORD *)(v23 + 2);
    v37 = 0;
    v29 = v28 & 0xF86F | v26 & 0x780 | 0x10 | v27 & 0x790;
    *(_WORD *)(v23 + 2) = v29;
    v30 = 16LL * ((v29 & 8) != 0) + 8LL * ((v29 & 0x20) != 0);
    sub_B00050(v23 + v30 + 32, a4, a11, v23 + v30 + 48, &v37);
  }
  else if ( a4 )
  {
    v33 = *(_WORD *)(v23 + 2) & 0xF86F | v26 & 0x780 | 0x10 | v27 & 0x790;
    *(_WORD *)(v23 + 2) = v33;
    sub_B00030(v23 + 16LL * ((v33 & 8) != 0) + 8LL * ((v33 & 0x20) != 0) + 32, a4);
  }
  else
  {
    *(_WORD *)(v23 + 2) = *(_WORD *)(v23 + 2) & 0xF86F | (v26 | v27) & 0x790;
  }
  *(_WORD *)(v23 + 2) &= 0xF7BFu;
  v31 = sub_76BFA0(v23, (__int64)a1);
  *(_BYTE *)(v23 + 1) = (v31 << 6) | *(_BYTE *)(v23 + 1) & 0x3F;
  *(_BYTE *)(v23 + 2) = *(_BYTE *)(v23 + 2) & 0xF8 | (v31 >> 2) & 7;
  return v23;
}

