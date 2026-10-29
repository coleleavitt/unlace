void __fastcall sub_1101190(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v57; // rbp
  const char *v58; // r12
  void *v59; // r15
  __int64 v60; // rax
  size_t v61; // r14
  size_t v62; // rdx
  int v63; // eax
  const void *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 *v71; // r12
  void *v72; // r15
  __int32 v73; // edi
  void *v74; // rsi
  void *v75; // rdx
  size_t v76; // r14
  unsigned int v77; // eax
  unsigned int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 *v81; // r9
  void *v82; // r14
  __int64 v83; // rax
  _BYTE *v84; // r13
  __int64 v85; // rax
  unsigned int v86; // r10d
  _QWORD *v87; // r9
  _QWORD *v88; // rcx
  __int64 v89; // rax
  __int64 *v90; // rdi
  unsigned int v91; // eax
  _QWORD *v92; // rax
  _QWORD *v93; // r13
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 *v98; // rax
  unsigned int v99; // ebx
  void *v100; // rdi
  __int64 v101; // r12
  __int64 v102; // r13
  char *v103; // rax
  _QWORD *v104; // rdi
  __int64 v105; // r13
  __int64 v106; // r14
  __int64 v107; // r13
  __int64 v108; // r15
  _QWORD *v109; // rax
  _QWORD *v110; // r13
  void *v111; // rdi
  __m128i v112; // xmm4
  char *v113; // rsi
  __m128i v114; // xmm5
  _QWORD *v115; // rax
  _QWORD *v116; // r13
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 *v121; // rax
  __m128i v122; // xmm6
  __int64 v123; // r15
  void **v124; // rbp
  void **v125; // r14
  __int64 *v126; // r13
  void *v127; // rax
  size_t v128; // rdx
  int v129; // r12d
  void *v130; // rax
  size_t v131; // rdx
  int v132; // eax
  __int64 v133; // r12
  __m128i v134; // xmm6
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 *v139; // rax
  void **v140; // r13
  _QWORD *v141; // r12
  unsigned __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 *v148; // rax
  __m128i v150; // [rsp+10h] [rbp-288h] BYREF
  __int64 *v151; // [rsp+20h] [rbp-278h]
  void *src; // [rsp+28h] [rbp-270h]
  unsigned __int64 v153; // [rsp+30h] [rbp-268h]
  __int64 *v154; // [rsp+38h] [rbp-260h]
  unsigned int *v155; // [rsp+40h] [rbp-258h]
  char *v156; // [rsp+48h] [rbp-250h]
  __int64 *v157; // [rsp+50h] [rbp-248h]
  _QWORD *v158; // [rsp+58h] [rbp-240h]
  _QWORD *v159; // [rsp+68h] [rbp-230h] BYREF
  void *v160; // [rsp+70h] [rbp-228h] BYREF
  __m128i v161; // [rsp+78h] [rbp-220h]
  void *v162; // [rsp+90h] [rbp-208h] BYREF
  size_t n; // [rsp+98h] [rbp-200h]
  _OWORD v164[2]; // [rsp+A0h] [rbp-1F8h] BYREF
  char *v165; // [rsp+C0h] [rbp-1D8h]
  void *v166; // [rsp+D0h] [rbp-1C8h] BYREF
  void *v167; // [rsp+D8h] [rbp-1C0h] BYREF
  __m128i v168; // [rsp+E0h] [rbp-1B8h] BYREF
  __m128i v169; // [rsp+F0h] [rbp-1A8h] BYREF
  char *v170; // [rsp+100h] [rbp-198h]
  char v171; // [rsp+108h] [rbp-190h]
  void *ptr[2]; // [rsp+110h] [rbp-188h] BYREF
  __m128i v173; // [rsp+120h] [rbp-178h] BYREF
  __m128i v174; // [rsp+130h] [rbp-168h] BYREF
  char *v175; // [rsp+140h] [rbp-158h]
  __int64 v176; // [rsp+148h] [rbp-150h]
  const char *v177; // [rsp+150h] [rbp-148h]
  __int64 v178; // [rsp+158h] [rbp-140h]
  const char *v179; // [rsp+160h] [rbp-138h]
  __int64 v180; // [rsp+168h] [rbp-130h]
  void *v181[2]; // [rsp+170h] [rbp-128h] BYREF
  __m128i v182; // [rsp+180h] [rbp-118h] BYREF
  __m128i v183; // [rsp+190h] [rbp-108h] BYREF
  char *v184; // [rsp+1A0h] [rbp-F8h]
  __m128i v185; // [rsp+1A8h] [rbp-F0h] BYREF
  __int64 v186; // [rsp+1B8h] [rbp-E0h] BYREF
  _BYTE v187[184]; // [rsp+1E0h] [rbp-B8h] BYREF

  v4 = a2;
  v5 = *(unsigned int **)a3;
  v6 = 16LL * *(unsigned int *)(a3 + 8);
  src = (void *)(*(_QWORD *)a3 + v6);
  v7 = v6 >> 4;
  v8 = v6 >> 6;
  if ( v8 )
  {
    v9 = &v5[16 * v8];
    while ( !(unsigned __int8)sub_12CCCC0(*v5) )
    {
      if ( (unsigned __int8)sub_12CCCC0(v5[4]) )
      {
        v5 += 4;
        v11 = src != v5;
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_12CCCC0(v5[8]) )
      {
        v5 += 8;
        v11 = src != v5;
        goto LABEL_9;
      }
      v10 = sub_12CCCC0(v5[12]);
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
        v70 = ((_BYTE *)src - (_BYTE *)v5) >> 4;
        switch ( v70 )
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
    if ( (unsigned __int8)sub_12CCCC0(*v5) )
      goto LABEL_8;
    v5 += 4;
    goto LABEL_174;
  }
  if ( v7 == 3 )
  {
LABEL_170:
    if ( (unsigned __int8)sub_12CCCC0(*v5) )
      goto LABEL_8;
    v5 += 4;
    goto LABEL_172;
  }
  if ( v7 != 1 )
  {
    v12 = v5;
    v5 = (unsigned int *)src;
    LOBYTE(v153) = 0;
    v14 = (unsigned int *)src;
    goto LABEL_94;
  }
LABEL_174:
  v11 = sub_12CCCC0(*v5);
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
    while ( !(unsigned __int8)sub_12CCCD0(*v12) )
    {
      if ( (unsigned __int8)sub_12CCCD0(v12[4]) )
      {
        v12 += 4;
        break;
      }
      if ( (unsigned __int8)sub_12CCCD0(v12[8]) )
      {
        v12 += 8;
        break;
      }
      if ( (unsigned __int8)sub_12CCCD0(v12[12]) )
      {
        v12 += 12;
        break;
      }
      v12 += 16;
      if ( v16 == v12 )
      {
        LOBYTE(v153) = v11;
        v7 = ((char *)v14 - (char *)v12) >> 4;
        goto LABEL_94;
      }
    }
LABEL_16:
    LOBYTE(v153) = v11;
    LOBYTE(v157) = 1;
    if ( v12 != v14 )
      goto LABEL_17;
    goto LABEL_97;
  }
  LOBYTE(v153) = v11;
LABEL_94:
  if ( v7 == 2 )
    goto LABEL_166;
  if ( v7 == 3 )
  {
    if ( (unsigned __int8)sub_12CCCD0(*v12) )
      goto LABEL_169;
    v12 += 4;
LABEL_166:
    if ( !(unsigned __int8)sub_12CCCD0(*v12) )
    {
      v12 += 4;
      goto LABEL_168;
    }
LABEL_169:
    v11 = v153;
    goto LABEL_16;
  }
  if ( v7 != 1 )
    goto LABEL_97;
LABEL_168:
  if ( (unsigned __int8)sub_12CCCD0(*v12) )
    goto LABEL_169;
LABEL_97:
  v69 = sub_10DCD30(*(_QWORD *)(a2 + 72), 0x840u);
  v11 = v153;
  LOBYTE(v157) = 1;
  if ( !v69 )
  {
    LOBYTE(v157) = sub_10DCD30(*(_QWORD *)(a2 + 72), 0x848u) != 0;
    v11 = (unsigned __int8)v157 & v153;
  }
LABEL_17:
  v17 = *(_QWORD *)(a2 + 72);
  v18 = (__int64 **)v181;
  v181[0] = (void *)0x4E5000005FDLL;
  LODWORD(v181[1]) = 0;
  v19 = sub_21B6DA0(v17, v181, 3);
  v20 = *(_QWORD *)(v17 + 8);
  v182.m128i_i64[0] = 0x4E5000005FDLL;
  v182.m128i_i32[2] = 0;
  v150.m128i_i64[0] = v20 + 8 * HIDWORD(v19);
  v21 = _mm_loadl_epi64(&v150);
  v150.m128i_i64[1] = v20 + 8LL * (unsigned int)v19;
  *(__m128i *)v181 = _mm_unpacklo_epi64(v21, v21);
  sub_10E7340((__int64)v181);
  v173.m128i_i64[0] = 0x4E5000005FDLL;
  v173.m128i_i32[2] = 0;
  v22 = _mm_loadh_ps((const double *)v150.m128i_i64);
  v150.m128i_i64[0] = (__int64)ptr;
  *(__m128 *)ptr = v22;
  sub_10E7340((__int64)ptr);
  v23 = (__int64 *)v181[0];
  v24 = ptr[1];
  v182.m128i_i64[0] = v173.m128i_i64[0];
  si128 = _mm_load_si128((const __m128i *)ptr);
  v182.m128i_i32[2] = v173.m128i_i32[2];
  *(__m128i *)v181 = si128;
  v150.m128i_i64[1] = (__int64)&v181[1] + 4;
  if ( ptr[0] != v23 )
  {
    v151 = v23;
    v26 = (__int64 *)ptr[0];
    LOBYTE(v154) = v11;
    v155 = v5;
    v156 = (char *)a2;
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
        v181[0] = v26;
        if ( v26 != v27 )
          break;
LABEL_27:
        if ( v151 == v26 )
          goto LABEL_28;
      }
      while ( 1 )
      {
        v30 = *v26;
        v31 = v181;
        if ( *v26 )
          break;
LABEL_26:
        v181[0] = ++v26;
        if ( v27 == v26 )
          goto LABEL_27;
      }
      while ( 1 )
      {
        v32 = *((unsigned int *)v31 + 4);
        if ( !(_DWORD)v32 )
          goto LABEL_26;
        if ( (unsigned __int8)sub_21B9810(v30, v32) )
          break;
        v31 = (void **)((char *)v31 + 4);
        if ( (void **)v150.m128i_i64[1] == v31 )
          goto LABEL_26;
      }
      v26 = (__int64 *)v181[0];
    }
    while ( v151 != v181[0] );
LABEL_28:
    v33 = v28;
    v18 = (__int64 **)v181;
    v4 = (__int64)v156;
    v5 = v155;
    if ( !(_BYTE)v154 )
    {
      if ( (_BYTE)v157 || (_BYTE)v153 )
      {
        sub_10DCFF0((__int64)v181, *((_QWORD *)v156 + 10), (__int64 *)a1);
        v53 = _mm_load_si128((const __m128i *)v181);
        *(_QWORD *)(a1 + 64) = v182.m128i_i64[0];
        *(__m128i *)(a1 + 48) = v53;
        if ( v28 )
          goto LABEL_56;
      }
      goto LABEL_31;
    }
LABEL_78:
    v67 = 422;
    v68 = *(_QWORD *)a1;
LABEL_79:
    sub_FC70B0((__int64)v181, v68, 0, v67);
    goto LABEL_80;
  }
  if ( v11 )
    goto LABEL_78;
  if ( (_BYTE)v153 )
  {
    v105 = *(_QWORD *)(a2 + 72);
    v106 = *(_QWORD *)(a2 + 8);
    if ( !sub_10DCD30(v105, 0xC12u) )
    {
      v113 = "nvptx64-nvidia-cuda";
      if ( !(unsigned __int8)sub_22B7EA0(v106 + 16) )
        v113 = "nvptx-nvidia-cuda";
      sub_10DA8A0((__int64)v181, v113);
      v154 = (__int64 *)&v166;
      v166 = &v168;
      if ( v181[0] == &v182 )
      {
        v168 = _mm_load_si128(&v182);
      }
      else
      {
        v166 = v181[0];
        v168.m128i_i64[0] = v182.m128i_i64[0];
      }
      v171 = 1;
      v114 = _mm_load_si128(&v183);
      v167 = v181[1];
      v169 = v114;
      v170 = v184;
      goto LABEL_188;
    }
    sub_10DA2A0((__m128i *)v150.m128i_i64[0], (__int64 *)a1, v105);
    if ( (_BYTE)v176 && (unsigned int)(v174.m128i_i32[0] - 50) <= 1 )
    {
      if ( sub_10DCD30(v105, 0x159u) )
      {
        if ( !(_BYTE)v176 )
          return;
        v154 = (__int64 *)&v166;
        v166 = &v168;
        if ( ptr[0] == (void *)(v150.m128i_i64[0] + 16) )
        {
          v168 = _mm_load_si128(&v173);
        }
        else
        {
          v166 = ptr[0];
          v168.m128i_i64[0] = v173.m128i_i64[0];
        }
        v171 = 1;
        v122 = _mm_load_si128(&v174);
        v167 = ptr[1];
        v169 = v122;
        v170 = v175;
        goto LABEL_188;
      }
      sub_FC70B0((__int64)v181, *(_QWORD *)a1, 0, 345);
      sub_AEA040((__int64)v181);
      v171 = 0;
    }
    else
    {
      sub_FC70B0((__int64)v181, *(_QWORD *)a1, 0, 389);
      sub_AEC220((unsigned __int8 **)v181, (_BYTE *)ptr[0], (signed __int64)ptr[1]);
      sub_AEA040((__int64)v181);
      v171 = 0;
    }
    if ( !(_BYTE)v176 )
      return;
    if ( ptr[0] == (void *)(v150.m128i_i64[0] + 16) )
      return;
    operator delete(ptr[0]);
    v154 = (__int64 *)&v166;
    if ( !v171 )
      return;
LABEL_188:
    v115 = sub_10FC160(a1, *(_QWORD *)(v4 + 72), 2u, (__int64)v154, (_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL));
    v116 = v115;
    if ( *((_BYTE *)v115 + 2392) )
      sub_11DA340(v115 + 298);
    *(_DWORD *)(v4 + 16) |= 2u;
    LODWORD(v181[0]) = 2;
    v181[1] = v116;
    sub_10E0910(v4 + 24, (int *)v181);
    sub_10FFB60((char ***)v181, v4, *(_QWORD *)(v4 + 80), 2u, v116, 1);
    ptr[0] = v116;
    v121 = sub_10F3150(a1 + 1200, (__int64 *)v150.m128i_i64[0], v117, v118, v119, v120);
    sub_10E09B0((char ***)v121, (char ***)v181);
    if ( v181[0] != &v182 )
      free(v181[0]);
    if ( !v171 )
      goto LABEL_181;
    v111 = v166;
    if ( v166 == v154 + 2 )
      goto LABEL_181;
    goto LABEL_180;
  }
  if ( !(_BYTE)v157 )
  {
LABEL_182:
    v33 = 0;
LABEL_31:
    if ( !(unsigned __int8)sub_21B79D0(*(_QWORD *)(v4 + 72), 1563, 1562, 1265, 0, v24)
      || !sub_10DCD30(*(_QWORD *)(v4 + 72), 0xC11u) && !sub_10DCD30(*(_QWORD *)(v4 + 72), 0xC07u) )
    {
      if ( !sub_10DCD30(*(_QWORD *)(v4 + 72), 0xC11u) )
        goto LABEL_33;
LABEL_103:
      v67 = 354;
      v68 = *(_QWORD *)a1;
      goto LABEL_79;
    }
LABEL_56:
    if ( (sub_10DD170((__int64 *)a1, *(_QWORD *)(v4 + 72)) & 0xFFFFFFFD) == 1 )
    {
      v54 = sub_10DCD30(*(_QWORD *)(v4 + 72), 0xC11u);
      if ( v54 )
      {
        v55 = *(unsigned int *)(v54 + 56);
        if ( (_DWORD)v55 )
        {
          src = v181;
          v168.m128i_i64[0] = 0;
          v168.m128i_i64[1] = (__int64)&v167;
          v169 = (__m128i)(unsigned __int64)&v167;
          v56 = *(const char ***)(v54 + 48);
          LODWORD(v167) = 0;
          v154 = (__int64 *)&v166;
          v151 = (__int64 *)&v56[v55];
          v150.m128i_i64[1] = (__int64)&v167;
          v153 = v4;
          v57 = 0;
LABEL_60:
          v58 = *v56;
          v59 = nullptr;
          if ( *v56 )
            v59 = (void *)j__strlen(*v56);
          if ( !v57 )
          {
            v99 = 1;
            v57 = v150.m128i_i64[1];
            goto LABEL_76;
          }
          while ( 1 )
          {
            v61 = *(_QWORD *)(v57 + 40);
            v62 = v61;
            if ( (unsigned __int64)v59 <= v61 )
              v62 = (size_t)v59;
            if ( v62 && (v63 = memcmp(v58, *(const void **)(v57 + 32), v62)) != 0 )
            {
              if ( v63 < 0 )
                goto LABEL_64;
              v60 = *(_QWORD *)(v57 + 24);
            }
            else
            {
              if ( v59 != (void *)v61 && (unsigned __int64)v59 < v61 )
              {
LABEL_64:
                v60 = *(_QWORD *)(v57 + 16);
                if ( !v60 )
                  goto LABEL_74;
                goto LABEL_65;
              }
              v60 = *(_QWORD *)(v57 + 24);
            }
            if ( !v60 )
            {
LABEL_74:
              v99 = 1;
              if ( v57 != v150.m128i_i64[1] )
              {
                v64 = *(const void **)(v57 + 32);
                v181[0] = (void *)v58;
                v181[1] = v59;
                v99 = (unsigned int)sub_9C4B00((__int64)src, v64, v61) >> 31;
              }
LABEL_76:
              ++v56;
              v65 = operator new(0x30u);
              v66 = v150.m128i_i64[1];
              *(_QWORD *)(v65 + 32) = v58;
              *(_QWORD *)(v65 + 40) = v59;
              std::_Rb_tree_insert_and_rebalance(v99, v65, v57, v66);
              ++v169.m128i_i64[1];
              if ( v151 != (__int64 *)v56 )
              {
                v57 = v168.m128i_i64[0];
                goto LABEL_60;
              }
              v4 = v153;
              v160 = nullptr;
              v18 = (__int64 **)src;
              v71 = (__int64 *)v168.m128i_i64[1];
              v161 = _mm_load_si128((const __m128i *)&xmmword_23A9810);
              if ( v168.m128i_i64[1] == v150.m128i_i64[1] )
              {
                v100 = nullptr;
                v151 = (__int64 *)&v160;
                v157 = (__int64 *)&v159;
                goto LABEL_149;
              }
              v153 = (unsigned __int64)&v162;
              v151 = (__int64 *)&v160;
              v157 = (__int64 *)&v159;
              v72 = (void *)(v150.m128i_i64[0] + 16);
              while ( 2 )
              {
                v83 = v71[5];
                v84 = (_BYTE *)v71[4];
                ptr[0] = v72;
                v150.m128i_i64[1] = v83;
                if ( v84 )
                {
                  sub_10D8DB0(v150.m128i_i64[0], v84, (__int64)&v84[v83]);
                }
                else
                {
                  ptr[1] = nullptr;
                  v173.m128i_i8[0] = 0;
                }
                sub_22B9ED0(v18, v150.m128i_i64[0]);
                if ( ptr[0] != v72 )
                  operator delete(ptr[0]);
                if ( v183.m128i_i32[2] && (v73 = v183.m128i_i32[3]) != 0 )
                {
LABEL_107:
                  v74 = v181[0];
                  ptr[0] = v72;
                  if ( v181[0] == v18 + 2 )
                  {
                    v74 = v72;
                    v173 = _mm_load_si128(&v182);
                  }
                  else
                  {
                    ptr[0] = v181[0];
                    v173.m128i_i64[0] = v182.m128i_i64[0];
                  }
                  v174.m128i_i32[0] = v183.m128i_i32[0];
                  v75 = v181[1];
                  *(__int64 *)((char *)v174.m128i_i64 + 4) = *(__int64 *)((char *)v183.m128i_i64 + 4);
                  ptr[1] = v181[1];
                  v174.m128i_i32[3] = v73;
                  v175 = v184;
                }
                else
                {
                  switch ( v183.m128i_i32[0] )
                  {
                    case 0x29:
                      sub_10DA8A0(v150.m128i_i64[0], "nvptx-nvidia-cuda");
                      break;
                    case 0x2A:
                      sub_10DA8A0(v150.m128i_i64[0], "nvptx64-nvidia-cuda");
                      break;
                    case 0x1A:
                      sub_10DA8A0(v150.m128i_i64[0], "amdgcn-amd-amdhsa");
                      break;
                    default:
                      v73 = v183.m128i_i32[3];
                      goto LABEL_107;
                  }
                  if ( v181[0] != v18 + 2 )
                    operator delete(v181[0]);
                  v75 = ptr[1];
                  v74 = ptr[0];
                }
                sub_22BC1E0(v153, v74, v75, 0);
                v76 = n;
                src = v162;
                v77 = sub_2244B30(v162, n);
                v78 = sub_2244CB0(v151, src, v76, v77);
                v81 = (__int64 *)((char *)v160 + 8 * v78);
                if ( *v81 )
                {
                  if ( *v81 != -8 )
                  {
                    sub_10EA060(v18, v81, 0);
                    v82 = v181[0];
                    sub_FC70B0((__int64)v18, *(_QWORD *)a1, 0, 582);
                    sub_AEC220((unsigned __int8 **)v18, v84, v150.m128i_i64[1]);
                    sub_AEC220(
                      (unsigned __int8 **)v18,
                      *(_BYTE **)(*(_QWORD *)v82 + 8LL),
                      *(_QWORD *)(*(_QWORD *)v82 + 16LL));
                    sub_AEA040((__int64)v18);
                    goto LABEL_113;
                  }
                  --v161.m128i_i32[2];
                }
                v156 = (char *)v160 + 8 * v78;
                LODWORD(v155) = v78;
                v85 = sub_22300B0(v76 + 25, 8, v78, v79, v80, v81);
                v86 = (unsigned int)v155;
                v87 = v156;
                v88 = (_QWORD *)v85;
                if ( v76 )
                {
                  v158 = (_QWORD *)v85;
                  memcpy((void *)(v85 + 24), src, v76);
                  v88 = v158;
                  v87 = v156;
                  v86 = (unsigned int)v155;
                }
                v89 = v150.m128i_i64[1];
                *((_BYTE *)v88 + v76 + 24) = 0;
                *v88 = v76;
                v90 = v151;
                v88[1] = v84;
                v88[2] = v89;
                *v87 = v88;
                ++v161.m128i_i32[1];
                v91 = sub_22450D0(v90, v86);
                sub_10EA060(v18, (__int64 *)v160 + v91, 0);
                if ( v174.m128i_i32[0] )
                {
                  v92 = sub_10FC160(
                          a1,
                          *(_QWORD *)(v4 + 72),
                          4u,
                          v150.m128i_i64[0],
                          (_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL));
                  *(_DWORD *)(v4 + 16) |= 4u;
                  v93 = v92;
                  v181[1] = v92;
                  LODWORD(v181[0]) = 4;
                  sub_10E0910(v4 + 24, (int *)v18);
                  sub_10FFB60((char ***)v18, v4, *(_QWORD *)(v4 + 80), 4u, v93, 1);
                  v159 = v93;
                  v98 = sub_10F3150(a1 + 1200, v157, v94, v95, v96, v97);
                  sub_10E09B0((char ***)v98, (char ***)v18);
                  if ( v181[0] != v18 + 2 )
                    free(v181[0]);
                }
                else
                {
                  sub_FC70B0((__int64)v18, *(_QWORD *)a1, 0, 388);
                  sub_AEC220((unsigned __int8 **)v18, v84, v150.m128i_i64[1]);
                  sub_AEA040((__int64)v18);
                }
LABEL_113:
                if ( v162 != (void *)(v153 + 16) )
                  operator delete(v162);
                if ( ptr[0] != v72 )
                  operator delete(ptr[0]);
                v71 = (__int64 *)std::_Rb_tree_increment(v71);
                if ( v71 == v154 + 1 )
                {
                  v100 = v160;
                  if ( v161.m128i_i32[1] && v161.m128i_i32[0] )
                  {
                    v101 = 0;
                    v102 = 8LL * (unsigned int)(v161.m128i_i32[0] - 1) + 8;
                    v103 = (char *)v160;
                    do
                    {
                      v104 = *(_QWORD **)&v103[v101];
                      if ( v104 && v104 != (_QWORD *)-8LL )
                      {
                        operator delete(v104, *v104 + 25LL, 8);
                        v103 = (char *)v160;
                      }
                      v101 += 8;
                    }
                    while ( v101 != v102 );
                    v100 = v103;
                  }
LABEL_149:
                  free(v100);
                  sub_9ED9D0((__int64)v154, v168.m128i_i64[0]);
LABEL_34:
                  v34 = sub_21B7850(*(_QWORD *)(v4 + 72), 1846, 1431, 0);
                  v35 = v151;
                  v161.m128i_i64[0] = v4;
                  LOBYTE(v159) = v34;
                  v160 = v157;
                  v161.m128i_i64[1] = a1;
                  sub_10DA130((__int64)v151, 0xCE0u);
                  sub_10DA130((__int64)v35, 0x31Fu);
                  v181[0] = v18 + 2;
                  v181[1] = (void *)0x400000000LL;
                  if ( !(_BYTE)v159 )
                    return;
                  if ( (unsigned __int8)sub_22B7EC0(*(_QWORD *)(v4 + 8) + 16LL) )
                    v36 = "spirv32";
                  else
                    v36 = "spirv64";
                  v37 = j__strlen(v36);
                  v177 = "spirv32";
                  v38 = v37;
                  v173.m128i_i64[1] = 4;
                  v174.m128i_i64[1] = 6;
                  v179 = "spirv64";
                  ptr[0] = (void *)(v150.m128i_i64[0] + 16);
                  v173.m128i_i64[0] = (__int64)"spir";
                  v174.m128i_i64[0] = (__int64)"spir64";
                  v175 = "spirv";
                  v176 = 5;
                  v178 = 7;
                  v180 = 7;
                  ptr[1] = (void *)0x500000005LL;
                  switch ( v37 )
                  {
                    case 4uLL:
                      if ( *(_DWORD *)v36 != 1919512691 )
                      {
LABEL_39:
                        v154 = (__int64 *)&v166;
                        v166 = &v168;
                        sub_10D8DB0(&v166, v36, (__int64)&v36[v38]);
                        v153 = (unsigned __int64)&v162;
                        sub_22B9ED0(&v162, &v166);
                        if ( v166 != &v168 )
                          operator delete(v166);
LABEL_41:
                        v39 = v153;
                        sub_10FC830((__int64)v18, (__m128i *)v181[0], v153);
                        if ( v162 != (void *)(v39 + 16) )
                          operator delete(v162);
                        v40 = *(_QWORD *)(sub_10E0B00(v4) + 40);
                        v41 = (void **)((char *)v181[0] + 56 * LODWORD(v181[1]));
                        if ( v181[0] != v41 )
                        {
                          src = v18;
                          v42 = (char *)v181[0] + 56 * LODWORD(v181[1]);
                          v43 = (char *)v181[0];
                          v151 = (__int64 *)(v4 + 24);
                          v150.m128i_i64[1] = v40 + 16;
                          v44 = (int *)v150.m128i_i64[0];
                          v150.m128i_i64[0] += 16;
                          do
                          {
                            while ( 1 )
                            {
                              v45 = sub_10FC160(
                                      a1,
                                      *(_QWORD *)(v4 + 72),
                                      0x10u,
                                      (__int64)v43,
                                      (_QWORD *)v150.m128i_i64[1]);
                              *(_DWORD *)(v4 + 16) |= 0x10u;
                              v46 = v45;
                              ptr[1] = v45;
                              LODWORD(ptr[0]) = 16;
                              sub_10E0910((__int64)v151, v44);
                              sub_10FFB60((char ***)v44, v4, *(_QWORD *)(v4 + 80), 0x10u, v46, 1);
                              v166 = v46;
                              v51 = sub_10F3150(a1 + 1200, v154, v47, v48, v49, v50);
                              sub_10E09B0((char ***)v51, (char ***)v44);
                              if ( ptr[0] == (void *)v150.m128i_i64[0] )
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
                          v52 = (void **)v181[0];
                          v18 = (__int64 **)src;
                          v41 = (void **)((char *)v181[0] + 56 * LODWORD(v181[1]));
                          if ( v181[0] != v41 )
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
                            v41 = (void **)v181[0];
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
                  v154 = (__int64 *)&v166;
                  v169 = 0;
                  v166 = &v168;
                  v167 = nullptr;
                  v168.m128i_i8[0] = 0;
                  v170 = nullptr;
                  sub_22BAF00(&v166, v36, v38);
                  sub_22BAEE0(&v166, 0);
                  sub_22BA940(&v166, 0);
                  v153 = (unsigned __int64)&v162;
                  v162 = v164;
                  if ( v166 == &v168 )
                  {
                    v164[0] = _mm_load_si128(&v168);
                  }
                  else
                  {
                    v162 = v166;
                    *(_QWORD *)&v164[0] = v168.m128i_i64[0];
                  }
                  v134 = _mm_load_si128(&v169);
                  n = (size_t)v167;
                  v164[1] = v134;
                  v165 = v170;
                  goto LABEL_41;
                }
                continue;
              }
            }
LABEL_65:
            v57 = v60;
          }
        }
        v150.m128i_i64[1] = v54;
        sub_FC70B0((__int64)v181, *(_QWORD *)a1, 0, 552);
        v123 = v150.m128i_i64[0];
        sub_21B5FF0(v150.m128i_i64[0], v150.m128i_i64[1], *(_QWORD *)(v4 + 72));
        sub_AEC220((unsigned __int8 **)v181, (_BYTE *)ptr[0], (signed __int64)ptr[1]);
        if ( ptr[0] != (void *)(v123 + 16) )
          operator delete(ptr[0]);
LABEL_80:
        sub_AEA040((__int64)v181);
        return;
      }
      if ( sub_10DCD30(*(_QWORD *)(v4 + 72), 0xC07u) && (((src == v5) & ((unsigned __int8)v157 ^ 1)) != 0 || v33) )
      {
        v153 = (unsigned __int64)&v162;
        sub_10DA8A0((__int64)&v162, "amdgcn-amd-amdhsa");
        v154 = (__int64 *)&v166;
        sub_10DA8A0((__int64)&v166, "nvptx64-nvidia-cuda");
        sub_21B7150(v150.m128i_i64[0], *(_QWORD *)(v4 + 72), 3079);
        if ( ptr[1] != ptr[0] )
        {
          v150.m128i_i64[1] = v4;
          v124 = (void **)ptr[0];
          v151 = (__int64 *)&v160;
          v125 = (void **)ptr[1];
          v126 = v154;
          do
          {
            v160 = *v124;
            v161.m128i_i64[0] = (__int64)v124[1];
            v127 = (void *)sub_1029840((__int64)v126, (__int64)v160, v161.m128i_u64[0]);
            v129 = sub_FF7C60(v127, v128);
            v130 = (void *)sub_1029840((__int64)&v162, (__int64)v160, v161.m128i_u64[0]);
            v132 = sub_FF7C60(v130, v131);
            if ( (unsigned int)(v129 - 2) > 0x1A && (unsigned int)(v132 - 29) > 0x34 )
            {
              v133 = v161.m128i_i64[0];
              if ( v161.m128i_i64[0] )
              {
                if ( v133 != j__strlen("native") || (unsigned int)sub_22462B0(v151, "native", v133) )
                {
                  sub_FC70B0((__int64)v181, *(_QWORD *)a1, 0, 357);
                  sub_AEC220((unsigned __int8 **)v181, v160, v161.m128i_i64[0]);
                  sub_AEA040((__int64)v181);
                  sub_9B4A30((void ***)v150.m128i_i64[0]);
                  if ( v166 != v154 + 2 )
                    operator delete(v166);
                  if ( v162 != (void *)(v153 + 16) )
                    operator delete(v162);
                  return;
                }
              }
            }
            v124 += 4;
          }
          while ( v125 != v124 );
          v4 = v150.m128i_i64[1];
        }
        sub_9B4A30((void ***)v150.m128i_i64[0]);
        sub_10DB210((__m128i *)v181, v153);
        sub_10DB210(&v185, (__int64)v154);
        v151 = (__int64 *)&v160;
        v140 = v181;
        while ( 1 )
        {
          v141 = sub_10FC160(a1, *(_QWORD *)(v4 + 72), 4u, (__int64)v140, (_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL));
          sub_10FFB60((char ***)v150.m128i_i64[0], v4, *(_QWORD *)(v4 + 80), 4u, v141, 0);
          if ( LODWORD(ptr[1]) )
          {
            *(_DWORD *)(v4 + 16) |= 4u;
            LODWORD(v160) = 4;
            v161.m128i_i64[0] = (__int64)v141;
            sub_10E0910(v4 + 24, (int *)v151);
            v160 = v141;
            v148 = sub_10F3150(a1 + 1200, v151, v144, v145, v146, v147);
            sub_E3BE20(v148, (__int64 *)v150.m128i_i64[0]);
          }
          if ( ptr[0] == (void *)(v150.m128i_i64[0] + 16) )
          {
            v140 += 7;
            if ( v187 == (_BYTE *)v140 )
            {
LABEL_252:
              if ( (__int64 *)v185.m128i_i64[0] != &v186 )
                operator delete((void *)v185.m128i_i64[0]);
              if ( v181[0] != &v182 )
                operator delete(v181[0]);
              v142 = sub_10DAB80(v4, 4);
              if ( v142 == v143 )
              {
                sub_FC70B0((__int64)v181, *(_QWORD *)a1, 0, 357);
                sub_10D8830((unsigned __int8 **)v181, (__int64)"native");
                sub_AEA040((__int64)v181);
              }
              if ( v166 != v154 + 2 )
                operator delete(v166);
              v157 = (__int64 *)&v159;
              if ( v162 != (void *)(v153 + 16) )
                operator delete(v162);
              goto LABEL_34;
            }
          }
          else
          {
            free(ptr[0]);
            v140 += 7;
            if ( v187 == (_BYTE *)v140 )
              goto LABEL_252;
          }
        }
      }
LABEL_33:
      v151 = (__int64 *)&v160;
      v157 = (__int64 *)&v159;
      goto LABEL_34;
    }
    goto LABEL_103;
  }
  v107 = sub_10DCD30(*(_QWORD *)(a2 + 72), 0xC11u);
  if ( v107 )
  {
    sub_FC70B0((__int64)v181, *(_QWORD *)a1, 0, 494);
    sub_AEC220((unsigned __int8 **)v181, *(_BYTE **)(v107 + 24), *(_QWORD *)(v107 + 32));
    sub_10D8830((unsigned __int8 **)v181, (__int64)"HIP");
    sub_AEA040((__int64)v181);
    return;
  }
  v108 = v150.m128i_i64[0];
  sub_10E0BC0((__m128i *)v150.m128i_i64[0], (__int64 *)a1, *(_QWORD *)(a2 + 72));
  if ( (_BYTE)v176 )
  {
    v109 = sub_10FC160(a1, *(_QWORD *)(a2 + 72), 8u, v108, (_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL));
    *(_DWORD *)(a2 + 16) |= 8u;
    v110 = v109;
    v181[1] = v109;
    LODWORD(v181[0]) = 8;
    sub_10E0910(a2 + 24, (int *)v181);
    if ( (unsigned __int8)sub_21B7850(*(_QWORD *)(a2 + 72), 3088, 3017, 0) )
    {
      sub_10FFB60((char ***)v181, a2, *(_QWORD *)(a2 + 80), 8u, v110, 1);
      v166 = v110;
      v139 = sub_10F3150(a1 + 1200, (__int64 *)&v166, v135, v136, v137, v138);
      sub_10E09B0((char ***)v139, (char ***)v181);
      if ( v181[0] != &v182 )
        free(v181[0]);
    }
    if ( !(_BYTE)v176 )
      goto LABEL_181;
    v111 = ptr[0];
    if ( ptr[0] == (void *)(v150.m128i_i64[0] + 16) )
      goto LABEL_181;
LABEL_180:
    operator delete(v111);
LABEL_181:
    sub_10DCFF0((__int64)v181, *(_QWORD *)(v4 + 80), (__int64 *)a1);
    v112 = _mm_load_si128((const __m128i *)v181);
    *(_QWORD *)(a1 + 64) = v182.m128i_i64[0];
    *(__m128i *)(a1 + 48) = v112;
    goto LABEL_182;
  }
}
