__int64 __fastcall sub_1CDF1F0(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int32 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        unsigned int a10,
        unsigned int a11,
        __int64 a12,
        int a13,
        unsigned int a14)
{
  _QWORD *v18; // rax
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r15
  __int64 *v21; // rax
  __m128i *v22; // rdx
  _QWORD *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm2
  __m128i v28; // xmm1
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 *v33; // r8
  __m128i v34; // xmm3
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  int v37; // edx
  size_t v38; // r12
  _QWORD *v39; // r14
  _QWORD *v40; // rdx
  unsigned __int64 v41; // rsi
  __int64 v42; // r12
  unsigned __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rsi
  __int64 *v52; // rax
  _QWORD *v53; // rsi
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rax
  __m128i *v57; // rdx
  int v58; // ecx
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int16 v61; // dx
  __int64 v62; // rdx
  unsigned int *v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r15
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  int v92; // eax
  char *v93; // rax
  __int64 *v94; // rdx
  char *v95; // rsi
  __int64 *v96; // r8
  _QWORD *v97; // rax
  _BYTE *v98; // rdi
  unsigned __int64 v99; // rdx
  size_t v100; // rdx
  __int64 v101; // [rsp+0h] [rbp-2A8h]
  unsigned int v102; // [rsp+8h] [rbp-2A0h]
  __m128i *v103; // [rsp+8h] [rbp-2A0h]
  int v104; // [rsp+8h] [rbp-2A0h]
  __int64 v105; // [rsp+8h] [rbp-2A0h]
  __m128i v106; // [rsp+10h] [rbp-298h] BYREF
  __int64 *v107; // [rsp+20h] [rbp-288h]
  __int64 v108; // [rsp+28h] [rbp-280h]
  _QWORD *v109; // [rsp+30h] [rbp-278h]
  __int64 *v110; // [rsp+38h] [rbp-270h] BYREF
  void **v111; // [rsp+40h] [rbp-268h]
  void **p_src; // [rsp+48h] [rbp-260h]
  void *v113; // [rsp+50h] [rbp-258h] BYREF
  unsigned __int64 v114; // [rsp+58h] [rbp-250h] BYREF
  void *src; // [rsp+60h] [rbp-248h] BYREF
  size_t n; // [rsp+68h] [rbp-240h]
  _QWORD v117[2]; // [rsp+70h] [rbp-238h] BYREF
  __int64 v118; // [rsp+80h] [rbp-228h] BYREF
  char v119; // [rsp+88h] [rbp-220h]
  __int64 v120; // [rsp+8Ch] [rbp-21Ch]
  char v121; // [rsp+94h] [rbp-214h]
  void *dest; // [rsp+98h] [rbp-210h]
  __m128 v123; // [rsp+A0h] [rbp-208h] BYREF
  char v124; // [rsp+B8h] [rbp-1F0h]
  void *v125; // [rsp+C0h] [rbp-1E8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-1E0h]
  __int64 v127; // [rsp+D8h] [rbp-1D0h] BYREF
  unsigned __int8 *v128[3]; // [rsp+E0h] [rbp-1C8h] BYREF
  int v129; // [rsp+F8h] [rbp-1B0h]
  char v130; // [rsp+FCh] [rbp-1ACh]
  char v131; // [rsp+138h] [rbp-170h]
  unsigned int v132; // [rsp+140h] [rbp-168h]
  char v133; // [rsp+144h] [rbp-164h]
  void *ptr; // [rsp+150h] [rbp-158h] BYREF
  __int64 v135; // [rsp+158h] [rbp-150h]
  _DWORD v136[82]; // [rsp+160h] [rbp-148h] BYREF

  if ( *(_DWORD *)a5 )
  {
    if ( *(_DWORD *)(a5 + 4) )
    {
      v42 = 0;
      if ( !*(_QWORD *)(a5 + 8) )
        return v42;
    }
  }
  LODWORD(v108) = a2;
  v106.m128i_i32[0] = a6;
  sub_F22A90(&ptr, a9);
  v113 = ptr;
  ptr = v136;
  v135 = 0x800000000LL;
  v136[64] = a11;
  v136[65] = a14;
  sub_1CB4530(a1, &a12, (__int64 *)&ptr);
  LODWORD(v107) = sub_F58610(a3);
  v102 = sub_F58620((int)v107);
  v18 = (_QWORD *)sub_F22F70(&v113);
  v19 = (unsigned __int64)v18;
  if ( v18 )
  {
    v20 = sub_AB7A80(*(_QWORD **)(a1 + 248), v102, v18, (const __m128i *)ptr, v135);
    v129 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v125 = &v127;
    v130 = 0;
    v21 = (__int64 *)sub_1EA6140(&v125, v20, (unsigned int)(8 * *(_DWORD *)(v20 + 20) + 32), 8);
    v22->m128i_i32[0] = a4;
    v23 = *(_QWORD **)(a1 + 248);
    v107 = v21;
    v103 = v22;
    v27 = _mm_cvtsi32_si128(v106.m128i_u32[0]);
    v28 = _mm_cvtsi32_si128(a11);
    v29 = sub_15AB9E0(a5, v23, (__int64)v22, v24, v25, v26) == 0;
    v32 = 0;
    v33 = v107;
    v34 = _mm_cvtsi32_si128(a14);
    if ( v29 )
      v30 = 0;
    v35 = _mm_unpacklo_epi32(v28, v34);
    v103->m128i_i64[1] = v30;
    v36 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(a10), v27), v35);
    v103[1] = v36;
    v37 = *((_DWORD *)v33 + 5);
    if ( v37 )
    {
      while ( 1 )
      {
        v103[2].m128i_i64[v32] = *((_QWORD *)ptr + 4 * v32 + 3);
        if ( v32 == v37 - 1 )
          break;
        ++v32;
      }
    }
    v38 = si128.m128i_i64[0] - si128.m128i_i64[1];
    v39 = sub_A81BC0(
            *(_QWORD **)(a1 + 248),
            v20,
            si128.m128i_i32[0] - si128.m128i_i32[2],
            (__int64)v103,
            (__int64)v33,
            v31);
    memcpy(v39 + 1, (char *)v125 + si128.m128i_i64[1], v38);
    v40 = v39;
    v41 = v20;
LABEL_11:
    v42 = sub_1E61050(a1, v41, v40, *(double *)v36.m128i_i64, *(double *)v35.m128i_i64);
    if ( v125 && v125 != &v127 )
      operator delete[](v125);
    goto LABEL_14;
  }
  v44 = sub_F22BD0((__int64 *)&v113, 0);
  v109 = (_QWORD *)v44;
  if ( v44 )
  {
    LOBYTE(v110) = *(_BYTE *)(v44 + 28);
    if ( ((unsigned __int8)v110 & 0x7F) == 0x46 )
    {
      v110 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)&v125, (__int64 *)(a1 + 8), a10, 0x13D4u, 0);
      if ( v131 )
      {
        sub_AE9DF0(v128, (__int64)v109, 0xAu);
      }
      else
      {
        if ( !v133 )
        {
LABEL_23:
          sub_15F7200(&v125);
          sub_168B9F0((__int64)&v125, v110, *((_DWORD *)v109 + 6), 0x67u, 0);
          sub_15F7200(&v125);
          goto LABEL_24;
        }
        v71 = sub_168B9E0(&v125);
        v75 = si128.m128i_i64[1];
        if ( si128.m128i_i64[1] )
        {
          v76 = *(_QWORD *)si128.m128i_i64[1];
          v111 = (void **)v71;
          v75 = (*(__int64 (__fastcall **)(__int64))(v76 + 32))(si128.m128i_i64[1]);
          v71 = (__int64)v111;
        }
        v118 = v75;
        v77 = sub_1587BC0(v71, &v118, v71, v72, v73, v74);
        sub_AE9DF0((unsigned __int8 **)(*v77 + 32LL * v132 + 8), (__int64)v109, 0xAu);
      }
      if ( v131 )
      {
        sub_AE9DF0(v128, 7, 2u);
      }
      else
      {
        if ( !v133 )
          goto LABEL_23;
        v85 = sub_168B9E0(&v125);
        v89 = si128.m128i_i64[1];
        if ( si128.m128i_i64[1] )
        {
          v90 = *(_QWORD *)si128.m128i_i64[1];
          v111 = (void **)v85;
          v89 = (*(__int64 (__fastcall **)(__int64))(v90 + 32))(si128.m128i_i64[1]);
          v85 = (__int64)v111;
        }
        v118 = v89;
        v91 = sub_1587BC0(v85, &v118, v85, v86, v87, v88);
        sub_AE9DF0((unsigned __int8 **)(*v91 + 32LL * v132 + 8), 7, 2u);
      }
      if ( v131 )
      {
        sub_AE9DF0(v128, (int)v107, 2u);
      }
      else if ( v133 )
      {
        v78 = sub_168B9E0(&v125);
        v82 = si128.m128i_i64[1];
        if ( si128.m128i_i64[1] )
        {
          v83 = *(_QWORD *)si128.m128i_i64[1];
          v111 = (void **)v78;
          v82 = (*(__int64 (__fastcall **)(__int64))(v83 + 32))(si128.m128i_i64[1]);
          v78 = (__int64)v111;
        }
        v118 = v82;
        v84 = sub_1587BC0(v78, &v118, v78, v79, v80, v81);
        sub_AE9DF0((unsigned __int8 **)(*v84 + 32LL * v132 + 8), (int)v107, 2u);
      }
      goto LABEL_23;
    }
  }
LABEL_24:
  v114 = sub_1CDD580(
           a1,
           (__int64)v113,
           a10,
           (__int64)&ptr,
           a7,
           a8,
           v45,
           v46,
           v101,
           v102,
           v106.m128i_i32[0],
           v106.m128i_i8[8],
           (int)v107,
           v108);
  v51 = v114;
  if ( (v114 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v52 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v114 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v52 + 16) != 48 )
    {
LABEL_30:
      v125 = &v127;
      v130 = 0;
      v35 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v129 = 0;
      si128 = v35;
      v55 = *(_DWORD *)(v51 + 20);
      v106 = _mm_unpacklo_epi64(
               _mm_unpacklo_epi32(_mm_cvtsi32_si128(a10), _mm_cvtsi32_si128(v106.m128i_u32[0])),
               _mm_unpacklo_epi32(_mm_cvtsi32_si128(a11), _mm_cvtsi32_si128(a14)));
      v56 = sub_1EA6140(&v125, v51, (unsigned int)(8 * v55 + 16), 8);
      v36 = _mm_load_si128(&v106);
      *v57 = v36;
      v58 = *(_DWORD *)(v56 + 20);
      v59 = 0;
      if ( v58 )
      {
        while ( 1 )
        {
          v57[1].m128i_i64[v59] = *((_QWORD *)ptr + 4 * v59 + 3);
          if ( v58 - 1 == v59 )
            break;
          ++v59;
        }
      }
      v60 = sub_A76250(*(_QWORD *)(a1 + 248), v104, *(_QWORD *)(a5 + 8), v114, 0);
      v61 = *(_WORD *)(v60 + 18);
      v114 = v60;
      if ( (unsigned __int8)(v61 >> 3) == 6 )
        v62 = 16LL * (*(_QWORD *)(v60 + 32) != 0);
      else
        v62 = 16;
      v66 = sub_1EA6140(&v125, v60, v62, 8);
      if ( (unsigned __int8)(*(_WORD *)(v66 + 18) >> 3) != 6 || *(_QWORD *)(v66 + 32) )
        *v63 = a4;
      v105 = (__int64)v63;
      sub_15AB9E0(a5, *(_QWORD **)(a1 + 248), (__int64)v63, (__int64)v63, v64, v65);
      if ( (unsigned __int8)(*(_WORD *)(v66 + 18) >> 3) != 6 || *(_QWORD *)(v66 + 32) )
        *(_QWORD *)(v105 + 8) = v67;
      v70 = sub_18C0B80(&v125, *(_QWORD **)(a1 + 248), v114, v105, v68, v69);
      v41 = v114;
      v40 = v70;
      goto LABEL_11;
    }
    v53 = sub_F60F10(*v52, v114, v47, v48, v49, v50);
    v109 = v53;
    v54 = v53[5];
    if ( (v54 & 7) == 0 )
      v19 = v54 & 0xFFFFFFFFFFFFFFF8LL;
    if ( sub_17B1BF0(a1, (__int64)v53, (unsigned int)v107, (_DWORD)v108 == 2, a4, v19) )
    {
      v51 = v114;
      goto LABEL_30;
    }
    v107 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)&v125, (__int64 *)(a1 + 8), a4, 0x150Du, 0);
    v108 = sub_1605D30((__int64)&v125, (__int64 *)&v114);
    LOBYTE(v110) = *((_BYTE *)v109 + 73);
    v92 = sub_F58620((unsigned __int8)v110 >> 5);
    v93 = sub_F58640(v92);
    v120 = 0;
    v95 = v93;
    v96 = v94;
    v121 = 0;
    dest = &v123.m128_u16[4];
    src = v117;
    v123.m128_i8[8] = 0;
    v123.m128_u64[0] = 0;
    v124 = 0;
    LODWORD(v118) = a4;
    HIDWORD(v118) = a4;
    v119 = 1;
    if ( &v93[(_QWORD)v94] && !v93 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v94 > 0xF )
    {
      if ( (__int64)v94 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      p_src = &src;
      v111 = (void **)v93;
      v110 = v94;
      v97 = (_QWORD *)operator new((unsigned __int64)v94 + 1);
      v96 = v110;
      src = v97;
      v117[0] = v110;
    }
    else
    {
      if ( v94 == (__int64 *)((char *)&dword_0 + 1) )
      {
        LOBYTE(v117[0]) = *v93;
        v97 = v117;
        goto LABEL_68;
      }
      v97 = v117;
      if ( !v94 )
      {
LABEL_68:
        n = (size_t)v96;
        *((_BYTE *)v96 + (_QWORD)v97) = 0;
        v98 = dest;
        if ( src == v117 )
        {
          v100 = n;
          if ( n )
          {
            if ( n == 1 )
            {
              *(_BYTE *)dest = v117[0];
            }
            else
            {
              v110 = (__int64 *)&src;
              memcpy(dest, src, n);
            }
            v100 = n;
            v98 = dest;
          }
          v123.m128_u64[0] = v100;
          v98[v100] = 0;
          v98 = src;
          goto LABEL_72;
        }
        if ( dest == &v123.m128_u16[4] )
        {
          v110 = (__int64 *)v117[0];
          dest = src;
          v123 = _mm_loadh_ps((const double *)&v110);
        }
        else
        {
          v110 = (__int64 *)v117[0];
          v99 = v123.m128_u64[1];
          dest = src;
          v123 = _mm_loadh_ps((const double *)&v110);
          if ( v98 )
          {
            src = v98;
            v117[0] = v99;
LABEL_72:
            n = 0;
            *v98 = 0;
            if ( src != v117 )
              operator delete(src);
            sub_1589170(v108, &v118);
            if ( dest != &v123.m128_u16[4] )
              operator delete(dest);
            sub_15F7200(&v125);
            sub_168B9F0((__int64)&v125, v107, *((_DWORD *)v109 + 6), 0x73u, 0);
            sub_15F7200(&v125);
            v51 = v114;
            goto LABEL_30;
          }
        }
        v98 = v117;
        src = v117;
        goto LABEL_72;
      }
    }
    v111 = &src;
    v110 = v96;
    memcpy(v97, v95, (size_t)v96);
    v97 = src;
    v96 = v110;
    goto LABEL_68;
  }
  v42 = 0;
LABEL_14:
  if ( ptr != v136 )
    free(ptr);
  return v42;
}
