__int64 __fastcall sub_1777040(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 si128)
{
  __int64 v5; // r14
  _DWORD *v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  bool v16; // zf
  bool v17; // r13
  int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // r14
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  size_t v31; // r12
  _QWORD *v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  int v35; // eax
  int v36; // esi
  __int64 v37; // r12
  __int64 v38; // rax
  int v39; // r12d
  int v40; // r13d
  int v41; // r15d
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rdi
  __int64 v45; // rax
  unsigned __int8 v46; // dl
  __int64 v47; // rax
  __int64 v48; // rdx
  _DWORD *v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v52; // rcx
  int v53; // ecx
  __int64 v54; // rsi
  __int64 v55; // rsi
  __int64 v56; // rdi
  unsigned int v57; // eax
  __int64 v58; // r15
  __int64 *v59; // r13
  unsigned int v60; // r14d
  __int64 v61; // r13
  __int32 v62; // eax
  unsigned int v63; // eax
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // rax
  _BYTE *v67; // rdi
  unsigned __int64 v68; // r15
  _DWORD *v69; // rdx
  size_t v70; // r12
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // r15
  __int64 v75; // rax
  unsigned __int64 v76; // rdx
  _BYTE *v77; // rdi
  int v78; // [rsp+8h] [rbp-150h]
  int v79; // [rsp+10h] [rbp-148h]
  __int64 v80; // [rsp+18h] [rbp-140h]
  __m128 v81; // [rsp+20h] [rbp-138h] BYREF
  __int64 *v82; // [rsp+30h] [rbp-128h]
  void **p_ptr; // [rsp+38h] [rbp-120h]
  __int64 v84; // [rsp+40h] [rbp-118h]
  __int64 v85; // [rsp+48h] [rbp-110h]
  unsigned __int64 v86; // [rsp+50h] [rbp-108h]
  bool v87; // [rsp+5Fh] [rbp-F9h]
  __int64 v88; // [rsp+60h] [rbp-F8h] BYREF
  _DWORD *v89; // [rsp+68h] [rbp-F0h]
  __int64 v90; // [rsp+70h] [rbp-E8h] BYREF
  const __m128i *v91; // [rsp+78h] [rbp-E0h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v93; // [rsp+88h] [rbp-D0h]
  char v94; // [rsp+90h] [rbp-C8h] BYREF
  void *v95; // [rsp+B0h] [rbp-A8h]
  __int64 v96; // [rsp+B8h] [rbp-A0h]
  _BYTE v97[32]; // [rsp+C0h] [rbp-98h] BYREF
  void *v98; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v99; // [rsp+E8h] [rbp-70h]
  _BYTE v100[32]; // [rsp+F8h] [rbp-60h] BYREF
  int v101; // [rsp+118h] [rbp-40h]
  char v102; // [rsp+11Ch] [rbp-3Ch]

  v5 = a2;
  v89 = a4;
  v88 = a3;
  v7 = &a4[2 * ((4 * ((*(_BYTE *)(a3 + 19) >> 2) + 2 * ((*(_WORD *)(a3 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 2];
  v8 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v11 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v88 + 24),
          (const __m128i *)(v8 * (((unsigned __int64)v7 - (v7 != nullptr)) / v8 + (v7 != nullptr))),
          v9,
          v10);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = v11;
  sub_F6C520(*(_QWORD *)(v88 + 24));
  v15 = v88;
  p_ptr = &ptr;
  ptr = &v94;
  v16 = *(_QWORD *)(v88 + 24) == v14;
  v93 = 0x400000000LL;
  v17 = !v16;
  v18 = (*(_WORD *)(v88 + 18) >> 3) & 0x7F;
  if ( v18 )
  {
    v85 = a2;
    v86 = v14;
    v19 = 24;
    v84 = 8LL * (unsigned int)(v18 - 1) + 32;
    v82 = &v90;
    while ( 1 )
    {
      v20 = *(_QWORD *)&v89[(unsigned __int64)v19 / 4];
      v21 = *(_QWORD *)v20;
      if ( (*(_QWORD *)v20 & 0xF) == 0
        && (v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL), v87 = v21 != 0 && *(_BYTE *)(v22 + 16) == 38) )
      {
        v55 = *(_QWORD *)(v22 + 32);
        v56 = *a1;
        v95 = v97;
        v96 = 0x200000000LL;
        sub_1E4C960(v56, v55);
        v57 = sub_F6C520(*(_QWORD *)(v21 + 32));
        v58 = *(_QWORD *)(v21 + 32);
        v59 = v82;
        v90 = v58;
        v60 = *(_DWORD *)(v22 + 20);
        v91 = (const __m128i *)(((v20 != -12) + (v20 + 12 - (unsigned __int64)(v20 != -12)) / v57) * v57);
        sub_F6CE20(v82);
        sub_F6CCB0(v59, si128);
        v61 = *a1;
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v62 = *(_DWORD *)(*a1 + 12632LL);
        *(_DWORD *)(*a1 + 12632LL) = 0;
        v99 = (__m128i)si128;
        v81.m128_i32[0] = v62;
        v101 = 0;
        v102 = 0;
        v98 = v100;
        v63 = sub_F6C560(v58);
        if ( (unsigned __int64)v63 > v99.m128i_i64[0] )
          sub_1EA60C0(&v98);
        v66 = sub_17687F0(a1, (__int64)&v98, v90, v91, v64, v65);
        if ( (v66 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v12 = 0;
          if ( v98 != v100 && v98 )
            operator delete[](v98);
          v67 = v95;
          *(_DWORD *)(v61 + 12632) = v81.m128_i32[0];
          if ( v67 != v97 )
            free(v67);
          goto LABEL_32;
        }
        v68 = sub_A781D0(*(_QWORD *)(*a1 + 248LL), v66, v60);
        sub_1EA6140(v85, v68, 4, 4);
        *v69 = *(_DWORD *)(v20 + 8);
        v70 = v99.m128i_i64[0] - v99.m128i_i64[1];
        v74 = sub_A81BC0(*(_QWORD **)(*a1 + 248LL), v68, v99.m128i_i32[0] - v99.m128i_i32[2], v71, v72, v73);
        memcpy(v74 + 1, (char *)v98 + v99.m128i_i64[1], v70);
        v75 = (unsigned int)v93;
        v76 = (unsigned int)v93 + 1LL;
        if ( v76 > HIDWORD(v93) )
        {
          sub_2237220(p_ptr, p_ptr + 2, v76, 8);
          v75 = (unsigned int)v93;
        }
        *((_QWORD *)ptr + v75) = v74;
        LODWORD(v93) = v93 + 1;
        if ( v98 && v98 != v100 )
          operator delete[](v98);
        v77 = v95;
        *(_DWORD *)(v61 + 12632) = v81.m128_i32[0];
        if ( v77 != v97 )
          free(v77);
        v17 = v87;
      }
      else
      {
        v81.m128_u64[0] = v20 + 8;
        v101 = 0;
        v99 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v98 = v100;
        v102 = 0;
        v23 = sub_F6C560(v21);
        v26 = v81.m128_u64[0];
        if ( (unsigned __int64)v23 > v99.m128i_i64[0] )
        {
          sub_1EA60C0(&v98);
          v26 = v81.m128_u64[0];
        }
        v81.m128_u64[0] = v26;
        v81 = _mm_loadh_ps((const double *)v81.m128_u64);
        v27 = sub_17687F0(a1, (__int64)&v98, v81.m128_i64[0], (const __m128i *)v81.m128_u64[1], v24, v25);
        if ( (v27 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v12 = 0;
          if ( v98 && v98 != v100 )
            operator delete[](v98);
          goto LABEL_32;
        }
        if ( v27 == v21 )
        {
          sub_1745810((__int64)p_ptr, v20);
          if ( v98 && v98 != v100 )
            operator delete[](v98);
        }
        else
        {
          v31 = v99.m128i_i64[0] - v99.m128i_i64[1];
          v32 = sub_A81BC0(*(_QWORD **)(*a1 + 248LL), v27, v99.m128i_i32[0] - v99.m128i_i32[2], v28, v29, v30);
          memcpy(v32 + 1, (char *)v98 + v99.m128i_i64[1], v31);
          v33 = (unsigned int)v93;
          v34 = (unsigned int)v93 + 1LL;
          if ( v34 > HIDWORD(v93) )
          {
            sub_2237220(p_ptr, p_ptr + 2, v34, 8);
            v33 = (unsigned int)v93;
          }
          *((_QWORD *)ptr + v33) = v32;
          LODWORD(v93) = v93 + 1;
          if ( v98 && v98 != v100 )
            operator delete[](v98);
          v17 = 1;
        }
      }
      v19 += 8;
      if ( v84 == v19 )
      {
        v15 = v88;
        LODWORD(v14) = v86;
        v5 = v85;
        LOWORD(v35) = (*(_WORD *)(v88 + 18) >> 3) & 0x7F;
        goto LABEL_20;
      }
    }
  }
  LOBYTE(v35) = 0;
LABEL_20:
  v35 = (unsigned __int8)v35;
  v36 = *(_BYTE *)(v15 + 19) >> 2;
  if ( *(_DWORD *)(*a1 + 12632LL) || (v37 = v15, v17) )
  {
    v38 = 2LL * (unsigned __int8)v35;
    v84 = *(_BYTE *)(v15 + 19) >> 2;
    v39 = v89[2];
    v40 = v89[3];
    v41 = v89[1];
    v42 = *v89;
    v81.m128_u64[0] = (unsigned __int64)&v89[v38 + 6];
    v80 = v15 + v38 * 4 + 48;
    v78 = v42;
    v79 = v93;
    v82 = (__int64 *)ptr;
    v43 = sub_F6CCB0(&v88, si128);
    v44 = *a1;
    v12 = 0;
    v45 = sub_1A8CD60(
            *(_QWORD *)(v44 + 736),
            v14,
            v43,
            v78,
            (_DWORD)v82,
            v79,
            v41,
            v39,
            v80,
            v84,
            v81.m128_i32[0],
            v84,
            v40,
            1,
            1);
    v37 = v45;
    if ( (v45 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_32;
    v46 = *(_BYTE *)(v45 + 19) >> 2;
    v35 = (*(_WORD *)(v45 + 18) >> 3) & 0x7F;
    v36 = v46;
  }
  v47 = sub_1EA6140(v5, v37, 8 * ((unsigned int)(4 * (v36 + 2 * v35) + 23) >> 3) + 8, 8);
  v49 = v89;
  v50 = v88;
  *(_BYTE *)(v48 + 16) = 1;
  *(_DWORD *)v48 = *v49;
  if ( ((*(_WORD *)(v50 + 18) >> 3) & 0x7F) != 0 )
  {
    v51 = 8LL * (((*(_WORD *)(v50 + 18) >> 3) & 0x7Fu) - 1) + 8;
    v52 = 0;
    do
    {
      *(_QWORD *)(v48 + v52 + 24) = *(_QWORD *)((char *)ptr + v52);
      v52 += 8;
    }
    while ( v51 != v52 );
    v50 = v88;
    v49 = v89;
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
      *(_DWORD *)(v54 + v48 + (*(_WORD *)(v47 + 18) & 0x3F8) + 20) = *(_DWORD *)((char *)v49
                                                                               + (*(_WORD *)(v50 + 18) & 0x3F8)
                                                                               + v54
                                                                               + 20);
    }
    while ( v54 != 4LL * (unsigned int)(v53 - 1) + 4 );
  }
  v12 = v37;
  *(_DWORD *)(v48 + 12) = v49[3];
LABEL_32:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v12;
}
