__int64 __fastcall sub_1DECE10(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rdi
  int v6; // eax
  char v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbp
  unsigned int v19; // eax
  __int64 v20; // rdi
  unsigned int v21; // eax
  void *v22; // r13
  __int64 v23; // r12
  __int64 v24; // rbp
  unsigned int v25; // eax
  __int64 v26; // r13
  __m128i si128; // xmm2
  int v28; // r15d
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int32 v33; // ecx
  __int64 v34; // rbp
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rbp
  int v39; // ebp
  __int64 v40; // r15
  __int64 v41; // rdi
  __int32 v42; // eax
  unsigned int v43; // eax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  __int64 v50; // r13
  unsigned int v51; // eax
  __int64 v52; // rax
  _DWORD *v53; // rdx
  size_t v54; // r13
  __int64 v55; // rax
  _QWORD *v56; // r8
  unsigned __int64 v57; // rdx
  __int64 v58; // r15
  __int32 v59; // eax
  unsigned int v60; // eax
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // ecx
  __int64 v69; // rbp
  unsigned int v70; // eax
  __int64 v71; // rax
  __int64 v72; // r8
  _DWORD *v73; // rdx
  size_t v74; // rbp
  __int64 v75; // rcx
  __int64 v76; // r9
  _QWORD *v77; // r14
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned __int64 v82; // rdx
  void *v83; // rdx
  void **v84; // rdi
  __int64 v85; // rax
  _DWORD *v86; // rdx
  size_t v87; // r14
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  _QWORD *v91; // rbp
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  size_t v94; // rbp
  _QWORD *v95; // r13
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  __int64 v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // r9
  __m128 v102; // [rsp+0h] [rbp-178h] BYREF
  _QWORD *v103; // [rsp+10h] [rbp-168h]
  __int64 *v104; // [rsp+18h] [rbp-160h]
  __int64 v105; // [rsp+20h] [rbp-158h]
  __int64 v106; // [rsp+28h] [rbp-150h]
  void **v107; // [rsp+30h] [rbp-148h]
  __int64 v108; // [rsp+38h] [rbp-140h]
  void **p_ptr; // [rsp+40h] [rbp-138h]
  __int64 v110; // [rsp+48h] [rbp-130h]
  char v111; // [rsp+5Ah] [rbp-11Eh] BYREF
  char v112; // [rsp+5Bh] [rbp-11Dh] BYREF
  unsigned int v113; // [rsp+5Ch] [rbp-11Ch] BYREF
  __int64 v114; // [rsp+60h] [rbp-118h] BYREF
  const __m128i *v115; // [rsp+68h] [rbp-110h]
  void *v116; // [rsp+70h] [rbp-108h] BYREF
  __int64 v117; // [rsp+78h] [rbp-100h]
  _BYTE v118[32]; // [rsp+80h] [rbp-F8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v120; // [rsp+A8h] [rbp-D0h]
  __int64 v121; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v122; // [rsp+D8h] [rbp-A0h] BYREF
  __int64 v123; // [rsp+E8h] [rbp-90h]
  void *v124; // [rsp+100h] [rbp-78h] BYREF
  __m128i v125; // [rsp+108h] [rbp-70h]
  _BYTE v126[32]; // [rsp+118h] [rbp-60h] BYREF
  int v127; // [rsp+138h] [rbp-40h]
  char v128; // [rsp+13Ch] [rbp-3Ch]

  v5 = (void **)v118;
  v108 = a2;
  v107 = &v116;
  v117 = 0x400000000LL;
  v6 = *(_DWORD *)(a2 + 4);
  v116 = v118;
  if ( v6 )
  {
    v106 = 0;
    v7 = 0;
    v110 = 8LL * (unsigned int)(v6 - 1) + 8;
    while ( 1 )
    {
      v102.m128_u64[0] = *(_QWORD *)v108;
      v8 = *(_QWORD *)(v106 + v108 + 56LL * ((((unsigned __int8)v102.m128_i8[3] >> 3) ^ 1) & 1) + 24);
      v9 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && v9 )
      {
        v19 = sub_F6C520(*(_QWORD *)(v9 + 32));
        v114 = *(_QWORD *)(v9 + 32);
        v20 = *a1;
        p_ptr = &ptr;
        ptr = &v121;
        v115 = (const __m128i *)(v19 * ((v8 + 12 - (unsigned __int64)(v8 != -12)) / v19 + (v8 != -12)));
        v120 = 0x200000000LL;
        sub_1E4C9B0(v20, v114, v115, &ptr);
        v21 = *(_DWORD *)(v9 + 20);
        v111 = 1;
        v22 = ptr;
        v23 = (unsigned int)v120;
        v112 = 0;
        v113 = v21;
        v104 = &v114;
        v24 = (unsigned int)sub_F6CE20(&v114);
        v25 = sub_F6CCB0(&v114, a3);
        if ( sub_1DDBB60(
               a1,
               *(_DWORD *)(v8 + 8),
               (v24 << 32) | v25,
               (__int64)v22,
               v23,
               (__int64)&v111,
               a3,
               a4,
               (__int64)&v112,
               (__int64)&v113) )
        {
          v18 = 1;
          goto LABEL_22;
        }
        if ( !v111 )
        {
          v26 = *a1;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
          v28 = *(_DWORD *)(*a1 + 12632);
          *(_DWORD *)(*a1 + 12632) = 0;
          v124 = v126;
          v125 = si128;
          v127 = 0;
          v128 = 0;
          v29 = sub_F6C560(*(_QWORD *)v8);
          if ( (unsigned __int64)v29 > v125.m128i_i64[0] )
            sub_1EA60C0(&v124);
          v32 = sub_1DCE820(a1, (__int64)&v124, v114, v115, a3, a4, v30, v31);
          if ( (v32 & 0xFFFFFFFFFFFFFFF0LL) == 0
            || (v33 = *(_DWORD *)(v8 + 8),
                v103 = (_QWORD *)v32,
                v102.m128_i32[0] = v33,
                v34 = (unsigned int)sub_F6CE20(v104),
                v35 = sub_F6CCB0(v104, a3),
                v36 = sub_1E503F0(*a1, v103, (v34 << 32) | v35, v102.m128_u32[0], v113),
                v37 = v36,
                (v36 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
          {
            v18 = 1;
            if ( v124 != v126 && v124 )
              operator delete[](v124);
            *(_DWORD *)(v26 + 12632) = v28;
            goto LABEL_22;
          }
          sub_1EA6140(&v124, v36, 4, 4);
          *v86 = *(_DWORD *)(v8 + 8);
          v87 = v125.m128i_i64[0] - v125.m128i_i64[1];
          v91 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v37, v125.m128i_i32[0] - v125.m128i_i32[2], v88, v89, v90);
          memcpy(v91 + 1, (char *)v124 + v125.m128i_i64[1], v87);
          v92 = (unsigned int)v117;
          v93 = (unsigned int)v117 + 1LL;
          if ( v93 > HIDWORD(v117) )
          {
            sub_2237220(v107, v107 + 2, v93, 8);
            v92 = (unsigned int)v117;
          }
          *((_QWORD *)v116 + v92) = v91;
          LODWORD(v117) = v117 + 1;
          if ( v124 != v126 && v124 )
            operator delete[](v124);
          *(_DWORD *)(v26 + 12632) = v28;
LABEL_70:
          v84 = (void **)ptr;
          v7 = 1;
          if ( ptr == p_ptr + 2 )
            goto LABEL_53;
LABEL_52:
          free(v84);
          goto LABEL_53;
        }
        if ( v113 != 1 )
        {
          v39 = 0;
          while ( 1 )
          {
            v40 = *a1;
            ++v39;
            v41 = v114;
            a3 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
            v42 = *(_DWORD *)(*a1 + 12632);
            *(_DWORD *)(*a1 + 12632) = v39;
            v125 = (__m128i)a3;
            v102.m128_i32[0] = v42;
            v124 = v126;
            v127 = 0;
            v128 = 0;
            v43 = sub_F6C560(v41);
            if ( (unsigned __int64)v43 > v125.m128i_i64[0] )
              sub_1EA60C0(&v124);
            v48 = sub_1DCE820(a1, (__int64)&v124, v114, v115, a3, a4, v44, v45);
            if ( (v48 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
              break;
            if ( (*(_BYTE *)(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) != 0 )
            {
              v49 = *(_DWORD *)(v8 + 8);
              v105 = v48;
              LODWORD(v103) = v49;
              v50 = (unsigned int)sub_F6CE20(v104);
              v51 = sub_F6CCB0(v104, a3);
              v52 = sub_1E503F0(*a1, v105, (v50 << 32) | v51, (unsigned int)v103, v113);
              if ( (v52 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
                break;
              v103 = (_QWORD *)v52;
              sub_1EA6140(&v124, v52, 4, 4);
              v48 = (__int64)v103;
              *v53 = *(_DWORD *)(v8 + 8);
            }
            v54 = v125.m128i_i64[0] - v125.m128i_i64[1];
            v103 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v48, v125.m128i_i32[0] - v125.m128i_i32[2], v46, v47, v48);
            memcpy(v103 + 1, (char *)v124 + v125.m128i_i64[1], v54);
            v55 = (unsigned int)v117;
            v56 = v103;
            v57 = (unsigned int)v117 + 1LL;
            if ( v57 > HIDWORD(v117) )
            {
              sub_2237220(v107, v107 + 2, v57, 8);
              v55 = (unsigned int)v117;
              v56 = v103;
            }
            *((_QWORD *)v116 + v55) = v56;
            LODWORD(v117) = v117 + 1;
            if ( v124 == v126 || !v124 )
            {
              *(_DWORD *)(v40 + 12632) = v102.m128_i32[0];
              if ( v113 - 1 == v39 )
                goto LABEL_41;
            }
            else
            {
              operator delete[](v124);
              *(_DWORD *)(v40 + 12632) = v102.m128_i32[0];
              if ( v39 == v113 - 1 )
                goto LABEL_41;
            }
          }
          v18 = 1;
          if ( v124 != v126 && v124 )
            operator delete[](v124);
          *(_DWORD *)(v40 + 12632) = v102.m128_i32[0];
LABEL_22:
          if ( ptr != p_ptr + 2 )
            free(ptr);
LABEL_24:
          v5 = (void **)v116;
          goto LABEL_25;
        }
LABEL_41:
        v7 = v112;
        if ( !v112 )
          goto LABEL_70;
        v58 = *a1;
        v59 = *(_DWORD *)(*a1 + 12632);
        *(_DWORD *)(*a1 + 12632) = 0;
        v102.m128_i32[0] = v59;
        sub_1DB8420((__m128i *)&v122, a1);
        v127 = 0;
        v124 = v126;
        v125 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v128 = 0;
        v60 = sub_F6C560(*(_QWORD *)v8);
        if ( (unsigned __int64)v60 > v125.m128i_i64[0] )
          sub_1EA60C0(&v124);
        v63 = sub_1DCE820(a1, (__int64)&v124, v114, v115, a3, a4, v61, v62);
        if ( (v63 & 0xFFFFFFFFFFFFFFF0LL) == 0
          || (v68 = *(_DWORD *)(v8 + 8),
              v105 = v63,
              LODWORD(v103) = v68,
              v69 = (unsigned int)sub_F6CE20(v104),
              v70 = sub_F6CCB0(v104, a3),
              v71 = sub_1E503F0(*a1, v105, (v69 << 32) | v70, (unsigned int)v103, v113),
              (v71 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v18 = 1;
          if ( v124 && v124 != v126 )
            operator delete[](v124);
          sub_1DB8040((__int64)a1, a1 + 4, v64, v65, v66, v67, v122, v123);
          *(_DWORD *)(v58 + 12632) = v102.m128_i32[0];
          goto LABEL_22;
        }
        v103 = (_QWORD *)v71;
        sub_1EA6140(&v124, v71, 4, 4);
        v72 = (__int64)v103;
        *v73 = *(_DWORD *)(v8 + 8);
        v74 = v125.m128i_i64[0] - v125.m128i_i64[1];
        v77 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v72, v125.m128i_i32[0] - v125.m128i_i32[2], v75, v72, v76);
        memcpy(v77 + 1, (char *)v124 + v125.m128i_i64[1], v74);
        v80 = (unsigned int)v117;
        v81 = HIDWORD(v117);
        v82 = (unsigned int)v117 + 1LL;
        if ( v82 > HIDWORD(v117) )
        {
          sub_2237220(v107, v107 + 2, v82, 8);
          v80 = (unsigned int)v117;
        }
        v83 = v116;
        *((_QWORD *)v116 + v80) = v77;
        LODWORD(v117) = v117 + 1;
        if ( v124 != v126 && v124 )
          operator delete[](v124);
        sub_1DB8040((__int64)a1, a1 + 4, (__int64)v83, v81, v78, v79, v122, v123);
        v84 = (void **)ptr;
        *(_DWORD *)(v58 + 12632) = v102.m128_i32[0];
        if ( v84 != p_ptr + 2 )
          goto LABEL_52;
      }
      else
      {
        v10 = *(_QWORD *)v8;
        v127 = 0;
        v128 = 0;
        v124 = v126;
        v125 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v11 = sub_F6C560(v10);
        if ( (unsigned __int64)v11 > v125.m128i_i64[0] )
          sub_1EA60C0(&v124);
        v102.m128_u64[0] = v8 + 8;
        a4 = _mm_loadh_ps((const double *)v102.m128_u64);
        v102 = a4;
        v14 = sub_1DCE820(a1, (__int64)&v124, a4.m128_i64[0], (const __m128i *)a4.m128_u64[1], a3, a4, v12, v13);
        if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v18 = 1;
          if ( v124 != v126 && v124 )
            operator delete[](v124);
          goto LABEL_24;
        }
        if ( v14 == *(_QWORD *)v8 )
        {
          v98 = (unsigned int)v117;
          v99 = (unsigned int)v117 + 1LL;
          if ( v99 > HIDWORD(v117) )
          {
            sub_2237220(v107, v107 + 2, v99, 8);
            v98 = (unsigned int)v117;
          }
          *((_QWORD *)v116 + v98) = v8;
          LODWORD(v117) = v117 + 1;
        }
        else
        {
          v94 = v125.m128i_i64[0] - v125.m128i_i64[1];
          v95 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v14, v125.m128i_i32[0] - v125.m128i_i32[2], v15, v16, v17);
          memcpy(v95 + 1, (char *)v124 + v125.m128i_i64[1], v94);
          v96 = (unsigned int)v117;
          v97 = (unsigned int)v117 + 1LL;
          if ( v97 > HIDWORD(v117) )
          {
            sub_2237220(v107, v107 + 2, v97, 8);
            v96 = (unsigned int)v117;
          }
          *((_QWORD *)v116 + v96) = v95;
          v7 = 1;
          LODWORD(v117) = v117 + 1;
        }
        if ( v124 && v124 != v126 )
          operator delete[](v124);
      }
LABEL_53:
      v106 += 8;
      if ( v110 == v106 )
      {
        v5 = (void **)v116;
        goto LABEL_55;
      }
    }
  }
  v7 = 0;
LABEL_55:
  v85 = *a1;
  if ( *(_DWORD *)(*a1 + 12632) || v7 )
  {
    v100 = *(unsigned int *)(v108 + 16);
    v101 = *(unsigned int *)(v108 + 20);
    v102.m128_i16[0] = *(_WORD *)(v108 + 2);
    v18 = sub_1E8F560(
            v85,
            (unsigned __int8)((unsigned __int16)v102.m128_i16[0] >> 3),
            v100,
            v5,
            (unsigned int)v117,
            v101);
    goto LABEL_24;
  }
  v18 = v108;
LABEL_25:
  if ( v5 != v107 + 2 )
    free(v5);
  return v18;
}
