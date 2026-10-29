__int64 __fastcall sub_14FFE40(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        int a4,
        unsigned __int8 a5,
        __m128i a6,
        __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  bool v12; // zf
  char v13; // bp
  __int64 v14; // r13
  __int16 v15; // ax
  char v16; // bp
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int8 **v19; // rbx
  void **v20; // r12
  _BYTE *v21; // rbx
  _BYTE *v22; // rbp
  _BYTE *v23; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  _BOOL8 v27; // rdx
  size_t v28; // rax
  __int16 v29; // ax
  char v30; // r15
  unsigned __int16 v31; // r15
  char v32; // al
  void *v33; // rax
  int v34; // eax
  __int64 *v35; // rdi
  __int64 v36; // rdx
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  void **v39; // rsi
  __int64 v40; // rdi
  void *v41; // rax
  int v42; // r10d
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  int v47; // r13d
  unsigned int v48; // r15d
  __int64 v49; // r15
  __int64 v50; // rax
  _BOOL8 v51; // rdx
  char v52; // r13
  __int64 *v53; // rdi
  unsigned __int8 *v54; // r13
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  __int64 v58; // rdx
  unsigned __int8 **v59; // rcx
  __int64 v60; // rax
  unsigned __int8 *v61; // rdx
  unsigned __int8 *v62; // rdx
  void *v63; // r13
  __int64 v64; // rcx
  __int64 v65; // r15
  void **v66; // rbp
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  __int16 v70; // ax
  char v71; // bp
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbp
  void **v75; // rbx
  void **v76; // rdi
  __int64 v77; // r13
  unsigned int v78; // eax
  __int64 *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  void *v84; // rax
  __int64 v85; // [rsp+8h] [rbp-1520h]
  void *v86; // [rsp+10h] [rbp-1518h]
  int v87; // [rsp+10h] [rbp-1518h]
  __int64 v88; // [rsp+30h] [rbp-14F8h]
  int v93; // [rsp+74h] [rbp-14B4h] BYREF
  __int64 v94; // [rsp+78h] [rbp-14B0h] BYREF
  __int64 v95[4]; // [rsp+80h] [rbp-14A8h] BYREF
  int v96; // [rsp+A0h] [rbp-1488h] BYREF
  __int64 v97; // [rsp+A8h] [rbp-1480h]
  __int64 v98; // [rsp+B0h] [rbp-1478h]
  __int64 v99; // [rsp+C0h] [rbp-1468h] BYREF
  void *v100; // [rsp+C8h] [rbp-1460h]
  __int64 v101; // [rsp+D0h] [rbp-1458h]
  _BYTE v102[24]; // [rsp+D8h] [rbp-1450h] BYREF
  void *v103; // [rsp+F0h] [rbp-1438h] BYREF
  __int64 v104; // [rsp+F8h] [rbp-1430h]
  _BYTE v105[48]; // [rsp+100h] [rbp-1428h] BYREF
  unsigned __int8 *v106; // [rsp+130h] [rbp-13F8h] BYREF
  int v107; // [rsp+138h] [rbp-13F0h]
  __int64 v108; // [rsp+140h] [rbp-13E8h]
  void *v109; // [rsp+148h] [rbp-13E0h]
  __int64 v110; // [rsp+180h] [rbp-13A8h] BYREF
  void *v111; // [rsp+188h] [rbp-13A0h]
  __int64 v112; // [rsp+190h] [rbp-1398h]
  _BYTE v113[16]; // [rsp+198h] [rbp-1390h] BYREF
  __int64 v114; // [rsp+1A8h] [rbp-1380h] BYREF
  void *ptr; // [rsp+1B0h] [rbp-1378h]
  __int64 v116; // [rsp+1B8h] [rbp-1370h]
  _BYTE v117[16]; // [rsp+1C0h] [rbp-1368h] BYREF
  void *v118; // [rsp+1D0h] [rbp-1358h] BYREF
  __int64 v119; // [rsp+1D8h] [rbp-1350h]
  _BYTE v120[96]; // [rsp+1E0h] [rbp-1348h] BYREF
  unsigned __int8 **v121; // [rsp+240h] [rbp-12E8h] BYREF
  __int64 v122; // [rsp+248h] [rbp-12E0h]
  _BYTE v123[256]; // [rsp+250h] [rbp-12D8h] BYREF
  __int64 v124; // [rsp+350h] [rbp-11D8h] BYREF
  void *v125[2]; // [rsp+358h] [rbp-11D0h] BYREF
  _BYTE v126[16]; // [rsp+368h] [rbp-11C0h] BYREF
  void *v127; // [rsp+378h] [rbp-11B0h] BYREF
  void *v128; // [rsp+380h] [rbp-11A8h]
  __int64 v129; // [rsp+388h] [rbp-11A0h] BYREF
  __int64 v130; // [rsp+390h] [rbp-1198h] BYREF
  __int64 v131; // [rsp+398h] [rbp-1190h] BYREF
  void *v132; // [rsp+3A0h] [rbp-1188h]
  __int64 v133; // [rsp+3B0h] [rbp-1178h] BYREF
  void *v134; // [rsp+3D0h] [rbp-1158h]
  int v135; // [rsp+3DCh] [rbp-114Ch]
  __int64 v136; // [rsp+3F0h] [rbp-1138h]
  __int64 v137; // [rsp+480h] [rbp-10A8h]
  __int64 v138; // [rsp+488h] [rbp-10A0h] BYREF
  _BYTE *v139; // [rsp+490h] [rbp-1098h]
  __int64 v140; // [rsp+498h] [rbp-1090h]
  _BYTE v141[320]; // [rsp+4A0h] [rbp-1088h] BYREF
  __int64 v142; // [rsp+5E0h] [rbp-F48h]
  char v143; // [rsp+5E8h] [rbp-F40h]
  void **v144; // [rsp+5F0h] [rbp-F38h] BYREF
  __int64 v145; // [rsp+5F8h] [rbp-F30h]
  _BYTE v146[1152]; // [rsp+600h] [rbp-F28h] BYREF
  void *v147; // [rsp+A80h] [rbp-AA8h] BYREF
  __int64 v148; // [rsp+A88h] [rbp-AA0h]
  __int128 v149; // [rsp+A90h] [rbp-A98h] BYREF
  __int64 v150; // [rsp+AA0h] [rbp-A88h]
  __int64 v151; // [rsp+AA8h] [rbp-A80h]
  __int64 v152; // [rsp+AB0h] [rbp-A78h]
  __int64 v153; // [rsp+AB8h] [rbp-A70h]
  void *v154[2]; // [rsp+AC0h] [rbp-A68h] BYREF
  _QWORD v155[2]; // [rsp+AD0h] [rbp-A58h] BYREF
  int v156; // [rsp+AE0h] [rbp-A48h]
  __int64 v157; // [rsp+AE8h] [rbp-A40h]
  __int64 v158; // [rsp+AF0h] [rbp-A38h]
  int v159; // [rsp+AF8h] [rbp-A30h]
  __int64 *v160; // [rsp+B00h] [rbp-A28h]
  __int64 v161; // [rsp+B08h] [rbp-A20h]
  __int64 v162; // [rsp+B10h] [rbp-A18h] BYREF
  __int16 v163; // [rsp+D50h] [rbp-7D8h]
  __int64 v164; // [rsp+D58h] [rbp-7D0h]
  _QWORD *v165; // [rsp+D60h] [rbp-7C8h]
  __int64 v166; // [rsp+D68h] [rbp-7C0h]
  _QWORD v167[5]; // [rsp+D70h] [rbp-7B8h] BYREF
  _QWORD v168[242]; // [rsp+D98h] [rbp-790h] BYREF

  v8 = *(_QWORD *)(a1 + 96);
  v139 = v141;
  v137 = v8;
  v140 = 0x400000000LL;
  v9 = *(_QWORD *)(v8 + 512);
  *(_QWORD *)(v8 + 512) = &v138;
  v10 = *(_WORD *)(a1 + 32);
  v138 = 0;
  v142 = v9;
  v143 = 0;
  if ( v10 != 3 )
  {
    v88 = 0;
    memset(&v95[1], 0, 24);
    v95[0] = v95[0] & 0xFE000000;
    if ( v10 == 22 )
    {
      v88 = sub_14FF310(a1, v95, 2, 0, a6, a7);
      v10 = *(_WORD *)(a1 + 32);
    }
    v110 = 0;
    v111 = v113;
    v116 = 0x200000000LL;
    v112 = 0x200000000LL;
    v11 = *(_QWORD *)(a1 + 8);
    v114 = a1 + 504;
    v86 = (void *)(a1 + 504);
    v12 = (*(_BYTE *)(*(_QWORD *)(v11 + 56) + 2LL) & 4) == 0;
    ptr = v117;
    v13 = !v12 + 4;
    if ( v10 == 320 || v10 == 189 || (unsigned __int16)(v10 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_1485110(a1, v13, (__int64)&v110, 0);
    if ( *(_WORD *)(a1 + 32) == 3 )
    {
      v25 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v25 + 760) )
      {
        *(_BYTE *)(v25 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v25 + 48) + 6LL) = 1;
      }
      v26 = *(_QWORD *)(a1 + 96);
      *(_WORD *)(a1 + 32) = 1;
      v27 = a3 == 36;
      v14 = 0;
      BYTE1(v27) = 1;
      sub_1730EB0(*(_QWORD *)(v26 + 656), *(_QWORD *)(v26 + 608), v27, v88);
      goto LABEL_27;
    }
    v93 = 0;
    v14 = sub_14FCFD0(a1, &v93);
    if ( v14 )
    {
      v121 = (unsigned __int8 **)v123;
      v122 = 0x800000000LL;
      v15 = *(_WORD *)(a1 + 32);
      if ( v15 != 62 )
      {
        v16 = ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 2LL) & 4) != 0) + 4;
        if ( v15 == 189 || v15 == 320 || (unsigned __int16)(v15 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
          sub_1485110(a1, v16, (__int64)&v110, 0);
        v17 = sub_18AE520(
                *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                a2,
                *(_DWORD *)(a1 + 16),
                a3,
                (unsigned int)v95,
                v88,
                (__int64)&v93,
                1,
                v14 & 0xFFFFFFFFFFFFFFF8LL | 1,
                0,
                (__int64)v121,
                v122,
                (__int64)&v110,
                a4,
                0,
                a5);
        v14 = v17;
        if ( !v143 )
        {
          sub_1818070(v137, v142, v17);
          v143 = 1;
        }
LABEL_18:
        v18 = (__int64)v121;
        v19 = &v121[4 * (unsigned int)v122];
        if ( v121 != v19 )
        {
          do
          {
            v19 -= 4;
            v20 = (void **)v19[3];
            if ( v20 )
            {
              if ( *v20 != v20 + 2 )
                free(*v20);
              operator delete(v20, 0x70u);
            }
          }
          while ( (unsigned __int8 **)v18 != v19 );
          v19 = v121;
        }
        if ( v19 != (unsigned __int8 **)v123 )
          free(v19);
        goto LABEL_27;
      }
    }
    else
    {
      if ( *(_WORD *)(a1 + 32) != 62 )
      {
        sub_1564840(&v147, a1, a1 + 16, 1639);
        v78 = *(_DWORD *)(a1 + 16);
        LOBYTE(v145) = 1;
        v144 = (void **)__PAIR64__(v78, a2);
        sub_AEC610((__int64 *)&v147, (__int64 *)&v144);
        sub_AEA040((__int64)&v147);
        LOWORD(v147) = 73;
        sub_15680D0(a1, &v147, 1, 3);
LABEL_27:
        sub_15DCED0(v114, &v114);
        if ( ptr != v117 )
          free(ptr);
        if ( v111 != v113 )
          free(v111);
        goto LABEL_31;
      }
      v121 = (unsigned __int8 **)v123;
      v122 = 0x800000000LL;
    }
    v103 = v105;
    v118 = v120;
    v144 = (void **)v146;
    v119 = 0xC00000000LL;
    v104 = 0xC00000000LL;
    v145 = 0xC00000000LL;
    sub_146B5E0(&v94, a1, 0x308u, 1, 0);
    v101 = 0x200000000LL;
    v99 = a1 + 504;
    v100 = v102;
    while ( 1 )
    {
      v124 = 0;
      v125[1] = (void *)0x200000000LL;
      v125[0] = v126;
      v129 = 0x200000000LL;
      v127 = v86;
      v128 = &v130;
      *((_QWORD *)&v149 + 1) = DWORD2(v149) & 0xFE000000;
      LODWORD(v148) = 0;
      *(_QWORD *)&v149 = 0;
      v150 = 0;
      v151 = 0;
      v152 = 0;
      v153 = 0;
      v154[0] = v155;
      v154[1] = (void *)0x200000000LL;
      v28 = j__strlen(&byte_22F0C30);
      if ( (unsigned __int8)sub_1569A00(a1, 62, 14, &byte_22F0C30, v28) )
        break;
      *(_QWORD *)&v149 = 0;
      v29 = *(_WORD *)(a1 + 32);
      if ( v29 == 22 )
      {
        *(_QWORD *)&v149 = sub_14FF310(a1, (__int64 *)&v149 + 1, 3, (__int64)&v124, a6, a7);
        v29 = *(_WORD *)(a1 + 32);
      }
      v30 = ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 2LL) & 4) != 0) + 4;
      if ( v29 == 320 || v29 == 189 || (unsigned __int16)(v29 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
        sub_1485110(a1, v30, (__int64)&v124, 0);
      v153 = v124;
      sub_14FA610(v154, (char **)v125);
      if ( *(_WORD *)(a1 + 32) == 3 )
      {
        v80 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v80 + 760) )
        {
          *(_BYTE *)(v80 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v80 + 48) + 6LL) = 1;
        }
        *(_WORD *)(a1 + 32) = 1;
        sub_14FA200((__int64)&v118, v14);
        sub_171F690(
          *(_QWORD *)(*(_QWORD *)(a1 + 96) + 656LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
          a3 == 36,
          1,
          v88,
          a3 == 36,
          (__int64)v118,
          (unsigned int)v119);
        goto LABEL_154;
      }
      if ( (unsigned __int8)sub_15648A0(a1) )
        break;
      v31 = *(_WORD *)(a1 + 32);
      v32 = sub_141A630(v31);
      if ( v31 == 1 || v32 )
        v33 = nullptr;
      else
        v33 = *(void **)(a1 + 24);
      v147 = v33;
      v34 = *(_DWORD *)(a1 + 16);
      v35 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v34;
      LODWORD(v148) = v34;
      sub_14634E0(v35, (int *)(a1 + 16));
      v36 = (unsigned int)v145;
      v37 = (unsigned int)v145 + 1LL;
      if ( v37 > HIDWORD(v145) )
      {
        v49 = (__int64)v144;
        if ( v144 > &v147 || &v147 >= &v144[12 * (unsigned int)v145] )
        {
          sub_14FFC20((__int64)&v144, v37);
          v38 = (__int64)v144;
          v36 = (unsigned int)v145;
          v39 = &v147;
        }
        else
        {
          sub_14FFC20((__int64)&v144, v37);
          v38 = (__int64)v144;
          v36 = (unsigned int)v145;
          v39 = (void **)((char *)&v147 + (_QWORD)v144 - v49);
        }
      }
      else
      {
        v38 = (__int64)v144;
        v39 = &v147;
      }
      v40 = v38 + 96 * v36;
      *(_QWORD *)v40 = *v39;
      *(_DWORD *)(v40 + 8) = *((_DWORD *)v39 + 2);
      *(_QWORD *)(v40 + 16) = v39[2];
      a7 = (__m128)_mm_loadu_si128((const __m128i *)(v39 + 3));
      *(__m128 *)(v40 + 24) = a7;
      *(__m128i *)(v40 + 40) = _mm_loadu_si128((const __m128i *)(v39 + 5));
      v41 = v39[7];
      *(_QWORD *)(v40 + 72) = 0x200000000LL;
      *(_QWORD *)(v40 + 56) = v41;
      v42 = *((_DWORD *)v39 + 18);
      *(_QWORD *)(v40 + 64) = v40 + 80;
      if ( v42 )
        sub_14FA610((void **)(v40 + 64), (char **)v39 + 8);
      v43 = (unsigned int)v119;
      LODWORD(v145) = v145 + 1;
      v44 = (unsigned int)v119 + 1LL;
      if ( v44 > HIDWORD(v119) )
      {
        sub_2237220(&v118, v120, v44, 8);
        v43 = (unsigned int)v119;
      }
      *((_QWORD *)v118 + v43) = v14;
      v45 = (unsigned int)v104;
      LODWORD(v119) = v119 + 1;
      v46 = (unsigned int)v104 + 1LL;
      v47 = v93;
      if ( v46 > HIDWORD(v104) )
      {
        sub_2237220(&v103, v105, v46, 4);
        v45 = (unsigned int)v104;
      }
      *((_DWORD *)v103 + v45) = v47;
      LODWORD(v104) = v104 + 1;
      sub_15D8C50(&v99, &v127);
      v12 = *(_WORD *)(a1 + 32) == 3;
      LODWORD(v129) = 0;
      if ( v12 )
      {
        v81 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v81 + 760) )
        {
          *(_BYTE *)(v81 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v81 + 48) + 6LL) = 1;
        }
        v82 = *(_QWORD *)(a1 + 96);
        v83 = (unsigned int)v119;
        v84 = v118;
        *(_WORD *)(a1 + 32) = 1;
        sub_171F690(*(_QWORD *)(v82 + 656), *(_QWORD *)(v82 + 608), a3 == 36, 0, v88, a3 == 36, (__int64)v84, v83);
LABEL_154:
        if ( v154[0] != v155 )
          free(v154[0]);
        v14 = 0;
        sub_147A450(&v124);
        goto LABEL_127;
      }
      v14 = sub_14FCFD0(a1, &v93);
      if ( !v14 )
      {
        if ( *(_WORD *)(a1 + 32) != 62 )
          break;
        v48 = *(_DWORD *)(a1 + 16);
        if ( v48 == (unsigned int)sub_13DC060(
                                    v148,
                                    0,
                                    *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
                                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                                    a6,
                                    *(double *)a7.m128_u64) )
        {
          sub_1564820(&v106, a1, (unsigned int)v148, 2154);
          sub_AE9DF0(&v106, (__int64)v147, 5u);
          sub_AEA040((__int64)&v106);
          sub_1564820(&v106, a1, (unsigned int)v148, 2039);
          sub_AE9DF0(&v106, (__int64)v147, 5u);
          sub_AEA040((__int64)&v106);
          sub_1564820(&v106, a1, v48, 2032);
          sub_AE9DF0(&v106, (__int64)v147, 5u);
          sub_AEA040((__int64)&v106);
        }
      }
      if ( v154[0] != v155 )
        free(v154[0]);
      sub_15DCED0(v127, &v127);
      if ( v128 != &v130 )
        free(v128);
      if ( v125[0] != v126 )
        free(v125[0]);
    }
    if ( v154[0] != v155 )
      free(v154[0]);
    v52 = 0;
    sub_147A450(&v124);
    if ( *(_WORD *)(a1 + 32) == 66 )
    {
      while ( 1 )
      {
        v53 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v53, (int *)(a1 + 16));
        if ( *(_WORD *)(a1 + 32) == 27 )
          break;
        if ( !v52 )
        {
          sub_1564840(&v147, a1, a1 + 16, 2077);
          sub_AEA040((__int64)&v147);
        }
        sub_147A4A0((__int64)&v124, (__int64)v86);
        v96 = 0;
        v97 = 0;
        v98 = 0;
        sub_1487580(a1, (__int64)&v124, (__int64)&v96, 3u, 0, 0, a6, a7, 0);
        if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
        {
          qword_2CD8AE0[0] = 0;
          qword_2CD8AE0[1] = &qword_2CD8AE0[3];
          qword_2CD8AE0[2] = 0x200000000LL;
          __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
          __cxa_guard_release(&qword_2CD8AC8);
        }
        a6 = 0;
        v149 = 0;
        v155[1] = v136;
        v160 = &v162;
        v161 = 0x400000000LL;
        v168[2] = qword_2CD8AE0;
        v147 = &v124;
        v148 = 0;
        v150 = 0;
        v54 = nullptr;
        v151 = 0;
        v152 = 0;
        LODWORD(v153) = 0;
        LOBYTE(v163) = ((((unsigned int)v124 >> 12) & 0x7F) == 69) | v163 & 0xFE;
        v165 = v167;
        v154[0] = nullptr;
        v167[2] = v131;
        v167[3] = v168;
        v155[0] = 0;
        v156 = 1;
        v157 = 0;
        v158 = 0;
        v159 = 0;
        v163 &= 0xFC01u;
        v164 = 0;
        v166 = 0x200000000LL;
        v167[4] = 0x200000000LL;
        memset(&v168[3], 0, 40);
        v168[232] = 0;
        sub_147E3E0(a1, (__int64)&v147);
        if ( !(_DWORD)v153 )
          v54 = (unsigned __int8 *)v154[0];
        v55 = sub_17D1A30(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), &v147, 0);
        v106 = v54;
        v108 = v55;
        v56 = (unsigned int)v122;
        v107 = v155[0];
        v109 = nullptr;
        v57 = (unsigned int)v122 + 1LL;
        if ( v57 > HIDWORD(v122) )
        {
          v77 = (__int64)v121;
          if ( v121 > &v106 || &v106 >= &v121[4 * (unsigned int)v122] )
          {
            sub_149ACE0((__int64)&v121, v57);
            v58 = (__int64)v121;
            v59 = &v106;
            v56 = (unsigned int)v122;
          }
          else
          {
            sub_149ACE0((__int64)&v121, v57);
            v58 = (__int64)v121;
            v56 = (unsigned int)v122;
            v59 = (unsigned __int8 **)((char *)&v106 + (_QWORD)v121 - v77);
          }
        }
        else
        {
          v58 = (__int64)v121;
          v59 = &v106;
        }
        v60 = v58 + 32 * v56;
        *(_QWORD *)v60 = *v59;
        *(_DWORD *)(v60 + 8) = *((_DWORD *)v59 + 2);
        v61 = v59[2];
        LODWORD(v122) = v122 + 1;
        *(_QWORD *)(v60 + 16) = v61;
        v62 = v59[3];
        v59[3] = nullptr;
        *(_QWORD *)(v60 + 24) = v62;
        v63 = v109;
        if ( v109 )
        {
          if ( *(void **)v109 != (char *)v109 + 16 )
            free(*(void **)v109);
          operator delete(v63, 0x70u);
        }
        sub_147A7A0((char *)&v147);
        if ( v135 )
          free(v134);
        sub_15DCED0(v131, &v131);
        if ( v132 != &v133 )
          free(v132);
        if ( v127 == &v129 )
        {
          if ( *(_WORD *)(a1 + 32) != 66 )
            goto LABEL_113;
        }
        else
        {
          free(v127);
          if ( *(_WORD *)(a1 + 32) != 66 )
            goto LABEL_113;
        }
        v52 = 1;
      }
      v79 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v79, (int *)(a1 + 16));
      v87 = 1;
    }
    else
    {
LABEL_113:
      v87 = 0;
    }
    v64 = 0;
    v147 = &v149;
    v148 = 0xC00000000LL;
    v65 = (__int64)v144;
    v66 = &v144[12 * (unsigned int)v145];
    if ( v144 != v66 )
    {
      do
      {
        v67 = sub_189B300(
                *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                v65,
                v64,
                a5);
        v68 = (unsigned int)v148;
        v69 = (unsigned int)v148 + 1LL;
        if ( v69 > HIDWORD(v148) )
        {
          v85 = v67;
          sub_2237220(&v147, &v149, v69, 8);
          v68 = (unsigned int)v148;
          v67 = v85;
        }
        *((_QWORD *)v147 + v68) = v67;
        v65 += 96;
        v64 = (unsigned int)(v148 + 1);
        LODWORD(v148) = v148 + 1;
      }
      while ( v66 != (void **)v65 );
    }
    v70 = *(_WORD *)(a1 + 32);
    v71 = ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 2LL) & 4) != 0) + 4;
    if ( v70 == 189 || v70 == 320 || (unsigned __int16)(v70 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_1485110(a1, v71, (__int64)&v110, 0);
    v14 = 0;
    if ( (_DWORD)v119 )
    {
      v72 = sub_FE3230((_QWORD *)(*(_QWORD *)(a1 + 8) + 680LL), v119, (unsigned __int64 *)v118);
      v73 = sub_18AE520(
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
              a2,
              *(_DWORD *)(a1 + 16),
              a3,
              (unsigned int)v95,
              v88,
              (__int64)v103,
              (unsigned int)v104,
              v72,
              (__int64)v147,
              (__int64)v121,
              v122,
              (__int64)&v110,
              a4,
              v87,
              a5);
      v14 = v73;
      if ( !v143 )
      {
        sub_1818070(v137, v142, v73);
        v143 = 1;
      }
    }
    if ( v147 != &v149 )
      free(v147);
LABEL_127:
    sub_15DCED0(v99, &v99);
    if ( v100 != v102 )
      free(v100);
    if ( v94 )
      sub_1564F70(v94);
    v74 = (__int64)v144;
    v75 = &v144[12 * (unsigned int)v145];
    if ( v144 != v75 )
    {
      do
      {
        while ( 1 )
        {
          v75 -= 12;
          v76 = (void **)v75[8];
          if ( v76 == v75 + 10 )
            break;
          free(v76);
          if ( (void **)v74 == v75 )
            goto LABEL_134;
        }
      }
      while ( (void **)v74 != v75 );
LABEL_134:
      v75 = v144;
    }
    if ( v75 != (void **)v146 )
      free(v75);
    if ( v103 != v105 )
      free(v103);
    if ( v118 != v120 )
      free(v118);
    goto LABEL_18;
  }
  v50 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v50 + 760) )
  {
    *(_BYTE *)(v50 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v50 + 48) + 6LL) = 1;
  }
  *(_WORD *)(a1 + 32) = 1;
  v51 = a3 == 36;
  BYTE1(v51) = 1;
  v14 = 0;
  sub_1730EB0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 656LL), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v51, 0);
LABEL_31:
  if ( !v143 )
  {
    sub_1818070(v137, v142, 0);
    v143 = 1;
  }
  v21 = v139;
  v22 = &v139[80 * (unsigned int)v140];
  if ( v139 != v22 )
  {
    do
    {
      v23 = v21;
      v21 += 80;
      sub_15B6850(v23);
    }
    while ( v22 != v21 );
    v22 = v139;
  }
  if ( v22 != v141 )
    free(v22);
  return v14;
}
