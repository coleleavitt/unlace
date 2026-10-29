__int64 __fastcall sub_1C9B570(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v16; // r14
  char v17; // r15
  _WORD *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v22; // rcx
  __int64 v23; // r9
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rdx
  _BYTE *v27; // rdi
  __int64 v28; // r12
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int16 *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  unsigned __int16 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  double v48; // xmm4_8
  double v49; // xmm5_8
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  size_t v58; // rdx
  unsigned __int64 v59; // rax
  const __m128i *v60; // rbx
  __int32 v61; // ecx
  bool v62; // zf
  __int64 v63; // rcx
  __int64 v64; // rdi
  __int8 v65; // cl
  __int16 v66; // cx
  __int64 v67; // rsi
  unsigned __int64 v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  double v72; // xmm4_8
  double v73; // xmm5_8
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // r10
  __int64 v76; // rax
  __int64 v77; // [rsp+10h] [rbp-118h]
  unsigned __int64 v78; // [rsp+10h] [rbp-118h]
  __int64 v79; // [rsp+18h] [rbp-110h]
  unsigned __int64 v80; // [rsp+18h] [rbp-110h]
  unsigned int v81; // [rsp+18h] [rbp-110h]
  unsigned int v82; // [rsp+18h] [rbp-110h]
  __int64 v83; // [rsp+20h] [rbp-108h]
  __int64 v84; // [rsp+28h] [rbp-100h]
  unsigned __int64 v85; // [rsp+28h] [rbp-100h]
  unsigned __int64 v86; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v87; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v88; // [rsp+48h] [rbp-E0h]
  __int64 v89; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v90; // [rsp+48h] [rbp-E0h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v92; // [rsp+58h] [rbp-D0h]
  _BYTE dest[64]; // [rsp+60h] [rbp-C8h] BYREF
  const __m128i *v94; // [rsp+A0h] [rbp-88h] BYREF
  __int32 v95; // [rsp+A8h] [rbp-80h]
  __int64 v96; // [rsp+B0h] [rbp-78h]
  __int64 v97; // [rsp+B8h] [rbp-70h] BYREF
  unsigned int v98; // [rsp+C0h] [rbp-68h]
  __int8 v99; // [rsp+C4h] [rbp-64h]
  char v100; // [rsp+C8h] [rbp-60h]
  __int16 v101; // [rsp+D0h] [rbp-58h]
  __m128 v102; // [rsp+D8h] [rbp-50h]
  char v103; // [rsp+E8h] [rbp-40h]

  v16 = *a1;
  v17 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1;
  if ( v17 )
  {
    sub_18C74E0(*a1, 6, 0, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1) != 0 )
    {
      v57 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      *(_BYTE *)(v57 + 601) = 1;
      *(_BYTE *)(v57 + 603) = 1;
    }
  }
  v18 = *(_WORD **)(a2 + 8);
  if ( v18 )
  {
    v19 = sub_1C9AFD0(a1, v18, 0, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
    if ( v19 == 1 )
    {
LABEL_4:
      v20 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    v19 = 0;
  }
  v77 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 16), 0, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v77 == 1 )
    goto LABEL_4;
  v26 = *a1;
  v27 = dest;
  ptr = dest;
  v28 = *(_QWORD *)(v26 + 4616) + 640LL * *(unsigned int *)(v26 + 4624) - 640;
  v29 = *(unsigned int *)(v28 + 520);
  v92 = 0x800000000LL;
  if ( (_DWORD)v29 && &ptr != (void **)(v28 + 512) )
  {
    v58 = 8LL * (unsigned int)v29;
    if ( (unsigned int)v29 <= 8uLL
      || (v82 = v29,
          sub_2237220(&ptr, dest, (unsigned int)v29, 8),
          v27 = ptr,
          v29 = v82,
          (v58 = 8LL * *(unsigned int *)(v28 + 520)) != 0) )
    {
      v81 = v29;
      memcpy(v27, *(const void **)(v28 + 512), v58);
      v29 = v81;
    }
    LODWORD(v92) = v29;
  }
  v33 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 24), 0, a3, a4, a5, a6, v24, v25, a9, a10, v22, v29, v23);
  if ( v33 == 1 )
    goto LABEL_22;
  v79 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 32), 0, a3, a4, a5, a6, v34, v35, a9, a10, v30, v31, v32);
  if ( v79 == 1 )
    goto LABEL_22;
  v39 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 40), a3, a4, v36, v37, v38);
  if ( v39 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    goto LABEL_22;
  v43 = (unsigned __int64)v39 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v43 )
    goto LABEL_14;
  v59 = sub_19179E0(*a1, *(_DWORD *)(a2 + 80), v43, 0, a3, a4);
  if ( v59 == 1 )
    goto LABEL_22;
  if ( (v59 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v83 = sub_19A3EF0(*a1, v59 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_14:
    v83 = 0;
  v44 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 48), a3, a4, v40, v41, v42);
  if ( v44 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    goto LABEL_22;
  v50 = (unsigned __int64)v44 & 0xFFFFFFFFFFFFFFFELL;
  v84 = v50;
  if ( v50 )
    v84 = sub_19A3EF0(*a1, v50);
  v51 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 56), 0, a3, a4, a5, a6, v48, v49, a9, a10, v45, v46, v47);
  if ( v51 == 1 )
    goto LABEL_22;
  v52 = v77;
  v53 = v33 & 0xFFFFFFFFFFFFFFFELL;
  v78 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v54 = v51 & 0xFFFFFFFFFFFFFFFELL;
  v86 = v84 & 0xFFFFFFFFFFFFFFFELL;
  v85 = v79 & 0xFFFFFFFFFFFFFFFELL;
  v80 = v52 & 0xFFFFFFFFFFFFFFFELL;
  v87 = v51 & 0xFFFFFFFFFFFFFFFELL;
  v55 = sub_1C74DC0(
          a1,
          *(unsigned int *)(a2 + 72),
          *(_DWORD *)(a2 + 76),
          v78,
          *(_DWORD *)(a2 + 80),
          v52 & 0xFFFFFFFFFFFFFFFELL,
          a3,
          a4,
          v53,
          v85,
          v83 & 0xFFFFFFFFFFFFFFFELL,
          v86,
          v51 & 0xFFFFFFFFFFFFFFFELL,
          *(_DWORD *)(a2 + 84),
          (__int64 *)ptr,
          (unsigned int)v92);
  v56 = *a1;
  if ( v55 == 1 && *(_QWORD *)(a2 + 56) != v54 )
  {
    sub_17A5050(v56, *(_QWORD *)(v54 + 8));
LABEL_22:
    v20 = 1;
    goto LABEL_23;
  }
  v60 = *(const __m128i **)(v56 + 744);
  v61 = v60[2].m128i_i32[0];
  v62 = v60[4].m128i_i8[0] == 0;
  v94 = v60;
  v95 = v61;
  v63 = v60[2].m128i_i64[1];
  v100 = 0;
  v96 = v63;
  if ( v62 )
  {
    v64 = (__int64)v60;
  }
  else
  {
    v98 = v60[3].m128i_u32[2];
    if ( v98 > 0x40 )
    {
      v89 = v55;
      sub_2205510(&v97);
      v55 = v89;
      v64 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v64 = (__int64)v60;
      v97 = v60[3].m128i_i64[0];
    }
    v65 = v60[3].m128i_i8[12];
    v100 = 1;
    v99 = v65;
  }
  v66 = v60[4].m128i_i16[4];
  a3 = (__m128)_mm_loadu_si128(v60 + 5);
  v67 = *(unsigned int *)(a2 + 72);
  v103 = 1;
  v68 = v55 & 0xFFFFFFFFFFFFFFFELL;
  v101 = v66;
  v102 = a3;
  sub_1AAA2E0(v64, v67, a2, v55 & 0xFFFFFFFFFFFFFFFELL);
  v74 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 64), 0, a3, a4, a5, a6, v72, v73, a9, a10, v69, v70, v71);
  if ( v74 == 1 )
    goto LABEL_42;
  v88 = v74;
  sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 72), v74, *(double *)a3.m128_u64);
  v75 = v88 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_QWORD *)(a2 + 64) == (v88 & 0xFFFFFFFFFFFFFFFELL) || v68 != a2 )
  {
LABEL_47:
    if ( a2 == v68 )
      v20 = a2;
    else
      v20 = sub_1C3E180(*a1, v68, v75);
    goto LABEL_43;
  }
  v90 = v88 & 0xFFFFFFFFFFFFFFFELL;
  v76 = sub_1C74DC0(
          a1,
          *(unsigned int *)(a2 + 72),
          *(_DWORD *)(a2 + 76),
          v78,
          *(_DWORD *)(a2 + 80),
          v80,
          a3,
          a4,
          v53,
          v85,
          v83 & 0xFFFFFFFFFFFFFFFELL,
          v86,
          v87,
          *(_DWORD *)(a2 + 84),
          (__int64 *)ptr,
          (unsigned int)v92);
  if ( v76 != 1 )
  {
    v75 = v90;
    v68 = v76 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_47;
  }
LABEL_42:
  v20 = 1;
LABEL_43:
  sub_15354C0((__int64)&v94);
LABEL_23:
  if ( ptr != dest )
  {
    free(ptr);
    if ( !v17 )
      return v20;
LABEL_25:
    sub_190D5E0(v16, a3);
    return v20;
  }
LABEL_5:
  if ( v17 )
    goto LABEL_25;
  return v20;
}
