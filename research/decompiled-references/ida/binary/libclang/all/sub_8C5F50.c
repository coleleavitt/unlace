unsigned __int64 __fastcall sub_8C5F50(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        const __m128i a7,
        __int64 a8,
        __int128 a9,
        __int64 a10,
        __int64 a11)
{
  int v13; // r14d
  unsigned int v14; // r13d
  unsigned __int8 v15; // bp
  __int64 v16; // r15
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  int v19; // edx
  int v20; // eax
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r12
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __int16 v29; // ax
  __int64 v30; // rax
  __m128i v31; // xmm0
  char v32; // al
  __int64 v33; // rcx
  char v34; // al
  __int64 v35; // rax
  unsigned __int8 v36; // al
  char v38; // al
  int v39; // eax
  __int64 v40; // rax
  __m128i v41; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int8 v42; // [rsp+17h] [rbp-81h]
  __int64 v43; // [rsp+18h] [rbp-80h]
  __m128i v44; // [rsp+20h] [rbp-78h] BYREF
  char v45; // [rsp+3Fh] [rbp-59h] BYREF
  __m128i v46; // [rsp+40h] [rbp-58h] BYREF
  __int64 v47; // [rsp+50h] [rbp-48h]

  v13 = a5;
  v14 = a6;
  v15 = a4;
  v16 = a11;
  v17 = _mm_loadl_epi64(&a7);
  v18 = _mm_loadl_epi64((const __m128i *)&a7.m128i_u64[1]);
  if ( a11 )
  {
    v19 = 16;
    v20 = 32 * *(_DWORD *)(a11 + 8);
  }
  else
  {
    v20 = 0;
    v19 = 16 * ((_DWORD)a6 != 0);
  }
  LOBYTE(a4) = a8 != 0;
  v21 = v20 + 8 * (a8 != 0) + 72;
  v22 = a1[274];
  v23 = (unsigned int)(v19 + v21);
  a1[284] += v23;
  v24 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v25 = v23 + v24;
  if ( a1[275] >= v23 + v24 && v22 )
  {
    a1[274] = v25;
  }
  else
  {
    v43 = a3;
    v41.m128i_i64[0] = a2;
    v42 = a4;
    v44.m128i_i64[1] = v18.m128i_i64[0];
    v44.m128i_i64[0] = v17.m128i_i64[0];
    v40 = sub_8C1090((__int64)(a1 + 274), v23, 3);
    v18 = _mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
    v17 = _mm_loadl_epi64(&v44);
    a3 = v43;
    a2 = v41.m128i_i64[0];
    v24 = v40;
    a4 = v42;
  }
  v26 = a1[2364];
  v27 = _mm_unpacklo_epi64(v17, v18);
  v28 = _mm_loadu_si128((const __m128i *)&a9);
  v47 = a10;
  v29 = *(_WORD *)v24;
  v46 = v28;
  *(_WORD *)v24 = v29 & 0xFE00 | 0x6E;
  if ( byte_4AD234C )
  {
    v44.m128i_i64[0] = a3;
    v43 = a2;
    v42 = a4;
    v41 = v27;
    sub_AC4570(110);
    a3 = v44.m128i_i64[0];
    a2 = v43;
    v27 = _mm_load_si128(&v41);
    a4 = v42;
  }
  v30 = v47;
  *(__m128i *)(v24 + 32) = v27;
  v31 = _mm_load_si128(&v46);
  *(_QWORD *)(v24 + 8) = v26;
  *(_QWORD *)(v24 + 64) = v30;
  LODWORD(v30) = *(_DWORD *)v24;
  *(_QWORD *)(v24 + 16) = a2;
  *(_QWORD *)(v24 + 24) = a3;
  *(__m128i *)(v24 + 48) = v31;
  *(_DWORD *)v24 = v30 & 0xFFF001FF | (v15 << 19) & 0xFFC00 | 0x200;
  if ( v16 )
  {
    v32 = *(_BYTE *)(v24 + 2);
    *(_DWORD *)(v24 + 4) = v13;
    v23 = v14;
    v45 = 0;
    *(_BYTE *)(v24 + 2) = (32 * a4) | v32 & 0xCF | 0x10;
    sub_B00050(v24 + 72, v14, v16, v24 + 88, &v45);
  }
  else if ( v14 )
  {
    v38 = *(_BYTE *)(v24 + 2);
    *(_DWORD *)(v24 + 4) = v13;
    v23 = v14;
    *(_BYTE *)(v24 + 2) = (32 * a4) | v38 & 0xCF | 0x10;
    sub_B00030(v24 + 72, v14);
  }
  else
  {
    v39 = *(unsigned __int8 *)(v24 + 2);
    *(_DWORD *)(v24 + 4) = v13;
    v33 = v39 & 0xFFFFFFCF | (32 * a4);
    *(_BYTE *)(v24 + 2) = v33;
  }
  v34 = *(_BYTE *)(v24 + 2);
  if ( (v34 & 0x20) != 0 )
  {
    v25 = v34 & 0x10;
    v35 = (*(_BYTE *)(v24 + 2) & 0x10) + 72LL;
    if ( (_BYTE)v25 )
    {
      v25 = *(unsigned int *)(v24 + 72);
      if ( (_DWORD)v25 )
        v35 = 32LL * *(unsigned int *)(v24 + 84) + 88;
    }
    *(_QWORD *)(v24 + v35) = a8;
  }
  v36 = sub_76D140((const __m128i *)v24, v23, v25, v33, a5, a6);
  *(_BYTE *)(v24 + 1) = (v36 << 6) | *(_BYTE *)(v24 + 1) & 0x3F;
  *(_BYTE *)(v24 + 2) = *(_BYTE *)(v24 + 2) & 0xF8 | (v36 >> 2) & 7;
  return v24;
}

