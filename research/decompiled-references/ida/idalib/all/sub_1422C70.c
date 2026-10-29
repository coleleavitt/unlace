_QWORD *__fastcall sub_1422C70(
        _QWORD *a1,
        __m128i *a2,
        unsigned __int8 **a3,
        int a4,
        __int64 a5,
        int a6,
        int *a7,
        char *a8,
        unsigned __int8 a9,
        _BYTE *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __m128i *a14,
        _QWORD *a15,
        __int64 *a16,
        __int64 *a17,
        unsigned __int8 a18)
{
  __int64 v20; // rbx
  _QWORD *v21; // rdx
  __int64 *v22; // rax
  _QWORD *v23; // rbp
  __int64 v24; // rax
  _QWORD *result; // rax
  __int64 *v26; // rbx
  bool v27; // al
  __int64 v28; // rdi
  __int64 *v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  unsigned __int8 *v32; // rsi
  __m128i *v33; // rax
  size_t v34; // rcx
  size_t v35; // r14
  unsigned __int64 v36; // rdx
  __m128i *v37; // rcx
  __int64 v38; // r8
  unsigned __int8 *v39; // r15
  unsigned __int8 *v40; // rbp
  unsigned __int64 v41; // rax
  unsigned __int8 *v42; // rsi
  size_t v43; // rcx
  signed __int64 v44; // r15
  __int64 v45; // rdx
  signed __int64 v46; // rcx
  unsigned __int8 *v47; // rbx
  __int64 v48; // rbp
  unsigned __int64 v49; // rax
  char *v50; // r11
  unsigned __int64 v51; // rcx
  size_t v52; // rbp
  __int64 v53; // rdx
  size_t v54; // rcx
  __int64 *v55; // rax
  _QWORD *v56; // rcx
  char *v57; // r11
  char *v58; // r11
  void *v59; // rdi
  __int64 v60; // r11
  _BYTE *v61; // rdi
  __int64 v62; // rbp
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  _BYTE *v67; // rax
  size_t v68; // rax
  size_t v69; // r12
  size_t v70; // rbp
  __int64 v71; // r15
  unsigned int v72; // eax
  unsigned int v73; // r9d
  __int64 *v74; // r8
  __int64 *v75; // rax
  __int64 v76; // r14
  size_t v77; // rax
  signed __int64 v78; // rdx
  __int64 v79; // rax
  unsigned int v80; // r9d
  __int64 *v81; // r8
  __int64 v82; // rcx
  unsigned int v83; // eax
  __int64 v84; // r13
  unsigned __int64 v85; // r9
  char *v86; // r11
  unsigned __int64 v87; // rdx
  _BYTE *v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // r12
  __int64 v95; // r14
  __int64 v96; // r12
  void *v97; // rdi
  __m128i na; // [rsp+0h] [rbp-1C8h]
  __m128i nb; // [rsp+0h] [rbp-1C8h]
  size_t n; // [rsp+0h] [rbp-1C8h]
  __int64 nc; // [rsp+0h] [rbp-1C8h]
  char *v102; // [rsp+18h] [rbp-1B0h]
  unsigned int v103; // [rsp+18h] [rbp-1B0h]
  char *v104; // [rsp+18h] [rbp-1B0h]
  unsigned __int8 *s; // [rsp+20h] [rbp-1A8h]
  unsigned __int8 *v106; // [rsp+28h] [rbp-1A0h]
  __int64 *v107; // [rsp+28h] [rbp-1A0h]
  __int64 v108; // [rsp+30h] [rbp-198h]
  _QWORD *v109; // [rsp+30h] [rbp-198h]
  __int64 v110; // [rsp+30h] [rbp-198h]
  unsigned __int64 v111; // [rsp+38h] [rbp-190h]
  char *v112; // [rsp+38h] [rbp-190h]
  __int64 v113; // [rsp+38h] [rbp-190h]
  __int64 v114; // [rsp+40h] [rbp-188h]
  char *v115; // [rsp+40h] [rbp-188h]
  char *v116; // [rsp+40h] [rbp-188h]
  __int64 v117; // [rsp+40h] [rbp-188h]
  int v120; // [rsp+5Ch] [rbp-16Ch] BYREF
  _QWORD *v121; // [rsp+60h] [rbp-168h] BYREF
  int *v122; // [rsp+68h] [rbp-160h]
  unsigned __int8 **v123; // [rsp+70h] [rbp-158h]
  void *v124[2]; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v125[16]; // [rsp+90h] [rbp-138h] BYREF
  void *v126; // [rsp+A0h] [rbp-128h] BYREF
  size_t v127; // [rsp+A8h] [rbp-120h]
  __m128i v128; // [rsp+B0h] [rbp-118h] BYREF
  void *v129; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v130; // [rsp+C8h] [rbp-100h]
  _BYTE v131[16]; // [rsp+D0h] [rbp-F8h] BYREF
  __m128i v132; // [rsp+E0h] [rbp-E8h] BYREF
  __m128i v133; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v134; // [rsp+100h] [rbp-C8h] BYREF
  int v135; // [rsp+108h] [rbp-C0h]
  void *v136; // [rsp+118h] [rbp-B0h]
  _BYTE v137[24]; // [rsp+128h] [rbp-A0h] BYREF
  __m128i v138; // [rsp+140h] [rbp-88h] BYREF
  _OWORD v139[7]; // [rsp+150h] [rbp-78h] BYREF

  v20 = (__int64)a1;
  v123 = a3;
  v21 = nullptr;
  v122 = &v120;
  v22 = (__int64 *)a1[149];
  v120 = a4;
  v121 = a1;
  if ( v22 )
  {
    v21 = a15;
    v22 = a16;
  }
  na = _mm_loadu_si128(a14);
  v23 = (_QWORD *)sub_141EB20(
                    (__int64)a1,
                    v120,
                    (void *)na.m128i_i64[0],
                    na.m128i_u64[1],
                    a18,
                    a13,
                    a11,
                    a12,
                    a2,
                    v22,
                    v21,
                    a17,
                    a10,
                    a8,
                    0,
                    1,
                    1);
  if ( v23 )
  {
    v24 = v121[7];
    if ( (*(_BYTE *)(v24 + 4) & 2) == 0 )
    {
      v26 = (__int64 *)sub_141E3D0((__int64)v121, *v122, (*(_BYTE *)(v24 + 22) & 0x10) != 0);
      v27 = sub_1021600(v121[11], *v122);
      sub_14086E0(v121[13] + 632LL, v26, !v27, *v122, *v123, (signed __int64)v123[1], v23);
    }
    return v23;
  }
  v28 = a1[149];
  if ( v28
    && (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, unsigned __int8 *))(*(_QWORD *)v28 + 56LL))(
         v28,
         *a3,
         a3[1])
    || (*(_BYTE *)(v20 + 544) & 4) != 0 )
  {
    return nullptr;
  }
  if ( a18 )
  {
    v29 = *(__int64 **)(v20 + 1192);
    v30 = nullptr;
    if ( v29 )
    {
      v30 = a15;
      v29 = a16;
    }
    nb = _mm_loadu_si128(a14);
    v31 = (_QWORD *)sub_141EB20(
                      v20,
                      v120,
                      (void *)nb.m128i_i64[0],
                      nb.m128i_u64[1],
                      0,
                      a13,
                      a11,
                      a12,
                      a2,
                      v29,
                      v30,
                      a17,
                      a10,
                      nullptr,
                      0,
                      1,
                      1);
    v23 = v31;
    if ( v31 )
    {
      sub_141E5C0((__int64)&v121, v31);
      sub_FC70B0((__int64)&v138, *(_QWORD *)(v20 + 48), *a7, 1132);
      sub_AEC220((unsigned __int8 **)&v138, *a3, (signed __int64)a3[1]);
      sub_AE9DF0((unsigned __int8 **)&v138, a9, 2u);
      v32 = *a3;
      v124[0] = v125;
      if ( v32 )
      {
        sub_141A0D0(v124, v32, (__int64)&a3[1][(_QWORD)v32]);
      }
      else
      {
        v124[1] = nullptr;
        v125[0] = 0;
      }
      v33 = (__m128i *)sub_99BDC0(v124, 0, 0, "\"", 1u);
      v126 = &v128;
      if ( (__m128i *)v33->m128i_i64[0] == &v33[1] )
      {
        v128 = _mm_loadu_si128(v33 + 1);
      }
      else
      {
        v126 = (void *)v33->m128i_i64[0];
        v128.m128i_i64[0] = v33[1].m128i_i64[0];
      }
      v34 = v33->m128i_u64[1];
      v33[1].m128i_i8[0] = 0;
      v127 = v34;
      v33->m128i_i64[0] = (__int64)v33[1].m128i_i64;
      v33->m128i_i64[1] = 0;
      v35 = v127;
      if ( v127 != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v126 == &v128 )
          v36 = 15;
        else
          v36 = v128.m128i_i64[0];
        if ( v127 + 1 > v36 )
          sub_998B30((__int64)&v126, v127, 0, "\"", 1u);
        else
          *((_BYTE *)v126 + v127) = 34;
        v127 = v35 + 1;
        *((_BYTE *)v126 + v35 + 1) = 0;
        v37 = (__m128i *)v126;
        v132.m128i_i64[0] = (__int64)&v133;
        if ( v126 == &v128 )
        {
          v37 = &v133;
          v133 = _mm_load_si128(&v128);
        }
        else
        {
          v132.m128i_i64[0] = (__int64)v126;
          v133.m128i_i64[0] = v128.m128i_i64[0];
        }
        v38 = v127;
        v128.m128i_i8[0] = 0;
        v126 = &v128;
        v132.m128i_i64[1] = v127;
        v127 = 0;
        sub_141A190((__int64)&v134, a5, a6, v37, v38);
        if ( (_DWORD)v134 && HIDWORD(v134) )
          sub_14212A0(v138.m128i_i64, (unsigned __int64)&v134);
        if ( v136 != v137 )
          operator delete(v136);
        if ( (__m128i *)v132.m128i_i64[0] != &v133 )
          operator delete((void *)v132.m128i_i64[0]);
        if ( v126 != &v128 )
          operator delete(v126);
        if ( v124[0] != v125 )
          operator delete(v124[0]);
        sub_AEA040((__int64)&v138);
        return v23;
      }
LABEL_140:
      std::__throw_length_error("basic_string::append");
    }
  }
  v39 = *a3;
  v40 = a3[1];
  s = *a3;
  n = (size_t)v40;
  if ( (*(_BYTE *)(*(_QWORD *)(v20 + 56) + 106LL) & 2) != 0 )
  {
    if ( !v40 )
      goto LABEL_100;
    while ( !sub_141A080(*v39) )
    {
      ++v39;
      if ( !--v40 )
      {
        v41 = -1;
        goto LABEL_44;
      }
    }
    v41 = n - (_QWORD)v40;
LABEL_44:
    if ( n >= v41 )
    {
      v42 = &s[v41];
      v43 = n - v41;
      v106 = &s[v41];
      v44 = n - v41;
      if ( n != v41 )
      {
        v45 = v42[v43 - 1];
        v46 = v43 - 1;
        if ( (byte_2411740[2 * v45] & 0x68) == 0 )
        {
          if ( v46 )
          {
            v44 -= 2LL;
            if ( (byte_2411740[2 * v42[v44]] & 0x68) != 0 )
            {
              v44 = v46;
            }
            else
            {
              while ( v44 && (byte_2411740[2 * v42[v44 - 1]] & 0x68) == 0 )
                --v44;
            }
          }
          else
          {
            v44 = 0;
          }
        }
      }
    }
    else
    {
LABEL_100:
      v44 = 0;
      v106 = &s[n];
    }
    v114 = a14->m128i_i64[0];
    v111 = a14->m128i_u64[1];
    if ( !v111 )
      goto LABEL_99;
    v108 = v20;
    v47 = (unsigned __int8 *)a14->m128i_i64[0];
    v48 = a14->m128i_i64[1];
    while ( !sub_141A080(*v47) )
    {
      ++v47;
      if ( !--v48 )
      {
        v20 = v108;
        v49 = -1;
        goto LABEL_58;
      }
    }
    v20 = v108;
    v49 = v111 - v48;
LABEL_58:
    if ( v49 <= v111 )
    {
      v50 = (char *)(v49 + v114);
      v51 = v111 - v49;
      v52 = v111 - v49;
      if ( v111 != v49 )
      {
        v53 = (unsigned __int8)v50[v51 - 1];
        v54 = v51 - 1;
        if ( (byte_2411740[2 * v53] & 0x68) == 0 )
        {
          if ( v54 )
          {
            v52 -= 2LL;
            if ( (byte_2411740[2 * (unsigned __int8)v50[v52]] & 0x68) != 0 )
            {
              v52 = v54;
            }
            else
            {
              while ( v52 && (byte_2411740[2 * (unsigned __int8)v50[v52 - 1]] & 0x68) == 0 )
                --v52;
            }
          }
          else
          {
            v52 = 0;
          }
        }
      }
    }
    else
    {
LABEL_99:
      v52 = 0;
      v50 = (char *)(v111 + v114);
    }
    v55 = nullptr;
    v56 = nullptr;
    if ( *(_QWORD *)(v20 + 1192) )
    {
      v56 = a15;
      v55 = a16;
    }
    v102 = v50;
    v109 = (_QWORD *)sub_141EB20(v20, v120, v50, v52, a18, a13, a11, a12, a2, v55, v56, a17, a10, nullptr, 0, 1, 1);
    if ( v109 )
    {
      sub_141E5C0((__int64)&v121, v109);
      v57 = v102;
      if ( a18 )
      {
        if ( v106 )
        {
          v129 = v131;
          sub_141A0D0(&v129, v106, (__int64)&v106[v44]);
          v57 = v102;
        }
        else
        {
          v131[0] = 0;
          v129 = v131;
          v130 = 0;
        }
        v115 = v57;
        sub_E7ED70(&v132, "<", &v129);
        sub_10E1980(&v138, &v132, ">");
        sub_141A190((__int64)&v134, a5, a6, v138.m128i_i64[0], v138.m128i_i64[1]);
        v58 = v115;
        v59 = (void *)v138.m128i_i64[0];
        if ( (_OWORD *)v138.m128i_i64[0] == v139 )
          goto LABEL_75;
      }
      else
      {
        if ( v106 )
        {
          v129 = v131;
          sub_141A0D0(&v129, v106, (__int64)&v106[v44]);
          v57 = v102;
        }
        else
        {
          v131[0] = 0;
          v129 = v131;
          v130 = 0;
        }
        v104 = v57;
        sub_E7ED70(&v132, "\"", &v129);
        v84 = v132.m128i_i64[1];
        if ( v132.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_140;
        v85 = v132.m128i_i64[1] + 1;
        v86 = v104;
        if ( (__m128i *)v132.m128i_i64[0] == &v133 )
          v87 = 15;
        else
          v87 = v133.m128i_i64[0];
        if ( v85 > v87 )
        {
          v117 = v132.m128i_i64[1] + 1;
          sub_998B30((__int64)&v132, v132.m128i_u64[1], 0, "\"", 1u);
          v85 = v117;
          v86 = v104;
        }
        else
        {
          *(_BYTE *)(v132.m128i_i64[0] + v132.m128i_i64[1]) = 34;
        }
        v132.m128i_i64[1] = v85;
        *(_BYTE *)(v132.m128i_i64[0] + v84 + 1) = 0;
        v88 = (_BYTE *)v132.m128i_i64[0];
        v138.m128i_i64[0] = (__int64)v139;
        if ( (__m128i *)v132.m128i_i64[0] == &v133 )
        {
          v88 = v139;
          v139[0] = _mm_load_si128(&v133);
        }
        else
        {
          v138.m128i_i64[0] = v132.m128i_i64[0];
          *(_QWORD *)&v139[0] = v133.m128i_i64[0];
        }
        v115 = v86;
        v89 = v132.m128i_i64[1];
        v132.m128i_i64[0] = (__int64)&v133;
        v138.m128i_i64[1] = v132.m128i_i64[1];
        v132.m128i_i64[1] = 0;
        v133.m128i_i8[0] = 0;
        sub_141A190((__int64)&v134, a5, a6, v88, v89);
        v58 = v115;
        v59 = (void *)v138.m128i_i64[0];
        if ( (_OWORD *)v138.m128i_i64[0] == v139 )
          goto LABEL_75;
      }
      operator delete(v59);
      v58 = v115;
LABEL_75:
      if ( (__m128i *)v132.m128i_i64[0] != &v133 )
      {
        v116 = v58;
        operator delete((void *)v132.m128i_i64[0]);
        v58 = v116;
      }
      if ( v129 != v131 )
      {
        v112 = v58;
        operator delete(v129);
        v58 = v112;
      }
      v113 = (__int64)v58;
      sub_FC70B0((__int64)&v138, *(_QWORD *)(v20 + 48), *a7, 1133);
      sub_AEC220((unsigned __int8 **)&v138, s, n);
      sub_AEC220((unsigned __int8 **)&v138, v106, v44);
      v60 = v113;
      if ( (_DWORD)v134 && HIDWORD(v134) )
      {
        sub_14212A0(v138.m128i_i64, (unsigned __int64)&v134);
        v60 = v113;
      }
      nc = v60;
      sub_AEA040((__int64)&v138);
      a3[1] = (unsigned __int8 *)v44;
      *a3 = v106;
      v61 = v136;
      a14->m128i_i64[0] = nc;
      a14->m128i_i64[1] = v52;
      result = v109;
      if ( v61 != v137 )
      {
        operator delete(v61);
        return v109;
      }
      return result;
    }
  }
  sub_FC70B0((__int64)&v138, *(_QWORD *)(v20 + 48), *a7, 1131);
  sub_AEC220((unsigned __int8 **)&v138, s, n);
  v62 = v138.m128i_i64[0];
  if ( v138.m128i_i64[0] )
  {
    v63 = *(unsigned int *)(v138.m128i_i64[0] + 424);
    v64 = *(unsigned int *)(v138.m128i_i64[0] + 428);
    v65 = v63 + 1;
  }
  else
  {
    v90 = v138.m128i_i64[1];
    v91 = *(_DWORD *)(v138.m128i_i64[1] + 14976);
    if ( v91 )
    {
      v93 = (unsigned int)(v91 - 1);
      *(_DWORD *)(v138.m128i_i64[1] + 14976) = v93;
      v62 = *(_QWORD *)(v90 + 8 * v93 + 14848);
      v94 = *(unsigned int *)(v62 + 536);
      *(_BYTE *)v62 = 0;
      v95 = *(_QWORD *)(v62 + 528);
      *(_DWORD *)(v62 + 424) = 0;
      v96 = v95 + (v94 << 6);
      while ( v95 != v96 )
      {
        while ( 1 )
        {
          v96 -= 64;
          v97 = *(void **)(v96 + 24);
          if ( v97 == (void *)(v96 + 40) )
            break;
          operator delete(v97);
          if ( v95 == v96 )
            goto LABEL_131;
        }
      }
LABEL_131:
      v63 = *(unsigned int *)(v62 + 424);
      v64 = *(unsigned int *)(v62 + 428);
      *(_DWORD *)(v62 + 536) = 0;
      v65 = v63 + 1;
    }
    else
    {
      v92 = operator new(0x3A0u);
      v64 = 8;
      v65 = 1;
      v62 = v92;
      *(_BYTE *)v92 = 0;
      *(_QWORD *)(v92 + 96) = v92 + 112;
      *(_QWORD *)(v92 + 128) = v92 + 144;
      *(_QWORD *)(v92 + 160) = v92 + 176;
      *(_QWORD *)(v92 + 192) = v92 + 208;
      *(_QWORD *)(v92 + 224) = v92 + 240;
      *(_QWORD *)(v92 + 256) = v92 + 272;
      *(_QWORD *)(v92 + 288) = v92 + 304;
      *(_QWORD *)(v92 + 320) = v92 + 336;
      *(_QWORD *)(v92 + 352) = v92 + 368;
      *(_QWORD *)(v92 + 384) = v92 + 400;
      *(_QWORD *)(v92 + 416) = v92 + 432;
      *(_QWORD *)(v92 + 104) = 0;
      *(_BYTE *)(v92 + 112) = 0;
      *(_QWORD *)(v92 + 136) = 0;
      *(_BYTE *)(v92 + 144) = 0;
      *(_QWORD *)(v92 + 168) = 0;
      *(_BYTE *)(v92 + 176) = 0;
      *(_QWORD *)(v92 + 200) = 0;
      *(_BYTE *)(v92 + 208) = 0;
      *(_QWORD *)(v92 + 232) = 0;
      *(_BYTE *)(v92 + 240) = 0;
      *(_QWORD *)(v92 + 264) = 0;
      *(_BYTE *)(v92 + 272) = 0;
      *(_QWORD *)(v92 + 296) = 0;
      *(_BYTE *)(v92 + 304) = 0;
      *(_QWORD *)(v92 + 328) = 0;
      *(_BYTE *)(v92 + 336) = 0;
      *(_QWORD *)(v92 + 360) = 0;
      *(_BYTE *)(v92 + 368) = 0;
      *(_QWORD *)(v92 + 392) = 0;
      *(_BYTE *)(v92 + 400) = 0;
      *(_QWORD *)(v92 + 424) = 0x800000000LL;
      *(_QWORD *)(v92 + 528) = v92 + 544;
      *(_QWORD *)(v92 + 536) = 0x600000000LL;
      v63 = 0;
    }
    v138.m128i_i64[0] = v62;
  }
  v134 = a5;
  v135 = a6;
  if ( v65 > v64 )
  {
    sub_2237220(v62 + 416, v62 + 432, v65, 12);
    v63 = *(unsigned int *)(v62 + 424);
  }
  v66 = *(_QWORD *)(v62 + 416) + 12 * v63;
  *(_QWORD *)v66 = v134;
  *(_DWORD *)(v66 + 8) = v135;
  ++*(_DWORD *)(v62 + 424);
  sub_AEA040((__int64)&v138);
  if ( !*a8 )
    return nullptr;
  if ( n )
  {
    v67 = memchr(s, 47, n);
    if ( v67 )
    {
      v68 = v67 - s;
      v69 = n;
      v70 = v68 + 1;
      if ( n > v68 )
        v69 = v68;
    }
    else
    {
      v69 = n;
      v70 = 0;
    }
  }
  else
  {
    v70 = 0;
    v69 = 0;
  }
  v71 = *(_QWORD *)(v20 + 104);
  v72 = sub_2244B30(s, v69);
  v73 = sub_2244CB0(v71 + 480, s, v69, v72);
  v74 = (__int64 *)(*(_QWORD *)(v71 + 480) + 8LL * v73);
  if ( !*v74 )
    goto LABEL_104;
  if ( *v74 == -8 )
  {
    --*(_DWORD *)(v71 + 496);
LABEL_104:
    v107 = v74;
    v103 = v73;
    v79 = sub_9C3B30((__int64 *)(v71 + 504), v69 + 25, 3u);
    v80 = v103;
    v81 = v107;
    v82 = v79;
    if ( v69 )
    {
      v110 = v79;
      memcpy((void *)(v79 + 24), s, v69);
      v82 = v110;
      v81 = v107;
      v80 = v103;
    }
    *(_BYTE *)(v82 + v69 + 24) = 0;
    *(_QWORD *)v82 = v69;
    *(_BYTE *)(v82 + 16) = 0;
    *(_QWORD *)(v82 + 8) = 0;
    *v81 = v82;
    ++*(_DWORD *)(v71 + 492);
    v83 = sub_22450D0(v71 + 480, v80);
    sub_13C52C0((__int64 **)&v138, (__int64 *)(*(_QWORD *)(v71 + 480) + 8LL * v83), 0);
    v75 = (__int64 *)v138.m128i_i64[0];
    goto LABEL_96;
  }
  sub_13C52C0((__int64 **)&v138, v74, 0);
  v75 = (__int64 *)v138.m128i_i64[0];
LABEL_96:
  v76 = *v75;
  sub_FC70B0((__int64)&v138, *(_QWORD *)(v20 + 48), *a7, 1275);
  v77 = n;
  v78 = 0;
  if ( n >= v70 )
  {
    n = v70;
    v78 = v77 - v70;
  }
  sub_AEC220((unsigned __int8 **)&v138, &s[n], v78);
  sub_AEC220((unsigned __int8 **)&v138, s, v69);
  sub_AEC220((unsigned __int8 **)&v138, (_BYTE *)(*(_QWORD *)(v76 + 8) + 32LL), **(_QWORD **)(v76 + 8));
  sub_AEA040((__int64)&v138);
  return nullptr;
}
