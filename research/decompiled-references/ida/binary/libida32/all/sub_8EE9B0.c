unsigned __int64 __fastcall sub_8EE9B0(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v8; // xmm5
  __int64 v9; // rax
  _DWORD *v10; // r13
  unsigned __int64 v11; // r12
  int v12; // r14d
  const void *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _BOOL4 v16; // r8d
  int v17; // r8d
  int v18; // r9d
  __m128i v19; // xmm6
  int v20; // eax
  unsigned __int32 v21; // edx
  __int32 v22; // eax
  __int64 v23; // rax
  __int32 v24; // edx
  int v25; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v27; // rbp
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rax
  __int32 v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __m128i si128; // xmm7
  __m128i v36; // xmm0
  __m128i v37; // xmm6
  __int64 v38; // rax
  __m128i v39; // xmm1
  __m128i v40; // xmm7
  __m128i v41; // xmm0
  __m128i v42; // xmm7
  __m128i v43; // xmm6
  __m128i v44; // xmm7
  __m128i v45; // xmm0
  __m128i v46; // xmm7
  __m128i v47; // xmm6
  __m128i v48; // xmm7
  __int64 v49; // rax
  __m128i v50; // [rsp+0h] [rbp-138h] BYREF
  __int64 v51; // [rsp+10h] [rbp-128h]
  __int32 v52; // [rsp+18h] [rbp-120h]
  __m256i v53; // [rsp+20h] [rbp-118h] BYREF
  __int128 v54; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v55; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v56; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v57; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v58; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v59; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v61; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v62; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v64; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v66; // [rsp+F8h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  *(__m128i *)v53.m256i_i8 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  *(__m128i *)&v53.m256i_u64[2] = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v54 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 48));
  v55 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 64));
  v56 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  v57 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 96));
  v58 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 112));
  v59 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 128));
  v60 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 144));
  v61 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 160));
  v62 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 176));
  v63 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 192));
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 208));
  v9 = *(_QWORD *)(a1 + 224);
  v10 = *(_DWORD **)(a1 + 3704);
  v11 = *(_QWORD *)(a1 + 3712);
  v12 = *(_DWORD *)(a1 + 3720);
  v13 = *(const void **)(a1 + 3664);
  v64 = (__int128)v8;
  v65 = v9;
  if ( v13 && !*(_QWORD *)(a1 + 3688) )
  {
    v30 = sub_8EE330(
            v13,
            *(_QWORD *)(a1 + 3672),
            1,
            *(_DWORD *)(a1 + 3680),
            (const __m128i *)(a1 + 16),
            a6,
            *(__int64 (__fastcall **)(__int64, size_t))(a1 + 872),
            *(_QWORD *)(a1 + 880),
            *(_QWORD *)(a1 + 888));
    *(_QWORD *)(a1 + 3688) = v30;
    if ( !v30 )
      return -64;
    *(_QWORD *)(a1 + 3696) = v30;
  }
  v14 = *(_QWORD *)(a1 + 3696);
  *(_QWORD *)(a1 + 3720) = 0;
  *(_OWORD *)(a1 + 3704) = 0;
  if ( v14 && !*(_QWORD *)(a1 + 3688) )
    HIDWORD(v54) = *(_DWORD *)(v14 + 6068);
  if ( a2 == 2 )
  {
    *(_QWORD *)(a1 + 760) = a3 + 1;
    if ( v10 )
    {
LABEL_8:
      v15 = v11;
      if ( !v14 )
      {
LABEL_13:
        v16 = 0;
        goto LABEL_14;
      }
      goto LABEL_9;
    }
  }
  else
  {
    a3 = *(_QWORD *)(a1 + 760) - 1LL;
    if ( v10 )
      goto LABEL_8;
  }
  if ( !v14 )
  {
    v15 = 0;
    v16 = 0;
    goto LABEL_14;
  }
  v15 = *(_QWORD *)(v14 + 8);
LABEL_9:
  v16 = 1;
  if ( *(_DWORD *)(v14 + 244) )
    goto LABEL_14;
  if ( a3 <= qword_23B31C0[*(unsigned int *)(v14 + 384)] || a3 == -1 )
  {
    v16 = 0;
    if ( v56.m128i_i32[1] == 2 )
      goto LABEL_14;
  }
  else if ( v56.m128i_i32[1] != 1 )
  {
    goto LABEL_13;
  }
  a6 = (unsigned int)v55;
  v16 = v55 == 0;
LABEL_14:
  sub_8EE240(&v50, &v53, a3, v15, v16, a6);
  v19 = _mm_loadu_si128(&v50);
  *(__int64 *)((char *)&v53.m256i_i64[2] + 4) = v51;
  *(__m128i *)((char *)v53.m256i_i64 + 4) = v19;
  v53.m256i_i32[7] = v52;
  v20 = v58;
  if ( HIDWORD(v60) )
  {
    if ( !(_DWORD)v58 )
    {
      if ( v53.m256i_i32[7] <= 6u )
      {
LABEL_42:
        v20 = 2;
        goto LABEL_20;
      }
      v21 = v53.m256i_u32[1];
LABEL_18:
      if ( v21 > 0x1A )
      {
        v20 = 1;
        goto LABEL_20;
      }
      goto LABEL_42;
    }
  }
  else
  {
    if ( v53.m256i_i32[7] <= 6u )
    {
      HIDWORD(v60) = 2;
      if ( (_DWORD)v58 )
        goto LABEL_20;
      goto LABEL_42;
    }
    v21 = v53.m256i_u32[1];
    if ( v53.m256i_i32[1] > 0x10u )
    {
      HIDWORD(v60) = 1;
      if ( (_DWORD)v58 )
        goto LABEL_20;
      goto LABEL_18;
    }
    HIDWORD(v60) = 2;
    if ( !(_DWORD)v58 )
      goto LABEL_18;
  }
LABEL_20:
  LODWORD(v58) = v20;
  v22 = v61;
  if ( !(_DWORD)v61 )
    v22 = sub_8E62B0(&v53.m256i_i32[1], &v53.m256i_i32[7]);
  LODWORD(v61) = v22;
  v23 = *((_QWORD *)&v64 + 1);
  if ( !*((_QWORD *)&v64 + 1) )
    v23 = 0x20000;
  v24 = HIDWORD(v54);
  *((_QWORD *)&v64 + 1) = v23;
  v25 = v65;
  if ( !(_DWORD)v65 )
    v25 = (SHIDWORD(v54) < 10) + 1;
  LODWORD(v65) = v25;
  if ( (_QWORD)v64 )
  {
    result = -41;
    if ( v56.m128i_i32[3] > 0 )
      return result;
    v27 = *(_QWORD *)(a1 + 760) - 1LL;
    if ( v27 > 0x80000 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v27 = *(_QWORD *)(a1 + 760) - 1LL;
  if ( v27 <= 0x80000 )
  {
LABEL_29:
    v56.m128i_i32[3] = 0;
    goto LABEL_30;
  }
  v31 = v56.m128i_i32[3];
  if ( v56.m128i_i32[3] <= 0 )
  {
LABEL_30:
    result = sub_8EBDB0(a1, v10, v11, v12, 0, *(_QWORD *)(a1 + 3696), (const __m128i *)&v53, v27, 1);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      v28 = *(_DWORD *)(a1 + 356);
      v29 = 0;
      *(_QWORD *)(a1 + 3552) = 0;
      *(_QWORD *)(a1 + 3560) = 0;
      if ( !v28 )
        v29 = *(_QWORD *)(a1 + 752) + (*(_QWORD *)(a1 + 752) == v27);
      *(_QWORD *)(a1 + 3592) = 0;
      *(_QWORD *)(a1 + 3600) = 0;
      *(_QWORD *)(a1 + 3608) = 1;
      *(_QWORD *)(a1 + 3568) = v29;
      return 0;
    }
    return result;
  }
  v32 = 0;
  if ( &ZSTD_trace_compress_begin )
    v32 = ZSTD_trace_compress_begin();
  v33 = *(_QWORD *)(a1 + 3728);
  *(_QWORD *)(a1 + 3736) = v32;
  if ( !v33 )
  {
    v49 = sub_9440B0(
            v56.m128i_i32[3],
            *(_QWORD *)(a1 + 896),
            v24,
            v31,
            v17,
            v18,
            *(_OWORD *)(a1 + 872),
            *(_QWORD *)(a1 + 888));
    LODWORD(v33) = v49;
    *(_QWORD *)(a1 + 3728) = v49;
    if ( !v49 )
      return -64;
  }
  result = sub_944450(
             v33,
             (_DWORD)v10,
             v11,
             v12,
             *(_QWORD *)(a1 + 3696),
             (unsigned int)*(_QWORD *)(a1 + 760) - 1,
             *(__int128 *)v53.m256i_i8,
             *(__int128 *)&v53.m256i_u64[2],
             v54,
             v55,
             v56.m128i_i32[0],
             v56.m128i_i32[2],
             v57,
             v58,
             v59,
             v60,
             v61,
             v62,
             v63,
             v64,
             v65);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    v34 = *(_QWORD *)(a1 + 3696);
    if ( v34 )
    {
      *(_DWORD *)(a1 + 664) = *(_DWORD *)(v34 + 6064);
      v11 = *(_QWORD *)(v34 + 8);
    }
    else
    {
      *(_DWORD *)(a1 + 664) = 0;
    }
    si128 = _mm_load_si128((const __m128i *)&v53);
    v36 = _mm_load_si128((const __m128i *)&v55);
    *(_QWORD *)(a1 + 672) = v11;
    v37 = _mm_load_si128(&v56);
    v38 = v65;
    *(_QWORD *)(a1 + 768) = 0;
    v39 = _mm_load_si128((const __m128i *)&v64);
    *(__m128i *)(a1 + 232) = si128;
    v40 = _mm_load_si128((const __m128i *)&v53.m256i_u64[2]);
    *(__m128i *)(a1 + 280) = v36;
    v41 = _mm_load_si128((const __m128i *)&v58);
    *(__m128i *)(a1 + 248) = v40;
    v42 = _mm_load_si128((const __m128i *)&v54);
    *(__m128i *)(a1 + 296) = v37;
    v43 = _mm_load_si128((const __m128i *)&v59);
    *(__m128i *)(a1 + 264) = v42;
    v44 = _mm_load_si128((const __m128i *)&v57);
    *(__m128i *)(a1 + 328) = v41;
    v45 = _mm_load_si128((const __m128i *)&v61);
    *(__m128i *)(a1 + 312) = v44;
    v46 = _mm_load_si128((const __m128i *)&v60);
    *(__m128i *)(a1 + 344) = v43;
    v47 = _mm_load_si128((const __m128i *)&v62);
    *(__m128i *)(a1 + 360) = v46;
    v48 = _mm_load_si128((const __m128i *)&v63);
    *(_QWORD *)(a1 + 440) = v38;
    *(_QWORD *)(a1 + 776) = 0;
    *(_DWORD *)(a1 + 3608) = 1;
    *(__m128i *)(a1 + 376) = v45;
    *(__m128i *)(a1 + 392) = v47;
    *(__m128i *)(a1 + 408) = v48;
    *(__m128i *)(a1 + 424) = v39;
    return 0;
  }
  return result;
}

