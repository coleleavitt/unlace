unsigned __int64 __fastcall sub_805C00(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  _BOOL8 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int16 v23; // dx
  char v24; // al
  __int16 v25; // bp
  __int16 v26; // ax
  __int16 v27; // dx
  __int16 v28; // ax
  __int64 v29; // rax
  unsigned __int8 v30; // al
  __int16 v32; // ax
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+8h] [rbp-50h]
  _BYTE v36[57]; // [rsp+1Fh] [rbp-39h] BYREF
  __int64 v37; // [rsp+60h] [rbp+8h]
  __int64 v38; // [rsp+78h] [rbp+20h]
  __int64 v39; // [rsp+78h] [rbp+20h]

  v15 = a10;
  v34 = a3;
  v16 = a7;
  if ( a5 == a10 )
  {
    v17 = 0;
    v15 = 0;
    if ( !a11 )
    {
      v19 = 32;
      v18 = a4 != 0;
      goto LABEL_5;
    }
  }
  else
  {
    v17 = 8LL * (a10 != 0);
    if ( !a11 )
    {
      v18 = a4 != 0;
      goto LABEL_4;
    }
  }
  v18 = 1;
  v17 += 32LL * *(unsigned int *)(a11 + 8);
LABEL_4:
  v19 = v17 + 32;
LABEL_5:
  v20 = v19 + 16 * (v18 - ((a2 == 0) - 1LL));
  v21 = a1[274];
  a1[284] += v20;
  v22 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v20 + v22 && v21 )
  {
    a1[274] = v20 + v22;
  }
  else
  {
    v39 = v15;
    v35 = a5;
    v33 = sub_804090((__int64)(a1 + 274), v20, 3);
    v15 = v39;
    v16 = a7;
    a5 = v35;
    v22 = v33;
  }
  *(_WORD *)v22 = *(_WORD *)v22 & 0xFE00 | 0x48;
  if ( byte_4AD234C )
  {
    v38 = v15;
    v37 = v16;
    v35 = a5;
    sub_AC4570(72);
    v15 = v38;
    v16 = v37;
    a5 = v35;
  }
  v23 = *(_WORD *)(v22 + 1);
  *(_QWORD *)(v22 + 16) = a5;
  *(_WORD *)(v22 + 1) = v23 & 0xF801 | (2 * (a9 & 3));
  *(_QWORD *)(v22 + 8) = a8;
  *(_QWORD *)(v22 + 24) = *(_QWORD *)(v16 + 16);
  *(_DWORD *)(v22 + 4) = *(_DWORD *)(v16 + 8);
  if ( a2 )
  {
    *(_BYTE *)(v22 + 2) |= 8u;
    *(__m128 *)(v22 + 32) = _mm_loadh_ps((const double *)&v34);
  }
  else
  {
    *(_BYTE *)(v22 + 2) &= ~8u;
  }
  if ( v15 )
  {
    v24 = *(_BYTE *)(v22 + 2) | 0x20;
    *(_BYTE *)(v22 + 2) = v24;
    *(_QWORD *)(v22 + 16LL * ((v24 & 8) != 0) + 32) = v15;
  }
  else
  {
    *(_BYTE *)(v22 + 2) &= ~0x20u;
  }
  v25 = a6 << 7;
  v26 = (a12 & 3) << 9;
  if ( a11 )
  {
    v27 = *(_WORD *)(v22 + 2);
    v36[0] = 0;
    v28 = v27 & 0xF86F | v25 & 0x780 | 0x10 | v26 & 0x790;
    *(_WORD *)(v22 + 2) = v28;
    v29 = 16LL * ((v28 & 8) != 0) + 8LL * ((v28 & 0x20) != 0);
    sub_B00050(v22 + v29 + 32, a4, a11, v22 + v29 + 48, v36);
  }
  else if ( a4 )
  {
    v32 = *(_WORD *)(v22 + 2) & 0xF86F | v25 & 0x780 | 0x10 | v26 & 0x790;
    *(_WORD *)(v22 + 2) = v32;
    sub_B00030(v22 + 16LL * ((v32 & 8) != 0) + 8LL * ((v32 & 0x20) != 0) + 32, a4);
  }
  else
  {
    *(_WORD *)(v22 + 2) = *(_WORD *)(v22 + 2) & 0xF86F | (v25 | v26) & 0x790;
  }
  *(_WORD *)(v22 + 2) &= 0xF7BFu;
  v30 = sub_76BFA0(v22, (__int64)a1);
  *(_BYTE *)(v22 + 1) = (v30 << 6) | *(_BYTE *)(v22 + 1) & 0x3F;
  *(_BYTE *)(v22 + 2) = *(_BYTE *)(v22 + 2) & 0xF8 | (v30 >> 2) & 7;
  return v22;
}

