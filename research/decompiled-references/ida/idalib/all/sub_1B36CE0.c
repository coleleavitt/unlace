unsigned __int64 __fastcall sub_1B36CE0(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        int a9,
        int a10,
        int a11)
{
  __int64 *v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r14d
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int32 v36; // r13d
  char v37; // al
  unsigned int v38; // esi
  __int64 v39; // rbp
  _BYTE *v40; // rdi
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rax
  unsigned __int64 *v43; // rbp
  __int64 v44; // rbx
  __int64 v45; // r12
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbp
  void *v51; // r13
  __int64 v52; // r14
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  _QWORD *v66; // r9
  size_t v67; // r14
  unsigned __int64 v68; // rax
  __int64 v69; // r14
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  _QWORD *v72; // r14
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  size_t v77; // rax
  __int64 v78; // rax
  __int64 v79; // r14
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  int v90; // eax
  unsigned int v91; // ecx
  __int64 v92; // r12
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  __int64 v103; // rdi
  __int64 v104; // rax
  __int64 v105; // r8
  _QWORD *v106; // r9
  __int64 v107; // r10
  unsigned __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // r8
  unsigned __int64 v111; // rax
  __int128 v112; // [rsp-50h] [rbp-408h]
  __int64 v113; // [rsp-10h] [rbp-3C8h]
  __int64 *v114; // [rsp+8h] [rbp-3B0h]
  __int64 v115; // [rsp+8h] [rbp-3B0h]
  __int128 v116; // [rsp+10h] [rbp-3A8h]
  __int128 v117; // [rsp+20h] [rbp-398h]
  void *v118; // [rsp+30h] [rbp-388h]
  __int64 v120; // [rsp+50h] [rbp-368h]
  _QWORD *v121; // [rsp+50h] [rbp-368h]
  __int64 v122; // [rsp+50h] [rbp-368h]
  __int64 v123; // [rsp+50h] [rbp-368h]
  __int64 v124; // [rsp+50h] [rbp-368h]
  __int64 v125; // [rsp+50h] [rbp-368h]
  __int64 v126; // [rsp+88h] [rbp-330h]
  _QWORD *v127; // [rsp+90h] [rbp-328h]
  unsigned int v130; // [rsp+BCh] [rbp-2FCh] BYREF
  unsigned __int64 v131; // [rsp+C0h] [rbp-2F8h] BYREF
  __int64 v132; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v133; // [rsp+D0h] [rbp-2E8h] BYREF
  __int64 v134; // [rsp+D8h] [rbp-2E0h] BYREF
  __m128i v135; // [rsp+E0h] [rbp-2D8h] BYREF
  __int64 v136; // [rsp+F0h] [rbp-2C8h] BYREF
  __m128i v137; // [rsp+100h] [rbp-2B8h] BYREF
  char v138; // [rsp+110h] [rbp-2A8h] BYREF
  __m128 v139; // [rsp+120h] [rbp-298h] BYREF
  __m128 v140; // [rsp+130h] [rbp-288h]
  int v141; // [rsp+140h] [rbp-278h]
  char v142; // [rsp+144h] [rbp-274h]
  void *v143; // [rsp+150h] [rbp-268h] BYREF
  __int64 v144; // [rsp+158h] [rbp-260h]
  _BYTE v145[32]; // [rsp+160h] [rbp-258h] BYREF
  void *ptr; // [rsp+180h] [rbp-238h] BYREF
  __int64 v147; // [rsp+188h] [rbp-230h]
  _BYTE v148[32]; // [rsp+190h] [rbp-228h] BYREF
  void *v149; // [rsp+1B0h] [rbp-208h] BYREF
  __int64 v150; // [rsp+1B8h] [rbp-200h]
  _BYTE v151[64]; // [rsp+1C0h] [rbp-1F8h] BYREF
  void *v152; // [rsp+200h] [rbp-1B8h] BYREF
  __int64 v153; // [rsp+208h] [rbp-1B0h]
  _BYTE v154[64]; // [rsp+210h] [rbp-1A8h] BYREF
  void *v155; // [rsp+250h] [rbp-168h] BYREF
  __int64 v156; // [rsp+258h] [rbp-160h]
  _BYTE v157[64]; // [rsp+260h] [rbp-158h] BYREF
  __m128i v158; // [rsp+2A0h] [rbp-118h] BYREF
  _BYTE v159[64]; // [rsp+2B0h] [rbp-108h] BYREF
  __m128i v160; // [rsp+2F0h] [rbp-C8h] BYREF
  __m128i v161; // [rsp+300h] [rbp-B8h] BYREF
  int v162; // [rsp+310h] [rbp-A8h]
  char v163; // [rsp+314h] [rbp-A4h]

  if ( a4 == 1 && a5 )
  {
    sub_168B9F0((__int64)&v160, a1, a5, 0x1217u, 0);
    sub_1AEE640(&v155, 52, 0, 1u, nullptr, 0);
    v92 = sub_1682AF0((__int64)&v160, (__int64)&v155);
    sub_1AF81E0(&v158, 0x34u);
    sub_1682AF0(v92, (__int64)&v158);
    if ( (_BYTE *)v158.m128i_i64[0] != v159 )
      operator delete((void *)v158.m128i_i64[0]);
    if ( v155 != v157 )
      operator delete(v155);
    v41 = 0;
    sub_15F7200(&v160);
    return v41;
  }
  v149 = v151;
  v150 = 0x800000000LL;
  v153 = 0x800000000LL;
  v156 = 0x800000000LL;
  v158.m128i_i64[1] = 0x800000000LL;
  v152 = v154;
  v155 = v157;
  v143 = v145;
  v158.m128i_i64[0] = (__int64)v159;
  v144 = 0x400000000LL;
  v147 = 0x400000000LL;
  ptr = v148;
  v114 = &a2[a3];
  if ( a2 == v114 )
  {
    v41 = 0;
    goto LABEL_30;
  }
  v12 = a2;
  do
  {
    v13 = *v12;
    v130 = 0;
    v14 = *a1;
    v131 = v13;
    v134 = 0;
    v15 = sub_1B31D70(v14, &v131, &v130, &v134, (__int64)&byte_22F0C30, 0, *(double *)a7.m128_u64);
    if ( v17 )
    {
      v82 = (unsigned int)v150;
      v83 = (unsigned int)v150 + 1LL;
      if ( v83 > HIDWORD(v150) )
      {
        v125 = v15;
        sub_2237220(&v149, v151, v83, 8);
        v82 = (unsigned int)v150;
        v15 = v125;
      }
      *((_QWORD *)v149 + v82) = v13;
      v84 = (unsigned int)v153;
      LODWORD(v150) = v150 + 1;
      v85 = (unsigned int)v153 + 1LL;
      if ( v85 > HIDWORD(v153) )
      {
        v124 = v15;
        sub_2237220(&v152, v154, v85, 8);
        v84 = (unsigned int)v153;
        v15 = v124;
      }
      *((_QWORD *)v152 + v84) = 0;
      v86 = (unsigned int)v156;
      LODWORD(v153) = v153 + 1;
      v87 = (unsigned int)v156 + 1LL;
      if ( v87 > HIDWORD(v156) )
      {
        v123 = v15;
        sub_2237220(&v155, v157, v87, 8);
        v86 = (unsigned int)v156;
        v15 = v123;
      }
      *((_QWORD *)v155 + v86) = 0;
      v16 = v158.m128i_u32[2];
      LODWORD(v156) = v156 + 1;
      v88 = v158.m128i_u32[2] + 1LL;
      if ( v88 > v158.m128i_u32[3] )
      {
        v122 = v15;
        sub_2237220(&v158, v159, v88, 8);
        v16 = v158.m128i_u32[2];
        v15 = v122;
      }
      *(_QWORD *)(v158.m128i_i64[0] + 8 * v16) = 0;
      ++v158.m128i_i32[2];
    }
    v132 = v15;
    if ( v15 )
    {
      v18 = *(_QWORD *)(v15 + 48);
      v19 = 0;
      v20 = *a1;
      v21 = v130;
      v22 = *(_BYTE *)(v15 + 28) & 0x7F;
      v133 = v18;
      if ( (unsigned int)(v22 - 40) < 7 )
        v19 = v15;
      if ( !(unsigned __int8)sub_1E63CF0(v20, v130, v18, 1, 4532) )
      {
        v24 = sub_C1BEF0((__int64)&v133, v21, v23, v16);
        v25 = *a1;
        v26 = v132;
        v133 = v24;
        if ( !(unsigned __int8)sub_1B310E0(v25, v132, v24, 0x34u, v130) )
        {
          if ( !a4 && !sub_F61140(*(_QWORD *)(v133 & 0xFFFFFFFFFFFFFFF0LL), v26, v27, 0, v28, v29) )
          {
            sub_168B9F0((__int64)&v160, a1, v130, 0x11B3u, 0);
            sub_15F7200(&v160);
            if ( !v19 || (v89 = sub_168B6C0((__int64)a1), v90 = sub_B74100(v19, v89), v91 = 5899, !v90) )
              v91 = 6283;
            sub_168B9F0((__int64)&v160, a1, *(_DWORD *)(v132 + 24), v91, 0);
            sub_15993D0((__int64)&v160, &v132);
            sub_15F7200(&v160);
            goto LABEL_25;
          }
          v30 = 103;
          v31 = sub_1AE5FF0(a1[1]);
          if ( v31 )
            v30 = *(_DWORD *)(v31 + 976);
          v33 = v32;
          sub_1AFBE90((__int64)&v139, v32, v132);
          v36 = v139.m128_i32[1];
          if ( v139.m128_i32[1] != 106 && v139.m128_i32[1] != 52 )
          {
            v37 = sub_FFED80(v30, v33, v34, v35);
            v36 = v139.m128_i32[1];
            if ( (v37 || v139.m128_i32[1] != 36) && (v139.m128_i32[1] != 82 || v140.m128_u64[0]) )
            {
              sub_168B9F0((__int64)&v160, a1, v130, 0x1229u, 0);
              sub_1AF81E0(&v135, v139.m128_u32[1]);
              v38 = 52;
              v39 = sub_1682AF0((__int64)&v160, (__int64)&v135);
LABEL_20:
              sub_1AF81E0(&v137, v38);
              sub_1682AF0(v39, (__int64)&v137);
              if ( (char *)v137.m128i_i64[0] != &v138 )
                operator delete((void *)v137.m128i_i64[0]);
              if ( (__int64 *)v135.m128i_i64[0] != &v136 )
                operator delete((void *)v135.m128i_i64[0]);
              sub_15F7200(&v160);
              sub_1B20830(*a1, a1[1], v132, (unsigned int *)&v139, 0);
              goto LABEL_25;
            }
          }
          v127 = (_QWORD *)v140.m128_u64[1];
          if ( sub_FFE580(v30) )
          {
            if ( !sub_FFE740(v30) && !sub_FFEA60(v30, v33, v56, v57) )
            {
              sub_1AF1930((__int64)&v160, a1[1], v132, 1);
              a7 = (__m128)_mm_load_si128(&v160);
              a8 = (__m128)_mm_load_si128(&v161);
              v141 = v162;
              v139 = a7;
              v140 = a8;
              v142 = v163;
              if ( a7.m128_i32[1] != 94 )
              {
                sub_168B9F0((__int64)&v160, a1, v130, 0x11F7u, 0);
                sub_1AF81E0(&v135, 0x34u);
                v38 = 94;
                v39 = sub_1682AF0((__int64)&v160, (__int64)&v135);
                goto LABEL_20;
              }
            }
          }
          v58 = sub_168B6C0((__int64)a1);
          v59 = v133;
          v160.m128i_i64[0] = sub_A71450(v58, v133);
          v62 = sub_C1BEF0((__int64)&v160, v59, v60, v61);
          v66 = nullptr;
          v133 = v62;
          if ( (*(_BYTE *)(v132 + 29) & 1) != 0 )
            v66 = sub_B8C3D0(v132, v59, v63, v64, v65, 0);
          v120 = (__int64)v66;
          v67 = j__strlen(".lastprivate.src");
          v68 = sub_6D5440(&v133);
          v69 = sub_1AFEAF0((_QWORD *)*a1, v134, v68, ".lastprivate.src", v67, v120);
          v70 = sub_6D5440(&v133);
          v71 = v69;
          v72 = nullptr;
          v121 = (_QWORD *)sub_1AE9760(*a1, v71, v70, v130);
          if ( (*(_BYTE *)(v132 + 29) & 1) != 0 )
            v72 = sub_B8C3D0(v132, v71, v73, v74, v75, v76);
          v77 = j__strlen(".lastprivate.dst");
          v78 = sub_1AFEAF0((_QWORD *)*a1, v134, v133, ".lastprivate.dst", v77, (__int64)v72);
          v79 = sub_1AE9760(*a1, v78, v133, v130);
          v80 = sub_1929BB0(*a1, 0, v130, 0x15u, v79, v121, a7, a8, 0);
          if ( v80 != 1 )
          {
            v126 = sub_19B4A30(*a1, v80 & 0xFFFFFFFFFFFFFFFELL, v130, 0, 0, 0, a7, a8);
            if ( v126 != 1 )
            {
              if ( v19 )
              {
                v81 = sub_BFB9F0(v13);
                sub_1AEF810(a1[1], v132, v81, 0x34u, 0, 0, 0);
                goto LABEL_51;
              }
              if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
                goto LABEL_81;
              if ( v36 == 36 )
              {
                v19 = (__int64)v127;
                if ( !v127 )
                  goto LABEL_89;
              }
              else
              {
                v19 = sub_1B22DF0(*a1, v132, v131, 0, a7, a8);
                if ( !sub_1B223D0((__int64)a1, v132, 0, 0, a7, a8) )
                  sub_147FE60((__int64)&v143, *(_QWORD *)(v19 + 16));
              }
              v97 = v132;
              if ( sub_1B223D0((__int64)a1, v132, 0, 0, a7, a8) )
                goto LABEL_81;
              v103 = *(_QWORD *)(v19 + 16);
              if ( (*(_BYTE *)(v103 + 29) & 1) == 0 || !sub_1AE9300(v103, v97, v98, v99, v100, v101) )
                goto LABEL_81;
              v127 = (_QWORD *)v19;
LABEL_89:
              if ( sub_19146F0(*a1, v127, v93, v94, v95, v96, a7, a8) > 1 )
              {
                v104 = sub_1AE5FF0(a1[1]);
                if ( v104 )
                  v104 = *(_QWORD *)(v104 + 1008);
                v108 = sub_1929BB0(v107, v104, v130, 0x15u, v105, v106, a7, a8, 0);
                if ( v108 > 1 )
                {
                  v111 = sub_19A6720(*a1, v108 & 0xFFFFFFFFFFFFFFFELL, v109, v16, v110, v113, a7, a8);
                  sub_14B7B40((__int64)&ptr, v111 & 0xFFFFFFFFFFFFFFFELL);
                  v19 = (__int64)v127;
LABEL_81:
                  v102 = sub_BFB9F0(v13);
                  sub_1AEF810(a1[1], v132, v102, 0x34u, v19, 0, 0);
                  if ( !(unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
                  {
LABEL_52:
                    sub_14B7B40((__int64)&v149, v19);
                    sub_14B7B40((__int64)&v152, (__int64)v121);
                    sub_14B7B40((__int64)&v155, v79);
                    sub_14B7B40((__int64)&v158, v126 & 0xFFFFFFFFFFFFFFFELL);
                    goto LABEL_25;
                  }
LABEL_51:
                  v19 = sub_BFB9F0(v13);
                  goto LABEL_52;
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    ++v12;
  }
  while ( v114 != v12 );
  v40 = ptr;
  v41 = 0;
  if ( (_DWORD)v150 )
  {
    v42 = sub_1AE7340(*a1, (__int64)ptr, (unsigned int)v147, v16, (unsigned int)v150, a7, a8);
    v43 = (unsigned __int64 *)v143;
    v44 = (unsigned int)v144;
    v45 = v42;
    v46 = (_QWORD *)sub_168B6C0((__int64)a1);
    v50 = sub_1AE9A60(v46, v43, v44, v47, v48, v49);
    *(_QWORD *)&v117 = v158.m128i_i64[0];
    *((_QWORD *)&v117 + 1) = v158.m128i_u32[2];
    v51 = v155;
    v52 = (unsigned int)v156;
    *(_QWORD *)&v116 = v152;
    *((_QWORD *)&v116 + 1) = (unsigned int)v153;
    v118 = v149;
    v115 = (unsigned int)v150;
    v53 = sub_168B6C0((__int64)a1);
    *((_QWORD *)&v112 + 1) = v52;
    *(_QWORD *)&v112 = v51;
    v54 = sub_EBDC00(v53, a9, a10, a11, (__int64)v118, v115, v116, v112, v117, a4, a5, a6, v50, v45);
    v40 = ptr;
    v41 = v54;
  }
  if ( v40 != v148 )
    free(v40);
LABEL_30:
  if ( v143 != v145 )
    free(v143);
  if ( (_BYTE *)v158.m128i_i64[0] != v159 )
    free((void *)v158.m128i_i64[0]);
  if ( v155 != v157 )
    free(v155);
  if ( v152 != v154 )
    free(v152);
  if ( v149 != v151 )
    free(v149);
  return v41;
}
