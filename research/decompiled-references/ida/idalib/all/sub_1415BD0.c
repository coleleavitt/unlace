__int64 __fastcall sub_1415BD0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        unsigned int *a9)
{
  _BYTE *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // esi
  int v18; // eax
  __int64 v19; // r15
  void *v20; // rax
  void *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int8 *v24; // r15
  _BYTE *v25; // r12
  unsigned __int8 *v26; // rbx
  __int64 v27; // rax
  unsigned __int8 *v28; // rdi
  void **v29; // r15
  _BYTE *v30; // r12
  void **v31; // rbx
  char v32; // r15
  unsigned int v33; // r12d
  int v34; // eax
  _DWORD *v35; // rax
  unsigned int v36; // edx
  unsigned __int8 *v37; // r12
  unsigned __int8 *v38; // r13
  __int64 v39; // rax
  void **v40; // r13
  void **v41; // r12
  void **v42; // r13
  void **v43; // r12
  char *v44; // r12
  char *v45; // rdi
  char *v46; // r13
  char *v47; // rdi
  char *v48; // rdx
  unsigned __int64 v49; // rax
  char *v50; // rax
  char *v51; // r15
  __int64 v52; // r12
  char *v53; // rbp
  char *v54; // rbx
  char *v55; // rdi
  char *v56; // rdi
  void **v57; // r15
  _BYTE *v58; // r12
  void *v59; // rbx
  void *v60; // rdx
  __int64 v61; // r15
  __int64 v62; // rax
  _BYTE *v63; // r12
  void **v64; // rbx
  void **v65; // r13
  void **v66; // r12
  void **v67; // r13
  void **v68; // r12
  void **v69; // r13
  void **v70; // r12
  void **v71; // r12
  void **v72; // rbx
  void **v73; // r12
  void **v74; // rbx
  void **v75; // r12
  void **v76; // rbx
  void **v77; // r12
  void **v78; // rbx
  void **v79; // r12
  void **v80; // rbx
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rax
  char v85; // dl
  __int64 v86; // rcx
  unsigned __int64 v87; // r15
  __int64 v88; // rax
  __int64 *v89; // rbx
  __int64 v90; // rax
  unsigned __int64 v91; // r10
  __int64 v92; // rax
  _QWORD *v93; // r11
  unsigned __int64 v94; // r8
  __int64 v95; // rax
  _QWORD *v96; // r9
  char v97; // dl
  char v98; // dl
  __int64 *v99; // rdi
  __int64 v100; // rcx
  _DWORD *v101; // rax
  _DWORD *v102; // rdx
  __int64 *v103; // rdi
  __int64 v104; // rcx
  _DWORD *v105; // rax
  _DWORD *v106; // rdx
  __int64 v107; // rax
  __int64 *v108; // rdi
  __int64 v109; // rcx
  _DWORD *v110; // rax
  _DWORD *v111; // rdx
  char v113; // [rsp+0h] [rbp-658h]
  __int64 v114; // [rsp+8h] [rbp-650h]
  __int64 v115; // [rsp+8h] [rbp-650h]
  _QWORD *v116; // [rsp+8h] [rbp-650h]
  __int64 v117; // [rsp+10h] [rbp-648h]
  _QWORD *v118; // [rsp+18h] [rbp-640h]
  _BYTE *v119; // [rsp+20h] [rbp-638h]
  char *v120; // [rsp+20h] [rbp-638h]
  char *v121; // [rsp+20h] [rbp-638h]
  void **v122; // [rsp+20h] [rbp-638h]
  __int64 v123; // [rsp+20h] [rbp-638h]
  int v125; // [rsp+38h] [rbp-620h]
  char v126; // [rsp+3Ch] [rbp-61Ch]
  __m128i v127; // [rsp+40h] [rbp-618h] BYREF
  _BYTE *v128; // [rsp+70h] [rbp-5E8h] BYREF
  __int64 v129; // [rsp+78h] [rbp-5E0h]
  __int128 v130; // [rsp+80h] [rbp-5D8h]
  __int64 v131; // [rsp+90h] [rbp-5C8h]
  __int128 v132; // [rsp+98h] [rbp-5C0h] BYREF
  __int64 v133; // [rsp+A8h] [rbp-5B0h]
  __int128 v134; // [rsp+B0h] [rbp-5A8h]
  __int128 v135; // [rsp+C0h] [rbp-598h]
  void **v136; // [rsp+D0h] [rbp-588h] BYREF
  void **v137; // [rsp+D8h] [rbp-580h] BYREF
  unsigned int v138; // [rsp+E0h] [rbp-578h] BYREF
  _DWORD v139[20]; // [rsp+E8h] [rbp-570h] BYREF
  void *v140[2]; // [rsp+138h] [rbp-520h] BYREF
  __int64 v141; // [rsp+148h] [rbp-510h]
  char v142; // [rsp+150h] [rbp-508h]
  char v143; // [rsp+158h] [rbp-500h]
  void *v144; // [rsp+160h] [rbp-4F8h] BYREF
  unsigned __int64 v145; // [rsp+168h] [rbp-4F0h] BYREF
  __int64 v146; // [rsp+170h] [rbp-4E8h] BYREF
  __int64 v147; // [rsp+178h] [rbp-4E0h] BYREF
  void *v148; // [rsp+180h] [rbp-4D8h]
  __int64 v149; // [rsp+190h] [rbp-4C8h] BYREF
  __int16 v150; // [rsp+1A0h] [rbp-4B8h]
  int v151; // [rsp+1C0h] [rbp-498h]
  int v152; // [rsp+1C4h] [rbp-494h]
  __m128i v153; // [rsp+1C8h] [rbp-490h]
  __int64 v154; // [rsp+1D8h] [rbp-480h]
  char v155; // [rsp+1E0h] [rbp-478h]
  unsigned __int8 v156; // [rsp+1E8h] [rbp-470h]
  _QWORD v157[8]; // [rsp+1F0h] [rbp-468h] BYREF
  void *ptr; // [rsp+230h] [rbp-428h]
  __int64 v159[16]; // [rsp+240h] [rbp-418h] BYREF
  _BYTE v160[216]; // [rsp+2C0h] [rbp-398h] BYREF
  int v161; // [rsp+398h] [rbp-2C0h]
  void *v162; // [rsp+3B8h] [rbp-2A0h]
  void **v163; // [rsp+3C0h] [rbp-298h]
  void *v164; // [rsp+3D0h] [rbp-288h]
  void **v165; // [rsp+3D8h] [rbp-280h]
  void *v166; // [rsp+3E8h] [rbp-270h]
  void **v167; // [rsp+3F0h] [rbp-268h]
  void *v168; // [rsp+400h] [rbp-258h]
  void **v169; // [rsp+408h] [rbp-250h]
  void *v170; // [rsp+418h] [rbp-240h]
  void **v171; // [rsp+420h] [rbp-238h]
  void *v172; // [rsp+448h] [rbp-210h]
  void *v173; // [rsp+468h] [rbp-1F0h]
  void *v174; // [rsp+488h] [rbp-1D0h]
  void *v175; // [rsp+4A8h] [rbp-1B0h]
  void *v176; // [rsp+4C8h] [rbp-190h]
  void **v177; // [rsp+4D0h] [rbp-188h]
  void *v178; // [rsp+4E0h] [rbp-178h]
  void **v179; // [rsp+4E8h] [rbp-170h]
  void *v180; // [rsp+500h] [rbp-158h]
  void **v181; // [rsp+508h] [rbp-150h]
  void *v182; // [rsp+528h] [rbp-130h]
  void *v183; // [rsp+548h] [rbp-110h]
  void **v184; // [rsp+550h] [rbp-108h]
  void *v185; // [rsp+560h] [rbp-F8h]
  void *v186; // [rsp+580h] [rbp-D8h]
  void *v187; // [rsp+5B8h] [rbp-A0h]
  void **v188; // [rsp+5C0h] [rbp-98h]
  void *v189; // [rsp+5D0h] [rbp-88h]
  void *v190; // [rsp+5F8h] [rbp-60h]

  v12 = v160;
  v126 = a6;
  v160[0] = 0;
  if ( (unsigned int)(a2 + 1) <= 1 )
    goto LABEL_211;
  if ( a2 < 0 )
  {
    v87 = (unsigned int)(-2 - a2);
    v88 = *(_QWORD *)(*(_QWORD *)(a4 + 320) + 8LL * ((unsigned int)(-2 - a2) >> 6));
    if ( _bittest64(&v88, v87) )
    {
      v89 = (__int64 *)(*(_QWORD *)(a4 + 272) + 8 * ((unsigned __int64)(int)v87 >> 5));
      v90 = *v89;
      if ( *v89 )
      {
        v12 = v160;
        v13 = v90 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
        goto LABEL_4;
      }
      v103 = (__int64 *)(*(_QWORD *)(a4 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v104 = *v103;
      v103[10] += 768;
      v105 = (_DWORD *)((v104 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v103[1] >= (unsigned __int64)(v105 + 192) && v104 )
        *v103 = (__int64)(v105 + 192);
      else
        v105 = (_DWORD *)sub_986170((__int64)v103, 768, 768, 3, a5, a6);
      *v89 = (__int64)v105;
      v106 = v105 + 192;
      do
      {
        *v105 = 0;
        v105 += 6;
        *((_OWORD *)v105 - 1) = 0;
        *((_QWORD *)v105 - 1) = 0;
      }
      while ( v105 != v106 );
      v107 = *v89;
      v85 = v160[0];
      v12 = v160;
      v13 = v107 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
    }
    else
    {
      v12 = v160;
      v13 = sub_101F930(a4, v87, v160);
      v85 = v160[0];
    }
    if ( v85 )
      goto LABEL_211;
    goto LABEL_4;
  }
  v12 = v160;
  v13 = *(_QWORD *)(a4 + 184) + 24LL * (unsigned int)a2;
LABEL_4:
  if ( v13 && *(char *)(v13 + 3) >= 0 )
  {
    sub_101D9A0(
      &v127,
      (__int64 *)(*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL),
      *(_QWORD *)(a4 + 8),
      *(_QWORD *)(a4 + 16),
      0);
    v14 = v127.m128i_i64[0];
    sub_FEA220((__int64)v160);
    v161 = 3;
    v15 = v14 + v127.m128i_i64[1];
    if ( !a9 )
    {
      LOBYTE(v157[0]) = 0;
      v16 = v14;
      goto LABEL_204;
    }
    goto LABEL_7;
  }
LABEL_211:
  v14 = v127.m128i_i64[0];
  sub_FEA220((__int64)v160);
  v161 = 3;
  v16 = v127.m128i_i64[0];
  v15 = v127.m128i_i64[0] + v127.m128i_i64[1];
  if ( a9 )
LABEL_7:
    v16 = v14 + *a9;
  LOBYTE(v157[0]) = 0;
  if ( (unsigned int)(a2 + 1) <= 1 )
    goto LABEL_9;
LABEL_204:
  if ( a2 < 0 )
  {
    v91 = (unsigned int)(-2 - a2);
    v92 = *(_QWORD *)(*(_QWORD *)(a4 + 320) + 8LL * ((unsigned int)(-2 - a2) >> 6));
    if ( _bittest64(&v92, v91) )
    {
      v93 = (_QWORD *)(*(_QWORD *)(a4 + 272) + 8 * ((unsigned __int64)(int)v91 >> 5));
      if ( *v93 )
      {
        v84 = *v93 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
        goto LABEL_206;
      }
      v99 = (__int64 *)(*(_QWORD *)(a4 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v100 = *v99;
      v99[10] += 768;
      v101 = (_DWORD *)((v100 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v99[1] >= (unsigned __int64)(v101 + 192) && v100 )
      {
        *v99 = (__int64)(v101 + 192);
      }
      else
      {
        v123 = v16;
        v118 = v93;
        v115 = v15;
        v101 = (_DWORD *)sub_986170((__int64)v99, 768, 768, 3, v16, v15);
        v16 = v123;
        v93 = v118;
        LOBYTE(v91) = -2 - a2;
        v15 = v115;
      }
      *v93 = v101;
      v102 = v101 + 192;
      do
      {
        *v101 = 0;
        v101 += 6;
        *((_OWORD *)v101 - 1) = 0;
        *((_QWORD *)v101 - 1) = 0;
      }
      while ( v101 != v102 );
      v97 = v157[0];
      v84 = *v93 + 24 * (v91 & 0x1F);
    }
    else
    {
      v117 = v16;
      v114 = v15;
      v84 = sub_101F930(a4, v91, v157);
      v15 = v114;
      v16 = v117;
      v97 = v157[0];
    }
    if ( v97 )
      goto LABEL_9;
    goto LABEL_206;
  }
  v84 = *(_QWORD *)(a4 + 184) + 24LL * (unsigned int)a2;
LABEL_206:
  if ( v84 && *(char *)(v84 + 3) >= 0 )
  {
    v17 = *(_DWORD *)v84 & 0x7FFFFFFF;
    goto LABEL_10;
  }
LABEL_9:
  v17 = 0;
LABEL_10:
  sub_13D1080((__int64)v157, v17, (__int64)v160, v14, v16, v15, 1);
  v18 = sub_13D1500((__int64)v157, v159[9], 1);
  v128 = v157;
  v125 = v18;
  v130 = 0u;
  v129 = a5;
  v131 = 0;
  v134 = 0;
  v135 = 0;
  v132 = 0;
  v133 = 0;
  DWORD2(v134) = 3;
  sub_140C1F0(&v128, (__m128i)0LL, *(double *)a8.m128i_i64);
  while ( 2 )
  {
    switch ( DWORD2(v134) )
    {
      case 0:
      case 1:
      case 2:
      case 4:
      case 5:
      case 6:
      case 7:
      case 9:
      case 0xA:
      case 0xD:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
        sub_FC70B0((__int64)&v144, v129, SHIDWORD(v134), 1074);
        if ( (_BYTE)v150 )
        {
          sub_FC7790(v146, (__int64 *)&v144, SHIBYTE(v150));
          v146 = 0;
          v150 = 0;
        }
        if ( v148 != &v149 )
          operator delete(v148);
        v48 = (char *)v144;
        if ( !v144 )
          goto LABEL_94;
        v49 = v145;
        if ( !v145 )
          goto LABEL_94;
        if ( (unsigned __int64)v144 < v145 || (unsigned __int64)v144 > v145 + 14848 )
        {
          v50 = *((char **)v144 + 66);
          v51 = &v50[64 * (unsigned __int64)*((unsigned int *)v144 + 134)];
          if ( v50 != v51 )
          {
            v52 = a1;
            v119 = v12;
            v53 = (char *)v144;
            v54 = *((char **)v144 + 66);
            do
            {
              while ( 1 )
              {
                v51 -= 64;
                v55 = *((char **)v51 + 3);
                if ( v55 == v51 + 40 )
                  break;
                operator delete(v55);
                if ( v54 == v51 )
                  goto LABEL_85;
              }
            }
            while ( v54 != v51 );
LABEL_85:
            v48 = v53;
            v12 = v119;
            a1 = v52;
            v51 = *((char **)v48 + 66);
          }
          if ( v51 != v48 + 544 )
          {
            v120 = v48;
            free(v51);
            v48 = v120;
          }
          v56 = *((char **)v48 + 52);
          v57 = (void **)(v48 + 416);
          if ( v56 != v48 + 432 )
          {
            v121 = v48;
            free(v56);
            v48 = v121;
          }
          v58 = v12;
          v59 = v48;
          v122 = (void **)(v48 + 96);
          while ( 1 )
          {
            v57 -= 4;
            if ( *v57 == v57 + 2 )
            {
              if ( v57 == v122 )
              {
LABEL_93:
                v60 = v59;
                v12 = v58;
                operator delete(v60, 0x3A0u);
                goto LABEL_94;
              }
            }
            else
            {
              operator delete(*v57);
              if ( v57 == v122 )
                goto LABEL_93;
            }
          }
        }
        v86 = *(unsigned int *)(v145 + 14976);
        *(_DWORD *)(v145 + 14976) = v86 + 1;
        *(_QWORD *)(v49 + 8 * v86 + 14848) = v48;
LABEL_94:
        LOBYTE(v134) = 1;
        sub_140C1F0(&v128, (__m128i)0LL, *(double *)a8.m128i_i64);
        continue;
      case 3:
        v32 = v134;
        if ( !a9 )
          goto LABEL_44;
        v33 = HIDWORD(v134) & 0x7FFFFFFF;
        if ( (HIDWORD(v134) & 0x7FFFFFFFu) < *(_DWORD *)(a4 + 476) || v33 >= *(_DWORD *)(a4 + 480) )
        {
          v34 = sub_101D590(a4, v33);
          LOBYTE(v144) = 0;
          if ( (unsigned int)(v34 + 1) > 1 )
            goto LABEL_39;
LABEL_216:
          v36 = 0;
          goto LABEL_43;
        }
        v34 = *(_DWORD *)(a4 + 472);
        LOBYTE(v144) = 0;
        if ( (unsigned int)(v34 + 1) <= 1 )
          goto LABEL_216;
LABEL_39:
        if ( v34 >= 0 )
        {
          v35 = (_DWORD *)(*(_QWORD *)(a4 + 184) + 24LL * (unsigned int)v34);
          goto LABEL_41;
        }
        v94 = (unsigned int)(-2 - v34);
        v95 = *(_QWORD *)(*(_QWORD *)(a4 + 320) + 8LL * ((unsigned int)(-2 - v34) >> 6));
        if ( _bittest64(&v95, v94) )
        {
          v96 = (_QWORD *)(*(_QWORD *)(a4 + 272) + 8 * ((unsigned __int64)(int)v94 >> 5));
          if ( *v96 )
          {
            v35 = (_DWORD *)(*v96 + 24 * (v94 & 0x1F));
            goto LABEL_41;
          }
          v108 = (__int64 *)(*(_QWORD *)(a4 + 288) & 0xFFFFFFFFFFFFFFF8LL);
          v109 = *v108;
          v108[10] += 768;
          v110 = (_DWORD *)((v109 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v108[1] >= (unsigned __int64)(v110 + 192) && v109 )
          {
            *v108 = (__int64)(v110 + 192);
          }
          else
          {
            v116 = v96;
            v113 = v94;
            v110 = (_DWORD *)sub_986170((__int64)v108, 768, 768, 3, v94, (__int64)v96);
            v96 = v116;
            LOBYTE(v94) = v113;
          }
          *v96 = v110;
          v111 = v110 + 192;
          do
          {
            *v110 = 0;
            v110 += 6;
            *((_OWORD *)v110 - 1) = 0;
            *((_QWORD *)v110 - 1) = 0;
          }
          while ( v110 != v111 );
          v98 = (char)v144;
          v35 = (_DWORD *)(*v96 + 24 * (v94 & 0x1F));
        }
        else
        {
          v35 = (_DWORD *)sub_101F930(a4, v94, &v144);
          v98 = (char)v144;
        }
        if ( !v98 )
        {
LABEL_41:
          v36 = 0;
          if ( v35 )
            v36 = v33 - (*v35 & 0x7FFFFFFF);
          goto LABEL_43;
        }
        v36 = 0;
LABEL_43:
        *a9 = v36;
LABEL_44:
        v38 = *((unsigned __int8 **)&v132 + 1);
        v37 = (unsigned __int8 *)v132;
        if ( v32 )
        {
          *(_BYTE *)(a1 + 48) = 0;
          if ( v37 != v38 )
          {
            do
            {
              while ( 1 )
              {
                v82 = v37[136];
                if ( (_BYTE)v82 == 0xFF )
                  break;
                v83 = (__int64)v37;
                v37 += 144;
                ((void (__fastcall *)(__int64))funcs_13F3420[v82])(v83);
                if ( v38 == v37 )
                  goto LABEL_198;
              }
              v37 += 144;
            }
            while ( v38 != v37 );
LABEL_198:
            v38 = (unsigned __int8 *)v132;
          }
          if ( v38 )
            operator delete(v38);
        }
        else
        {
          LODWORD(v130) = a2;
          *(_DWORD *)a1 = a2;
          *((_QWORD *)&v130 + 1) = a3;
          *(_QWORD *)(a1 + 8) = a3;
          LODWORD(v131) = v125;
          *(_BYTE *)(a1 + 20) = v126;
          v39 = v133;
          *(_DWORD *)(a1 + 16) = v125;
          *(_QWORD *)(a1 + 24) = v37;
          *(_QWORD *)(a1 + 32) = v38;
          *(_QWORD *)(a1 + 40) = v39;
          *(_BYTE *)(a1 + 48) = 1;
        }
        v157[0] = &off_2C449F0;
        if ( ptr != v159 )
          free(ptr);
        if ( v190 != v12 + 840 )
          operator delete(v190);
        if ( v189 != v12 + 800 )
          operator delete(v189);
        v40 = v188;
        v41 = (void **)v187;
        if ( v188 != v187 )
        {
          do
          {
            while ( *v41 != v41 + 2 )
            {
              operator delete(*v41);
              v41 += 4;
              if ( v40 == v41 )
                goto LABEL_55;
            }
            v41 += 4;
          }
          while ( v40 != v41 );
LABEL_55:
          v41 = (void **)v187;
        }
        if ( v41 )
          operator delete(v41);
        if ( v186 != v12 + 720 )
          operator delete(v186);
        if ( v185 != v12 + 688 )
          operator delete(v185);
        v42 = v184;
        v43 = (void **)v183;
        if ( v184 != v183 )
        {
          do
          {
            while ( *v43 != v43 + 2 )
            {
              operator delete(*v43);
              v43 += 7;
              if ( v42 == v43 )
                goto LABEL_65;
            }
            v43 += 7;
          }
          while ( v42 != v43 );
LABEL_65:
          v43 = (void **)v183;
        }
        if ( v43 )
          operator delete(v43);
        v44 = (char *)v182;
        if ( v182 )
        {
          while ( 1 )
          {
            sub_998560((__int64)(v12 + 600), *((_QWORD **)v44 + 3));
            v45 = *((char **)v44 + 8);
            v46 = *((char **)v44 + 2);
            if ( v45 != v44 + 80 )
              operator delete(v45);
            v47 = *((char **)v44 + 4);
            if ( v47 == v44 + 48 )
            {
              operator delete(v44);
              if ( !v46 )
                break;
            }
            else
            {
              operator delete(v47);
              operator delete(v44);
              if ( !v46 )
                break;
            }
            v44 = v46;
          }
        }
        v65 = v181;
        v66 = (void **)v180;
        if ( v181 != v180 )
        {
          do
          {
            while ( *v66 != v66 + 2 )
            {
              operator delete(*v66);
              v66 += 4;
              if ( v65 == v66 )
                goto LABEL_123;
            }
            v66 += 4;
          }
          while ( v65 != v66 );
LABEL_123:
          v66 = (void **)v180;
        }
        if ( v66 )
          operator delete(v66);
        v67 = v179;
        v68 = (void **)v178;
        if ( v179 != v178 )
        {
          do
          {
            while ( *v68 != v68 + 2 )
            {
              operator delete(*v68);
              v68 += 4;
              if ( v67 == v68 )
                goto LABEL_129;
            }
            v68 += 4;
          }
          while ( v67 != v68 );
LABEL_129:
          v68 = (void **)v178;
        }
        if ( v68 )
          operator delete(v68);
        v69 = v177;
        v70 = (void **)v176;
        if ( v177 != v176 )
        {
          do
          {
            while ( *v70 != v70 + 2 )
            {
              operator delete(*v70);
              v70 += 4;
              if ( v69 == v70 )
                goto LABEL_135;
            }
            v70 += 4;
          }
          while ( v69 != v70 );
LABEL_135:
          v70 = (void **)v176;
        }
        if ( v70 )
          operator delete(v70);
        if ( v175 != v12 + 504 )
          operator delete(v175);
        if ( v174 != v12 + 472 )
          operator delete(v174);
        if ( v173 != v12 + 440 )
          operator delete(v173);
        if ( v172 != v12 + 408 )
          operator delete(v172);
        v71 = v171;
        v72 = (void **)v170;
        if ( v171 != v170 )
        {
          do
          {
            while ( *v72 != v72 + 2 )
            {
              operator delete(*v72);
              v72 += 4;
              if ( v72 == v71 )
                goto LABEL_149;
            }
            v72 += 4;
          }
          while ( v71 != v72 );
LABEL_149:
          v72 = (void **)v170;
        }
        if ( v72 )
          operator delete(v72);
        v73 = v169;
        v74 = (void **)v168;
        if ( v169 != v168 )
        {
          do
          {
            while ( *v74 != v74 + 2 )
            {
              operator delete(*v74);
              v74 += 4;
              if ( v74 == v73 )
                goto LABEL_155;
            }
            v74 += 4;
          }
          while ( v73 != v74 );
LABEL_155:
          v74 = (void **)v168;
        }
        if ( v74 )
          operator delete(v74);
        v75 = v167;
        v76 = (void **)v166;
        if ( v167 != v166 )
        {
          do
          {
            while ( *v76 != v76 + 2 )
            {
              operator delete(*v76);
              v76 += 4;
              if ( v75 == v76 )
                goto LABEL_161;
            }
            v76 += 4;
          }
          while ( v75 != v76 );
LABEL_161:
          v76 = (void **)v166;
        }
        if ( v76 )
          operator delete(v76);
        v77 = v165;
        v78 = (void **)v164;
        if ( v165 != v164 )
        {
          do
          {
            while ( *v78 != v78 + 2 )
            {
              operator delete(*v78);
              v78 += 4;
              if ( v78 == v77 )
                goto LABEL_167;
            }
            v78 += 4;
          }
          while ( v77 != v78 );
LABEL_167:
          v78 = (void **)v164;
        }
        if ( v78 )
          operator delete(v78);
        v79 = v163;
        v80 = (void **)v162;
        if ( v163 != v162 )
        {
          do
          {
            while ( *v80 != v80 + 2 )
            {
              operator delete(*v80);
              v80 += 4;
              if ( v79 == v80 )
                goto LABEL_173;
            }
            v80 += 4;
          }
          while ( v79 != v80 );
LABEL_173:
          v80 = (void **)v162;
        }
        if ( v80 )
          operator delete(v80);
        return a1;
      case 8:
      case 0xC:
      case 0xE:
        sub_1411750(&v136, &v128, 1);
        if ( !v143 )
          continue;
        v144 = &v146;
        v145 = 0x200000000LL;
        if ( (_DWORD)v137 )
          sub_14078B0((__int64)&v144, (__int64)&v136);
        v156 = 0;
        v19 = *((_QWORD *)&v132 + 1);
        v151 = v139[18];
        v152 = v139[19];
        v20 = v140[0];
        v140[0] = nullptr;
        v153.m128i_i64[0] = (__int64)v20;
        v21 = v140[1];
        v140[1] = nullptr;
        v153.m128i_i64[1] = (__int64)v21;
        v22 = v141;
        v141 = 0;
        v154 = v22;
        v155 = v142 & 3 | v155 & 0xFC;
        if ( *((_QWORD *)&v132 + 1) == v133 )
        {
          sub_14100E0((__int64)&v132, *((char **)&v132 + 1), (__int64)&v144);
          v23 = v156;
        }
        else
        {
          *(_BYTE *)(*((_QWORD *)&v132 + 1) + 136LL) = -1;
          if ( v156 == 0xFF )
          {
            *((_QWORD *)&v132 + 1) += 144LL;
            goto LABEL_20;
          }
          ((void (__fastcall *)(__int64, __int64))funcs_141018C[v156])(v19, (__int64)&v144);
          *((_QWORD *)&v132 + 1) += 144LL;
          *(_BYTE *)(v19 + 136) = v156;
          v23 = v156;
        }
        if ( (_BYTE)v23 != 0xFF )
          ((void (__fastcall *)(__int64))funcs_13F3420[v23])((__int64)&v144);
LABEL_20:
        if ( !v143 )
          continue;
        v24 = (unsigned __int8 *)v140[0];
        if ( v140[1] == v140[0] )
          goto LABEL_26;
        v25 = v12;
        v26 = (unsigned __int8 *)v140[1];
        do
        {
          while ( 1 )
          {
            v27 = v24[136];
            if ( (_BYTE)v27 == 0xFF )
              break;
            v28 = v24;
            v24 += 144;
            ((void (__fastcall *)(unsigned __int8 *))jpt_14100CB[v27])(v28);
            if ( v26 == v24 )
              goto LABEL_25;
          }
          v24 += 144;
        }
        while ( v26 != v24 );
LABEL_25:
        v24 = (unsigned __int8 *)v140[0];
        v12 = v25;
LABEL_26:
        if ( v24 )
          operator delete(v24);
        v29 = &v136[5 * (unsigned int)v137];
        if ( v136 != v29 )
        {
          v30 = v12;
          v31 = v136;
          do
          {
            while ( 1 )
            {
              v29 -= 5;
              if ( *v29 == v29 + 2 )
                break;
              operator delete(*v29);
              if ( v31 == v29 )
                goto LABEL_32;
            }
          }
          while ( v31 != v29 );
LABEL_32:
          v29 = v136;
          v12 = v30;
        }
        if ( v29 != (void **)&v138 )
          goto LABEL_34;
        continue;
      case 0xB:
        sub_1410E00((__int64)&v136, (__int64)&v128, (__m128i)0LL, a8);
        if ( !(_BYTE)v141 )
          continue;
        LODWORD(v144) = (_DWORD)v136;
        v145 = (unsigned __int64)&v147;
        v146 = 0x200000000LL;
        if ( v138 )
          sub_14078B0((__int64)&v145, (__int64)&v137);
        v156 = 1;
        v61 = *((_QWORD *)&v132 + 1);
        a8 = _mm_loadu_si128((const __m128i *)v140);
        v153 = a8;
        if ( *((_QWORD *)&v132 + 1) == v133 )
        {
          sub_14100E0((__int64)&v132, *((char **)&v132 + 1), (__int64)&v144);
          v62 = v156;
        }
        else
        {
          *(_BYTE *)(*((_QWORD *)&v132 + 1) + 136LL) = -1;
          if ( v156 == 0xFF )
          {
            *((_QWORD *)&v132 + 1) += 144LL;
            goto LABEL_103;
          }
          ((void (__fastcall *)(__int64, __int64))funcs_141018C[v156])(v61, (__int64)&v144);
          *((_QWORD *)&v132 + 1) += 144LL;
          *(_BYTE *)(v61 + 136) = v156;
          v62 = v156;
        }
        if ( (_BYTE)v62 != 0xFF )
          ((void (__fastcall *)(__int64))funcs_13F3420[v62])((__int64)&v144);
LABEL_103:
        if ( !(_BYTE)v141 )
          continue;
        v29 = &v137[5 * v138];
        if ( v137 == v29 )
          goto LABEL_109;
        v63 = v12;
        v64 = v137;
        do
        {
          while ( 1 )
          {
            v29 -= 5;
            if ( *v29 == v29 + 2 )
              break;
            operator delete(*v29);
            if ( v64 == v29 )
              goto LABEL_108;
          }
        }
        while ( v64 != v29 );
LABEL_108:
        v29 = v137;
        v12 = v63;
LABEL_109:
        if ( v29 != (void **)v139 )
LABEL_34:
          free(v29);
        continue;
      default:
        continue;
    }
  }
}
