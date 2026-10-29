char __fastcall sub_A8AF80(__int64 a1, int *a2, unsigned __int32 a3, int a4, char a5, const __m128i *a6)
{
  int v8; // edx
  unsigned int v9; // r14d
  int v10; // r15d
  int v11; // eax
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rsi
  char *v18; // rbx
  char *v19; // r9
  __int64 v20; // r15
  __int64 v21; // rax
  _DWORD *v22; // rdx
  int v23; // ecx
  _DWORD *v24; // rsi
  __int64 v25; // rcx
  _DWORD *v26; // rdi
  _DWORD *v27; // rax
  int v28; // ecx
  __int64 v29; // rbp
  __int64 v30; // r11
  __int64 v31; // r15
  __int64 v32; // rax
  _DWORD *v33; // rdx
  int v34; // ecx
  _DWORD *v35; // rsi
  __int64 v36; // rcx
  _DWORD *v37; // rdi
  _DWORD *v38; // rax
  int v39; // ecx
  __int64 v40; // rbp
  __int64 v41; // rsi
  __m128i v42; // xmm0
  void (__fastcall *v43)(__m128i *, __m128i *, __int64); // rcx
  __int64 v44; // rdx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rsi
  __m128i v48; // xmm0
  void (__fastcall *v49)(__m128i *, __m128i *, __int64); // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  void **v52; // r13
  char *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  void **v59; // r13
  char *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __m128i v64; // xmm0
  char v65; // al
  char v66; // al
  char v67; // al
  __int64 v68; // rbp
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rsi
  bool v71; // cf
  unsigned __int64 v72; // rax
  size_t v73; // rdi
  __int64 v74; // rax
  __int32 v75; // edx
  __int64 v76; // rax
  __int8 v77; // si
  char *v78; // rcx
  char v79; // si
  __int64 v80; // rdx
  __int64 v81; // rdx
  __m128i v82; // xmm0
  __int64 v83; // rbp
  char *v84; // r12
  char v85; // di
  __int64 v86; // rsi
  char v87; // di
  __int64 v88; // rsi
  __int64 v89; // rsi
  __int64 v90; // rsi
  __m128i v91; // xmm0
  void *v92; // rdi
  char *v93; // rsi
  void *v94; // rbp
  char *v95; // rsi
  __int64 v96; // rbp
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rsi
  unsigned __int64 v99; // rax
  size_t v100; // rdi
  __int64 v101; // rax
  __int32 v102; // edx
  __int64 v103; // rax
  __int8 v104; // si
  char *v105; // rcx
  char v106; // si
  __int64 v107; // rdx
  __int64 v108; // rdx
  __m128i v109; // xmm0
  __int64 v110; // rbp
  char *v111; // r12
  char v112; // di
  __int64 v113; // rsi
  char v114; // di
  __int64 v115; // rsi
  __int64 v116; // rsi
  __int64 v117; // rsi
  __m128i v118; // xmm0
  char *v119; // rsi
  void *v120; // rbp
  char *v123; // [rsp+0h] [rbp-D8h]
  void *v124; // [rsp+0h] [rbp-D8h]
  char *v125; // [rsp+0h] [rbp-D8h]
  void *v126; // [rsp+0h] [rbp-D8h]
  char *v128; // [rsp+8h] [rbp-D0h]
  char *v129; // [rsp+8h] [rbp-D0h]
  char *v131; // [rsp+10h] [rbp-C8h]
  char *v132; // [rsp+10h] [rbp-C8h]
  char *v133; // [rsp+10h] [rbp-C8h]
  char *v134; // [rsp+10h] [rbp-C8h]
  char *v135; // [rsp+10h] [rbp-C8h]
  __int64 v136; // [rsp+10h] [rbp-C8h]
  char *v137; // [rsp+10h] [rbp-C8h]
  __int64 v138; // [rsp+10h] [rbp-C8h]
  __int64 v139; // [rsp+10h] [rbp-C8h]
  __int64 v141; // [rsp+18h] [rbp-C0h]
  __int64 v142; // [rsp+18h] [rbp-C0h]
  int ptrb; // [rsp+20h] [rbp-B8h]
  int ptrc; // [rsp+20h] [rbp-B8h]
  int ptrd; // [rsp+20h] [rbp-B8h]
  int ptre; // [rsp+20h] [rbp-B8h]
  int ptrf; // [rsp+20h] [rbp-B8h]
  char *ptrg; // [rsp+20h] [rbp-B8h]
  int ptrh; // [rsp+20h] [rbp-B8h]
  char *ptr; // [rsp+20h] [rbp-B8h]
  char *ptra; // [rsp+20h] [rbp-B8h]
  __int64 v152; // [rsp+28h] [rbp-B0h]
  int v153; // [rsp+28h] [rbp-B0h]
  __m128i v154; // [rsp+30h] [rbp-A8h] BYREF
  void (__fastcall *v155)(__m128i *, __m128i *, __int64); // [rsp+40h] [rbp-98h]
  __int64 v156; // [rsp+48h] [rbp-90h]
  __m128i v157; // [rsp+50h] [rbp-88h] BYREF
  __int64 v158; // [rsp+60h] [rbp-78h]
  __int64 v159; // [rsp+68h] [rbp-70h]
  unsigned __int32 v160; // [rsp+70h] [rbp-68h]
  __int16 v161; // [rsp+74h] [rbp-64h]
  __m128i v162; // [rsp+78h] [rbp-60h] BYREF
  __int128 v163; // [rsp+88h] [rbp-50h]

  if ( (_BYTE)a4 )
  {
    v8 = 4;
    v9 = 3;
    v10 = 1;
    v11 = 2;
  }
  else
  {
    v8 = 0;
    v9 = 1;
    v10 = -1;
    v11 = -2;
  }
  if ( !a5 )
  {
    v9 = v8;
    v10 = v11;
  }
  v12 = *(_QWORD *)(a1 + 56);
  LODWORD(v13) = sub_FF9E10(*(_QWORD *)(v12 + 504), a3);
  if ( (_DWORD)v13 == -1 )
    return v13;
  v14 = a4;
  v15 = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
  v16 = *(_QWORD *)(v15 + 112);
  if ( *(_DWORD *)(v12 + 320) >= *(_DWORD *)(v16 + 344)
    || *(_DWORD *)(v16 + 268) != 2
    || *(_DWORD *)(v15 + 9464) != *(_DWORD *)(v15 + 9472) )
  {
    v17 = *(_QWORD *)(v12 + 240);
    if ( !v17 )
      return v13;
    if ( (unsigned int)v13 >= *(_DWORD *)(v17 - 4) )
      return v13;
    v18 = *(char **)(v17 + 8LL * (unsigned int)v13);
    if ( !v18 )
      return v13;
    v13 = *((unsigned int *)v18 - 1);
    v19 = &v18[8 * v13];
    if ( v18 == v19 )
      return v13;
    if ( v9 > 1 )
    {
      if ( v10 == 2 )
      {
        while ( 1 )
        {
          v31 = *(_QWORD *)v18;
          v13 = *(unsigned int *)(*(_QWORD *)v18 + 8LL);
          if ( *(_BYTE *)(*(_QWORD *)(v15 + 8848) + v13) )
            goto LABEL_51;
          LODWORD(v13) = *(_DWORD *)(v31 + 56);
          if ( !(_DWORD)v13 )
          {
            ptrh = v14;
            v137 = v19;
            v67 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)a2, v31 + 24);
            v19 = v137;
            v14 = ptrh;
            if ( !v67 )
            {
              LODWORD(v13) = *(_DWORD *)(v31 + 8);
              goto LABEL_114;
            }
            LODWORD(v13) = *(_DWORD *)(v31 + 56);
          }
          if ( (_DWORD)v13 != 1 )
            goto LABEL_51;
          ptrf = v14;
          v135 = v19;
          LOBYTE(v13) = sub_3ED700((__int64)qword_1C7F2C0, v31 + 24, (__int64)a2);
          v19 = v135;
          v14 = ptrf;
          if ( !(_BYTE)v13 )
            goto LABEL_51;
          LODWORD(v13) = *(_DWORD *)(v31 + 8) ^ 1;
LABEL_114:
          if ( (_DWORD)v13 != -2 )
            goto LABEL_22;
LABEL_51:
          v18 += 8;
          if ( v19 == v18 )
            return v13;
          v15 = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
        }
      }
      while ( 1 )
      {
        v20 = *(_QWORD *)v18;
        v13 = *(unsigned int *)(*(_QWORD *)v18 + 8LL);
        if ( *(_BYTE *)(*(_QWORD *)(v15 + 8848) + v13) )
          goto LABEL_14;
        LODWORD(v13) = *(_DWORD *)(v20 + 56);
        if ( !(_DWORD)v13 )
        {
          ptre = v14;
          v134 = v19;
          v65 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)a2, v20 + 24);
          v19 = v134;
          v14 = ptre;
          if ( !v65 )
          {
            LODWORD(v13) = *(_DWORD *)(v20 + 8);
            goto LABEL_21;
          }
          LODWORD(v13) = *(_DWORD *)(v20 + 56);
        }
        if ( (_DWORD)v13 != 1 )
          goto LABEL_14;
        ptrb = v14;
        v131 = v19;
        LOBYTE(v13) = sub_3ED700((__int64)qword_1C7F2C0, (__int64)a2, v20 + 24);
        v19 = v131;
        v14 = ptrb;
        if ( (_BYTE)v13 )
          goto LABEL_14;
        LODWORD(v13) = *(_DWORD *)(v20 + 8) ^ 1;
LABEL_21:
        if ( (_DWORD)v13 != -2 )
          goto LABEL_22;
LABEL_14:
        v18 += 8;
        if ( v19 == v18 )
          return v13;
        v15 = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
      }
    }
    while ( 1 )
    {
      v30 = *(_QWORD *)v18;
      v13 = *(unsigned int *)(*(_QWORD *)v18 + 8LL);
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 8848) + v13) )
        goto LABEL_45;
      LODWORD(v13) = *(_DWORD *)(v30 + 56);
      if ( (_DWORD)v13 == 1 )
      {
        v153 = v14;
        ptrg = v19;
        v136 = *(_QWORD *)v18;
        v66 = sub_3ED700((__int64)qword_1C7F2C0, v30 + 24, (__int64)a2);
        v30 = v136;
        v19 = ptrg;
        v14 = v153;
        if ( !v66 )
        {
          LODWORD(v13) = *(_DWORD *)(v136 + 8);
          goto LABEL_44;
        }
        LODWORD(v13) = *(_DWORD *)(v136 + 56);
      }
      if ( v10 == -2 )
      {
        if ( (_DWORD)v13 )
          goto LABEL_45;
        ptrc = v14;
        v132 = v19;
        v152 = v30;
        LOBYTE(v13) = sub_3ED700((__int64)qword_1C7F2C0, (__int64)a2, v30 + 24);
        v19 = v132;
        v14 = ptrc;
        if ( !(_BYTE)v13 )
          goto LABEL_45;
      }
      else
      {
        if ( (_DWORD)v13 )
          goto LABEL_45;
        ptrd = v14;
        v133 = v19;
        v152 = v30;
        LOBYTE(v13) = sub_3ED700((__int64)qword_1C7F2C0, v30 + 24, (__int64)a2);
        v19 = v133;
        v14 = ptrd;
        if ( (_BYTE)v13 )
          goto LABEL_45;
      }
      LODWORD(v13) = *(_DWORD *)(v152 + 8) ^ 1;
LABEL_44:
      if ( (_DWORD)v13 != -2 )
        break;
LABEL_45:
      v18 += 8;
      if ( v19 == v18 )
        return v13;
      v15 = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
    }
  }
LABEL_22:
  if ( !(_BYTE)v14 )
  {
    v32 = *(unsigned int *)(a1 + 40);
    v33 = *(_DWORD **)(a1 + 32);
    v34 = v32 - 1;
    v32 *= 16;
    v35 = (_DWORD *)((char *)v33 + v32);
    v36 = 16LL * (a3 & v34);
    v37 = &v33[(unsigned __int64)v36 / 4];
    if ( v36 != v32 )
    {
      v38 = &v33[(unsigned __int64)v36 / 4];
      do
      {
        v39 = v38[1];
        if ( v39 == 2 )
        {
          if ( a3 == *v38 && a3 == v38[2] )
            goto LABEL_65;
        }
        else if ( !v39 )
        {
          goto LABEL_97;
        }
        v38 += 4;
      }
      while ( v35 != v38 );
    }
    for ( ; v37 != v33; v33 += 4 )
    {
      v45 = v33[1];
      if ( v45 == 2 )
      {
        if ( a3 == *v33 && a3 == v33[2] )
        {
          v38 = v33;
LABEL_65:
          v40 = **(_QWORD **)(a1 + 64) + 72LL * (unsigned int)v38[3];
          if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)a2, v40)
            || (LOBYTE(v13) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)a2, v40), (_BYTE)v13)
            && *(_BYTE *)(v40 + 37) != 1
            && a5 )
          {
            sub_27B950((__int64)qword_1C7F2C0, v40, a2);
            *(_BYTE *)(v40 + 37) = a5;
            sub_83B6E0((__int64)&v154, a6);
            v13 = (unsigned __int64)v155;
            v41 = 0;
            v158 = 0;
            v159 = 0;
            v157 = 0;
            if ( v155 )
            {
              v155(&v157, &v154, 2);
              v41 = v156;
              v13 = (unsigned __int64)v155;
            }
            v42 = _mm_load_si128(&v157);
            v157 = _mm_loadu_si128((const __m128i *)(v40 + 40));
            v43 = *(void (__fastcall **)(__m128i *, __m128i *, __int64))(v40 + 56);
            v44 = *(_QWORD *)(v40 + 64);
            *(__m128i *)(v40 + 40) = v42;
            v158 = (__int64)v43;
            *(_QWORD *)(v40 + 56) = v13;
            v159 = v44;
            *(_QWORD *)(v40 + 64) = v41;
            if ( v43 )
            {
              v43(&v157, &v157, 3);
              v13 = (unsigned __int64)v155;
            }
            if ( v13 )
              goto LABEL_74;
          }
          return v13;
        }
      }
      else if ( !v45 )
      {
        break;
      }
    }
LABEL_97:
    v51 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) - **(_QWORD **)(a1 + 64);
    v157.m128i_i32[0] = a3;
    v157.m128i_i32[1] = 954437177 * (v51 >> 3);
    sub_83C760(a1 + 32, v157.m128i_i32);
    v52 = *(void ***)(a1 + 64);
    sub_83B6E0((__int64)&v154, a6);
    v157 = 0u;
    v158 = 1;
    v159 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v157, a2);
    v160 = a3;
    LOBYTE(v161) = 0;
    HIBYTE(v161) = a5;
    sub_83B6E0((__int64)&v162, &v154);
    v53 = (char *)v52[1];
    if ( v53 == v52[2] )
    {
      v96 = v53 - (_BYTE *)*v52;
      ptra = (char *)*v52;
      v97 = 0x8E38E38E38E38E39LL * (v96 >> 3);
      if ( v97 == 0x1C71C71C71C71C7LL )
        std::__throw_length_error("vector::_M_realloc_append");
      v98 = 1;
      if ( v97 )
        v98 = 0x8E38E38E38E38E39LL * (v96 >> 3);
      v71 = __CFADD__(v98, v97);
      v99 = v98 - 0x71C71C71C71C71C7LL * (v96 >> 3);
      if ( v71 )
      {
        v139 = 0x7FFFFFFFFFFFFFF8LL;
        v100 = 0x7FFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v99 > 0x1C71C71C71C71C7LL )
          v99 = 0x1C71C71C71C71C7LL;
        v139 = 72 * v99;
        v100 = 72 * v99;
      }
      v125 = (char *)v52[1];
      v101 = sub_186B270(v100);
      v102 = v157.m128i_i32[0];
      v142 = v101;
      v103 = v96 + v101;
      v104 = v157.m128i_i8[4];
      v105 = v125;
      *(_QWORD *)(v103 + 56) = 0;
      *(_DWORD *)v103 = v102;
      LOBYTE(v102) = *(_BYTE *)(v103 + 4);
      *(_OWORD *)(v103 + 40) = 0;
      LOBYTE(v102) = v104 & 3 | v102 & 0xFC;
      v106 = BYTE4(v158);
      *(_BYTE *)(v103 + 4) = v102;
      v107 = v157.m128i_i64[1];
      v157.m128i_i64[1] = 0;
      *(_QWORD *)(v103 + 8) = v107;
      *(_DWORD *)(v103 + 16) = v158;
      *(_BYTE *)(v103 + 20) = v106 & 3 | *(_BYTE *)(v103 + 20) & 0xFC;
      v108 = v159;
      v159 = 0;
      *(_QWORD *)(v103 + 24) = v108;
      *(_DWORD *)(v103 + 32) = v160;
      *(_WORD *)(v103 + 36) = v161;
      *(_QWORD *)(v103 + 64) = *((_QWORD *)&v163 + 1);
      if ( (_QWORD)v163 )
      {
        v109 = _mm_loadu_si128(&v162);
        *(_QWORD *)(v103 + 56) = v163;
        *(__m128i *)(v103 + 40) = v109;
        v163 = 0;
      }
      if ( v125 == ptra )
      {
        v110 = v142;
      }
      else
      {
        v110 = v142;
        v111 = ptra;
        do
        {
          v112 = v111[4];
          v129 = v105;
          *(_DWORD *)v110 = *(_DWORD *)v111;
          *(_BYTE *)(v110 + 4) = v112 & 3 | *(_BYTE *)(v110 + 4) & 0xFC;
          v113 = *((_QWORD *)v111 + 1);
          *((_QWORD *)v111 + 1) = 0;
          *(_QWORD *)(v110 + 8) = v113;
          v114 = v111[20];
          *(_DWORD *)(v110 + 16) = *((_DWORD *)v111 + 4);
          *(_BYTE *)(v110 + 20) = v114 & 3 | *(_BYTE *)(v110 + 20) & 0xFC;
          v115 = *((_QWORD *)v111 + 3);
          *((_QWORD *)v111 + 3) = 0;
          *(_QWORD *)(v110 + 24) = v115;
          *(_DWORD *)(v110 + 32) = *((_DWORD *)v111 + 8);
          LOWORD(v115) = *((_WORD *)v111 + 18);
          *(_QWORD *)(v110 + 56) = 0;
          *(_WORD *)(v110 + 36) = v115;
          v116 = *((_QWORD *)v111 + 8);
          *(_OWORD *)(v110 + 40) = 0;
          *(_QWORD *)(v110 + 64) = v116;
          v117 = *((_QWORD *)v111 + 7);
          if ( v117 )
          {
            v118 = _mm_loadu_si128((const __m128i *)(v111 + 40));
            *(_QWORD *)(v110 + 56) = v117;
            *(__m128i *)(v110 + 40) = v118;
          }
          v110 += 72;
          v126 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v111);
          v119 = v111 + 16;
          v111 += 72;
          sub_182CBA0(v126, v119);
          v105 = v129;
        }
        while ( v129 != v111 );
      }
      v120 = (void *)(v110 + 72);
      if ( ptra )
        sub_186B220(ptra);
      v52[1] = v120;
      *v52 = (void *)v142;
      v52[2] = (void *)(v142 + v139);
    }
    else
    {
      *(_DWORD *)v53 = v157.m128i_i32[0];
      v53[4] = v157.m128i_i8[4] & 3 | v53[4] & 0xFC;
      v54 = v157.m128i_i64[1];
      v157.m128i_i64[1] = 0;
      *((_QWORD *)v53 + 1) = v54;
      *((_DWORD *)v53 + 4) = v158;
      v53[20] = BYTE4(v158) & 3 | v53[20] & 0xFC;
      v55 = v159;
      v159 = 0;
      *((_QWORD *)v53 + 3) = v55;
      *((_DWORD *)v53 + 8) = v160;
      LOWORD(v55) = v161;
      *((_QWORD *)v53 + 7) = 0;
      *((_WORD *)v53 + 18) = v55;
      v56 = *((_QWORD *)&v163 + 1);
      *(_OWORD *)(v53 + 40) = 0;
      *((_QWORD *)v53 + 8) = v56;
      if ( (_QWORD)v163 )
      {
        v57 = _mm_loadu_si128(&v162);
        *((_QWORD *)v53 + 7) = v163;
        *(__m128i *)(v53 + 40) = v57;
        v163 = 0;
      }
      v52[1] = (char *)v52[1] + 72;
    }
    sub_83EA10((__int64)&v157);
    LOBYTE(v13) = (_BYTE)v155;
    if ( !v155 )
      return v13;
LABEL_102:
    LOBYTE(v13) = ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v155)(&v154, &v154, 3);
    return v13;
  }
  v21 = *(unsigned int *)(a1 + 16);
  v22 = *(_DWORD **)(a1 + 8);
  v23 = v21 - 1;
  v21 *= 16;
  v24 = (_DWORD *)((char *)v22 + v21);
  v25 = 16LL * (a3 & v23);
  v26 = &v22[(unsigned __int64)v25 / 4];
  if ( v25 != v21 )
  {
    v27 = &v22[(unsigned __int64)v25 / 4];
    do
    {
      v28 = v27[1];
      if ( v28 == 2 )
      {
        if ( a3 == *v27 && a3 == v27[2] )
          goto LABEL_30;
      }
      else if ( !v28 )
      {
        goto LABEL_103;
      }
      v27 += 4;
    }
    while ( v24 != v27 );
  }
  if ( v22 == v26 )
  {
LABEL_103:
    v58 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) - **(_QWORD **)(a1 + 64);
    v157.m128i_i32[0] = a3;
    v157.m128i_i32[1] = 954437177 * (v58 >> 3);
    sub_83C760(a1 + 8, v157.m128i_i32);
    v59 = *(void ***)(a1 + 64);
    sub_83B6E0((__int64)&v154, a6);
    v157 = 0u;
    v158 = 1;
    v159 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v157, a2);
    v160 = a3;
    LOBYTE(v161) = 1;
    HIBYTE(v161) = a5;
    sub_83B6E0((__int64)&v162, &v154);
    v60 = (char *)v59[1];
    if ( v60 == v59[2] )
    {
      v68 = v60 - (_BYTE *)*v59;
      ptr = (char *)*v59;
      v69 = 0x8E38E38E38E38E39LL * (v68 >> 3);
      if ( v69 == 0x1C71C71C71C71C7LL )
        std::__throw_length_error("vector::_M_realloc_append");
      v70 = 1;
      if ( v69 )
        v70 = 0x8E38E38E38E38E39LL * (v68 >> 3);
      v71 = __CFADD__(v70, v69);
      v72 = v70 - 0x71C71C71C71C71C7LL * (v68 >> 3);
      if ( v71 )
      {
        v138 = 0x7FFFFFFFFFFFFFF8LL;
        v73 = 0x7FFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v72 > 0x1C71C71C71C71C7LL )
          v72 = 0x1C71C71C71C71C7LL;
        v138 = 72 * v72;
        v73 = 72 * v72;
      }
      v123 = (char *)v59[1];
      v74 = sub_186B270(v73);
      v75 = v157.m128i_i32[0];
      v141 = v74;
      v76 = v68 + v74;
      v77 = v157.m128i_i8[4];
      v78 = v123;
      *(_QWORD *)(v76 + 56) = 0;
      *(_DWORD *)v76 = v75;
      LOBYTE(v75) = *(_BYTE *)(v76 + 4);
      *(_OWORD *)(v76 + 40) = 0;
      LOBYTE(v75) = v77 & 3 | v75 & 0xFC;
      v79 = BYTE4(v158);
      *(_BYTE *)(v76 + 4) = v75;
      v80 = v157.m128i_i64[1];
      v157.m128i_i64[1] = 0;
      *(_QWORD *)(v76 + 8) = v80;
      *(_DWORD *)(v76 + 16) = v158;
      *(_BYTE *)(v76 + 20) = v79 & 3 | *(_BYTE *)(v76 + 20) & 0xFC;
      v81 = v159;
      v159 = 0;
      *(_QWORD *)(v76 + 24) = v81;
      *(_DWORD *)(v76 + 32) = v160;
      *(_WORD *)(v76 + 36) = v161;
      *(_QWORD *)(v76 + 64) = *((_QWORD *)&v163 + 1);
      if ( (_QWORD)v163 )
      {
        v82 = _mm_loadu_si128(&v162);
        *(_QWORD *)(v76 + 56) = v163;
        *(__m128i *)(v76 + 40) = v82;
        v163 = 0;
      }
      if ( v123 == ptr )
      {
        v83 = v141;
      }
      else
      {
        v83 = v141;
        v84 = ptr;
        do
        {
          while ( 1 )
          {
            v85 = v84[4];
            v128 = v78;
            *(_DWORD *)v83 = *(_DWORD *)v84;
            *(_BYTE *)(v83 + 4) = v85 & 3 | *(_BYTE *)(v83 + 4) & 0xFC;
            v86 = *((_QWORD *)v84 + 1);
            *((_QWORD *)v84 + 1) = 0;
            *(_QWORD *)(v83 + 8) = v86;
            v87 = v84[20];
            *(_DWORD *)(v83 + 16) = *((_DWORD *)v84 + 4);
            *(_BYTE *)(v83 + 20) = v87 & 3 | *(_BYTE *)(v83 + 20) & 0xFC;
            v88 = *((_QWORD *)v84 + 3);
            *((_QWORD *)v84 + 3) = 0;
            *(_QWORD *)(v83 + 24) = v88;
            *(_DWORD *)(v83 + 32) = *((_DWORD *)v84 + 8);
            LOWORD(v88) = *((_WORD *)v84 + 18);
            *(_QWORD *)(v83 + 56) = 0;
            *(_WORD *)(v83 + 36) = v88;
            v89 = *((_QWORD *)v84 + 8);
            *(_OWORD *)(v83 + 40) = 0;
            *(_QWORD *)(v83 + 64) = v89;
            v90 = *((_QWORD *)v84 + 7);
            if ( !v90 )
              break;
            v91 = _mm_loadu_si128((const __m128i *)(v84 + 40));
            v92 = qword_1C7F2C0;
            *(_QWORD *)(v83 + 56) = v90;
            v83 += 72;
            *(__m128i *)(v83 - 32) = v91;
            sub_182CBA0(v92, v84);
            v93 = v84 + 16;
            v84 += 72;
            sub_182CBA0(v92, v93);
            v78 = v128;
            if ( v84 == v128 )
              goto LABEL_134;
          }
          v83 += 72;
          v124 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v84);
          v95 = v84 + 16;
          v84 += 72;
          sub_182CBA0(v124, v95);
          v78 = v128;
        }
        while ( v128 != v84 );
      }
LABEL_134:
      v94 = (void *)(v83 + 72);
      if ( ptr )
        sub_186B220(ptr);
      v59[1] = v94;
      *v59 = (void *)v141;
      v59[2] = (void *)(v141 + v138);
    }
    else
    {
      *(_DWORD *)v60 = v157.m128i_i32[0];
      v60[4] = v157.m128i_i8[4] & 3 | v60[4] & 0xFC;
      v61 = v157.m128i_i64[1];
      v157.m128i_i64[1] = 0;
      *((_QWORD *)v60 + 1) = v61;
      *((_DWORD *)v60 + 4) = v158;
      v60[20] = BYTE4(v158) & 3 | v60[20] & 0xFC;
      v62 = v159;
      v159 = 0;
      *((_QWORD *)v60 + 3) = v62;
      *((_DWORD *)v60 + 8) = v160;
      LOWORD(v62) = v161;
      *((_QWORD *)v60 + 7) = 0;
      *((_WORD *)v60 + 18) = v62;
      v63 = *((_QWORD *)&v163 + 1);
      *(_OWORD *)(v60 + 40) = 0;
      *((_QWORD *)v60 + 8) = v63;
      if ( (_QWORD)v163 )
      {
        v64 = _mm_loadu_si128(&v162);
        *((_QWORD *)v60 + 7) = v163;
        *(__m128i *)(v60 + 40) = v64;
        v163 = 0;
      }
      v59[1] = (char *)v59[1] + 72;
    }
    sub_83EA10((__int64)&v157);
    LOBYTE(v13) = (_BYTE)v155;
    if ( !v155 )
      return v13;
    goto LABEL_102;
  }
  while ( 1 )
  {
    v46 = v22[1];
    if ( v46 != 2 )
    {
      if ( !v46 )
        goto LABEL_103;
      goto LABEL_86;
    }
    if ( a3 == *v22 && a3 == v22[2] )
      break;
LABEL_86:
    v22 += 4;
    if ( v26 == v22 )
      goto LABEL_103;
  }
  v27 = v22;
LABEL_30:
  v29 = **(_QWORD **)(a1 + 64) + 72LL * (unsigned int)v27[3];
  if ( sub_3ED700((__int64)qword_1C7F2C0, v29, (__int64)a2)
    || (LOBYTE(v13) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)a2, v29), (_BYTE)v13)
    && *(_BYTE *)(v29 + 37) != 1
    && a5 )
  {
    sub_27B950((__int64)qword_1C7F2C0, v29, a2);
    *(_BYTE *)(v29 + 37) = a5;
    sub_83B6E0((__int64)&v154, a6);
    v13 = (unsigned __int64)v155;
    v47 = 0;
    v158 = 0;
    v159 = 0;
    v157 = 0;
    if ( v155 )
    {
      v155(&v157, &v154, 2);
      v47 = v156;
      v13 = (unsigned __int64)v155;
    }
    v48 = _mm_load_si128(&v157);
    v157 = _mm_loadu_si128((const __m128i *)(v29 + 40));
    v49 = *(void (__fastcall **)(__m128i *, __m128i *, __int64))(v29 + 56);
    v50 = *(_QWORD *)(v29 + 64);
    *(__m128i *)(v29 + 40) = v48;
    v158 = (__int64)v49;
    *(_QWORD *)(v29 + 56) = v13;
    v159 = v50;
    *(_QWORD *)(v29 + 64) = v47;
    if ( v49 )
    {
      v49(&v157, &v157, 3);
      v13 = (unsigned __int64)v155;
    }
    if ( v13 )
LABEL_74:
      LOBYTE(v13) = ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v13)(&v154, &v154, 3);
  }
  return v13;
}

