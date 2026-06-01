void __fastcall sub_1A1BB30(
        unsigned int *a1,
        void **a2,
        unsigned __int64 a3,
        __int64 *a4,
        __int64 a5,
        int *a6,
        __m128 a7,
        __m128 a8,
        _QWORD *a9,
        int *a10,
        unsigned __int8 a11)
{
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rbp
  unsigned int v22; // eax
  unsigned int v23; // ecx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r15
  _DWORD *v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // r13
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdi
  __int64 v44; // r13
  __int64 v45; // rsi
  unsigned __int64 v46; // r13
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdi
  unsigned __int64 v51; // rax
  _QWORD *v52; // rax
  void **v53; // rsi
  __int64 v54; // rcx
  unsigned int v55; // r13d
  __int64 v56; // rax
  int v57; // r14d
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rcx
  unsigned int v61; // r15d
  __int64 v62; // rdi
  int v63; // eax
  __int64 *v64; // r15
  unsigned __int32 v65; // ebp
  void **v66; // rsi
  __int64 v67; // rcx
  int v68; // edx
  unsigned __int64 v69; // r13
  int v70; // ebx
  char v71; // bp
  __int64 v72; // rax
  __int64 v73; // rdx
  char *v74; // r14
  __int64 *v75; // rbp
  unsigned int v76; // eax
  __int64 *v77; // rbp
  __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdi
  __int64 *v88; // r12
  _BOOL4 v89; // ebp
  unsigned int v90; // eax
  unsigned int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 *v94; // rbp
  unsigned int v95; // eax
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rax
  _QWORD *v99; // r13
  __int64 v100; // rax
  unsigned int v101; // eax
  char v102; // r9
  char v103; // al
  unsigned __int32 v104; // eax
  unsigned int v105; // eax
  __int64 v106; // rax
  unsigned __int8 v107; // si
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r14
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // r14
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rbx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rax
  _QWORD *v128; // rax
  void **v129; // [rsp-8h] [rbp-140h]
  __m128 v130; // [rsp+0h] [rbp-138h] BYREF
  int *v131; // [rsp+10h] [rbp-128h]
  unsigned __int64 v132; // [rsp+18h] [rbp-120h]
  void **v133; // [rsp+20h] [rbp-118h]
  __int64 v134; // [rsp+28h] [rbp-110h]
  unsigned int v135; // [rsp+34h] [rbp-104h] BYREF
  __int64 v136; // [rsp+38h] [rbp-100h] BYREF
  void *v137; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v138; // [rsp+48h] [rbp-F0h]
  char v139; // [rsp+4Ch] [rbp-ECh]
  int v140; // [rsp+60h] [rbp-D8h]
  void *v141; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int v142; // [rsp+78h] [rbp-C0h]
  char v143; // [rsp+7Ch] [rbp-BCh]
  __int64 v144; // [rsp+80h] [rbp-B8h]
  unsigned __int8 *v145; // [rsp+90h] [rbp-A8h] BYREF
  char v146; // [rsp+E8h] [rbp-50h]
  unsigned int v147; // [rsp+F0h] [rbp-48h]
  char v148; // [rsp+F4h] [rbp-44h]

  v14 = a3;
  v15 = *a4;
  v131 = (int *)a2;
  v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(unsigned __int8 *)(v18 + 16);
  if ( (_BYTE)v19 != 14 )
  {
    if ( (_BYTE)v19 == 13 )
    {
      if ( (((*(_WORD *)(v18 + 18) >> 3) + 76) & 0x1FFu) <= 0x34 )
        goto LABEL_4;
      goto LABEL_8;
    }
    if ( (_BYTE)v19 == 47 )
    {
      v130.m128_i32[0] = a5;
      v24 = sub_F60F10(v18, (__int64)a2, a3, v15, a5, v16);
      if ( (*((_BYTE *)v24 + 74) & 1) != 0 || (v24[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_4;
      a5 = v130.m128_u32[0];
      v17 = *(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL);
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      LOBYTE(v19) = *(_BYTE *)(v18 + 16);
    }
    else if ( (unsigned __int8)v19 <= 0x2Au )
    {
LABEL_3:
      v20 = 0x40600004C00LL;
      if ( _bittest64(&v20, v19) )
      {
LABEL_4:
        sub_1A25380((_DWORD)a1, (_DWORD)v131, v14, *a4, (_DWORD)a6, (_DWORD)a9, (__int64)a10);
        return;
      }
      goto LABEL_39;
    }
    v20 = (unsigned int)(unsigned __int8)v19 - 57;
    if ( (unsigned int)v20 > 1 )
    {
      if ( (_BYTE)v19 == 48 )
      {
        v130.m128_i32[0] = a5;
        v52 = sub_F60F10(v18, (__int64)a2, v20, v15, a5, v16);
        a5 = v130.m128_u32[0];
        v37 = (__int64)v52;
        goto LABEL_41;
      }
LABEL_39:
      if ( (_BYTE)v19 != 29 )
        goto LABEL_98;
      v130.m128_i32[0] = a5;
      v34 = sub_F61460(v18, (__int64)a2, v20, v15, a5, v16);
      a5 = v130.m128_u32[0];
      v37 = (__int64)v34;
LABEL_41:
      v17 = *(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL);
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      LOBYTE(v19) = *(_BYTE *)(v18 + 16);
      if ( v37 )
      {
        if ( (_BYTE)v19 == 48 && (*(_BYTE *)(v37 + 28) & 0x7Fu) - 59 > 2 )
        {
          v46 = 0;
          v130.m128_u64[0] = 0;
        }
        else
        {
          v38 = *(_QWORD *)(v37 + 104);
          LODWORD(v132) = a5;
          v130.m128_u64[0] = v37;
          sub_7052B0((__int64 *)(v38 + 96), v38, v37, v35, a5, v36);
          v41 = v130.m128_u64[0];
          v42 = (unsigned int)v132;
          v43 = *(_QWORD *)(v130.m128_u64[0] + 128);
          if ( (*(_BYTE *)(v43 + 24) & 1) != 0 )
          {
            v93 = sub_B96980(v43);
            v42 = (unsigned int)v132;
            v41 = v130.m128_u64[0];
            v44 = v93;
          }
          else
          {
            v44 = *(_QWORD *)(v43 + 24);
          }
          v45 = *(_QWORD *)(v41 + 104);
          LODWORD(v132) = v42;
          v130.m128_u64[0] = v41;
          sub_7052B0((__int64 *)(v45 + 96), v45, v41, v39, v42, v40);
          a2 = *(void ***)(v130.m128_u64[0] + 104);
          v46 = v44 + 24LL * *(unsigned int *)(*(_QWORD *)(v130.m128_u64[0] + 128) + 16LL);
          sub_7052B0((__int64 *)a2 + 12, (__int64)a2, v130.m128_i64[0], v47, v48, v49);
          v37 = v130.m128_u64[0];
          a5 = (unsigned int)v132;
          v50 = *(_QWORD *)(v130.m128_u64[0] + 128);
          if ( (*(_BYTE *)(v50 + 24) & 1) != 0 )
          {
            LODWORD(v133) = v132;
            v132 = v130.m128_u64[0];
            v92 = sub_B96980(v50);
            v37 = v130.m128_u64[0];
            a5 = (unsigned int)v133;
            v130.m128_u64[0] = v92;
          }
          else
          {
            v130.m128_u64[0] = *(_QWORD *)(v50 + 24);
          }
        }
        LODWORD(v132) = a5;
        v51 = sub_B7E900(v37, (__int64)a2, v37, v35, a5, v36);
        v130.m128_u64[0] = v46;
        v130 = _mm_loadh_ps((const double *)v130.m128_u64);
        sub_1A28520(
          (_DWORD)a1,
          (_DWORD)v131,
          v14,
          *a4,
          v130.m128_i32[0],
          v130.m128_i32[2],
          v51,
          v132,
          (__int64)a6,
          (__int64)a9,
          (__int64)a10,
          a11);
        return;
      }
LABEL_98:
      if ( (unsigned __int8)(v19 - 2) <= 4u )
      {
        v98 = *(_QWORD *)a1;
        v130.m128_i32[0] = a5;
        v99 = *(_QWORD **)(v98 + 248);
        v100 = sub_A63CE0(v99);
        v101 = sub_A97D20((__int64)v99, *(_QWORD *)(v100 & 0xFFFFFFFFFFFFFFF0LL));
        v138 = v101;
        if ( v101 > 0x40 )
        {
          sub_2205470(&v137, 0, 0);
          v139 = 0;
          v102 = v130.m128_i8[0];
          v142 = v138;
          if ( v138 > 0x40 )
          {
            v130.m128_i32[0] = v130.m128_u8[0];
            sub_2205510(&v141);
            v103 = v139;
            v102 = v130.m128_i8[0];
LABEL_102:
            v143 = v103;
            sub_1A1AE40(a1, v131, v14, a4, (__int64)&v141, v102, a7, a8, a6, a9, a10);
            if ( v142 > 0x40 && v141 )
              operator delete[](v141);
            if ( v138 > 0x40 && v137 )
              operator delete[](v137);
            return;
          }
        }
        else
        {
          v137 = nullptr;
          v102 = v130.m128_i8[0];
          v139 = 0;
          v142 = v101;
        }
        v141 = v137;
        v103 = 0;
        goto LABEL_102;
      }
      if ( (_BYTE)v19 != 13 )
      {
        if ( (unsigned int)(unsigned __int8)v19 - 25 > 1 )
        {
          if ( (unsigned int)(unsigned __int8)v19 - 43 <= 1 )
          {
            sub_1A25860((_DWORD)a1, (_DWORD)v131, v14, *a4, (_DWORD)a6, (_DWORD)a9, (__int64)a10);
            return;
          }
          if ( (unsigned int)(unsigned __int8)v19 - 35 <= 1 )
          {
            if ( *((_BYTE *)a1 + 9) )
              goto LABEL_66;
            v21 = (__int64 *)(*(_QWORD *)a1 + 8LL);
            v22 = sub_BFB1C0(v14);
            v23 = 3993;
            goto LABEL_12;
          }
          goto LABEL_89;
        }
        goto LABEL_9;
      }
LABEL_8:
      if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) != 0x1B3 )
      {
LABEL_89:
        if ( sub_1A0B100(v17) || sub_F58260(v17) )
          goto LABEL_4;
        if ( (*(_BYTE *)(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        {
          ++*a6;
          sub_A6A4A0(*((_QWORD *)a1 + 4), *a4);
          return;
        }
        goto LABEL_10;
      }
LABEL_9:
      ++*a6;
LABEL_10:
      if ( *((_BYTE *)a1 + 9) )
      {
LABEL_66:
        *((_BYTE *)a1 + 8) = 1;
        return;
      }
      v21 = (__int64 *)(*(_QWORD *)a1 + 8LL);
      v22 = sub_BFB1C0(v14);
      v23 = 3935;
LABEL_12:
      sub_168B9F0((__int64)&v141, v21, v22, v23, 0);
      sub_1605D30((__int64)&v141, a4);
      sub_15F7200(&v141);
      goto LABEL_66;
    }
    if ( (unsigned int)*(unsigned __int8 *)(v17 + 16) - 57 > 1 )
      v17 = sub_F63050(v17, a2, v20, v15);
    v25 = *(_QWORD *)(v14 + 16);
    v26 = (unsigned int)*a6;
    LODWORD(v132) = *(_DWORD *)(v17 + 20);
    v130.m128_u64[0] = *(_QWORD *)(v17 + 32);
    if ( (unsigned int)v26 >= (unsigned int)((*(_QWORD *)(v14 + 24) - v25) >> 3) )
    {
      v65 = sub_BFB220(v14);
      sub_1A0B470((__int64)&v141, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, (__int64)v131);
      if ( !*((_QWORD *)a1 + 2) )
        sub_1A19410(a1, v65, (__int64)&v141, a7, a8);
      return;
    }
    v27 = *(_QWORD *)a1;
    v28 = *(_QWORD *)(*(_QWORD *)a1 + 232LL);
    if ( (*(_BYTE *)(v28 + 47) & 0x20) == 0 && (*(_BYTE *)(v28 + 89) & 1) == 0 )
    {
      v29 = *(_QWORD *)(v25 + 8 * v26);
      if ( (*(_WORD *)v29 & 0x1FF) == 0x35
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 8)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 57 > 1 )
      {
        v66 = *(void ***)(v27 + 248);
        v133 = &v137;
        sub_1A0B470((__int64)&v137, v66, 0, (__int64)v131);
        if ( (_DWORD)v132 )
        {
          v68 = *a6;
          if ( *a6 < (unsigned int)((__int64)(*(_QWORD *)(v14 + 24) - *(_QWORD *)(v14 + 16)) >> 3) )
          {
            v134 = v17;
            v69 = v14;
            v70 = 0;
            do
            {
              v140 = v68;
              ++v70;
              v66 = v133;
              sub_1A27C60((_DWORD)a1, (_DWORD)v133, v69, v130.m128_i32[0], (_DWORD)a6, (_DWORD)a9, (__int64)a10, 0);
              if ( (_DWORD)v132 == v70 )
              {
                v14 = v69;
                v17 = v134;
                goto LABEL_77;
              }
              v68 = *a6;
            }
            while ( *a6 < (unsigned int)((__int64)(*(_QWORD *)(v69 + 24) - *(_QWORD *)(v69 + 16)) >> 3) );
            v14 = v69;
            v17 = v134;
          }
          v104 = sub_BFB220(v14);
          if ( !*((_QWORD *)a1 + 2) )
          {
            v66 = (void **)v104;
            sub_1A19410(a1, v104, (__int64)v133, a7, a8);
          }
        }
LABEL_77:
        if ( !*((_BYTE *)a1 + 9) )
        {
          v71 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 248LL) + 17448LL) + 272LL);
          v72 = *(_QWORD *)(*((_QWORD *)v131 + 2) & 0xFFFFFFFFFFFFFFF0LL);
          v73 = (unsigned int)*(unsigned __int8 *)(v72 + 16) - 57;
          if ( (unsigned int)v73 > 1 )
            v72 = sub_F63050(v72, v66, v73, v67);
          if ( v71 && ((*(_BYTE *)(v72 + 18) >> 3) & 0xFu) - 4 <= 1 )
          {
            v74 = "f";
            v75 = (__int64 *)(*(_QWORD *)a1 + 8LL);
            v76 = sub_BFB1C0(v14);
            sub_168B9F0((__int64)&v141, v75, v76, 0x1BD3u, 0);
            sub_15F7200(&v141);
            v77 = (__int64 *)(v130.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL);
            v78 = *(_QWORD *)(v130.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL);
            v135 = sub_A97D20(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v78);
            if ( !sub_F58060(*(_QWORD *)(v130.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL)) )
            {
              v74 = (char *)"s";
              if ( !sub_F65140(*v77, v78, v79, v80, v81, v82) )
              {
                v74 = "mf";
                if ( sub_F65360(*v77, v78, v83, v84, v85, v86) )
                  v74 = "u";
              }
            }
            v87 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
            v88 = (__int64 *)(*(_QWORD *)a1 + 8LL);
            v89 = (unsigned __int64)sub_A97D20(v87, v17) > 0x40;
            v90 = sub_BFB1C0(v14);
            sub_168B9F0((__int64)&v141, v88, v90, v89 + 6105, 0);
            if ( v146 )
            {
              sub_AE9DF0(&v145, (__int64)v74, 1u);
            }
            else if ( v148 )
            {
              v124 = sub_168B9E0(&v141);
              v127 = v144;
              if ( v144 )
                v127 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 32LL))(v144);
              v136 = v127;
              v128 = sub_1587BC0(v124, &v136, v122, v123, v125, v126);
              sub_AE9DF0((unsigned __int8 **)(*v128 + 32LL * v147 + 8), (__int64)v74, 1u);
            }
            sub_1588370((__int64)&v141, &v135);
            sub_15F7200(&v141);
          }
        }
        return;
      }
      if ( *((_BYTE *)a1 + 9) )
      {
        if ( !(unsigned __int8)sub_1A19380(*(_QWORD *)a1, (__int64)v131, *(_QWORD *)(v25 + 8 * v26), a7, a8) )
          goto LABEL_27;
        v106 = sub_1A0A760(*(_QWORD *)a1, (__int64)(a1 + 6));
      }
      else
      {
        v105 = sub_EEB7E0(*(_QWORD *)(v25 + 8 * v26), (__int64)a2, *(double *)a7.m128_u64);
        v106 = sub_1A24E20(v27, v131, v105, v29, 1, 0);
      }
      if ( v106 != 1 )
      {
        v30 = (_DWORD *)(v106 & 0xFFFFFFFFFFFFFFFELL);
        if ( v29 != (v106 & 0xFFFFFFFFFFFFFFFELL) && !*((_BYTE *)a1 + 9) )
        {
          *(_QWORD *)(*(_QWORD *)(v14 + 16) + 8LL * (unsigned int)*a6) = v30;
          if ( v30 )
          {
            v107 = ((*v30 >> 14) | (*(_DWORD *)v14 >> 14)) & 0x1F;
            *(_BYTE *)(v14 + 1) = (v107 << 6) | *(_BYTE *)(v14 + 1) & 0x3F;
            *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & 0xF8 | (v107 >> 2);
          }
        }
        goto LABEL_28;
      }
LABEL_27:
      *((_BYTE *)a1 + 8) = 1;
      v30 = nullptr;
LABEL_28:
      if ( a9 )
        sub_1A11640(a1, (__int64)a9, (unsigned int *)a10, v30, *(double *)a7.m128_u64);
      v31 = *((_QWORD *)a1 + 4);
      ++*a6;
      if ( v31 )
        sub_A6A4A0(v31, v130.m128_i64[0]);
      return;
    }
    v53 = *(void ***)(v27 + 248);
    v133 = &v137;
    sub_1A0B470((__int64)&v137, v53, 0, (__int64)v131);
    if ( !(_DWORD)v132 )
      return;
    v54 = *(_QWORD *)(v14 + 16);
    v55 = 0;
    v56 = (unsigned int)*a6;
    if ( (unsigned int)v56 < (unsigned int)((*(_QWORD *)(v14 + 24) - v54) >> 3) )
    {
      v57 = 0;
      do
      {
        v140 = v56;
        v64 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v54 + 8 * v56) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v59 = *v64;
        v60 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v64 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (unsigned int)(v60 - 57) <= 1 )
        {
          v58 = (unsigned int)*(unsigned __int8 *)(v59 + 16) - 57;
          if ( (unsigned int)v58 > 1 )
          {
            v59 = sub_F63050(*v64, v53, v58, v60);
            LOBYTE(v60) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v64 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          }
          v61 = *(_DWORD *)(v59 + 20);
          v62 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
          if ( (_BYTE)v60 == 58 )
            v63 = sub_A76A60(v62, v130.m128_i64[0], v61);
          else
            v63 = sub_A70300(v62, v130.m128_i64[0], v61, (*(_BYTE *)(v59 + 18) >> 3) & 0xF);
          v55 += v61;
          sub_1A27C60((_DWORD)a1, (_DWORD)v133, v14, v63, (_DWORD)a6, (_DWORD)a9, (__int64)a10, 0);
          v53 = v129;
        }
        else
        {
          ++v55;
          v53 = v133;
          sub_1A27C60((_DWORD)a1, (_DWORD)v133, v14, v130.m128_i32[0], (_DWORD)a6, (_DWORD)a9, (__int64)a10, 0);
        }
        if ( (_DWORD)v132 == ++v57 )
          break;
        v54 = *(_QWORD *)(v14 + 16);
        v56 = (unsigned int)*a6;
      }
      while ( (unsigned int)v56 < (unsigned int)((*(_QWORD *)(v14 + 24) - v54) >> 3) );
      if ( (_DWORD)v132 == v55 )
        return;
    }
    if ( *((_BYTE *)a1 + 9) )
      goto LABEL_66;
    v94 = (__int64 *)(*(_QWORD *)a1 + 8LL);
    v95 = sub_BFB1C0(v14);
    sub_168B9F0((__int64)&v141, v94, v95, 0x1542u, 0);
    LOBYTE(v135) = (unsigned int)v132 > v55;
    v96 = sub_1588420((__int64)&v141, (unsigned __int8 *)&v135);
    v97 = v96;
    if ( *(_BYTE *)(v96 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v96 + 32), (unsigned int)v132, 3u);
    }
    else
    {
      if ( !*(_BYTE *)(v96 + 132) )
      {
LABEL_97:
        LODWORD(v136) = 0;
        sub_1587D10(v97, (int *)&v136);
        sub_15F7200(&v141);
        goto LABEL_66;
      }
      v112 = sub_168B9E0((_QWORD *)v96);
      v113 = *(_QWORD *)(v97 + 16);
      if ( v113 )
        v113 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v113 + 32LL))(*(_QWORD *)(v97 + 16));
      v136 = v113;
      v114 = sub_1587BC0(v112, &v136, v108, v109, v110, v111);
      sub_AE9DF0((unsigned __int8 **)(*v114 + 32LL * *(unsigned int *)(v97 + 128) + 8), (unsigned int)v132, 3u);
    }
    if ( *(_BYTE *)(v97 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v97 + 32), v55, 3u);
    }
    else if ( *(_BYTE *)(v97 + 132) )
    {
      v119 = sub_168B9E0((_QWORD *)v97);
      v120 = *(_QWORD *)(v97 + 16);
      if ( v120 )
        v120 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v120 + 32LL))(*(_QWORD *)(v97 + 16));
      v136 = v120;
      v121 = sub_1587BC0(v119, &v136, v115, v116, v117, v118);
      sub_AE9DF0((unsigned __int8 **)(*v121 + 32LL * *(unsigned int *)(v97 + 128) + 8), v55, 3u);
    }
    goto LABEL_97;
  }
  if ( !(_BYTE)a5 )
    goto LABEL_3;
  if ( (unsigned int)((__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 16)) >> 3) <= 1 )
  {
    sub_1A25380((_DWORD)a1, (_DWORD)v131, a3, v15, (_DWORD)a6, (_DWORD)a9, (__int64)a10);
  }
  else
  {
    v32 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 8) == 0 && !*((_BYTE *)a1 + 9) )
    {
      v130.m128_u64[0] = v15 & 0xFFFFFFFFFFFFFFF0LL;
      v91 = sub_BFB1C0(a3);
      sub_168B9F0((__int64)&v141, (__int64 *)(v32 + 8), v91, 0x158Eu, 0);
      a2 = &v137;
      v137 = (void *)sub_EEC8C0(v14, v32 + 8, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&v141, (__int64 *)&v137);
      sub_15F7200(&v141);
      v17 = *(_QWORD *)v130.m128_u64[0];
    }
    if ( *(_BYTE *)(v17 + 16) != 14 )
      v17 = sub_F63050(v17, a2, a3, v15);
    v33 = *(_QWORD *)(v17 + 32);
    sub_1A0B470((__int64)&v141, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, (__int64)v131);
    LODWORD(v145) = *a6;
    sub_1A27C60((_DWORD)a1, (unsigned int)&v141, v14, v33, (_DWORD)a6, (_DWORD)a9, (__int64)a10, 0);
    LODWORD(v145) = *a6;
    sub_1A27C60((_DWORD)a1, (unsigned int)&v141, v14, v33, (_DWORD)a6, (_DWORD)a9, (__int64)a10, 0);
  }
}
