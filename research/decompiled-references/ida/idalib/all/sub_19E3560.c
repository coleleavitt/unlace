void __fastcall sub_19E3560(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8,
        int a9,
        int a10)
{
  int v10; // r12d
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  bool v14; // r15
  __int64 v15; // rax
  bool v16; // cl
  bool v17; // dl
  unsigned int v18; // eax
  _QWORD *v19; // r15
  size_t v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r12d
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rbx
  char v33; // al
  bool v34; // zf
  const char *v35; // rax
  char *v36; // rax
  bool v37; // bl
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r12
  _QWORD *v46; // r12
  size_t v47; // rax
  unsigned __int8 v48; // al
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // r12d
  unsigned int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rbx
  char v58; // al
  const char *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r9
  __int64 v63; // r8
  __int64 v64; // rdx
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r12
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r12
  __int64 v86; // rax
  _QWORD *v87; // rax
  bool v88; // al
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  _QWORD *v100; // rax
  int v101; // eax
  int v102; // eax
  char *v103; // [rsp-10h] [rbp-258h]
  bool v105; // [rsp+8h] [rbp-240h]
  bool v106; // [rsp+8h] [rbp-240h]
  int v107[2]; // [rsp+8h] [rbp-240h]
  unsigned int v108; // [rsp+10h] [rbp-238h]
  __int64 v109; // [rsp+10h] [rbp-238h]
  __int64 v110; // [rsp+10h] [rbp-238h]
  bool v111; // [rsp+18h] [rbp-230h]
  unsigned __int8 v112; // [rsp+18h] [rbp-230h]
  bool v113; // [rsp+20h] [rbp-228h]
  __int64 v114; // [rsp+20h] [rbp-228h]
  int v115; // [rsp+28h] [rbp-220h]
  char v116; // [rsp+2Eh] [rbp-21Ah]
  bool v117; // [rsp+2Fh] [rbp-219h]
  bool v118; // [rsp+2Fh] [rbp-219h]
  int v119[2]; // [rsp+30h] [rbp-218h] BYREF
  __int64 v120[2]; // [rsp+38h] [rbp-210h] BYREF
  unsigned __int8 v121; // [rsp+4Fh] [rbp-1F9h] BYREF
  __int64 v122; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v123; // [rsp+58h] [rbp-1F0h] BYREF
  __int64 v124; // [rsp+60h] [rbp-1E8h] BYREF
  int v125; // [rsp+68h] [rbp-1E0h]
  int v126; // [rsp+6Ch] [rbp-1DCh]
  __int64 v127; // [rsp+70h] [rbp-1D8h]
  char v128; // [rsp+78h] [rbp-1D0h]
  _BYTE v129[72]; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v130; // [rsp+C8h] [rbp-180h]
  int v131; // [rsp+D0h] [rbp-178h]
  char v132; // [rsp+D8h] [rbp-170h]
  __int64 v133; // [rsp+E0h] [rbp-168h]
  __int64 v134[18]; // [rsp+F0h] [rbp-158h] BYREF
  int v135[2]; // [rsp+180h] [rbp-C8h] BYREF
  int v136; // [rsp+188h] [rbp-C0h]
  int v137; // [rsp+18Ch] [rbp-BCh]
  __int64 v138; // [rsp+190h] [rbp-B8h]
  unsigned __int8 *v139[11]; // [rsp+1A0h] [rbp-A8h] BYREF
  char v140; // [rsp+1F8h] [rbp-50h]
  unsigned int v141; // [rsp+200h] [rbp-48h]
  char v142; // [rsp+204h] [rbp-44h]

  v10 = a4;
  v120[0] = a2;
  *(_QWORD *)v119 = a3;
  if ( !(_DWORD)a2 || (v12 = a2, !HIDWORD(v120[0])) )
    v12 = sub_C00A40(a5, a2, a3, a4, a5);
  v13 = v12;
  v116 = sub_15F0FD0((__int64)a1, v12, 3);
  if ( v116 )
    return;
  v123 = 0;
  v122 = *(_QWORD *)(a5 + 8);
  if ( v10 == 4 && a9 == 1 )
  {
    v14 = 0;
    v15 = sub_19D20B0(*(__int64 *)v119, (__int64)&v123);
    v16 = 0;
    if ( v15 )
      return;
LABEL_39:
    v108 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v122 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL) != 11)
         + 2;
  }
  else
  {
    v16 = a9 == 4;
    v14 = v10 == 1;
    if ( v10 == 1 && a9 == 4 )
    {
      if ( sub_19D20B0(v122, (__int64)&v123) )
        return;
      v17 = v10 == 1 && a9 == 4;
      v14 = v17;
LABEL_12:
      v16 = v17;
      v108 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v122 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42;
    }
    else
    {
      v108 = 0;
      switch ( a9 )
      {
        case 0:
        case 3:
        case 4:
          v17 = a9 == 4;
          goto LABEL_12;
        case 1:
          goto LABEL_39;
        case 2:
          v16 = 0;
          v108 = 4;
          break;
        default:
          break;
      }
    }
  }
  v105 = v16;
  v18 = sub_15F0EF0((__int64)a1, v120[0], 0, a7, a8);
  v115 = v18;
  if ( v18 )
    v12 = v18;
  v113 = (unsigned int)(a10 - 1) > 2;
  if ( v10 == 1 )
  {
    v118 = v105 || (a9 & 0xFFFFFFFD) == 1;
    if ( !v118 )
      goto LABEL_35;
    sub_168B9F0((__int64)v135, a1 + 1, v13, 0xBCBu, 0);
    if ( v140 )
    {
      sub_AE9DF0(v139, v113, 3u);
    }
    else if ( v142 )
    {
      v71 = sub_168B9E0(v135);
      v72 = v138;
      if ( v138 )
        v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v138 + 32LL))(v138);
      v134[0] = v72;
      v73 = sub_1587BC0(v71, v134, v67, v68, v69, v70);
      sub_AE9DF0((unsigned __int8 **)(*v73 + 32LL * v141 + 8), v113, 3u);
    }
    LODWORD(v124) = 2;
    v41 = sub_1587D10((__int64)v135, (int *)&v124);
    v42 = sub_1605D30(v41, &v122);
    v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v119 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v42 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v42 + 32), *(_BYTE *)(v43 + 16) == 11, 3u);
    }
    else if ( *(_BYTE *)(v42 + 132) )
    {
      v111 = *(_BYTE *)(v43 + 16) == 11;
      v60 = sub_168B9E0((_QWORD *)v42);
      v63 = v111;
      v64 = v60;
      v65 = *(_QWORD **)(v42 + 16);
      if ( v65 )
      {
        v114 = v64;
        v65 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, _QWORD, bool))(*v65 + 32LL))(
                          v65,
                          &v122,
                          v64,
                          *v65,
                          v111);
        v64 = v114;
        v63 = v111;
      }
      v112 = v63;
      v134[0] = (__int64)v65;
      v66 = sub_1587BC0(v64, v134, v64, v61, v63, v62);
      sub_AE9DF0((unsigned __int8 **)(*v66 + 32LL * *(unsigned int *)(v42 + 128) + 8), v112, 3u);
    }
    v44 = sub_1605D30(v42, (__int64 *)v119);
    v45 = sub_15884C0(v44, v120);
    v134[0] = sub_EEC8C0(a5, (__int64)v120, *(double *)a7.m128i_i64);
    sub_1587DB0(v45, v134);
    sub_15F7200(v135);
    v46 = (_QWORD *)a1[92];
    v47 = j__strlen("CFBridgingRelease");
    v48 = sub_19D2630(v46, "CFBridgingRelease", v47);
    LOBYTE(v138) = 1;
    v121 = v48;
    v49 = a1[31];
    v137 = 1;
    *(_QWORD *)v135 = v49;
    v136 = a9;
    v50 = sub_BFB9F0(a5);
    v54 = sub_19CDB40((__int64)v135, v50, *(double *)a7.m128i_i64);
    if ( v54 == 3 )
    {
      if ( a10 != 3 )
        goto LABEL_53;
    }
    else
    {
      if ( a10 != 3 )
      {
        sub_168B9F0((__int64)v135, a1 + 1, v12, 0x168Eu, 0);
        v50 = (__int64)v135;
        sub_19D19D0((__int64)a1, (__int64 *)v135, a10, v115, *(__int64 *)v119, a5, a7, a8, a6, "__bridge ", nullptr);
        sub_15F7200(v135);
        if ( v54 == 2 )
          return;
LABEL_53:
        if ( !v121 )
        {
          v55 = v12;
LABEL_55:
          sub_168B9F0((__int64)v135, a1 + 1, v55, 0x1690u, 0);
          v56 = sub_1605D30((__int64)v135, &v122);
          v57 = sub_15890D0(v56, &v121);
LABEL_56:
          v124 = *(_QWORD *)v57;
          v125 = *(_DWORD *)(v57 + 8);
          v126 = *(_DWORD *)(v57 + 12);
          v127 = *(_QWORD *)(v57 + 16);
          v58 = *(_BYTE *)(v57 + 24);
          v132 = 0;
          v34 = *(_BYTE *)(v57 + 120) == 0;
          v128 = v58;
          if ( !v34 )
          {
            sub_FC70F0((__int64)v129, v57 + 32);
            v130 = *(_QWORD *)(v57 + 104);
            v102 = *(_DWORD *)(v57 + 112);
            v132 = 1;
            v131 = v102;
          }
          v133 = *(_QWORD *)(v57 + 128);
          if ( v118 )
            sub_15F7200(v135);
          if ( v116 )
            sub_15F7200(v134);
          v59 = "CFBridgingRelease";
          if ( !v121 )
            v59 = nullptr;
          v103 = (char *)v59;
          v36 = "__bridge_transfer ";
          goto LABEL_65;
        }
LABEL_68:
        v55 = sub_C00A40(a5, v50, v51, v52, v53);
        goto LABEL_55;
      }
      sub_168B9F0((__int64)v135, a1 + 1, v12, 0x1691u, 0);
      v50 = (__int64)v135;
      sub_19D19D0((__int64)a1, (__int64 *)v135, 3, v115, *(__int64 *)v119, a5, a7, a8, a6, "__bridge ", nullptr);
      sub_15F7200(v135);
      if ( v54 == 2 )
        return;
    }
    if ( !v121 )
    {
      sub_168B9F0((__int64)v134, a1 + 1, v12, 0x1693u, 0);
      v57 = sub_1605D30((__int64)v134, &v122);
      v118 = 0;
      v116 = v105 || (a9 & 0xFFFFFFFD) == 1;
      goto LABEL_56;
    }
    goto LABEL_68;
  }
  if ( a9 != 1 || !(v117 = v14 || (unsigned int)(v10 - 3) <= 1) )
  {
LABEL_35:
    sub_168B9F0((__int64)v135, a1 + 1, v13, 0xBD8u, 0);
    v37 = (unsigned int)(a10 - 1) <= 2;
    if ( v140 )
    {
      sub_AE9DF0(v139, v37, 2u);
    }
    else
    {
      if ( !v142 )
      {
LABEL_37:
        v38 = sub_1605D30((__int64)v135, &v122);
        v39 = sub_1605D30(v38, (__int64 *)v119);
        v40 = sub_15884C0(v39, v120);
        v134[0] = sub_EEC8C0(a5, (__int64)v120, *(double *)a7.m128i_i64);
        sub_1587DB0(v40, v134);
        sub_15F7200(v135);
        return;
      }
      v85 = sub_168B9E0(v135);
      v86 = v138;
      if ( v138 )
        v86 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v138 + 32LL))(v138);
      v134[0] = v86;
      v87 = sub_1587BC0(v85, v134, v81, v82, v83, v84);
      sub_AE9DF0((unsigned __int8 **)(*v87 + 32LL * v141 + 8), v37, 2u);
    }
    if ( v140 )
    {
      sub_AE9DF0(v139, v108, 3u);
    }
    else if ( v142 )
    {
      v76 = sub_168B9E0(v135);
      v79 = v138;
      if ( v138 )
        v79 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v138 + 32LL))(v138);
      v134[0] = v79;
      v80 = sub_1587BC0(v76, v134, v74, v75, v77, v78);
      sub_AE9DF0((unsigned __int8 **)(*v80 + 32LL * v141 + 8), v108, 3u);
    }
    goto LABEL_37;
  }
  v19 = (_QWORD *)a1[92];
  v20 = j__strlen("CFBridgingRetain");
  v121 = sub_19D2630(v19, "CFBridgingRetain", v20);
  sub_168B9F0((__int64)v135, a1 + 1, v13, 0xBCBu, 0);
  if ( v140 )
  {
    sub_AE9DF0(v139, v113, 3u);
  }
  else
  {
    if ( !v142 )
      goto LABEL_20;
    v90 = sub_168B9E0(v135);
    v93 = v138;
    if ( v138 )
    {
      *(_QWORD *)v107 = v90;
      v93 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v138 + 32LL))(v138);
      v90 = *(_QWORD *)v107;
    }
    v134[0] = v93;
    v94 = sub_1587BC0(v90, v134, v89, v90, v91, v92);
    sub_AE9DF0((unsigned __int8 **)(*v94 + 32LL * v141 + 8), v113, 3u);
  }
  v106 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v122 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 11;
  if ( v140 )
  {
    sub_AE9DF0(v139, v106, 3u);
  }
  else if ( v142 )
  {
    v96 = sub_168B9E0(v135);
    v99 = v138;
    if ( v138 )
    {
      v110 = v96;
      v99 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v138 + 32LL))(v138);
      v96 = v110;
    }
    v134[0] = v99;
    v100 = sub_1587BC0(v96, v134, v95, v96, v97, v98);
    sub_AE9DF0((unsigned __int8 **)(*v100 + 32LL * v141 + 8), v106, 3u);
  }
LABEL_20:
  v21 = sub_1605D30((__int64)v135, &v122);
  LODWORD(v124) = 2;
  v22 = sub_1587D10(v21, (int *)&v124);
  v23 = sub_1605D30(v22, (__int64 *)v119);
  v109 = sub_15884C0(v23, v120);
  v134[0] = sub_EEC8C0(a5, (__int64)v120, *(double *)a7.m128i_i64);
  sub_1587DB0(v109, v134);
  sub_15F7200(v135);
  v24 = a1[31];
  v137 = v10;
  v136 = 1;
  *(_QWORD *)v135 = v24;
  LOBYTE(v138) = 1;
  v25 = sub_BFB9F0(a5);
  v29 = sub_19CDB40((__int64)v135, v25, *(double *)a7.m128i_i64);
  if ( v29 == 3 )
  {
    if ( a10 != 3 )
    {
LABEL_23:
      if ( !v121 )
      {
        v30 = v12;
LABEL_25:
        sub_168B9F0((__int64)v135, a1 + 1, v30, 0x168Fu, 0);
        v31 = sub_1605D30((__int64)v135, (__int64 *)v119);
        v32 = sub_15890D0(v31, &v121);
LABEL_26:
        v124 = *(_QWORD *)v32;
        v125 = *(_DWORD *)(v32 + 8);
        v126 = *(_DWORD *)(v32 + 12);
        v127 = *(_QWORD *)(v32 + 16);
        v33 = *(_BYTE *)(v32 + 24);
        v132 = 0;
        v34 = *(_BYTE *)(v32 + 120) == 0;
        v128 = v33;
        if ( !v34 )
        {
          sub_FC70F0((__int64)v129, v32 + 32);
          v130 = *(_QWORD *)(v32 + 104);
          v101 = *(_DWORD *)(v32 + 112);
          v132 = 1;
          v131 = v101;
        }
        v133 = *(_QWORD *)(v32 + 128);
        if ( v117 )
          sub_15F7200(v135);
        if ( v116 )
          sub_15F7200(v134);
        v35 = "CFBridgingRetain";
        if ( !v121 )
          v35 = nullptr;
        v103 = (char *)v35;
        v36 = "__bridge_retained ";
LABEL_65:
        sub_19D19D0((__int64)a1, &v124, a10, v115, *(__int64 *)v119, a5, a7, a8, a6, v36, v103);
        sub_15F7200(&v124);
        return;
      }
LABEL_75:
      v30 = sub_C00A40(a5, v25, v26, v27, v28);
      goto LABEL_25;
    }
    goto LABEL_84;
  }
  if ( a10 == 3 )
  {
    sub_168B9F0((__int64)v135, a1 + 1, v12, 0x1691u, 0);
    v25 = (__int64)v135;
    sub_19D19D0((__int64)a1, (__int64 *)v135, 3, v115, *(__int64 *)v119, a5, a7, a8, a6, "__bridge ", nullptr);
    sub_15F7200(v135);
    if ( v29 == 2 )
      return;
LABEL_84:
    if ( !v121 )
    {
      sub_168B9F0((__int64)v134, a1 + 1, v12, 0x1692u, 0);
      v32 = sub_1605D30((__int64)v134, (__int64 *)v119);
      v88 = v117;
      v117 = 0;
      v116 = v88;
      goto LABEL_26;
    }
    goto LABEL_75;
  }
  sub_168B9F0((__int64)v135, a1 + 1, v12, 0x168Eu, 0);
  v25 = (__int64)v135;
  sub_19D19D0((__int64)a1, (__int64 *)v135, a10, v115, *(__int64 *)v119, a5, a7, a8, a6, "__bridge ", nullptr);
  sub_15F7200(v135);
  if ( v29 != 2 )
    goto LABEL_23;
}
