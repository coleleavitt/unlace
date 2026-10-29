unsigned __int16 *__fastcall sub_1A33A60(unsigned __int64 a1, __m128 a2, __m128 a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  char v11; // bl
  __int64 *v12; // rax
  __int64 *v13; // r14
  char v14; // bl
  __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // esi
  unsigned int v35; // ecx
  int v36; // edi
  int v37; // r13d
  unsigned __int64 *v38; // rax
  bool v39; // r12
  unsigned __int64 v40; // r14
  char v41; // al
  unsigned __int64 v42; // rax
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r14
  __int64 v47; // r13
  unsigned __int64 v48; // r12
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 *v51; // rax
  unsigned __int64 v52; // r12
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int16 *v56; // rbx
  int v57; // r12d
  __int64 v58; // r13
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 *v62; // r14
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbx
  __int64 v69; // rax
  __m128i *v70; // r14
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  void *v75; // r11
  __int64 v76; // r12
  unsigned __int64 v77; // rdx
  _QWORD *v78; // rdi
  __int64 v79; // rcx
  unsigned __int16 *v80; // rbx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 (__fastcall *v83)(__int64); // rax
  _WORD *v84; // rax
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  unsigned int *v90; // r12
  __int64 v91; // r12
  __int64 v92; // r13
  __int64 v93; // rdx
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rsi
  unsigned __int8 **v98; // r14
  _QWORD *v99; // rdi
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 *v104; // r14
  unsigned int v105; // [rsp+4h] [rbp-1A4h]
  unsigned __int64 v106; // [rsp+8h] [rbp-1A0h] BYREF
  __m128i *v107; // [rsp+10h] [rbp-198h]
  unsigned __int8 **v108; // [rsp+18h] [rbp-190h]
  bool *v109; // [rsp+20h] [rbp-188h]
  unsigned int *v110; // [rsp+28h] [rbp-180h]
  unsigned int *v111; // [rsp+30h] [rbp-178h] BYREF
  int v112; // [rsp+38h] [rbp-170h]
  int v113; // [rsp+3Ch] [rbp-16Ch]
  __int64 *v114; // [rsp+40h] [rbp-168h]
  void **v115; // [rsp+48h] [rbp-160h]
  void **v116; // [rsp+50h] [rbp-158h]
  unsigned __int64 v117; // [rsp+58h] [rbp-150h]
  __int64 *v118; // [rsp+60h] [rbp-148h]
  int *v119; // [rsp+68h] [rbp-140h]
  unsigned int v120; // [rsp+70h] [rbp-138h]
  char v121; // [rsp+75h] [rbp-133h]
  bool v122; // [rsp+76h] [rbp-132h]
  char v123; // [rsp+77h] [rbp-131h]
  char v124; // [rsp+78h] [rbp-130h]
  char v125; // [rsp+79h] [rbp-12Fh]
  unsigned __int8 v126; // [rsp+7Ah] [rbp-12Eh]
  char v127; // [rsp+7Bh] [rbp-12Dh]
  int v128; // [rsp+7Ch] [rbp-12Ch]
  bool v129; // [rsp+87h] [rbp-121h] BYREF
  unsigned int v130; // [rsp+88h] [rbp-120h] BYREF
  unsigned int v131; // [rsp+8Ch] [rbp-11Ch] BYREF
  __int64 v132; // [rsp+90h] [rbp-118h] BYREF
  void *ptr; // [rsp+98h] [rbp-110h]
  __int64 v134; // [rsp+A0h] [rbp-108h]
  _BYTE v135[24]; // [rsp+A8h] [rbp-100h] BYREF
  void *v136; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v137; // [rsp+C8h] [rbp-E0h]
  char v138; // [rsp+D0h] [rbp-D8h] BYREF
  void *v139[2]; // [rsp+F0h] [rbp-B8h] BYREF
  __m128 v140; // [rsp+100h] [rbp-A8h]
  unsigned int *v141; // [rsp+110h] [rbp-98h]
  void *v142; // [rsp+120h] [rbp-88h] BYREF
  __int64 v143; // [rsp+128h] [rbp-80h]
  char v144; // [rsp+130h] [rbp-78h] BYREF

  v128 = a5;
  v116 = &v142;
  v142 = &v144;
  v143 = 0x400000000LL;
  v137 = 0x400000000LL;
  v8 = *(_DWORD *)(a6 + 1624);
  v115 = &v136;
  v130 = v8;
  v9 = *(_DWORD *)(a6 + 1280);
  v136 = &v138;
  if ( v9 >= 2 )
    v9 = 2;
  v10 = *(_QWORD *)(a6 + 1616);
  v11 = *(_BYTE *)(a6 + 1464);
  v131 = v9;
  v12 = *(__int64 **)(a6 + 1584);
  v13 = *(__int64 **)(a6 + 1592);
  v117 = v10;
  LODWORD(v10) = *(_DWORD *)(a6 + 1616);
  v123 = v11;
  v14 = *(_BYTE *)(a6 + 1635);
  v120 = v10;
  LOBYTE(v10) = *(_BYTE *)(a6 + 1633);
  v124 = v14;
  v15 = v12;
  v125 = v10;
  LOBYTE(v10) = *(_BYTE *)(a6 + 1634);
  v114 = v13;
  v127 = v10;
  LOBYTE(v10) = *(_BYTE *)(a6 + 1465);
  v107 = (__m128i *)v12;
  v126 = v10;
  v122 = sub_B96EF0((__int64)v12);
  v20 = v15;
  v21 = (__int64)(v15 + 8);
  if ( !v20 )
    v21 = 0;
  sub_B90130((__int64)v13, v21, v16, v17, v18, v19);
  v26 = (unsigned __int64)v13;
  if ( sub_B77A30((__int64)v13) )
    v26 = sub_B77A30((__int64)v13);
  sub_B90130(v26, v21, v22, v23, v24, v25);
  sub_190D5E0(a1, a2);
  v113 = v120;
  v121 = v131 != 0;
  if ( v131 )
    v113 = v130;
  v29 = *(_DWORD *)(a6 + 1328);
  LODWORD(v132) = 0;
  v112 = v29;
  if ( !v29 )
  {
    v108 = (unsigned __int8 **)v139;
LABEL_45:
    v63 = *(_QWORD *)(a1 + 248);
    sub_B9B8A0((__int64)v107, (_QWORD *)v63, (const __m128i *)v142, (unsigned int)v143, v27, v28);
    v68 = v120;
    if ( !((unsigned int)v143 | v131) )
    {
      v117 = v120 | v117 & 0xFFFFFFFF00000000LL;
      v63 = v117;
      sub_1A30F20(a1, v117, (__int64)v107, (__int64)v114);
    }
    v69 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(v69 + 20) & 0x40) != 0 && (*(_BYTE *)(v69 + 2) & 4) != 0 && !v122 )
    {
      v63 = v120;
      sub_1A2E0A0(a1, v120, v107, v114);
    }
    v70 = v107;
    v71 = sub_B7E900((__int64)v107, v63, v64, v65, v66, v67);
    v139[1] = (void *)0x400000000LL;
    v139[0] = v108 + 2;
    sub_1A2F650((__int64)v108, v71, 0);
    ptr = v135;
    v132 = 0;
    v134 = 0x200000000LL;
    sub_17CC930(
      a1,
      nullptr,
      v70[1].m128i_u32[2],
      v70,
      (void **)v139[0],
      LODWORD(v139[1]),
      (__m128i)a2,
      *(double *)a3.m128_u64,
      0,
      0,
      (__int64)&v132);
    if ( ptr != v135 )
      free(ptr);
    sub_1891290((__int64 *)a1, 0, v107->m128i_i64, v72, v73, v74, (__m128i)a2, a3);
    if ( v139[0] != v108 + 2 )
      free(v139[0]);
    v75 = v136;
    v76 = (unsigned int)v137;
    v77 = v117 & 0xFFFFFFFF00000000LL;
    *(_BYTE *)(a1 + 4512) |= v127;
    v78 = *(_QWORD **)(a1 + 248);
    *(_BYTE *)(a1 + 4513) |= v124;
    v80 = (unsigned __int16 *)sub_C993C0(
                                v78,
                                (__int64)v107,
                                v68 | v77,
                                v131,
                                v130,
                                v125,
                                v123 ^ 1u,
                                (__int64)v75,
                                v76,
                                v128,
                                v126);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) != 0
      && *((char *)v114 + 28) >= 0
      && (*((_BYTE *)v114 + 84) & 3) == 0 )
    {
      v83 = *(__int64 (__fastcall **)(__int64))(*v114 + 64);
      v84 = (_WORD *)(v83 == sub_6EF210
                    ? sub_B7F750(v114, v108, (__int64)sub_6EF210, v79, v81, v82)
                    : ((__int64 (*)(void))v83)());
      if ( (*v84 & 0x1FF) != 0xF6 && !(unsigned __int8)sub_B8E180((unsigned __int64)&v107[4]) )
      {
        v104 = v114;
        *((_BYTE *)v104 + 84) = sub_18743B0(a1, (__int64)v114, 1u, v101, v102, v103, a2) & 3
                              | *((_BYTE *)v104 + 84) & 0xFC;
      }
    }
    sub_17C7910(a1, a6);
    if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(a1 + 544)) )
      goto LABEL_62;
    v85 = *(_QWORD *)(a1 + 4616);
    v90 = (unsigned int *)(v85 + 640LL * *(unsigned int *)(a1 + 4624) - 640);
    v86 = *v90;
    if ( (unsigned int)v86 <= 5 && ((1LL << v86) & 0x3B) != 0 )
    {
      v100 = v90[24];
      v86 = v90[25];
      if ( v100 + 1 > v86 )
      {
        sub_2237220(v90 + 22, v90 + 26, v100 + 1, 8);
        v100 = v90[24];
      }
      v85 = *((_QWORD *)v90 + 11);
      *(_QWORD *)(v85 + 8 * v100) = v80;
      ++v90[24];
    }
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 248) + 17441LL) )
      goto LABEL_62;
    v91 = *(_QWORD *)(a6 + 1592);
    v92 = *(_QWORD *)(v91 + 112);
    v93 = *(_QWORD *)(v92 + 104);
    v94 = v93 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v93 & 1) == 0 )
    {
      v99 = (_QWORD *)(v93 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v93 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v85 = v93 & 2;
        v95 = (unsigned __int64)v99;
        if ( !(_DWORD)v85 )
        {
LABEL_73:
          v96 = *(_QWORD *)(v95 + 48) & 0xFFFFFFFFFFFFFFF0LL;
          v97 = *(_QWORD *)v96;
          if ( *(_BYTE *)(*(_QWORD *)v96 + 16LL) == 26
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v97 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
            && (v97 = sub_F63050(v97, v97, v85, v86)) != 0 )
          {
            v98 = v108;
            sub_A5DD60(v108, v97);
            if ( v139[1] )
              sub_19EC360(a1, (_DWORD *)v91, v98);
          }
LABEL_62:
          v56 = sub_19A3E40(a1, v80, v85, v86, v87, a2, a3);
          goto LABEL_63;
        }
        v94 = sub_6E2500(v99, *(_QWORD *)(v91 + 112), v85, v86, v87, v88) & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)(v92 + 104) = v94 | 1;
      }
    }
    v139[0] = (void *)v94;
    v95 = sub_B7BB70(v108);
    goto LABEL_73;
  }
  v30 = *(_QWORD *)(a6 + 1320);
  if ( (*(_BYTE *)(v30 + 24) & 0x40) == 0 )
  {
    v108 = (unsigned __int8 **)v139;
    v109 = &v129;
    v111 = &v131;
    v31 = (__int64)&v132;
    v110 = &v130;
    v119 = (int *)&v132;
    v118 = (__int64 *)(a6 + 1800);
    v32 = 0;
    while ( 1 )
    {
      v33 = *(unsigned int *)(a6 + 1628);
      v105 = 0;
      v129 = (unsigned int)v33 <= v32;
      if ( (unsigned int)v33 <= v32 )
        v105 = v130;
      v34 = *(_DWORD *)(a6 + 1816);
      if ( !v34 )
        break;
      v27 = *(_QWORD *)(a6 + 1800);
      v35 = (v34 - 1) & (37 * v32);
      v33 = v27 + 12LL * v35;
      v36 = *(_DWORD *)v33;
      if ( *(_DWORD *)v33 == v32 )
        goto LABEL_16;
      v57 = 1;
      v58 = 0;
      if ( v36 != -1 )
      {
        while ( 1 )
        {
          if ( v36 == -2 && !v58 )
            v58 = v33;
          v28 = (unsigned int)(v57 + 1);
          v35 = (v34 - 1) & (v57 + v35);
          v33 = v27 + 12LL * v35;
          v36 = *(_DWORD *)v33;
          if ( *(_DWORD *)v33 == v32 )
            break;
          if ( v36 == -1 )
          {
            if ( v58 )
              v33 = v58;
            goto LABEL_36;
          }
          ++v57;
        }
LABEL_16:
        v37 = *(_DWORD *)(v33 + 8);
        v38 = (unsigned __int64 *)(v33 + 4);
        v39 = v37 != 0 && *(_DWORD *)(v33 + 4) != 0;
        goto LABEL_17;
      }
LABEL_36:
      v59 = *(_DWORD *)(a6 + 1808);
      v31 = 3 * v34;
      v139[0] = (void *)v33;
      v60 = v59 + 1;
      if ( 4 * v60 >= (unsigned int)v31 )
        goto LABEL_42;
      v31 = v34 - *(_DWORD *)(a6 + 1812) - v60;
      if ( (unsigned int)v31 <= v34 >> 3 )
        goto LABEL_43;
LABEL_38:
      *(_DWORD *)(a6 + 1808) = v60;
      if ( *(_DWORD *)v33 != -1 )
        --*(_DWORD *)(a6 + 1812);
      v61 = v132;
      v39 = 0;
      *(_QWORD *)(v33 + 4) = 0;
      v37 = 0;
      *(_DWORD *)v33 = v61;
      v38 = (unsigned __int64 *)(v33 + 4);
LABEL_17:
      v40 = *v38;
      if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(a1 + 544))
        || v129
        || (v41 = *(_BYTE *)(v30 + 24), (v41 & 0x10) != 0)
        || v122 && (v41 & 0x20) != 0 && (unsigned __int8)sub_15EEA20(v30) )
      {
        v43 = 1;
        if ( !v39 )
          goto LABEL_23;
      }
      else
      {
        v42 = sub_1A2CA20(
                a1,
                v40,
                v113,
                v121,
                (_DWORD)v132 + 1 == *(_DWORD *)(a6 + 1628),
                (__m128i)a2,
                *(double *)a3.m128_u64);
        v43 = sub_1A336C0(a1, v40, v42, v30) ^ 1;
        if ( !v39 )
          goto LABEL_23;
      }
      v121 |= v43;
      v113 = v37;
LABEL_23:
      v106 = a1;
      v141 = v110;
      *(__m128 *)v139 = _mm_loadh_ps((const double *)&v106);
      a2 = _mm_loadh_ps((const double *)&v111);
      v140 = a2;
      v44 = sub_1A321E0(v108, (__m128i)a2, *(double *)a3.m128_u64);
      v46 = v45;
      v47 = v44;
      v48 = sub_1A2E400(a1, v30, v105, 0, a2, a3);
      sub_1A2E640(a1, v107, v30);
      v49 = (unsigned int)v143;
      v50 = (unsigned int)v143 + 1LL;
      if ( v50 > HIDWORD(v143) )
      {
        sub_2237220(v116, v116 + 2, v50, 16);
        v49 = (unsigned int)v143;
      }
      v51 = (__int64 *)((char *)v142 + 16 * v49);
      v52 = v48 & 0xFFFFFFFFFFFFFFFELL;
      *v51 = v47;
      v51[1] = v46;
      v53 = (unsigned int)v137;
      v31 = HIDWORD(v137);
      LODWORD(v143) = v143 + 1;
      v54 = (unsigned int)v137 + 1LL;
      if ( v54 > HIDWORD(v137) )
      {
        sub_2237220(v115, v115 + 2, v54, 8);
        v53 = (unsigned int)v137;
      }
      *((_QWORD *)v136 + v53) = v52;
      v55 = *(_QWORD *)(a1 + 232);
      LODWORD(v137) = v137 + 1;
      if ( (*(_BYTE *)(v55 + 60) & 0x10) != 0 )
        sub_1790A90(*(__int64 **)(a1 + 664), (__int64)v114, v30);
      v32 = v132 + 1;
      LODWORD(v132) = v32;
      if ( v32 == v112 )
        goto LABEL_45;
      v30 = *(_QWORD *)(a6 + 1320) + 32LL * v32;
      if ( (*(_BYTE *)(v30 + 24) & 0x40) != 0 )
        goto LABEL_31;
    }
    v139[0] = nullptr;
LABEL_42:
    v34 *= 2;
LABEL_43:
    v62 = v118;
    sub_1A317E0(v118, v34, v33, v31, v27, v28);
    sub_1A2F5A0(v62, v119, v108);
    v33 = (__int64)v139[0];
    v60 = *(_DWORD *)(a6 + 1808) + 1;
    goto LABEL_38;
  }
LABEL_31:
  v56 = (_WORD *)(&dword_0 + 1);
LABEL_63:
  if ( v136 != v115 + 2 )
    free(v136);
  if ( v142 != v116 + 2 )
    free(v142);
  return v56;
}
