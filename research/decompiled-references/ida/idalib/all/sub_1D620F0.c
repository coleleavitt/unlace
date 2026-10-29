unsigned __int64 __fastcall sub_1D620F0(_QWORD *a1, __int64 a2, __int64 a3, __int32 *a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r13
  __int32 *v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v15; // r12
  __int64 v16; // rdx
  bool v17; // zf
  unsigned __int16 v18; // ax
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 *v22; // r14
  __int64 v23; // r12
  __int64 *v24; // rdx
  __int64 v25; // rcx
  __m128 v26; // xmm4
  unsigned int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  size_t v34; // r12
  _QWORD *v35; // r14
  int v36; // eax
  __int64 v37; // r15
  unsigned __int64 v38; // rbp
  __int64 v39; // rax
  __int32 v40; // esi
  int v41; // ebp
  unsigned int v42; // r14d
  __int32 v43; // ecx
  unsigned int v44; // eax
  __int64 v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int32 *v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v52; // rcx
  int v53; // ecx
  __int64 v54; // rsi
  __int64 v55; // r12
  __int64 v56; // rdi
  __int64 v57; // rsi
  __m128i v58; // rax
  unsigned int v59; // r12d
  __int64 v60; // r14
  __int64 v61; // rdi
  __m128i si128; // xmm3
  int v63; // r15d
  unsigned int v64; // eax
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  void *v69; // rdi
  __int64 v70; // r8
  __int64 v71; // rsi
  _DWORD *v72; // rdx
  size_t v73; // r12
  __int64 v74; // rcx
  __int64 v75; // r9
  __m128i v76; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int64 v77; // [rsp+18h] [rbp-150h]
  void **v78; // [rsp+20h] [rbp-148h]
  char *v79; // [rsp+28h] [rbp-140h]
  __m128 *v80; // [rsp+30h] [rbp-138h]
  void *v81; // [rsp+38h] [rbp-130h]
  __m128 v82; // [rsp+40h] [rbp-128h] BYREF
  __int64 v83; // [rsp+50h] [rbp-118h]
  __int64 v84; // [rsp+58h] [rbp-110h]
  __int64 v85; // [rsp+60h] [rbp-108h] BYREF
  __int32 *v86; // [rsp+68h] [rbp-100h]
  __m128 v87; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v88; // [rsp+80h] [rbp-E8h] BYREF
  void *v89; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v90; // [rsp+98h] [rbp-D0h]
  char v91; // [rsp+A0h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+C0h] [rbp-A8h] BYREF
  char v93; // [rsp+D0h] [rbp-98h] BYREF
  void *v94; // [rsp+F0h] [rbp-78h] BYREF
  __m128 v95; // [rsp+F8h] [rbp-70h]
  _BYTE v96[32]; // [rsp+108h] [rbp-60h] BYREF
  int v97; // [rsp+128h] [rbp-40h]
  char v98; // [rsp+12Ch] [rbp-3Ch]

  v6 = a2;
  v86 = a4;
  v85 = a3;
  v8 = &a4[2 * ((4 * ((*(_BYTE *)(a3 + 19) >> 2) + 2 * ((*(_WORD *)(a3 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 2];
  v9 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v12 = sub_1D4F8E0(
          a1,
          a2,
          *(_QWORD *)(v85 + 24),
          (const __m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v12;
  sub_F6C520(*(_QWORD *)(v85 + 24));
  v16 = v85;
  v78 = &v89;
  v89 = &v91;
  v17 = *(_QWORD *)(v85 + 24) == v15;
  v90 = 0x400000000LL;
  v18 = *(_WORD *)(v85 + 18);
  v76.m128i_i8[0] = !v17;
  v19 = (v18 >> 3) & 0x7F;
  if ( v19 )
  {
    v84 = v15;
    v20 = 24;
    v83 = v6;
    v21 = 24;
    v81 = (void *)(8LL * (unsigned int)(v19 - 1) + 32);
    v77 = (unsigned __int64)ptr;
    v79 = &v93;
    v80 = &v87;
    while ( 1 )
    {
      v22 = *(__int64 **)&v86[(unsigned __int64)v21 / 4];
      v23 = *v22;
      if ( (*v22 & 0xF) != 0 )
      {
        v82.m128_u64[0] = (unsigned __int64)(v22 + 1);
        a6 = _mm_loadh_ps((const double *)v82.m128_u64);
        v82 = a6;
      }
      else
      {
        v24 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v82.m128_u64[0] = (unsigned __int64)(v22 + 1);
        v25 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v26 = _mm_loadh_ps((const double *)v82.m128_u64);
        v17 = *(_BYTE *)(v25 + 16) == 38;
        v82 = v26;
        if ( v17 )
        {
          v87 = v26;
          if ( v23 )
          {
            v55 = *v24;
            if ( *(_BYTE *)(*v24 + 16) != 38 )
              v55 = sub_F63050(*v24, v20, v24, v25);
            v56 = *a1;
            v57 = *(_QWORD *)(v55 + 32);
            ptr[0] = v79;
            ptr[1] = (void *)0x200000000LL;
            sub_1E4C960(v56, v57);
            v58.m128i_i64[0] = sub_1743190((__int64)v80);
            v59 = *(_DWORD *)(v55 + 20);
            v76 = v58;
            v88 = _mm_load_si128(&v76);
            sub_F6CE20(v88.m128i_i64);
            sub_F6CCB0(v88.m128i_i64, a5);
            v60 = *a1;
            v61 = v76.m128i_i64[0];
            si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
            v63 = *(_DWORD *)(*a1 + 12632LL);
            *(_DWORD *)(*a1 + 12632LL) = 0;
            v94 = v96;
            v95 = (__m128)si128;
            v97 = 0;
            v98 = 0;
            v64 = sub_F6C560(v61);
            if ( v64 > v95.m128_u64[0] )
              sub_1EA60C0(&v94);
            v67 = sub_1D4F8E0(a1, (__int64)&v94, v88.m128i_i64[0], (const __m128i *)v88.m128i_i64[1], v65, v66, a5, a6);
            if ( (v67 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            {
              v13 = 0;
              if ( v94 && v94 != v96 )
                operator delete[](v94);
              v68 = v77;
              v69 = ptr[0];
              *(_DWORD *)(v60 + 12632) = v63;
              if ( v69 != (void *)(v68 + 16) )
                free(v69);
              goto LABEL_41;
            }
            v76.m128i_i64[0] = sub_A781D0(*(_QWORD *)(*a1 + 248LL), v67, v59);
            sub_1EA6140(v83, v76.m128i_i64[0], 4, 4);
            v70 = v76.m128i_i64[0];
            v71 = v76.m128i_i64[0];
            *v72 = *(_DWORD *)v87.m128_u64[1];
            v73 = v95.m128_u64[0] - v95.m128_u64[1];
            v76.m128i_i64[0] = (__int64)sub_A81BC0(
                                          *(_QWORD **)(*a1 + 248LL),
                                          v71,
                                          v95.m128_i32[0] - v95.m128_i32[2],
                                          v74,
                                          v70,
                                          v75);
            memcpy((void *)(v76.m128i_i64[0] + 8), (char *)v94 + v95.m128_u64[1], v73);
            v20 = v76.m128i_i64[0];
            sub_1745810((__int64)v78, v76.m128i_i64[0]);
            if ( v94 != v96 && v94 )
              operator delete[](v94);
            *(_DWORD *)(v60 + 12632) = v63;
            if ( ptr[0] != v79 )
              free(ptr[0]);
            goto LABEL_15;
          }
        }
      }
      a5 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v97 = 0;
      v94 = v96;
      v95 = a5;
      v98 = 0;
      v27 = sub_F6C560(v23);
      if ( v27 > v95.m128_u64[0] )
        sub_1EA60C0(&v94);
      v30 = sub_1D4F8E0(a1, (__int64)&v94, v82.m128_i64[0], (const __m128i *)v82.m128_u64[1], v28, v29, a5, a6);
      if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v13 = 0;
        if ( v94 && v94 != v96 )
          operator delete[](v94);
        goto LABEL_41;
      }
      if ( v30 == v23 )
      {
        v20 = (__int64)v22;
        sub_1745810((__int64)v78, (__int64)v22);
        if ( v94 && v94 != v96 )
          operator delete[](v94);
        goto LABEL_16;
      }
      v34 = v95.m128_u64[0] - v95.m128_u64[1];
      v35 = sub_A81BC0(*(_QWORD **)(*a1 + 248LL), v30, v95.m128_i32[0] - v95.m128_i32[2], v31, v32, v33);
      memcpy(v35 + 1, (char *)v94 + v95.m128_u64[1], v34);
      v20 = (__int64)v35;
      sub_1745810((__int64)v78, (__int64)v35);
      if ( v94 && v94 != v96 )
        operator delete[](v94);
LABEL_15:
      v76.m128i_i8[0] = 1;
LABEL_16:
      v21 += 8;
      if ( v81 == (void *)v21 )
      {
        v16 = v85;
        v15 = v84;
        v6 = v83;
        LOWORD(v36) = (*(_WORD *)(v85 + 18) >> 3) & 0x7F;
        goto LABEL_18;
      }
    }
  }
  LOBYTE(v36) = 0;
LABEL_18:
  v36 = (unsigned __int8)v36;
  v37 = *(_BYTE *)(v16 + 19) >> 2;
  if ( *(_DWORD *)(*a1 + 12632LL) || (v38 = v16, v76.m128i_i8[0]) )
  {
    v39 = 2LL * (unsigned __int8)v36;
    v40 = v86[3];
    v41 = v86[1];
    v81 = v89;
    v42 = v86[2];
    v82.m128_i32[0] = v40;
    v43 = *v86;
    v80 = (__m128 *)&v86[v39 + 6];
    v76.m128i_i32[0] = v43;
    v77 = (unsigned int)v90;
    v79 = (char *)(v16 + v39 * 4 + 48);
    v44 = sub_F6CCB0(&v85, a5);
    v45 = *a1;
    v13 = 0;
    v46 = sub_1A8CD60(
            *(__int64 **)(v45 + 736),
            v15,
            v44,
            v76.m128i_u32[0],
            (__int64)v81,
            v77,
            a5,
            v41,
            v42,
            v79,
            v37,
            (int)v80,
            v37,
            v82.m128_u32[0],
            1,
            1u);
    v38 = v46;
    if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_41;
    v36 = (*(_WORD *)(v46 + 18) >> 3) & 0x7F;
    LODWORD(v37) = *(_BYTE *)(v38 + 19) >> 2;
  }
  v47 = sub_1EA6140(v6, v38, 8 * ((unsigned int)(4 * (v37 + 2 * v36) + 23) >> 3) + 8, 8);
  v49 = v86;
  v50 = v85;
  *(_BYTE *)(v48 + 16) = 1;
  *(_DWORD *)v48 = *v49;
  if ( ((*(_WORD *)(v50 + 18) >> 3) & 0x7F) != 0 )
  {
    v51 = 8LL * (((*(_WORD *)(v50 + 18) >> 3) & 0x7Fu) - 1) + 8;
    v52 = 0;
    do
    {
      *(_QWORD *)(v48 + v52 + 24) = *(_QWORD *)((char *)v89 + v52);
      v52 += 8;
    }
    while ( v52 != v51 );
    v50 = v85;
    v49 = v86;
  }
  *(_DWORD *)(v48 + 4) = v49[1];
  *(_DWORD *)(v48 + 8) = v49[2];
  v53 = *(_BYTE *)(v50 + 19) >> 2;
  if ( *(_BYTE *)(v50 + 19) >> 2 )
  {
    v54 = 0;
    do
    {
      v54 += 4;
      *(_DWORD *)(v54 + v48 + (*(_WORD *)(v47 + 18) & 0x3F8) + 20) = *(__int32 *)((char *)v49
                                                                                + (*(_WORD *)(v50 + 18) & 0x3F8)
                                                                                + v54
                                                                                + 20);
    }
    while ( 4LL * (unsigned int)(v53 - 1) + 4 != v54 );
  }
  v13 = v38;
  *(_DWORD *)(v48 + 12) = v49[3];
LABEL_41:
  if ( v89 != v78 + 2 )
    free(v89);
  return v13;
}
