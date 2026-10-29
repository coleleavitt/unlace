unsigned __int64 __fastcall sub_8C6C90(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        unsigned __int8 a8,
        _QWORD *src,
        __int64 a10)
{
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  signed __int64 v16; // r13
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // xmm0_8
  __int16 v20; // ax
  int v21; // esi
  __int64 v22; // rbp
  unsigned __int8 v23; // al
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+0h] [rbp-68h]
  unsigned __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  void *v30; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-40h]
  char v32; // [rsp+2Ch] [rbp-3Ch]

  v10 = _mm_cvtsi32_si128(a2);
  v11 = _mm_cvtsi32_si128(a3);
  if ( (a8 & (a10 != 0)) != 0 && a6 )
    v14 = *(_QWORD *)(src[a7] + 8LL);
  else
    v14 = *(_QWORD *)(a4 + 8);
  v15 = a1[274];
  v16 = 8 * a10;
  v17 = 8 * a10 + 48;
  a1[284] += v17;
  v18 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v17 + v18 && v15 )
  {
    a1[274] = v17 + v18;
  }
  else
  {
    v29 = a5;
    v26 = v14;
    LODWORD(v28) = _mm_cvtsi128_si32(v11);
    LODWORD(v27) = _mm_cvtsi128_si32(v10);
    v25 = sub_8C1090((__int64)(a1 + 274), v17, 3);
    a5 = v29;
    v11 = _mm_cvtsi32_si128(v28);
    v10 = _mm_cvtsi32_si128(v27);
    v14 = v26;
    v18 = v25;
  }
  v19 = _mm_unpacklo_epi32(v10, v11).m128i_u64[0];
  *(_WORD *)v18 = *(_WORD *)v18 & 0xFE00 | 0x16;
  if ( byte_4AD234C )
  {
    v28 = a5;
    v27 = v14;
    v26 = v19;
    sub_AC4570(22);
    a5 = v28;
    v14 = v27;
  }
  v20 = *(_WORD *)(v18 + 1);
  *(_QWORD *)(v18 + 8) = v14;
  *(_QWORD *)(v18 + 24) = a4;
  *(_QWORD *)(v18 + 32) = a5;
  *(_QWORD *)(v18 + 16) = v19;
  *(_WORD *)(v18 + 1) = v20 & 0xF801 | 2;
  v21 = a10 & 0x7FFFFFFF | *(_DWORD *)(v18 + 40) & 0x80000000;
  *(_DWORD *)(v18 + 40) = v21;
  *(_BYTE *)(v18 + 43) = (a6 << 7) | HIBYTE(v21) & 0x7F;
  v22 = v18 + 48;
  if ( v16 <= 8 )
  {
    if ( v16 == 8 )
      *(_QWORD *)(v18 + 48) = *src;
  }
  else
  {
    memmove((void *)(v18 + 48), src, v16);
  }
  v23 = sub_76BB10(v18);
  *(_BYTE *)(v18 + 1) = (v23 << 6) | *(_BYTE *)(v18 + 1) & 0x3F;
  *(_BYTE *)(v18 + 2) = (v23 >> 2) & 7 | *(_BYTE *)(v18 + 2) & 0xF8;
  if ( (v23 & 2) == 0 )
  {
    sub_805650((__int64)&v30, *(_QWORD *)(v18 + 32));
    if ( v32 )
    {
      if ( v31 <= 0x40 )
      {
        v22 = v18 + 8LL * (unsigned int)v30 + 48;
        goto LABEL_19;
      }
    }
    else if ( v31 <= 0x40 )
    {
      if ( v31 )
        v22 = v18
            + 8LL * (unsigned int)((__int64)((_QWORD)v30 << (64 - (unsigned __int8)v31)) >> (64 - (unsigned __int8)v31))
            + 48;
      goto LABEL_19;
    }
    v22 = v18 + 8LL * *(unsigned int *)v30 + 48;
    operator delete[](v30);
LABEL_19:
    *(_BYTE *)(v18 + 1) = *(_BYTE *)(*(_QWORD *)v22 + 1LL) & 6 | *(_BYTE *)(v18 + 1) & 0xF9;
  }
  return v18;
}

