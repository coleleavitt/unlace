unsigned __int64 __fastcall sub_1DA8EB0(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __m128 si128, __m128 a6)
{
  __int64 v6; // r14
  unsigned int *v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdx
  bool v17; // zf
  bool v18; // r13
  int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  size_t v32; // r12
  _QWORD *v33; // r13
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  int v36; // eax
  int v37; // esi
  unsigned __int64 v38; // r12
  __int64 v39; // rax
  unsigned int v40; // r12d
  unsigned int v41; // r13d
  int v42; // r15d
  unsigned int v43; // ecx
  unsigned int v44; // eax
  __int64 v45; // rdi
  unsigned __int64 v46; // rax
  unsigned __int8 v47; // dl
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned int *v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  __int64 v53; // rcx
  int v54; // ecx
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rdi
  unsigned int v58; // eax
  __int64 v59; // r15
  __int64 *v60; // r13
  unsigned int v61; // r14d
  __int64 v62; // r13
  __int32 v63; // eax
  unsigned int v64; // eax
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rax
  _BYTE *v68; // rdi
  unsigned __int64 v69; // r15
  _DWORD *v70; // rdx
  size_t v71; // r12
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  _QWORD *v75; // r15
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  _BYTE *v78; // rdi
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  unsigned int v81; // [rsp+8h] [rbp-150h]
  unsigned __int64 v82; // [rsp+10h] [rbp-148h]
  _BYTE *v83; // [rsp+18h] [rbp-140h]
  __m128 v84; // [rsp+20h] [rbp-138h] BYREF
  __int64 *v85; // [rsp+30h] [rbp-128h]
  void **p_ptr; // [rsp+38h] [rbp-120h]
  __int64 v87; // [rsp+40h] [rbp-118h]
  __int64 v88; // [rsp+48h] [rbp-110h]
  __int64 v89; // [rsp+50h] [rbp-108h]
  bool v90; // [rsp+5Fh] [rbp-F9h]
  __int64 v91; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int *v92; // [rsp+68h] [rbp-F0h]
  __int64 v93; // [rsp+70h] [rbp-E8h] BYREF
  const __m128i *v94; // [rsp+78h] [rbp-E0h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v96; // [rsp+88h] [rbp-D0h]
  char v97; // [rsp+90h] [rbp-C8h] BYREF
  void *v98; // [rsp+B0h] [rbp-A8h]
  __int64 v99; // [rsp+B8h] [rbp-A0h]
  _BYTE v100[32]; // [rsp+C0h] [rbp-98h] BYREF
  void *v101; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v102; // [rsp+E8h] [rbp-70h]
  _BYTE v103[32]; // [rsp+F8h] [rbp-60h] BYREF
  int v104; // [rsp+118h] [rbp-40h]
  char v105; // [rsp+11Ch] [rbp-3Ch]

  v6 = a2;
  v92 = a4;
  v91 = a3;
  v8 = &a4[2 * ((4 * ((*(_BYTE *)(a3 + 19) >> 2) + 2 * ((*(_WORD *)(a3 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 2];
  v9 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v12 = sub_1D97F40(
          a1,
          a2,
          *(_QWORD *)(v91 + 24),
          (const __m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11,
          si128,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v12;
  sub_F6C520(*(_QWORD *)(v91 + 24));
  v16 = v91;
  p_ptr = &ptr;
  ptr = &v97;
  v17 = *(_QWORD *)(v91 + 24) == v15;
  v96 = 0x400000000LL;
  v18 = !v17;
  v19 = (*(_WORD *)(v91 + 18) >> 3) & 0x7F;
  if ( v19 )
  {
    v88 = a2;
    v89 = v15;
    v20 = 24;
    v87 = 8LL * (unsigned int)(v19 - 1) + 32;
    v85 = &v93;
    while ( 1 )
    {
      v21 = *(_QWORD *)&v92[(unsigned __int64)v20 / 4];
      v22 = *(_QWORD *)v21;
      if ( (*(_QWORD *)v21 & 0xF) == 0
        && (v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL), v90 = v22 != 0 && *(_BYTE *)(v23 + 16) == 38) )
      {
        v56 = *(_QWORD *)(v23 + 32);
        v57 = *a1;
        v98 = v100;
        v99 = 0x200000000LL;
        sub_1E4C960(v57, v56);
        v58 = sub_F6C520(*(_QWORD *)(v22 + 32));
        v59 = *(_QWORD *)(v22 + 32);
        v60 = v85;
        v93 = v59;
        v61 = *(_DWORD *)(v23 + 20);
        v94 = (const __m128i *)(((v21 != -12) + (v21 + 12 - (unsigned __int64)(v21 != -12)) / v58) * v58);
        sub_F6CE20(v85);
        sub_F6CCB0(v60, si128);
        v62 = *a1;
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v63 = *(_DWORD *)(*a1 + 12632);
        *(_DWORD *)(*a1 + 12632) = 0;
        v102 = (__m128i)si128;
        v84.m128_i32[0] = v63;
        v104 = 0;
        v105 = 0;
        v101 = v103;
        v64 = sub_F6C560(v59);
        if ( (unsigned __int64)v64 > v102.m128i_i64[0] )
          sub_1EA60C0(&v101);
        v67 = sub_1D97F40(a1, (__int64)&v101, v93, v94, v65, v66, si128, a6);
        if ( (v67 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v13 = 0;
          if ( v101 != v103 && v101 )
            operator delete[](v101);
          v68 = v98;
          *(_DWORD *)(v62 + 12632) = v84.m128_i32[0];
          if ( v68 != v100 )
            free(v68);
          goto LABEL_32;
        }
        v69 = sub_A781D0(*(_QWORD *)(*a1 + 248), v67, v61);
        sub_1EA6140(v88, v69, 4, 4);
        *v70 = *(_DWORD *)(v21 + 8);
        v71 = v102.m128i_i64[0] - v102.m128i_i64[1];
        v75 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v69, v102.m128i_i32[0] - v102.m128i_i32[2], v72, v73, v74);
        memcpy(v75 + 1, (char *)v101 + v102.m128i_i64[1], v71);
        v76 = (unsigned int)v96;
        v77 = (unsigned int)v96 + 1LL;
        if ( v77 > HIDWORD(v96) )
        {
          sub_2237220(p_ptr, p_ptr + 2, v77, 8);
          v76 = (unsigned int)v96;
        }
        *((_QWORD *)ptr + v76) = v75;
        LODWORD(v96) = v96 + 1;
        if ( v101 && v101 != v103 )
          operator delete[](v101);
        v78 = v98;
        *(_DWORD *)(v62 + 12632) = v84.m128_i32[0];
        if ( v78 != v100 )
          free(v78);
        v18 = v90;
      }
      else
      {
        v84.m128_u64[0] = v21 + 8;
        v104 = 0;
        v102 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v101 = v103;
        v105 = 0;
        v24 = sub_F6C560(v22);
        v27 = v84.m128_u64[0];
        if ( (unsigned __int64)v24 > v102.m128i_i64[0] )
        {
          sub_1EA60C0(&v101);
          v27 = v84.m128_u64[0];
        }
        v84.m128_u64[0] = v27;
        a6 = _mm_loadh_ps((const double *)v84.m128_u64);
        v84 = a6;
        v28 = sub_1D97F40(a1, (__int64)&v101, a6.m128_i64[0], (const __m128i *)a6.m128_u64[1], v25, v26, si128, a6);
        if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v13 = 0;
          if ( v101 && v101 != v103 )
            operator delete[](v101);
          goto LABEL_32;
        }
        if ( v28 == v22 )
        {
          v79 = (unsigned int)v96;
          v80 = (unsigned int)v96 + 1LL;
          if ( v80 > HIDWORD(v96) )
          {
            sub_2237220(p_ptr, p_ptr + 2, v80, 8);
            v79 = (unsigned int)v96;
          }
          *((_QWORD *)ptr + v79) = v21;
          LODWORD(v96) = v96 + 1;
          if ( v101 && v101 != v103 )
            operator delete[](v101);
        }
        else
        {
          v32 = v102.m128i_i64[0] - v102.m128i_i64[1];
          v33 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v28, v102.m128i_i32[0] - v102.m128i_i32[2], v29, v30, v31);
          memcpy(v33 + 1, (char *)v101 + v102.m128i_i64[1], v32);
          v34 = (unsigned int)v96;
          v35 = (unsigned int)v96 + 1LL;
          if ( v35 > HIDWORD(v96) )
          {
            sub_2237220(p_ptr, p_ptr + 2, v35, 8);
            v34 = (unsigned int)v96;
          }
          *((_QWORD *)ptr + v34) = v33;
          LODWORD(v96) = v96 + 1;
          if ( v101 && v101 != v103 )
            operator delete[](v101);
          v18 = 1;
        }
      }
      v20 += 8;
      if ( v87 == v20 )
      {
        v16 = v91;
        v15 = v89;
        v6 = v88;
        LOWORD(v36) = (*(_WORD *)(v91 + 18) >> 3) & 0x7F;
        goto LABEL_20;
      }
    }
  }
  LOBYTE(v36) = 0;
LABEL_20:
  v36 = (unsigned __int8)v36;
  v37 = *(_BYTE *)(v16 + 19) >> 2;
  if ( *(_DWORD *)(*a1 + 12632) || (v38 = v16, v18) )
  {
    v39 = 2LL * (unsigned __int8)v36;
    v87 = *(_BYTE *)(v16 + 19) >> 2;
    v40 = v92[2];
    v41 = v92[3];
    v42 = v92[1];
    v43 = *v92;
    v84.m128_u64[0] = (unsigned __int64)&v92[v39 + 6];
    v83 = (_BYTE *)(v16 + v39 * 4 + 48);
    v81 = v43;
    v82 = (unsigned int)v96;
    v85 = (__int64 *)ptr;
    v44 = sub_F6CCB0(&v91, si128);
    v45 = *a1;
    v13 = 0;
    v46 = sub_1A8CD60(
            *(__int64 **)(v45 + 736),
            v15,
            v44,
            v81,
            (__int64)v85,
            v82,
            si128,
            v42,
            v40,
            v83,
            v87,
            v84.m128_i32[0],
            v87,
            v41,
            1,
            1u);
    v38 = v46;
    if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_32;
    v47 = *(_BYTE *)(v46 + 19) >> 2;
    v36 = (*(_WORD *)(v46 + 18) >> 3) & 0x7F;
    v37 = v47;
  }
  v48 = sub_1EA6140(v6, v38, 8 * ((unsigned int)(4 * (v37 + 2 * v36) + 23) >> 3) + 8, 8);
  v50 = v92;
  v51 = v91;
  *(_BYTE *)(v49 + 16) = 1;
  *(_DWORD *)v49 = *v50;
  if ( ((*(_WORD *)(v51 + 18) >> 3) & 0x7F) != 0 )
  {
    v52 = 8LL * (((*(_WORD *)(v51 + 18) >> 3) & 0x7Fu) - 1) + 8;
    v53 = 0;
    do
    {
      *(_QWORD *)(v49 + v53 + 24) = *(_QWORD *)((char *)ptr + v53);
      v53 += 8;
    }
    while ( v52 != v53 );
    v51 = v91;
    v50 = v92;
  }
  *(_DWORD *)(v49 + 4) = v50[1];
  *(_DWORD *)(v49 + 8) = v50[2];
  v54 = *(_BYTE *)(v51 + 19) >> 2;
  if ( *(_BYTE *)(v51 + 19) >> 2 )
  {
    v55 = 0;
    do
    {
      v55 += 4;
      *(_DWORD *)(v55 + v49 + (*(_WORD *)(v48 + 18) & 0x3F8) + 20) = *(unsigned int *)((char *)v50
                                                                                     + (*(_WORD *)(v51 + 18) & 0x3F8)
                                                                                     + v55
                                                                                     + 20);
    }
    while ( v55 != 4LL * (unsigned int)(v54 - 1) + 4 );
  }
  v13 = v38;
  *(_DWORD *)(v49 + 12) = v50[3];
LABEL_32:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v13;
}
