unsigned __int64 __fastcall sub_8C21F0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        const __m128i *a6,
        char a7,
        __int64 a8,
        void *src,
        __int64 a10,
        unsigned __int8 a11,
        unsigned __int8 a12)
{
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v17; // r10
  int v18; // eax
  int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // esi
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int16 v27; // ax
  __int64 v28; // rax
  __int16 v29; // dx
  char v30; // cl
  __int64 v31; // rax
  __int16 v32; // dx
  int v33; // ecx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rcx
  unsigned __int8 v36; // al
  void *v38; // rdi
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  __m128i v43; // [rsp+8h] [rbp-78h] BYREF
  __int64 v44; // [rsp+18h] [rbp-68h]
  __int64 v45; // [rsp+20h] [rbp-60h]
  __m128i v46; // [rsp+28h] [rbp-58h] BYREF
  char v47[57]; // [rsp+47h] [rbp-39h] BYREF

  v12 = (__m128i)a3;
  v13 = (__m128i)(unsigned __int64)a4;
  v17 = (a10 - (__int64)src) >> 3;
  if ( a8 )
  {
    v18 = 16;
    v19 = 32 * *(_DWORD *)(a8 + 8);
  }
  else
  {
    v19 = 0;
    v18 = 16 * (a5 != 0);
  }
  v20 = 8LL * (unsigned int)v17;
  v21 = v18 + v20 + v19 + 64;
  v22 = a1[274];
  a1[284] += v21;
  v23 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v24 = v21 + v23;
  if ( a1[275] >= v24 && v22 )
  {
    a1[274] = v24;
  }
  else
  {
    v45 = (a10 - (__int64)src) >> 3;
    v43.m128i_i64[0] = (__int64)a6;
    v44 = 8LL * (unsigned int)v17;
    v46.m128i_i64[1] = a4;
    v46.m128i_i64[0] = v12.m128i_i64[0];
    v42 = sub_8C1090((__int64)(a1 + 274), v21, 3);
    v17 = v45;
    a6 = (const __m128i *)v43.m128i_i64[0];
    v13 = _mm_loadl_epi64((const __m128i *)&v46.m128i_u64[1]);
    v12 = _mm_loadl_epi64(&v46);
    v23 = v42;
    v20 = v44;
  }
  v25 = a1[2365];
  v26 = _mm_unpacklo_epi64(v12, v13);
  *(_WORD *)v23 = *(_WORD *)v23 & 0xFE00 | 0x19;
  if ( byte_4AD234C )
  {
    v46.m128i_i64[1] = v17;
    v46.m128i_i64[0] = (__int64)a6;
    v45 = v25;
    v44 = v20;
    v43 = v26;
    sub_AC4570(25);
    LODWORD(v17) = v46.m128i_i32[2];
    a6 = (const __m128i *)v46.m128i_i64[0];
    v25 = v45;
    v26 = _mm_load_si128(&v43);
    v20 = v44;
  }
  v27 = *(_WORD *)(v23 + 1);
  *(_QWORD *)(v23 + 8) = v25;
  *(_DWORD *)(v23 + 4) = v17;
  *(__m128i *)(v23 + 40) = v26;
  *(_WORD *)(v23 + 1) = v27 & 0xF801 | 2;
  v28 = a6[1].m128i_i64[0];
  *(__m128i *)(v23 + 16) = _mm_loadu_si128(a6);
  *(_QWORD *)(v23 + 32) = v28;
  if ( a8 )
  {
    *(_BYTE *)(v23 + 2) |= 8u;
    if ( !(_DWORD)v17 )
      goto LABEL_10;
  }
  else if ( a5 )
  {
    *(_BYTE *)(v23 + 2) |= 8u;
    if ( !(_DWORD)v17 )
    {
LABEL_26:
      if ( (*(_BYTE *)(v23 + 2) & 8) != 0 )
      {
        v40 = 8LL * *(unsigned int *)(v23 + 4);
        v41 = v23 + v40 + 64;
        if ( (*(_WORD *)v23 & 0x1FF) != 0x19 )
          v41 = v23 + v40 + 80;
      }
      else
      {
        v41 = 0;
      }
      sub_B00030(v41, a5);
      goto LABEL_14;
    }
  }
  else
  {
    *(_BYTE *)(v23 + 2) &= ~8u;
    if ( !(_DWORD)v17 )
      goto LABEL_14;
  }
  v38 = (void *)(v23 + 80);
  if ( (*(_WORD *)v23 & 0x1FF) == 0x19 )
    v38 = (void *)(v23 + 64);
  memcpy(v38, src, v20);
  if ( a8 )
  {
    v20 = 8LL * *(unsigned int *)(v23 + 4);
LABEL_10:
    v29 = *(_WORD *)v23;
    v30 = *(_BYTE *)(v23 + 2);
    v47[0] = 0;
    v31 = v20 + 64;
    v32 = v29 & 0x1FF;
    v33 = v30 & 8;
    if ( v33 )
    {
      v34 = v23 + v31;
      if ( v32 == 25 )
      {
LABEL_12:
        v35 = v23 + v31 + 16LL * ((v33 & 8) != 0);
LABEL_13:
        sub_B00050(v34, a5, a8, v35, v47);
        goto LABEL_14;
      }
      v39 = v20 + 80;
      v34 = v23 + v39;
    }
    else
    {
      v34 = 0;
      if ( v32 == 25 )
        goto LABEL_12;
      v39 = v20 + 80;
    }
    v35 = v23 + v39 + 16LL * ((v33 & 8) != 0);
    goto LABEL_13;
  }
  if ( a5 )
    goto LABEL_26;
LABEL_14:
  v36 = sub_76CC10((const __m128i *)v23, a11, a12, 0, v20, (__int64)a6);
  *(_BYTE *)(v23 + 1) = (v36 << 6) | *(_BYTE *)(v23 + 1) & 0x3F;
  *(_BYTE *)(v23 + 2) = (v36 >> 2) & 7 | *(_BYTE *)(v23 + 2) & 0xF8;
  if ( (v36 & 4) != 0 )
    *(_QWORD *)(v23 + 8) = a1[2364];
  *(_QWORD *)(v23 + 56) = a2;
  *(_BYTE *)(v23 + 2) = (16 * (a7 & 1)) | *(_BYTE *)(v23 + 2) & 0xEF;
  return v23;
}

