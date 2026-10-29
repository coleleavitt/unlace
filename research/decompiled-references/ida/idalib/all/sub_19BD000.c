__int64 __fastcall sub_19BD000(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  _QWORD *v8; // r8
  __int64 v9; // r14
  char v11; // bp
  char v12; // bl
  unsigned __int64 v13; // rax
  bool v15; // r13
  _QWORD *v16; // rsi
  _WORD *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r15
  __int16 v20; // dx
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  unsigned __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  char v44; // al
  __int64 v45; // rax
  __int64 *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  _BOOL4 v49; // eax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rsi
  bool v62; // al
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rax
  unsigned int v71; // eax
  __int64 v72; // rax
  unsigned int v73; // edx
  __int64 v74; // rbp
  char v75; // dl
  __int64 *v76; // rsi
  int v77; // ecx
  int v78; // eax
  __int64 v79; // rsi
  unsigned __int64 v80; // rdx
  __int64 v81; // rcx
  _BOOL4 v82; // eax
  int v83; // r9d
  unsigned __int8 v84; // cl
  int v85; // edx
  int v86; // r8d
  int v87; // ecx
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  unsigned int v92; // eax
  __int64 v93; // r15
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // [rsp-8h] [rbp-180h]
  char v98; // [rsp+8h] [rbp-170h]
  __int64 v99; // [rsp+8h] [rbp-170h]
  __int64 v100; // [rsp+8h] [rbp-170h]
  size_t v101; // [rsp+8h] [rbp-170h]
  unsigned int v102; // [rsp+10h] [rbp-168h]
  unsigned __int64 v103; // [rsp+10h] [rbp-168h]
  bool v104; // [rsp+10h] [rbp-168h]
  __int64 v105; // [rsp+10h] [rbp-168h]
  __int64 v106; // [rsp+18h] [rbp-160h]
  _QWORD *v107; // [rsp+18h] [rbp-160h]
  __int64 v108; // [rsp+18h] [rbp-160h]
  char v109; // [rsp+20h] [rbp-158h]
  __int64 v110; // [rsp+20h] [rbp-158h]
  bool v111; // [rsp+20h] [rbp-158h]
  bool v112; // [rsp+20h] [rbp-158h]
  bool v113; // [rsp+20h] [rbp-158h]
  __int64 v114; // [rsp+28h] [rbp-150h]
  __int64 v115; // [rsp+30h] [rbp-148h]
  bool v116; // [rsp+38h] [rbp-140h]
  unsigned int v117; // [rsp+3Ch] [rbp-13Ch] BYREF
  __int64 v118; // [rsp+40h] [rbp-138h] BYREF
  __int64 v119; // [rsp+48h] [rbp-130h] BYREF
  __int64 v120; // [rsp+50h] [rbp-128h] BYREF
  __int64 v121; // [rsp+58h] [rbp-120h] BYREF
  __int64 (__fastcall **v122)(); // [rsp+60h] [rbp-118h] BYREF
  __int16 v123; // [rsp+68h] [rbp-110h]
  __int64 v124; // [rsp+70h] [rbp-108h] BYREF
  __int64 v125[2]; // [rsp+78h] [rbp-100h]
  void *v126; // [rsp+88h] [rbp-F0h]
  __int64 v127; // [rsp+98h] [rbp-E0h] BYREF
  __int64 (__fastcall **v128)(); // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v129; // [rsp+B8h] [rbp-C0h]
  __int64 *v130; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v131; // [rsp+D0h] [rbp-A8h] BYREF
  int v132; // [rsp+D8h] [rbp-A0h]
  char v133; // [rsp+128h] [rbp-50h]
  char v134; // [rsp+134h] [rbp-44h]

  v8 = (_QWORD *)(a5 & 0xFFFFFFFFFFFFFFFELL);
  v9 = (__int64)v8;
  v11 = a3;
  v12 = a4;
  v117 = a2;
  v118 = 0;
  if ( (*(_DWORD *)v8 & 0x10000) != 0 )
  {
    v98 = a4;
    v15 = 0;
    goto LABEL_5;
  }
  v13 = sub_19146F0((__int64)a1, v8, a3, a4, (__int64)v8, a6, a7, a8);
  if ( v13 == 1 )
    return 1;
  v26 = v13 & 0xFFFFFFFFFFFFFFFELL;
  v27 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v123 = 256;
  v119 = v27;
  v122 = off_2BC7030;
  v28 = sub_1BF9B70(a1, v117, v26, &v122);
  v31 = v28;
  if ( v28 == 1 )
    return 1;
  v9 = v28 & 0xFFFFFFFFFFFFFFFELL;
  v119 = *(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v32 = *(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v32 + 16) != 42 )
  {
    v32 = sub_199F9E0(*(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL), v117, v29, v30);
    if ( !v32 )
      return 1;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 32) & 0xFFFFFFFFFFFFFFF0LL)
                                                          + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 25) <= 1u )
    return 1;
  v33 = *(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v33 + 16) != 42 )
    v33 = sub_F63050(*(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL), v117, v29, v30);
  v35 = a1[31];
  v120 = *(_QWORD *)(v33 + 32);
  v34 = v120;
  v103 = sub_A71450(v35, v120);
  v36 = v120 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_QWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
    && (*(_DWORD *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
      | *(_DWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL] & 7u) >> 9
    && (*(_BYTE *)(a1[29] + 52LL) & 1) == 0 )
  {
    v71 = sub_EEB7E0(v9, v120, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)&v128, a1 + 1, v71, 0xB92u, 0);
    v124 = sub_6D5440(&v120);
    v72 = sub_162B6D0((__int64)&v128, &v124);
    if ( (*(_QWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
    {
      v73 = (*(_DWORD *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
           | *(_DWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL] & 7u) >> 9;
      if ( v73 )
        v73 -= 25;
    }
    else
    {
      v73 = 0;
    }
    LODWORD(v121) = v73;
    sub_16CF160(v72, (unsigned int *)&v121);
    sub_15F7200(&v128);
    return 1;
  }
  v37 = *(_QWORD *)v36;
  v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v39 = *(unsigned __int8 *)(v38 + 16);
  if ( (_BYTE)v39 == 13 )
  {
    if ( ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) != 0x1B3 )
      goto LABEL_16;
    sub_1DBADC0(a1);
    if ( !v75 )
    {
      sub_168B9F0((__int64)&v128, a1 + 1, v117, (*(_BYTE *)(a1[29] + 2LL) & 2) == 0 ? 5528 : 3658, 0);
      v76 = &v120;
      if ( (*(_BYTE *)(a1[29] + 2LL) & 2) == 0 )
        v76 = &v119;
      v99 = sub_1605D30((__int64)&v128, v76);
      v124 = sub_EEC8C0(v9, (__int64)v76, *(double *)a7.m128_u64);
      sub_1587DB0(v99, &v124);
      sub_15F7200(&v128);
LABEL_67:
      v44 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v120 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL);
      goto LABEL_68;
    }
    v37 = *(_QWORD *)(v120 & 0xFFFFFFFFFFFFFFF0LL);
    v38 = *(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v77 = *(unsigned __int8 *)(v38 + 16);
    if ( (unsigned int)(v77 - 25) <= 1 )
      goto LABEL_62;
    if ( (_BYTE)v77 == 13 )
    {
LABEL_16:
      if ( ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) != 0x1B3 )
        goto LABEL_17;
LABEL_62:
      sub_168B9F0((__int64)&v128, a1 + 1, v117, 0xE4Cu, 0);
      v74 = sub_1605D30((__int64)&v128, &v119);
      v124 = sub_EEC8C0(v9, (__int64)&v119, *(double *)a7.m128_u64);
      sub_1587DB0(v74, &v124);
      sub_15F7200(&v128);
      return 1;
    }
  }
  else if ( (unsigned int)(v39 - 25) <= 1 )
  {
    goto LABEL_62;
  }
LABEL_17:
  if ( sub_F582C0(v37) )
    goto LABEL_62;
  v42 = v120;
  v43 = *(_QWORD *)(v120 & 0xFFFFFFFFFFFFFFF0LL);
  v44 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (*(_BYTE *)(v43 + 17) & 4) == 0 )
  {
    if ( v44 == 47
      || (v45 = a1[29],
          v34 = v117,
          v124 = v9,
          LODWORD(v45) = (*(_BYTE *)(v45 + 2) & 2) == 0 ? 0xC58 : 0,
          v128 = off_2BC64D8,
          LODWORD(v129) = v45 + 3658,
          v130 = &v124,
          !(unsigned __int8)sub_1E63C20(a1, v117, v120, 1, &v128)) )
    {
      v46 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v46 + 16) == 48 )
      {
        v107 = sub_F60F10(*v46, v34, v42, v43, v40, v41);
        v44 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v120 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL);
        goto LABEL_23;
      }
    }
    goto LABEL_67;
  }
LABEL_68:
  v107 = nullptr;
LABEL_23:
  if ( (unsigned __int8)(v44 - 2) > 4u )
  {
    v47 = a1[31];
    v98 = v12;
    v116 = v12 == 0;
    v109 = v12 == 0;
    v48 = (-(__int64)(v12 == 0) & 0xFFFFFFFFFFFFFFE0LL) + 120;
  }
  else if ( v12 )
  {
    v98 = v12;
    v47 = a1[31];
    v48 = 120;
    v109 = 0;
    v116 = 0;
  }
  else
  {
    sub_168B9F0((__int64)&v128, a1 + 1, v117, 0x1AA1u, 0);
    v100 = sub_1605D30((__int64)&v128, &v119);
    v121 = sub_EEC8C0(v9, (__int64)&v119, *(double *)a7.m128_u64);
    v110 = sub_1587DB0(v100, &v121);
    v101 = j__strlen("[]");
    v78 = sub_15F0EF0((__int64)a1, v117, 0, (__m128i)a7, *(double *)a8.m128_u64);
    sub_9EC740((__int64)&v124, v78, "[]", v101, 0);
    sub_1589170(v110, &v124);
    if ( v126 != &v127 )
      operator delete(v126);
    sub_15F7200(&v128);
    v116 = 0;
    v48 = 120;
    v47 = a1[31];
    v109 = 0;
    v98 = 1;
  }
  v114 = (v47 + v48 + 17536) | 6;
  if ( !v107 )
  {
    v15 = 0;
    goto LABEL_36;
  }
  v49 = sub_183E2F0((__int64)a1);
  v53 = v120;
  *(__int64 *)((char *)v125 + 4) = 0;
  LODWORD(v125[0]) = v49;
  v124 = v120;
  if ( (v120 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v124 = sub_6D5440(&v124);
  if ( v11 )
  {
    if ( !v98 )
    {
LABEL_31:
      v15 = 0;
      goto LABEL_32;
    }
    v15 = sub_19A3A70((__int64)a1, v117, v125[0], v103);
  }
  else
  {
    if ( (unsigned __int8)sub_19BAC90(a1, v117, (__int64)v107, v114, &v118, 1u, v124, v125[0]) )
      return 1;
    if ( !v98 )
      goto LABEL_31;
    v53 = v118;
    if ( !v118 || (*(_BYTE *)(v118 + 28) & 0x7Fu) - 35 > 3 )
      goto LABEL_31;
    v128 = (__int64 (__fastcall **)())v118;
    sub_19A2390((__int64)&v128, (__int64)a1, v118, v120, v117);
    v15 = v132 == 1;
  }
LABEL_32:
  sub_7052B0((__int64 *)(v107[13] + 96LL), v107[13], v53, v50, v51, v52);
  if ( *(char *)(v107[16] + 7LL) >= 0 )
  {
    v54 = sub_1A69EF0(a1, v107);
    if ( v54 )
    {
      v115 = v54;
      if ( sub_B994D0(v54, v118) )
      {
        sub_1910D40((__int64)a1, v117, v115, 1, v55, v56, a7, a8);
        v97 = v88;
        if ( (unsigned __int8)sub_18F5260(
                                (__int64)a1,
                                v115,
                                (int *)&v117,
                                1u,
                                0,
                                0,
                                (__m128i)a7,
                                *(double *)a8.m128_u64,
                                0,
                                0,
                                0) )
          return 1;
      }
    }
  }
  v57 = (_QWORD *)sub_B97300((__int64)v107);
  sub_19A93E0((__int64)a1, v57, v117, 1u, 1, v109, 0);
  v40 = v97;
LABEL_36:
  v58 = v118;
  if ( v118 )
  {
LABEL_37:
    if ( *(char *)(v58 + 28) < 0 )
      return 1;
    sub_1910D40((__int64)a1, v117, v58, 1, v40, v41, a7, a8);
    if ( v107 && (v59 = sub_1A69EF0(a1, v107)) != 0 )
    {
      if ( sub_B994D0(v59, v118) )
      {
        sub_168B9B0((__int64)&v128, (__int64)(a1 + 1), 2945);
        sub_AE9DF0((unsigned __int8 **)&v128, v103, 8u);
        v92 = sub_C00A40(v9, v103, v89, v90, v91);
        sub_16602B0(a1, v92, v59, (__int64)&v128, 0);
        if ( v128 )
        {
          if ( v129 )
            sub_1580C40(v129, (unsigned __int64)v128);
        }
      }
      v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
      v104 = (*(_QWORD *)(v60 + 80) & 0x40000LL) != 0
          || (*(_QWORD *)(v60 + 80) & 0x80000LL) != 0
          || (unsigned int)sub_B984E0(v60) != 0;
    }
    else
    {
      v104 = 0;
    }
    v61 = v118;
    sub_18F5260((__int64)a1, v118, (int *)&v117, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
    v62 = sub_B74C70(v118);
    v65 = 0;
    if ( v62 )
    {
      v61 = v117;
      if ( (unsigned __int8)sub_1E63CF0(a1, v117, *(_QWORD *)(**(_QWORD **)(v118 + 120) + 48LL), 1, 3968) )
        return 1;
      v65 = 8;
    }
    v108 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v118 + 120) + v65) + 48LL);
    if ( !v104 )
    {
      v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_F68450(
                                                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v118 + 120) + v65)
                                                                        + 48LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL),
                                                  v61,
                                                  v65,
                                                  v63,
                                                  v64)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v66 + 16) != 13 || ((*(_WORD *)(v66 + 18) >> 3) & 0x1FF) != 0x1B3 )
      {
        v67 = 0;
        v68 = *(_QWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v68 & 8) != 0 )
          v67 = *(__int64 *)((char *)&qword_18 + (v68 & 0xFFFFFFFFFFFFFFF0LL));
        v69 = v67 | ((unsigned __int8)v120 | (unsigned __int8)v68) & 7;
        if ( (v69 & 7) != 0 )
        {
          v105 = v69;
          v93 = a1[31];
          v94 = sub_6D5440(&v120);
          v95 = sub_A70F20(v93, v94, v105 & 0xFFFFFFFFFFFFFFF8LL);
          v96 = sub_A70010(v93, v95);
          v31 = sub_160A600((__int64)a1, v9, v96, 5u, 0, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, 0);
        }
        v70 = sub_1BFA490(a1, v31 & 0xFFFFFFFFFFFFFFFELL, v108, 1, 0);
        if ( v70 != 1 )
        {
          v9 = v70 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_5;
        }
        return 1;
      }
    }
LABEL_5:
    v16 = (_QWORD *)a1[31];
    v106 = v16[2329];
    v102 = v117;
    v17 = (_WORD *)sub_EEE9A0(32, v16, 8u);
    v18 = v118;
    v19 = (__int64)v17;
    *v17 = *v17 & 0xFE00 | 0x6E;
    if ( unk_2CD7484 )
      sub_EE9B50(110);
    v20 = *(_WORD *)(v19 + 1);
    *(_QWORD *)(v19 + 16) = v18;
    v20 &= 0xF801u;
    *(_QWORD *)(v19 + 8) = v106;
    *(_WORD *)(v19 + 1) = v20;
    *(_QWORD *)(v19 + 24) = v9;
    *(_BYTE *)(v19 + 2) = (v15 << 6)
                        | (32 * (v12 & 1)) & 0xBF
                        | (16 * (v98 & 1)) & 0xBF
                        | (8 * (v11 & 1)) & 0x8F
                        | HIBYTE(v20) & 0x87;
    *(_DWORD *)(v19 + 4) = v102;
    v21 = sub_B63720(v19);
    *(_BYTE *)(v19 + 1) = (v21 << 6) | *(_BYTE *)(v19 + 1) & 0x3F;
    v22 = *(_BYTE *)(v19 + 2) & 0xF8;
    *(_BYTE *)(v19 + 2) = *(_BYTE *)(v19 + 2) & 0xF8 | (v21 >> 2) & 7;
    sub_19BCA90((__int64)a1, (__int64 *)v19, (__m128i)a7, *(double *)a8.m128_u64, v22, v23, v24, v25);
    return v19;
  }
  if ( (*(_BYTE *)(a1[29] + 52LL) & 1) == 0 )
  {
    v79 = v117;
    if ( (unsigned __int8)sub_1E63330(a1, v117, v120, 1, 0) )
    {
      v112 = sub_199F840((__int64)a1, v120);
      v82 = sub_183E2F0((__int64)a1);
      if ( v112 )
      {
        v84 = 0;
        v86 = 1;
        goto LABEL_95;
      }
      v85 = 0;
      v86 = 0;
    }
    else
    {
      if ( !v15 && !v116 && !(unsigned int)sub_F65A30(v120, v79, v80, v81) )
      {
        v111 = sub_199F840((__int64)a1, v120);
        v82 = sub_183E2F0((__int64)a1);
        v84 = v111;
        v85 = 1;
        v86 = 0;
        if ( v111 )
          goto LABEL_96;
        goto LABEL_95;
      }
      v113 = sub_199F840((__int64)a1, v120);
      v82 = sub_183E2F0((__int64)a1);
      if ( !v113 )
      {
        v84 = 1;
        v86 = 0;
LABEL_95:
        v85 = v86;
        v86 = v84;
        goto LABEL_96;
      }
      v85 = 1;
      v86 = 1;
    }
LABEL_96:
    v87 = v120;
    v129 = __PAIR64__(v85, v82);
    v128 = (__int64 (__fastcall **)())v120;
    LODWORD(v130) = v86;
    if ( (v120 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      v128 = (__int64 (__fastcall **)())sub_6D5440(&v128);
    v118 = sub_19ADC50(a1, v117, v114, v87, v86, v83, (char)v128);
    v58 = v118;
    if ( !v118 )
      return 1;
    goto LABEL_37;
  }
  sub_168B9F0((__int64)&v128, a1 + 1, v117, 0x32u, 0);
  if ( v133 )
  {
    sub_AE9DF0(&v131, (__int64)"default delete", 1u);
  }
  else if ( v134 )
  {
    sub_19A9980((__int64)&v128, (__int64)"default delete");
  }
  sub_15F7200(&v128);
  return 1;
}
