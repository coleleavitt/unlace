__int64 __fastcall sub_1B18720(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _QWORD *a6,
        __m128 a7,
        __m128 a8,
        _QWORD *a9,
        int a10)
{
  _DWORD *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // r14
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _WORD *v25; // rax
  _QWORD *v26; // r14
  __int64 v27; // r12
  __int16 v28; // ax
  unsigned __int8 v29; // al
  __int64 result; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 (__fastcall ***v38)(); // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rbx
  int v55; // edx
  bool v56; // r11
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 v74; // rax
  unsigned int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  char v79; // r11
  __int64 *v80; // rsi
  __int64 v81; // rdx
  __int64 *v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  _WORD *v86; // rax
  _QWORD *v87; // rdx
  __int16 v88; // ax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned int v92; // eax
  __int64 (__fastcall ***v93)(); // rdi
  unsigned int v94; // eax
  unsigned int v95; // eax
  unsigned int v96; // eax
  __int64 *v97; // rsi
  char v98; // al
  bool v99; // al
  __int64 v100; // rdx
  unsigned int v101; // eax
  __int64 v102; // r12
  void *v103; // rdi
  void *v104; // rdi
  unsigned int v105; // eax
  __int64 v106; // r12
  unsigned int v107; // eax
  bool v109; // [rsp+0h] [rbp-188h]
  __int64 v110; // [rsp+8h] [rbp-180h]
  __int64 v111; // [rsp+8h] [rbp-180h]
  unsigned __int64 v112; // [rsp+10h] [rbp-178h]
  _QWORD *v113; // [rsp+10h] [rbp-178h]
  __int64 v114; // [rsp+18h] [rbp-170h]
  __int64 v115; // [rsp+18h] [rbp-170h]
  __int64 v116; // [rsp+18h] [rbp-170h]
  __int64 v117; // [rsp+20h] [rbp-168h]
  _QWORD *v118; // [rsp+28h] [rbp-160h] BYREF
  __int64 v119; // [rsp+30h] [rbp-158h] BYREF
  __int64 v120; // [rsp+38h] [rbp-150h] BYREF
  void *v121; // [rsp+40h] [rbp-148h] BYREF
  unsigned int v122; // [rsp+48h] [rbp-140h]
  char v123; // [rsp+4Ch] [rbp-13Ch]
  void *v124; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v125; // [rsp+58h] [rbp-130h]
  char v126; // [rsp+5Ch] [rbp-12Ch]
  _BYTE v127[16]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v128; // [rsp+70h] [rbp-118h] BYREF
  __int64 v129; // [rsp+78h] [rbp-110h]
  unsigned int v130; // [rsp+80h] [rbp-108h] BYREF
  char v131; // [rsp+84h] [rbp-104h]
  void *v132; // [rsp+88h] [rbp-100h] BYREF
  unsigned int v133; // [rsp+90h] [rbp-F8h]
  char v134; // [rsp+94h] [rbp-F4h]
  __int64 (__fastcall **v135)(); // [rsp+C0h] [rbp-C8h] BYREF
  int v136; // [rsp+C8h] [rbp-C0h]
  _QWORD **v137; // [rsp+D0h] [rbp-B8h]

  v118 = (_QWORD *)a2;
  v14 = a9;
  v19 = (_QWORD *)sub_168B6C0((__int64)a1);
  v20 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v20 + 16) == 13 )
  {
    v21 = (*(_WORD *)(v20 + 18) >> 3) & 0x1FF;
    if ( v21 > 0x1F1u && v21 != 506 )
    {
      v31 = sub_1907C70(*a1, (_QWORD *)a2, (__m128i)a7, a8, v15, v16, v17, v18);
      if ( v31 == 1 )
        return 1;
      v118 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( a3 )
  {
    v22 = *(_QWORD *)(a3[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v22 + 16) == 13 && ((*(_WORD *)(v22 + 18) >> 3) & 0x1FFu) > 0x1F2 )
    {
      v57 = sub_1907C70(*a1, a3, (__m128i)a7, a8, v15, v16, v17, v18);
      if ( v57 == 1 )
        return 1;
      a2 = v57 & 0xFFFFFFFFFFFFFFFELL;
      v62 = sub_19146F0(*a1, (_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFELL), v58, v59, v60, v61, a7, a8);
      if ( v62 == 1 )
        return 1;
      a3 = (_QWORD *)(v62 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( a6 )
  {
    v23 = *(_QWORD *)(a6[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v23 + 16) == 13 && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FFu) > 0x1F2 )
    {
      v63 = sub_1907C70(*a1, a6, (__m128i)a7, a8, v15, v16, v17, v18);
      if ( v63 == 1 )
        return 1;
      a2 = v63 & 0xFFFFFFFFFFFFFFFELL;
      v68 = sub_19146F0(*a1, (_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFELL), v64, v65, v66, v67, a7, a8);
      if ( v68 == 1 )
        return 1;
      a6 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( a9 )
  {
    v24 = *(_QWORD *)(a9[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) == 13 && ((*(_WORD *)(v24 + 18) >> 3) & 0x1FFu) > 0x1F2 )
    {
      v69 = sub_1907C70(*a1, a9, (__m128i)a7, a8, v15, v16, v17, v18);
      if ( v69 == 1 )
        return 1;
      a2 = v69 & 0xFFFFFFFFFFFFFFFELL;
      v74 = sub_19146F0(*a1, (_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFELL), v70, v71, v72, v73, a7, a8);
      if ( v74 == 1 )
        return 1;
      v14 = (_DWORD *)(v74 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( (*(_DWORD *)v118 & 0x10000) != 0
    || a3 && ((*(_DWORD *)a3 >> 14) & 0xC) != 0
    || a6 && ((*(_DWORD *)a6 >> 14) & 0xC) != 0
    || v14 && ((*v14 >> 14) & 0xC) != 0 )
  {
    v110 = v19[2384];
    v25 = (_WORD *)sub_EEE9A0(72, v19, 8u);
    v26 = v118;
    v27 = (__int64)v25;
    *v25 = *v25 & 0xFE00 | 0x7C;
    if ( unk_2CD7484 )
      sub_EE9B50(124);
    v28 = *(_WORD *)(v27 + 1);
    *(_DWORD *)(v27 + 56) = a4;
    *(_DWORD *)(v27 + 16) = 0;
    *(_QWORD *)(v27 + 24) = v26;
    *(_WORD *)(v27 + 1) = v28 & 0xF801 | 2;
    *(_QWORD *)(v27 + 8) = v110;
    *(_DWORD *)(v27 + 60) = a5;
    *(_DWORD *)(v27 + 64) = a10;
LABEL_18:
    *(_QWORD *)(v27 + 32) = a3;
    *(_QWORD *)(v27 + 40) = a6;
    *(_QWORD *)(v27 + 48) = v14;
    v29 = sub_B63B30(v27);
    *(_BYTE *)(v27 + 1) = (v29 << 6) | *(_BYTE *)(v27 + 1) & 0x3F;
    *(_BYTE *)(v27 + 2) = *(_BYTE *)(v27 + 2) & 0xF8 | (v29 >> 2) & 7;
    return v27;
  }
  v119 = 0;
  v32 = sub_C03930((unsigned __int64)v118, a2) & 0xFFFFFFFFFFFFFFF0LL;
  v35 = *(_QWORD *)v32;
  v112 = v32;
  v36 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22 )
  {
    v119 = sub_F68450(v35, a2, v36, v33, v34);
  }
  else
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
    {
      v96 = sub_C00A40((unsigned __int64)v118, a2, v36, v33, v34);
      sub_168B9F0((__int64)&v135, a1, v96, 0x1214u, 0);
      v93 = &v135;
      v128 = sub_EEC8C0((unsigned __int64)v118, (__int64)a1, *(double *)a7.m128_u64);
      goto LABEL_106;
    }
    v119 = *(_QWORD *)(sub_CAFA70(v35, a2, v36, v33) + 32);
  }
  if ( a3 )
  {
    a2 = (unsigned int)sub_C00A40((unsigned __int64)a3, a2, v37, (__int64)v38, v39);
    v40 = sub_1AF55B0(a1, a2, (__int64)a3);
    if ( v40 == 1 )
    {
      v92 = sub_C00A40((unsigned __int64)a3, a2, v41, (__int64)v38, v39);
      sub_168B9F0((__int64)&v135, a1, v92, 0x1213u, 0);
      LODWORD(v124) = 0;
      v93 = (__int64 (__fastcall ***)())sub_1587D10((__int64)&v135, (int *)&v124);
      v128 = sub_EEC8C0((unsigned __int64)a3, (__int64)&v124, *(double *)a7.m128_u64);
LABEL_106:
      sub_1587DB0((__int64)v93, &v128);
      sub_15F7200(&v135);
      return 1;
    }
    a3 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFELL);
    v42 = *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v37 + 16) == 13
      && (v37 = *(unsigned __int16 *)(v37 + 18), LOWORD(v37) = ((unsigned __int16)v37 >> 3) & 0x1FF, (_WORD)v37 == 448)
      || (v38 = &v135,
          v89 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(v89 + 16) == 13)
      && ((*(_WORD *)(v89 + 18) >> 3) & 0x1FF) == 0x1B5 )
    {
      v43 = sub_C00A40((unsigned __int64)a3, a2, v37, (__int64)v38, v39);
      sub_168B9F0((__int64)&v135, a1, v43, 0x1C39u, 0);
      LODWORD(v124) = 0;
      v114 = sub_1587D10((__int64)&v135, (int *)&v124);
      a2 = (unsigned __int64)&v128;
      v128 = sub_EEC8C0((unsigned __int64)a3, (__int64)&v124, *(double *)a7.m128_u64);
      sub_1587DB0(v114, &v128);
      sub_15F7200(&v135);
    }
  }
  if ( !a6 )
    goto LABEL_39;
  a2 = (unsigned int)sub_C00A40((unsigned __int64)a6, a2, v37, (__int64)v38, v39);
  v44 = sub_1AF55B0(a1, a2, (__int64)a6);
  if ( v44 == 1 )
  {
    v94 = sub_C00A40((unsigned __int64)a6, a2, v45, (__int64)v38, v39);
    sub_168B9F0((__int64)&v135, a1, v94, 0x1213u, 0);
    LODWORD(v124) = 1;
    v93 = (__int64 (__fastcall ***)())sub_1587D10((__int64)&v135, (int *)&v124);
    v128 = sub_EEC8C0((unsigned __int64)a6, (__int64)&v124, *(double *)a7.m128_u64);
    goto LABEL_106;
  }
  a6 = (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFELL);
  v46 = *(_QWORD *)((v44 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v37 + 16) == 13
    && (v37 = *(unsigned __int16 *)(v37 + 18), LOWORD(v37) = ((unsigned __int16)v37 >> 3) & 0x1FF, (_WORD)v37 == 448)
    || (v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v90 + 16) == 13)
    && ((*(_WORD *)(v90 + 18) >> 3) & 0x1FF) == 0x1B5 )
  {
    v47 = sub_C00A40((unsigned __int64)a6, a2, v37, (__int64)v38, v39);
    sub_168B9F0((__int64)&v135, a1, v47, 0x1C39u, 0);
    LODWORD(v124) = 1;
    v115 = sub_1587D10((__int64)&v135, (int *)&v124);
    a2 = (unsigned __int64)&v128;
    v128 = sub_EEC8C0((unsigned __int64)a6, (__int64)&v124, *(double *)a7.m128_u64);
    sub_1587DB0(v115, &v128);
    sub_15F7200(&v135);
  }
LABEL_39:
  if ( !v14 )
    goto LABEL_44;
  a2 = (unsigned int)sub_C00A40((unsigned __int64)v14, a2, v37, (__int64)v38, v39);
  v48 = sub_1AF55B0(a1, a2, (__int64)v14);
  if ( v48 == 1 )
  {
    v95 = sub_C00A40((unsigned __int64)v14, a2, v49, (__int64)v38, v39);
    sub_168B9F0((__int64)&v135, a1, v95, 0x1213u, 0);
    LODWORD(v124) = 1;
    v93 = (__int64 (__fastcall ***)())sub_1587D10((__int64)&v135, (int *)&v124);
    v128 = sub_EEC8C0((unsigned __int64)v14, (__int64)&v124, *(double *)a7.m128_u64);
    goto LABEL_106;
  }
  v14 = (_DWORD *)(v48 & 0xFFFFFFFFFFFFFFFELL);
  v50 = *(_QWORD *)((v48 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v51 + 16) == 13
    && (v51 = *(unsigned __int16 *)(v51 + 18), LOWORD(v51) = ((unsigned __int16)v51 >> 3) & 0x1FF, (_WORD)v51 == 448)
    || (v91 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v91 + 16) == 13)
    && ((*(_WORD *)(v91 + 18) >> 3) & 0x1FF) == 0x1B5 )
  {
    v52 = sub_C00A40((unsigned __int64)v14, a2, v51, (__int64)v38, v39);
    sub_168B9F0((__int64)&v135, a1, v52, 0x1C39u, 0);
    LODWORD(v124) = 1;
    v116 = sub_1587D10((__int64)&v135, (int *)&v124);
    a2 = (unsigned __int64)&v128;
    v128 = sub_EEC8C0((unsigned __int64)v14, (__int64)&v124, *(double *)a7.m128_u64);
    sub_1587DB0(v116, &v128);
    sub_15F7200(&v135);
  }
LABEL_44:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
    v53 = sub_C00A40((unsigned __int64)v118, a2, v119, (__int64)v38, v39);
    sub_168B9F0((__int64)&v135, a1, v53, 0x11FCu, 0);
    v54 = sub_1605D30((__int64)&v135, &v119);
    v128 = sub_EEC8C0((unsigned __int64)v118, (__int64)&v119, *(double *)a7.m128_u64);
    sub_1587DB0(v54, &v128);
    sub_15F7200(&v135);
    return 1;
  }
  v117 = *a1;
  v75 = sub_C00A40((unsigned __int64)v118, a2, v119, (__int64)v38, v39);
  v136 = 4605;
  v135 = off_2BC64D8;
  v137 = &v118;
  v79 = sub_1E63C20(v117, v75, v119, 1, &v135);
  if ( v79 )
    return 1;
  if ( a3 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v112 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 0x22 )
  {
    v97 = &v128;
    LOWORD(v128) = 0;
    v131 &= ~1u;
    v129 = 0;
    v130 = 0;
    v98 = sub_C3F220((unsigned __int64)a3, (__int64)&v128, (__int64)v19, 0, 0, v78);
    v79 = 0;
    if ( v98 )
    {
      v125 = v133;
      if ( v133 > 0x40 )
      {
        v97 = (__int64 *)&v132;
        sub_2205510(&v124);
        v79 = 0;
      }
      else
      {
        v124 = v132;
      }
      v126 = v134;
      if ( !v134 )
      {
        v99 = sub_1AE7A00((__int64 *)&v124);
        v79 = 0;
        if ( v99 )
        {
          v107 = sub_C00A40((unsigned __int64)a3, (__int64)v97, v100, v76, v77);
          sub_168B9F0((__int64)&v135, a1, v107, 0x1200u, 0);
          v121 = (void *)sub_EEC8C0((unsigned __int64)a3, (__int64)a1, *(double *)a7.m128_u64);
          sub_1587DB0((__int64)&v135, (__int64 *)&v121);
          sub_15F7200(&v135);
          result = 1;
          if ( v125 > 0x40 )
          {
            v104 = v124;
            if ( v124 )
              goto LABEL_126;
          }
          goto LABEL_127;
        }
      }
      if ( v125 > 0x40 && v124 )
      {
        operator delete[](v124);
        v79 = 0;
      }
    }
    if ( v130 > 1 )
    {
      sub_A4F8E0((int *)&v130);
      v79 = 0;
    }
  }
  if ( !a6 )
  {
    if ( !a4 )
      goto LABEL_79;
    if ( v112 )
    {
      v55 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v112 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned int)(v55 - 2) <= 1 || (_BYTE)v55 == 6 )
        goto LABEL_79;
      sub_168B9F0((__int64)&v135, a1, a4, 0x11FFu, 0);
      v56 = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v112 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                            - 2) <= 4u;
    }
    else
    {
      v109 = v79;
      sub_168B9F0((__int64)&v135, a1, a4, 0x11FFu, 0);
      v56 = v109;
    }
    LOBYTE(v128) = v56;
    sub_1588420((__int64)&v135, (unsigned __int8 *)&v128);
    sub_15F7200(&v135);
    return 1;
  }
  v80 = &v128;
  LOWORD(v128) = 0;
  v131 &= ~1u;
  v129 = 0;
  v130 = 0;
  if ( (unsigned __int8)sub_C3F220((unsigned __int64)a6, (__int64)&v128, (__int64)v19, 0, 0, v78) )
  {
    v122 = v133;
    if ( v133 > 0x40 )
    {
      v80 = (__int64 *)&v132;
      sub_2205510(&v121);
    }
    else
    {
      v121 = v132;
    }
    v123 = v134;
    if ( !v134 && sub_1AE7A00((__int64 *)&v121) )
    {
      v105 = sub_C00A40((unsigned __int64)a6, (__int64)v80, v81, v76, v77);
      sub_168B9F0((__int64)&v135, a1, v105, 0x11FEu, 0);
      sub_C1DEB0(&v124, (int)&v121, 10, 1u, 0, 1u, 0);
      v106 = sub_1682AF0((__int64)&v135, (__int64)&v124);
      v120 = sub_EEC8C0((unsigned __int64)a6, (__int64)&v124, *(double *)a7.m128_u64);
      sub_1587DB0(v106, &v120);
      v103 = v124;
      if ( v124 == v127 )
        goto LABEL_124;
      goto LABEL_123;
    }
    if ( v122 > 0x40 && v121 )
      operator delete[](v121);
  }
  if ( v130 > 1 )
    sub_A4F8E0((int *)&v130);
LABEL_79:
  if ( !v14 )
  {
LABEL_89:
    v84 = *(_QWORD *)(v118[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v84 + 16) == 13 && ((*(_WORD *)(v84 + 18) >> 3) & 0x1FF) == 0x1FA )
      goto LABEL_93;
    v85 = sub_19179A0(*a1, v118, 1u, v76, v77, v78, a7, a8);
    if ( v85 != 1 )
    {
      v118 = (_QWORD *)(v85 & 0xFFFFFFFFFFFFFFFELL);
LABEL_93:
      v111 = v19[2438];
      v86 = (_WORD *)sub_EEE9A0(72, v19, 8u);
      v87 = v118;
      v27 = (__int64)v86;
      *v86 = *v86 & 0xFE00 | 0x7C;
      if ( unk_2CD7484 )
      {
        v113 = v87;
        sub_EE9B50(124);
        v87 = v113;
      }
      v88 = *(_WORD *)(v27 + 1);
      *(_DWORD *)(v27 + 56) = a4;
      *(_DWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 24) = v87;
      *(_WORD *)(v27 + 1) = v88 & 0xF801 | 2;
      *(_QWORD *)(v27 + 8) = v111;
      *(_DWORD *)(v27 + 60) = a5;
      *(_DWORD *)(v27 + 64) = a10;
      goto LABEL_18;
    }
    return 1;
  }
  LOWORD(v128) = 0;
  v82 = &v128;
  v131 &= ~1u;
  v129 = 0;
  v130 = 0;
  if ( !(unsigned __int8)sub_C3F220((unsigned __int64)v14, (__int64)&v128, (__int64)v19, 0, 0, v78) )
  {
LABEL_87:
    if ( v130 > 1 )
      sub_A4F8E0((int *)&v130);
    goto LABEL_89;
  }
  v122 = v133;
  if ( v133 > 0x40 )
  {
    v82 = (__int64 *)&v132;
    sub_2205510(&v121);
  }
  else
  {
    v121 = v132;
  }
  v123 = v134;
  if ( (unsigned __int8)sub_1AF0130((__int64 *)&v121) )
  {
    if ( v122 > 0x40 && v121 )
      operator delete[](v121);
    goto LABEL_87;
  }
  v101 = sub_C00A40((unsigned __int64)v14, (__int64)v82, v83, v76, v77);
  sub_168B9F0((__int64)&v135, a1, v101, 0x1201u, 0);
  sub_C1DEB0(&v124, (int)&v121, 10, 1u, 0, 1u, 0);
  v102 = sub_1682AF0((__int64)&v135, (__int64)&v124);
  v120 = sub_EEC8C0((unsigned __int64)v14, (__int64)&v124, *(double *)a7.m128_u64);
  sub_1587DB0(v102, &v120);
  v103 = v124;
  if ( v124 != v127 )
LABEL_123:
    operator delete(v103);
LABEL_124:
  sub_15F7200(&v135);
  result = 1;
  if ( v122 > 0x40 )
  {
    v104 = v121;
    if ( v121 )
    {
LABEL_126:
      operator delete[](v104);
      result = 1;
    }
  }
LABEL_127:
  if ( v130 > 1 )
  {
    sub_A4F8E0((int *)&v130);
    return 1;
  }
  return result;
}
