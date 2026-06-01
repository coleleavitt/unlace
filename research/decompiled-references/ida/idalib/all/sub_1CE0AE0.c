__int64 __fastcall sub_1CE0AE0(
        __int64 a1,
        unsigned __int64 a2,
        const __m128i *a3,
        __int32 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        unsigned int a13,
        char a14,
        char a15,
        int a16)
{
  __int64 v16; // r10
  __int64 v18; // rcx
  char v19; // r13
  __int64 v20; // r13
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __m128i *v27; // rdx
  _QWORD *v28; // rsi
  __m128i *v29; // r13
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __m128i v37; // xmm3
  __int64 v38; // rcx
  __m128i v39; // xmm1
  bool v40; // zf
  __int64 v41; // rax
  __m128i v42; // xmm2
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __m128i v45; // xmm0
  int v46; // edx
  __int64 v47; // rcx
  size_t v48; // r13
  _QWORD *v49; // r15
  __int64 v50; // rax
  void *v51; // rdi
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // r14
  __m128i v63; // xmm1
  __int64 v64; // rax
  __m128i *v65; // rdx
  __m128i v66; // xmm0
  int v67; // ecx
  __int64 v68; // rax
  __int128 *v69; // rdx
  __int64 v70; // r13
  __int64 v71; // rdx
  _DWORD *v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r14
  __int64 v76; // rcx
  _QWORD *v77; // rsi
  __int64 v78; // rdx
  _QWORD *v79; // rax
  __int64 v80; // rax
  bool v81; // al
  __int64 *v82; // rsi
  _QWORD *v83; // r13
  __int64 v84; // r10
  __int64 v85; // r10
  __int64 v86; // rax
  __int64 v87; // r10
  __int64 v88; // r10
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // r10
  __int64 v95; // r12
  void *v96; // rax
  _QWORD *v97; // rax
  size_t v98; // rax
  char v99; // al
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // r10
  __int64 v106; // r14
  void *v107; // rax
  _QWORD *v108; // rax
  __m128i v109; // [rsp+0h] [rbp-248h] BYREF
  __int64 v110; // [rsp+10h] [rbp-238h]
  __int64 v111; // [rsp+18h] [rbp-230h] BYREF
  int v112; // [rsp+20h] [rbp-228h]
  void *v113; // [rsp+28h] [rbp-220h] BYREF
  __int128 v114; // [rsp+30h] [rbp-218h] BYREF
  void *v115[2]; // [rsp+40h] [rbp-208h]
  __m128i v116; // [rsp+50h] [rbp-1F8h]
  void *v117; // [rsp+60h] [rbp-1E8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-1E0h]
  char v119; // [rsp+78h] [rbp-1D0h] BYREF
  __int64 v120; // [rsp+80h] [rbp-1C8h] BYREF
  int v121; // [rsp+98h] [rbp-1B0h]
  char v122; // [rsp+9Ch] [rbp-1ACh]
  __int64 v123; // [rsp+C8h] [rbp-180h]
  int v124; // [rsp+D0h] [rbp-178h]
  char v125; // [rsp+D8h] [rbp-170h]
  __int64 v126; // [rsp+E0h] [rbp-168h]
  void *ptr; // [rsp+F0h] [rbp-158h] BYREF
  __m128i v128; // [rsp+F8h] [rbp-150h] BYREF
  void *v129; // [rsp+108h] [rbp-140h]
  unsigned __int8 *v130; // [rsp+110h] [rbp-138h] BYREF
  _QWORD v131[9]; // [rsp+118h] [rbp-130h] BYREF
  int v132; // [rsp+160h] [rbp-E8h]
  char v133; // [rsp+168h] [rbp-E0h]
  __int64 v134; // [rsp+170h] [rbp-D8h]
  unsigned int v135; // [rsp+200h] [rbp-48h]
  unsigned int v136; // [rsp+204h] [rbp-44h]

  v16 = a5;
  v109.m128i_i32[0] = a4;
  v18 = a3->m128i_u32[0];
  v111 = a6;
  v19 = a14;
  if ( !(_DWORD)v18 || !a3->m128i_i32[1] )
  {
    if ( a14 || a15 || !a3->m128i_i64[1] )
      goto LABEL_6;
LABEL_25:
    v110 = a5;
    v52 = sub_16A2930(a1, (__int64)a3, 0, v18, a5, a6);
    v16 = v110;
    if ( v52 )
    {
      if ( (*(_BYTE *)(v52 + 8) & 0x7Fu) - 59 <= 2 && v52 != 64 )
      {
        v57 = *(_QWORD *)(v52 - 24);
        v58 = v57 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v57 & 7) != 0 )
          v58 = 0;
        if ( v111 == v58 )
        {
          sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), a9, v109.m128i_i32[0] == 0 ? 4737 : 5641, 0);
          v59 = sub_17AE460((__int64)&ptr, &v111);
          LODWORD(v114) = 0;
          v60 = sub_1587D10(v59, (int *)&v114);
          LODWORD(v117) = 1;
          sub_1587D10(v60, (int *)&v117);
          sub_15F7200(&ptr);
          v16 = v110;
        }
      }
      goto LABEL_6;
    }
    v81 = sub_169D3A0(a1, (__int64)a3, v53, v54, v55, v56);
    v16 = v110;
    if ( !v81 )
      goto LABEL_6;
    v82 = (__int64 *)(a1 + 8);
    v83 = sub_E918E0(*(_QWORD **)(a1 + 248), a3->m128i_i64[1], v111);
    if ( a16 != 1 )
    {
      sub_168B9F0((__int64)&ptr, v82, a3->m128i_i32[0], 0x14D1u, 0);
      v84 = v110;
      if ( v133 )
      {
        sub_AE9DF0(&v130, (__int64)v83, 0xBu);
        v84 = v110;
      }
      else if ( BYTE4(v134) )
      {
        v89 = sub_168B9E0(&ptr);
        v94 = v110;
        v95 = v89;
        v96 = (void *)v128.m128i_i64[1];
        if ( v128.m128i_i64[1] )
        {
          v96 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v128.m128i_i64[1] + 32LL))(v128.m128i_i64[1]);
          v94 = v110;
        }
        v110 = v94;
        v117 = v96;
        v97 = sub_1587BC0(v95, (__int64 *)&v117, v90, v91, v92, v93);
        sub_AE9DF0((unsigned __int8 **)(*v97 + 32LL * (unsigned int)v134 + 8), (__int64)v83, 0xBu);
        v84 = v110;
      }
      v110 = v84;
      sub_15F7200(&ptr);
      v85 = v110;
      return sub_1CE0410((__int64 *)a1, 0, 0, (__int64)a3, v109.m128i_u32[0], v85, a7, a8, v111, a9, a10, a11, a12, a13);
    }
    sub_168BB30((__int64)&ptr, v82, a3->m128i_i32[0], 0x13u, 0);
    v87 = v110;
    if ( v133 )
    {
      sub_AE9DF0(&v130, (__int64)v83, 0xBu);
      v87 = v110;
      v99 = v133;
    }
    else
    {
      if ( !BYTE4(v134) )
      {
        v125 = 0;
        v117 = ptr;
        si128 = v128;
        v119 = (char)v129;
LABEL_68:
        v110 = v87;
        v126 = v134;
        sub_15F7200(&ptr);
        v88 = v110;
        if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 )
        {
          v98 = j__strlen("typename ");
          sub_9EC740((__int64)&ptr, a3->m128i_i32[0], "typename ", v98, 0);
          sub_1589170((__int64)&v117, &ptr);
          v88 = v110;
          if ( v129 != v131 )
          {
            operator delete(v129);
            v88 = v110;
          }
        }
        v110 = v88;
        sub_15F7200(&v117);
        v85 = v110;
        return sub_1CE0410(
                 (__int64 *)a1,
                 0,
                 0,
                 (__int64)a3,
                 v109.m128i_u32[0],
                 v85,
                 a7,
                 a8,
                 v111,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13);
      }
      v100 = sub_168B9E0(&ptr);
      v105 = v110;
      v106 = v100;
      v107 = (void *)v128.m128i_i64[1];
      if ( v128.m128i_i64[1] )
      {
        v107 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v128.m128i_i64[1] + 32LL))(v128.m128i_i64[1]);
        v105 = v110;
      }
      v110 = v105;
      v117 = v107;
      v108 = sub_1587BC0(v106, (__int64 *)&v117, v101, v102, v103, v104);
      sub_AE9DF0((unsigned __int8 **)(*v108 + 32LL * (unsigned int)v134 + 8), (__int64)v83, 0xBu);
      v99 = v133;
      v87 = v110;
    }
    v125 = 0;
    v117 = ptr;
    si128 = v128;
    v119 = (char)v129;
    if ( v99 )
    {
      v110 = v87;
      sub_FC70F0((__int64)&v120, (__int64)&v130);
      v87 = v110;
      v125 = 1;
      v123 = v131[8];
      v124 = v132;
    }
    goto LABEL_68;
  }
  if ( !a3->m128i_i64[1] )
    return 0;
  if ( !a14 && !a15 )
    goto LABEL_25;
LABEL_6:
  sub_F22A90(&ptr, v16);
  v113 = ptr;
  if ( sub_F22E90((__int64 *)&v113) && (unsigned __int8)sub_1CBA680(a1, a2, (__int64 *)&v113, a9, 1u) )
    return 0;
  ptr = &v128.m128i_u64[1];
  v128.m128i_i64[0] = 0x800000000LL;
  v135 = a10;
  v136 = a13;
  sub_1CB4530(a1, &a11, (__int64 *)&ptr);
  v22 = (_QWORD *)sub_F22F70(&v113);
  if ( v22 )
  {
    v25 = sub_AB7A80(*(_QWORD **)(a1 + 248), 6u, v22, (const __m128i *)ptr, v128.m128i_i32[0]);
    v121 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v117 = &v119;
    v122 = 0;
    v26 = sub_1EA6140(&v117, v25, (unsigned int)(8 * *(_DWORD *)(v25 + 20) + 32), 8);
    v27->m128i_i32[0] = 0;
    v28 = *(_QWORD **)(a1 + 248);
    v29 = v27;
    v110 = v26;
    v33 = sub_15AB9E0((__int64)a3, v28, (__int64)v27, v30, v31, v32);
    v37 = _mm_cvtsi32_si128(v109.m128i_u32[0]);
    v38 = v110;
    v39 = _mm_cvtsi32_si128(a10);
    v40 = v33 == 0;
    v41 = 0;
    v42 = _mm_cvtsi32_si128(a13);
    v43 = _mm_cvtsi32_si128(a9);
    if ( v40 )
      v34 = 0;
    v44 = _mm_unpacklo_epi32(v39, v42);
    v29->m128i_i64[1] = v34;
    v45 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v43, v37), v44);
    v29[1] = v45;
    v46 = *(_DWORD *)(v38 + 20);
    v47 = (unsigned int)(v46 - 1);
    if ( v46 )
    {
      while ( 1 )
      {
        v29[2].m128i_i64[v41] = *((_QWORD *)ptr + 4 * v41 + 3);
        if ( v47 == v41 )
          break;
        ++v41;
      }
    }
    v48 = si128.m128i_i64[0] - si128.m128i_i64[1];
    v49 = sub_A81BC0(*(_QWORD **)(a1 + 248), v25, si128.m128i_i32[0] - si128.m128i_i32[2], v47, v35, v36);
    memcpy(v49 + 1, (char *)v117 + si128.m128i_i64[1], v48);
    v50 = sub_1E61050(a1, v25, v49, *(double *)v45.m128i_i64, *(double *)v44.m128i_i64);
    v51 = v117;
    v20 = v50;
    if ( v117 == &v119 || !v117 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v61 = sub_1CDD580(
          a1,
          (__int64)v113,
          a9,
          (__int64)&ptr,
          a7,
          a8,
          v23,
          v24,
          v109.m128i_i64[0],
          v109.m128i_i32[2],
          v110,
          v111,
          v112,
          (int)v113);
  v62 = v61;
  if ( (v61 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v122 = 0;
    v117 = &v119;
    v121 = 0;
    v63 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v109 = _mm_unpacklo_epi64(
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(v109.m128i_u32[0])),
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a10), _mm_cvtsi32_si128(a13)));
    si128 = v63;
    v64 = sub_18CD120((__int64)&v117, v61);
    v66 = _mm_load_si128(&v109);
    *v65 = v66;
    v67 = *(_DWORD *)(v64 + 20);
    v68 = 0;
    if ( v67 )
    {
      while ( 1 )
      {
        v65[1].m128i_i64[v68] = *((_QWORD *)ptr + 4 * v68 + 3);
        if ( v68 == v67 - 1 )
          break;
        ++v68;
      }
    }
    if ( v19 )
    {
      v66.m128i_i64[0] = 0;
      v69 = &v114;
      v114 = 0;
      *(_OWORD *)v115 = 0;
      v116 = 0;
    }
    else
    {
      v86 = a3->m128i_i64[0];
      v109.m128i_i64[0] = (__int64)&v114;
      *(_QWORD *)&v114 = v86;
      sub_E90750((__int64)&v114 + 8, &a3->m128i_i64[1]);
      v69 = (__int128 *)v109.m128i_i64[0];
      v116 = _mm_loadu_si128(a3 + 2);
    }
    v70 = sub_1E5F850(a1, 6, v69, v62, 0);
    if ( HIDWORD(v115[1]) )
      free(v115[0]);
    v71 = 16;
    if ( (unsigned __int8)(*(_WORD *)(v70 + 18) >> 3) == 6 )
      v71 = 16LL * (*(_QWORD *)(v70 + 32) != 0);
    v75 = sub_1EA6140(&v117, v70, v71, 8);
    v76 = (__int64)v72;
    if ( (unsigned __int8)(*(_WORD *)(v75 + 18) >> 3) != 6 || *(_QWORD *)(v75 + 32) )
    {
      *v72 = 0;
      if ( (unsigned __int8)(*(_WORD *)(v75 + 18) >> 3) != 6 || *(_QWORD *)(v75 + 32) )
      {
        v77 = *(_QWORD **)(a1 + 248);
        v109.m128i_i64[0] = (__int64)v72;
        sub_15AB9E0((__int64)a3, v77, (__int64)v72, (__int64)v72, v73, v74);
        v76 = v109.m128i_i64[0];
        if ( (unsigned __int8)(*(_WORD *)(v75 + 18) >> 3) != 6 || *(_QWORD *)(v75 + 32) )
          *(_QWORD *)(v109.m128i_i64[0] + 8) = v78;
      }
    }
    v79 = sub_18C0B80(&v117, *(_QWORD **)(a1 + 248), v70, v76, v73, v74);
    v80 = sub_1E61050(a1, v70, v79, *(double *)v66.m128i_i64, *(double *)v63.m128i_i64);
    v51 = v117;
    v20 = v80;
    if ( !v117 || v117 == &v119 )
      goto LABEL_20;
LABEL_19:
    operator delete[](v51);
    goto LABEL_20;
  }
  v20 = 0;
LABEL_20:
  if ( ptr != &v128.m128i_u64[1] )
    free(ptr);
  return v20;
}
