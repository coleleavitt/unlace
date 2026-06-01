unsigned __int64 __fastcall sub_80C840(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int16 a6, __int64 a7)
{
  __int64 v8; // r11
  __int64 v12; // rdx
  int v13; // r14d
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // ecx
  unsigned __int8 v20; // al
  unsigned __int16 v21; // ax
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  size_t v24; // rdx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int8 v29; // [rsp+Fh] [rbp-49h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+18h] [rbp-40h]
  __int64 v33; // [rsp+18h] [rbp-40h]

  v8 = a4;
  if ( a5 )
  {
    v12 = *(unsigned int *)(a5 + 8);
    v13 = *(_DWORD *)(a5 + 8);
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  LOBYTE(a4) = HIDWORD(a7) != 0;
  v14 = 8 * (v12 + (HIDWORD(a7) != 0)) + 24;
  v15 = a1[274];
  a1[284] += v14;
  v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v17 = v14 + v16;
  if ( a1[275] >= v14 + v16 && v15 )
  {
    a1[274] = v17;
  }
  else
  {
    v33 = v8;
    v31 = a2;
    v28 = sub_804090((__int64)(a1 + 274), v14, 3);
    v8 = v33;
    a2 = v31;
    LODWORD(a4) = HIDWORD(a7) != 0;
    v16 = v28;
  }
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x50;
  if ( byte_4AD234C )
  {
    v32 = v8;
    v30 = a2;
    v29 = a4;
    sub_AC4570(80);
    v8 = v32;
    a2 = v30;
    LODWORD(a4) = v29;
  }
  v18 = *(_DWORD *)v16;
  *(_QWORD *)(v16 + 8) = a2;
  v19 = (_DWORD)a4 << 27;
  *(_QWORD *)(v16 + 16) = v8;
  *(_DWORD *)(v16 + 4) = v13;
  *(_DWORD *)v16 = v18 & 0xF00001FF | v19 | (a6 << 9) & 0x600 | (a3 << 19) & 0x3F80000;
  v20 = sub_76B2E0(v16, v14, v17, v19);
  *(_BYTE *)(v16 + 1) = (v20 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v20 >> 2) & 7;
  if ( (*(_BYTE *)(v16 + 3) & 8) != 0 )
  {
    v21 = *(_WORD *)v16 & 0x1FF;
    if ( v21 <= 0x56u )
    {
      v26 = v21 == 80;
      v27 = *(unsigned int *)(v16 + 4);
      if ( v26 )
        v22 = (_QWORD *)(v16 + 8 * v27 + 24);
      else
        v22 = (_QWORD *)(v16 + 8 * v27 + 48);
    }
    else
    {
      v22 = (_QWORD *)(v16 + 8LL * *(unsigned int *)(v16 + 4) + 40);
    }
    *v22 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a7), _mm_cvtsi32_si128(HIDWORD(a7))).m128i_u64[0];
  }
  if ( v13 )
  {
    v23 = *(_QWORD **)a5;
    v24 = 8LL * *(unsigned int *)(a5 + 8);
    if ( v24 <= 8 )
    {
      if ( v24 == 8 )
        *(_QWORD *)(v16 + 24) = *v23;
    }
    else
    {
      memmove((void *)(v16 + 24), v23, v24);
    }
  }
  return v16;
}

