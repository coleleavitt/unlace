unsigned __int64 __fastcall sub_81A5B0(
        _QWORD *a1,
        int a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *src,
        __int64 a8,
        unsigned int a9,
        unsigned __int8 a10,
        int a11)
{
  __int64 v11; // r10
  __m128i v13; // xmm0
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // xmm0_8
  unsigned __int8 v22; // si
  void *v23; // rdx
  unsigned __int8 v24; // al
  unsigned __int8 v25; // si
  unsigned __int8 v26; // al
  __int16 v27; // ax
  __int16 v28; // si
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  unsigned __int8 v31; // si
  _QWORD *v32; // rdi
  unsigned __int8 v33; // al
  __int64 v35; // rax
  unsigned __int64 v37; // [rsp+8h] [rbp-60h]
  void *v38; // [rsp+10h] [rbp-58h]
  int v39; // [rsp+18h] [rbp-50h]
  int v40; // [rsp+1Ch] [rbp-4Ch]
  __int64 v41; // [rsp+20h] [rbp-48h]
  _QWORD *v42; // [rsp+28h] [rbp-40h]

  v11 = a3;
  v13 = _mm_cvtsi32_si128(a6);
  v16 = src;
  v17 = 8 * ((unsigned int)a8 + (unsigned __int64)(unsigned int)(a8 + 1)) + 32;
  v18 = a1[274];
  a1[284] += v17;
  v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v17 + v19 && v18 )
  {
    a1[274] = v17 + v19;
  }
  else
  {
    v38 = src;
    v39 = a2;
    LODWORD(v37) = _mm_cvtsi128_si32(v13);
    v35 = sub_804090((__int64)(a1 + 274), v17, 3);
    v16 = src;
    v13 = _mm_cvtsi32_si128(v37);
    v11 = a3;
    a2 = v39;
    v19 = v35;
  }
  v20 = v16[a11];
  v21 = _mm_unpacklo_epi32(v13, _mm_cvtsi32_si128(a9)).m128i_u64[0];
  v22 = *(_BYTE *)(v20 + 1);
  v23 = *(void **)(v20 + 8);
  *(_WORD *)v19 = *(_WORD *)v19 & 0xFE00 | 0x3A;
  v24 = v22;
  v25 = (v22 >> 1) & 3;
  v26 = (v24 >> 3) & 7;
  if ( byte_4AD234C )
  {
    v42 = v16;
    v41 = v11;
    v40 = a2;
    v38 = v23;
    LOBYTE(v39) = v26;
    v37 = v21;
    sub_AC4570(58);
    v16 = v42;
    v11 = v41;
    a2 = v40;
    v23 = v38;
    v26 = v39;
  }
  *(_QWORD *)(v19 + 8) = v23;
  v27 = (2 * v25) | (8 * v26);
  v28 = *(_WORD *)(v19 + 1);
  *(_DWORD *)(v19 + 4) = a2;
  v29 = a8 & 0x7FFF;
  *(_QWORD *)(v19 + 20) = v21;
  *(_WORD *)(v19 + 1) = v28 & 0xF801 | v27;
  *(_DWORD *)(v19 + 16) = *(_DWORD *)(v19 + 16) & 0x80000000 | v29 | (a11 << 15) & 0x3FFF8000;
  *(_QWORD *)(v19 + 8 * v29 + 32) = v11;
  v30 = *(_BYTE *)(v19 + 19) & 0x40;
  v31 = v30 >> 6;
  if ( 8 * a8 > 0 )
  {
    memmove((void *)(v19 + 8LL * v31 + 32), v16, 8 * a8);
    v30 = *(_BYTE *)(v19 + 19) & 0x40;
    v31 = v30 >> 6;
  }
  v32 = (_QWORD *)(v19 + 8LL * ((v30 & 0x40) == 0) + 32 + 8LL * (v31 + (*(_WORD *)(v19 + 16) & 0x7FFFu)));
  if ( 8 * a5 <= 8 )
  {
    if ( 8 * a5 == 8 )
      *v32 = *a4;
  }
  else
  {
    memmove(v32, a4, 8 * a5);
  }
  v33 = sub_76C780(v19, a10);
  *(_BYTE *)(v19 + 1) = (v33 << 6) | *(_BYTE *)(v19 + 1) & 0x3F;
  *(_BYTE *)(v19 + 2) = *(_BYTE *)(v19 + 2) & 0xF8 | (v33 >> 2) & 7;
  return v19;
}

