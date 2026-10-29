__int64 __fastcall sub_1751080(__int64 a1, unsigned __int64 a2, __int64 *a3, unsigned __int64 a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  __m128i si128; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  size_t v12; // r15
  __int64 v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned __int8 v17; // dl
  char *v18; // r13
  char *v19; // r15
  __int64 *v20; // rsi
  unsigned int *v21; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r13
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned __int64 v51; // [rsp+8h] [rbp-2B8h]
  unsigned __int64 v52; // [rsp+8h] [rbp-2B8h]
  unsigned __int64 v53; // [rsp+8h] [rbp-2B8h]
  void *v54; // [rsp+10h] [rbp-2B0h]
  unsigned int v55; // [rsp+18h] [rbp-2A8h]
  __int64 v56; // [rsp+20h] [rbp-2A0h]
  __int64 v57; // [rsp+20h] [rbp-2A0h]
  int v58; // [rsp+34h] [rbp-28Ch] BYREF
  unsigned __int64 v59; // [rsp+38h] [rbp-288h] BYREF
  __int64 v60; // [rsp+40h] [rbp-280h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-278h] BYREF
  char v62; // [rsp+50h] [rbp-270h]
  void *v63; // [rsp+58h] [rbp-268h] BYREF
  __int64 v64; // [rsp+60h] [rbp-260h]
  _BYTE v65[48]; // [rsp+68h] [rbp-258h] BYREF
  void *src; // [rsp+98h] [rbp-228h] BYREF
  size_t n; // [rsp+A0h] [rbp-220h]
  __int64 v68; // [rsp+A8h] [rbp-218h] BYREF
  unsigned __int8 *v69; // [rsp+B8h] [rbp-208h] BYREF
  char v70; // [rsp+110h] [rbp-1B0h]
  unsigned int v71; // [rsp+118h] [rbp-1A8h]
  char v72; // [rsp+11Ch] [rbp-1A4h]
  void *ptr; // [rsp+128h] [rbp-198h] BYREF
  __m128i v74; // [rsp+130h] [rbp-190h] BYREF
  _BYTE v75[136]; // [rsp+140h] [rbp-180h] BYREF
  __int128 v76; // [rsp+1C8h] [rbp-F8h] BYREF
  void *v77; // [rsp+1D8h] [rbp-E8h]
  __int64 v78; // [rsp+1E0h] [rbp-E0h]
  _BYTE v79[96]; // [rsp+1E8h] [rbp-D8h] BYREF
  __int16 v80; // [rsp+248h] [rbp-78h]
  void *v81; // [rsp+250h] [rbp-70h]
  __int64 v82; // [rsp+258h] [rbp-68h]
  _BYTE v83[96]; // [rsp+260h] [rbp-60h] BYREF

  v5 = a4;
  v51 = HIDWORD(a4);
  v64 = 0x300000000LL;
  v77 = v79;
  v80 = 0;
  v81 = v83;
  v55 = a4;
  v76 = 0;
  v78 = 0x400000000LL;
  v82 = 0x400000000LL;
  v63 = v65;
  sub_BBDAC0(a2, (__int64)&v63);
  v74.m128i_i64[0] = 0x400000000LL;
  ptr = &v74.m128i_u64[1];
  v6 = sub_1750770(
         a1,
         a2,
         (__int64)v63,
         (unsigned int)v64,
         (__int64)&ptr,
         (__int64)a3,
         0.0,
         (v51 << 32) | v5,
         (__int64)&v76);
  if ( ptr != &v74.m128i_u64[1] )
    free(ptr);
  if ( (_BYTE)v6 || (_BYTE)v80 )
    goto LABEL_5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v9 = *(_QWORD *)(a2 + 56);
  v10 = *a3;
  ptr = v75;
  v74 = si128;
  v75[0] = 32;
  v11 = *(_QWORD *)(v10 + 8);
  v74.m128i_i64[0] = 1;
  sub_1CB5C00(&src, a1, v9, v11, *(unsigned int *)(v10 + 16));
  v12 = n;
  v13 = v74.m128i_i64[0];
  v14 = src;
  if ( n + v74.m128i_i64[0] > v74.m128i_i64[1] )
  {
    v54 = src;
    sub_2236E10(&ptr, v75, n + v74.m128i_i64[0], 1);
    v13 = v74.m128i_i64[0];
    v14 = v54;
  }
  if ( v12 )
  {
    memcpy((char *)ptr + v13, v14, v12);
    v13 = v74.m128i_i64[0];
  }
  v74.m128i_i64[0] = v12 + v13;
  if ( src != &v68 )
    operator delete(src);
  sub_168B9F0((__int64)&src, (__int64 *)(a1 + 8), v55, 0x13E2u, 0);
  sub_F22AA0(&v59, a2);
  v58 = sub_17A2D70(a1, v59);
  v15 = sub_1587D10((__int64)&src, &v58);
  v16 = v15;
  if ( *(_BYTE *)(v15 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v15 + 32), a2, 0xAu);
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v15 + 132) )
  {
    v30 = sub_168B9E0((_QWORD *)v15);
    v34 = *(_QWORD *)(v16 + 16);
    if ( v34 )
    {
      v57 = v30;
      v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
      v30 = v57;
    }
    v61 = v34;
    v35 = sub_1587BC0(v30, (__int64 *)&v61, v30, v31, v32, v33);
    sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * *(unsigned int *)(v16 + 128) + 8), a2, 0xAu);
LABEL_34:
    if ( *(_BYTE *)(v16 + 120) )
    {
      sub_AEC220((unsigned __int8 **)(v16 + 32), ptr, v74.m128i_i64[0]);
    }
    else
    {
      if ( !*(_BYTE *)(v16 + 132) )
        goto LABEL_20;
      v47 = sub_168B9E0((_QWORD *)v16);
      v48 = *(_QWORD *)(v16 + 16);
      if ( v48 )
        v48 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 32LL))(*(_QWORD *)(v16 + 16));
      v61 = v48;
      v49 = sub_1587BC0(v47, (__int64 *)&v61, v43, v44, v45, v46);
      sub_AEC220((unsigned __int8 **)(*v49 + 32LL * *(unsigned int *)(v16 + 128) + 8), ptr, v74.m128i_i64[0]);
    }
    if ( *(_BYTE *)(v16 + 120) )
    {
      v62 = 1;
      v61 = __PAIR64__(v51, v55);
      sub_AEC610((__int64 *)(v16 + 32), (__int64 *)&v61);
    }
    else if ( *(_BYTE *)(v16 + 132) )
    {
      v40 = sub_168B9E0((_QWORD *)v16);
      v41 = *(_QWORD *)(v16 + 16);
      if ( v41 )
        v41 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v41 + 32LL))(*(_QWORD *)(v16 + 16));
      v60 = v41;
      v42 = *sub_1587BC0(v40, &v60, v36, v37, v38, v39) + 32LL * *(unsigned int *)(v16 + 128);
      v62 = 1;
      v61 = __PAIR64__(v51, v55);
      sub_AEC610((__int64 *)(v42 + 8), (__int64 *)&v61);
    }
  }
LABEL_20:
  sub_15F7200(&src);
  v17 = 1;
  v18 = (char *)v81 + 8 * (unsigned int)v82;
  v19 = (char *)v81;
  if ( v81 != v18 )
  {
    do
    {
      while ( 1 )
      {
        v21 = (unsigned int *)(*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL);
        if ( *(_QWORD *)v19 )
        {
          if ( (*(_QWORD *)v19 & 2) != 0 && v21 )
            break;
        }
        v20 = (__int64 *)(*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL);
        v19 += 8;
        sub_174C9B0(a1, v20, v17, *(double *)si128.m128i_i64);
        v17 = 0;
        if ( v18 == v19 )
          goto LABEL_29;
      }
      v52 = *(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL;
      sub_168B9F0((__int64)&src, (__int64 *)(a1 + 8), *v21, 0x18E4u, 0);
      if ( v70 )
      {
        sub_AEC220(&v69, *(_BYTE **)(v52 + 8), *(_QWORD *)(v52 + 16));
      }
      else if ( v72 )
      {
        v22 = sub_168B9E0(&src);
        v26 = v52;
        v27 = v22;
        v28 = v68;
        if ( v68 )
        {
          v56 = v27;
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 32LL))(v68);
          v27 = v56;
          v26 = v52;
        }
        v53 = v26;
        v61 = v28;
        v29 = sub_1587BC0(v27, (__int64 *)&v61, v27, v23, v24, v25);
        sub_AEC220((unsigned __int8 **)(*v29 + 32LL * v71 + 8), *(_BYTE **)(v53 + 8), *(_QWORD *)(v53 + 16));
      }
      v19 += 8;
      sub_15F7200(&src);
      v17 = 0;
    }
    while ( v18 != v19 );
  }
LABEL_29:
  if ( ptr != v75 )
    free(ptr);
  v6 = 1;
LABEL_5:
  if ( v63 != v65 )
    free(v63);
  if ( v81 != v83 )
    free(v81);
  if ( v77 != v79 )
    free(v77);
  return v6;
}
