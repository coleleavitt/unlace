unsigned __int64 __fastcall sub_9126F0(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __m256i *v17; // rsi
  int v18; // r8d
  int v19; // r9d
  __m128i v20; // xmm6
  int v21; // eax
  unsigned __int32 v22; // edx
  __int32 v23; // eax
  Elf64_Rela *v24; // rax
  __int32 v25; // edx
  int v26; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v28; // rbp
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rax
  __int32 v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __m128i si128; // xmm7
  __m128i v37; // xmm0
  __m128i v38; // xmm6
  __int64 v39; // rax
  __m128i v40; // xmm1
  __m128i v41; // xmm7
  __m128i v42; // xmm0
  __m128i v43; // xmm7
  __m128i v44; // xmm6
  __m128i v45; // xmm7
  __m128i v46; // xmm0
  __m128i v47; // xmm7
  __m128i v48; // xmm6
  __m128i v49; // xmm7
  __int64 v50; // rax
  __m128i v51; // [rsp+0h] [rbp-138h] BYREF
  __int64 v52; // [rsp+10h] [rbp-128h]
  __int32 v53; // [rsp+18h] [rbp-120h]
  __m256i v54; // [rsp+20h] [rbp-118h] BYREF
  __int128 v55; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v56; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v57; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v58; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v59; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v60; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v62; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v64; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v65; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v67; // [rsp+F8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  *(__m128i *)v54.m256i_i8 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  *(__m128i *)&v54.m256i_u64[2] = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v55 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 48));
  v56 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 64));
  v57 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  v58 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 96));
  v59 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 112));
  v60 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 128));
  v61 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 144));
  v62 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 160));
  v63 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 176));
  v64 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 192));
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 208));
  v9 = *(_QWORD *)(a1 + 224);
  v10 = *(_DWORD **)(a1 + 3704);
  v11 = *(_QWORD *)(a1 + 3712);
  v12 = *(_DWORD *)(a1 + 3720);
  v13 = *(const void **)(a1 + 3664);
  v65 = (__int128)v8;
  v66 = v9;
  if ( v13 && !*(_QWORD *)(a1 + 3688) )
  {
    v31 = sub_912070(
            v13,
            *(_QWORD *)(a1 + 3672),
            1,
            *(_DWORD *)(a1 + 3680),
            (const __m128i *)(a1 + 16),
            a6,
            *(__int64 (__fastcall **)(__int64, size_t))(a1 + 872),
            *(_QWORD *)(a1 + 880),
            *(_QWORD *)(a1 + 888));
    *(_QWORD *)(a1 + 3688) = v31;
    if ( !v31 )
      return -64;
    *(_QWORD *)(a1 + 3696) = v31;
  }
  v14 = *(_QWORD *)(a1 + 3696);
  *(_QWORD *)(a1 + 3720) = 0;
  *(_OWORD *)(a1 + 3704) = 0;
  if ( v14 && !*(_QWORD *)(a1 + 3688) )
    HIDWORD(v55) = *(_DWORD *)(v14 + 6068);
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
  if ( a3 <= qword_23D7320[*(unsigned int *)(v14 + 384)] || a3 == -1 )
  {
    v16 = 0;
    if ( v57.m128i_i32[1] == 2 )
      goto LABEL_14;
  }
  else if ( v57.m128i_i32[1] != 1 )
  {
    goto LABEL_13;
  }
  a6 = (unsigned int)v56;
  v16 = v56 == 0;
LABEL_14:
  v17 = &v54;
  sub_911F80(&v51, &v54, a3, v15, v16, a6);
  v20 = _mm_loadu_si128(&v51);
  *(__int64 *)((char *)&v54.m256i_i64[2] + 4) = v52;
  *(__m128i *)((char *)v54.m256i_i64 + 4) = v20;
  v54.m256i_i32[7] = v53;
  v21 = v59;
  if ( HIDWORD(v61) )
  {
    if ( !(_DWORD)v59 )
    {
      if ( v54.m256i_i32[7] <= 6u )
      {
LABEL_42:
        v21 = 2;
        goto LABEL_20;
      }
      v22 = v54.m256i_u32[1];
LABEL_18:
      if ( v22 > 0x1A )
      {
        v21 = 1;
        goto LABEL_20;
      }
      goto LABEL_42;
    }
  }
  else
  {
    if ( v54.m256i_i32[7] <= 6u )
    {
      HIDWORD(v61) = 2;
      if ( (_DWORD)v59 )
        goto LABEL_20;
      goto LABEL_42;
    }
    v22 = v54.m256i_u32[1];
    if ( v54.m256i_i32[1] > 0x10u )
    {
      HIDWORD(v61) = 1;
      if ( (_DWORD)v59 )
        goto LABEL_20;
      goto LABEL_18;
    }
    HIDWORD(v61) = 2;
    if ( !(_DWORD)v59 )
      goto LABEL_18;
  }
LABEL_20:
  LODWORD(v59) = v21;
  v23 = v62;
  if ( !(_DWORD)v62 )
  {
    v17 = (__m256i *)((char *)&v54.m256i_u64[3] + 4);
    v23 = sub_909FF0(&v54.m256i_i32[1], &v54.m256i_i32[7]);
  }
  LODWORD(v62) = v23;
  v24 = *((Elf64_Rela **)&v65 + 1);
  if ( !*((_QWORD *)&v65 + 1) )
    v24 = &stru_20000;
  v25 = HIDWORD(v55);
  *((_QWORD *)&v65 + 1) = v24;
  v26 = v66;
  if ( !(_DWORD)v66 )
    v26 = (SHIDWORD(v55) < 10) + 1;
  LODWORD(v66) = v26;
  if ( (_QWORD)v65 )
  {
    result = -41;
    if ( v57.m128i_i32[3] > 0 )
      return result;
    v28 = *(_QWORD *)(a1 + 760) - 1LL;
    if ( v28 > (unsigned __int64)&stru_80000 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v28 = *(_QWORD *)(a1 + 760) - 1LL;
  if ( v28 <= (unsigned __int64)&stru_80000 )
  {
LABEL_29:
    v57.m128i_i32[3] = 0;
    goto LABEL_30;
  }
  v32 = v57.m128i_i32[3];
  if ( v57.m128i_i32[3] <= 0 )
  {
LABEL_30:
    result = sub_90FAF0(a1, v10, v11, v12, 0, *(_QWORD *)(a1 + 3696), (const __m128i *)&v54, v28, 1);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      v29 = *(_DWORD *)(a1 + 356);
      v30 = 0;
      *(_QWORD *)(a1 + 3552) = 0;
      *(_QWORD *)(a1 + 3560) = 0;
      if ( !v29 )
        v30 = *(_QWORD *)(a1 + 752) + (*(_QWORD *)(a1 + 752) == v28);
      *(_QWORD *)(a1 + 3592) = 0;
      *(_QWORD *)(a1 + 3600) = 0;
      *(_QWORD *)(a1 + 3608) = 1;
      *(_QWORD *)(a1 + 3568) = v30;
      return 0;
    }
    return result;
  }
  v33 = 0;
  if ( &ZSTD_trace_compress_begin )
    v33 = ZSTD_trace_compress_begin(a1, v17, HIDWORD(v55));
  v34 = *(_QWORD *)(a1 + 3728);
  *(_QWORD *)(a1 + 3736) = v33;
  if ( !v34 )
  {
    v50 = sub_967DF0(
            v57.m128i_i32[3],
            *(_QWORD *)(a1 + 896),
            v25,
            v32,
            v18,
            v19,
            *(_OWORD *)(a1 + 872),
            *(_QWORD *)(a1 + 888));
    LODWORD(v34) = v50;
    *(_QWORD *)(a1 + 3728) = v50;
    if ( !v50 )
      return -64;
  }
  result = sub_968190(
             v34,
             (_DWORD)v10,
             v11,
             v12,
             *(_QWORD *)(a1 + 3696),
             (unsigned int)*(_QWORD *)(a1 + 760) - 1,
             *(__int128 *)v54.m256i_i8,
             *(__int128 *)&v54.m256i_u64[2],
             v55,
             v56,
             v57.m128i_i32[0],
             v57.m128i_i32[2],
             v58,
             v59,
             v60,
             v61,
             v62,
             v63,
             v64,
             v65,
             v66);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    v35 = *(_QWORD *)(a1 + 3696);
    if ( v35 )
    {
      *(_DWORD *)(a1 + 664) = *(_DWORD *)(v35 + 6064);
      v11 = *(_QWORD *)(v35 + 8);
    }
    else
    {
      *(_DWORD *)(a1 + 664) = 0;
    }
    si128 = _mm_load_si128((const __m128i *)&v54);
    v37 = _mm_load_si128((const __m128i *)&v56);
    *(_QWORD *)(a1 + 672) = v11;
    v38 = _mm_load_si128(&v57);
    v39 = v66;
    *(_QWORD *)(a1 + 768) = 0;
    v40 = _mm_load_si128((const __m128i *)&v65);
    *(__m128i *)(a1 + 232) = si128;
    v41 = _mm_load_si128((const __m128i *)&v54.m256i_u64[2]);
    *(__m128i *)(a1 + 280) = v37;
    v42 = _mm_load_si128((const __m128i *)&v59);
    *(__m128i *)(a1 + 248) = v41;
    v43 = _mm_load_si128((const __m128i *)&v55);
    *(__m128i *)(a1 + 296) = v38;
    v44 = _mm_load_si128((const __m128i *)&v60);
    *(__m128i *)(a1 + 264) = v43;
    v45 = _mm_load_si128((const __m128i *)&v58);
    *(__m128i *)(a1 + 328) = v42;
    v46 = _mm_load_si128((const __m128i *)&v62);
    *(__m128i *)(a1 + 312) = v45;
    v47 = _mm_load_si128((const __m128i *)&v61);
    *(__m128i *)(a1 + 344) = v44;
    v48 = _mm_load_si128((const __m128i *)&v63);
    *(__m128i *)(a1 + 360) = v47;
    v49 = _mm_load_si128((const __m128i *)&v64);
    *(_QWORD *)(a1 + 440) = v39;
    *(_QWORD *)(a1 + 776) = 0;
    *(_DWORD *)(a1 + 3608) = 1;
    *(__m128i *)(a1 + 376) = v46;
    *(__m128i *)(a1 + 392) = v48;
    *(__m128i *)(a1 + 408) = v49;
    *(__m128i *)(a1 + 424) = v40;
    return 0;
  }
  return result;
}
