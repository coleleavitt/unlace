__int64 __fastcall sub_1B176A0(
        __int64 *a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int a7,
        int a8,
        _QWORD *a9,
        _QWORD *a10,
        int a11)
{
  _DWORD *v14; // rbx
  _DWORD *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r14
  __int64 v21; // rax
  unsigned __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _WORD *v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // r12
  __int16 v29; // ax
  unsigned __int8 v30; // al
  __int64 result; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 (__fastcall ***v39)(); // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // rbx
  int v56; // edx
  bool v57; // r11
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // rax
  unsigned int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  char v80; // r11
  __int64 *v81; // rsi
  __int64 v82; // rdx
  __int64 *v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  _WORD *v87; // rax
  _QWORD *v88; // rdx
  __int16 v89; // ax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned int v93; // eax
  __int64 (__fastcall ***v94)(); // rdi
  unsigned int v95; // eax
  unsigned int v96; // eax
  unsigned int v97; // eax
  __int64 *v98; // rsi
  char v99; // al
  bool v100; // al
  __int64 v101; // rdx
  unsigned int v102; // eax
  __int64 v103; // r12
  void *v104; // rdi
  void *v105; // rdi
  unsigned int v106; // eax
  __int64 v107; // r12
  unsigned int v108; // eax
  bool v110; // [rsp+0h] [rbp-188h]
  __int64 v111; // [rsp+8h] [rbp-180h]
  __int64 v112; // [rsp+8h] [rbp-180h]
  unsigned __int64 v113; // [rsp+10h] [rbp-178h]
  _QWORD *v114; // [rsp+10h] [rbp-178h]
  __int64 v115; // [rsp+18h] [rbp-170h]
  __int64 v116; // [rsp+18h] [rbp-170h]
  __int64 v117; // [rsp+18h] [rbp-170h]
  __int64 v118; // [rsp+20h] [rbp-168h]
  _QWORD *v119; // [rsp+28h] [rbp-160h] BYREF
  __int64 v120; // [rsp+30h] [rbp-158h] BYREF
  __int64 v121; // [rsp+38h] [rbp-150h] BYREF
  void *v122; // [rsp+40h] [rbp-148h] BYREF
  unsigned int v123; // [rsp+48h] [rbp-140h]
  char v124; // [rsp+4Ch] [rbp-13Ch]
  void *v125; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v126; // [rsp+58h] [rbp-130h]
  char v127; // [rsp+5Ch] [rbp-12Ch]
  _BYTE v128[16]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v129; // [rsp+70h] [rbp-118h] BYREF
  __int64 v130; // [rsp+78h] [rbp-110h]
  unsigned int v131; // [rsp+80h] [rbp-108h] BYREF
  char v132; // [rsp+84h] [rbp-104h]
  void *v133; // [rsp+88h] [rbp-100h] BYREF
  unsigned int v134; // [rsp+90h] [rbp-F8h]
  char v135; // [rsp+94h] [rbp-F4h]
  __int64 (__fastcall **v136)(); // [rsp+C0h] [rbp-C8h] BYREF
  int v137; // [rsp+C8h] [rbp-C0h]
  _QWORD **v138; // [rsp+D0h] [rbp-B8h]

  v119 = (_QWORD *)a2;
  v14 = a9;
  v15 = a10;
  v20 = (_QWORD *)sub_168B6C0((__int64)a1);
  v21 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v21 + 16) == 13 )
  {
    v22 = (*(_WORD *)(v21 + 18) >> 3) & 0x1FF;
    if ( v22 > 0x1F1u && v22 != 506 )
    {
      v32 = sub_1907C70(*a1, (_QWORD *)a2, (__m128i)a3, a4, v16, v17, v18, v19);
      if ( v32 == 1 )
        return 1;
      v119 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( a6 )
  {
    v23 = *(_QWORD *)(a6[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v23 + 16) == 13 && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FFu) > 0x1F2 )
    {
      v58 = sub_1907C70(*a1, a6, (__m128i)a3, a4, v16, v17, v18, v19);
      if ( v58 == 1 )
        return 1;
      a2 = v58 & 0xFFFFFFFFFFFFFFFELL;
      v63 = sub_19146F0(*a1, (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFELL), v59, v60, v61, v62, a3, a4);
      if ( v63 == 1 )
        return 1;
      a6 = (_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( a9 )
  {
    v24 = *(_QWORD *)(a9[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) == 13 && ((*(_WORD *)(v24 + 18) >> 3) & 0x1FFu) > 0x1F2 )
    {
      v64 = sub_1907C70(*a1, a9, (__m128i)a3, a4, v16, v17, v18, v19);
      if ( v64 == 1 )
        return 1;
      a2 = v64 & 0xFFFFFFFFFFFFFFFELL;
      v69 = sub_19146F0(*a1, (_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFELL), v65, v66, v67, v68, a3, a4);
      if ( v69 == 1 )
        return 1;
      v14 = (_DWORD *)(v69 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( a10 )
  {
    v25 = *(_QWORD *)(a10[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v25 + 16) == 13 && ((*(_WORD *)(v25 + 18) >> 3) & 0x1FFu) > 0x1F2 )
    {
      v70 = sub_1907C70(*a1, a10, (__m128i)a3, a4, v16, v17, v18, v19);
      if ( v70 == 1 )
        return 1;
      a2 = v70 & 0xFFFFFFFFFFFFFFFELL;
      v75 = sub_19146F0(*a1, (_QWORD *)(v70 & 0xFFFFFFFFFFFFFFFELL), v71, v72, v73, v74, a3, a4);
      if ( v75 == 1 )
        return 1;
      v15 = (_DWORD *)(v75 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( (*(_DWORD *)v119 & 0x10000) != 0
    || a6 && ((*(_DWORD *)a6 >> 14) & 0xC) != 0
    || v14 && ((*v14 >> 14) & 0xC) != 0
    || v15 && ((*v15 >> 14) & 0xC) != 0 )
  {
    v111 = v20[2384];
    v26 = (_WORD *)sub_EEE9A0(72, v20, 8u);
    v27 = v119;
    v28 = (__int64)v26;
    *v26 = *v26 & 0xFE00 | 0x7C;
    if ( unk_2CD7484 )
      sub_EE9B50(124);
    v29 = *(_WORD *)(v28 + 1);
    *(_DWORD *)(v28 + 56) = a7;
    *(_DWORD *)(v28 + 16) = 0;
    *(_QWORD *)(v28 + 24) = v27;
    *(_WORD *)(v28 + 1) = v29 & 0xF801 | 2;
    *(_QWORD *)(v28 + 8) = v111;
    *(_DWORD *)(v28 + 60) = a8;
    *(_DWORD *)(v28 + 64) = a11;
LABEL_18:
    *(_QWORD *)(v28 + 32) = a6;
    *(_QWORD *)(v28 + 40) = v14;
    *(_QWORD *)(v28 + 48) = v15;
    v30 = sub_B63B30(v28);
    *(_BYTE *)(v28 + 1) = (v30 << 6) | *(_BYTE *)(v28 + 1) & 0x3F;
    *(_BYTE *)(v28 + 2) = *(_BYTE *)(v28 + 2) & 0xF8 | (v30 >> 2) & 7;
    return v28;
  }
  v120 = 0;
  v33 = sub_C03930((unsigned __int64)v119, a2) & 0xFFFFFFFFFFFFFFF0LL;
  v36 = *(_QWORD *)v33;
  v113 = v33;
  v37 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22 )
  {
    v120 = sub_F68450(v36, a2, v37, v34, v35);
  }
  else
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
    {
      v97 = sub_C00A40((unsigned __int64)v119, a2, v37, v34, v35);
      sub_168B9F0((__int64)&v136, a1, v97, 0x1214u, 0);
      v94 = &v136;
      v129 = sub_EEC8C0((unsigned __int64)v119, (__int64)a1, *(double *)a3.m128_u64);
      goto LABEL_106;
    }
    v120 = *(_QWORD *)(sub_CAFA70(v36, a2, v37, v34) + 32);
  }
  if ( a6 )
  {
    a2 = (unsigned int)sub_C00A40((unsigned __int64)a6, a2, v38, (__int64)v39, v40);
    v41 = sub_1AF55B0(a1, a2, (__int64)a6);
    if ( v41 == 1 )
    {
      v93 = sub_C00A40((unsigned __int64)a6, a2, v42, (__int64)v39, v40);
      sub_168B9F0((__int64)&v136, a1, v93, 0x1213u, 0);
      LODWORD(v125) = 0;
      v94 = (__int64 (__fastcall ***)())sub_1587D10((__int64)&v136, (int *)&v125);
      v129 = sub_EEC8C0((unsigned __int64)a6, (__int64)&v125, *(double *)a3.m128_u64);
LABEL_106:
      sub_1587DB0((__int64)v94, &v129);
      sub_15F7200(&v136);
      return 1;
    }
    a6 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFELL);
    v43 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v38 + 16) == 13
      && (v38 = *(unsigned __int16 *)(v38 + 18), LOWORD(v38) = ((unsigned __int16)v38 >> 3) & 0x1FF, (_WORD)v38 == 448)
      || (v39 = &v136,
          v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(v90 + 16) == 13)
      && ((*(_WORD *)(v90 + 18) >> 3) & 0x1FF) == 0x1B5 )
    {
      v44 = sub_C00A40((unsigned __int64)a6, a2, v38, (__int64)v39, v40);
      sub_168B9F0((__int64)&v136, a1, v44, 0x1C39u, 0);
      LODWORD(v125) = 0;
      v115 = sub_1587D10((__int64)&v136, (int *)&v125);
      a2 = (unsigned __int64)&v129;
      v129 = sub_EEC8C0((unsigned __int64)a6, (__int64)&v125, *(double *)a3.m128_u64);
      sub_1587DB0(v115, &v129);
      sub_15F7200(&v136);
    }
  }
  if ( !v14 )
    goto LABEL_39;
  a2 = (unsigned int)sub_C00A40((unsigned __int64)v14, a2, v38, (__int64)v39, v40);
  v45 = sub_1AF55B0(a1, a2, (__int64)v14);
  if ( v45 == 1 )
  {
    v95 = sub_C00A40((unsigned __int64)v14, a2, v46, (__int64)v39, v40);
    sub_168B9F0((__int64)&v136, a1, v95, 0x1213u, 0);
    LODWORD(v125) = 1;
    v94 = (__int64 (__fastcall ***)())sub_1587D10((__int64)&v136, (int *)&v125);
    v129 = sub_EEC8C0((unsigned __int64)v14, (__int64)&v125, *(double *)a3.m128_u64);
    goto LABEL_106;
  }
  v14 = (_DWORD *)(v45 & 0xFFFFFFFFFFFFFFFELL);
  v47 = *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v38 + 16) == 13
    && (v38 = *(unsigned __int16 *)(v38 + 18), LOWORD(v38) = ((unsigned __int16)v38 >> 3) & 0x1FF, (_WORD)v38 == 448)
    || (v91 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v91 + 16) == 13)
    && ((*(_WORD *)(v91 + 18) >> 3) & 0x1FF) == 0x1B5 )
  {
    v48 = sub_C00A40((unsigned __int64)v14, a2, v38, (__int64)v39, v40);
    sub_168B9F0((__int64)&v136, a1, v48, 0x1C39u, 0);
    LODWORD(v125) = 1;
    v116 = sub_1587D10((__int64)&v136, (int *)&v125);
    a2 = (unsigned __int64)&v129;
    v129 = sub_EEC8C0((unsigned __int64)v14, (__int64)&v125, *(double *)a3.m128_u64);
    sub_1587DB0(v116, &v129);
    sub_15F7200(&v136);
  }
LABEL_39:
  if ( !v15 )
    goto LABEL_44;
  a2 = (unsigned int)sub_C00A40((unsigned __int64)v15, a2, v38, (__int64)v39, v40);
  v49 = sub_1AF55B0(a1, a2, (__int64)v15);
  if ( v49 == 1 )
  {
    v96 = sub_C00A40((unsigned __int64)v15, a2, v50, (__int64)v39, v40);
    sub_168B9F0((__int64)&v136, a1, v96, 0x1213u, 0);
    LODWORD(v125) = 1;
    v94 = (__int64 (__fastcall ***)())sub_1587D10((__int64)&v136, (int *)&v125);
    v129 = sub_EEC8C0((unsigned __int64)v15, (__int64)&v125, *(double *)a3.m128_u64);
    goto LABEL_106;
  }
  v15 = (_DWORD *)(v49 & 0xFFFFFFFFFFFFFFFELL);
  v51 = *(_QWORD *)((v49 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v52 + 16) == 13
    && (v52 = *(unsigned __int16 *)(v52 + 18), LOWORD(v52) = ((unsigned __int16)v52 >> 3) & 0x1FF, (_WORD)v52 == 448)
    || (v92 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v92 + 16) == 13)
    && ((*(_WORD *)(v92 + 18) >> 3) & 0x1FF) == 0x1B5 )
  {
    v53 = sub_C00A40((unsigned __int64)v15, a2, v52, (__int64)v39, v40);
    sub_168B9F0((__int64)&v136, a1, v53, 0x1C39u, 0);
    LODWORD(v125) = 1;
    v117 = sub_1587D10((__int64)&v136, (int *)&v125);
    a2 = (unsigned __int64)&v129;
    v129 = sub_EEC8C0((unsigned __int64)v15, (__int64)&v125, *(double *)a3.m128_u64);
    sub_1587DB0(v117, &v129);
    sub_15F7200(&v136);
  }
LABEL_44:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v120 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
    v54 = sub_C00A40((unsigned __int64)v119, a2, v120, (__int64)v39, v40);
    sub_168B9F0((__int64)&v136, a1, v54, 0x11FCu, 0);
    v55 = sub_1605D30((__int64)&v136, &v120);
    v129 = sub_EEC8C0((unsigned __int64)v119, (__int64)&v120, *(double *)a3.m128_u64);
    sub_1587DB0(v55, &v129);
    sub_15F7200(&v136);
    return 1;
  }
  v118 = *a1;
  v76 = sub_C00A40((unsigned __int64)v119, a2, v120, (__int64)v39, v40);
  v137 = 4605;
  v136 = off_2BC64D8;
  v138 = &v119;
  v80 = sub_1E63C20(v118, v76, v120, 1, &v136);
  if ( v80 )
    return 1;
  if ( a6 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v113 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 0x22 )
  {
    v98 = &v129;
    LOWORD(v129) = 0;
    v132 &= ~1u;
    v130 = 0;
    v131 = 0;
    v99 = sub_C3F220((unsigned __int64)a6, (__int64)&v129, (__int64)v20, 0, 0, v79);
    v80 = 0;
    if ( v99 )
    {
      v126 = v134;
      if ( v134 > 0x40 )
      {
        v98 = (__int64 *)&v133;
        sub_2205510(&v125);
        v80 = 0;
      }
      else
      {
        v125 = v133;
      }
      v127 = v135;
      if ( !v135 )
      {
        v100 = sub_1AE7A00((__int64 *)&v125);
        v80 = 0;
        if ( v100 )
        {
          v108 = sub_C00A40((unsigned __int64)a6, (__int64)v98, v101, v77, v78);
          sub_168B9F0((__int64)&v136, a1, v108, 0x1200u, 0);
          v122 = (void *)sub_EEC8C0((unsigned __int64)a6, (__int64)a1, *(double *)a3.m128_u64);
          sub_1587DB0((__int64)&v136, (__int64 *)&v122);
          sub_15F7200(&v136);
          result = 1;
          if ( v126 > 0x40 )
          {
            v105 = v125;
            if ( v125 )
              goto LABEL_126;
          }
          goto LABEL_127;
        }
      }
      if ( v126 > 0x40 && v125 )
      {
        operator delete[](v125);
        v80 = 0;
      }
    }
    if ( v131 > 1 )
    {
      sub_A4F8E0((int *)&v131);
      v80 = 0;
    }
  }
  if ( !v14 )
  {
    if ( !a7 )
      goto LABEL_79;
    if ( v113 )
    {
      v56 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v113 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned int)(v56 - 2) <= 1 || (_BYTE)v56 == 6 )
        goto LABEL_79;
      sub_168B9F0((__int64)&v136, a1, a7, 0x11FFu, 0);
      v57 = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v113 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                            - 2) <= 4u;
    }
    else
    {
      v110 = v80;
      sub_168B9F0((__int64)&v136, a1, a7, 0x11FFu, 0);
      v57 = v110;
    }
    LOBYTE(v129) = v57;
    sub_1588420((__int64)&v136, (unsigned __int8 *)&v129);
    sub_15F7200(&v136);
    return 1;
  }
  v81 = &v129;
  LOWORD(v129) = 0;
  v132 &= ~1u;
  v130 = 0;
  v131 = 0;
  if ( (unsigned __int8)sub_C3F220((unsigned __int64)v14, (__int64)&v129, (__int64)v20, 0, 0, v79) )
  {
    v123 = v134;
    if ( v134 > 0x40 )
    {
      v81 = (__int64 *)&v133;
      sub_2205510(&v122);
    }
    else
    {
      v122 = v133;
    }
    v124 = v135;
    if ( !v135 && sub_1AE7A00((__int64 *)&v122) )
    {
      v106 = sub_C00A40((unsigned __int64)v14, (__int64)v81, v82, v77, v78);
      sub_168B9F0((__int64)&v136, a1, v106, 0x11FEu, 0);
      sub_C1DEB0(&v125, (int)&v122, 10, 1u, 0, 1u, 0);
      v107 = sub_1682AF0((__int64)&v136, (__int64)&v125);
      v121 = sub_EEC8C0((unsigned __int64)v14, (__int64)&v125, *(double *)a3.m128_u64);
      sub_1587DB0(v107, &v121);
      v104 = v125;
      if ( v125 == v128 )
        goto LABEL_124;
      goto LABEL_123;
    }
    if ( v123 > 0x40 && v122 )
      operator delete[](v122);
  }
  if ( v131 > 1 )
    sub_A4F8E0((int *)&v131);
LABEL_79:
  if ( !v15 )
  {
LABEL_89:
    v85 = *(_QWORD *)(v119[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v85 + 16) == 13 && ((*(_WORD *)(v85 + 18) >> 3) & 0x1FF) == 0x1FA )
      goto LABEL_93;
    v86 = sub_19179A0(*a1, v119, 1u, v77, v78, v79, a3, a4);
    if ( v86 != 1 )
    {
      v119 = (_QWORD *)(v86 & 0xFFFFFFFFFFFFFFFELL);
LABEL_93:
      v112 = v20[2438];
      v87 = (_WORD *)sub_EEE9A0(72, v20, 8u);
      v88 = v119;
      v28 = (__int64)v87;
      *v87 = *v87 & 0xFE00 | 0x7C;
      if ( unk_2CD7484 )
      {
        v114 = v88;
        sub_EE9B50(124);
        v88 = v114;
      }
      v89 = *(_WORD *)(v28 + 1);
      *(_DWORD *)(v28 + 56) = a7;
      *(_DWORD *)(v28 + 16) = 0;
      *(_QWORD *)(v28 + 24) = v88;
      *(_WORD *)(v28 + 1) = v89 & 0xF801 | 2;
      *(_QWORD *)(v28 + 8) = v112;
      *(_DWORD *)(v28 + 60) = a8;
      *(_DWORD *)(v28 + 64) = a11;
      goto LABEL_18;
    }
    return 1;
  }
  LOWORD(v129) = 0;
  v83 = &v129;
  v132 &= ~1u;
  v130 = 0;
  v131 = 0;
  if ( !(unsigned __int8)sub_C3F220((unsigned __int64)v15, (__int64)&v129, (__int64)v20, 0, 0, v79) )
  {
LABEL_87:
    if ( v131 > 1 )
      sub_A4F8E0((int *)&v131);
    goto LABEL_89;
  }
  v123 = v134;
  if ( v134 > 0x40 )
  {
    v83 = (__int64 *)&v133;
    sub_2205510(&v122);
  }
  else
  {
    v122 = v133;
  }
  v124 = v135;
  if ( (unsigned __int8)sub_1AF0130((__int64 *)&v122) )
  {
    if ( v123 > 0x40 && v122 )
      operator delete[](v122);
    goto LABEL_87;
  }
  v102 = sub_C00A40((unsigned __int64)v15, (__int64)v83, v84, v77, v78);
  sub_168B9F0((__int64)&v136, a1, v102, 0x1201u, 0);
  sub_C1DEB0(&v125, (int)&v122, 10, 1u, 0, 1u, 0);
  v103 = sub_1682AF0((__int64)&v136, (__int64)&v125);
  v121 = sub_EEC8C0((unsigned __int64)v15, (__int64)&v125, *(double *)a3.m128_u64);
  sub_1587DB0(v103, &v121);
  v104 = v125;
  if ( v125 != v128 )
LABEL_123:
    operator delete(v104);
LABEL_124:
  sub_15F7200(&v136);
  result = 1;
  if ( v123 > 0x40 )
  {
    v105 = v122;
    if ( v122 )
    {
LABEL_126:
      operator delete[](v105);
      result = 1;
    }
  }
LABEL_127:
  if ( v131 > 1 )
  {
    sub_A4F8E0((int *)&v131);
    return 1;
  }
  return result;
}
