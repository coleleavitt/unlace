void __fastcall sub_14D60F0(
        _BYTE *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8,
        __int16 a9,
        __int64 a10)
{
  int v12; // eax
  __int64 *v13; // rdi
  unsigned int *v14; // r12
  size_t v15; // rsi
  size_t v16; // r8
  _BYTE *v17; // rdi
  size_t v18; // r13
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __m128i *v21; // rax
  size_t v22; // rcx
  _BYTE *v23; // rsi
  __int64 v24; // r13
  unsigned __int8 *v25; // rbp
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  void **v31; // rbp
  _BYTE *v32; // rdi
  __int64 v33; // rax
  _BYTE *v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned int *v36; // r13
  __int64 v37; // rbp
  unsigned int *v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned int *v41; // rbp
  char *v42; // r14
  _BYTE *v43; // rax
  char *v44; // rsi
  signed __int64 v45; // r15
  void **v46; // r13
  size_t v47; // rax
  void **v48; // r12
  void **v49; // rbp
  void **v50; // rdi
  void **v51; // rdi
  void **v52; // r12
  void **v53; // rbp
  void *v54; // r12
  size_t v55; // rbp
  unsigned __int64 *v56; // r14
  unsigned int v57; // eax
  __int64 v58; // r9
  unsigned int v59; // r15d
  __int64 *v60; // r8
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r15
  _QWORD *v64; // r13
  __int64 v65; // rbx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rax
  unsigned int v69; // ebx
  void **v70; // r15
  _BYTE *v71; // rdi
  __int64 v72; // rax
  _QWORD *v73; // rcx
  char *v74; // rdx
  _QWORD *v75; // r10
  unsigned int v76; // eax
  __int64 v77; // rdi
  __int64 v78; // rax
  unsigned __int64 v79; // rax
  size_t v80; // rdx
  size_t v81; // rdx
  __int64 v82; // rdx
  _QWORD *v83; // rax
  size_t v84; // rdx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r14
  __int64 v89; // r15
  __int64 v90; // r14
  void *v91; // rdi
  size_t v92; // rdx
  int v93; // eax
  unsigned int *v94; // r14
  char *v95; // rbp
  unsigned int v96; // edx
  void *v97; // rax
  unsigned int *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rcx
  unsigned int *v101; // rbp
  unsigned int *v102; // r14
  unsigned int *v103; // rdi
  __int64 v104; // rbp
  unsigned int *v105; // rdi
  unsigned int v106; // eax
  __int64 *p_src; // [rsp+8h] [rbp-140h]
  unsigned int v108; // [rsp+14h] [rbp-134h]
  void *v109; // [rsp+18h] [rbp-130h] BYREF
  __int64 v110; // [rsp+20h] [rbp-128h]
  _QWORD *v111; // [rsp+28h] [rbp-120h]
  void **v112; // [rsp+30h] [rbp-118h]
  void *v113; // [rsp+38h] [rbp-110h]
  void *v114; // [rsp+40h] [rbp-108h] BYREF
  size_t v115; // [rsp+48h] [rbp-100h]
  __m128i v116; // [rsp+50h] [rbp-F8h] BYREF
  void *v117; // [rsp+60h] [rbp-E8h] BYREF
  size_t v118; // [rsp+68h] [rbp-E0h]
  _QWORD v119[2]; // [rsp+70h] [rbp-D8h] BYREF
  void *v120; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v121; // [rsp+88h] [rbp-C0h] BYREF
  void *dest; // [rsp+98h] [rbp-B0h]
  __m128 v123; // [rsp+A0h] [rbp-A8h]
  char v124; // [rsp+B8h] [rbp-90h]
  void *src; // [rsp+C0h] [rbp-88h] BYREF
  size_t n; // [rsp+C8h] [rbp-80h]
  __int64 v127[2]; // [rsp+D0h] [rbp-78h] BYREF
  void *v128; // [rsp+E0h] [rbp-68h]
  __int16 v129; // [rsp+100h] [rbp-48h]

  v108 = a3;
  v111 = a4;
  v110 = a6;
  LODWORD(v109) = a7;
  if ( sub_10CCDE0(a9) )
  {
    v12 = (int)v109;
    if ( HIDWORD(a7) )
      v12 = HIDWORD(a7);
    LODWORD(v109) = v12;
  }
  else
  {
    LODWORD(v109) = HIDWORD(a7) + (_DWORD)v109;
  }
  v13 = *(__int64 **)(a5 + 8);
  *(_DWORD *)(a5 + 40) = *(_DWORD *)(a5 + 16);
  sub_14634E0(v13, (int *)(a5 + 16));
  if ( a8 )
  {
    p_src = (__int64 *)&src;
    src = v127;
    sub_14D6030(&src, a8, (__int64)&a8[HIDWORD(a7)]);
  }
  else
  {
    LOBYTE(v127[0]) = 0;
    p_src = (__int64 *)&src;
    src = v127;
    n = 0;
  }
  v14 = (unsigned int *)&v120;
  if ( a1 )
  {
    v120 = (char *)&v121 + 8;
    sub_14D6030(&v120, a1, (__int64)&a1[a2]);
    v15 = v121;
    v16 = n;
    v17 = v120;
    v18 = v121 + n;
    if ( v120 == (char *)&v121 + 8 )
      v19 = 15;
    else
      v19 = *((_QWORD *)&v121 + 1);
  }
  else
  {
    v16 = n;
    v17 = (char *)&v121 + 8;
    v15 = 0;
    *(_QWORD *)&v121 = 0;
    v120 = (char *)&v121 + 8;
    v19 = 15;
    BYTE8(v121) = 0;
    v18 = n;
  }
  if ( v19 >= v18 )
  {
    if ( v16 )
    {
      v71 = &v17[v15];
      if ( v16 == 1 )
        *v71 = *(_BYTE *)src;
      else
        memcpy(v71, src, v16);
      v17 = v120;
    }
    goto LABEL_15;
  }
  if ( src == p_src + 2 )
    v20 = 15;
  else
    v20 = v127[0];
  if ( v20 < v18 )
  {
    sub_998B30((__int64)&v120, v15, 0, src, v16);
    v17 = v120;
LABEL_15:
    *(_QWORD *)&v121 = v18;
    v21 = (__m128i *)&v120;
    v17[v18] = 0;
    goto LABEL_16;
  }
  v21 = (__m128i *)sub_99BDC0(p_src, 0, 0, v17, v15);
LABEL_16:
  v114 = &v116;
  v112 = &v114;
  if ( (__m128i *)v21->m128i_i64[0] == &v21[1] )
  {
    v116 = _mm_loadu_si128(v21 + 1);
  }
  else
  {
    v114 = (void *)v21->m128i_i64[0];
    v116.m128i_i64[0] = v21[1].m128i_i64[0];
  }
  v22 = v21->m128i_u64[1];
  v21[1].m128i_i8[0] = 0;
  v115 = v22;
  v21->m128i_i64[0] = (__int64)v21[1].m128i_i64;
  v21->m128i_i64[1] = 0;
  if ( v120 != (char *)&v121 + 8 )
    operator delete(v120);
  if ( src != p_src + 2 )
    operator delete(src);
  sub_1564820(p_src, a5, v108, 1695);
  v23 = v114;
  v24 = v115;
  v25 = (unsigned __int8 *)src;
  if ( !src )
  {
    v84 = n;
    v85 = *(_DWORD *)(n + 14976);
    if ( v85 )
    {
      v87 = (unsigned int)(v85 - 1);
      *(_DWORD *)(n + 14976) = v87;
      v25 = *(unsigned __int8 **)(v84 + 8 * v87 + 14848);
      v88 = *((unsigned int *)v25 + 134);
      *v25 = 0;
      v89 = *((_QWORD *)v25 + 66);
      *((_DWORD *)v25 + 106) = 0;
      v90 = v89 + (v88 << 6);
      if ( v89 != v90 )
      {
        v113 = &v120;
        do
        {
          while ( 1 )
          {
            v90 -= 64;
            v91 = *(void **)(v90 + 24);
            if ( v91 == (void *)(v90 + 40) )
              break;
            operator delete(v91);
            if ( v89 == v90 )
              goto LABEL_142;
          }
        }
        while ( v89 != v90 );
LABEL_142:
        v14 = (unsigned int *)v113;
      }
      *((_DWORD *)v25 + 134) = 0;
    }
    else
    {
      v113 = v114;
      v25 = (unsigned __int8 *)operator new(0x3A0u);
      *v25 = 0;
      *((_QWORD *)v25 + 12) = v25 + 112;
      *((_QWORD *)v25 + 16) = v25 + 144;
      *((_QWORD *)v25 + 20) = v25 + 176;
      *((_QWORD *)v25 + 24) = v25 + 208;
      *((_QWORD *)v25 + 28) = v25 + 240;
      *((_QWORD *)v25 + 32) = v25 + 272;
      *((_QWORD *)v25 + 36) = v25 + 304;
      *((_QWORD *)v25 + 40) = v25 + 336;
      *((_QWORD *)v25 + 44) = v25 + 368;
      *((_QWORD *)v25 + 48) = v25 + 400;
      *((_QWORD *)v25 + 52) = v25 + 432;
      *((_QWORD *)v25 + 13) = 0;
      v25[112] = 0;
      *((_QWORD *)v25 + 17) = 0;
      v25[144] = 0;
      *((_QWORD *)v25 + 21) = 0;
      v25[176] = 0;
      *((_QWORD *)v25 + 25) = 0;
      v25[208] = 0;
      *((_QWORD *)v25 + 29) = 0;
      v25[240] = 0;
      *((_QWORD *)v25 + 33) = 0;
      v25[272] = 0;
      *((_QWORD *)v25 + 37) = 0;
      v25[304] = 0;
      *((_QWORD *)v25 + 41) = 0;
      v25[336] = 0;
      *((_QWORD *)v25 + 45) = 0;
      v25[368] = 0;
      *((_QWORD *)v25 + 49) = 0;
      v25[400] = 0;
      *((_QWORD *)v25 + 53) = 0x800000000LL;
      v23 = v113;
      *((_QWORD *)v25 + 66) = v25 + 544;
      *((_QWORD *)v25 + 67) = 0x600000000LL;
    }
    src = v25;
  }
  v25[*v25 + 1] = 0;
  v117 = v119;
  if ( &v23[v24] && !v23 )
    goto LABEL_150;
  if ( (unsigned __int64)v24 > 0xF )
  {
    if ( v24 < 0 )
      goto LABEL_173;
    v113 = v23;
    v26 = (_QWORD *)operator new(v24 + 1);
    v119[0] = v24;
    v117 = v26;
LABEL_110:
    memcpy(v26, v23, v24);
    v26 = v117;
    goto LABEL_28;
  }
  if ( v24 == 1 )
  {
    LOBYTE(v119[0]) = *v23;
    v26 = v119;
    goto LABEL_28;
  }
  v26 = v119;
  if ( v24 )
    goto LABEL_110;
LABEL_28:
  v118 = v24;
  *((_BYTE *)v26 + v24) = 0;
  v27 = src;
  v28 = *(unsigned __int8 *)src;
  *(_BYTE *)src = v28 + 1;
  v29 = (unsigned __int8)v28;
  v30 = 4 * (v28 + 3);
  v31 = (void **)&v27[v30];
  v32 = (_BYTE *)v27[v30];
  if ( v117 == v119 )
  {
    v81 = v118;
    if ( v118 )
    {
      if ( v118 == 1 )
        *v32 = v119[0];
      else
        memcpy(v32, v117, v118);
      v81 = v118;
      v32 = *v31;
    }
    v31[1] = (void *)v81;
    v32[v81] = 0;
    v32 = v117;
  }
  else
  {
    if ( v32 == (_BYTE *)&v27[v30 + 2] )
    {
      *v31 = v117;
      v31[1] = (void *)v118;
      v31[2] = (void *)v119[0];
    }
    else
    {
      v33 = v27[4 * v29 + 14];
      *v31 = v117;
      v31[1] = (void *)v118;
      v31[2] = (void *)v119[0];
      if ( v32 )
      {
        v117 = v32;
        v119[0] = v33;
        goto LABEL_32;
      }
    }
    v32 = v119;
    v117 = v119;
  }
LABEL_32:
  v118 = 0;
  *v32 = 0;
  if ( v117 != v119 )
    operator delete(v117);
  *(_QWORD *)((char *)&v121 + 4) = 0;
  v120 = (void *)__PAIR64__((unsigned int)v109, v108);
  BYTE12(v121) = 0;
  dest = v14 + 10;
  v123.m128_u64[0] = 0;
  v123.m128_i8[8] = 0;
  v124 = 0;
  LOBYTE(v121) = 1;
  v117 = v119;
  sub_14D6030(&v117, v114, (__int64)v114 + v115);
  v34 = dest;
  if ( v117 == v119 )
  {
    v80 = v118;
    if ( v118 )
    {
      if ( v118 == 1 )
        *(_BYTE *)dest = v119[0];
      else
        memcpy(dest, v117, v118);
      v80 = v118;
      v34 = dest;
    }
    v123.m128_u64[0] = v80;
    v34[v80] = 0;
    v34 = v117;
  }
  else
  {
    if ( dest == v14 + 10 )
    {
      v109 = (void *)v119[0];
      dest = v117;
      v123 = _mm_loadh_ps((const double *)&v109);
    }
    else
    {
      v109 = (void *)v119[0];
      v35 = v123.m128_u64[1];
      dest = v117;
      v123 = _mm_loadh_ps((const double *)&v109);
      if ( v34 )
      {
        v117 = v34;
        v119[0] = v35;
        goto LABEL_38;
      }
    }
    v34 = v119;
    v117 = v119;
  }
LABEL_38:
  v118 = 0;
  *v34 = 0;
  if ( v117 != v119 )
    operator delete(v117);
  if ( (_DWORD)v120 && HIDWORD(v120) )
  {
    v36 = (unsigned int *)src;
    if ( src )
    {
      v37 = *((unsigned int *)src + 134);
      v38 = *((unsigned int **)src + 66);
      v39 = *((unsigned int *)src + 135);
      v40 = v37 + 1;
      v41 = &v38[16 * v37];
    }
    else
    {
      v92 = n;
      v93 = *(_DWORD *)(n + 14976);
      if ( v93 )
      {
        v99 = (unsigned int)(v93 - 1);
        *(_DWORD *)(n + 14976) = v99;
        v36 = *(unsigned int **)(v92 + 8 * v99 + 14848);
        v100 = v36[134];
        *(_BYTE *)v36 = 0;
        v101 = *((unsigned int **)v36 + 66);
        v36[106] = 0;
        v38 = &v101[16 * v100];
        if ( v101 != v38 )
        {
          v102 = v38;
          do
          {
            while ( 1 )
            {
              v102 -= 16;
              v103 = *((unsigned int **)v102 + 3);
              if ( v103 == v102 + 10 )
                break;
              operator delete(v103);
              if ( v101 == v102 )
                goto LABEL_164;
            }
          }
          while ( v101 != v102 );
LABEL_164:
          v38 = *((unsigned int **)v36 + 66);
        }
        v36[134] = 0;
        v39 = v36[135];
      }
      else
      {
        v36 = (unsigned int *)operator new(0x3A0u);
        *(_BYTE *)v36 = 0;
        *((_QWORD *)v36 + 12) = v36 + 28;
        v38 = v36 + 136;
        *((_QWORD *)v36 + 16) = v36 + 36;
        *((_QWORD *)v36 + 20) = v36 + 44;
        *((_QWORD *)v36 + 24) = v36 + 52;
        *((_QWORD *)v36 + 28) = v36 + 60;
        *((_QWORD *)v36 + 32) = v36 + 68;
        *((_QWORD *)v36 + 36) = v36 + 76;
        *((_QWORD *)v36 + 40) = v36 + 84;
        *((_QWORD *)v36 + 44) = v36 + 92;
        *((_QWORD *)v36 + 48) = v36 + 100;
        *((_QWORD *)v36 + 52) = v36 + 108;
        *((_QWORD *)v36 + 13) = 0;
        *((_BYTE *)v36 + 112) = 0;
        *((_QWORD *)v36 + 17) = 0;
        *((_BYTE *)v36 + 144) = 0;
        *((_QWORD *)v36 + 21) = 0;
        *((_BYTE *)v36 + 176) = 0;
        *((_QWORD *)v36 + 25) = 0;
        *((_BYTE *)v36 + 208) = 0;
        *((_QWORD *)v36 + 29) = 0;
        *((_BYTE *)v36 + 240) = 0;
        *((_QWORD *)v36 + 33) = 0;
        *((_BYTE *)v36 + 272) = 0;
        *((_QWORD *)v36 + 37) = 0;
        *((_BYTE *)v36 + 304) = 0;
        *((_QWORD *)v36 + 41) = 0;
        *((_BYTE *)v36 + 336) = 0;
        *((_QWORD *)v36 + 45) = 0;
        *((_BYTE *)v36 + 368) = 0;
        *((_QWORD *)v36 + 49) = 0;
        *((_BYTE *)v36 + 400) = 0;
        *((_QWORD *)v36 + 53) = 0x800000000LL;
        *((_QWORD *)v36 + 66) = v36 + 136;
        *((_QWORD *)v36 + 67) = 0x600000000LL;
        v39 = 6;
      }
      src = v36;
      v41 = v38;
      v40 = 1;
    }
    v42 = (char *)v14;
    if ( v40 > v39 )
    {
      v94 = v36 + 136;
      if ( v38 > v14 || v41 <= v14 )
      {
        v109 = v36 + 132;
        v104 = sub_2237400(v36 + 132, v36 + 136, v40, 64, &v117);
        sub_9EF810((__int64 *)v109, v104);
        v105 = *((unsigned int **)v36 + 66);
        v106 = (unsigned int)v117;
        if ( v105 == v94 )
        {
          *((_QWORD *)v36 + 66) = v104;
        }
        else
        {
          v109 = v117;
          free(v105);
          *((_QWORD *)v36 + 66) = v104;
          v106 = (unsigned int)v109;
        }
        v36[135] = v106;
        v42 = (char *)v14;
        v41 = (unsigned int *)(((unsigned __int64)v36[134] << 6) + v104);
      }
      else
      {
        v95 = (char *)((char *)v14 - (char *)v38);
        v113 = v36 + 132;
        v109 = (void *)sub_2237400(v36 + 132, v36 + 136, v40, 64, &v117);
        sub_9EF810((__int64 *)v113, (__int64)v109);
        v96 = (unsigned int)v117;
        v97 = v109;
        v98 = *((unsigned int **)v36 + 66);
        if ( v98 != v94 )
        {
          v113 = v117;
          free(v98);
          v97 = v109;
          v96 = (unsigned int)v113;
        }
        *((_QWORD *)v36 + 66) = v109;
        v36[135] = v96;
        v42 = &v95[(_QWORD)v97];
        v41 = (unsigned int *)((char *)v97 + 64 * (unsigned __int64)v36[134]);
      }
    }
    *(_QWORD *)v41 = *(_QWORD *)v42;
    v41[2] = *((_DWORD *)v42 + 2);
    *(_QWORD *)(v41 + 3) = *(_QWORD *)(v42 + 12);
    v41[5] = *((_DWORD *)v42 + 5);
    v43 = v41 + 10;
    *((_QWORD *)v41 + 3) = v41 + 10;
    v44 = *((char **)v42 + 3);
    v45 = *((_QWORD *)v42 + 4);
    if ( !&v44[v45] || v44 )
    {
      if ( (unsigned __int64)v45 <= 0xF )
      {
        if ( v45 == 1 )
        {
          *((_BYTE *)v41 + 40) = *v44;
LABEL_50:
          *((_QWORD *)v41 + 4) = v45;
          v43[v45] = 0;
          *((_BYTE *)v41 + 56) = v42[56];
          ++v36[134];
          goto LABEL_51;
        }
        if ( !v45 )
          goto LABEL_50;
LABEL_131:
        memcpy(v43, v44, v45);
        v43 = *((_BYTE **)v41 + 3);
        goto LABEL_50;
      }
      v109 = *((void **)v42 + 3);
      if ( v45 >= 0 )
      {
        v43 = (_BYTE *)operator new(v45 + 1);
        *((_QWORD *)v41 + 5) = v45;
        v44 = (char *)v109;
        *((_QWORD *)v41 + 3) = v43;
        goto LABEL_131;
      }
LABEL_173:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_150:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
LABEL_51:
  if ( dest != v14 + 10 )
    operator delete(dest);
  if ( (_BYTE)v129 )
  {
    sub_FC7790(v127[0], p_src, SHIBYTE(v129));
    v127[0] = 0;
    v129 = 0;
  }
  if ( v128 != p_src + 6 )
    operator delete(v128);
  v46 = (void **)src;
  if ( src )
  {
    v47 = n;
    if ( n )
    {
      if ( (unsigned __int64)src < n || (unsigned __int64)src > n + 14848 )
      {
        v48 = *((void ***)src + 66);
        v49 = &v48[8 * (unsigned __int64)*((unsigned int *)src + 134)];
        if ( v48 != v49 )
        {
          do
          {
            while ( 1 )
            {
              v49 -= 8;
              v50 = (void **)v49[3];
              if ( v50 == v49 + 5 )
                break;
              operator delete(v50);
              if ( v48 == v49 )
                goto LABEL_63;
            }
          }
          while ( v48 != v49 );
LABEL_63:
          v49 = (void **)v46[66];
        }
        if ( v49 != v46 + 68 )
          free(v49);
        v51 = (void **)v46[52];
        v52 = v46 + 52;
        if ( v51 != v46 + 54 )
          free(v51);
        v53 = v46 + 12;
        do
        {
          while ( 1 )
          {
            v52 -= 4;
            if ( *v52 == v52 + 2 )
              break;
            operator delete(*v52);
            if ( v53 == v52 )
              goto LABEL_71;
          }
        }
        while ( v53 != v52 );
LABEL_71:
        operator delete(v46, 0x3A0u);
      }
      else
      {
        v82 = *(unsigned int *)(n + 14976);
        *(_DWORD *)(n + 14976) = v82 + 1;
        *(_QWORD *)(v47 + 8 * v82 + 14848) = v46;
      }
    }
  }
  v54 = v114;
  v55 = v115;
  v56 = (unsigned __int64 *)(*v111 + 8LL * *((unsigned int *)v111 + 2) - 8);
  v57 = sub_2244B30(v114, v115);
  v59 = sub_2244CB0(a10 + 552, v54, v55, v57);
  v60 = (__int64 *)(*(_QWORD *)(a10 + 552) + 8LL * v59);
  if ( *v60 )
  {
    if ( *v60 != -8 )
    {
      sub_989490((__int64 **)p_src, v60, 0);
      v63 = *(_QWORD *)src;
      v64 = *(_QWORD **)(*(_QWORD *)src + 8LL);
      if ( v64 )
        goto LABEL_75;
      goto LABEL_99;
    }
    --*(_DWORD *)(a10 + 568);
  }
  v72 = *(_QWORD *)(a10 + 576);
  *(_QWORD *)(a10 + 656) += v55 + 17;
  v73 = (_QWORD *)((v72 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v74 = (char *)v73 + v55 + 17;
  if ( *(_QWORD *)(a10 + 584) >= (unsigned __int64)v74 && v72 )
  {
    *(_QWORD *)(a10 + 576) = v74;
  }
  else
  {
    v109 = v60;
    v86 = sub_986170(a10 + 576, v55 + 17, v55 + 17, 3, (__int64)v60, v58);
    v60 = (__int64 *)v109;
    v73 = (_QWORD *)v86;
  }
  v75 = v73 + 2;
  if ( v55 )
  {
    v111 = v73;
    v109 = v60;
    v83 = memcpy(v73 + 2, v54, v55);
    v73 = v111;
    v60 = (__int64 *)v109;
    v75 = v83;
  }
  *((_BYTE *)v75 + v55) = 0;
  *v73 = v55;
  v73[1] = 0;
  *v60 = (__int64)v73;
  ++*(_DWORD *)(a10 + 564);
  v76 = sub_22450D0(a10 + 552, v59);
  sub_989490((__int64 **)p_src, (__int64 *)(*(_QWORD *)(a10 + 552) + 8LL * v76), 0);
  v63 = *(_QWORD *)src;
  v64 = *(_QWORD **)(*(_QWORD *)src + 8LL);
  if ( !v64 )
  {
LABEL_99:
    v77 = *(_QWORD *)(a10 + 672);
    if ( !v77
      || (v64 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v77 + 16LL))(v77, v54, v55),
          (*(_QWORD *)(v63 + 8) = v64) == 0) )
    {
      v78 = *(_QWORD *)(a10 + 576);
      *(_QWORD *)(a10 + 656) += 24LL;
      v64 = (_QWORD *)((v78 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(a10 + 584) >= (unsigned __int64)(v64 + 3) && v78 )
        *(_QWORD *)(a10 + 576) = v64 + 3;
      else
        v64 = (_QWORD *)sub_986170(a10 + 576, 24, 24, 3, v61, v62);
      v79 = *v64 & 0xFFFFF80000000000LL;
      v64[1] = 0;
      *v64 = v79 | 0x1FFFC05;
      *(_QWORD *)(v63 + 8) = v64;
      v64[2] = v63;
    }
  }
LABEL_75:
  v65 = v110;
  v66 = *(_QWORD *)(v110 + 2352);
  *(_QWORD *)(v110 + 2432) += 16LL;
  v67 = (v66 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v65 + 2360) >= v67 + 16 && v66 )
  {
    *(_QWORD *)(v65 + 2352) = v67 + 16;
    v68 = (v66 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v68 = sub_986170(v110 + 2352, 16, 16, 3, v61, v62);
    v67 = v68 & 0xFFFFFFFFFFFFFFFDLL;
  }
  v69 = v108;
  v70 = v112;
  *(_QWORD *)(v68 + 8) = v64;
  *(_DWORD *)v68 = v69;
  *v56 = v67 | 2;
  if ( v114 != v70 + 2 )
    operator delete(v114);
}
