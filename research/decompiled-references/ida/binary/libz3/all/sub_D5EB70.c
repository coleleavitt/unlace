__int64 __fastcall sub_D5EB70(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  void *v10; // r14
  __int64 v11; // r15
  __int64 v12; // r14
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // r13
  __int64 v26; // rax
  int v27; // r9d
  int v28; // r9d
  int v29; // r9d
  int v30; // r9d
  int v31; // r9d
  __int64 result; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  bool v35; // zf
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
  __int64 v50; // rsi
  __int64 v51; // rdi
  void *v52; // [rsp+0h] [rbp-1F8h]
  void *v53; // [rsp+0h] [rbp-1F8h]
  __int64 v54; // [rsp+8h] [rbp-1F0h]
  __int64 v55; // [rsp+8h] [rbp-1F0h]
  __int64 v56; // [rsp+8h] [rbp-1F0h]
  int v57; // [rsp+8h] [rbp-1F0h]
  int v58; // [rsp+8h] [rbp-1F0h]
  int v59; // [rsp+8h] [rbp-1F0h]
  int v60; // [rsp+8h] [rbp-1F0h]
  int v61; // [rsp+8h] [rbp-1F0h]
  int v62; // [rsp+8h] [rbp-1F0h]
  int v63; // [rsp+8h] [rbp-1F0h]
  int v64; // [rsp+8h] [rbp-1F0h]
  int v65; // [rsp+8h] [rbp-1F0h]
  __int64 v66; // [rsp+10h] [rbp-1E8h]
  int v67; // [rsp+10h] [rbp-1E8h]
  __int64 v68; // [rsp+10h] [rbp-1E8h]
  __int64 v69; // [rsp+18h] [rbp-1E0h]
  _QWORD *v70; // [rsp+18h] [rbp-1E0h]
  int v71[2]; // [rsp+20h] [rbp-1D8h]
  int v72; // [rsp+20h] [rbp-1D8h]
  int v73[2]; // [rsp+20h] [rbp-1D8h]
  __int64 v74; // [rsp+28h] [rbp-1D0h]
  __int64 v75; // [rsp+28h] [rbp-1D0h]
  __int64 v76; // [rsp+28h] [rbp-1D0h]
  void *v77; // [rsp+30h] [rbp-1C8h]
  __int64 v78; // [rsp+30h] [rbp-1C8h]
  __int64 v79; // [rsp+30h] [rbp-1C8h]
  __int64 v80; // [rsp+38h] [rbp-1C0h]
  __int64 v81; // [rsp+38h] [rbp-1C0h]
  __int64 v82; // [rsp+38h] [rbp-1C0h]
  __int64 v83; // [rsp+40h] [rbp-1B8h]
  __int64 v84; // [rsp+40h] [rbp-1B8h]
  __int64 v85; // [rsp+48h] [rbp-1B0h]
  __int64 v86; // [rsp+48h] [rbp-1B0h]
  __int64 v87; // [rsp+48h] [rbp-1B0h]
  __int64 v88; // [rsp+50h] [rbp-1A8h]
  __int64 v89; // [rsp+50h] [rbp-1A8h]
  __int64 v90; // [rsp+50h] [rbp-1A8h]
  __int64 v91; // [rsp+58h] [rbp-1A0h]
  __int64 v92; // [rsp+58h] [rbp-1A0h]
  __int64 v93; // [rsp+58h] [rbp-1A0h]
  __int64 v94; // [rsp+60h] [rbp-198h]
  __int64 v95; // [rsp+60h] [rbp-198h]
  __int64 v96; // [rsp+60h] [rbp-198h]
  __int64 v97; // [rsp+68h] [rbp-190h]
  __int64 v98; // [rsp+68h] [rbp-190h]
  __int64 v99; // [rsp+68h] [rbp-190h]
  __int64 v100; // [rsp+70h] [rbp-188h]
  __int64 v101; // [rsp+70h] [rbp-188h]
  unsigned int v102; // [rsp+74h] [rbp-184h]
  __int64 v104; // [rsp+78h] [rbp-180h]
  __int64 *v105; // [rsp+78h] [rbp-180h]
  __int64 v106; // [rsp+80h] [rbp-178h]
  __int64 v107; // [rsp+80h] [rbp-178h]
  __int64 v108; // [rsp+80h] [rbp-178h]
  __int64 v109; // [rsp+88h] [rbp-170h]
  __int64 v110; // [rsp+88h] [rbp-170h]
  __int64 v111; // [rsp+88h] [rbp-170h]
  __int64 v112; // [rsp+90h] [rbp-168h]
  __int64 v113; // [rsp+90h] [rbp-168h]
  __int64 v114; // [rsp+90h] [rbp-168h]
  __int64 v115; // [rsp+98h] [rbp-160h]
  __int64 v116; // [rsp+A0h] [rbp-158h]
  __int64 v117; // [rsp+A8h] [rbp-150h]
  __int64 v118; // [rsp+B0h] [rbp-148h]
  __int64 v119; // [rsp+B8h] [rbp-140h]
  __int64 v120; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v121; // [rsp+C8h] [rbp-130h]
  __int64 v122; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v123; // [rsp+D8h] [rbp-120h]
  __int64 v124; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v125; // [rsp+E8h] [rbp-110h]
  __int64 v126; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v127; // [rsp+F8h] [rbp-100h]
  __int64 v128; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v129; // [rsp+108h] [rbp-F0h]
  __int64 v130; // [rsp+110h] [rbp-E8h] BYREF
  __int64 v131; // [rsp+118h] [rbp-E0h]
  __int64 v132; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v133; // [rsp+128h] [rbp-D0h]
  __int64 v134; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v135; // [rsp+138h] [rbp-C0h]
  int v136[2]; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v137; // [rsp+148h] [rbp-B0h]
  int v138[2]; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v139; // [rsp+158h] [rbp-A0h]
  __int64 v140; // [rsp+160h] [rbp-98h] BYREF
  __int64 v141; // [rsp+168h] [rbp-90h]
  __int64 v142; // [rsp+170h] [rbp-88h] BYREF
  __int64 v143; // [rsp+178h] [rbp-80h]
  __int64 v144; // [rsp+180h] [rbp-78h] BYREF
  __int64 v145; // [rsp+188h] [rbp-70h]
  __int64 v146; // [rsp+190h] [rbp-68h] BYREF
  __int64 v147; // [rsp+198h] [rbp-60h]
  __int64 v148; // [rsp+1A0h] [rbp-58h] BYREF
  __int64 v149; // [rsp+1A8h] [rbp-50h]
  __int64 v150; // [rsp+1B0h] [rbp-48h] BYREF
  __int64 v151; // [rsp+1B8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v7 = a4[1];
  HIDWORD(v100) = a3;
  v66 = *a4;
  v54 = v7;
  v120 = 0;
  v121 = v6;
  v124 = 0;
  v125 = v6;
  v122 = 0;
  v123 = v6;
  sub_D51BC0(a1, v66, &v120, &v124, &v122);
  v126 = 0;
  v80 = v120;
  v127 = v6;
  v94 = v122;
  v130 = 0;
  v115 = v123;
  v131 = v6;
  v97 = v124;
  v128 = 0;
  v116 = v125;
  v129 = v6;
  v117 = v121;
  sub_D51BC0(a1, v7, &v126, &v130, &v128);
  v148 = 0;
  v149 = 0;
  v8 = v127;
  v74 = v126;
  v150 = 1;
  v151 = 0;
  v88 = v128;
  v109 = v129;
  v91 = v130;
  v112 = v131;
  v106 = *(_QWORD *)(a1 + 8);
  sub_182CBA0(qword_1C7F2C0, &v150);
  BYTE4(v150) &= ~1u;
  LODWORD(v150) = 1;
  *(_QWORD *)v71 = sub_1674520(a1 + 232, &v148, 1);
  v77 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v148);
  sub_182CBA0(v77, &v150);
  if ( *(_QWORD *)v71 )
    ++*(_DWORD *)(*(_QWORD *)v71 + 8LL);
  v148 = 1;
  v149 = 0;
  v150 = 1;
  v151 = 0;
  sub_182CBA0(qword_1C7F2C0, &v150);
  BYTE4(v150) &= ~1u;
  LODWORD(v150) = 1;
  v9 = sub_1674520(a1 + 232, &v148, 1);
  v10 = qword_1C7F2C0;
  v11 = v9;
  v85 = v9;
  sub_182CBA0(qword_1C7F2C0, &v148);
  sub_182CBA0(v10, &v150);
  if ( v11 )
    ++*(_DWORD *)(v85 + 8);
  v12 = *(_QWORD *)(a1 + 8);
  v132 = 0;
  v133 = v12;
  v134 = 0;
  v135 = v12;
  *(_QWORD *)v136 = 0;
  v137 = v12;
  *(_QWORD *)v138 = 0;
  v139 = v12;
  sub_D5BB00(a1, v66, &v132);
  sub_D5BB00(a1, v54, &v134);
  sub_D52DE0(
    a1,
    v66,
    (int)v136,
    v13,
    v14,
    v15,
    v52,
    v54,
    v66,
    (__int64)&v148,
    v71[0],
    v74,
    (__int64)v77,
    v80,
    a2,
    v85,
    v88,
    v91,
    v94,
    v97,
    v100,
    (__int64)a4,
    v106,
    v109,
    v112);
  sub_D52DE0(
    a1,
    v55,
    (int)v138,
    v16,
    v17,
    v18,
    v53,
    v55,
    v67,
    v69,
    v72,
    v75,
    v78,
    v81,
    v83,
    v86,
    v89,
    v92,
    v95,
    v98,
    v101,
    v104,
    v107,
    v110,
    v113);
  v19 = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v20 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v21 = *(_QWORD *)(a1 + 8);
  v140 = 0;
  v118 = v21;
  v141 = v21;
  v142 = 0;
  v143 = v21;
  v144 = 0;
  v145 = v21;
  v146 = 0;
  v147 = v21;
  sub_D52AC0(a1, v68, &v140);
  sub_D52AC0(a1, v56, &v144);
  sub_D52C50(a1, v68, &v142);
  sub_D52C50(a1, v56, &v146);
  v22 = *(_QWORD *)(a1 + 8);
  sub_15E1B70(v22);
  sub_15E1A70(v22);
  v23 = sub_15E1B70(v22);
  v25 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  v119 = *(_QWORD *)(a1 + 8);
  sub_D53E50(v70, a1, v84, v68, v56, v24);
  v26 = v148;
  v148 = 0;
  v79 = v26;
  v149 = *(_QWORD *)(a1 + 8);
  sub_D5E8C0(a1, v84, v102, v105, (__int64)v70);
  sub_D51DB0(a1, v148, v68, v56, a5, v27);
  sub_D51DB0(a1, v20, v56, *a5, a5, v28);
  sub_D51DB0(a1, v25, v79, *a5, a5, v29);
  sub_D51DB0(a1, v134, v68, *a5, a5, v30);
  result = sub_D51DB0(a1, v132, v56, *a5, a5, v31);
  v33 = v148;
  if ( v148 )
  {
    v34 = v149;
    v35 = (*(_DWORD *)(v148 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v34, v33);
  }
  if ( v79 )
  {
    v57 = *(_DWORD *)(v79 + 8);
    result = (unsigned int)(v57 - 1);
    *(_DWORD *)(v79 + 8) = result;
    if ( v57 == 1 )
      result = sub_15D7BC0(v119, v79);
  }
  if ( v25 )
  {
    v35 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v118, v25);
  }
  v36 = v146;
  if ( v146 )
  {
    v37 = v147;
    v35 = (*(_DWORD *)(v146 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v37, v36);
  }
  v38 = v144;
  if ( v144 )
  {
    v39 = v145;
    v35 = (*(_DWORD *)(v144 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v39, v38);
  }
  v40 = v142;
  if ( v142 )
  {
    v41 = v143;
    v35 = (*(_DWORD *)(v142 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v41, v40);
  }
  v42 = v140;
  if ( v140 )
  {
    v43 = v141;
    v35 = (*(_DWORD *)(v140 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v43, v42);
  }
  if ( v20 )
  {
    v35 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v12, v20);
  }
  v44 = *(_QWORD *)v138;
  if ( *(_QWORD *)v138 )
  {
    v45 = v139;
    v35 = (*(_DWORD *)(*(_QWORD *)v138 + 8LL))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v45, v44);
  }
  v46 = *(_QWORD *)v136;
  if ( *(_QWORD *)v136 )
  {
    v47 = v137;
    v35 = (*(_DWORD *)(*(_QWORD *)v136 + 8LL))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v47, v46);
  }
  v48 = v134;
  if ( v134 )
  {
    v49 = v135;
    v35 = (*(_DWORD *)(v134 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v49, v48);
  }
  v50 = v132;
  if ( v132 )
  {
    v51 = v133;
    v35 = (*(_DWORD *)(v132 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v51, v50);
  }
  if ( v87 )
  {
    v58 = *(_DWORD *)(v87 + 8);
    result = (unsigned int)(v58 - 1);
    *(_DWORD *)(v87 + 8) = result;
    if ( v58 == 1 )
      result = sub_15D7BC0(v108, v87);
  }
  if ( *(_QWORD *)v73 )
  {
    v59 = *(_DWORD *)(*(_QWORD *)v73 + 8LL);
    result = (unsigned int)(v59 - 1);
    *(_DWORD *)(*(_QWORD *)v73 + 8LL) = result;
    if ( v59 == 1 )
      result = sub_15D7BC0(v108, *(_QWORD *)v73);
  }
  if ( v93 )
  {
    v60 = *(_DWORD *)(v93 + 8);
    result = (unsigned int)(v60 - 1);
    *(_DWORD *)(v93 + 8) = result;
    if ( v60 == 1 )
      result = sub_15D7BC0(v114, v93);
  }
  if ( v90 )
  {
    v61 = *(_DWORD *)(v90 + 8);
    result = (unsigned int)(v61 - 1);
    *(_DWORD *)(v90 + 8) = result;
    if ( v61 == 1 )
      result = sub_15D7BC0(v111, v90);
  }
  if ( v76 )
  {
    v62 = *(_DWORD *)(v76 + 8);
    result = (unsigned int)(v62 - 1);
    *(_DWORD *)(v76 + 8) = result;
    if ( v62 == 1 )
      result = sub_15D7BC0(v8, v76);
  }
  if ( v99 )
  {
    v63 = *(_DWORD *)(v99 + 8);
    result = (unsigned int)(v63 - 1);
    *(_DWORD *)(v99 + 8) = result;
    if ( v63 == 1 )
      result = sub_15D7BC0(v116, v99);
  }
  if ( v96 )
  {
    v64 = *(_DWORD *)(v96 + 8);
    result = (unsigned int)(v64 - 1);
    *(_DWORD *)(v96 + 8) = result;
    if ( v64 == 1 )
      result = sub_15D7BC0(v115, v96);
  }
  if ( v82 )
  {
    v65 = *(_DWORD *)(v82 + 8);
    result = (unsigned int)(v65 - 1);
    *(_DWORD *)(v82 + 8) = result;
    if ( v65 == 1 )
      return sub_15D7BC0(v117, v82);
  }
  return result;
}

