unsigned __int64 __fastcall sub_1A8B8D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        char a8,
        unsigned __int8 a9)
{
  unsigned int v9; // r15d
  unsigned __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned __int64 *v24; // rsi
  __int64 *v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // r13d
  unsigned int v32; // r14d
  __int64 v33; // r13
  unsigned __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  void *v38; // rdx
  __int64 v39; // r14
  __int64 v40; // r13
  unsigned __int64 *v41; // rdx
  unsigned __int64 v42; // rax
  __int64 *v43; // rax
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 *v48; // rbp
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 result; // rax
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rbp
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbp
  __int64 v67; // r8
  __int64 v68; // r9
  void *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r14
  __int64 v72; // r15
  __int64 v73; // rcx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned int v78; // r15d
  unsigned int v79; // eax
  __int64 v80; // rax
  _BYTE *v81; // rdi
  _QWORD *v82; // rdx
  unsigned __int64 v83; // rax
  __int64 *v84; // rbp
  unsigned int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned int v88; // eax
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r15
  __int64 v92; // rdx
  __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 *v101; // rbp
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned int v105; // eax
  __int64 v106; // rbp
  unsigned __int64 v107; // rax
  unsigned int v108; // r13d
  __int64 v109; // rdx
  int v110; // eax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // r15
  __int64 v114; // rdx
  __int64 v115; // r15
  __int64 v116; // rbx
  void *v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rbp
  __int64 v120; // rdx
  __int64 v121; // rbp
  __int64 v122; // rbx
  void *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  unsigned __int64 v127; // [rsp+8h] [rbp-200h]
  unsigned __int64 *i; // [rsp+20h] [rbp-1E8h]
  __int64 v131; // [rsp+28h] [rbp-1E0h]
  char v132; // [rsp+6Bh] [rbp-19Dh]
  unsigned int v133; // [rsp+6Ch] [rbp-19Ch]
  unsigned __int64 v134; // [rsp+70h] [rbp-198h]
  __int64 v135; // [rsp+70h] [rbp-198h]
  unsigned __int64 v136; // [rsp+78h] [rbp-190h] BYREF
  unsigned int v137; // [rsp+84h] [rbp-184h] BYREF
  __int64 *v138; // [rsp+88h] [rbp-180h] BYREF
  __int64 v139; // [rsp+90h] [rbp-178h] BYREF
  __int64 v140; // [rsp+98h] [rbp-170h] BYREF
  unsigned __int64 v141; // [rsp+A0h] [rbp-168h] BYREF
  signed __int64 v142; // [rsp+A8h] [rbp-160h]
  char *v143; // [rsp+B0h] [rbp-158h] BYREF
  __int64 *v144; // [rsp+B8h] [rbp-150h]
  char v145; // [rsp+C0h] [rbp-148h] BYREF
  void *ptr; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v147; // [rsp+D8h] [rbp-130h]
  _BYTE v148[32]; // [rsp+E0h] [rbp-128h] BYREF
  unsigned __int64 v149; // [rsp+100h] [rbp-108h] BYREF
  _BYTE v150[12]; // [rsp+108h] [rbp-100h]
  char v151; // [rsp+114h] [rbp-F4h]
  void *v152; // [rsp+118h] [rbp-F0h]
  __int64 v153; // [rsp+120h] [rbp-E8h]
  _BYTE v154[16]; // [rsp+128h] [rbp-E0h] BYREF
  char v155; // [rsp+138h] [rbp-D0h]
  __int64 v156[25]; // [rsp+140h] [rbp-C8h] BYREF

  v9 = a2;
  v10 = HIDWORD(a6);
  v11 = a6;
  v136 = a3;
  v13 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = a9;
  if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 35 > 1
    && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1
     || (v13 = sub_F63050(v13, a2, a3, a9)) == 0)
    || !sub_9C7D40(v13, a2, a3, v14, a5) )
  {
    sub_168B9F0((__int64)v156, (__int64 *)(a1 + 8), a2, 0x1130u, 0);
    v53 = sub_1605D30((__int64)v156, (__int64 *)&v136);
    v54 = v53;
    if ( *(_BYTE *)(v53 + 120) )
    {
      v55 = *(_QWORD *)(v53 + 32);
      if ( v55 )
      {
        v56 = *(unsigned int *)(v55 + 424);
        v57 = *(unsigned int *)(v55 + 428);
        v58 = v56 + 1;
      }
      else
      {
        v93 = *(_QWORD *)(v53 + 40);
        v94 = *(_DWORD *)(v93 + 14976);
        if ( v94 )
        {
          v112 = (unsigned int)(v94 - 1);
          *(_DWORD *)(v93 + 14976) = v112;
          v55 = *(_QWORD *)(v93 + 8 * v112 + 14848);
          v113 = *(unsigned int *)(v55 + 536);
          *(_BYTE *)v55 = 0;
          v114 = *(_QWORD *)(v55 + 528);
          *(_DWORD *)(v55 + 424) = 0;
          v115 = v114 + (v113 << 6);
          if ( v114 == v115 )
          {
            v58 = 1;
            v56 = 0;
          }
          else
          {
            v116 = v114;
            do
            {
              while ( 1 )
              {
                v115 -= 64;
                v117 = *(void **)(v115 + 24);
                if ( v117 == (void *)(v115 + 40) )
                  break;
                operator delete(v117);
                if ( v116 == v115 )
                  goto LABEL_116;
              }
            }
            while ( v116 != v115 );
LABEL_116:
            v56 = *(unsigned int *)(v55 + 424);
            v58 = v56 + 1;
          }
          *(_DWORD *)(v55 + 536) = 0;
          v57 = *(unsigned int *)(v55 + 428);
        }
        else
        {
          v95 = operator new(0x3A0u);
          v57 = 8;
          v58 = 1;
          v55 = v95;
          *(_BYTE *)v95 = 0;
          *(_QWORD *)(v95 + 96) = v95 + 112;
          *(_QWORD *)(v95 + 128) = v95 + 144;
          *(_QWORD *)(v95 + 160) = v95 + 176;
          *(_QWORD *)(v95 + 192) = v95 + 208;
          *(_QWORD *)(v95 + 224) = v95 + 240;
          *(_QWORD *)(v95 + 256) = v95 + 272;
          *(_QWORD *)(v95 + 288) = v95 + 304;
          *(_QWORD *)(v95 + 320) = v95 + 336;
          *(_QWORD *)(v95 + 352) = v95 + 368;
          *(_QWORD *)(v95 + 384) = v95 + 400;
          *(_QWORD *)(v95 + 416) = v95 + 432;
          *(_QWORD *)(v95 + 104) = 0;
          *(_BYTE *)(v95 + 112) = 0;
          *(_QWORD *)(v95 + 136) = 0;
          *(_BYTE *)(v95 + 144) = 0;
          *(_QWORD *)(v95 + 168) = 0;
          *(_BYTE *)(v95 + 176) = 0;
          *(_QWORD *)(v95 + 200) = 0;
          *(_BYTE *)(v95 + 208) = 0;
          *(_QWORD *)(v95 + 232) = 0;
          *(_BYTE *)(v95 + 240) = 0;
          *(_QWORD *)(v95 + 264) = 0;
          *(_BYTE *)(v95 + 272) = 0;
          *(_QWORD *)(v95 + 296) = 0;
          *(_BYTE *)(v95 + 304) = 0;
          *(_QWORD *)(v95 + 328) = 0;
          *(_BYTE *)(v95 + 336) = 0;
          *(_QWORD *)(v95 + 360) = 0;
          *(_BYTE *)(v95 + 368) = 0;
          *(_QWORD *)(v95 + 392) = 0;
          *(_BYTE *)(v95 + 400) = 0;
          *(_QWORD *)(v95 + 424) = 0x800000000LL;
          *(_QWORD *)(v95 + 528) = v95 + 544;
          *(_QWORD *)(v95 + 536) = 0x600000000LL;
          v56 = 0;
        }
        *(_QWORD *)(v54 + 32) = v55;
      }
      v149 = __PAIR64__(v10, v11);
      v150[0] = 1;
      if ( v58 > v57 )
      {
        sub_2237220(v55 + 416, v55 + 432, v58, 12);
        v56 = *(unsigned int *)(v55 + 424);
      }
      v59 = *(_QWORD *)(v55 + 416) + 12 * v56;
      *(_QWORD *)v59 = v149;
      *(_DWORD *)(v59 + 8) = *(_DWORD *)v150;
      ++*(_DWORD *)(v55 + 424);
    }
    else if ( *(_BYTE *)(v53 + 132) )
    {
      v66 = sub_168B9E0((_QWORD *)v53);
      v69 = *(void **)(v54 + 16);
      if ( v69 )
        v69 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v69 + 32LL))(*(_QWORD *)(v54 + 16));
      ptr = v69;
      v70 = *sub_1587BC0(v66, (__int64 *)&ptr, v64, v65, v67, v68) + 32LL * *(unsigned int *)(v54 + 128);
      v71 = *(_QWORD *)(v70 + 8);
      v72 = v70;
      if ( v71 )
      {
        v73 = *(unsigned int *)(v71 + 424);
        v74 = *(unsigned int *)(v71 + 428);
        v75 = v73 + 1;
      }
      else
      {
        v109 = *(_QWORD *)(v70 + 16);
        v110 = *(_DWORD *)(v109 + 14976);
        if ( v110 )
        {
          v118 = (unsigned int)(v110 - 1);
          *(_DWORD *)(v109 + 14976) = v118;
          v71 = *(_QWORD *)(v109 + 8 * v118 + 14848);
          v119 = *(unsigned int *)(v71 + 536);
          *(_BYTE *)v71 = 0;
          v120 = *(_QWORD *)(v71 + 528);
          *(_DWORD *)(v71 + 424) = 0;
          v121 = v120 + (v119 << 6);
          if ( v120 == v121 )
          {
            v75 = 1;
            v73 = 0;
          }
          else
          {
            v122 = v120;
            do
            {
              while ( 1 )
              {
                v121 -= 64;
                v123 = *(void **)(v121 + 24);
                if ( v123 == (void *)(v121 + 40) )
                  break;
                operator delete(v123);
                if ( v122 == v121 )
                  goto LABEL_125;
              }
            }
            while ( v122 != v121 );
LABEL_125:
            v73 = *(unsigned int *)(v71 + 424);
            v75 = v73 + 1;
          }
          *(_DWORD *)(v71 + 536) = 0;
          v74 = *(unsigned int *)(v71 + 428);
        }
        else
        {
          v111 = operator new(0x3A0u);
          v75 = 1;
          v73 = 0;
          v71 = v111;
          *(_BYTE *)v111 = 0;
          *(_QWORD *)(v111 + 96) = v111 + 112;
          *(_QWORD *)(v111 + 128) = v111 + 144;
          *(_QWORD *)(v111 + 160) = v111 + 176;
          *(_QWORD *)(v111 + 192) = v111 + 208;
          *(_QWORD *)(v111 + 224) = v111 + 240;
          *(_QWORD *)(v111 + 256) = v111 + 272;
          *(_QWORD *)(v111 + 288) = v111 + 304;
          *(_QWORD *)(v111 + 320) = v111 + 336;
          *(_QWORD *)(v111 + 352) = v111 + 368;
          *(_QWORD *)(v111 + 384) = v111 + 400;
          *(_QWORD *)(v111 + 416) = v111 + 432;
          *(_QWORD *)(v111 + 104) = 0;
          *(_BYTE *)(v111 + 112) = 0;
          *(_QWORD *)(v111 + 136) = 0;
          *(_BYTE *)(v111 + 144) = 0;
          *(_QWORD *)(v111 + 168) = 0;
          *(_BYTE *)(v111 + 176) = 0;
          *(_QWORD *)(v111 + 200) = 0;
          *(_BYTE *)(v111 + 208) = 0;
          *(_QWORD *)(v111 + 232) = 0;
          *(_BYTE *)(v111 + 240) = 0;
          *(_QWORD *)(v111 + 264) = 0;
          *(_BYTE *)(v111 + 272) = 0;
          *(_QWORD *)(v111 + 296) = 0;
          *(_BYTE *)(v111 + 304) = 0;
          *(_QWORD *)(v111 + 328) = 0;
          *(_BYTE *)(v111 + 336) = 0;
          *(_QWORD *)(v111 + 360) = 0;
          *(_BYTE *)(v111 + 368) = 0;
          *(_QWORD *)(v111 + 392) = 0;
          *(_BYTE *)(v111 + 400) = 0;
          *(_QWORD *)(v111 + 424) = 0x800000000LL;
          *(_QWORD *)(v111 + 528) = v111 + 544;
          *(_QWORD *)(v111 + 536) = 0x600000000LL;
          v74 = 8;
        }
        *(_QWORD *)(v72 + 8) = v71;
      }
      v149 = __PAIR64__(v10, v11);
      v150[0] = 1;
      if ( v75 > v74 )
      {
        sub_2237220(v71 + 416, v71 + 432, v75, 12);
        v73 = *(unsigned int *)(v71 + 424);
      }
      v76 = *(_QWORD *)(v71 + 416) + 12 * v73;
      *(_QWORD *)v76 = v149;
      *(_DWORD *)(v76 + 8) = *(_DWORD *)v150;
      ++*(_DWORD *)(v71 + 424);
    }
LABEL_38:
    sub_15F7200(v156);
    result = 0;
    if ( !a8 )
      return v136;
    return result;
  }
  v138 = (__int64 *)sub_9C7D40(v13, a2, v15, v16, v17);
  v131 = sub_BAE550(v138, a2, v18, v19, v20, v21);
  if ( !v131 )
  {
    sub_168B9F0((__int64)v156, (__int64 *)(a1 + 8), a2, 0x1131u, 0);
    ptr = (void *)v138[5];
    v60 = sub_15894B0((__int64)v156, (__int64 *)&ptr);
LABEL_47:
    *(_QWORD *)&v150[4] = 0;
    v151 = 0;
    v152 = v154;
    v153 = 0;
    v154[0] = 0;
    v155 = 0;
    v149 = __PAIR64__(v10, v11);
    v150[0] = 1;
    sub_1589170(v60, &v149);
    if ( v152 != v154 )
      operator delete(v152);
    goto LABEL_38;
  }
  v132 = sub_F65FA0(v13);
  if ( v132 )
  {
    sub_168B9F0((__int64)v156, (__int64 *)(a1 + 8), a2, 0x1132u, 0);
    v60 = sub_1605D30((__int64)v156, (__int64 *)&v136);
    goto LABEL_47;
  }
  ptr = v148;
  v22 = a5;
  v147 = 0x400000000LL;
  v23 = *(_DWORD *)(v131 + 8);
  v137 = v23;
  if ( !(_DWORD)a5 )
    goto LABEL_131;
  v133 = a2;
  for ( i = nullptr; ; i = (unsigned __int64 *)((char *)i + 1) )
  {
    v24 = i;
    v25 = *(__int64 **)(a4 + 8LL * (_QWORD)i);
    v139 = *v25;
    v26 = *v25;
    v156[1] = (__int64)(v25 + 1);
    v156[0] = v26;
    v27 = sub_F6D0E0(v156);
    v141 = v27;
    v142 = v28;
    if ( !v27 )
      goto LABEL_11;
    if ( (v27 & 0xF) != 0 )
    {
      v31 = 0;
      v32 = 0;
    }
    else
    {
      v31 = 0;
      v32 = 0;
      v28 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v28 + 16) == 8 )
      {
        v143 = (char *)v27;
        v144 = (__int64 *)v142;
        v77 = sub_F6D3F0((__int64)&v143);
        v78 = v77;
        v32 = v77;
        v134 = HIDWORD(v77);
        v31 = HIDWORD(v77);
        if ( (unsigned __int16)sub_F5E940((__int64)v143) >> 8 )
        {
          v139 = *((_QWORD *)v143 + 5);
          v79 = sub_F6CCB0((__int64 *)&v143, a7);
          sub_168B9F0((__int64)v156, (__int64 *)(a1 + 8), v79, 0x112Au, 0);
          v80 = sub_1605D30((__int64)v156, &v139);
          *(_QWORD *)&v150[4] = 0;
          v151 = 0;
          v24 = &v149;
          v152 = v154;
          v153 = 0;
          v154[0] = 0;
          v155 = 0;
          v149 = __PAIR64__(v134, v78);
          v150[0] = 1;
          sub_1589170(v80, &v149);
          v81 = v152;
          if ( v152 != v154 )
            goto LABEL_70;
          goto LABEL_71;
        }
      }
    }
    if ( a9 )
      goto LABEL_11;
    v88 = sub_F6CCB0((__int64 *)&v141, a7);
    sub_168B9F0((__int64)v156, (__int64 *)(a1 + 8), v88, 0x112Eu, 0);
    v89 = sub_1605D30((__int64)v156, &v139);
    v90 = 0;
    v91 = v89;
    v92 = *(_QWORD *)&byte_8[v139 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v92 & 8) != 0 )
      v90 = *(__int64 *)((char *)&qword_18 + (v92 & 0xFFFFFFFFFFFFFFF0LL));
    v140 = v90 | ((unsigned __int8)v92 | (unsigned __int8)v139) & 7;
    sub_F71C30(&v143, (unsigned __int64 *)&v140);
    if ( *(_BYTE *)(v91 + 120) )
    {
      sub_AEC220((unsigned __int8 **)(v91 + 32), v143, (signed __int64)v144);
    }
    else if ( *(_BYTE *)(v91 + 132) )
    {
      v96 = sub_168B9E0((_QWORD *)v91);
      v99 = *(_QWORD *)(v91 + 16);
      if ( v99 )
      {
        v135 = v96;
        v99 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 32LL))(v99);
        v96 = v135;
      }
      v149 = v99;
      v100 = sub_1587BC0(v96, (__int64 *)&v149, v96, (__int64)&v149, v97, v98);
      sub_AEC220((unsigned __int8 **)(*v100 + 32LL * *(unsigned int *)(v91 + 128) + 8), v143, (signed __int64)v144);
    }
    v24 = &v149;
    *(_QWORD *)&v150[4] = 0;
    v152 = v154;
    v151 = 0;
    v153 = 0;
    v154[0] = 0;
    v155 = 0;
    v149 = __PAIR64__(v31, v32);
    v150[0] = 1;
    sub_1589170(v91, &v149);
    if ( v152 != v154 )
      operator delete(v152);
    v81 = v143;
    if ( v143 != &v145 )
LABEL_70:
      operator delete(v81);
LABEL_71:
    sub_15F7200(v156);
LABEL_11:
    v33 = *(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v33 + 8) & 0xF) != 0 )
      v34 = sub_F64F00(v139, (__int64)v24, v28, v29, v30) & 0xFFFFFFFFFFFFFFF0LL;
    else
      v34 = v33 & 0xFFFFFFFFFFFFFFF0LL;
    v35 = (unsigned int)v147;
    v36 = HIDWORD(v147);
    v139 = v34;
    v37 = (unsigned int)v147 + 1LL;
    if ( v37 > HIDWORD(v147) )
    {
      v24 = (unsigned __int64 *)v148;
      sub_2237220(&ptr, v148, v37, 8);
      v35 = (unsigned int)v147;
    }
    v38 = ptr;
    *((_QWORD *)ptr + v35) = v34;
    LODWORD(v147) = v147 + 1;
    v39 = *(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v39 + 16) == 38 )
      goto LABEL_16;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38
      && sub_F63050(*(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFF0LL), v24, v38, v36)
      || v132 )
    {
      v39 = *(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v39 + 16) == 34 )
      {
        v132 = 1;
        goto LABEL_54;
      }
LABEL_16:
      v132 = 1;
      v40 = 0;
      goto LABEL_17;
    }
    if ( v137 <= (unsigned int)i )
    {
      v101 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v156, v101, v133, 0x1133u, 0);
      LOBYTE(v141) = 0;
      v102 = sub_1588420((__int64)v156, (unsigned __int8 *)&v141);
      v149 = v138[5];
      v103 = sub_15894B0(v102, (__int64 *)&v149);
      LODWORD(v143) = a5;
      v104 = sub_16CF160(v103, (unsigned int *)&v143);
      sub_1588370(v104, &v137);
      goto LABEL_102;
    }
    v24 = (unsigned __int64 *)v131;
    v40 = *(_QWORD *)(v131 + 8LL * (_QWORD)i + 16);
    v39 = *(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v39 + 16) == 34 )
    {
LABEL_19:
      if ( v40 )
      {
        v41 = (unsigned __int64 *)(*(_QWORD *)(v40 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v40 + 80) & 4) != 0 )
          v42 = v41[1];
        else
          v42 = *v41;
        v141 = v42;
        v43 = (__int64 *)(v42 & 0xFFFFFFFFFFFFFFF0LL);
        v44 = *v43;
        if ( *(_BYTE *)(*v43 + 16) != 34 )
          v44 = sub_F63050(*v43, v24, v41, v36);
        v45 = *(_QWORD *)(*(_QWORD *)(v39 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v46 = (unsigned int)*(unsigned __int8 *)(v45 + 16) - 35;
        if ( (unsigned int)v46 > 1 )
          v45 = sub_F63050(v45, v24, v46, v36);
        if ( !(*(_BYTE *)(v45 + 19) >> 2)
          && (v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL),
              *(_BYTE *)(v47 + 16) == 13)
          && ((*(_WORD *)(v47 + 18) >> 3) & 0x1FF) == 0x1E9 )
        {
          v61 = *(_QWORD *)(*(_QWORD *)(v44 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v62 = (unsigned int)*(unsigned __int8 *)(v61 + 16) - 35;
          if ( (unsigned int)v62 > 1 )
            v61 = sub_F63050(v61, v24, v62, v36);
          if ( *(_BYTE *)(v61 + 19) >> 2
            || (v63 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL),
                *(_BYTE *)(v63 + 16) != 13)
            || ((*(_WORD *)(v63 + 18) >> 3) & 0x1FF) != 0x1E9 )
          {
LABEL_30:
            v48 = (__int64 *)(a1 + 8);
            v149 = *v25;
            *(_QWORD *)v150 = v25 + 1;
            v49 = sub_F6CCB0((__int64 *)&v149, a7);
            sub_168B9F0((__int64)v156, v48, v49, 0x1129u, 0);
            v50 = sub_1605D30((__int64)v156, &v139);
            v51 = sub_1605D30(v50, (__int64 *)&v141);
            v143 = *(char **)(v40 + 40);
            sub_15894B0(v51, (__int64 *)&v143);
            sub_15F7200(v156);
            sub_168B9F0((__int64)v156, v48, *(_DWORD *)(v40 + 24), 0x180Cu, 0);
            v149 = *(_QWORD *)(v40 + 40);
            sub_15894B0((__int64)v156, (__int64 *)&v149);
            sub_15F7200(v156);
            result = 0;
            if ( a8 )
              goto LABEL_32;
            goto LABEL_31;
          }
        }
        else if ( !(unsigned __int8)sub_AABC90(*(_QWORD *)(a1 + 248), v44, v39, v36, v30) )
        {
          goto LABEL_30;
        }
      }
      goto LABEL_54;
    }
LABEL_17:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
    {
      v39 = sub_F63050(v39, v24, v38, v36);
      if ( v39 )
        goto LABEL_19;
      v39 = *(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFF0LL);
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
    {
      if ( v40 )
      {
        v82 = (_QWORD *)(*(_QWORD *)(v40 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        v83 = (*(_QWORD *)(v40 + 80) & 4) != 0 ? v82[1] : *v82;
        v141 = v83;
        if ( !(unsigned __int8)sub_F68150(
                                 *(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFF0LL),
                                 *(char **)(a1 + 248),
                                 (__int64)v82,
                                 v36,
                                 v30) )
        {
          v84 = (__int64 *)(a1 + 8);
          v149 = *v25;
          *(_QWORD *)v150 = v25 + 1;
          v85 = sub_F6CCB0((__int64 *)&v149, a7);
          sub_168B9F0((__int64)v156, v84, v85, 0x1129u, 0);
          v86 = sub_1605D30((__int64)v156, &v139);
          v87 = sub_1605D30(v86, (__int64 *)&v141);
          v143 = *(char **)(v40 + 40);
          sub_15894B0(v87, (__int64 *)&v143);
          sub_15F7200(v156);
          sub_168B9F0((__int64)v156, v84, *(_DWORD *)(v40 + 24), 0x180Cu, 0);
          v149 = *(_QWORD *)(v40 + 40);
          sub_15894B0((__int64)v156, (__int64 *)&v149);
          sub_15F7200(v156);
          if ( !a8 )
            goto LABEL_31;
          result = 0;
          goto LABEL_32;
        }
      }
    }
    else if ( !sub_F6AC10(v39, (__int64)v24, (__int64)v38, v36, v30)
           && (*(_BYTE *)(*(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      v143 = (char *)*v25;
      v144 = v25 + 1;
      v105 = sub_F6CCB0((__int64 *)&v143, a7);
      sub_168B9F0((__int64)v156, (__int64 *)(a1 + 8), v105, 0x112Du, 0);
      v106 = sub_1605D30((__int64)v156, &v139);
      v107 = *v25;
      *(_QWORD *)v150 = v25 + 1;
      v149 = v107;
      v108 = sub_F6CE20((__int64 *)&v149);
      v141 = __PAIR64__(v108, sub_F6CCB0((__int64 *)&v149, a7));
      sub_1587DB0(v106, (__int64 *)&v141);
      sub_15F7200(v156);
      if ( !a8 )
        goto LABEL_31;
      result = 0;
      goto LABEL_32;
    }
LABEL_54:
    if ( i == (unsigned __int64 *)(unsigned int)(a5 - 1) )
      break;
  }
  v9 = v133;
  v22 = v147;
  if ( v132 )
    goto LABEL_133;
  v23 = v137;
LABEL_131:
  if ( v23 == v22 )
  {
LABEL_133:
    result = sub_A750A0(*(_QWORD *)(a1 + 248), v136, ptr, v22, nullptr, 0, 0);
  }
  else
  {
    v101 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v156, v101, v9, 0x1133u, 0);
    LOBYTE(v140) = *(unsigned int *)(v131 + 8) > a5;
    v124 = sub_1588420((__int64)v156, (unsigned __int8 *)&v140);
    v149 = v138[5];
    v125 = sub_15894B0(v124, (__int64 *)&v149);
    LODWORD(v141) = v147;
    v126 = sub_16CF160(v125, (unsigned int *)&v141);
    LODWORD(v143) = v137;
    sub_16CF160(v126, (unsigned int *)&v143);
LABEL_102:
    sub_15F7200(v156);
    sub_168B9F0((__int64)v156, v101, *((_DWORD *)v138 + 6), 0x188Bu, 0);
    sub_1A8B820((__int64)v156, (__int64 *)&v138);
    sub_15F7200(v156);
    if ( a8 )
      result = 0;
    else
LABEL_31:
      result = v136;
  }
LABEL_32:
  if ( ptr != v148 )
  {
    v127 = result;
    free(ptr);
    return v127;
  }
  return result;
}
