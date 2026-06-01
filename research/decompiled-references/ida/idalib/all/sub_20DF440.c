__int64 __fastcall sub_20DF440(char **a1, int a2)
{
  __int64 v2; // r8
  unsigned __int8 **v4; // r14
  unsigned __int8 *v5; // r13
  __int64 v6; // rdx
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  __m128 v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rdx
  unsigned __int8 *v12; // rax
  __int64 *v13; // rdi
  char **v14; // rbp
  __m128 v15; // xmm0
  __m128i v16; // xmm0
  unsigned __int8 *v17; // rdx
  char *v18; // rax
  char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  char *v22; // r10
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int8 *v25; // rbp
  __int64 v26; // rcx
  unsigned __int8 *v27; // rdi
  unsigned __int64 v28; // rsi
  __int64 *v29; // rdi
  __int64 v30; // r11
  unsigned __int64 v31; // rdi
  unsigned __int8 *v32; // r14
  char *v33; // rbp
  char *v34; // rax
  void *v35; // rsi
  unsigned __int8 *v36; // r12
  char *v37; // rdi
  void **v38; // rcx
  void **v39; // rax
  char *v40; // rdi
  char *v41; // r12
  char *v42; // rcx
  unsigned __int8 *v43; // rdx
  unsigned __int8 *v44; // rax
  __m128i v46; // xmm1
  unsigned __int8 *v47; // rbx
  _OWORD *v48; // rdi
  size_t v49; // rdx
  __m128i v50; // xmm0
  _BYTE *v51; // r13
  signed __int64 v52; // rdx
  __m128i v53; // xmm0
  _BYTE *v54; // r13
  char *v55; // rdx
  __int64 v56; // rbp
  char *v57; // rax
  __m128i v58; // xmm1
  unsigned __int8 *v59; // rdx
  __m128 v60; // xmm0
  __m128i v61; // xmm0
  char v62; // dl
  __int64 v63; // rcx
  __m128 v64; // xmm0
  __m128i v65; // xmm0
  __int64 v66; // rdx
  char v67; // cl
  __int64 v68; // rbp
  size_t v69; // r13
  char v70; // al
  size_t v71; // r13
  bool v72; // al
  __int64 v73; // r13
  char *v74; // rax
  unsigned __int8 *v75; // rdx
  __int64 v76; // rbp
  __int64 v77; // rbp
  __int64 v78; // rdx
  int v79; // edx
  __int64 v80; // rsi
  void *v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rbp
  char *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  int v87; // r10d
  char v88; // dl
  char v89; // r8
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rax
  char v93; // al
  __int64 v94; // r10
  char *v95; // rdx
  __int64 v96; // rbp
  char *v97; // rax
  __int64 v98; // r13
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  char v115; // bp
  __int64 v116; // rax
  __int64 v117; // rdi
  __int64 v118; // rax
  char *v119; // rbp
  __int64 v120; // rax
  __int64 v121; // rsi
  void *v122; // r13
  __int64 v123; // rdx
  __int64 v124; // rbp
  __int64 v125; // rsi
  char v126; // al
  __int64 v127; // rax
  __int64 v128; // rdx
  char v129; // cl
  __m128i v130; // [rsp+0h] [rbp-138h] BYREF
  __int64 *v131; // [rsp+10h] [rbp-128h]
  unsigned __int8 **v132; // [rsp+18h] [rbp-120h]
  __m128i v133; // [rsp+20h] [rbp-118h] BYREF
  __int64 v134; // [rsp+38h] [rbp-100h] BYREF
  __int64 v135; // [rsp+40h] [rbp-F8h] BYREF
  char v136; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v137; // [rsp+50h] [rbp-E8h]
  char v138; // [rsp+58h] [rbp-E0h]
  char **v139; // [rsp+60h] [rbp-D8h]
  void *ptr[2]; // [rsp+68h] [rbp-D0h]
  void **v141; // [rsp+78h] [rbp-C0h]
  _OWORD v142[2]; // [rsp+80h] [rbp-B8h] BYREF
  void *src[2]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int8 *v144; // [rsp+B0h] [rbp-88h]
  _OWORD v145[4]; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v146[64]; // [rsp+F8h] [rbp-40h] BYREF

  v2 = (__int64)(a1 + 75);
  v4 = (unsigned __int8 **)a1[83];
  v5 = (unsigned __int8 *)a1[72];
  LODWORD(v132) = a2;
  v6 = (__int64)a1[84];
  v139 = a1;
  v130.m128i_i64[0] = (__int64)v145;
  v7 = _mm_loadl_epi64(&v130);
  v131 = (__int64 *)v145;
  v8 = _mm_unpacklo_epi64(v7, v7);
  v141 = src;
  ptr[0] = v142;
  ptr[1] = v142;
  memset(v142, 0, sizeof(v142));
  *(__m128i *)src = v8;
  v144 = v146;
  memset(v145, 0, sizeof(v145));
  if ( v4 != (unsigned __int8 **)(a1 + 86) )
  {
    v130.m128i_i64[0] = v6;
    v141 = (void **)a1[85];
    v9 = _mm_loadh_ps((const double *)v130.m128i_i64);
    v130.m128i_i64[0] = (__int64)(a1 + 86);
    *(__m128 *)ptr = v9;
    v10 = _mm_loadl_epi64(&v130);
    a1[85] = (char *)(a1 + 90);
    *(__m128i *)(a1 + 83) = _mm_unpacklo_epi64(v10, v10);
    if ( (unsigned __int8 *)v2 != v5 )
    {
LABEL_3:
      v11 = (__int64)a1[73];
      v12 = (unsigned __int8 *)a1[74];
LABEL_4:
      v13 = (__int64 *)v2;
      v14 = a1;
      v130.m128i_i64[0] = v11;
      v144 = v12;
      a1[74] = (char *)(a1 + 83);
      v15 = _mm_loadh_ps((const double *)v130.m128i_i64);
      v130.m128i_i64[0] = v2;
      *(__m128 *)src = v15;
      v16 = _mm_loadl_epi64(&v130);
      *((__m128i *)a1 + 36) = _mm_unpacklo_epi64(v16, v16);
      goto LABEL_5;
    }
    goto LABEL_36;
  }
  v133 = v8;
  v56 = v6 - (_QWORD)v4;
  if ( v4 == (unsigned __int8 **)v6 )
  {
    ptr[1] = (char *)v142 + v56;
    if ( (unsigned __int8 *)v2 != v5 )
      goto LABEL_3;
    goto LABEL_36;
  }
  v130.m128i_i64[0] = (__int64)(a1 + 75);
  v57 = (char *)memcpy(v142, v4, v6 - (_QWORD)v4);
  v2 = v130.m128i_i64[0];
  v13 = (__int64 *)src[0];
  a1[84] = (char *)v4;
  v58 = _mm_load_si128(&v133);
  ptr[1] = &v57[v56];
  if ( (unsigned __int8 *)v2 == v5 )
  {
    v130 = v58;
    if ( v13 != v131 )
    {
      free(v13);
      v46 = _mm_load_si128(&v130);
      v144 = v146;
      v5 = (unsigned __int8 *)a1[72];
      *(__m128i *)src = v46;
    }
LABEL_36:
    v47 = (unsigned __int8 *)a1[73];
    v48 = v145;
    v49 = v47 - v5;
    if ( v47 != v5 )
    {
      memmove(v145, v5, v49);
      v5 = (unsigned __int8 *)a1[72];
      v48 = src[0];
      v49 = v47 - v5;
    }
    v14 = v139;
    a1[73] = (char *)v5;
    src[1] = (char *)v48 + v49;
    v13 = (__int64 *)v14[72];
    goto LABEL_5;
  }
  v11 = (__int64)a1[73];
  v12 = (unsigned __int8 *)a1[74];
  if ( v13 == v131 )
    goto LABEL_4;
  v14 = a1;
  v130.m128i_i64[0] = (__int64)a1[73];
  v59 = v144;
  v144 = v12;
  a1[74] = (char *)v59;
  v60 = _mm_loadh_ps((const double *)v130.m128i_i64);
  v130.m128i_i64[0] = (__int64)v13;
  *(__m128 *)src = v60;
  v61 = _mm_loadl_epi64(&v130);
  *((__m128i *)a1 + 36) = _mm_unpacklo_epi64(v61, v61);
LABEL_5:
  v17 = (unsigned __int8 *)v14[83];
  v14[73] = (char *)v13;
  v14[84] = (char *)v17;
  v18 = *a1;
  v19 = a1[1];
  if ( *a1 != v19 )
  {
    if ( *v18 != 71 )
    {
      if ( *v18 != 84 )
        goto LABEL_8;
      if ( v19 - v18 != 1 )
      {
        switch ( v18[1] )
        {
          case 'A':
            *a1 = v18 + 2;
            v100 = sub_20E1340(a1);
            v21 = v100;
            if ( v100 )
              v21 = sub_20D17D0((__int64)(a1 + 102), "template parameter object for ", v100);
            goto LABEL_22;
          case 'C':
            *a1 = v18 + 2;
            v96 = sub_20D8F30((__int64)a1);
            if ( !v96 )
              goto LABEL_54;
            if ( !sub_20CEB80(a1, 1) )
              goto LABEL_54;
            v97 = *a1;
            if ( *a1 == a1[1] )
              goto LABEL_54;
            if ( *v97 != 95 )
              goto LABEL_54;
            *a1 = v97 + 1;
            v98 = sub_20D8F30((__int64)a1);
            if ( !v98 )
              goto LABEL_54;
            v99 = sub_20CF970((__int64)(a1 + 102), 32);
            *(_WORD *)(v99 + 8) = 16406;
            v21 = v99;
            LOBYTE(v99) = *(_BYTE *)(v99 + 10);
            *(_QWORD *)(v21 + 24) = v96;
            v14 = v139;
            *(_QWORD *)(v21 + 16) = v98;
            v17 = (unsigned __int8 *)v14[83];
            *(_BYTE *)(v21 + 10) = v99 & 0xF0 | 5;
            *(_QWORD *)v21 = off_2BE6F60;
            goto LABEL_23;
          case 'H':
            *a1 = v18 + 2;
            v107 = sub_20DD4B0((__int64)a1, 0);
            v21 = v107;
            if ( !v107 )
              goto LABEL_22;
            v108 = sub_20D17D0((__int64)(a1 + 102), "thread-local initialization routine for ", v107);
            v14 = v139;
            v21 = v108;
            v17 = (unsigned __int8 *)v139[83];
            goto LABEL_23;
          case 'I':
            *a1 = v18 + 2;
            v105 = sub_20D8F30((__int64)a1);
            v21 = v105;
            if ( !v105 )
              goto LABEL_22;
            v106 = sub_20D17D0((__int64)(a1 + 102), "typeinfo for ", v105);
            v14 = v139;
            v21 = v106;
            v17 = (unsigned __int8 *)v139[83];
            goto LABEL_23;
          case 'S':
            *a1 = v18 + 2;
            v103 = sub_20D8F30((__int64)a1);
            v21 = v103;
            if ( !v103 )
              goto LABEL_22;
            v104 = sub_20D17D0((__int64)(a1 + 102), "typeinfo name for ", v103);
            v14 = v139;
            v21 = v104;
            v17 = (unsigned __int8 *)v139[83];
            goto LABEL_23;
          case 'T':
            *a1 = v18 + 2;
            v101 = sub_20D8F30((__int64)a1);
            v21 = v101;
            if ( !v101 )
              goto LABEL_22;
            v102 = sub_20D17D0((__int64)(a1 + 102), "VTT for ", v101);
            v14 = v139;
            v21 = v102;
            v17 = (unsigned __int8 *)v139[83];
            goto LABEL_23;
          case 'V':
            *a1 = v18 + 2;
            v111 = sub_20D8F30((__int64)a1);
            v21 = v111;
            if ( !v111 )
              goto LABEL_22;
            v112 = sub_20D17D0((__int64)(a1 + 102), "vtable for ", v111);
            v14 = v139;
            v21 = v112;
            v17 = (unsigned __int8 *)v139[83];
            goto LABEL_23;
          case 'W':
            *a1 = v18 + 2;
            v109 = sub_20DD4B0((__int64)a1, 0);
            v21 = v109;
            if ( !v109 )
              goto LABEL_22;
            v110 = sub_20D17D0((__int64)(a1 + 102), "thread-local wrapper routine for ", v109);
            v14 = v139;
            v21 = v110;
            v17 = (unsigned __int8 *)v139[83];
            goto LABEL_23;
          case 'c':
            *a1 = v18 + 2;
            if ( (unsigned __int8)sub_20CEBF0((__int64)a1) || (unsigned __int8)sub_20CEBF0((__int64)a1) )
              goto LABEL_54;
            v113 = sub_20DF440(a1, 1);
            v21 = v113;
            if ( !v113 )
              goto LABEL_22;
            v114 = sub_20D17D0((__int64)(a1 + 102), "covariant return thunk to ", v113);
            v14 = v139;
            v21 = v114;
            v17 = (unsigned __int8 *)v139[83];
            break;
          default:
            goto LABEL_120;
        }
        goto LABEL_23;
      }
LABEL_120:
      v115 = 0;
      *a1 = v18 + 1;
      if ( v19 != v18 + 1 )
        v115 = v18[1];
      if ( (unsigned __int8)sub_20CEBF0((__int64)a1) )
        goto LABEL_54;
      v116 = sub_20DF440(a1, 1);
      v21 = v116;
      if ( v116 )
      {
        v117 = (__int64)(a1 + 102);
        if ( v115 == 118 )
          v118 = sub_20D17D0(v117, "virtual thunk to ", v116);
        else
          v118 = sub_20D17D0(v117, "non-virtual thunk to ", v116);
        v14 = v139;
        v21 = v118;
        v17 = (unsigned __int8 *)v139[83];
        goto LABEL_23;
      }
LABEL_22:
      v14 = v139;
      v17 = (unsigned __int8 *)v139[83];
      goto LABEL_23;
    }
    v21 = 0;
    if ( v19 - v18 == 1 )
      goto LABEL_23;
    v67 = v18[1];
    if ( v67 != 82 )
    {
      if ( v67 != 86 )
      {
        if ( v67 == 73 )
        {
          v135 = 0;
          *a1 = v18 + 2;
          if ( !(unsigned __int8)sub_20D8770(a1, &v135) )
          {
            v68 = v135;
            if ( v135 )
            {
              v69 = j__strlen("initializer for module ");
              v21 = sub_20CF970((__int64)(a1 + 102), 40);
              *(_WORD *)(v21 + 8) = 16405;
              v70 = *(_BYTE *)(v21 + 10);
              *(_QWORD *)(v21 + 16) = v69;
              *(_QWORD *)(v21 + 32) = v68;
              *(_BYTE *)(v21 + 10) = v70 & 0xF0 | 5;
              *(_QWORD *)v21 = off_2BE6F00;
              *(_QWORD *)(v21 + 24) = "initializer for module ";
            }
          }
          goto LABEL_22;
        }
        goto LABEL_23;
      }
      *a1 = v18 + 2;
      v91 = sub_20DD4B0((__int64)a1, 0);
      v21 = v91;
      if ( v91 )
      {
        v92 = sub_20D17D0((__int64)(a1 + 102), "guard variable for ", v91);
        v14 = v139;
        v21 = v92;
        v17 = (unsigned __int8 *)v139[83];
        goto LABEL_23;
      }
      goto LABEL_22;
    }
    *a1 = v18 + 2;
    if ( sub_20DD4B0((__int64)a1, 0) )
    {
      v93 = sub_20CECD0(a1, &v135);
      v95 = *a1;
      if ( *a1 != a1[1] && *v95 == 95 )
      {
        *a1 = v95 + 1;
        goto LABEL_95;
      }
      if ( v93 )
      {
LABEL_95:
        v21 = sub_20D17D0((__int64)(a1 + 102), "reference temporary for ", v94);
        goto LABEL_22;
      }
    }
    v21 = 0;
    goto LABEL_22;
  }
LABEL_8:
  v136 = 0;
  v20 = a1[91] - a1[90];
  LOWORD(v135) = 0;
  HIDWORD(v135) = 0;
  v137 = v20 >> 3;
  v138 = 0;
  v21 = sub_20DD4B0((__int64)a1, (__int64)&v135);
  if ( !v21 )
    goto LABEL_22;
  v22 = a1[90];
  v23 = v137;
  v24 = (a1[91] - v22) >> 3;
  v25 = (unsigned __int8 *)&v22[8 * v137];
  if ( v137 < v24 )
  {
    v26 = *(_QWORD *)v25;
    v27 = (unsigned __int8 *)a1[83];
    v28 = *(_QWORD *)(*(_QWORD *)v25 + 16LL);
    if ( a1[84] == (char *)v27
      || (v29 = *(__int64 **)v27) == nullptr
      || (v30 = *v29, v31 = (v29[1] - *v29) >> 3, v31 <= v28) )
    {
LABEL_54:
      v14 = v139;
      v21 = 0;
      v17 = (unsigned __int8 *)v139[83];
      goto LABEL_23;
    }
    while ( 1 )
    {
      ++v23;
      *(_QWORD *)(v26 + 24) = *(_QWORD *)(v30 + 8 * v28);
      if ( v24 <= v23 )
        break;
      v26 = *(_QWORD *)&v22[8 * v23];
      v28 = *(_QWORD *)(v26 + 16);
      if ( v28 >= v31 )
        goto LABEL_54;
    }
  }
  a1[91] = (char *)v25;
  v32 = (unsigned __int8 *)a1[1];
  v33 = *a1;
  if ( *a1 == (char *)v32 )
    goto LABEL_22;
  if ( (unsigned __int8)(*v33 - 46) <= 0x31u )
  {
    v66 = 0x2000000800001LL;
    if ( _bittest64(&v66, (unsigned int)(unsigned __int8)*v33 - 46) )
      goto LABEL_22;
  }
  if ( !(_BYTE)v132 )
  {
    v34 = v33 + 1;
    *a1 = v33 + 1;
    if ( *v33 )
    {
      do
      {
        if ( v32 == (unsigned __int8 *)v34 )
          break;
        *a1 = ++v34;
      }
      while ( *(v34 - 1) );
    }
    goto LABEL_22;
  }
  v71 = j__strlen("Ua9enable_ifI");
  v72 = sub_20D1BF0(v32 - (unsigned __int8 *)v33, v33, v71, "Ua9enable_ifI");
  v130.m128i_i64[0] = 0;
  if ( v72 )
  {
    v119 = &v33[v71];
    v120 = (a1[3] - a1[2]) >> 3;
    *a1 = v119;
    v130.m128i_i64[0] = v120;
    while ( v119 == (char *)v32 || *v119 != 69 )
    {
      v134 = sub_20E1340(a1);
      if ( !v134 )
        goto LABEL_54;
      sub_20D8690(a1 + 2, &v134);
      v119 = *a1;
      v32 = (unsigned __int8 *)a1[1];
    }
    v121 = v130.m128i_i64[0];
    *a1 = v119 + 1;
    v122 = sub_20CFAD0((__int64)a1, v121);
    v124 = v123;
    v125 = sub_20CF970((__int64)(a1 + 102), 32);
    *(_WORD *)(v125 + 8) = 16394;
    v130.m128i_i64[0] = v125;
    v126 = *(_BYTE *)(v125 + 10);
    *(_QWORD *)(v125 + 16) = v122;
    LOBYTE(v131) = v126;
    *(_QWORD *)(v125 + 24) = v124;
    *(_BYTE *)(v125 + 10) = v126 & 0xF0 | 5;
    *(_QWORD *)v125 = off_2BE6A80;
  }
  v73 = 0;
  if ( !(_BYTE)v135 )
  {
    if ( BYTE1(v135) )
    {
      v73 = sub_20D8F30((__int64)a1);
      if ( !v73 )
        goto LABEL_54;
    }
  }
  v74 = *a1;
  v75 = (unsigned __int8 *)a1[1];
  if ( *a1 == (char *)v75 || *v74 != 118 )
  {
    v76 = a1[3] - a1[2];
    v132 = (unsigned __int8 **)(a1 + 102);
    v77 = v76 >> 3;
    v131 = &v134;
    while ( 1 )
    {
      v78 = sub_20D8F30((__int64)a1);
      v134 = v78;
      if ( !v78 )
        goto LABEL_54;
      if ( (a1[3] - a1[2]) >> 3 == v77 && v138 )
      {
        v133.m128i_i64[0] = v78;
        v127 = sub_20CF970((__int64)v132, 24);
        v128 = v133.m128i_i64[0];
        *(_WORD *)(v127 + 8) = 16471;
        v129 = *(_BYTE *)(v127 + 10);
        *(_QWORD *)(v127 + 16) = v128;
        *(_BYTE *)(v127 + 10) = v129 & 0xF0 | 5;
        *(_QWORD *)v127 = off_2BE6DE0;
        v134 = v127;
      }
      sub_20D8690(a1 + 2, v131);
      if ( *a1 != a1[1] )
      {
        v79 = (unsigned __int8)**a1;
        if ( (unsigned __int8)(v79 - 46) > 0x31u )
          continue;
        v80 = 0x2000000800001LL;
        if ( !_bittest64(&v80, (unsigned int)(v79 - 46)) && (_BYTE)v79 != 81 )
          continue;
      }
      v81 = sub_20CFAD0((__int64)a1, v77);
      v83 = v82;
      v84 = *a1;
      v75 = (unsigned __int8 *)a1[1];
      goto LABEL_86;
    }
  }
  v84 = v74 + 1;
  v83 = 0;
  v81 = nullptr;
  *a1 = v84;
LABEL_86:
  v63 = 0;
  if ( v84 != (char *)v75 && *v84 == 81 )
  {
    v62 = *((_BYTE *)a1 + 778);
    *((_BYTE *)a1 + 778) = 1;
    *a1 = v84 + 1;
    LOBYTE(v131) = v62;
    v63 = sub_20DA8A0((__int64)a1);
    *((_BYTE *)a1 + 778) = (_BYTE)v131;
    if ( !v63 )
      goto LABEL_54;
  }
  v133.m128i_i64[0] = v63;
  LODWORD(v132) = HIDWORD(v135);
  LOBYTE(v131) = v136;
  v85 = sub_20CF970((__int64)(a1 + 102), 72);
  v86 = v133.m128i_i64[0];
  v87 = (int)v132;
  *(_WORD *)(v85 + 8) = 19;
  v88 = *(_BYTE *)(v85 + 10);
  *(_QWORD *)(v85 + 24) = v21;
  v89 = (char)v131;
  v90 = v130.m128i_i64[0];
  *(_QWORD *)(v85 + 40) = v83;
  v14 = v139;
  *(_QWORD *)(v85 + 16) = v73;
  *(_BYTE *)(v85 + 10) = v88 & 0xF0 | 1;
  *(_QWORD *)(v85 + 48) = v90;
  v21 = v85;
  *(_QWORD *)(v85 + 32) = v81;
  *(_QWORD *)v85 = off_2BE6E40;
  v17 = (unsigned __int8 *)v14[83];
  *(_QWORD *)(v85 + 56) = v86;
  *(_DWORD *)(v85 + 64) = v87;
  *(_BYTE *)(v85 + 68) = v89;
LABEL_23:
  v35 = ptr[0];
  v36 = (unsigned __int8 *)(v14 + 86);
  if ( ptr[0] == v142 )
  {
    if ( v17 != v36 )
    {
      free(v17);
      v130.m128i_i64[0] = (__int64)(v14 + 86);
      v53 = _mm_loadl_epi64(&v130);
      v14[85] = (char *)(v14 + 90);
      v35 = ptr[0];
      *(__m128i *)(v14 + 83) = _mm_unpacklo_epi64(v53, v53);
    }
    v54 = ptr[1];
    v55 = (char *)((char *)ptr[1] - (char *)v35);
    if ( ptr[1] != v35 )
    {
      memmove(v14 + 86, v35, (size_t)v55);
      v35 = ptr[0];
      v36 = (unsigned __int8 *)v14[83];
      v55 = (char *)(v54 - (char *)ptr[0]);
    }
    ptr[1] = v35;
    v14[84] = &v55[(_QWORD)v36];
    v14 = v139;
  }
  else
  {
    v37 = (char *)ptr[1];
    v38 = v141;
    if ( v17 == v36 )
    {
      v130.m128i_i64[0] = (__int64)ptr[1];
      v14[85] = (char *)v141;
      v64 = _mm_loadh_ps((const double *)v130.m128i_i64);
      v130.m128i_i64[0] = (__int64)v142;
      *(__m128 *)(v14 + 83) = v64;
      v65 = _mm_loadl_epi64(&v130);
      v141 = src;
      *(__m128i *)ptr = _mm_unpacklo_epi64(v65, v65);
    }
    else
    {
      v39 = (void **)v14[85];
      v14[83] = (char *)ptr[0];
      ptr[0] = v17;
      v14[84] = v37;
      v14[85] = (char *)v38;
      v141 = v39;
      ptr[1] = v17;
    }
  }
  v40 = v14[72];
  v41 = (char *)(v14 + 75);
  if ( src[0] == v145 )
  {
    if ( v40 == v41 )
    {
      v40 = (char *)src[0];
    }
    else
    {
      free(v40);
      v130.m128i_i64[0] = (__int64)(v14 + 75);
      v50 = _mm_loadl_epi64(&v130);
      v14[74] = (char *)(v14 + 83);
      v40 = (char *)src[0];
      *((__m128i *)v14 + 36) = _mm_unpacklo_epi64(v50, v50);
    }
    v51 = src[1];
    v52 = (char *)src[1] - (char *)v40;
    if ( src[1] != v40 )
    {
      memmove(v14 + 75, v40, v52);
      v40 = (char *)src[0];
      v41 = v14[72];
      v52 = v51 - (char *)src[0];
    }
    src[1] = v40;
    v14[73] = &v41[v52];
  }
  else
  {
    v42 = (char *)src[1];
    v43 = v144;
    if ( v40 == v41 )
    {
      v130.m128i_i64[0] = (__int64)src[1];
      v14[74] = (char *)v144;
      *((__m128 *)v14 + 36) = _mm_loadh_ps((const double *)v130.m128i_i64);
      goto LABEL_31;
    }
    v14[72] = (char *)src[0];
    v44 = (unsigned __int8 *)v14[74];
    src[0] = v40;
    v14[73] = v42;
    v14[74] = (char *)v43;
    v144 = v44;
    src[1] = v40;
  }
  if ( v40 != (char *)v145 )
    free(v40);
LABEL_31:
  if ( ptr[0] != v142 )
    free(ptr[0]);
  return v21;
}
