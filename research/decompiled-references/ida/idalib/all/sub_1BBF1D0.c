unsigned __int64 __fastcall sub_1BBF1D0(__int64 *a1, __int64 a2, __int64 a3, __int32 *a4, __m128 a5, __m128 a6)
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
  _QWORD *v20; // rsi
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
  int v34; // eax
  __int64 v35; // r15
  unsigned __int64 v36; // rbp
  __int64 v37; // rax
  __int32 v38; // esi
  int v39; // ebp
  unsigned int v40; // r14d
  __int32 v41; // ecx
  unsigned int v42; // eax
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int32 *v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdi
  __int64 v50; // rcx
  int v51; // ecx
  __int64 v52; // rsi
  __int64 v53; // r12
  __int64 v54; // rdi
  __int64 v55; // rsi
  __m128i v56; // rax
  unsigned int v57; // r12d
  __int64 v58; // r14
  __int64 v59; // rdi
  __m128i si128; // xmm3
  int v61; // r15d
  unsigned int v62; // eax
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  void *v67; // rdi
  unsigned __int64 v68; // r12
  _DWORD *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __m128i v73; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int64 v74; // [rsp+18h] [rbp-150h]
  void **v75; // [rsp+20h] [rbp-148h]
  char *v76; // [rsp+28h] [rbp-140h]
  __m128 *v77; // [rsp+30h] [rbp-138h]
  void *v78; // [rsp+38h] [rbp-130h]
  __m128 v79; // [rsp+40h] [rbp-128h] BYREF
  __int64 v80; // [rsp+50h] [rbp-118h]
  __int64 v81; // [rsp+58h] [rbp-110h]
  __int64 v82; // [rsp+60h] [rbp-108h] BYREF
  __int32 *v83; // [rsp+68h] [rbp-100h]
  __m128 v84; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v85; // [rsp+80h] [rbp-E8h] BYREF
  void *v86; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v87; // [rsp+98h] [rbp-D0h]
  char v88; // [rsp+A0h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+C0h] [rbp-A8h] BYREF
  char v90; // [rsp+D0h] [rbp-98h] BYREF
  void *v91; // [rsp+F0h] [rbp-78h] BYREF
  __m128 v92; // [rsp+F8h] [rbp-70h]
  _BYTE v93[32]; // [rsp+108h] [rbp-60h] BYREF
  int v94; // [rsp+128h] [rbp-40h]
  char v95; // [rsp+12Ch] [rbp-3Ch]

  v6 = a2;
  v83 = a4;
  v82 = a3;
  v8 = &a4[2 * ((4 * ((*(_BYTE *)(a3 + 19) >> 2) + 2 * ((*(_WORD *)(a3 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 2];
  v9 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v12 = sub_1BB10D0(
          a1,
          a2,
          *(_QWORD *)(v82 + 24),
          (__m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v12;
  sub_F6C520(*(_QWORD *)(v82 + 24));
  v16 = v82;
  v75 = &v86;
  v86 = &v88;
  v17 = *(_QWORD *)(v82 + 24) == v15;
  v87 = 0x400000000LL;
  v18 = *(_WORD *)(v82 + 18);
  v73.m128i_i8[0] = !v17;
  v19 = (v18 >> 3) & 0x7F;
  if ( v19 )
  {
    v81 = v15;
    v20 = &qword_18;
    v80 = v6;
    v21 = 24;
    v78 = (void *)(8LL * (unsigned int)(v19 - 1) + 32);
    v74 = (unsigned __int64)ptr;
    v76 = &v90;
    v77 = &v84;
    while ( 1 )
    {
      v22 = *(__int64 **)&v83[(unsigned __int64)v21 / 4];
      v23 = *v22;
      if ( (*v22 & 0xF) != 0 )
      {
        v79.m128_u64[0] = (unsigned __int64)(v22 + 1);
        a6 = _mm_loadh_ps((const double *)v79.m128_u64);
        v79 = a6;
      }
      else
      {
        v24 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v79.m128_u64[0] = (unsigned __int64)(v22 + 1);
        v25 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v26 = _mm_loadh_ps((const double *)v79.m128_u64);
        v17 = *(_BYTE *)(v25 + 16) == 38;
        v79 = v26;
        if ( v17 )
        {
          v84 = v26;
          if ( v23 )
          {
            v53 = *v24;
            if ( *(_BYTE *)(*v24 + 16) != 38 )
              v53 = sub_F63050(*v24, v20, v24, v25);
            v54 = *a1;
            v55 = *(_QWORD *)(v53 + 32);
            ptr[0] = v76;
            ptr[1] = (void *)0x200000000LL;
            sub_1E4C960(v54, v55);
            v56.m128i_i64[0] = sub_1743190((__int64)v77);
            v57 = *(_DWORD *)(v53 + 20);
            v73 = v56;
            v85 = _mm_load_si128(&v73);
            sub_F6CE20(v85.m128i_i64);
            sub_F6CCB0(v85.m128i_i64, a5);
            v58 = *a1;
            v59 = v73.m128i_i64[0];
            si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
            v61 = *(_DWORD *)(*a1 + 12632);
            *(_DWORD *)(*a1 + 12632) = 0;
            v91 = v93;
            v92 = (__m128)si128;
            v94 = 0;
            v95 = 0;
            v62 = sub_F6C560(v59);
            if ( v62 > v92.m128_u64[0] )
              sub_1EA60C0(&v91);
            v65 = sub_1BB10D0(a1, (__int64)&v91, v85.m128i_i64[0], (__m128i *)v85.m128i_i64[1], v63, v64, a5, a6);
            if ( (v65 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            {
              v13 = 0;
              if ( v91 && v91 != v93 )
                operator delete[](v91);
              v66 = v74;
              v67 = ptr[0];
              *(_DWORD *)(v58 + 12632) = v61;
              if ( v67 != (void *)(v66 + 16) )
                free(v67);
              goto LABEL_41;
            }
            v68 = sub_A781D0(*(_QWORD *)(*a1 + 248), v65, v57);
            sub_1EA6140(v80, v68, 4, 4);
            *v69 = *(_DWORD *)v84.m128_u64[1];
            v20 = sub_18C0B80(&v91, *(_QWORD **)(*a1 + 248), v68, v70, v71, v72);
            sub_1745810((__int64)v75, (__int64)v20);
            if ( v91 != v93 && v91 )
              operator delete[](v91);
            *(_DWORD *)(v58 + 12632) = v61;
            if ( ptr[0] != v76 )
              free(ptr[0]);
            goto LABEL_15;
          }
        }
      }
      a5 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v94 = 0;
      v91 = v93;
      v92 = a5;
      v95 = 0;
      v27 = sub_F6C560(v23);
      if ( v27 > v92.m128_u64[0] )
        sub_1EA60C0(&v91);
      v30 = sub_1BB10D0(a1, (__int64)&v91, v79.m128_i64[0], (__m128i *)v79.m128_u64[1], v28, v29, a5, a6);
      if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v13 = 0;
        if ( v91 && v91 != v93 )
          operator delete[](v91);
        goto LABEL_41;
      }
      if ( v30 == v23 )
      {
        v20 = v22;
        sub_1745810((__int64)v75, (__int64)v22);
        if ( v91 && v91 != v93 )
          operator delete[](v91);
        goto LABEL_16;
      }
      v20 = sub_18C0B80(&v91, *(_QWORD **)(*a1 + 248), v30, v31, v32, v33);
      sub_1745810((__int64)v75, (__int64)v20);
      if ( v91 && v91 != v93 )
        operator delete[](v91);
LABEL_15:
      v73.m128i_i8[0] = 1;
LABEL_16:
      v21 += 8;
      if ( v78 == (void *)v21 )
      {
        v16 = v82;
        v15 = v81;
        v6 = v80;
        LOWORD(v34) = (*(_WORD *)(v82 + 18) >> 3) & 0x7F;
        goto LABEL_18;
      }
    }
  }
  LOBYTE(v34) = 0;
LABEL_18:
  v34 = (unsigned __int8)v34;
  v35 = *(_BYTE *)(v16 + 19) >> 2;
  if ( *(_DWORD *)(*a1 + 12632) || (v36 = v16, v73.m128i_i8[0]) )
  {
    v37 = 2LL * (unsigned __int8)v34;
    v38 = v83[3];
    v39 = v83[1];
    v78 = v86;
    v40 = v83[2];
    v79.m128_i32[0] = v38;
    v41 = *v83;
    v77 = (__m128 *)&v83[v37 + 6];
    v73.m128i_i32[0] = v41;
    v74 = (unsigned int)v87;
    v76 = (char *)(v16 + v37 * 4 + 48);
    v42 = sub_F6CCB0(&v82, a5);
    v43 = *a1;
    v13 = 0;
    v44 = sub_1A8CD60(
            *(__int64 **)(v43 + 736),
            v15,
            v42,
            v73.m128i_u32[0],
            (__int64)v78,
            v74,
            a5,
            v39,
            v40,
            v76,
            v35,
            (int)v77,
            v35,
            v79.m128_u32[0],
            1,
            1u);
    v36 = v44;
    if ( (v44 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_41;
    v34 = (*(_WORD *)(v44 + 18) >> 3) & 0x7F;
    LODWORD(v35) = *(_BYTE *)(v36 + 19) >> 2;
  }
  v45 = sub_1EA6140(v6, v36, 8 * ((unsigned int)(4 * (v35 + 2 * v34) + 23) >> 3) + 8, 8);
  v47 = v83;
  v48 = v82;
  *(_BYTE *)(v46 + 16) = 1;
  *(_DWORD *)v46 = *v47;
  if ( ((*(_WORD *)(v48 + 18) >> 3) & 0x7F) != 0 )
  {
    v49 = 8LL * (((*(_WORD *)(v48 + 18) >> 3) & 0x7Fu) - 1) + 8;
    v50 = 0;
    do
    {
      *(_QWORD *)(v46 + v50 + 24) = *(_QWORD *)((char *)v86 + v50);
      v50 += 8;
    }
    while ( v50 != v49 );
    v48 = v82;
    v47 = v83;
  }
  *(_DWORD *)(v46 + 4) = v47[1];
  *(_DWORD *)(v46 + 8) = v47[2];
  v51 = *(_BYTE *)(v48 + 19) >> 2;
  if ( *(_BYTE *)(v48 + 19) >> 2 )
  {
    v52 = 0;
    do
    {
      v52 += 4;
      *(_DWORD *)(v52 + v46 + (*(_WORD *)(v45 + 18) & 0x3F8) + 20) = *(__int32 *)((char *)v47
                                                                                + (*(_WORD *)(v48 + 18) & 0x3F8)
                                                                                + v52
                                                                                + 20);
    }
    while ( 4LL * (unsigned int)(v51 - 1) + 4 != v52 );
  }
  v13 = v36;
  *(_DWORD *)(v46 + 12) = v47[3];
LABEL_41:
  if ( v86 != v75 + 2 )
    free(v86);
  return v13;
}
