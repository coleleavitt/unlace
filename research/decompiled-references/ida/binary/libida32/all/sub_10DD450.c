void __fastcall sub_10DD450(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int *v9; // rbx
  char v10; // al
  char v11; // r13
  unsigned int *v12; // r15
  __int64 v13; // r14
  unsigned int *v14; // rbx
  __int64 v15; // r14
  unsigned int *v16; // r14
  __int64 v17; // r15
  __int64 **v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __m128 v22; // xmm0
  __int64 *v23; // r15
  void *v24; // r9
  __m128i si128; // xmm1
  __int64 *v26; // r14
  __int64 *v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r15
  void **v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // r14
  char v34; // al
  __int64 *v35; // r15
  char *v36; // r13
  size_t v37; // rax
  size_t v38; // r12
  unsigned __int64 v39; // r15
  __int64 v40; // rcx
  void **v41; // r13
  char *v42; // r14
  char *v43; // rbx
  int *v44; // r13
  _QWORD *v45; // rax
  _QWORD *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rax
  void **v52; // rbp
  __m128i v53; // xmm3
  __int64 v54; // rax
  __int64 v55; // rdx
  const char **v56; // r13
  __int64 i; // rbp
  const char *v58; // r12
  void *v59; // r15
  __int64 v60; // rax
  size_t v61; // r14
  size_t v62; // rdx
  int v63; // eax
  const void *v64; // rsi
  __int64 v65; // rax
  int v66; // ecx
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 *v70; // r12
  void *v71; // r15
  __int32 v72; // edi
  void *v73; // rsi
  void *v74; // rdx
  size_t v75; // r14
  unsigned int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 *v80; // r9
  void *v81; // r14
  __int64 v82; // rax
  _BYTE *v83; // r13
  __int64 v84; // rax
  unsigned int v85; // r10d
  _QWORD *v86; // r9
  _QWORD *v87; // rcx
  __int64 v88; // rax
  __int64 *v89; // rdi
  unsigned int v90; // eax
  _QWORD *v91; // rax
  _QWORD *v92; // r13
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // rax
  void *v98; // rdi
  __int64 v99; // r12
  __int64 v100; // r13
  char *v101; // rax
  __int64 v102; // rdi
  __int64 v103; // r13
  __int64 v104; // r14
  __int64 v105; // r13
  __int64 v106; // r15
  _QWORD *v107; // rax
  _QWORD *v108; // r13
  void *v109; // rdi
  __m128i v110; // xmm4
  char *v111; // rsi
  __m128i v112; // xmm5
  _QWORD *v113; // rax
  _QWORD *v114; // r13
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 *v119; // rax
  __m128i v120; // xmm6
  __int64 v121; // r15
  void **v122; // rbp
  void **v123; // r14
  __int64 *v124; // r13
  void *v125; // rax
  size_t v126; // rdx
  int v127; // r12d
  void *v128; // rax
  size_t v129; // rdx
  int v130; // eax
  __int64 v131; // r12
  __m128i v132; // xmm6
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 *v137; // rax
  void **v138; // r13
  _QWORD *v139; // r12
  unsigned __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 *v146; // rax
  __m128i v148; // [rsp+10h] [rbp-288h] BYREF
  __int64 *v149; // [rsp+20h] [rbp-278h]
  void *src; // [rsp+28h] [rbp-270h]
  unsigned __int64 v151; // [rsp+30h] [rbp-268h]
  __int64 *v152; // [rsp+38h] [rbp-260h]
  unsigned int *v153; // [rsp+40h] [rbp-258h]
  char *v154; // [rsp+48h] [rbp-250h]
  __int64 *v155; // [rsp+50h] [rbp-248h]
  _QWORD *v156; // [rsp+58h] [rbp-240h]
  _QWORD *v157; // [rsp+68h] [rbp-230h] BYREF
  void *v158; // [rsp+70h] [rbp-228h] BYREF
  __m128i v159; // [rsp+78h] [rbp-220h]
  void *v160; // [rsp+90h] [rbp-208h] BYREF
  size_t n; // [rsp+98h] [rbp-200h]
  _OWORD v162[2]; // [rsp+A0h] [rbp-1F8h] BYREF
  char *v163; // [rsp+C0h] [rbp-1D8h]
  void *v164; // [rsp+D0h] [rbp-1C8h] BYREF
  void *v165; // [rsp+D8h] [rbp-1C0h] BYREF
  __m128i v166; // [rsp+E0h] [rbp-1B8h] BYREF
  __m128i v167; // [rsp+F0h] [rbp-1A8h] BYREF
  char *v168; // [rsp+100h] [rbp-198h]
  char v169; // [rsp+108h] [rbp-190h]
  void *ptr[2]; // [rsp+110h] [rbp-188h] BYREF
  __m128i v171; // [rsp+120h] [rbp-178h] BYREF
  __m128i v172; // [rsp+130h] [rbp-168h] BYREF
  char *v173; // [rsp+140h] [rbp-158h]
  __int64 v174; // [rsp+148h] [rbp-150h]
  const char *v175; // [rsp+150h] [rbp-148h]
  __int64 v176; // [rsp+158h] [rbp-140h]
  const char *v177; // [rsp+160h] [rbp-138h]
  __int64 v178; // [rsp+168h] [rbp-130h]
  void *v179[2]; // [rsp+170h] [rbp-128h] BYREF
  __m128i v180; // [rsp+180h] [rbp-118h] BYREF
  __m128i v181; // [rsp+190h] [rbp-108h] BYREF
  char *v182; // [rsp+1A0h] [rbp-F8h]
  __m128i v183; // [rsp+1A8h] [rbp-F0h] BYREF
  __int64 v184; // [rsp+1B8h] [rbp-E0h] BYREF
  _BYTE v185[184]; // [rsp+1E0h] [rbp-B8h] BYREF

  v4 = a2;
  v5 = *(unsigned int **)a3;
  v6 = 16LL * *(unsigned int *)(a3 + 8);
  src = (void *)(*(_QWORD *)a3 + v6);
  v7 = v6 >> 4;
  v8 = v6 >> 6;
  if ( v8 )
  {
    v9 = &v5[16 * v8];
    while ( !(unsigned __int8)sub_12A8F80(*v5) )
    {
      if ( (unsigned __int8)sub_12A8F80(v5[4]) )
      {
        v5 += 4;
        v11 = src != v5;
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_12A8F80(v5[8]) )
      {
        v5 += 8;
        v11 = src != v5;
        goto LABEL_9;
      }
      v10 = sub_12A8F80(v5[12]);
      if ( v10 )
      {
        v5 += 12;
        v11 = src != v5;
        goto LABEL_9;
      }
      v5 += 16;
      if ( v9 == v5 )
      {
        v11 = v10;
        v69 = ((_BYTE *)src - (_BYTE *)v5) >> 4;
        switch ( v69 )
        {
          case 2LL:
            goto LABEL_172;
          case 3LL:
            goto LABEL_170;
          case 1LL:
            goto LABEL_174;
        }
        v5 = (unsigned int *)src;
        goto LABEL_9;
      }
    }
    goto LABEL_8;
  }
  if ( v7 == 2 )
  {
LABEL_172:
    if ( (unsigned __int8)sub_12A8F80(*v5) )
      goto LABEL_8;
    v5 += 4;
    goto LABEL_174;
  }
  if ( v7 == 3 )
  {
LABEL_170:
    if ( (unsigned __int8)sub_12A8F80(*v5) )
      goto LABEL_8;
    v5 += 4;
    goto LABEL_172;
  }
  if ( v7 != 1 )
  {
    v12 = v5;
    v5 = (unsigned int *)src;
    LOBYTE(v151) = 0;
    v14 = (unsigned int *)src;
    goto LABEL_94;
  }
LABEL_174:
  v11 = sub_12A8F80(*v5);
  if ( !v11 )
  {
    v5 = (unsigned int *)src;
    goto LABEL_9;
  }
LABEL_8:
  v11 = src != v5;
LABEL_9:
  v12 = *(unsigned int **)a3;
  v13 = 16LL * *(unsigned int *)(a3 + 8);
  v14 = &v12[(unsigned __int64)v13 / 4];
  v7 = v13 >> 4;
  v15 = v13 >> 6;
  if ( v15 )
  {
    v16 = &v12[16 * v15];
    while ( !(unsigned __int8)sub_12A8F90(*v12) )
    {
      if ( (unsigned __int8)sub_12A8F90(v12[4]) )
      {
        v12 += 4;
        break;
      }
      if ( (unsigned __int8)sub_12A8F90(v12[8]) )
      {
        v12 += 8;
        break;
      }
      if ( (unsigned __int8)sub_12A8F90(v12[12]) )
      {
        v12 += 12;
        break;
      }
      v12 += 16;
      if ( v16 == v12 )
      {
        LOBYTE(v151) = v11;
        v7 = ((char *)v14 - (char *)v12) >> 4;
        goto LABEL_94;
      }
    }
LABEL_16:
    LOBYTE(v151) = v11;
    LOBYTE(v155) = 1;
    if ( v12 != v14 )
      goto LABEL_17;
    goto LABEL_97;
  }
  LOBYTE(v151) = v11;
LABEL_94:
  if ( v7 == 2 )
    goto LABEL_166;
  if ( v7 == 3 )
  {
    if ( (unsigned __int8)sub_12A8F90(*v12) )
      goto LABEL_169;
    v12 += 4;
LABEL_166:
    if ( !(unsigned __int8)sub_12A8F90(*v12) )
    {
      v12 += 4;
      goto LABEL_168;
    }
LABEL_169:
    v11 = v151;
    goto LABEL_16;
  }
  if ( v7 != 1 )
    goto LABEL_97;
LABEL_168:
  if ( (unsigned __int8)sub_12A8F90(*v12) )
    goto LABEL_169;
LABEL_97:
  v68 = sub_10B8FF0(*(_QWORD *)(a2 + 72), 0x840u);
  v11 = v151;
  LOBYTE(v155) = 1;
  if ( !v68 )
  {
    LOBYTE(v155) = sub_10B8FF0(*(_QWORD *)(a2 + 72), 0x848u) != 0;
    v11 = (unsigned __int8)v155 & v151;
  }
LABEL_17:
  v17 = *(_QWORD *)(a2 + 72);
  v18 = (__int64 **)v179;
  v179[0] = (void *)0x4E5000005FDLL;
  LODWORD(v179[1]) = 0;
  v19 = sub_2193060(v17, v179, 3);
  v20 = *(_QWORD *)(v17 + 8);
  v180.m128i_i64[0] = 0x4E5000005FDLL;
  v180.m128i_i32[2] = 0;
  v148.m128i_i64[0] = v20 + 8 * HIDWORD(v19);
  v21 = _mm_loadl_epi64(&v148);
  v148.m128i_i64[1] = v20 + 8LL * (unsigned int)v19;
  *(__m128i *)v179 = _mm_unpacklo_epi64(v21, v21);
  sub_10C3600((__int64)v179);
  v171.m128i_i64[0] = 0x4E5000005FDLL;
  v171.m128i_i32[2] = 0;
  v22 = _mm_loadh_ps((const double *)v148.m128i_i64);
  v148.m128i_i64[0] = (__int64)ptr;
  *(__m128 *)ptr = v22;
  sub_10C3600((__int64)ptr);
  v23 = (__int64 *)v179[0];
  v24 = ptr[1];
  v180.m128i_i64[0] = v171.m128i_i64[0];
  si128 = _mm_load_si128((const __m128i *)ptr);
  v180.m128i_i32[2] = v171.m128i_i32[2];
  *(__m128i *)v179 = si128;
  v148.m128i_i64[1] = (__int64)&v179[1] + 4;
  if ( ptr[0] != v23 )
  {
    v149 = v23;
    v26 = (__int64 *)ptr[0];
    LOBYTE(v152) = v11;
    v153 = v5;
    v154 = (char *)a2;
    v27 = (__int64 *)ptr[1];
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        v29 = *(_QWORD *)(*v26 + 16);
        if ( !v29 )
          v29 = *v26;
        ++v26;
        *(_BYTE *)(v29 + 44) |= 1u;
        v179[0] = v26;
        if ( v26 != v27 )
          break;
LABEL_27:
        if ( v149 == v26 )
          goto LABEL_28;
      }
      while ( 1 )
      {
        v30 = *v26;
        v31 = v179;
        if ( *v26 )
          break;
LABEL_26:
        v179[0] = ++v26;
        if ( v27 == v26 )
          goto LABEL_27;
      }
      while ( 1 )
      {
        v32 = *((unsigned int *)v31 + 4);
        if ( !(_DWORD)v32 )
          goto LABEL_26;
        if ( (unsigned __int8)sub_2195AD0(v30, v32) )
          break;
        v31 = (void **)((char *)v31 + 4);
        if ( (void **)v148.m128i_i64[1] == v31 )
          goto LABEL_26;
      }
      v26 = (__int64 *)v179[0];
    }
    while ( v149 != v179[0] );
LABEL_28:
    v33 = v28;
    v18 = (__int64 **)v179;
    v4 = (__int64)v154;
    v5 = v153;
    if ( !(_BYTE)v152 )
    {
      if ( (_BYTE)v155 || (_BYTE)v151 )
      {
        sub_10B92B0((__int64)v179, *((_QWORD *)v154 + 10), (__int64 *)a1);
        v53 = _mm_load_si128((const __m128i *)v179);
        *(_QWORD *)(a1 + 64) = v180.m128i_i64[0];
        *(__m128i *)(a1 + 48) = v53;
        if ( v28 )
          goto LABEL_56;
      }
      goto LABEL_31;
    }
LABEL_78:
    v66 = 422;
    v67 = *(_QWORD *)a1;
LABEL_79:
    sub_FA3370((__int64)v179, v67, 0, v66);
    goto LABEL_80;
  }
  if ( v11 )
    goto LABEL_78;
  if ( (_BYTE)v151 )
  {
    v103 = *(_QWORD *)(a2 + 72);
    v104 = *(_QWORD *)(a2 + 8);
    if ( !sub_10B8FF0(v103, 0xC12u) )
    {
      v111 = "nvptx64-nvidia-cuda";
      if ( !(unsigned __int8)sub_2294160(v104 + 16) )
        v111 = "nvptx-nvidia-cuda";
      sub_10B6B60((__int64)v179, v111);
      v152 = (__int64 *)&v164;
      v164 = &v166;
      if ( v179[0] == &v180 )
      {
        v166 = _mm_load_si128(&v180);
      }
      else
      {
        v164 = v179[0];
        v166.m128i_i64[0] = v180.m128i_i64[0];
      }
      v169 = 1;
      v112 = _mm_load_si128(&v181);
      v165 = v179[1];
      v167 = v112;
      v168 = v182;
      goto LABEL_188;
    }
    sub_10B6560((__m128i *)v148.m128i_i64[0], (__int64 *)a1, v103);
    if ( (_BYTE)v174 && (unsigned int)(v172.m128i_i32[0] - 50) <= 1 )
    {
      if ( sub_10B8FF0(v103, 0x159u) )
      {
        if ( !(_BYTE)v174 )
          return;
        v152 = (__int64 *)&v164;
        v164 = &v166;
        if ( ptr[0] == (void *)(v148.m128i_i64[0] + 16) )
        {
          v166 = _mm_load_si128(&v171);
        }
        else
        {
          v164 = ptr[0];
          v166.m128i_i64[0] = v171.m128i_i64[0];
        }
        v169 = 1;
        v120 = _mm_load_si128(&v172);
        v165 = ptr[1];
        v167 = v120;
        v168 = v173;
        goto LABEL_188;
      }
      sub_FA3370((__int64)v179, *(_QWORD *)a1, 0, 345);
      sub_AC6300((__int64)v179);
      v169 = 0;
    }
    else
    {
      sub_FA3370((__int64)v179, *(_QWORD *)a1, 0, 389);
      sub_AC84E0((unsigned __int8 **)v179, (_BYTE *)ptr[0], (signed __int64)ptr[1]);
      sub_AC6300((__int64)v179);
      v169 = 0;
    }
    if ( !(_BYTE)v174 )
      return;
    if ( ptr[0] == (void *)(v148.m128i_i64[0] + 16) )
      return;
    operator delete(ptr[0]);
    v152 = (__int64 *)&v164;
    if ( !v169 )
      return;
LABEL_188:
    v113 = sub_10D8420(a1, *(_QWORD *)(v4 + 72), 2u, (__int64)v152, (_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL));
    v114 = v113;
    if ( *((_BYTE *)v113 + 2392) )
      sub_11B6600(v113 + 298);
    *(_DWORD *)(v4 + 16) |= 2u;
    LODWORD(v179[0]) = 2;
    v179[1] = v114;
    sub_10BCBD0(v4 + 24, (int *)v179);
    sub_10DBE20((char ***)v179, v4, *(_QWORD *)(v4 + 80), 2u, v114, 1);
    ptr[0] = v114;
    v119 = sub_10CF410(a1 + 1200, (__int64 *)v148.m128i_i64[0], v115, v116, v117, v118);
    sub_10BCC70((char ***)v119, (char ***)v179);
    if ( v179[0] != &v180 )
      free(v179[0]);
    if ( !v169 )
      goto LABEL_181;
    v109 = v164;
    if ( v164 == v152 + 2 )
      goto LABEL_181;
    goto LABEL_180;
  }
  if ( !(_BYTE)v155 )
  {
LABEL_182:
    v33 = 0;
LABEL_31:
    if ( !(unsigned __int8)sub_2193C90(*(_QWORD *)(v4 + 72), 1563, 1562, 1265, 0, v24)
      || !sub_10B8FF0(*(_QWORD *)(v4 + 72), 0xC11u) && !sub_10B8FF0(*(_QWORD *)(v4 + 72), 0xC07u) )
    {
      if ( !sub_10B8FF0(*(_QWORD *)(v4 + 72), 0xC11u) )
        goto LABEL_33;
LABEL_103:
      v66 = 354;
      v67 = *(_QWORD *)a1;
      goto LABEL_79;
    }
LABEL_56:
    if ( (sub_10B9430((__int64 *)a1, *(_QWORD *)(v4 + 72)) & 0xFFFFFFFD) == 1 )
    {
      v54 = sub_10B8FF0(*(_QWORD *)(v4 + 72), 0xC11u);
      if ( v54 )
      {
        v55 = *(unsigned int *)(v54 + 56);
        if ( (_DWORD)v55 )
        {
          src = v179;
          v166.m128i_i64[0] = 0;
          v166.m128i_i64[1] = (__int64)&v165;
          v167 = (__m128i)(unsigned __int64)&v165;
          v56 = *(const char ***)(v54 + 48);
          LODWORD(v165) = 0;
          v152 = (__int64 *)&v164;
          v149 = (__int64 *)&v56[v55];
          v148.m128i_i64[1] = (__int64)&v165;
          v151 = v4;
          for ( i = 0; ; i = v166.m128i_i64[0] )
          {
            v58 = *v56;
            v59 = nullptr;
            if ( *v56 )
              v59 = (void *)j__strlen(*v56);
            if ( i )
              break;
LABEL_76:
            ++v56;
            v65 = operator new(0x30u);
            *(_QWORD *)(v65 + 32) = v58;
            *(_QWORD *)(v65 + 40) = v59;
            std::_Rb_tree_insert_and_rebalance();
            ++v167.m128i_i64[1];
            if ( v149 == (__int64 *)v56 )
            {
              v4 = v151;
              v158 = nullptr;
              v18 = (__int64 **)src;
              v70 = (__int64 *)v166.m128i_i64[1];
              v159 = _mm_load_si128((const __m128i *)&xmmword_23857E0);
              if ( v166.m128i_i64[1] == v148.m128i_i64[1] )
              {
                v98 = nullptr;
                v149 = (__int64 *)&v158;
                v155 = (__int64 *)&v157;
                goto LABEL_149;
              }
              v151 = (unsigned __int64)&v160;
              v149 = (__int64 *)&v158;
              v155 = (__int64 *)&v157;
              v71 = (void *)(v148.m128i_i64[0] + 16);
              while ( 1 )
              {
                v82 = v70[5];
                v83 = (_BYTE *)v70[4];
                ptr[0] = v71;
                v148.m128i_i64[1] = v82;
                if ( v83 )
                {
                  sub_10B5070(v148.m128i_i64[0], v83, (__int64)&v83[v82]);
                }
                else
                {
                  ptr[1] = nullptr;
                  v171.m128i_i8[0] = 0;
                }
                sub_2296190(v18, v148.m128i_i64[0]);
                if ( ptr[0] != v71 )
                  operator delete(ptr[0]);
                if ( v181.m128i_i32[2] )
                {
                  v72 = v181.m128i_i32[3];
                  if ( v181.m128i_i32[3] )
                    goto LABEL_107;
                }
                switch ( v181.m128i_i32[0] )
                {
                  case 0x29:
                    sub_10B6B60(v148.m128i_i64[0], "nvptx-nvidia-cuda");
                    break;
                  case 0x2A:
                    sub_10B6B60(v148.m128i_i64[0], "nvptx64-nvidia-cuda");
                    break;
                  case 0x1A:
                    sub_10B6B60(v148.m128i_i64[0], "amdgcn-amd-amdhsa");
                    break;
                  default:
                    v72 = v181.m128i_i32[3];
LABEL_107:
                    v73 = v179[0];
                    ptr[0] = v71;
                    if ( v179[0] == v18 + 2 )
                    {
                      v73 = v71;
                      v171 = _mm_load_si128(&v180);
                    }
                    else
                    {
                      ptr[0] = v179[0];
                      v171.m128i_i64[0] = v180.m128i_i64[0];
                    }
                    v172.m128i_i32[0] = v181.m128i_i32[0];
                    v74 = v179[1];
                    *(__int64 *)((char *)v172.m128i_i64 + 4) = *(__int64 *)((char *)v181.m128i_i64 + 4);
                    ptr[1] = v179[1];
                    v172.m128i_i32[3] = v72;
                    v173 = v182;
                    goto LABEL_110;
                }
                if ( v179[0] != v18 + 2 )
                  operator delete(v179[0]);
                v74 = ptr[1];
                v73 = ptr[0];
LABEL_110:
                sub_22984A0(v151, v73, v74, 0);
                v75 = n;
                src = v160;
                v76 = sub_2220DF0(v160, n);
                v77 = sub_2220F70(v149, src, v75, v76);
                v80 = (__int64 *)((char *)v158 + 8 * v77);
                if ( !*v80 )
                  goto LABEL_128;
                if ( *v80 == -8 )
                {
                  --v159.m128i_i32[2];
LABEL_128:
                  v154 = (char *)v158 + 8 * v77;
                  LODWORD(v153) = v77;
                  v84 = sub_220C370(v75 + 25, 8, v77, v78, v79, v80);
                  v85 = (unsigned int)v153;
                  v86 = v154;
                  v87 = (_QWORD *)v84;
                  if ( v75 )
                  {
                    v156 = (_QWORD *)v84;
                    memcpy((void *)(v84 + 24), src, v75);
                    v87 = v156;
                    v86 = v154;
                    v85 = (unsigned int)v153;
                  }
                  v88 = v148.m128i_i64[1];
                  *((_BYTE *)v87 + v75 + 24) = 0;
                  *v87 = v75;
                  v89 = v149;
                  v87[1] = v83;
                  v87[2] = v88;
                  *v86 = v87;
                  ++v159.m128i_i32[1];
                  v90 = sub_2221390(v89, v85);
                  sub_10C6320(v18, (__int64 *)v158 + v90, 0);
                  if ( v172.m128i_i32[0] )
                  {
                    v91 = sub_10D8420(
                            a1,
                            *(_QWORD *)(v4 + 72),
                            4u,
                            v148.m128i_i64[0],
                            (_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL));
                    *(_DWORD *)(v4 + 16) |= 4u;
                    v92 = v91;
                    v179[1] = v91;
                    LODWORD(v179[0]) = 4;
                    sub_10BCBD0(v4 + 24, (int *)v18);
                    sub_10DBE20((char ***)v18, v4, *(_QWORD *)(v4 + 80), 4u, v92, 1);
                    v157 = v92;
                    v97 = sub_10CF410(a1 + 1200, v155, v93, v94, v95, v96);
                    sub_10BCC70((char ***)v97, (char ***)v18);
                    if ( v179[0] != v18 + 2 )
                      free(v179[0]);
                  }
                  else
                  {
                    sub_FA3370((__int64)v18, *(_QWORD *)a1, 0, 388);
                    sub_AC84E0((unsigned __int8 **)v18, v83, v148.m128i_i64[1]);
                    sub_AC6300((__int64)v18);
                  }
                  goto LABEL_113;
                }
                sub_10C6320(v18, v80, 0);
                v81 = v179[0];
                sub_FA3370((__int64)v18, *(_QWORD *)a1, 0, 582);
                sub_AC84E0((unsigned __int8 **)v18, v83, v148.m128i_i64[1]);
                sub_AC84E0(
                  (unsigned __int8 **)v18,
                  *(_BYTE **)(*(_QWORD *)v81 + 8LL),
                  *(_QWORD *)(*(_QWORD *)v81 + 16LL));
                sub_AC6300((__int64)v18);
LABEL_113:
                if ( v160 != (void *)(v151 + 16) )
                  operator delete(v160);
                if ( ptr[0] != v71 )
                  operator delete(ptr[0]);
                v70 = (__int64 *)std::_Rb_tree_increment();
                if ( v70 == v152 + 1 )
                {
                  v98 = v158;
                  if ( v159.m128i_i32[1] && v159.m128i_i32[0] )
                  {
                    v99 = 0;
                    v100 = 8LL * (unsigned int)(v159.m128i_i32[0] - 1) + 8;
                    v101 = (char *)v158;
                    do
                    {
                      v102 = *(_QWORD *)&v101[v99];
                      if ( v102 && v102 != -8 )
                      {
                        operator delete();
                        v101 = (char *)v158;
                      }
                      v99 += 8;
                    }
                    while ( v99 != v100 );
                    v98 = v101;
                  }
LABEL_149:
                  free(v98);
                  sub_9C9C90((__int64)v152, v166.m128i_i64[0]);
LABEL_34:
                  v34 = sub_2193B10(*(_QWORD *)(v4 + 72), 1846, 1431, 0);
                  v35 = v149;
                  v159.m128i_i64[0] = v4;
                  LOBYTE(v157) = v34;
                  v158 = v155;
                  v159.m128i_i64[1] = a1;
                  sub_10B63F0((__int64)v149, 0xCE0u);
                  sub_10B63F0((__int64)v35, 0x31Fu);
                  v179[0] = v18 + 2;
                  v179[1] = (void *)0x400000000LL;
                  if ( !(_BYTE)v157 )
                    return;
                  if ( (unsigned __int8)sub_2294180(*(_QWORD *)(v4 + 8) + 16LL) )
                    v36 = "spirv32";
                  else
                    v36 = "spirv64";
                  v37 = j__strlen(v36);
                  v175 = "spirv32";
                  v38 = v37;
                  v171.m128i_i64[1] = 4;
                  v172.m128i_i64[1] = 6;
                  v177 = "spirv64";
                  ptr[0] = (void *)(v148.m128i_i64[0] + 16);
                  v171.m128i_i64[0] = (__int64)"spir";
                  v172.m128i_i64[0] = (__int64)"spir64";
                  v173 = "spirv";
                  v174 = 5;
                  v176 = 7;
                  v178 = 7;
                  ptr[1] = (void *)0x500000005LL;
                  switch ( v37 )
                  {
                    case 4uLL:
                      if ( *(_DWORD *)v36 != 1919512691 )
                      {
LABEL_39:
                        v152 = (__int64 *)&v164;
                        v164 = &v166;
                        sub_10B5070(&v164, v36, (__int64)&v36[v38]);
                        v151 = (unsigned __int64)&v160;
                        sub_2296190(&v160, &v164);
                        if ( v164 != &v166 )
                          operator delete(v164);
LABEL_41:
                        v39 = v151;
                        sub_10D8AF0((__int64)v18, (__m128i *)v179[0], v151);
                        if ( v160 != (void *)(v39 + 16) )
                          operator delete(v160);
                        v40 = *(_QWORD *)(sub_10BCDC0(v4) + 40);
                        v41 = (void **)((char *)v179[0] + 56 * LODWORD(v179[1]));
                        if ( v179[0] != v41 )
                        {
                          src = v18;
                          v42 = (char *)v179[0] + 56 * LODWORD(v179[1]);
                          v43 = (char *)v179[0];
                          v149 = (__int64 *)(v4 + 24);
                          v148.m128i_i64[1] = v40 + 16;
                          v44 = (int *)v148.m128i_i64[0];
                          v148.m128i_i64[0] += 16;
                          do
                          {
                            while ( 1 )
                            {
                              v45 = sub_10D8420(
                                      a1,
                                      *(_QWORD *)(v4 + 72),
                                      0x10u,
                                      (__int64)v43,
                                      (_QWORD *)v148.m128i_i64[1]);
                              *(_DWORD *)(v4 + 16) |= 0x10u;
                              v46 = v45;
                              ptr[1] = v45;
                              LODWORD(ptr[0]) = 16;
                              sub_10BCBD0((__int64)v149, v44);
                              sub_10DBE20((char ***)v44, v4, *(_QWORD *)(v4 + 80), 0x10u, v46, 1);
                              v164 = v46;
                              v51 = sub_10CF410(a1 + 1200, v152, v47, v48, v49, v50);
                              sub_10BCC70((char ***)v51, (char ***)v44);
                              if ( ptr[0] == (void *)v148.m128i_i64[0] )
                                break;
                              free(ptr[0]);
                              v43 += 56;
                              if ( v42 == v43 )
                                goto LABEL_47;
                            }
                            v43 += 56;
                          }
                          while ( v42 != v43 );
LABEL_47:
                          v52 = (void **)v179[0];
                          v18 = (__int64 **)src;
                          v41 = (void **)((char *)v179[0] + 56 * LODWORD(v179[1]));
                          if ( v179[0] != v41 )
                          {
                            do
                            {
                              while ( 1 )
                              {
                                v41 -= 7;
                                if ( *v41 == v41 + 2 )
                                  break;
                                operator delete(*v41);
                                if ( v52 == v41 )
                                  goto LABEL_50;
                              }
                            }
                            while ( v52 != v41 );
LABEL_50:
                            v41 = (void **)v179[0];
                          }
                        }
                        if ( v41 != (void **)(v18 + 2) )
                          free(v41);
                        return;
                      }
                      break;
                    case 6uLL:
                      if ( *(_DWORD *)v36 != 1919512691 || *((_WORD *)v36 + 2) != 13366 )
                        goto LABEL_39;
                      break;
                    case 5uLL:
                      if ( *(_DWORD *)v36 != 1919512691 || v36[4] != 118 )
                        goto LABEL_39;
                      break;
                    default:
                      if ( v37 != 7
                        || (*(_DWORD *)v36 != 1919512691 || *((_WORD *)v36 + 2) != 13174 || v36[6] != 50)
                        && memcmp("spirv64", v36, 7u) )
                      {
                        goto LABEL_39;
                      }
                      break;
                  }
                  v152 = (__int64 *)&v164;
                  v167 = 0;
                  v164 = &v166;
                  v165 = nullptr;
                  v166.m128i_i8[0] = 0;
                  v168 = nullptr;
                  sub_22971C0(&v164, v36, v38);
                  sub_22971A0(&v164, 0);
                  sub_2296C00(&v164, 0);
                  v151 = (unsigned __int64)&v160;
                  v160 = v162;
                  if ( v164 == &v166 )
                  {
                    v162[0] = _mm_load_si128(&v166);
                  }
                  else
                  {
                    v160 = v164;
                    *(_QWORD *)&v162[0] = v166.m128i_i64[0];
                  }
                  v132 = _mm_load_si128(&v167);
                  n = (size_t)v165;
                  v162[1] = v132;
                  v163 = v168;
                  goto LABEL_41;
                }
              }
            }
          }
          while ( 1 )
          {
            v61 = *(_QWORD *)(i + 40);
            v62 = v61;
            if ( (unsigned __int64)v59 <= v61 )
              v62 = (size_t)v59;
            if ( v62 && (v63 = memcmp(v58, *(const void **)(i + 32), v62)) != 0 )
            {
              if ( v63 < 0 )
                goto LABEL_64;
              v60 = *(_QWORD *)(i + 24);
            }
            else
            {
              if ( v59 != (void *)v61 && (unsigned __int64)v59 < v61 )
              {
LABEL_64:
                v60 = *(_QWORD *)(i + 16);
                if ( !v60 )
                  goto LABEL_74;
                goto LABEL_65;
              }
              v60 = *(_QWORD *)(i + 24);
            }
            if ( !v60 )
            {
LABEL_74:
              if ( i != v148.m128i_i64[1] )
              {
                v64 = *(const void **)(i + 32);
                v179[0] = (void *)v58;
                v179[1] = v59;
                sub_9A0DC0((__int64)src, v64, v61);
              }
              goto LABEL_76;
            }
LABEL_65:
            i = v60;
          }
        }
        v148.m128i_i64[1] = v54;
        sub_FA3370((__int64)v179, *(_QWORD *)a1, 0, 552);
        v121 = v148.m128i_i64[0];
        sub_21922B0(v148.m128i_i64[0], v148.m128i_i64[1], *(_QWORD *)(v4 + 72));
        sub_AC84E0((unsigned __int8 **)v179, (_BYTE *)ptr[0], (signed __int64)ptr[1]);
        if ( ptr[0] != (void *)(v121 + 16) )
          operator delete(ptr[0]);
LABEL_80:
        sub_AC6300((__int64)v179);
        return;
      }
      if ( sub_10B8FF0(*(_QWORD *)(v4 + 72), 0xC07u) && (((src == v5) & ((unsigned __int8)v155 ^ 1)) != 0 || v33) )
      {
        v151 = (unsigned __int64)&v160;
        sub_10B6B60((__int64)&v160, "amdgcn-amd-amdhsa");
        v152 = (__int64 *)&v164;
        sub_10B6B60((__int64)&v164, "nvptx64-nvidia-cuda");
        sub_2193410(v148.m128i_i64[0], *(_QWORD *)(v4 + 72), 3079);
        if ( ptr[1] != ptr[0] )
        {
          v148.m128i_i64[1] = v4;
          v122 = (void **)ptr[0];
          v149 = (__int64 *)&v158;
          v123 = (void **)ptr[1];
          v124 = v152;
          do
          {
            v158 = *v122;
            v159.m128i_i64[0] = (__int64)v122[1];
            v125 = (void *)sub_1005B00((__int64)v124, (__int64)v158, v159.m128i_u64[0]);
            v127 = sub_FD3F20(v125, v126);
            v128 = (void *)sub_1005B00((__int64)&v160, (__int64)v158, v159.m128i_u64[0]);
            v130 = sub_FD3F20(v128, v129);
            if ( (unsigned int)(v127 - 2) > 0x1A && (unsigned int)(v130 - 29) > 0x34 )
            {
              v131 = v159.m128i_i64[0];
              if ( v159.m128i_i64[0] )
              {
                if ( v131 != j__strlen("native") || (unsigned int)sub_2222570(v149, "native", v131) )
                {
                  sub_FA3370((__int64)v179, *(_QWORD *)a1, 0, 357);
                  sub_AC84E0((unsigned __int8 **)v179, v158, v159.m128i_i64[0]);
                  sub_AC6300((__int64)v179);
                  sub_990CF0((void ***)v148.m128i_i64[0]);
                  if ( v164 != v152 + 2 )
                    operator delete(v164);
                  if ( v160 != (void *)(v151 + 16) )
                    operator delete(v160);
                  return;
                }
              }
            }
            v122 += 4;
          }
          while ( v123 != v122 );
          v4 = v148.m128i_i64[1];
        }
        sub_990CF0((void ***)v148.m128i_i64[0]);
        sub_10B74D0((__m128i *)v179, v151);
        sub_10B74D0(&v183, (__int64)v152);
        v149 = (__int64 *)&v158;
        v138 = v179;
        while ( 1 )
        {
          v139 = sub_10D8420(a1, *(_QWORD *)(v4 + 72), 4u, (__int64)v138, (_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL));
          sub_10DBE20((char ***)v148.m128i_i64[0], v4, *(_QWORD *)(v4 + 80), 4u, v139, 0);
          if ( LODWORD(ptr[1]) )
          {
            *(_DWORD *)(v4 + 16) |= 4u;
            LODWORD(v158) = 4;
            v159.m128i_i64[0] = (__int64)v139;
            sub_10BCBD0(v4 + 24, (int *)v149);
            v158 = v139;
            v146 = sub_10CF410(a1 + 1200, v149, v142, v143, v144, v145);
            sub_E180E0(v146, (__int64 *)v148.m128i_i64[0]);
          }
          if ( ptr[0] == (void *)(v148.m128i_i64[0] + 16) )
          {
            v138 += 7;
            if ( v185 == (_BYTE *)v138 )
            {
LABEL_252:
              if ( (__int64 *)v183.m128i_i64[0] != &v184 )
                operator delete((void *)v183.m128i_i64[0]);
              if ( v179[0] != &v180 )
                operator delete(v179[0]);
              v140 = sub_10B6E40(v4, 4);
              if ( v140 == v141 )
              {
                sub_FA3370((__int64)v179, *(_QWORD *)a1, 0, 357);
                sub_10B4AF0((unsigned __int8 **)v179, (__int64)"native");
                sub_AC6300((__int64)v179);
              }
              if ( v164 != v152 + 2 )
                operator delete(v164);
              v155 = (__int64 *)&v157;
              if ( v160 != (void *)(v151 + 16) )
                operator delete(v160);
              goto LABEL_34;
            }
          }
          else
          {
            free(ptr[0]);
            v138 += 7;
            if ( v185 == (_BYTE *)v138 )
              goto LABEL_252;
          }
        }
      }
LABEL_33:
      v149 = (__int64 *)&v158;
      v155 = (__int64 *)&v157;
      goto LABEL_34;
    }
    goto LABEL_103;
  }
  v105 = sub_10B8FF0(*(_QWORD *)(a2 + 72), 0xC11u);
  if ( v105 )
  {
    sub_FA3370((__int64)v179, *(_QWORD *)a1, 0, 494);
    sub_AC84E0((unsigned __int8 **)v179, *(_BYTE **)(v105 + 24), *(_QWORD *)(v105 + 32));
    sub_10B4AF0((unsigned __int8 **)v179, (__int64)"HIP");
    sub_AC6300((__int64)v179);
    return;
  }
  v106 = v148.m128i_i64[0];
  sub_10BCE80((__m128i *)v148.m128i_i64[0], (__int64 *)a1, *(_QWORD *)(a2 + 72));
  if ( (_BYTE)v174 )
  {
    v107 = sub_10D8420(a1, *(_QWORD *)(a2 + 72), 8u, v106, (_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL));
    *(_DWORD *)(a2 + 16) |= 8u;
    v108 = v107;
    v179[1] = v107;
    LODWORD(v179[0]) = 8;
    sub_10BCBD0(a2 + 24, (int *)v179);
    if ( (unsigned __int8)sub_2193B10(*(_QWORD *)(a2 + 72), 3088, 3017, 0) )
    {
      sub_10DBE20((char ***)v179, a2, *(_QWORD *)(a2 + 80), 8u, v108, 1);
      v164 = v108;
      v137 = sub_10CF410(a1 + 1200, (__int64 *)&v164, v133, v134, v135, v136);
      sub_10BCC70((char ***)v137, (char ***)v179);
      if ( v179[0] != &v180 )
        free(v179[0]);
    }
    if ( !(_BYTE)v174 )
      goto LABEL_181;
    v109 = ptr[0];
    if ( ptr[0] == (void *)(v148.m128i_i64[0] + 16) )
      goto LABEL_181;
LABEL_180:
    operator delete(v109);
LABEL_181:
    sub_10B92B0((__int64)v179, *(_QWORD *)(v4 + 80), (__int64 *)a1);
    v110 = _mm_load_si128((const __m128i *)v179);
    *(_QWORD *)(a1 + 64) = v180.m128i_i64[0];
    *(__m128i *)(a1 + 48) = v110;
    goto LABEL_182;
  }
}

