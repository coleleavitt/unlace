unsigned __int64 __fastcall sub_1B3AFD0(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 *v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // eax
  int v18; // edx
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  _QWORD *v34; // r13
  unsigned int v35; // eax
  __int64 v36; // r9
  _QWORD *v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // r14
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // r8
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // rbx
  _BYTE *v66; // rdi
  unsigned __int64 v67; // rbp
  void *v68; // rbp
  void *v69; // r13
  __int64 v70; // r14
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  unsigned int v82; // r13d
  __int64 v83; // rax
  __int64 v84; // r12
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rax
  int v89; // eax
  unsigned int v90; // ecx
  __int64 v91; // rdx
  __int64 v92; // rax
  void *v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r13
  __int128 v98; // [rsp-30h] [rbp-368h]
  __int128 v99; // [rsp+0h] [rbp-338h]
  unsigned __int64 *v100; // [rsp+10h] [rbp-328h]
  __int128 v101; // [rsp+10h] [rbp-328h]
  __int64 v102; // [rsp+40h] [rbp-2F8h]
  __int64 v103; // [rsp+40h] [rbp-2F8h]
  __int64 v104; // [rsp+40h] [rbp-2F8h]
  unsigned __int64 v105; // [rsp+40h] [rbp-2F8h]
  __int64 v106; // [rsp+40h] [rbp-2F8h]
  __int64 v107; // [rsp+40h] [rbp-2F8h]
  __int64 v108; // [rsp+40h] [rbp-2F8h]
  __int64 v109; // [rsp+40h] [rbp-2F8h]
  __int64 v110; // [rsp+40h] [rbp-2F8h]
  __int64 v114; // [rsp+88h] [rbp-2B0h]
  unsigned int v115; // [rsp+9Ch] [rbp-29Ch] BYREF
  unsigned __int64 v116; // [rsp+A0h] [rbp-298h] BYREF
  __int64 v117; // [rsp+A8h] [rbp-290h] BYREF
  __int64 v118; // [rsp+B0h] [rbp-288h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-280h] BYREF
  __m128i v120; // [rsp+C0h] [rbp-278h] BYREF
  __int64 v121; // [rsp+D0h] [rbp-268h] BYREF
  __m128i v122; // [rsp+E0h] [rbp-258h] BYREF
  _BYTE v123[16]; // [rsp+F0h] [rbp-248h] BYREF
  void *v124[2]; // [rsp+100h] [rbp-238h] BYREF
  __m128 v125; // [rsp+110h] [rbp-228h] BYREF
  int v126; // [rsp+120h] [rbp-218h]
  char v127; // [rsp+124h] [rbp-214h]
  void *v128; // [rsp+130h] [rbp-208h] BYREF
  __int64 v129; // [rsp+138h] [rbp-200h]
  _BYTE v130[64]; // [rsp+140h] [rbp-1F8h] BYREF
  void *v131; // [rsp+180h] [rbp-1B8h] BYREF
  __int64 v132; // [rsp+188h] [rbp-1B0h]
  _BYTE v133[64]; // [rsp+190h] [rbp-1A8h] BYREF
  void *v134; // [rsp+1D0h] [rbp-168h] BYREF
  __int64 v135; // [rsp+1D8h] [rbp-160h]
  _BYTE v136[64]; // [rsp+1E0h] [rbp-158h] BYREF
  void *ptr; // [rsp+220h] [rbp-118h] BYREF
  __int64 v138; // [rsp+228h] [rbp-110h]
  _BYTE v139[64]; // [rsp+230h] [rbp-108h] BYREF
  __m128i v140; // [rsp+270h] [rbp-C8h] BYREF
  __m128i v141; // [rsp+280h] [rbp-B8h] BYREF
  int v142; // [rsp+290h] [rbp-A8h]
  char v143; // [rsp+294h] [rbp-A4h]

  v128 = v130;
  v131 = v133;
  v129 = 0x800000000LL;
  v132 = 0x800000000LL;
  v134 = v136;
  v135 = 0x800000000LL;
  v138 = 0x800000000LL;
  ptr = v139;
  v100 = &a2[a3];
  if ( a2 == v100 )
  {
    v67 = 0;
    goto LABEL_43;
  }
  v9 = a2;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *v9;
        v115 = 0;
        v11 = *a1;
        v116 = v10;
        v119 = 0;
        v12 = sub_1B31D70(v11, &v116, &v115, &v119, (__int64)&byte_22F0C30, 0, *(double *)a7.m128_u64);
        if ( v13 )
        {
          v74 = (unsigned int)v129;
          v75 = (unsigned int)v129 + 1LL;
          if ( v75 > HIDWORD(v129) )
          {
            v110 = v12;
            sub_2237220(&v128, v130, v75, 8);
            v74 = (unsigned int)v129;
            v12 = v110;
          }
          *((_QWORD *)v128 + v74) = v10;
          v76 = (unsigned int)v132;
          LODWORD(v129) = v129 + 1;
          v77 = (unsigned int)v132 + 1LL;
          if ( v77 > HIDWORD(v132) )
          {
            v109 = v12;
            sub_2237220(&v131, v133, v77, 8);
            v76 = (unsigned int)v132;
            v12 = v109;
          }
          *((_QWORD *)v131 + v76) = 0;
          v78 = (unsigned int)v135;
          LODWORD(v132) = v132 + 1;
          v79 = (unsigned int)v135 + 1LL;
          if ( v79 > HIDWORD(v135) )
          {
            v108 = v12;
            sub_2237220(&v134, v136, v79, 8);
            v78 = (unsigned int)v135;
            v12 = v108;
          }
          *((_QWORD *)v134 + v78) = 0;
          v80 = (unsigned int)v138;
          LODWORD(v135) = v135 + 1;
          v81 = (unsigned int)v138 + 1LL;
          if ( v81 > HIDWORD(v138) )
          {
            v107 = v12;
            sub_2237220(&ptr, v139, v81, 8);
            v80 = (unsigned int)v138;
            v12 = v107;
          }
          *((_QWORD *)ptr + v80) = 0;
          LODWORD(v138) = v138 + 1;
        }
        v14 = v12;
        v117 = v12;
        if ( v12 )
          break;
LABEL_38:
        if ( v100 == ++v9 )
          goto LABEL_39;
      }
      v15 = *(_QWORD *)(v12 + 48);
      v16 = a1[1];
      v17 = *(_BYTE *)(v12 + 28) & 0x7F;
      v118 = v15;
      if ( (unsigned int)(v17 - 40) > 6 )
      {
        v19 = 0;
        goto LABEL_8;
      }
      sub_1AFBE90((__int64)&v140, v16, v14);
      if ( (unsigned __int8)sub_FFEF60(v140.m128i_i32[1], v16, v18) )
        break;
      v19 = v14;
      v16 = a1[1];
      v14 = v117;
LABEL_8:
      sub_1AFBE90((__int64)v124, v16, v14);
      if ( HIDWORD(v124[0]) == 106 || HIDWORD(v124[0]) == 18 )
      {
        if ( HIDWORD(v124[0]) != 106
          || (v16 = a1[1],
              sub_1AF1930((__int64)&v140, v16, v117, 0),
              a7 = (__m128)_mm_load_si128(&v140),
              a8 = (__m128)_mm_load_si128(&v141),
              v126 = v142,
              *(__m128 *)v124 = a7,
              v125 = a8,
              v127 = v143,
              a7.m128_i32[1] != 94) )
        {
LABEL_11:
          v14 = v19;
          break;
        }
        sub_168B9F0((__int64)&v140, a1, v115, 0x11F7u, 0);
        sub_1AF81E0(&v122, 0x12u);
        v92 = sub_1682AF0((__int64)&v140, (__int64)&v122);
        if ( *(_BYTE *)(v92 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v92 + 32), (__int64)"threadprivate or private in the enclosing context", 1u);
        }
        else if ( *(_BYTE *)(v92 + 132) )
        {
          sub_1B132F0(v92, (__int64)"threadprivate or private in the enclosing context");
        }
        v93 = (void *)v122.m128i_i64[0];
        if ( (_BYTE *)v122.m128i_i64[0] != v123 )
LABEL_79:
          operator delete(v93);
      }
      else
      {
        if ( !v125.m128_u64[0] )
          goto LABEL_11;
        sub_168B9F0((__int64)&v140, a1, v115, 0x1229u, 0);
        sub_1AF81E0(&v120, HIDWORD(v124[0]));
        v97 = sub_1682AF0((__int64)&v140, (__int64)&v120);
        sub_1AF81E0(&v122, 0x12u);
        sub_1682AF0(v97, (__int64)&v122);
        if ( (_BYTE *)v122.m128i_i64[0] != v123 )
          operator delete((void *)v122.m128i_i64[0]);
        v93 = (void *)v120.m128i_i64[0];
        if ( (__int64 *)v120.m128i_i64[0] != &v121 )
          goto LABEL_79;
      }
      ++v9;
      sub_15F7200(&v140);
      sub_1B20830(*a1, a1[1], v117, (unsigned int *)v124, 0);
      if ( v100 == v9 )
        goto LABEL_39;
    }
    v20 = *(_QWORD *)(v118 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22
      || (*(_BYTE *)(v20 + 17) & 8) == 0 )
    {
      v22 = sub_168B6C0((__int64)a1);
      v23 = *(_QWORD *)(v118 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v23 + 16) - 43 <= 1
        || (v91 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 43,
            (unsigned int)v91 <= 1)
        && (v23 = sub_F63050(*(_QWORD *)(v118 & 0xFFFFFFFFFFFFFFF0LL), v16, v91, v21)) != 0 )
      {
        while ( 1 )
        {
          v24 = *(_QWORD *)(v23 + 32);
          if ( (*(_BYTE *)(v23 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v25 = v24 & 0xFFFFFFFFFFFFFFF0LL;
            v23 = *(_QWORD *)v25;
            v26 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v25 + 16LL) - 43;
            if ( (unsigned int)v26 <= 1 )
              break;
            v27 = sub_F63050(v23, v25, v26, v21);
            v24 = *(_QWORD *)(v27 + 32);
            if ( (*(_BYTE *)(v27 + 18) & 0x10) == 0 )
              goto LABEL_17;
          }
        }
      }
      else
      {
        v24 = v118;
      }
LABEL_17:
      v28 = sub_A71450(v22, v24);
      v32 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v32 + 8) & 0xF) != 0 )
        v33 = sub_F64F00(v28, v24, v32, v29, v30) & 0xFFFFFFFFFFFFFFF0LL;
      else
        v33 = v32 & 0xFFFFFFFFFFFFFFF0LL;
      v118 = v33;
      v34 = nullptr;
      if ( (*(_BYTE *)(v117 + 29) & 1) != 0 )
        v34 = sub_B8C3D0(v117, v24, v32, v29, v30, v31);
      v35 = sub_EEB7E0(v10, v24, *(double *)a7.m128_u64);
      v36 = (__int64)v34;
      v37 = nullptr;
      v38 = sub_1AFEAF0((_QWORD *)*a1, v35, v118, ".copyprivate.src", 0x10u, v36);
      v43 = (_QWORD *)sub_1AE9760(*a1, v38, v118, v115);
      if ( (*(_BYTE *)(v117 + 29) & 1) != 0 )
        v37 = sub_B8C3D0(v117, v38, v39, v40, v41, v42);
      v44 = sub_EEB7E0(v10, v38, *(double *)a7.m128_u64);
      v45 = sub_1AFEAF0((_QWORD *)*a1, v44, v118, ".copyprivate.dst", 0x10u, (__int64)v37);
      v46 = sub_1AE9760(*a1, v45, v118, v115);
      v47 = a1[1];
      v48 = 0;
      v49 = v46;
      v50 = *(unsigned int *)(v47 + 344);
      if ( (_DWORD)v50 )
      {
        v51 = *(_QWORD *)(v47 + 336) + 6776 * v50 - 6776;
        if ( *(_QWORD *)(v51 + 6768) == *(_QWORD *)(v47 + 328) )
        {
          v94 = *(unsigned int *)(v51 + 8);
          v95 = *(unsigned int *)(v47 + 27504);
          if ( (unsigned int)v94 > (unsigned int)v95 )
          {
            v96 = v94 - v95;
            if ( v96 )
            {
              v48 = *(_QWORD *)v51 + 1688 * (v96 - 1);
              if ( v48 )
                v48 = *(_QWORD *)(v48 + 1008);
            }
          }
        }
      }
      v52 = sub_1929BB0(*a1, v48, v115, 0x15u, v49, v43, a7, a8, 0);
      if ( v52 != 1 )
      {
        v53 = sub_19B4A30(*a1, v52 & 0xFFFFFFFFFFFFFFFELL, v115, 0, 0, 0, a7, a8);
        if ( v53 != 1 )
        {
          v102 = v53;
          if ( v14 )
            v54 = sub_BFB9F0(v10);
          else
            v54 = sub_1B22DF0(*a1, v117, v116, 0, a7, a8);
          v55 = v102;
          v56 = (unsigned int)v129;
          v57 = (unsigned int)v129 + 1LL;
          if ( v57 > HIDWORD(v129) )
          {
            v104 = v54;
            v114 = v55;
            sub_2237220(&v128, v130, v57, 8);
            v56 = (unsigned int)v129;
            v54 = v104;
            v55 = v114;
          }
          *((_QWORD *)v128 + v56) = v54;
          v58 = (unsigned int)v132;
          LODWORD(v129) = v129 + 1;
          v59 = (unsigned int)v132 + 1LL;
          if ( v59 > HIDWORD(v132) )
          {
            v103 = v55;
            sub_2237220(&v131, v133, v59, 8);
            v58 = (unsigned int)v132;
            v55 = v103;
          }
          *((_QWORD *)v131 + v58) = v43;
          v60 = (unsigned int)v135;
          LODWORD(v132) = v132 + 1;
          v61 = (unsigned int)v135 + 1LL;
          if ( v61 > HIDWORD(v135) )
          {
            v106 = v55;
            sub_2237220(&v134, v136, v61, 8);
            v60 = (unsigned int)v135;
            v55 = v106;
          }
          v62 = v55 & 0xFFFFFFFFFFFFFFFELL;
          *((_QWORD *)v134 + v60) = v49;
          v63 = (unsigned int)v138;
          LODWORD(v135) = v135 + 1;
          v64 = (unsigned int)v138 + 1LL;
          if ( v64 > HIDWORD(v138) )
          {
            v105 = v62;
            sub_2237220(&ptr, v139, v64, 8);
            v63 = (unsigned int)v138;
            v62 = v105;
          }
          *((_QWORD *)ptr + v63) = v62;
          LODWORD(v138) = v138 + 1;
        }
      }
      goto LABEL_38;
    }
    v82 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
    sub_168B9F0((__int64)&v140, a1, v115, 0x1225u, 0);
    sub_1AF81E0((__m128i *)v124, 0x12u);
    v83 = sub_1682AF0((__int64)&v140, (__int64)v124);
    v84 = sub_1605D30(v83, &v118);
    v85 = sub_1AE5FF0(a1[1]);
    if ( v85 )
      v86 = *(unsigned int *)(v85 + 976);
    else
      v86 = 103;
    v122.m128i_i64[0] = sub_20EAB70(v86, v82);
    v122.m128i_i64[1] = v87;
    sub_166BAF0(v84, (__int64)&v122);
    if ( v124[0] != &v125 )
      operator delete(v124[0]);
    sub_15F7200(&v140);
    if ( !v14 || (v88 = sub_168B6C0((__int64)a1), v89 = sub_B74100(v14, v88), v90 = 5899, !v89) )
      v90 = 6283;
    ++v9;
    sub_168B9F0((__int64)&v140, a1, *(_DWORD *)(v117 + 24), v90, 0);
    sub_15993D0((__int64)&v140, &v117);
    sub_15F7200(&v140);
  }
  while ( v100 != v9 );
LABEL_39:
  v65 = (unsigned int)v129;
  v66 = ptr;
  v67 = 0;
  if ( (_DWORD)v129 )
  {
    *(_QWORD *)&v101 = ptr;
    v68 = v128;
    *((_QWORD *)&v101 + 1) = (unsigned int)v138;
    v69 = v131;
    *(_QWORD *)&v99 = v134;
    v70 = (unsigned int)v132;
    *((_QWORD *)&v99 + 1) = (unsigned int)v135;
    v71 = sub_168B6C0((__int64)a1);
    *((_QWORD *)&v98 + 1) = v70;
    *(_QWORD *)&v98 = v69;
    v72 = sub_EBE090(v71, a4, a5, a6, (__int64)v68, v65, v98, v99, v101);
    v66 = ptr;
    v67 = v72;
  }
  if ( v66 != v139 )
    free(v66);
LABEL_43:
  if ( v134 != v136 )
    free(v134);
  if ( v131 != v133 )
    free(v131);
  if ( v128 != v130 )
    free(v128);
  return v67;
}
