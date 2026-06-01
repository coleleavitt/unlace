__int64 __fastcall sub_1DFC6F0(
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
  __int64 v16; // r15
  char v17; // r14
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
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int16 *v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  unsigned __int16 *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  double v50; // xmm4_8
  double v51; // xmm5_8
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r10
  __int64 v55; // r12
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // rbx
  int v59; // r9d
  unsigned int v60; // r8d
  unsigned __int32 v61; // edx
  __int64 v62; // rsi
  __int64 *v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rdi
  __int64 v66; // rax
  size_t v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rbx
  const __m128i *v71; // rdx
  __int64 v72; // rax
  bool v73; // zf
  __int64 v74; // rdi
  __int8 v75; // al
  __int64 v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  double v80; // xmm4_8
  double v81; // xmm5_8
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // r11
  _QWORD *v84; // rax
  unsigned int v85; // eax
  __int64 v86; // rbx
  int v87; // r8d
  unsigned int v88; // ebx
  unsigned __int32 v89; // edx
  __int64 v90; // rsi
  __int64 *v91; // r9
  __int64 v92; // r10
  __int64 v93; // rdi
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rbx
  unsigned int v104; // eax
  unsigned __int64 v105; // rax
  unsigned int v106; // ebx
  unsigned __int64 v107; // rbp
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r12
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v117; // [rsp+10h] [rbp-1F8h]
  __int64 v118; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v119; // [rsp+18h] [rbp-1F0h]
  unsigned int v120; // [rsp+18h] [rbp-1F0h]
  unsigned int v121; // [rsp+18h] [rbp-1F0h]
  __int64 v122; // [rsp+20h] [rbp-1E8h]
  unsigned __int64 v123; // [rsp+20h] [rbp-1E8h]
  __int64 v124; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 v125; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 v126; // [rsp+30h] [rbp-1D8h]
  unsigned __int64 v127; // [rsp+38h] [rbp-1D0h]
  unsigned __int32 v128; // [rsp+40h] [rbp-1C8h]
  __int64 v129; // [rsp+40h] [rbp-1C8h]
  int v130; // [rsp+48h] [rbp-1C0h]
  unsigned __int64 v131; // [rsp+48h] [rbp-1C0h]
  const __m128i *v132; // [rsp+48h] [rbp-1C0h]
  unsigned __int32 v133; // [rsp+48h] [rbp-1C0h]
  unsigned __int64 v134; // [rsp+48h] [rbp-1C0h]
  __int64 *v135; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v136; // [rsp+50h] [rbp-1B8h]
  __int64 v137; // [rsp+58h] [rbp-1B0h]
  __int64 *v138; // [rsp+60h] [rbp-1A8h]
  __int64 v139; // [rsp+68h] [rbp-1A0h]
  unsigned int v140; // [rsp+70h] [rbp-198h]
  int v141; // [rsp+70h] [rbp-198h]
  __int64 v142; // [rsp+70h] [rbp-198h]
  __int64 v143; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int64 v144; // [rsp+90h] [rbp-178h] BYREF
  char v145; // [rsp+98h] [rbp-170h]
  void *ptr; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v147; // [rsp+A8h] [rbp-160h]
  _BYTE dest[64]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v149; // [rsp+F0h] [rbp-118h] BYREF
  __int32 v150; // [rsp+F8h] [rbp-110h]
  __int64 v151; // [rsp+100h] [rbp-108h]
  __int64 v152; // [rsp+108h] [rbp-100h] BYREF
  unsigned int v153; // [rsp+110h] [rbp-F8h]
  __int8 v154; // [rsp+114h] [rbp-F4h]
  char v155; // [rsp+118h] [rbp-F0h]
  __int16 v156; // [rsp+120h] [rbp-E8h]
  __m128 v157; // [rsp+128h] [rbp-E0h]
  char v158; // [rsp+138h] [rbp-D0h]
  _QWORD v159[2]; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v160; // [rsp+150h] [rbp-B8h]
  __int64 v161[11]; // [rsp+160h] [rbp-A8h] BYREF
  char v162; // [rsp+1B8h] [rbp-50h]
  unsigned int v163; // [rsp+1C0h] [rbp-48h]
  char v164; // [rsp+1C4h] [rbp-44h]

  v16 = *a1;
  v17 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1;
  if ( v17 )
  {
    sub_18C74E0(*a1, 6, 0, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1) != 0 )
    {
      v66 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      *(_BYTE *)(v66 + 601) = 1;
      *(_BYTE *)(v66 + 603) = 1;
    }
  }
  v18 = *(_WORD **)(a2 + 8);
  if ( v18 )
  {
    v19 = sub_1DF6720(a1, v18, nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
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
  v116 = sub_1DF6720(a1, *(_WORD **)(a2 + 16), nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v116 == 1 )
    goto LABEL_4;
  v26 = *a1;
  v27 = dest;
  ptr = dest;
  v28 = *(_QWORD *)(v26 + 4616) + 640LL * *(unsigned int *)(v26 + 4624) - 640;
  v29 = *(unsigned int *)(v28 + 520);
  v147 = 0x800000000LL;
  if ( (_DWORD)v29 && &ptr != (void **)(v28 + 512) )
  {
    v67 = 8LL * (unsigned int)v29;
    if ( (unsigned int)v29 <= 8uLL
      || (v121 = v29,
          sub_2237220(&ptr, dest, (unsigned int)v29, 8),
          v29 = v121,
          v27 = ptr,
          (v67 = 8LL * *(unsigned int *)(v28 + 520)) != 0) )
    {
      v120 = v29;
      memcpy(v27, *(const void **)(v28 + 512), v67);
      v29 = v120;
    }
    LODWORD(v147) = v29;
  }
  v33 = sub_1DF6720(a1, *(_WORD **)(a2 + 24), nullptr, a3, a4, a5, a6, v24, v25, a9, a10, v22, v29, v23);
  if ( v33 == 1 )
    goto LABEL_27;
  v118 = sub_1DF6720(a1, *(_WORD **)(a2 + 32), nullptr, a3, a4, a5, a6, v34, v35, a9, a10, v30, v31, v32);
  if ( v118 == 1 )
    goto LABEL_27;
  v40 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 40), v36, v37, v38, v39, a3, a4);
  if ( v40 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    goto LABEL_27;
  v45 = (unsigned __int64)v40 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v45 )
    goto LABEL_14;
  v68 = sub_19179E0(*a1, *(_DWORD *)(a2 + 80), v45, 0, a3, a4);
  if ( v68 == 1 )
    goto LABEL_27;
  if ( (v68 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v122 = sub_19A3EF0(*a1, v68 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_14:
    v122 = 0;
  v46 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 48), v41, v42, v43, v44, a3, a4);
  if ( v46 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    goto LABEL_27;
  v52 = (unsigned __int64)v46 & 0xFFFFFFFFFFFFFFFELL;
  v124 = v52;
  if ( v52 )
    v124 = sub_19A3EF0(*a1, v52);
  v53 = sub_1DF6720(a1, *(_WORD **)(a2 + 56), nullptr, a3, a4, a5, a6, v50, v51, a9, a10, v47, v48, v49);
  if ( v53 == 1 )
    goto LABEL_27;
  v54 = *a1;
  v127 = v33 & 0xFFFFFFFFFFFFFFFELL;
  v55 = v116;
  v56 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v117 = v53 & 0xFFFFFFFFFFFFFFFELL;
  v119 = v118 & 0xFFFFFFFFFFFFFFFELL;
  v57 = v55 & 0xFFFFFFFFFFFFFFFELL;
  v126 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v123 = v122 & 0xFFFFFFFFFFFFFFFELL;
  v58 = v124 & 0xFFFFFFFFFFFFFFFELL;
  v125 = v124 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632)
    && *(_QWORD *)(a2 + 8) == v56
    && v57 == *(_QWORD *)(a2 + 16)
    && *(_QWORD *)(a2 + 24) == v127
    && *(_QWORD *)(a2 + 32) == v119
    && *(_QWORD *)(a2 + 40) == v123
    && *(_QWORD *)(a2 + 48) == v58
    && *(_QWORD *)(a2 + 56) == v117 )
  {
    v70 = a2 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_45;
  }
  v59 = *(_DWORD *)(a2 + 84);
  v60 = *(_DWORD *)(a2 + 80);
  v61 = *(_DWORD *)(a2 + 76);
  v62 = *(unsigned int *)(a2 + 72);
  v63 = (__int64 *)ptr;
  v64 = (unsigned int)v147;
  if ( (*(_WORD *)v57 & 0x1FF) != 0xF5 )
    goto LABEL_42;
  v65 = *(_QWORD *)(v57 + 8);
  if ( (v65 & 1) != 0 || (*(_BYTE *)(v65 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_42;
  v135 = (__int64 *)ptr;
  v137 = (unsigned int)v147;
  v140 = *(_DWORD *)(a2 + 80);
  v130 = *(_DWORD *)(a2 + 84);
  v128 = *(_DWORD *)(a2 + 76);
  if ( *(char *)(v65 + 28) < 0 )
  {
LABEL_25:
    if ( *(_QWORD *)(a2 + 56) == v117 )
    {
      v70 = 0;
      goto LABEL_45;
    }
    sub_17A5050(v54, *(_QWORD *)(v117 + 8));
LABEL_27:
    v20 = 1;
    goto LABEL_28;
  }
  v84 = (_QWORD *)sub_B73640(v65);
  v61 = v128;
  v59 = v130;
  v60 = v140;
  v63 = v135;
  v64 = v137;
  v62 = (unsigned int)v62;
  v54 = *a1;
  if ( (*(_DWORD *)v84 & 0x10000) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v84[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 34 )
  {
LABEL_42:
    v69 = sub_1C415E0(v54, v62, v61, v126, v60, v57, a3, a4, v127, v119, v123, v125, v117, v59, 1, v63, v64);
  }
  else
  {
    if ( v126 )
    {
      v129 = *a1;
      v85 = sub_EEB7E0(v126, (unsigned int)v62, *(double *)a3.m128_u64);
      sub_168B9F0((__int64)v159, (__int64 *)(v129 + 8), v85, 0x1106u, 0);
      v86 = sub_EEC8C0(v126, v129 + 8, *(double *)a3.m128_u64);
      if ( v162 )
      {
        v149 = v86;
        LOBYTE(v150) = 1;
        sub_AEC610(v161, &v149);
      }
      else if ( v164 )
      {
        v142 = sub_168B9E0(v159);
        v100 = v160;
        if ( v160 )
          v100 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v160 + 32LL))(v160);
        v144 = v100;
        v101 = sub_1587BC0(v142, (__int64 *)&v144, v96, v97, v98, v99);
        v102 = *v101 + 32LL * v163;
        v149 = v86;
        LOBYTE(v150) = 1;
        sub_AEC610((__int64 *)(v102 + 8), &v149);
      }
      sub_15F7200(v159);
      v54 = *a1;
      goto LABEL_25;
    }
    v69 = sub_1A89A90(*(__int64 **)(v54 + 736), (unsigned int)v62, v117, v84, v130, a3, a4);
  }
  v54 = *a1;
  if ( v69 == 1 )
    goto LABEL_25;
  v70 = v69 & 0xFFFFFFFFFFFFFFFELL;
LABEL_45:
  v71 = *(const __m128i **)(v54 + 744);
  v149 = (__int64)v71;
  v150 = v71[2].m128i_i32[0];
  v72 = v71[2].m128i_i64[1];
  v155 = 0;
  v73 = v71[4].m128i_i8[0] == 0;
  v151 = v72;
  if ( v73 )
  {
    v74 = (__int64)v71;
  }
  else
  {
    v153 = v71[3].m128i_u32[2];
    if ( v153 > 0x40 )
    {
      v132 = v71;
      sub_2205510(&v152);
      v71 = v132;
      v74 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v74 = (__int64)v71;
      v152 = v71[3].m128i_i64[0];
    }
    v75 = v71[3].m128i_i8[12];
    v155 = 1;
    v154 = v75;
  }
  v76 = *(unsigned int *)(a2 + 72);
  v156 = v71[4].m128i_i16[4];
  a3 = (__m128)_mm_loadu_si128(v71 + 5);
  v158 = 1;
  v157 = a3;
  sub_1AAA2E0(v74, v76, a2, v70);
  v82 = sub_1DF6720(a1, *(_WORD **)(a2 + 64), nullptr, a3, a4, a5, a6, v80, v81, a9, a10, v77, v78, v79);
  if ( v82 == 1 )
    goto LABEL_50;
  v131 = v82;
  sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 72), v82, *(double *)a3.m128_u64);
  v83 = v131 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_QWORD *)(a2 + 64) == (v131 & 0xFFFFFFFFFFFFFFFELL) || a2 != v70 )
  {
LABEL_55:
    if ( a2 == v70 )
      v20 = a2;
    else
      v20 = sub_1C3E180(*a1, v70, v83);
    goto LABEL_51;
  }
  v87 = *(_DWORD *)(a2 + 84);
  v88 = *(_DWORD *)(a2 + 80);
  v89 = *(_DWORD *)(a2 + 76);
  v90 = *(unsigned int *)(a2 + 72);
  v91 = (__int64 *)ptr;
  v92 = (unsigned int)v147;
  if ( (*(_WORD *)v57 & 0x1FF) != 0xF5 )
    goto LABEL_79;
  v93 = *(_QWORD *)(v57 + 8);
  if ( (v93 & 1) != 0 || (*(_BYTE *)(v93 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_79;
  v138 = (__int64 *)ptr;
  v139 = (unsigned int)v147;
  v136 = v131 & 0xFFFFFFFFFFFFFFFELL;
  v141 = *(_DWORD *)(a2 + 84);
  v133 = *(_DWORD *)(a2 + 76);
  if ( *(char *)(v93 + 28) < 0 )
    goto LABEL_50;
  v94 = (_QWORD *)sub_B73640(v93);
  v89 = v133;
  v87 = v141;
  v83 = v136;
  v91 = v138;
  v92 = v139;
  v90 = (unsigned int)v90;
  if ( (*(_DWORD *)v94 & 0x10000) == 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v94[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 34 )
  {
    v103 = *a1;
    if ( v126 )
    {
      v104 = sub_EEB7E0(v126, (unsigned int)v90, *(double *)a3.m128_u64);
      sub_168B9F0((__int64)v159, (__int64 *)(v103 + 8), v104, 0x1106u, 0);
      v105 = sub_EEC8C0(v126, v103 + 8, *(double *)a3.m128_u64);
      v106 = v105;
      v107 = HIDWORD(v105);
      if ( v162 )
      {
        v144 = v105;
        v145 = 1;
        sub_AEC610(v161, (__int64 *)&v144);
      }
      else if ( v164 )
      {
        v112 = sub_168B9E0(v159);
        v113 = v160;
        if ( v160 )
          v113 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v160 + 32LL))(v160);
        v143 = v113;
        v114 = sub_1587BC0(v112, &v143, v108, v109, v110, v111);
        v115 = *v114 + 32LL * v163;
        v144 = __PAIR64__(v107, v106);
        v145 = 1;
        sub_AEC610((__int64 *)(v115 + 8), (__int64 *)&v144);
      }
      sub_15F7200(v159);
      goto LABEL_50;
    }
    v95 = sub_1A89A90(*(__int64 **)(v103 + 736), (unsigned int)v90, v117, v94, v141, a3, a4);
    v83 = v136;
  }
  else
  {
LABEL_79:
    v134 = v83;
    v95 = sub_1C415E0(*a1, v90, v89, v126, v88, v57, a3, a4, v127, v119, v123, v125, v117, v87, 1, v91, v92);
    v83 = v134;
  }
  if ( v95 != 1 )
  {
    v70 = v95 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_55;
  }
LABEL_50:
  v20 = 1;
LABEL_51:
  sub_15354C0((__int64)&v149);
LABEL_28:
  if ( ptr != dest )
  {
    free(ptr);
    if ( !v17 )
      return v20;
LABEL_30:
    sub_190D5E0(v16, a3);
    return v20;
  }
LABEL_5:
  if ( v17 )
    goto LABEL_30;
  return v20;
}
