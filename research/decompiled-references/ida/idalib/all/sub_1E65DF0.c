__int64 __fastcall sub_1E65DF0(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        void (__fastcall ***a4)(_QWORD, __int64 *, _QWORD, __int64),
        double a5,
        double a6)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rbx
  int v33; // eax
  char v34; // dl
  __int64 v35; // rax
  _QWORD *v36; // rbp
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v52; // rbp
  unsigned int *v53; // r14
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdi
  unsigned int *v59; // rbp
  unsigned int v60; // edx
  int v61; // eax
  unsigned int v62; // r14d
  _QWORD *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _QWORD *v69; // rbp
  __int64 v70; // rsi
  _QWORD *v71; // rbp
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  _QWORD *v77; // rbp
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned __int64 v80; // rbp
  char v81; // al
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // eax
  _QWORD *v85; // rbp
  __int64 v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  _QWORD *v91; // r13
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdi
  __int64 v97; // rbp
  __int64 v98; // rsi
  __int64 v99; // rbp
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdi
  __int64 v109; // r13
  unsigned __int64 v110; // rax
  __int64 v111; // rbp
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  unsigned __int64 v115; // rbp
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rdx
  unsigned __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // r14
  __int64 v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // [rsp+8h] [rbp-F0h] BYREF
  _QWORD *v133; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v134; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v135; // [rsp+28h] [rbp-D0h] BYREF
  __int64 (__fastcall **v136)(); // [rsp+30h] [rbp-C8h] BYREF
  int v137; // [rsp+38h] [rbp-C0h]
  __int64 *v138; // [rsp+40h] [rbp-B8h]

  v8 = a1[31];
  v132 = a3;
  v9 = sub_A71450(v8, a3);
  if ( !(unsigned __int8)sub_1E63330((__int64)a1, a2, v9, (__int64 *)((char *)&dword_0 + 1), 0, v10)
    || (v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v15 + 16) == 13)
    && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v62 = 0;
    if ( sub_F67430(*(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL), a1[31], v11, v12, v13, v14) )
      return v62;
  }
  (**a4)(a4, a1, a2, v132);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 6 )
    return 1;
  v20 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v20 + 16) != 48 )
    return 1;
  v133 = sub_F60F10(*v20, (__int64)a1, v16, v17, v18, v19);
  v137 = 6117;
  v136 = off_2BE44A8;
  v138 = &v132;
  if ( (unsigned __int8)sub_1E63C20((__int64)a1, a2, v9, (__int64 *)((char *)&dword_0 + 1), (__int64)&v136, v21) )
    return 1;
  v26 = v133;
  v27 = v133[16];
  if ( v27 && (*(_BYTE *)(v27 + 10) & 0x20) != 0 && (*(_BYTE *)(a1[29] + 1) & 0x40) == 0 )
  {
    sub_168B9F0((__int64)&v136, a1 + 1, *((_DWORD *)v133 + 6), 0x17E6u, 0);
    sub_15F7200(&v136);
    return 1;
  }
  sub_7052B0((__int64 *)(v133[13] + 96LL), v133[13], v22, v23, v24, v25);
  if ( *(_DWORD *)(v26[16] + 20LL) )
  {
    v32 = a1 + 1;
    sub_168B9F0((__int64)&v136, v32, *((_DWORD *)v133 + 6), 0x17EBu, 0);
    v33 = 1;
    v34 = *((_BYTE *)v133 + 73) >> 5;
    if ( v34 != 1 )
      v33 = 2 * (v34 != 0);
    LODWORD(v134) = v33;
    v35 = sub_16CF160((__int64)&v136, (unsigned int *)&v134);
    v36 = v133;
    v37 = v35;
    sub_7052B0((__int64 *)(v133[13] + 96LL), v133[13], v38, v39, v40, v41);
    LODWORD(v135) = *(_DWORD *)(v36[16] + 20LL);
    sub_16CF160(v37, (unsigned int *)&v135);
    sub_15F7200(&v136);
    v42 = v133;
    sub_7052B0((__int64 *)(v133[13] + 96LL), v133[13], v43, v44, v45, v46);
    v51 = v42[16];
    if ( (*(_BYTE *)(v51 + 32) & 1) != 0 )
      v52 = sub_B969C0(v51);
    else
      v52 = *(_QWORD *)(v51 + 32);
    sub_7052B0((__int64 *)(v42[13] + 96LL), v42[13], v47, v48, v49, v50);
    v53 = (unsigned int *)(v52 + 24LL * *(unsigned int *)(v42[16] + 20LL));
    sub_7052B0((__int64 *)(v42[13] + 96LL), v42[13], v54, v55, v56, v57);
    v58 = v42[16];
    if ( (*(_BYTE *)(v58 + 32) & 1) != 0 )
      v59 = (unsigned int *)sub_B969C0(v58);
    else
      v59 = *(unsigned int **)(v58 + 32);
    while ( v53 != v59 )
    {
      v60 = *v59;
      v59 += 6;
      sub_168B9F0((__int64)&v136, v32, v60, 0x16D6u, 0);
      v61 = *(v59 - 5);
      LODWORD(v135) = *(v59 - 6);
      HIDWORD(v135) = v61;
      sub_1587DB0((__int64)&v136, &v135);
      sub_15F7200(&v136);
    }
    return 1;
  }
  v64 = v133;
  sub_7052B0((__int64 *)(v133[13] + 96LL), v133[13], v28, v29, v30, v31);
  if ( *(char *)v64[16] >= 0 )
  {
    v69 = v133;
    v70 = v133[13];
    sub_7052B0((__int64 *)(v70 + 96), v70, v65, v66, v67, v68);
    if ( (*(_BYTE *)(v69[16] + 8LL) & 1) == 0 )
    {
      if ( !(unsigned __int8)sub_B9BFC0((__int64)v69, v70, v65, v66, v67, v68)
        || (sub_7052B0((__int64 *)(v69[13] + 96LL), v69[13], v65, v66, v67, v68), (*(_BYTE *)(v69[16] + 8LL) & 4) == 0)
        || *((_BYTE *)v69 + 73) >> 5 == 2
        && (sub_7052B0((__int64 *)(v69[13] + 96LL), v69[13], v65, v66, v67, v68), *(char *)(v69[16] + 2LL) >= 0)
        && (sub_7052B0((__int64 *)(v69[13] + 96LL), v69[13], v65, v66, v67, v68), (*(_BYTE *)(v69[16] + 2LL) & 0x10) != 0)
        && *(char *)(sub_B8C5D0((__int64)v69) + 1) >= 0 )
      {
        if ( (v85 = v133,
              v86 = v133[13],
              sub_7052B0((__int64 *)(v86 + 96), v86, v65, v66, v67, v68),
              (*(_BYTE *)(v85[16] + 9LL) & 1) == 0)
          && !(unsigned __int8)sub_B9BFC0((__int64)v85, v86, v87, v88, v89, v90)
          || (sub_7052B0((__int64 *)(v85[13] + 96LL), v85[13], v87, v88, v89, v90), *(char *)(v85[16] + 4LL) >= 0) )
        {
          v62 = 1;
          sub_168B9F0((__int64)&v136, a1 + 1, *((_DWORD *)v133 + 6), 0x17E7u, 0);
          sub_184B8A0((__int64)&v136, (__int64 *)&v133);
          sub_15F7200(&v136);
          return v62;
        }
      }
    }
  }
  v71 = v133;
  v72 = v133[13];
  sub_7052B0((__int64 *)(v72 + 96), v72, v65, v66, v67, v68);
  if ( (*(_BYTE *)(v71[16] + 8LL) & 0x20) == 0 )
  {
    v77 = v133;
    if ( *(char *)(a1[29] + 1) < 0 )
    {
      LOBYTE(v84) = sub_B9C260((__int64)v133);
      v62 = v84 ^ 1;
    }
    else
    {
      v72 = v133[13];
      sub_7052B0((__int64 *)(v72 + 96), v72, v73, v74, v75, v76);
      v62 = (*(_WORD *)(v77[16] + 4LL) & 0x1000) == 0;
    }
    if ( (_BYTE)v62 )
    {
      v80 = sub_B97300((__int64)v133);
      if ( v80 )
      {
        if ( *(char *)(a1[29] + 1) < 0 )
        {
          sub_168B9F0((__int64)&v136, a1 + 1, *(_DWORD *)(v80 + 24), 0x17E8u, 0);
          sub_184B8A0((__int64)&v136, (__int64 *)&v133);
          sub_15F7200(&v136);
          return v62;
        }
        v81 = sub_B967A0(v80, v72, v78, v79);
        sub_168B9F0((__int64)&v136, a1 + 1, *(_DWORD *)(v80 + 24), (v81 != 0) + 6121, 0);
        sub_184B8A0((__int64)&v136, (__int64 *)&v133);
        sub_15F7200(&v136);
        if ( !(unsigned __int8)sub_B967A0(v80, (__int64)&v133, v82, v83) )
        {
          sub_188A5F0((__int64)a1, v80, 5, 0, 1u, a5, a6);
          return v62;
        }
      }
    }
    return 1;
  }
  v91 = v133;
  sub_7052B0((__int64 *)(v133[13] + 96LL), v133[13], v73, v74, v75, v76);
  v96 = v91[16];
  if ( (*(_BYTE *)(v96 + 24) & 1) != 0 )
    v97 = sub_B96980(v96);
  else
    v97 = *(_QWORD *)(v96 + 24);
  sub_7052B0((__int64 *)(v91[13] + 96LL), v91[13], v92, v93, v94, v95);
  v98 = v91[13];
  v99 = v97 + 24LL * *(unsigned int *)(v91[16] + 16LL);
  sub_7052B0((__int64 *)(v98 + 96), v98, v100, v101, v102, v103);
  v108 = v91[16];
  if ( (*(_BYTE *)(v108 + 24) & 1) != 0 )
    v109 = sub_B96980(v108);
  else
    v109 = *(_QWORD *)(v108 + 24);
  if ( v109 != v99 )
  {
    while ( 1 )
    {
      v110 = *(_QWORD *)(**(_QWORD **)(v109 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v110 + 8) & 0xF) != 0 )
        v110 = sub_F64F00(**(_QWORD **)(v109 + 16), v98, v104, v105, v106);
      v98 = a1[31];
      if ( !sub_F67430(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL), v98, v104, v105, v106, v107) )
        break;
      v109 += 24;
      if ( v109 == v99 )
        goto LABEL_52;
    }
    v62 = 1;
    sub_168B9F0((__int64)&v136, a1 + 1, *(_DWORD *)v109, 0x17E3u, 0);
    v111 = sub_184B8A0((__int64)&v136, (__int64 *)&v133);
    v135 = **(_QWORD **)(v109 + 16);
    v134 = sub_6D5440(&v135);
    v112 = sub_162B6D0(v111, (__int64 *)&v134);
    v135 = *(_QWORD *)v109;
    sub_1587DB0(v112, &v135);
    sub_15F7200(&v136);
    return v62;
  }
LABEL_52:
  v115 = sub_B7E900((__int64)v133, v98, v104, v105, v106, v107);
  if ( !v115 )
    return 1;
LABEL_53:
  if ( sub_F67430(*(_QWORD *)(*(_QWORD *)(v115 + 48) & 0xFFFFFFFFFFFFFFF0LL), a1[31], v113, v114, v116, v117) )
  {
    v118 = *(_QWORD *)(v115 + 48);
    if ( (v118 & 4) == 0 && (byte_8[v118 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
    {
      while ( 1 )
      {
        v124 = *(_QWORD *)(v115 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v115 = v124;
        if ( !v124 )
          return 1;
        if ( (*(_BYTE *)(v124 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_53;
      }
    }
  }
  sub_168B9F0((__int64)&v136, a1 + 1, *(_DWORD *)(v115 + 24), 0x17E4u, 0);
  v119 = sub_184B8A0((__int64)&v136, (__int64 *)&v133);
  v120 = v119;
  if ( *(_BYTE *)(v119 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v119 + 32), v115, 0xAu);
  }
  else if ( *(_BYTE *)(v119 + 132) )
  {
    v129 = sub_168B9E0((_QWORD *)v119);
    v130 = *(_QWORD *)(v120 + 16);
    if ( v130 )
      v130 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v130 + 32LL))(*(_QWORD *)(v120 + 16));
    v135 = v130;
    v131 = sub_1587BC0(v129, &v135, v125, v126, v127, v128);
    sub_AE9DF0((unsigned __int8 **)(*v131 + 32LL * *(unsigned int *)(v120 + 128) + 8), v115, 0xAu);
  }
  v135 = *(_QWORD *)(v115 + 48);
  v121 = sub_162B6D0(v120, &v135);
  v122 = *(_QWORD *)(v115 + 48);
  LOBYTE(v123) = 1;
  if ( (v122 & 4) == 0 )
    v123 = (*(_QWORD *)&byte_8[v122 & 0xFFFFFFFFFFFFFFF0LL] >> 2) & 1LL;
  LOBYTE(v134) = v123;
  v62 = 1;
  sub_1588420(v121, (unsigned __int8 *)&v134);
  sub_15F7200(&v136);
  return v62;
}
