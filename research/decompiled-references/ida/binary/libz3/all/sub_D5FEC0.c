__int64 __fastcall sub_D5FEC0(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 *a5)
{
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r15
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  int v21; // r9d
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // r9d
  int v26; // r9d
  int v27; // r9d
  int v28; // r9d
  int v29; // r9d
  __int64 result; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  bool v33; // zf
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi
  void *v50; // [rsp+0h] [rbp-1C8h]
  void *v51; // [rsp+0h] [rbp-1C8h]
  __int64 v52; // [rsp+8h] [rbp-1C0h]
  __int64 v53; // [rsp+8h] [rbp-1C0h]
  __int64 v54; // [rsp+8h] [rbp-1C0h]
  int v55; // [rsp+8h] [rbp-1C0h]
  int v56; // [rsp+8h] [rbp-1C0h]
  int v57; // [rsp+8h] [rbp-1C0h]
  int v58; // [rsp+8h] [rbp-1C0h]
  int v59; // [rsp+8h] [rbp-1C0h]
  int v60; // [rsp+8h] [rbp-1C0h]
  int v61; // [rsp+8h] [rbp-1C0h]
  int v62; // [rsp+10h] [rbp-1B8h]
  int v63; // [rsp+10h] [rbp-1B8h]
  int v64[2]; // [rsp+10h] [rbp-1B8h]
  __int64 v65; // [rsp+18h] [rbp-1B0h]
  __int64 v66; // [rsp+18h] [rbp-1B0h]
  __int64 v67; // [rsp+18h] [rbp-1B0h]
  int v68; // [rsp+20h] [rbp-1A8h]
  int v69; // [rsp+20h] [rbp-1A8h]
  int v70[2]; // [rsp+20h] [rbp-1A8h]
  __int64 v71; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v72; // [rsp+28h] [rbp-1A0h]
  __int64 v73; // [rsp+30h] [rbp-198h]
  __int64 v74; // [rsp+30h] [rbp-198h]
  __int64 v75; // [rsp+30h] [rbp-198h]
  __int64 v76; // [rsp+38h] [rbp-190h]
  __int64 v77; // [rsp+38h] [rbp-190h]
  __int64 v78; // [rsp+38h] [rbp-190h]
  __int64 v79; // [rsp+40h] [rbp-188h]
  __int64 v80; // [rsp+40h] [rbp-188h]
  __int64 v81; // [rsp+40h] [rbp-188h]
  __int64 v82; // [rsp+48h] [rbp-180h]
  __int64 v83; // [rsp+48h] [rbp-180h]
  __int64 v84; // [rsp+48h] [rbp-180h]
  __int64 v85; // [rsp+50h] [rbp-178h]
  __int64 v86; // [rsp+50h] [rbp-178h]
  unsigned int v87; // [rsp+54h] [rbp-174h]
  __int64 v89; // [rsp+58h] [rbp-170h]
  __int64 v90; // [rsp+58h] [rbp-170h]
  __int64 v91; // [rsp+60h] [rbp-168h]
  __int64 v92; // [rsp+60h] [rbp-168h]
  __int64 v93; // [rsp+60h] [rbp-168h]
  __int64 v94; // [rsp+68h] [rbp-160h]
  __int64 v95; // [rsp+68h] [rbp-160h]
  __int64 v96; // [rsp+68h] [rbp-160h]
  __int64 v97; // [rsp+70h] [rbp-158h]
  __int64 v98; // [rsp+70h] [rbp-158h]
  __int64 v99; // [rsp+70h] [rbp-158h]
  __int64 v100; // [rsp+78h] [rbp-150h]
  __int64 v101; // [rsp+78h] [rbp-150h]
  __int64 v102; // [rsp+78h] [rbp-150h]
  __int64 v103; // [rsp+80h] [rbp-148h]
  __int64 v104; // [rsp+80h] [rbp-148h]
  __int64 v105; // [rsp+80h] [rbp-148h]
  __int64 v106; // [rsp+88h] [rbp-140h]
  __int64 v107; // [rsp+88h] [rbp-140h]
  __int64 v108; // [rsp+88h] [rbp-140h]
  __int64 v109; // [rsp+90h] [rbp-138h]
  __int64 v110; // [rsp+90h] [rbp-138h]
  __int64 v111; // [rsp+90h] [rbp-138h]
  __int64 v112; // [rsp+98h] [rbp-130h]
  int v113[2]; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v114; // [rsp+A8h] [rbp-120h]
  __int64 v115; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v116; // [rsp+B8h] [rbp-110h]
  __int64 v117; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v118; // [rsp+C8h] [rbp-100h]
  int v119[2]; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v120; // [rsp+D8h] [rbp-F0h]
  __int64 v121; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v122; // [rsp+E8h] [rbp-E0h]
  __int64 v123; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v124; // [rsp+F8h] [rbp-D0h]
  __int64 v125; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v126; // [rsp+108h] [rbp-C0h]
  __int64 v127; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v128; // [rsp+118h] [rbp-B0h]
  int v129[2]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v130; // [rsp+128h] [rbp-A0h]
  int v131[2]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v132; // [rsp+138h] [rbp-90h]
  __int64 v133; // [rsp+140h] [rbp-88h] BYREF
  __int64 v134; // [rsp+148h] [rbp-80h]
  __int64 v135; // [rsp+150h] [rbp-78h] BYREF
  __int64 v136; // [rsp+158h] [rbp-70h]
  __int64 v137; // [rsp+160h] [rbp-68h] BYREF
  __int64 v138; // [rsp+168h] [rbp-60h]
  __int64 v139; // [rsp+170h] [rbp-58h] BYREF
  __int64 v140; // [rsp+178h] [rbp-50h]
  __int64 v141; // [rsp+180h] [rbp-48h] BYREF
  __int64 v142; // [rsp+188h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v8 = a4[1];
  HIDWORD(v85) = a3;
  v52 = *a4;
  *(_QWORD *)v113 = 0;
  v114 = v7;
  v117 = 0;
  v118 = v7;
  v115 = 0;
  v116 = v7;
  sub_D51BC0(a1, v52, (__int64 *)v113, &v117, &v115);
  *(_QWORD *)v119 = 0;
  v68 = v113[0];
  v120 = v7;
  v79 = v115;
  v123 = 0;
  v97 = v116;
  v124 = v7;
  v82 = v117;
  v121 = 0;
  v100 = v118;
  v122 = v7;
  v103 = v114;
  sub_D51BC0(a1, v8, (__int64 *)v119, &v123, &v121);
  v125 = 0;
  v9 = v120;
  v62 = v119[0];
  v127 = 0;
  v73 = v121;
  *(_QWORD *)v129 = 0;
  v91 = v122;
  *(_QWORD *)v131 = 0;
  v76 = v123;
  v94 = v124;
  v106 = *(_QWORD *)(a1 + 8);
  v126 = v106;
  v128 = v106;
  v130 = v106;
  v132 = v106;
  sub_D5BB00(a1, v52, &v125);
  sub_D5BB00(a1, v8, &v127);
  sub_D52DE0(
    a1,
    v52,
    (int)v129,
    v10,
    v11,
    v12,
    v50,
    v52,
    v62,
    v65,
    v68,
    a2,
    v73,
    v76,
    v79,
    v82,
    v85,
    (__int64)a4,
    v91,
    v94,
    v97,
    v100,
    v103,
    v106,
    v109);
  sub_D52DE0(
    a1,
    v8,
    (int)v131,
    v13,
    v14,
    v15,
    v51,
    v53,
    v63,
    v66,
    v69,
    v71,
    v74,
    v77,
    v80,
    v83,
    v86,
    v89,
    v92,
    v95,
    v98,
    v101,
    v104,
    v107,
    v110);
  v16 = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v18 = *(_QWORD *)(a1 + 8);
  v133 = 0;
  v111 = v18;
  v134 = v18;
  v135 = 0;
  v136 = v18;
  v137 = 0;
  v138 = v18;
  v139 = 0;
  v140 = v18;
  sub_D52AC0(a1, v54, &v133);
  sub_D52AC0(a1, v8, &v137);
  sub_D52C50(a1, v54, &v135);
  sub_D52C50(a1, v8, &v139);
  v19 = *(_QWORD *)(a1 + 8);
  sub_15E1B70(v19);
  sub_15E1A70(v19);
  v20 = sub_15E1B70(v19);
  v22 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v112 = *(_QWORD *)(a1 + 8);
  sub_D53E50(&v141, a1, v72, v54, v8, v21);
  v23 = *(_QWORD *)(a1 + 8);
  v24 = v141;
  v141 = 0;
  v142 = v23;
  v67 = v24;
  sub_D5FC10(a1, v72, v87, v90, &v141);
  sub_D51DB0(a1, v141, v54, v8, a5, v25);
  sub_D51DB0(a1, v17, v8, *a5, a5, v26);
  sub_D51DB0(a1, v22, v24, *a5, a5, v27);
  sub_D51DB0(a1, v127, v54, *a5, a5, v28);
  result = sub_D51DB0(a1, v125, v8, *a5, a5, v29);
  v31 = v141;
  if ( v141 )
  {
    v32 = v142;
    v33 = (*(_DWORD *)(v141 + 8))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v32, v31);
  }
  if ( v67 )
  {
    v55 = *(_DWORD *)(v67 + 8);
    result = (unsigned int)(v55 - 1);
    *(_DWORD *)(v67 + 8) = result;
    if ( v55 == 1 )
      result = sub_15D7BC0(v112, v67);
  }
  if ( v22 )
  {
    v33 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v111, v22);
  }
  v34 = v139;
  if ( v139 )
  {
    v35 = v140;
    v33 = (*(_DWORD *)(v139 + 8))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v35, v34);
  }
  v36 = v137;
  if ( v137 )
  {
    v37 = v138;
    v33 = (*(_DWORD *)(v137 + 8))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v37, v36);
  }
  v38 = v135;
  if ( v135 )
  {
    v39 = v136;
    v33 = (*(_DWORD *)(v135 + 8))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v39, v38);
  }
  v40 = v133;
  if ( v133 )
  {
    v41 = v134;
    v33 = (*(_DWORD *)(v133 + 8))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v41, v40);
  }
  if ( v17 )
  {
    v33 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v108, v17);
  }
  v42 = *(_QWORD *)v131;
  if ( *(_QWORD *)v131 )
  {
    v43 = v132;
    v33 = (*(_DWORD *)(*(_QWORD *)v131 + 8LL))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v43, v42);
  }
  v44 = *(_QWORD *)v129;
  if ( *(_QWORD *)v129 )
  {
    v45 = v130;
    v33 = (*(_DWORD *)(*(_QWORD *)v129 + 8LL))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v45, v44);
  }
  v46 = v127;
  if ( v127 )
  {
    v47 = v128;
    v33 = (*(_DWORD *)(v127 + 8))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v47, v46);
  }
  v48 = v125;
  if ( v125 )
  {
    v49 = v126;
    v33 = (*(_DWORD *)(v125 + 8))-- == 1;
    if ( v33 )
      result = sub_15D7BC0(v49, v48);
  }
  if ( v78 )
  {
    v56 = *(_DWORD *)(v78 + 8);
    result = (unsigned int)(v56 - 1);
    *(_DWORD *)(v78 + 8) = result;
    if ( v56 == 1 )
      result = sub_15D7BC0(v96, v78);
  }
  if ( v75 )
  {
    v57 = *(_DWORD *)(v75 + 8);
    result = (unsigned int)(v57 - 1);
    *(_DWORD *)(v75 + 8) = result;
    if ( v57 == 1 )
      result = sub_15D7BC0(v93, v75);
  }
  if ( *(_QWORD *)v64 )
  {
    v58 = *(_DWORD *)(*(_QWORD *)v64 + 8LL);
    result = (unsigned int)(v58 - 1);
    *(_DWORD *)(*(_QWORD *)v64 + 8LL) = result;
    if ( v58 == 1 )
      result = sub_15D7BC0(v9, *(_QWORD *)v64);
  }
  if ( v84 )
  {
    v59 = *(_DWORD *)(v84 + 8);
    result = (unsigned int)(v59 - 1);
    *(_DWORD *)(v84 + 8) = result;
    if ( v59 == 1 )
      result = sub_15D7BC0(v102, v84);
  }
  if ( v81 )
  {
    v60 = *(_DWORD *)(v81 + 8);
    result = (unsigned int)(v60 - 1);
    *(_DWORD *)(v81 + 8) = result;
    if ( v60 == 1 )
      result = sub_15D7BC0(v99, v81);
  }
  if ( *(_QWORD *)v70 )
  {
    v61 = *(_DWORD *)(*(_QWORD *)v70 + 8LL);
    result = (unsigned int)(v61 - 1);
    *(_DWORD *)(*(_QWORD *)v70 + 8LL) = result;
    if ( v61 == 1 )
      return sub_15D7BC0(v105, *(_QWORD *)v70);
  }
  return result;
}

