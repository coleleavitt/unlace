unsigned __int64 __fastcall sub_81A130(
        _QWORD *a1,
        int a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *src,
        unsigned __int64 a8,
        unsigned int a9,
        unsigned __int8 a10,
        int a11)
{
  unsigned __int64 v12; // r10
  __m128i v14; // xmm0
  unsigned __int64 v16; // rcx
  _QWORD *v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // xmm0_8
  unsigned __int8 v23; // dl
  __int64 v24; // rax
  unsigned __int8 v25; // r13
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // r13
  __int16 v28; // r13
  __int16 v29; // dx
  int v30; // eax
  __int16 v31; // r13
  _QWORD *v32; // rdi
  unsigned __int8 v33; // al
  __int64 v35; // rax
  unsigned __int8 v36; // [rsp+0h] [rbp-6Ch]
  int v37; // [rsp+0h] [rbp-6Ch]
  unsigned __int64 v38; // [rsp+4h] [rbp-68h]
  __int64 v39; // [rsp+Ch] [rbp-60h]
  void *v40; // [rsp+14h] [rbp-58h]
  unsigned __int64 v41; // [rsp+1Ch] [rbp-50h]
  _QWORD *v42; // [rsp+24h] [rbp-48h]
  unsigned __int64 v43; // [rsp+2Ch] [rbp-40h]

  v12 = a3;
  v14 = _mm_cvtsi32_si128(a6);
  v16 = a8;
  v17 = src;
  v18 = 8 * ((unsigned int)a8 + (unsigned __int64)(unsigned int)(a8 + 1)) + 32;
  v19 = a1[274];
  a1[284] += v18;
  v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v18 + v20 && v19 )
  {
    a1[274] = v18 + v20;
  }
  else
  {
    v41 = a8;
    v40 = src;
    v38 = a3;
    v37 = a2;
    LODWORD(v39) = _mm_cvtsi128_si32(v14);
    v35 = sub_804090((__int64)(a1 + 274), v18, 3);
    v16 = a8;
    v17 = src;
    v14 = _mm_cvtsi32_si128(v39);
    v12 = v38;
    v20 = v35;
    a2 = v37;
  }
  v21 = v17[a11];
  v22 = _mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(a9)).m128i_u64[0];
  v23 = *(_BYTE *)(v21 + 1);
  v24 = *(_QWORD *)(v21 + 8);
  *(_WORD *)v20 = *(_WORD *)v20 & 0xFE00 | 0x3A;
  v25 = v23;
  v26 = (v23 >> 1) & 3;
  v27 = (v25 >> 3) & 7;
  if ( byte_4AD234C )
  {
    v43 = v16;
    v42 = v17;
    v41 = v12;
    LODWORD(v40) = a2;
    v39 = v24;
    v36 = v26;
    v38 = v22;
    sub_AC4570(58);
    v16 = v43;
    v17 = v42;
    v12 = v41;
    a2 = (int)v40;
    v24 = v39;
    v26 = v36;
  }
  *(_QWORD *)(v20 + 8) = v24;
  *(_DWORD *)(v20 + 4) = a2;
  v28 = (2 * v26) | (8 * v27);
  v29 = *(_WORD *)(v20 + 1);
  *(_QWORD *)(v20 + 32) = v12;
  v30 = *(_DWORD *)(v20 + 16);
  *(_QWORD *)(v20 + 20) = v22;
  *(_WORD *)(v20 + 1) = v29 & 0xF801 | v28;
  v31 = v16 & 0x7FFF;
  *(_DWORD *)(v20 + 16) = v30 & 0x80000000 | v16 & 0x7FFF | 0x40000000 | (a11 << 15) & 0x3FFF8000;
  if ( (__int64)(8 * v16) > 0 )
    memmove((void *)(v20 + 40), v17, 8 * v16);
  v32 = (_QWORD *)(v20 + 8LL * (unsigned __int16)(v31 + 1) + 32);
  if ( 8 * a5 <= 8 )
  {
    if ( 8 * a5 == 8 )
      *v32 = *a4;
  }
  else
  {
    memmove(v32, a4, 8 * a5);
  }
  v33 = sub_76C780(v20, a10);
  *(_BYTE *)(v20 + 1) = (v33 << 6) | *(_BYTE *)(v20 + 1) & 0x3F;
  *(_BYTE *)(v20 + 2) = *(_BYTE *)(v20 + 2) & 0xF8 | (v33 >> 2) & 7;
  return v20;
}

