__int64 __fastcall sub_D55BB0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  void *v25; // r15
  __int64 v26; // rbp
  int v27; // r9d
  int v28; // r9d
  __int64 v29; // r15
  int v30; // r9d
  __int64 v31; // r15
  __int64 v32; // rcx
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
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdi
  int v58; // [rsp+0h] [rbp-1A8h]
  int v59; // [rsp+0h] [rbp-1A8h]
  int v60; // [rsp+0h] [rbp-1A8h]
  __int64 v61; // [rsp+0h] [rbp-1A8h]
  __int64 v63; // [rsp+8h] [rbp-1A0h]
  __int64 v64; // [rsp+8h] [rbp-1A0h]
  __int64 v65; // [rsp+8h] [rbp-1A0h]
  int v66; // [rsp+8h] [rbp-1A0h]
  __int64 v67; // [rsp+10h] [rbp-198h]
  __int64 v68; // [rsp+10h] [rbp-198h]
  __int64 v69; // [rsp+10h] [rbp-198h]
  __int64 v70; // [rsp+10h] [rbp-198h]
  int v71; // [rsp+10h] [rbp-198h]
  int v72; // [rsp+10h] [rbp-198h]
  int v73; // [rsp+10h] [rbp-198h]
  int v74; // [rsp+10h] [rbp-198h]
  int v75; // [rsp+10h] [rbp-198h]
  int v76; // [rsp+10h] [rbp-198h]
  int v77; // [rsp+10h] [rbp-198h]
  int v78; // [rsp+10h] [rbp-198h]
  int v79; // [rsp+10h] [rbp-198h]
  int v80; // [rsp+10h] [rbp-198h]
  int v81; // [rsp+10h] [rbp-198h]
  __int64 v82; // [rsp+18h] [rbp-190h]
  __int64 v83; // [rsp+18h] [rbp-190h]
  __int64 v84; // [rsp+18h] [rbp-190h]
  __int64 v85; // [rsp+18h] [rbp-190h]
  __int64 v86; // [rsp+20h] [rbp-188h]
  __int64 v87; // [rsp+20h] [rbp-188h]
  __int64 v88; // [rsp+20h] [rbp-188h]
  __int64 v89; // [rsp+20h] [rbp-188h]
  __int64 v90; // [rsp+28h] [rbp-180h]
  __int64 v91; // [rsp+28h] [rbp-180h]
  __int64 v92; // [rsp+28h] [rbp-180h]
  __int64 v93; // [rsp+30h] [rbp-178h]
  __int64 v94; // [rsp+30h] [rbp-178h]
  __int64 v95; // [rsp+30h] [rbp-178h]
  int v96; // [rsp+30h] [rbp-178h]
  __int64 v97; // [rsp+38h] [rbp-170h]
  __int64 v98; // [rsp+38h] [rbp-170h]
  __int64 v99; // [rsp+38h] [rbp-170h]
  __int64 v100; // [rsp+38h] [rbp-170h]
  __int64 v101; // [rsp+40h] [rbp-168h]
  __int64 v102; // [rsp+40h] [rbp-168h]
  __int64 v103; // [rsp+40h] [rbp-168h]
  __int64 v104; // [rsp+40h] [rbp-168h]
  __int128 v105; // [rsp+48h] [rbp-160h]
  __int128 v106; // [rsp+48h] [rbp-160h]
  __int128 v107; // [rsp+48h] [rbp-160h]
  __int64 v108; // [rsp+48h] [rbp-160h]
  __int64 v109; // [rsp+50h] [rbp-158h]
  __int128 v110; // [rsp+58h] [rbp-150h]
  __int128 v111; // [rsp+58h] [rbp-150h]
  __int128 v112; // [rsp+58h] [rbp-150h]
  __int64 v113; // [rsp+58h] [rbp-150h]
  __int64 v114; // [rsp+60h] [rbp-148h]
  __int64 v115; // [rsp+68h] [rbp-140h]
  __int64 v116; // [rsp+70h] [rbp-138h]
  __int64 v117; // [rsp+78h] [rbp-130h]
  __int64 v118; // [rsp+80h] [rbp-128h]
  __int64 v119; // [rsp+88h] [rbp-120h]
  __int64 v120; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-C0h]
  __int64 v122; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v123; // [rsp+F8h] [rbp-B0h]
  __int64 v124; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v125; // [rsp+108h] [rbp-A0h]
  __int64 v126; // [rsp+110h] [rbp-98h] BYREF
  __int64 v127; // [rsp+118h] [rbp-90h]
  __int64 v128; // [rsp+120h] [rbp-88h] BYREF
  __int64 v129; // [rsp+128h] [rbp-80h]
  __int64 v130; // [rsp+130h] [rbp-78h] BYREF
  __int64 v131; // [rsp+138h] [rbp-70h]
  __int64 v132; // [rsp+140h] [rbp-68h] BYREF
  __int64 v133; // [rsp+148h] [rbp-60h]
  _QWORD v134[2]; // [rsp+150h] [rbp-58h] BYREF
  _QWORD v135[9]; // [rsp+160h] [rbp-48h] BYREF

  v58 = a4;
  v86 = a2[1];
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  if ( a5 )
    ++*(_DWORD *)(a5 + 8);
  if ( a6 )
    ++*(_DWORD *)(a6 + 8);
  if ( a7 )
    ++*(_DWORD *)(a7 + 8);
  v10 = sub_15E1AF0(a2[30]);
  *((_QWORD *)&v110 + 1) = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v11 = sub_15E1AF0(a2[30]);
  *((_QWORD *)&v105 + 1) = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v12 = sub_15E1A70(a2[30]);
  v117 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = sub_15E1A70(a2[30]);
  *(_QWORD *)&v105 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v14 = sub_15E1A70(a2[30]);
  v116 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v15 = sub_15E1A70(a2[30]);
  v101 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v16 = sub_15E1A70(a2[30]);
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v18 = sub_15E1A70(a2[30]);
  v97 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v118 = a2[1];
  sub_15E1AF0(a2[30]);
  v19 = sub_15E1A70(a2[30]);
  *(_QWORD *)&v110 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  if ( a6 )
    ++*(_DWORD *)(a6 + 8);
  sub_15E1AF0(a2[30]);
  v20 = sub_15E1A70(a2[30]);
  v82 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  sub_15E1AF0(a2[30]);
  v21 = sub_15E1A70(a2[30]);
  v67 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v22 = a2[1];
  v120 = 0;
  v122 = 0;
  a1[1] = v22;
  v23 = a2[1];
  *a1 = 0;
  v119 = v23;
  v121 = v23;
  v123 = v23;
  v125 = v23;
  v127 = v23;
  v129 = v23;
  v131 = v23;
  v133 = v23;
  v124 = 0;
  v126 = 0;
  v128 = 0;
  v130 = 0;
  v132 = 0;
  v134[0] = 0;
  v134[1] = 0;
  v135[0] = 1;
  v135[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v135);
  BYTE4(v135[0]) &= ~1u;
  LODWORD(v135[0]) = 1;
  v24 = sub_1674520(a2 + 29, v134, 1);
  v25 = qword_1C7F2C0;
  v26 = v24;
  sub_182CBA0(qword_1C7F2C0, v134);
  sub_182CBA0(v25, v135);
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  sub_D504D0((__int64)a2, a3, &v126);
  sub_D54E20((__int64)a2, a3, 2u, &v128);
  sub_D54E20((__int64)a2, a3, 1u, &v130);
  sub_D54E20((__int64)a2, a3, 0, &v132);
  if ( (unsigned int)sub_14E2530(
                       (int)a2 + 16,
                       v126,
                       v67,
                       v26,
                       (unsigned int)&v124,
                       v27,
                       v58,
                       a5,
                       v67,
                       v82,
                       v86,
                       (__int64)a1,
                       (__int64)(a2 + 2),
                       v97,
                       v101,
                       v105,
                       v110) == 5 )
  {
    v55 = sub_15E1BF0(a2[2]);
    v29 = v55;
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    v56 = v124;
    if ( v124 )
    {
      v57 = v125;
      v33 = (*(_DWORD *)(v124 + 8))-- == 1;
      if ( v33 )
        sub_15D7BC0(v57, v56);
    }
    v124 = v29;
  }
  else
  {
    LODWORD(v29) = v124;
  }
  if ( (unsigned int)sub_14E2530(
                       v93,
                       v128,
                       v83,
                       v29,
                       (unsigned int)&v122,
                       v28,
                       v59,
                       v63,
                       v68,
                       v83,
                       v87,
                       v90,
                       v93,
                       v98,
                       v102,
                       v106,
                       v111) == 5 )
  {
    v52 = sub_15E1BF0(a2[2]);
    v31 = v52;
    if ( v52 )
      ++*(_DWORD *)(v52 + 8);
    v53 = v122;
    if ( v122 )
    {
      v54 = v123;
      v33 = (*(_DWORD *)(v122 + 8))-- == 1;
      if ( v33 )
        sub_15D7BC0(v54, v53);
    }
    v122 = v31;
  }
  else
  {
    LODWORD(v31) = v122;
  }
  if ( (unsigned int)sub_14E2530(
                       v94,
                       v130,
                       a6,
                       v31,
                       (unsigned int)&v120,
                       v30,
                       v60,
                       v64,
                       v69,
                       v84,
                       v88,
                       v91,
                       v94,
                       v99,
                       v103,
                       v107,
                       v112) == 5 )
  {
    v49 = sub_15E1BF0(a2[2]);
    v32 = v49;
    if ( v49 )
      ++*(_DWORD *)(v49 + 8);
    v50 = v120;
    if ( v120 )
    {
      v51 = v121;
      v33 = (*(_DWORD *)(v120 + 8))-- == 1;
      if ( v33 )
      {
        v115 = v49;
        sub_15D7BC0(v51, v50);
        v32 = v115;
      }
    }
    v120 = v32;
  }
  else
  {
    v32 = v120;
  }
  sub_D81E50(v95, v132, v113, v32, v92);
  if ( v26 )
  {
    v33 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v119, v26);
  }
  v34 = v132;
  if ( v132 )
  {
    v35 = v133;
    v33 = (*(_DWORD *)(v132 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v35, v34);
  }
  v36 = v130;
  if ( v130 )
  {
    v37 = v131;
    v33 = (*(_DWORD *)(v130 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v37, v36);
  }
  v38 = v128;
  if ( v128 )
  {
    v39 = v129;
    v33 = (*(_DWORD *)(v128 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v39, v38);
  }
  v40 = v126;
  if ( v126 )
  {
    v41 = v127;
    v33 = (*(_DWORD *)(v126 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v41, v40);
  }
  v42 = v124;
  if ( v124 )
  {
    v43 = v125;
    v33 = (*(_DWORD *)(v124 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v43, v42);
  }
  v44 = v122;
  if ( v122 )
  {
    v45 = v123;
    v33 = (*(_DWORD *)(v122 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v45, v44);
  }
  v46 = v120;
  if ( v120 )
  {
    v47 = v121;
    v33 = (*(_DWORD *)(v120 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v47, v46);
  }
  if ( v70 )
  {
    v96 = *(_DWORD *)(v70 + 8);
    *(_DWORD *)(v70 + 8) = v96 - 1;
    if ( v96 == 1 )
      sub_15D7BC0(v118, v70);
  }
  if ( v85 )
  {
    v71 = *(_DWORD *)(v85 + 8);
    *(_DWORD *)(v85 + 8) = v71 - 1;
    if ( v71 == 1 )
      sub_15D7BC0(v118, v85);
  }
  if ( a6 )
  {
    v33 = (*(_DWORD *)(a6 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v118, a6);
  }
  if ( v113 )
  {
    v72 = *(_DWORD *)(v113 + 8);
    *(_DWORD *)(v113 + 8) = v72 - 1;
    if ( v72 == 1 )
      sub_15D7BC0(v118, v113);
  }
  if ( v100 )
  {
    v73 = *(_DWORD *)(v100 + 8);
    *(_DWORD *)(v100 + 8) = v73 - 1;
    if ( v73 == 1 )
      sub_15D7BC0(v89, v100);
  }
  if ( v17 )
  {
    v33 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v89, v17);
  }
  if ( v104 )
  {
    v74 = *(_DWORD *)(v104 + 8);
    *(_DWORD *)(v104 + 8) = v74 - 1;
    if ( v74 == 1 )
      sub_15D7BC0(v89, v104);
  }
  if ( v116 )
  {
    v75 = *(_DWORD *)(v116 + 8);
    *(_DWORD *)(v116 + 8) = v75 - 1;
    if ( v75 == 1 )
      sub_15D7BC0(v89, v116);
  }
  if ( v108 )
  {
    v76 = *(_DWORD *)(v108 + 8);
    *(_DWORD *)(v108 + 8) = v76 - 1;
    if ( v76 == 1 )
      sub_15D7BC0(v89, v108);
  }
  if ( v117 )
  {
    v77 = *(_DWORD *)(v117 + 8);
    *(_DWORD *)(v117 + 8) = v77 - 1;
    if ( v77 == 1 )
      sub_15D7BC0(v89, v117);
  }
  if ( v109 )
  {
    v78 = *(_DWORD *)(v109 + 8);
    *(_DWORD *)(v109 + 8) = v78 - 1;
    if ( v78 == 1 )
      sub_15D7BC0(v89, v109);
  }
  if ( v114 )
  {
    v79 = *(_DWORD *)(v114 + 8);
    *(_DWORD *)(v114 + 8) = v79 - 1;
    if ( v79 == 1 )
      sub_15D7BC0(v89, v114);
  }
  if ( a7 )
  {
    v80 = *(_DWORD *)(a7 + 8);
    *(_DWORD *)(a7 + 8) = v80 - 1;
    if ( v80 == 1 )
      sub_15D7BC0(v89, a7);
  }
  if ( a6 )
  {
    v33 = (*(_DWORD *)(a6 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v89, a6);
  }
  if ( v65 )
  {
    v81 = *(_DWORD *)(v65 + 8);
    *(_DWORD *)(v65 + 8) = v81 - 1;
    if ( v81 == 1 )
      sub_15D7BC0(v89, v65);
  }
  if ( v61 )
  {
    v66 = *(_DWORD *)(v61 + 8);
    *(_DWORD *)(v61 + 8) = v66 - 1;
    if ( v66 == 1 )
      sub_15D7BC0(v89, v61);
  }
  if ( a3 )
  {
    v33 = (*(_DWORD *)(a3 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v89, a3);
  }
  return v92;
}

