unsigned __int64 __fastcall sub_8C69E0(
        _QWORD *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        char *src,
        __int64 a8)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  __m128i v14; // xmm1
  int v15; // edx
  __int64 v16; // rbp
  char v17; // r15
  unsigned __int64 v18; // xmm0_8
  int v19; // eax
  void *v20; // rdi
  __int64 v21; // rsi
  unsigned __int8 v22; // dl
  __int64 v24; // rsi
  unsigned __int64 v25; // [rsp+0h] [rbp-58h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  int v27; // [rsp+10h] [rbp-48h]
  int v28; // [rsp+14h] [rbp-44h]
  __int64 v29; // [rsp+18h] [rbp-40h]

  v9 = a1[274];
  LODWORD(v25) = a2;
  v26 = a3;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v27 = a5;
  v11 = 24 * a8;
  v29 = a6;
  v12 = 24 * a8 + 40;
  a1[284] += v12;
  if ( a1[275] >= v12 + v10 && v9 )
    a1[274] = v12 + v10;
  else
    v10 = sub_8C1090((__int64)(a1 + 274), v12, 3);
  v13 = sub_6CABB0(a1);
  v14 = _mm_cvtsi32_si128(a4);
  v15 = v29;
  v16 = v13;
  v17 = BYTE4(v29);
  v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), v14).m128i_u64[0];
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0xD;
  if ( byte_4AD234C )
  {
    v28 = v15;
    v25 = v18;
    sub_AC4570(13);
    v15 = v28;
  }
  v19 = v27;
  *(_WORD *)(v10 + 1) &= 0xF801u;
  v20 = (void *)(v10 + 40);
  *(_QWORD *)(v10 + 8) = v16;
  *(_DWORD *)(v10 + 24) = v19;
  *(_QWORD *)(v10 + 16) = v18;
  if ( v17 )
  {
    v21 = v26;
    *(_DWORD *)(v10 + 28) = v15;
    *(_QWORD *)(v10 + 32) = v21;
    if ( &src[v11] != src )
      memmove(v20, src, 8 * ((unsigned __int64)(v11 - 24) >> 3) + 24);
    v22 = 0;
  }
  else
  {
    v24 = v26;
    *(_DWORD *)(v10 + 28) = a8;
    *(_QWORD *)(v10 + 32) = v24;
    if ( v11 )
      memmove(v20, src, 8 * ((unsigned __int64)(v11 - 24) >> 3) + 24);
    v22 = 10;
  }
  *(_BYTE *)(v10 + 1) = (v22 << 6) | *(_BYTE *)(v10 + 1) & 0x3F;
  *(_BYTE *)(v10 + 2) = (v22 >> 2) | *(_BYTE *)(v10 + 2) & 0xF8;
  return v10;
}

