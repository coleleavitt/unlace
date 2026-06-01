unsigned __int64 __fastcall sub_1C98330(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __m128 si128, __m128 a6)
{
  __int64 v6; // rbp
  unsigned int *v8; // r12
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v15; // r12
  __int64 v16; // rdx
  _BYTE *v17; // r8
  unsigned __int16 v18; // ax
  int v19; // eax
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rbp
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  size_t v32; // r13
  _QWORD *v33; // r14
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  _BYTE *v36; // rdi
  __int16 v37; // ax
  unsigned __int8 v38; // r15
  __int64 v39; // rax
  unsigned int v40; // r14d
  int v41; // r13d
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // eax
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdi
  unsigned int v49; // eax
  __int64 v50; // r15
  __int64 *v51; // r14
  unsigned int v52; // ebp
  __int64 v53; // r14
  __int32 v54; // eax
  unsigned int v55; // eax
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rax
  _BYTE *v59; // rdi
  unsigned __int64 v60; // r15
  _DWORD *v61; // rdx
  size_t v62; // r13
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  _QWORD *v66; // r15
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  _BYTE *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int *v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdi
  __int64 v75; // rcx
  int v76; // ecx
  __int64 v77; // rsi
  unsigned int v78; // [rsp+0h] [rbp-148h]
  _BYTE *v79; // [rsp+8h] [rbp-140h]
  __m128 v80; // [rsp+10h] [rbp-138h] BYREF
  _BYTE *v81; // [rsp+20h] [rbp-128h]
  __int64 *v82; // [rsp+28h] [rbp-120h]
  void **v83; // [rsp+30h] [rbp-118h]
  _BYTE *v84; // [rsp+38h] [rbp-110h]
  __int64 v85; // [rsp+40h] [rbp-108h]
  __int64 v86; // [rsp+48h] [rbp-100h]
  __int64 v87; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int *v88; // [rsp+58h] [rbp-F0h]
  __int64 v89; // [rsp+60h] [rbp-E8h] BYREF
  const __m128i *v90; // [rsp+68h] [rbp-E0h]
  void *v91; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v92; // [rsp+78h] [rbp-D0h]
  _BYTE v93[32]; // [rsp+80h] [rbp-C8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-A8h]
  __int64 v95; // [rsp+A8h] [rbp-A0h]
  _BYTE v96[32]; // [rsp+B0h] [rbp-98h] BYREF
  void *v97; // [rsp+D0h] [rbp-78h] BYREF
  __m128i v98; // [rsp+D8h] [rbp-70h]
  _BYTE v99[32]; // [rsp+E8h] [rbp-60h] BYREF
  int v100; // [rsp+108h] [rbp-40h]
  char v101; // [rsp+10Ch] [rbp-3Ch]

  v6 = a2;
  v88 = a4;
  v87 = a3;
  v8 = &a4[2 * ((4 * ((*(_BYTE *)(a3 + 19) >> 2) + 2 * ((*(_WORD *)(a3 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 2];
  v9 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v12 = sub_1C892C0(
          a1,
          a2,
          *(_QWORD *)(v87 + 24),
          (const __m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11,
          si128,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v12;
  sub_F6C520(*(_QWORD *)(v87 + 24));
  v16 = v87;
  v17 = v93;
  v83 = &v91;
  v92 = 0x400000000LL;
  v18 = *(_WORD *)(v87 + 18);
  v91 = v93;
  v19 = (v18 >> 3) & 0x7F;
  if ( v19 )
  {
    v85 = a2;
    v86 = v15;
    v20 = 24;
    v84 = (_BYTE *)(8LL * (unsigned int)(v19 - 1) + 32);
    v81 = v96;
    v82 = &v89;
    while ( 1 )
    {
      v21 = *(_QWORD *)&v88[(unsigned __int64)v20 / 4];
      v22 = *(_QWORD *)v21;
      if ( (*(_QWORD *)v21 & 0xF) == 0
        && (v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v23 + 16) == 38)
        && v22 )
      {
        v47 = *(_QWORD *)(v23 + 32);
        v48 = *a1;
        ptr = v81;
        v95 = 0x200000000LL;
        sub_1E4C960(v48, v47);
        v49 = sub_F6C520(*(_QWORD *)(v22 + 32));
        v50 = *(_QWORD *)(v22 + 32);
        v51 = v82;
        v52 = *(_DWORD *)(v23 + 20);
        v89 = v50;
        v90 = (const __m128i *)(((v21 != -12) + (v21 + 12 - (unsigned __int64)(v21 != -12)) / v49) * v49);
        sub_F6CE20(v82);
        sub_F6CCB0(v51, si128);
        v53 = *a1;
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v54 = *(_DWORD *)(*a1 + 12632);
        *(_DWORD *)(*a1 + 12632) = 0;
        v98 = (__m128i)si128;
        v80.m128_i32[0] = v54;
        v100 = 0;
        v101 = 0;
        v97 = v99;
        v55 = sub_F6C560(v50);
        if ( (unsigned __int64)v55 > v98.m128i_i64[0] )
          sub_1EA60C0(&v97);
        v58 = sub_1C892C0(a1, (__int64)&v97, v89, v90, v56, v57, si128, a6);
        if ( (v58 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v13 = 0;
          if ( v97 != v99 && v97 )
            operator delete[](v97);
          v59 = ptr;
          *(_DWORD *)(v53 + 12632) = v80.m128_i32[0];
          if ( v59 != v96 )
            free(v59);
          goto LABEL_30;
        }
        v60 = sub_A781D0(*(_QWORD *)(*a1 + 248), v58, v52);
        sub_1EA6140(v85, v60, 4, 4);
        *v61 = *(_DWORD *)(v21 + 8);
        v62 = v98.m128i_i64[0] - v98.m128i_i64[1];
        v66 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v60, v98.m128i_i32[0] - v98.m128i_i32[2], v63, v64, v65);
        memcpy(v66 + 1, (char *)v97 + v98.m128i_i64[1], v62);
        v67 = (unsigned int)v92;
        v68 = (unsigned int)v92 + 1LL;
        if ( v68 > HIDWORD(v92) )
        {
          sub_2237220(v83, v83 + 2, v68, 8);
          v67 = (unsigned int)v92;
        }
        *((_QWORD *)v91 + v67) = v66;
        LODWORD(v92) = v92 + 1;
        if ( v97 && v97 != v99 )
          operator delete[](v97);
        v69 = ptr;
        *(_DWORD *)(v53 + 12632) = v80.m128_i32[0];
        if ( v69 != v81 )
          free(v69);
      }
      else
      {
        v24 = *(_QWORD *)v21;
        v100 = 0;
        v101 = 0;
        v98 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v97 = v99;
        v25 = sub_F6C560(v24);
        if ( (unsigned __int64)v25 > v98.m128i_i64[0] )
          sub_1EA60C0(&v97);
        v80.m128_u64[0] = v21 + 8;
        a6 = _mm_loadh_ps((const double *)v80.m128_u64);
        v80 = a6;
        v28 = sub_1C892C0(a1, (__int64)&v97, a6.m128_i64[0], (const __m128i *)a6.m128_u64[1], v26, v27, si128, a6);
        if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v13 = 0;
          if ( v97 && v97 != v99 )
            operator delete[](v97);
          goto LABEL_30;
        }
        if ( v28 != v22 )
        {
          v32 = v98.m128i_i64[0] - v98.m128i_i64[1];
          v33 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v28, v98.m128i_i32[0] - v98.m128i_i32[2], v29, v30, v31);
          memcpy(v33 + 1, (char *)v97 + v98.m128i_i64[1], v32);
          v34 = (unsigned int)v92;
          v35 = (unsigned int)v92 + 1LL;
          if ( v35 > HIDWORD(v92) )
          {
            sub_2237220(v83, v83 + 2, v35, 8);
            v34 = (unsigned int)v92;
          }
          *((_QWORD *)v91 + v34) = v33;
          v36 = v97;
          LODWORD(v92) = v92 + 1;
          if ( !v97 )
            goto LABEL_18;
LABEL_16:
          if ( v36 != v99 )
            operator delete[](v36);
          goto LABEL_18;
        }
        sub_1745810((__int64)v83, v21);
        v36 = v97;
        if ( v97 )
          goto LABEL_16;
      }
LABEL_18:
      v20 += 8;
      if ( v84 == (_BYTE *)v20 )
      {
        v16 = v87;
        v15 = v86;
        v6 = v85;
        v80.m128_u64[0] = (unsigned int)v92;
        v17 = v91;
        v37 = (*(_WORD *)(v87 + 18) >> 3) & 0x7F;
        goto LABEL_20;
      }
    }
  }
  v80.m128_u64[0] = 0;
  LOBYTE(v37) = 0;
LABEL_20:
  v38 = *(_BYTE *)(v16 + 19);
  v39 = 2LL * (unsigned __int8)v37;
  v84 = v17;
  v40 = v88[2];
  v41 = v88[1];
  LODWORD(v82) = v88[3];
  v42 = (__int64)&v88[v39 + 6];
  v43 = v16 + v39 * 4 + 48;
  v44 = *v88;
  v81 = (_BYTE *)v42;
  v78 = v44;
  v79 = (_BYTE *)v43;
  v45 = sub_F6CCB0(&v87, si128);
  v46 = sub_1A8CD60(
          *(__int64 **)(*a1 + 736),
          v15,
          v45,
          v78,
          (__int64)v84,
          v80.m128_u64[0],
          si128,
          v41,
          v40,
          v79,
          v38 >> 2,
          (int)v81,
          v38 >> 2,
          (unsigned int)v82,
          1,
          1u);
  v13 = v46;
  if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v70 = sub_1EA6140(
            v6,
            v46,
            8 * ((4 * ((*(_BYTE *)(v46 + 19) >> 2) + 2 * ((*(_WORD *)(v46 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 8,
            8);
    v72 = v88;
    v73 = v87;
    *(_BYTE *)(v71 + 16) = 1;
    *(_DWORD *)v71 = *v72;
    if ( ((*(_WORD *)(v73 + 18) >> 3) & 0x7F) != 0 )
    {
      v74 = 8LL * (((*(_WORD *)(v73 + 18) >> 3) & 0x7Fu) - 1) + 8;
      v75 = 0;
      do
      {
        *(_QWORD *)(v71 + v75 + 24) = *(_QWORD *)((char *)v91 + v75);
        v75 += 8;
      }
      while ( v74 != v75 );
      v73 = v87;
      v72 = v88;
    }
    *(_DWORD *)(v71 + 4) = v72[1];
    *(_DWORD *)(v71 + 8) = v72[2];
    v76 = *(_BYTE *)(v73 + 19) >> 2;
    if ( *(_BYTE *)(v73 + 19) >> 2 )
    {
      v77 = 0;
      do
      {
        v77 += 4;
        *(_DWORD *)(v77 + v71 + (*(_WORD *)(v70 + 18) & 0x3F8) + 20) = *(unsigned int *)((char *)v72
                                                                                       + (*(_WORD *)(v73 + 18) & 0x3F8)
                                                                                       + v77
                                                                                       + 20);
      }
      while ( v77 != 4LL * (unsigned int)(v76 - 1) + 4 );
    }
    *(_DWORD *)(v71 + 12) = v72[3];
  }
  else
  {
    v13 = 0;
  }
LABEL_30:
  if ( v91 != v83 + 2 )
    free(v91);
  return v13;
}
