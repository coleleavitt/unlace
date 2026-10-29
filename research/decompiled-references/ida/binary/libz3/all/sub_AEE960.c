__int64 *__fastcall sub_AEE960(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r12d
  __int64 v12; // rax
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // edi
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // edi
  __int64 v29; // rax
  void *v30; // r14
  void *v31; // r14
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v36; // edi
  int v37; // eax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  void *v42; // r13
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  int v46; // edi
  int v47; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  void *v52; // r12
  int v53; // r13d
  __int64 v54; // r14
  __int64 v55; // r15
  int v56; // r8d
  int v57; // r9d
  int v58; // r8d
  int v59; // r9d
  int v60; // r8d
  int v61; // r9d
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rsi
  __int64 v67; // rdi
  int v70; // [rsp-8h] [rbp-108h]
  int v71; // [rsp-8h] [rbp-108h]
  int v73; // [rsp+0h] [rbp-100h]
  __int64 v74; // [rsp+0h] [rbp-100h]
  int v75; // [rsp+0h] [rbp-100h]
  int v76; // [rsp+0h] [rbp-100h]
  int v77; // [rsp+0h] [rbp-100h]
  __int64 v78; // [rsp+8h] [rbp-F8h]
  int v79; // [rsp+8h] [rbp-F8h]
  __int64 v80; // [rsp+8h] [rbp-F8h]
  int v81; // [rsp+8h] [rbp-F8h]
  int v82; // [rsp+8h] [rbp-F8h]
  int v83; // [rsp+8h] [rbp-F8h]
  int v84; // [rsp+10h] [rbp-F0h]
  int v85; // [rsp+10h] [rbp-F0h]
  int v86; // [rsp+10h] [rbp-F0h]
  int v87; // [rsp+10h] [rbp-F0h]
  int v88; // [rsp+10h] [rbp-F0h]
  __int64 *v89; // [rsp+10h] [rbp-F0h]
  int v90; // [rsp+18h] [rbp-E8h]
  int v91; // [rsp+18h] [rbp-E8h]
  int v92[2]; // [rsp+18h] [rbp-E8h]
  int v93; // [rsp+18h] [rbp-E8h]
  int v94; // [rsp+18h] [rbp-E8h]
  int v95; // [rsp+18h] [rbp-E8h]
  int v96[2]; // [rsp+18h] [rbp-E8h]
  int v97; // [rsp+20h] [rbp-E0h]
  int v98; // [rsp+20h] [rbp-E0h]
  int v99[2]; // [rsp+20h] [rbp-E0h]
  int v100; // [rsp+20h] [rbp-E0h]
  int v101; // [rsp+20h] [rbp-E0h]
  int v102; // [rsp+20h] [rbp-E0h]
  int v103[2]; // [rsp+20h] [rbp-E0h]
  int v104; // [rsp+28h] [rbp-D8h]
  __int64 v105; // [rsp+28h] [rbp-D8h]
  char v106; // [rsp+28h] [rbp-D8h]
  char v107; // [rsp+28h] [rbp-D8h]
  char v108; // [rsp+28h] [rbp-D8h]
  int v109; // [rsp+30h] [rbp-D0h]
  int v110[2]; // [rsp+30h] [rbp-D0h]
  int v111; // [rsp+30h] [rbp-D0h]
  int v112; // [rsp+30h] [rbp-D0h]
  int v113; // [rsp+30h] [rbp-D0h]
  int v114[2]; // [rsp+30h] [rbp-D0h]
  int v115; // [rsp+38h] [rbp-C8h]
  int v116; // [rsp+38h] [rbp-C8h]
  __int64 v117; // [rsp+38h] [rbp-C8h]
  int v118; // [rsp+38h] [rbp-C8h]
  int v119; // [rsp+38h] [rbp-C8h]
  int v120; // [rsp+38h] [rbp-C8h]
  int v122; // [rsp+40h] [rbp-C0h]
  _QWORD *v123; // [rsp+40h] [rbp-C0h]
  int v124; // [rsp+40h] [rbp-C0h]
  int v125; // [rsp+40h] [rbp-C0h]
  int v126; // [rsp+40h] [rbp-C0h]
  int v128; // [rsp+48h] [rbp-B8h]
  _QWORD *v129; // [rsp+48h] [rbp-B8h]
  void *v130; // [rsp+48h] [rbp-B8h]
  void *v131; // [rsp+48h] [rbp-B8h]
  void *v132; // [rsp+48h] [rbp-B8h]
  int v133; // [rsp+50h] [rbp-B0h]
  int v134; // [rsp+50h] [rbp-B0h]
  __int64 v135; // [rsp+50h] [rbp-B0h]
  int v136; // [rsp+58h] [rbp-A8h]
  int v137; // [rsp+58h] [rbp-A8h]
  __int64 v138; // [rsp+58h] [rbp-A8h]
  int v139; // [rsp+60h] [rbp-A0h]
  int v140; // [rsp+60h] [rbp-A0h]
  void *v141; // [rsp+60h] [rbp-A0h]
  int v142; // [rsp+68h] [rbp-98h]
  int v143; // [rsp+68h] [rbp-98h]
  int v144; // [rsp+68h] [rbp-98h]
  int v145; // [rsp+70h] [rbp-90h]
  int v146; // [rsp+70h] [rbp-90h]
  int v147; // [rsp+78h] [rbp-88h] BYREF
  int v148; // [rsp+80h] [rbp-80h] BYREF
  int v149[2]; // [rsp+88h] [rbp-78h] BYREF
  int v150[2]; // [rsp+90h] [rbp-70h] BYREF
  int v151[2]; // [rsp+98h] [rbp-68h] BYREF
  int v152[2]; // [rsp+A0h] [rbp-60h] BYREF
  void *v153; // [rsp+A8h] [rbp-58h]
  int v154[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v155; // [rsp+B8h] [rbp-48h]
  __int64 v156; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v157; // [rsp+C8h] [rbp-38h]

  v8 = *(_QWORD *)(a2 + 24);
  *a1 = 0;
  a1[1] = v8;
  sub_16669D0(v152, v8);
  v9 = sub_186B270(0x38u);
  v136 = v9;
  sub_13478B0(v9, v8, 1);
  v10 = sub_186B270(0x38u);
  v133 = v10;
  sub_13478B0(v10, v8, 1);
  v78 = *(_QWORD *)(a3 + 32);
  v11 = sub_15D2CD0(*(_QWORD *)v152, 5, 1, 0, 0);
  sub_180C5A0(&v147, "lo");
  v12 = sub_15E3D10(
          v8,
          (int)&v147,
          (int)&qword_18D6CD0,
          1,
          (int)v78 + 48,
          v11,
          1,
          v70,
          a4,
          v78,
          (int)a1,
          v90,
          v97,
          (int)v152,
          v8,
          v115,
          a6,
          a5,
          v133,
          v136,
          v139,
          (int)v78 + 48,
          v145,
          v147,
          v148,
          v149[0],
          v150[0],
          v151[0],
          v152[0],
          v153,
          v154[0],
          v155);
  v91 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = sub_15D2CD0(*(_QWORD *)v152, 5, 1, 0, 0);
  sub_180C5A0(&v148, "hi");
  v14 = sub_15E3D10(
          v109,
          (int)&v148,
          (int)&qword_18D6CD0,
          1,
          v142,
          v13,
          1,
          v71,
          v73,
          v79,
          v84,
          v91,
          v98,
          v104,
          v109,
          v116,
          v122,
          v128,
          v134,
          v137,
          v140,
          v142,
          v146,
          v147,
          v148,
          v149[0],
          v150[0],
          v151[0],
          v152[0],
          v153,
          v154[0],
          v155);
  *(_QWORD *)v99 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v15 = *(_QWORD *)(a3 + 112);
  if ( v15 )
  {
    v16 = *(unsigned int *)(v15 - 4);
    if ( (_DWORD)v16 )
    {
      v17 = 0;
      v117 = 4 * v16;
      do
      {
        v31 = qword_1C7F2C0;
        *(_QWORD *)v151 = **(_QWORD **)(*(_QWORD *)(a2 + 32) + 2 * v17);
        v32 = *(unsigned int *)(*v129 + v17);
        *(_QWORD *)v154 = 0;
        v155 = 0;
        v156 = 1;
        v157 = 0;
        if ( (int)v32 >= 0 )
          v154[0] = v32;
        else
          sub_1830C40(qword_1C7F2C0, v154, v32);
        sub_182CBA0(v31, &v156);
        v21 = (int)v153;
        BYTE4(v156) &= ~1u;
        LODWORD(v156) = 1;
        if ( !v153 )
        {
          sub_16669E0(v105);
          v21 = (int)v153;
        }
        v22 = sub_166A700(v21, (unsigned int)v154, 1, v18, v19, v20);
        sub_1348F50(v138, v151, v22);
        v141 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v154);
        sub_182CBA0(v141, &v156);
        v23 = qword_1C7F2C0;
        v24 = *(unsigned int *)(*v123 + v17);
        *(_QWORD *)v154 = 0;
        v155 = 0;
        v156 = 1;
        v157 = 0;
        if ( (int)v24 < 0 )
          sub_1830C40(qword_1C7F2C0, v154, v24);
        else
          v154[0] = v24;
        sub_182CBA0(v23, &v156);
        v28 = (int)v153;
        BYTE4(v156) &= ~1u;
        LODWORD(v156) = 1;
        if ( !v153 )
        {
          sub_16669E0(v105);
          v28 = (int)v153;
        }
        v29 = sub_166A700(v28, (unsigned int)v154, 1, v25, v26, v27);
        sub_1348F50(v135, v151, v29);
        v30 = qword_1C7F2C0;
        v17 += 4;
        sub_182CBA0(qword_1C7F2C0, v154);
        sub_182CBA0(v30, &v156);
      }
      while ( v117 != v17 );
    }
  }
  *(_QWORD *)v154 = 0;
  v155 = 0;
  v156 = 1;
  v157 = 0;
  sub_182CBA0(qword_1C7F2C0, &v156);
  v36 = (int)v153;
  BYTE4(v156) &= ~1u;
  LODWORD(v156) = 1;
  if ( !v153 )
  {
    sub_16669E0(v105);
    v36 = (int)v153;
  }
  v37 = sub_166A700(v36, (unsigned int)v154, 1, v33, v34, v35);
  sub_1349280(v138, v37, v38, v39, v40, v41);
  v42 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v154);
  sub_182CBA0(v42, &v156);
  *(_QWORD *)v154 = 0;
  v155 = 0;
  v156 = 1;
  v157 = 0;
  sub_182CBA0(qword_1C7F2C0, &v156);
  v46 = (int)v153;
  BYTE4(v156) &= ~1u;
  LODWORD(v156) = 1;
  if ( !v153 )
  {
    sub_16669E0(v105);
    v46 = (int)v153;
  }
  v47 = sub_166A700(v46, (unsigned int)v154, 1, v43, v44, v45);
  sub_1349280(v135, v47, v48, v49, v50, v51);
  v52 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v154);
  sub_182CBA0(v52, &v156);
  v53 = v92[0];
  sub_135F980(*(_QWORD *)(v74 + 72), *(_QWORD *)v92, v138);
  LODWORD(v52) = v99[0];
  sub_135F980(*(_QWORD *)(v74 + 72), *(_QWORD *)v99, v135);
  v54 = v80;
  v55 = *(_QWORD *)v110;
  *(_QWORD *)v149 = sub_15DB5C0(*(_QWORD *)v110, 0, *(_QWORD *)(v80 + 48));
  sub_15DC610(
    v110[0],
    v99[0],
    1,
    (int)v149,
    v56,
    v57,
    v74,
    v80,
    v85,
    v92[0],
    v99[0],
    v105,
    v110[0],
    v117,
    (int)v123,
    v129);
  *(_QWORD *)v150 = sub_15DB5C0(v55, 1, *(_QWORD *)(v54 + 48));
  sub_15DC610(v55, (int)v52, 1, (int)v150, v58, v59, v75, v81, v86, v93, v100, v106, v111, v118, v124, v130);
  sub_15E1B70(v152[0]);
  *(_QWORD *)v151 = sub_15DB5C0(v55, 1, *(_QWORD *)(v54 + 48));
  sub_15DC610(v55, v53, 1, (int)v151, v60, v61, v76, v82, v87, v94, v101, v107, v112, v119, v125, v131);
  *(_QWORD *)v154 = sub_15DB5C0(v55, 0, *(_QWORD *)(v54 + 48));
  sub_15DC610(v55, v53, 1, (int)v154, v62, v63, v77, v83, v88, v95, v102, v108, v113, v120, v126, v132);
  sub_15E1B70(v152[0]);
  v64 = sub_15E1B70(v55);
  v65 = v64;
  if ( v64 )
    ++*(_DWORD *)(v64 + 8);
  v66 = *v89;
  if ( *v89 )
  {
    v67 = v89[1];
    if ( (*(_DWORD *)(v66 + 8))-- == 1 )
      sub_15D7BC0(v67, v66);
  }
  *v89 = v65;
  if ( *(_QWORD *)v103 )
  {
    v143 = *(_DWORD *)(*(_QWORD *)v103 + 8LL);
    *(_DWORD *)(*(_QWORD *)v103 + 8LL) = v143 - 1;
    if ( v143 == 1 )
      sub_15D7BC0(*(_QWORD *)v114, *(_QWORD *)v103);
  }
  if ( *(_QWORD *)v96 )
  {
    v144 = *(_DWORD *)(*(_QWORD *)v96 + 8LL);
    *(_DWORD *)(*(_QWORD *)v96 + 8LL) = v144 - 1;
    if ( v144 == 1 )
      sub_15D7BC0(*(_QWORD *)v114, *(_QWORD *)v96);
  }
  return v89;
}

