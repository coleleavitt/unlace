/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140015F80
// Address: 0x0000000140015F80

//----- (0000000140015F80) ----------------------------------------------------
__int64 __fastcall sub_140015F80(__int64 a1)
{
  void *v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 *v7; // r15
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 *v13; // rbp
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 *v19; // r15
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r13
  __int64 v24; // rbp
  __int64 *v25; // rsi
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r10
  int v30; // eax
  __int64 v31; // rax
  __int64 *v32; // rbp
  __int64 v33; // r10
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rbp
  __int64 *v37; // r15
  __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r13
  __int64 v42; // rbp
  __int64 *v43; // rsi
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r15
  __int64 v48; // r13
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r13
  __int64 v55; // rbp
  unsigned __int64 v56; // r8
  __int64 *v57; // r15
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r13
  __int64 v61; // rsi
  unsigned __int64 v62; // r8
  __int64 *v63; // rbp
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r13
  __int64 v67; // rsi
  unsigned __int64 v68; // r8
  __int64 *v69; // r15
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r13
  __int64 v73; // rsi
  unsigned __int64 v74; // r8
  __int64 *v75; // rbp
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r13
  __int64 v79; // rsi
  unsigned __int64 v80; // r8
  __int64 *v81; // r15
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r13
  __int64 v85; // rsi
  unsigned __int64 v86; // r8
  __int64 *v87; // rbp
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r13
  __int64 v91; // rsi
  unsigned __int64 v92; // r8
  __int64 *v93; // r15
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r13
  __int64 v97; // rsi
  __int64 v98; // r12
  __int64 *v99; // rbp
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rax
  __int64 *v103; // r14
  __int64 v104; // rax
  __int64 *v105; // rsi
  __int64 v106; // r10
  __int64 v107; // rax
  __int64 *v108; // r14
  __int64 v109; // r10
  __int64 v110; // rax
  __int64 *v111; // rsi
  __int64 v112; // r10
  __int64 v113; // rax
  __int64 *v114; // r14
  __int64 v115; // r10
  __int64 v116; // rax
  __int64 *v117; // rsi
  __int64 v118; // r10
  __int64 v119; // rax
  __int64 *v120; // r14
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 *v124; // r14
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 *v127; // rsi
  __int64 v128; // r10
  __int64 v129; // rax
  __int64 *v130; // r14
  __int64 v131; // rax
  __int64 *v132; // r15
  __int64 v133; // rax
  __int64 *v134; // rsi
  __int64 v135; // rax
  __int64 *v136; // r14
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rbp
  __int64 v140; // rsi
  __int64 v141; // r15
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // rax
  __int64 v145; // rsi
  unsigned __int64 v146; // rbp
  char **v147; // r14
  __int64 v148; // rbp
  __int64 v149; // rsi
  unsigned __int64 v150; // r8
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 result; // rax
  char ***v154; // r14
  __int64 v155; // rbp
  unsigned __int64 v156; // r8
  __int64 v157; // rdx
  __int64 v158; // r8

  v2 = operator new(0x3E8u);
  v3 = 0;
  if ( v2 )
    v4 = sub_14000A0C0((__int64)v2, a1 + 504, a1);
  else
    v4 = 0;
  *(_QWORD *)(a1 + 496) = v4;
  sub_14000D530(v4, 1, (__int64)&off_1400C6FA0, 344, 10, 10, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 1, (__int64)&off_1400C6FC0, 360, 10, 10, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 1, (__int64)&off_1400C6FE0, 376, 10, 10, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 1, (__int64)&off_1400C7000, 392, 10, 10, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 1, (__int64)&off_1400C7020, 408, 10, 10, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 1, (__int64)&off_1400C7040, 424, 10, 10, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 1, (__int64)&off_1400C7060, 440, 10, 10, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 1, (__int64)&off_1400C7080, 456, 10, 10, -1);
  v5 = *(_QWORD *)(a1 + 496);
  if ( byte_1400C70AD == 1 )
  {
    v6 = 2;
    v7 = (__int64 *)(a1 + 496);
  }
  else
  {
    if ( byte_1400C70AD == 2 )
    {
      v6 = 4;
    }
    else
    {
      v6 = 0;
      if ( byte_1400C70AD == 7 )
        v6 = 8;
      if ( !v6 )
        goto LABEL_363;
    }
    v7 = (__int64 *)(a1 + 496);
  }
  v8 = *(_QWORD *)(v5 + 24) + 1LL;
  if ( v8 <= *(_QWORD *)(v5 + 32) )
    v7 = (__int64 *)(a1 + 496);
  else
    *(_QWORD *)(v5 + 16) = sub_14005ABE0(v5 + 16, *(void **)(v5 + 16), v8, 0x28u);
  v9 = *(_QWORD *)(v5 + 24);
  v10 = *(_QWORD *)(v5 + 16) + 40 * v9;
  *(_QWORD *)(v5 + 24) = v9 + 1;
  *(_DWORD *)v10 = 0;
  *(_QWORD *)(v10 + 8) = -1;
  *(_QWORD *)(v10 + 16) = 988;
  *(_QWORD *)(v10 + 24) = 4;
  *(_QWORD *)(v10 + 32) = v6;
  sub_14000D730(
    *(_QWORD *)(v5 + 8),
    off_1400C70A0,
    dword_1400C70A8,
    byte_1400C70AD,
    byte_1400C70AC,
    (const void **)off_1400C70B0,
    qword_1400C70B8);
  v11 = *v7;
  if ( byte_1400C70CD == 1 )
  {
    v12 = 2;
    v13 = v7;
  }
  else
  {
    if ( byte_1400C70CD == 2 )
    {
      v12 = 4;
    }
    else
    {
      v12 = 0;
      if ( byte_1400C70CD == 7 )
        v12 = 8;
      if ( !v12 )
        goto LABEL_363;
    }
    v13 = (__int64 *)(a1 + 496);
  }
  v14 = *(_QWORD *)(v11 + 24) + 1LL;
  if ( v14 <= *(_QWORD *)(v11 + 32) )
    v13 = v7;
  else
    *(_QWORD *)(v11 + 16) = sub_14005ABE0(v11 + 16, *(void **)(v11 + 16), v14, 0x28u);
  v15 = *(_QWORD *)(v11 + 24);
  v16 = *(_QWORD *)(v11 + 16) + 40 * v15;
  *(_QWORD *)(v11 + 24) = v15 + 1;
  *(_DWORD *)v16 = 0;
  *(_QWORD *)(v16 + 8) = -1;
  *(_QWORD *)(v16 + 16) = 992;
  *(_QWORD *)(v16 + 24) = 4;
  *(_QWORD *)(v16 + 32) = v12;
  sub_14000D730(
    *(_QWORD *)(v11 + 8),
    off_1400C70C0,
    dword_1400C70C8,
    byte_1400C70CD,
    byte_1400C70CC,
    (const void **)off_1400C70D0,
    qword_1400C70D8);
  v17 = *v13;
  if ( byte_1400C70ED == 1 )
  {
    v18 = 2;
    v19 = v13;
  }
  else
  {
    if ( byte_1400C70ED == 2 )
    {
      v18 = 4;
    }
    else
    {
      v18 = 0;
      if ( byte_1400C70ED == 7 )
        v18 = 8;
      if ( !v18 )
        goto LABEL_363;
    }
    v19 = (__int64 *)(a1 + 496);
  }
  v20 = *(_QWORD *)(v17 + 24) + 1LL;
  if ( v20 <= *(_QWORD *)(v17 + 32) )
    v19 = v13;
  else
    *(_QWORD *)(v17 + 16) = sub_14005ABE0(v17 + 16, *(void **)(v17 + 16), v20, 0x28u);
  v21 = *(_QWORD *)(v17 + 24);
  v22 = *(_QWORD *)(v17 + 16) + 40 * v21;
  *(_QWORD *)(v17 + 24) = v21 + 1;
  *(_DWORD *)v22 = 0;
  *(_QWORD *)(v22 + 8) = -1;
  *(_QWORD *)(v22 + 16) = 996;
  *(_QWORD *)(v22 + 24) = 4;
  *(_QWORD *)(v22 + 32) = v18;
  sub_14000D730(
    *(_QWORD *)(v17 + 8),
    off_1400C70E0,
    dword_1400C70E8,
    byte_1400C70ED,
    byte_1400C70EC,
    (const void **)off_1400C70F0,
    qword_1400C70F8);
  v23 = *v19;
  if ( byte_1400C710D == 1 )
  {
    v24 = 2;
    v25 = v19;
  }
  else
  {
    if ( byte_1400C710D == 2 )
    {
      v24 = 4;
    }
    else
    {
      v24 = 0;
      if ( byte_1400C710D == 7 )
        v24 = 8;
      if ( !v24 )
        goto LABEL_363;
    }
    v25 = (__int64 *)(a1 + 496);
  }
  v26 = *(_QWORD *)(v23 + 24);
  if ( (unsigned __int64)(v26 + 1) <= *(_QWORD *)(v23 + 32) )
    v25 = v19;
  else
    *(_QWORD *)(v23 + 16) = sub_14005ABE0(v23 + 16, *(void **)(v23 + 16), v26 + 1, 0x28u);
  v27 = *(_QWORD *)(v23 + 24);
  v28 = *(_QWORD *)(v23 + 16) + 40 * v27;
  *(_QWORD *)(v23 + 24) = v27 + 1;
  *(_DWORD *)v28 = 0;
  *(_QWORD *)(v28 + 8) = -1;
  *(_QWORD *)(v28 + 16) = 304;
  *(_QWORD *)(v28 + 24) = 8;
  *(_QWORD *)(v28 + 32) = v24;
  sub_14000D730(
    *(_QWORD *)(v23 + 8),
    off_1400C7100,
    dword_1400C7108,
    byte_1400C710D,
    byte_1400C710C,
    (const void **)qword_1400C7110,
    qword_1400C7118);
  *(_DWORD *)(a1 + 764) = v26;
  v29 = *v25;
  if ( *(_BYTE *)(a1 + 848) )
  {
    *(_DWORD *)(a1 + 768) = sub_14000D630(
                              v29,
                              (__int64)&off_1400C7120,
                              (__int64)sub_14000E760,
                              (__int64)guard_check_icall_nop,
                              0,
                              -1);
    v30 = sub_14000D630(*v25, (__int64)&off_1400C7140, (__int64)sub_14000E760, (__int64)guard_check_icall_nop, 0, -1);
  }
  else
  {
    if ( byte_1400C712D == 1 )
    {
      v31 = 2;
      v32 = v25;
    }
    else
    {
      if ( byte_1400C712D == 2 )
      {
        v31 = 4;
      }
      else
      {
        v31 = 0;
        if ( byte_1400C712D == 7 )
          v31 = 8;
        if ( !v31 )
          goto LABEL_363;
      }
      v32 = (__int64 *)(a1 + 496);
    }
    *(_DWORD *)(a1 + 768) = sub_14000D530(v29, 0, (__int64)&off_1400C7120, 312, 8, v31, -1);
    v33 = *v25;
    if ( byte_1400C714D == 1 )
    {
      v34 = 2;
      v25 = v32;
    }
    else
    {
      if ( byte_1400C714D == 2 )
      {
        v34 = 4;
      }
      else
      {
        v34 = 0;
        if ( byte_1400C714D == 7 )
          v34 = 8;
        if ( !v34 )
          goto LABEL_363;
      }
      v25 = (__int64 *)(a1 + 496);
    }
    v30 = sub_14000D530(v33, 0, (__int64)&off_1400C7140, 320, 8, v34, -1);
  }
  *(_DWORD *)(a1 + 772) = v30;
  v35 = *v25;
  if ( byte_1400C716D == 1 )
  {
    v36 = 2;
    v37 = v25;
  }
  else
  {
    if ( byte_1400C716D == 2 )
    {
      v36 = 4;
    }
    else
    {
      v36 = 0;
      if ( byte_1400C716D == 7 )
        v36 = 8;
      if ( !v36 )
        goto LABEL_363;
    }
    v37 = (__int64 *)(a1 + 496);
  }
  v38 = *(_QWORD *)(v35 + 24);
  if ( (unsigned __int64)(v38 + 1) <= *(_QWORD *)(v35 + 32) )
    v37 = v25;
  else
    *(_QWORD *)(v35 + 16) = sub_14005ABE0(v35 + 16, *(void **)(v35 + 16), v38 + 1, 0x28u);
  v39 = *(_QWORD *)(v35 + 24);
  v40 = *(_QWORD *)(v35 + 16) + 40 * v39;
  *(_QWORD *)(v35 + 24) = v39 + 1;
  *(_DWORD *)v40 = 0;
  *(_QWORD *)(v40 + 8) = -1;
  *(_QWORD *)(v40 + 16) = 328;
  *(_QWORD *)(v40 + 24) = 8;
  *(_QWORD *)(v40 + 32) = v36;
  sub_14000D730(
    *(_QWORD *)(v35 + 8),
    off_1400C7160,
    dword_1400C7168,
    byte_1400C716D,
    byte_1400C716C,
    (const void **)qword_1400C7170,
    qword_1400C7178);
  *(_DWORD *)(a1 + 756) = v38;
  v41 = *v37;
  if ( byte_1400C718D == 1 )
  {
    v42 = 2;
    v43 = v37;
  }
  else
  {
    if ( byte_1400C718D == 2 )
    {
      v42 = 4;
    }
    else
    {
      v42 = 0;
      if ( byte_1400C718D == 7 )
        v42 = 8;
      if ( !v42 )
        goto LABEL_363;
    }
    v43 = (__int64 *)(a1 + 496);
  }
  v44 = *(_QWORD *)(v41 + 24);
  if ( (unsigned __int64)(v44 + 1) <= *(_QWORD *)(v41 + 32) )
    v43 = v37;
  else
    *(_QWORD *)(v41 + 16) = sub_14005ABE0(v41 + 16, *(void **)(v41 + 16), v44 + 1, 0x28u);
  v45 = *(_QWORD *)(v41 + 24);
  v46 = *(_QWORD *)(v41 + 16) + 40 * v45;
  *(_QWORD *)(v41 + 24) = v45 + 1;
  *(_DWORD *)v46 = 0;
  *(_QWORD *)(v46 + 8) = -1;
  *(_QWORD *)(v46 + 16) = 336;
  *(_QWORD *)(v46 + 24) = 8;
  *(_QWORD *)(v46 + 32) = v42;
  sub_14000D730(
    *(_QWORD *)(v41 + 8),
    off_1400C7180,
    dword_1400C7188,
    byte_1400C718D,
    byte_1400C718C,
    (const void **)qword_1400C7190,
    qword_1400C7198);
  *(_DWORD *)(a1 + 760) = v44;
  v47 = *v43;
  if ( *(_BYTE *)(a1 + 848) )
  {
    v48 = *(_QWORD *)(v47 + 24);
    if ( (unsigned __int64)(v48 + 1) > *(_QWORD *)(v47 + 32) )
      *(_QWORD *)(v47 + 16) = sub_14005ABE0(v47 + 16, *(void **)(v47 + 16), v48 + 1, 0x28u);
    v49 = *(_QWORD *)(v47 + 24);
    v50 = *(_QWORD *)(v47 + 16) + 40 * v49;
    *(_QWORD *)(v47 + 24) = v49 + 1;
    *(_DWORD *)v50 = 3;
    *(_QWORD *)(v50 + 8) = -1;
    *(_QWORD *)(v50 + 16) = sub_14000E760;
    *(_QWORD *)(v50 + 24) = guard_check_icall_nop;
    *(_QWORD *)(v50 + 32) = 0;
    sub_14000D730(
      *(_QWORD *)(v47 + 8),
      off_1400C71A0,
      dword_1400C71A8,
      byte_1400C71AD,
      byte_1400C71AC,
      (const void **)qword_1400C71B0,
      qword_1400C71B8);
  }
  else
  {
    if ( byte_1400C71AD == 1 )
    {
      v51 = 2;
    }
    else
    {
      if ( byte_1400C71AD == 2 )
      {
        v51 = 4;
      }
      else
      {
        v51 = 0;
        if ( byte_1400C71AD == 7 )
          v51 = 8;
        if ( !v51 )
          goto LABEL_363;
      }
      v43 = (__int64 *)(a1 + 496);
    }
    v48 = *(_QWORD *)(v47 + 24);
    if ( (unsigned __int64)(v48 + 1) > *(_QWORD *)(v47 + 32) )
      *(_QWORD *)(v47 + 16) = sub_14005ABE0(v47 + 16, *(void **)(v47 + 16), v48 + 1, 0x28u);
    v52 = *(_QWORD *)(v47 + 24);
    v53 = *(_QWORD *)(v47 + 16) + 40 * v52;
    *(_QWORD *)(v47 + 24) = v52 + 1;
    *(_DWORD *)v53 = 0;
    *(_QWORD *)(v53 + 8) = -1;
    *(_QWORD *)(v53 + 16) = 296;
    *(_QWORD *)(v53 + 24) = 8;
    *(_QWORD *)(v53 + 32) = v51;
    sub_14000D730(
      *(_QWORD *)(v47 + 8),
      off_1400C71A0,
      dword_1400C71A8,
      byte_1400C71AD,
      byte_1400C71AC,
      (const void **)qword_1400C71B0,
      qword_1400C71B8);
  }
  *(_DWORD *)(a1 + 776) = v48;
  v54 = *v43;
  if ( *(_BYTE *)(a1 + 848) )
  {
    if ( byte_1400C6C45 == 1 )
    {
      v55 = 2;
    }
    else
    {
      if ( byte_1400C6C45 == 2 )
      {
        v55 = 4;
      }
      else
      {
        v55 = 0;
        if ( byte_1400C6C45 == 7 )
          v55 = 8;
        if ( !v55 )
          goto LABEL_363;
      }
      v43 = (__int64 *)(a1 + 496);
    }
    v56 = *(_QWORD *)(v54 + 24) + 1LL;
    if ( v56 <= *(_QWORD *)(v54 + 32) )
    {
      v57 = v43;
    }
    else
    {
      *(_QWORD *)(v54 + 16) = sub_14005ABE0(v54 + 16, *(void **)(v54 + 16), v56, 0x28u);
      v57 = (__int64 *)(a1 + 496);
    }
    v58 = *(_QWORD *)(v54 + 24);
    v59 = *(_QWORD *)(v54 + 16) + 40 * v58;
    *(_QWORD *)(v54 + 24) = v58 + 1;
    *(_DWORD *)v59 = 0;
    *(_QWORD *)(v59 + 8) = -1;
    *(_QWORD *)(v59 + 16) = 152;
    *(_QWORD *)(v59 + 24) = 8;
    *(_QWORD *)(v59 + 32) = v55;
    sub_14000D730(
      *(_QWORD *)(v54 + 8),
      off_1400C6C38,
      dword_1400C6C40,
      byte_1400C6C45,
      byte_1400C6C44,
      (const void **)xmmword_1400C6C48,
      *((__int64 *)&xmmword_1400C6C48 + 1));
    v60 = *v43;
    if ( byte_1400C6C65 == 1 )
    {
      v61 = 2;
    }
    else
    {
      if ( byte_1400C6C65 == 2 )
      {
        v61 = 4;
      }
      else
      {
        v61 = 0;
        if ( byte_1400C6C65 == 7 )
          v61 = 8;
        if ( !v61 )
          goto LABEL_363;
      }
      v57 = (__int64 *)(a1 + 496);
    }
    v62 = *(_QWORD *)(v60 + 24) + 1LL;
    if ( v62 <= *(_QWORD *)(v60 + 32) )
    {
      v63 = v57;
    }
    else
    {
      *(_QWORD *)(v60 + 16) = sub_14005ABE0(v60 + 16, *(void **)(v60 + 16), v62, 0x28u);
      v63 = (__int64 *)(a1 + 496);
    }
    v64 = *(_QWORD *)(v60 + 24);
    v65 = *(_QWORD *)(v60 + 16) + 40 * v64;
    *(_QWORD *)(v60 + 24) = v64 + 1;
    *(_DWORD *)v65 = 0;
    *(_QWORD *)(v65 + 8) = -1;
    *(_QWORD *)(v65 + 16) = 160;
    *(_QWORD *)(v65 + 24) = 8;
    *(_QWORD *)(v65 + 32) = v61;
    sub_14000D730(
      *(_QWORD *)(v60 + 8),
      off_1400C6C58,
      dword_1400C6C60,
      byte_1400C6C65,
      byte_1400C6C64,
      (const void **)xmmword_1400C6C68,
      *((__int64 *)&xmmword_1400C6C68 + 1));
    v66 = *v57;
    if ( byte_1400C6C85 == 1 )
    {
      v67 = 2;
    }
    else
    {
      if ( byte_1400C6C85 == 2 )
      {
        v67 = 4;
      }
      else
      {
        v67 = 0;
        if ( byte_1400C6C85 == 7 )
          v67 = 8;
        if ( !v67 )
          goto LABEL_363;
      }
      v63 = (__int64 *)(a1 + 496);
    }
    v68 = *(_QWORD *)(v66 + 24) + 1LL;
    if ( v68 <= *(_QWORD *)(v66 + 32) )
    {
      v69 = v63;
    }
    else
    {
      *(_QWORD *)(v66 + 16) = sub_14005ABE0(v66 + 16, *(void **)(v66 + 16), v68, 0x28u);
      v69 = (__int64 *)(a1 + 496);
    }
    v70 = *(_QWORD *)(v66 + 24);
    v71 = *(_QWORD *)(v66 + 16) + 40 * v70;
    *(_QWORD *)(v66 + 24) = v70 + 1;
    *(_DWORD *)v71 = 0;
    *(_QWORD *)(v71 + 8) = -1;
    *(_QWORD *)(v71 + 16) = 168;
    *(_QWORD *)(v71 + 24) = 8;
    *(_QWORD *)(v71 + 32) = v67;
    sub_14000D730(
      *(_QWORD *)(v66 + 8),
      off_1400C6C78,
      dword_1400C6C80,
      byte_1400C6C85,
      byte_1400C6C84,
      (const void **)xmmword_1400C6C88,
      *((__int64 *)&xmmword_1400C6C88 + 1));
    v72 = *v63;
    if ( byte_1400C6CA5 == 1 )
    {
      v73 = 2;
    }
    else
    {
      if ( byte_1400C6CA5 == 2 )
      {
        v73 = 4;
      }
      else
      {
        v73 = 0;
        if ( byte_1400C6CA5 == 7 )
          v73 = 8;
        if ( !v73 )
          goto LABEL_363;
      }
      v69 = (__int64 *)(a1 + 496);
    }
    v74 = *(_QWORD *)(v72 + 24) + 1LL;
    if ( v74 <= *(_QWORD *)(v72 + 32) )
    {
      v75 = v69;
    }
    else
    {
      *(_QWORD *)(v72 + 16) = sub_14005ABE0(v72 + 16, *(void **)(v72 + 16), v74, 0x28u);
      v75 = (__int64 *)(a1 + 496);
    }
    v76 = *(_QWORD *)(v72 + 24);
    v77 = *(_QWORD *)(v72 + 16) + 40 * v76;
    *(_QWORD *)(v72 + 24) = v76 + 1;
    *(_DWORD *)v77 = 0;
    *(_QWORD *)(v77 + 8) = -1;
    *(_QWORD *)(v77 + 16) = 176;
    *(_QWORD *)(v77 + 24) = 8;
    *(_QWORD *)(v77 + 32) = v73;
    sub_14000D730(
      *(_QWORD *)(v72 + 8),
      off_1400C6C98,
      dword_1400C6CA0,
      byte_1400C6CA5,
      byte_1400C6CA4,
      (const void **)xmmword_1400C6CA8,
      *((__int64 *)&xmmword_1400C6CA8 + 1));
    v78 = *v69;
    if ( byte_1400C6CC5 == 1 )
    {
      v79 = 2;
    }
    else
    {
      if ( byte_1400C6CC5 == 2 )
      {
        v79 = 4;
      }
      else
      {
        v79 = 0;
        if ( byte_1400C6CC5 == 7 )
          v79 = 8;
        if ( !v79 )
          goto LABEL_363;
      }
      v75 = (__int64 *)(a1 + 496);
    }
    v80 = *(_QWORD *)(v78 + 24) + 1LL;
    if ( v80 <= *(_QWORD *)(v78 + 32) )
    {
      v81 = v75;
    }
    else
    {
      *(_QWORD *)(v78 + 16) = sub_14005ABE0(v78 + 16, *(void **)(v78 + 16), v80, 0x28u);
      v81 = (__int64 *)(a1 + 496);
    }
    v82 = *(_QWORD *)(v78 + 24);
    v83 = *(_QWORD *)(v78 + 16) + 40 * v82;
    *(_QWORD *)(v78 + 24) = v82 + 1;
    *(_DWORD *)v83 = 0;
    *(_QWORD *)(v83 + 8) = -1;
    *(_QWORD *)(v83 + 16) = 192;
    *(_QWORD *)(v83 + 24) = 8;
    *(_QWORD *)(v83 + 32) = v79;
    sub_14000D730(
      *(_QWORD *)(v78 + 8),
      off_1400C6CB8,
      dword_1400C6CC0,
      byte_1400C6CC5,
      byte_1400C6CC4,
      (const void **)xmmword_1400C6CC8,
      *((__int64 *)&xmmword_1400C6CC8 + 1));
    v84 = *v75;
    if ( byte_1400C6CE5 == 1 )
    {
      v85 = 2;
    }
    else
    {
      if ( byte_1400C6CE5 == 2 )
      {
        v85 = 4;
      }
      else
      {
        v85 = 0;
        if ( byte_1400C6CE5 == 7 )
          v85 = 8;
        if ( !v85 )
          goto LABEL_363;
      }
      v81 = (__int64 *)(a1 + 496);
    }
    v86 = *(_QWORD *)(v84 + 24) + 1LL;
    if ( v86 <= *(_QWORD *)(v84 + 32) )
    {
      v87 = v81;
    }
    else
    {
      *(_QWORD *)(v84 + 16) = sub_14005ABE0(v84 + 16, *(void **)(v84 + 16), v86, 0x28u);
      v87 = (__int64 *)(a1 + 496);
    }
    v88 = *(_QWORD *)(v84 + 24);
    v89 = *(_QWORD *)(v84 + 16) + 40 * v88;
    *(_QWORD *)(v84 + 24) = v88 + 1;
    *(_DWORD *)v89 = 0;
    *(_QWORD *)(v89 + 8) = -1;
    *(_QWORD *)(v89 + 16) = 184;
    *(_QWORD *)(v89 + 24) = 8;
    *(_QWORD *)(v89 + 32) = v85;
    sub_14000D730(
      *(_QWORD *)(v84 + 8),
      off_1400C6CD8,
      dword_1400C6CE0,
      byte_1400C6CE5,
      byte_1400C6CE4,
      (const void **)xmmword_1400C6CE8,
      *((__int64 *)&xmmword_1400C6CE8 + 1));
    v90 = *v81;
    if ( byte_1400C6D05 == 1 )
    {
      v91 = 2;
    }
    else
    {
      if ( byte_1400C6D05 == 2 )
      {
        v91 = 4;
      }
      else
      {
        v91 = 0;
        if ( byte_1400C6D05 == 7 )
          v91 = 8;
        if ( !v91 )
          goto LABEL_363;
      }
      v87 = (__int64 *)(a1 + 496);
    }
    v92 = *(_QWORD *)(v90 + 24) + 1LL;
    if ( v92 <= *(_QWORD *)(v90 + 32) )
    {
      v93 = v87;
    }
    else
    {
      *(_QWORD *)(v90 + 16) = sub_14005ABE0(v90 + 16, *(void **)(v90 + 16), v92, 0x28u);
      v93 = (__int64 *)(a1 + 496);
    }
    v94 = *(_QWORD *)(v90 + 24);
    v95 = *(_QWORD *)(v90 + 16) + 40 * v94;
    *(_QWORD *)(v90 + 24) = v94 + 1;
    *(_DWORD *)v95 = 0;
    *(_QWORD *)(v95 + 8) = -1;
    *(_QWORD *)(v95 + 16) = 200;
    *(_QWORD *)(v95 + 24) = 8;
    *(_QWORD *)(v95 + 32) = v91;
    sub_14000D730(
      *(_QWORD *)(v90 + 8),
      off_1400C6CF8,
      dword_1400C6D00,
      byte_1400C6D05,
      byte_1400C6D04,
      (const void **)xmmword_1400C6D08,
      *((__int64 *)&xmmword_1400C6D08 + 1));
    v96 = *v87;
    if ( byte_1400C6D25 == 1 )
    {
      v97 = 2;
    }
    else
    {
      if ( byte_1400C6D25 == 2 )
      {
        v97 = 4;
      }
      else
      {
        v97 = 0;
        if ( byte_1400C6D25 == 7 )
          v97 = 8;
        if ( !v97 )
          goto LABEL_363;
      }
      v93 = (__int64 *)(a1 + 496);
    }
    v98 = *(_QWORD *)(v96 + 24);
    if ( (unsigned __int64)(v98 + 1) <= *(_QWORD *)(v96 + 32) )
    {
      v99 = v93;
    }
    else
    {
      *(_QWORD *)(v96 + 16) = sub_14005ABE0(v96 + 16, *(void **)(v96 + 16), v98 + 1, 0x28u);
      v99 = (__int64 *)(a1 + 496);
    }
    v100 = *(_QWORD *)(v96 + 24);
    v101 = *(_QWORD *)(v96 + 16) + 40 * v100;
    *(_QWORD *)(v96 + 24) = v100 + 1;
    *(_DWORD *)v101 = 0;
    *(_QWORD *)(v101 + 8) = -1;
    *(_QWORD *)(v101 + 16) = 208;
    *(_QWORD *)(v101 + 24) = 8;
    *(_QWORD *)(v101 + 32) = v97;
    sub_14000D730(
      *(_QWORD *)(v96 + 8),
      off_1400C6D18,
      dword_1400C6D20,
      byte_1400C6D25,
      byte_1400C6D24,
      (const void **)xmmword_1400C6D28,
      *((__int64 *)&xmmword_1400C6D28 + 1));
    *(_DWORD *)(a1 + 612) = v98;
    if ( byte_1400C6D45 == 1 )
    {
      v102 = 2;
      v103 = v99;
    }
    else
    {
      if ( byte_1400C6D45 == 2 )
      {
        v102 = 4;
      }
      else
      {
        v102 = 0;
        if ( byte_1400C6D45 == 7 )
          v102 = 8;
        if ( !v102 )
          goto LABEL_363;
      }
      v103 = (__int64 *)(a1 + 496);
    }
    *(_DWORD *)(a1 + 616) = sub_14000D530(*v93, 0, (__int64)&off_1400C6D38, 216, 8, v102, -1);
    if ( byte_1400C6D65 == 1 )
    {
      v104 = 2;
      v105 = v103;
    }
    else
    {
      if ( byte_1400C6D65 == 2 )
      {
        v104 = 4;
      }
      else
      {
        v104 = 0;
        if ( byte_1400C6D65 == 7 )
          v104 = 8;
        if ( !v104 )
          goto LABEL_363;
      }
      v105 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(*v99, 0, (__int64)&off_1400C6D58, 224, 8, v104, -1);
    v106 = *v103;
    if ( byte_1400C6D85 == 1 )
    {
      v107 = 2;
      v108 = v105;
    }
    else
    {
      if ( byte_1400C6D85 == 2 )
      {
        v107 = 4;
      }
      else
      {
        v107 = 0;
        if ( byte_1400C6D85 == 7 )
          v107 = 8;
        if ( !v107 )
          goto LABEL_363;
      }
      v108 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(v106, 0, (__int64)&off_1400C6D78, 232, 8, v107, -1);
    v109 = *v105;
    if ( byte_1400C6DA5 == 1 )
    {
      v110 = 2;
      v111 = v108;
    }
    else
    {
      if ( byte_1400C6DA5 == 2 )
      {
        v110 = 4;
      }
      else
      {
        v110 = 0;
        if ( byte_1400C6DA5 == 7 )
          v110 = 8;
        if ( !v110 )
          goto LABEL_363;
      }
      v111 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(v109, 0, (__int64)&off_1400C6D98, 240, 8, v110, -1);
    v112 = *v108;
    if ( byte_1400C6DC5 == 1 )
    {
      v113 = 2;
      v114 = v111;
    }
    else
    {
      if ( byte_1400C6DC5 == 2 )
      {
        v113 = 4;
      }
      else
      {
        v113 = 0;
        if ( byte_1400C6DC5 == 7 )
          v113 = 8;
        if ( !v113 )
          goto LABEL_363;
      }
      v114 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(v112, 0, (__int64)&off_1400C6DB8, 248, 8, v113, -1);
    v115 = *v111;
    if ( byte_1400C6DE5 == 1 )
    {
      v116 = 2;
      v117 = v114;
    }
    else
    {
      if ( byte_1400C6DE5 == 2 )
      {
        v116 = 4;
      }
      else
      {
        v116 = 0;
        if ( byte_1400C6DE5 == 7 )
          v116 = 8;
        if ( !v116 )
          goto LABEL_363;
      }
      v117 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(v115, 0, (__int64)&off_1400C6DD8, 256, 8, v116, -1);
    v118 = *v114;
    if ( byte_1400C6E05 == 1 )
    {
      v119 = 2;
      v120 = v117;
    }
    else
    {
      if ( byte_1400C6E05 == 2 )
      {
        v119 = 4;
      }
      else
      {
        v119 = 0;
        if ( byte_1400C6E05 == 7 )
          v119 = 8;
        if ( !v119 )
          goto LABEL_363;
      }
      v120 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(v118, 0, (__int64)&off_1400C6DF8, 264, 8, v119, -1);
    if ( byte_1400C6E25 == 1 )
    {
      v121 = 2;
    }
    else if ( byte_1400C6E25 == 2 )
    {
      v121 = 4;
    }
    else
    {
      v121 = 0;
      if ( byte_1400C6E25 == 7 )
        v121 = 8;
      if ( !v121 )
        goto LABEL_363;
    }
    sub_14000D530(*v117, 0, (__int64)&off_1400C6E18, 272, 8, v121, -1);
    if ( byte_1400C6E45 == 1 )
    {
      v122 = 2;
    }
    else if ( byte_1400C6E45 == 2 )
    {
      v122 = 4;
    }
    else
    {
      v122 = 0;
      if ( byte_1400C6E45 == 7 )
        v122 = 8;
      if ( !v122 )
        goto LABEL_363;
    }
    sub_14000D530(*v120, 0, (__int64)&off_1400C6E38, 280, 8, v122, -1);
  }
  else
  {
    if ( byte_1400C6E65 == 1 )
    {
      v123 = 2;
      v124 = v43;
    }
    else
    {
      if ( byte_1400C6E65 == 2 )
      {
        v123 = 4;
      }
      else
      {
        v123 = 0;
        if ( byte_1400C6E65 == 7 )
          v123 = 8;
        if ( !v123 )
          goto LABEL_363;
      }
      v124 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(v54, 0, (__int64)&off_1400C6E58, 152, 8, v123, -1);
    if ( byte_1400C6E85 == 1 )
    {
      v125 = 2;
    }
    else
    {
      if ( byte_1400C6E85 == 2 )
      {
        v125 = 4;
      }
      else
      {
        v125 = 0;
        if ( byte_1400C6E85 == 7 )
          v125 = 8;
        if ( !v125 )
          goto LABEL_363;
      }
      v124 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(*v43, 0, (__int64)&off_1400C6E78, 160, 8, v125, -1);
    if ( byte_1400C6EA5 == 1 )
    {
      v126 = 2;
      v127 = v124;
    }
    else
    {
      if ( byte_1400C6EA5 == 2 )
      {
        v126 = 4;
      }
      else
      {
        v126 = 0;
        if ( byte_1400C6EA5 == 7 )
          v126 = 8;
        if ( !v126 )
          goto LABEL_363;
      }
      v127 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(*v124, 0, (__int64)&off_1400C6E98, 168, 8, v126, -1);
    v128 = *v124;
    if ( byte_1400C6EC5 == 1 )
    {
      v129 = 2;
      v130 = v127;
    }
    else
    {
      if ( byte_1400C6EC5 == 2 )
      {
        v129 = 4;
      }
      else
      {
        v129 = 0;
        if ( byte_1400C6EC5 == 7 )
          v129 = 8;
        if ( !v129 )
          goto LABEL_363;
      }
      v130 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(v128, 0, (__int64)&off_1400C6EB8, 176, 8, v129, -1);
    if ( byte_1400C6EE5 == 1 )
    {
      v131 = 2;
      v132 = v130;
    }
    else
    {
      if ( byte_1400C6EE5 == 2 )
      {
        v131 = 4;
      }
      else
      {
        v131 = 0;
        if ( byte_1400C6EE5 == 7 )
          v131 = 8;
        if ( !v131 )
          goto LABEL_363;
      }
      v132 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(*v127, 0, (__int64)&off_1400C6ED8, 192, 8, v131, -1);
    if ( byte_1400C6F05 == 1 )
    {
      v133 = 2;
      v134 = v132;
    }
    else
    {
      if ( byte_1400C6F05 == 2 )
      {
        v133 = 4;
      }
      else
      {
        v133 = 0;
        if ( byte_1400C6F05 == 7 )
          v133 = 8;
        if ( !v133 )
          goto LABEL_363;
      }
      v134 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(*v130, 0, (__int64)&off_1400C6EF8, 184, 8, v133, -1);
    if ( byte_1400C6F25 == 1 )
    {
      v135 = 2;
      v136 = v134;
    }
    else
    {
      if ( byte_1400C6F25 == 2 )
      {
        v135 = 4;
      }
      else
      {
        v135 = 0;
        if ( byte_1400C6F25 == 7 )
          v135 = 8;
        if ( !v135 )
          goto LABEL_363;
      }
      v136 = (__int64 *)(a1 + 496);
    }
    sub_14000D530(*v132, 0, (__int64)&off_1400C6F18, 200, 8, v135, -1);
    if ( byte_1400C6F45 == 1 )
    {
      v137 = 2;
    }
    else if ( byte_1400C6F45 == 2 )
    {
      v137 = 4;
    }
    else
    {
      v137 = 0;
      if ( byte_1400C6F45 == 7 )
        v137 = 8;
      if ( !v137 )
        goto LABEL_363;
    }
    *(_DWORD *)(a1 + 612) = sub_14000D530(*v134, 0, (__int64)&off_1400C6F38, 208, 8, v137, -1);
    if ( byte_1400C6F65 == 1 )
    {
      v138 = 2;
    }
    else if ( byte_1400C6F65 == 2 )
    {
      v138 = 4;
    }
    else
    {
      v138 = 0;
      if ( byte_1400C6F65 == 7 )
        v138 = 8;
      if ( !v138 )
        goto LABEL_363;
    }
    *(_DWORD *)(a1 + 616) = sub_14000D530(*v136, 0, (__int64)&off_1400C6F58, 216, 8, v138, -1);
  }
  v139 = *(_QWORD *)(a1 + 496);
  if ( byte_1400C6F85 == 1 )
  {
    v140 = 2;
  }
  else if ( byte_1400C6F85 == 2 )
  {
    v140 = 4;
  }
  else
  {
    v140 = 0;
    if ( byte_1400C6F85 == 7 )
      v140 = 8;
    if ( !v140 )
      goto LABEL_363;
  }
  v141 = *(_QWORD *)(v139 + 24);
  if ( (unsigned __int64)(v141 + 1) > *(_QWORD *)(v139 + 32) )
    *(_QWORD *)(v139 + 16) = sub_14005ABE0(v139 + 16, *(void **)(v139 + 16), v141 + 1, 0x28u);
  v142 = *(_QWORD *)(v139 + 24);
  v143 = *(_QWORD *)(v139 + 16) + 40 * v142;
  *(_QWORD *)(v139 + 24) = v142 + 1;
  *(_DWORD *)v143 = 0;
  *(_QWORD *)(v143 + 8) = -1;
  *(_QWORD *)(v143 + 16) = 288;
  *(_QWORD *)(v143 + 24) = 8;
  *(_QWORD *)(v143 + 32) = v140;
  sub_14000D730(
    *(_QWORD *)(v139 + 8),
    off_1400C6F78,
    dword_1400C6F80,
    byte_1400C6F85,
    byte_1400C6F84,
    off_1400C6F88,
    *(&off_1400C6F88 + 1));
  *(_DWORD *)(a1 + 752) = v141;
  v144 = 8;
  if ( *(_BYTE *)(a1 + 848) )
    v144 = 16;
  *(_QWORD *)(a1 + 1312) = v144;
  v145 = 472;
  v146 = 0;
  v147 = &off_1400C71C0;
  do
  {
    sub_14000D530(*(_QWORD *)(a1 + 496), 2, (__int64)v147, v145, 16, 16, -1);
    ++v146;
    v147 += 4;
    v145 += 16;
  }
  while ( v146 < *(_QWORD *)(a1 + 1312) );
  v148 = *(_QWORD *)(a1 + 496);
  if ( byte_1400C73CD == 1 )
  {
    v149 = 2;
    goto LABEL_350;
  }
  if ( byte_1400C73CD == 2 )
  {
    v149 = 4;
    goto LABEL_350;
  }
  v149 = 0;
  if ( byte_1400C73CD == 7 )
    v149 = 8;
  if ( !v149 )
  {
LABEL_363:
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1798);
  }
LABEL_350:
  v150 = *(_QWORD *)(v148 + 24) + 1LL;
  if ( v150 > *(_QWORD *)(v148 + 32) )
    *(_QWORD *)(v148 + 16) = sub_14005ABE0(v148 + 16, *(void **)(v148 + 16), v150, 0x28u);
  v151 = *(_QWORD *)(v148 + 24);
  v152 = *(_QWORD *)(v148 + 16) + 40 * v151;
  *(_QWORD *)(v148 + 24) = v151 + 1;
  *(_DWORD *)v152 = 0;
  *(_QWORD *)(v152 + 8) = -1;
  *(_QWORD *)(v152 + 16) = 984;
  *(_QWORD *)(v152 + 24) = 4;
  *(_QWORD *)(v152 + 32) = v149;
  sub_14000D730(
    *(_QWORD *)(v148 + 8),
    off_1400C73C0,
    dword_1400C73C8,
    byte_1400C73CD,
    byte_1400C73CC,
    off_1400C73D0,
    *(&off_1400C73D0 + 1));
  sub_14000D530(*(_QWORD *)(a1 + 496), 2, (__int64)&off_1400C73E0, 344, 8, 8, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 2, (__int64)&off_1400C7400, 360, 8, 8, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 2, (__int64)&off_1400C7420, 376, 8, 8, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 2, (__int64)&off_1400C7440, 392, 8, 8, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 2, (__int64)&off_1400C7460, 408, 8, 8, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 2, (__int64)&off_1400C7480, 424, 8, 8, -1);
  sub_14000D530(*(_QWORD *)(a1 + 496), 2, (__int64)&off_1400C74A0, 440, 8, 8, -1);
  result = sub_14000D530(*(_QWORD *)(a1 + 496), 2, (__int64)&off_1400C74C0, 456, 8, 8, -1);
  if ( *(_QWORD *)(a1 + 1312) )
  {
    v154 = &off_1400C74F0;
    do
    {
      v155 = *(_QWORD *)(a1 + 496);
      v156 = *(_QWORD *)(v155 + 24) + 1LL;
      if ( v156 > *(_QWORD *)(v155 + 32) )
        *(_QWORD *)(v155 + 16) = sub_14005ABE0(v155 + 16, *(void **)(v155 + 16), v156, 0x28u);
      v157 = *(_QWORD *)(v155 + 24);
      v158 = *(_QWORD *)(v155 + 16) + 40 * v157;
      *(_QWORD *)(v155 + 24) = v157 + 1;
      *(_DWORD *)v158 = 3;
      *(_QWORD *)(v158 + 8) = -1;
      *(_QWORD *)(v158 + 16) = sub_14001D100;
      *(_QWORD *)(v158 + 24) = sub_14001D1B0;
      *(_QWORD *)(v158 + 32) = v3;
      result = sub_14000D730(
                 *(_QWORD *)(v155 + 8),
                 *(v154 - 2),
                 *((_DWORD *)v154 - 2),
                 *((_BYTE *)v154 - 3),
                 *((_BYTE *)v154 - 4),
                 (const void **)*v154,
                 (__int64)v154[1]);
      ++v3;
      v154 += 4;
    }
    while ( v3 < *(_QWORD *)(a1 + 1312) );
  }
  return result;
}
// 140001790: using guessed type __int64 __fastcall guard_check_icall_nop();
// 1400C6C38: using guessed type int *off_1400C6C38;
// 1400C6C40: using guessed type int dword_1400C6C40;
// 1400C6C44: using guessed type char byte_1400C6C44;
// 1400C6C45: using guessed type char byte_1400C6C45;
// 1400C6C48: using guessed type __int128 xmmword_1400C6C48;
// 1400C6C58: using guessed type char (*off_1400C6C58)[4];
// 1400C6C60: using guessed type int dword_1400C6C60;
// 1400C6C64: using guessed type char byte_1400C6C64;
// 1400C6C65: using guessed type char byte_1400C6C65;
// 1400C6C68: using guessed type __int128 xmmword_1400C6C68;
// 1400C6C78: using guessed type int *off_1400C6C78;
// 1400C6C80: using guessed type int dword_1400C6C80;
// 1400C6C84: using guessed type char byte_1400C6C84;
// 1400C6C85: using guessed type char byte_1400C6C85;
// 1400C6C88: using guessed type __int128 xmmword_1400C6C88;
// 1400C6C98: using guessed type char (*off_1400C6C98)[4];
// 1400C6CA0: using guessed type int dword_1400C6CA0;
// 1400C6CA4: using guessed type char byte_1400C6CA4;
// 1400C6CA5: using guessed type char byte_1400C6CA5;
// 1400C6CA8: using guessed type __int128 xmmword_1400C6CA8;
// 1400C6CB8: using guessed type int *off_1400C6CB8;
// 1400C6CC0: using guessed type int dword_1400C6CC0;
// 1400C6CC4: using guessed type char byte_1400C6CC4;
// 1400C6CC5: using guessed type char byte_1400C6CC5;
// 1400C6CC8: using guessed type __int128 xmmword_1400C6CC8;
// 1400C6CD8: using guessed type char (*off_1400C6CD8)[4];
// 1400C6CE0: using guessed type int dword_1400C6CE0;
// 1400C6CE4: using guessed type char byte_1400C6CE4;
// 1400C6CE5: using guessed type char byte_1400C6CE5;
// 1400C6CE8: using guessed type __int128 xmmword_1400C6CE8;
// 1400C6CF8: using guessed type int *off_1400C6CF8;
// 1400C6D00: using guessed type int dword_1400C6D00;
// 1400C6D04: using guessed type char byte_1400C6D04;
// 1400C6D05: using guessed type char byte_1400C6D05;
// 1400C6D08: using guessed type __int128 xmmword_1400C6D08;
// 1400C6D18: using guessed type char (*off_1400C6D18)[4];
// 1400C6D20: using guessed type int dword_1400C6D20;
// 1400C6D24: using guessed type char byte_1400C6D24;
// 1400C6D25: using guessed type char byte_1400C6D25;
// 1400C6D28: using guessed type __int128 xmmword_1400C6D28;
// 1400C6D38: using guessed type int *off_1400C6D38;
// 1400C6D45: using guessed type char byte_1400C6D45;
// 1400C6D58: using guessed type char (*off_1400C6D58)[4];
// 1400C6D65: using guessed type char byte_1400C6D65;
// 1400C6D78: using guessed type int *off_1400C6D78;
// 1400C6D85: using guessed type char byte_1400C6D85;
// 1400C6D98: using guessed type char (*off_1400C6D98)[4];
// 1400C6DA5: using guessed type char byte_1400C6DA5;
// 1400C6DB8: using guessed type int *off_1400C6DB8;
// 1400C6DC5: using guessed type char byte_1400C6DC5;
// 1400C6DD8: using guessed type char (*off_1400C6DD8)[4];
// 1400C6DE5: using guessed type char byte_1400C6DE5;
// 1400C6DF8: using guessed type int *off_1400C6DF8;
// 1400C6E05: using guessed type char byte_1400C6E05;
// 1400C6E18: using guessed type char (*off_1400C6E18)[4];
// 1400C6E25: using guessed type char byte_1400C6E25;
// 1400C6E38: using guessed type int *off_1400C6E38;
// 1400C6E45: using guessed type char byte_1400C6E45;
// 1400C6E58: using guessed type char (*off_1400C6E58)[4];
// 1400C6E65: using guessed type char byte_1400C6E65;
// 1400C6E78: using guessed type int *off_1400C6E78;
// 1400C6E85: using guessed type char byte_1400C6E85;
// 1400C6E98: using guessed type char (*off_1400C6E98)[4];
// 1400C6EA5: using guessed type char byte_1400C6EA5;
// 1400C6EB8: using guessed type int *off_1400C6EB8;
// 1400C6EC5: using guessed type char byte_1400C6EC5;
// 1400C6ED8: using guessed type char (*off_1400C6ED8)[4];
// 1400C6EE5: using guessed type char byte_1400C6EE5;
// 1400C6EF8: using guessed type int *off_1400C6EF8;
// 1400C6F05: using guessed type char byte_1400C6F05;
// 1400C6F18: using guessed type char (*off_1400C6F18)[4];
// 1400C6F25: using guessed type char byte_1400C6F25;
// 1400C6F38: using guessed type int *off_1400C6F38;
// 1400C6F45: using guessed type char byte_1400C6F45;
// 1400C6F58: using guessed type char (*off_1400C6F58)[4];
// 1400C6F65: using guessed type char byte_1400C6F65;
// 1400C6F78: using guessed type int *off_1400C6F78;
// 1400C6F80: using guessed type int dword_1400C6F80;
// 1400C6F84: using guessed type char byte_1400C6F84;
// 1400C6F85: using guessed type char byte_1400C6F85;
// 1400C6FA0: using guessed type char (*off_1400C6FA0)[4];
// 1400C6FC0: using guessed type int *off_1400C6FC0;
// 1400C6FE0: using guessed type char (*off_1400C6FE0)[4];
// 1400C7000: using guessed type int *off_1400C7000;
// 1400C7020: using guessed type char (*off_1400C7020)[4];
// 1400C7040: using guessed type int *off_1400C7040;
// 1400C7060: using guessed type char (*off_1400C7060)[4];
// 1400C7080: using guessed type int *off_1400C7080;
// 1400C70A0: using guessed type char *off_1400C70A0;
// 1400C70A8: using guessed type int dword_1400C70A8;
// 1400C70AC: using guessed type char byte_1400C70AC;
// 1400C70AD: using guessed type char byte_1400C70AD;
// 1400C70B0: using guessed type char **off_1400C70B0;
// 1400C70B8: using guessed type __int64 qword_1400C70B8;
// 1400C70C0: using guessed type char *off_1400C70C0;
// 1400C70C8: using guessed type int dword_1400C70C8;
// 1400C70CC: using guessed type char byte_1400C70CC;
// 1400C70CD: using guessed type char byte_1400C70CD;
// 1400C70D0: using guessed type char **off_1400C70D0;
// 1400C70D8: using guessed type __int64 qword_1400C70D8;
// 1400C70E0: using guessed type char *off_1400C70E0;
// 1400C70E8: using guessed type int dword_1400C70E8;
// 1400C70EC: using guessed type char byte_1400C70EC;
// 1400C70ED: using guessed type char byte_1400C70ED;
// 1400C70F0: using guessed type char **off_1400C70F0;
// 1400C70F8: using guessed type __int64 qword_1400C70F8;
// 1400C7100: using guessed type char *off_1400C7100;
// 1400C7108: using guessed type int dword_1400C7108;
// 1400C710C: using guessed type char byte_1400C710C;
// 1400C710D: using guessed type char byte_1400C710D;
// 1400C7110: using guessed type __int64 qword_1400C7110;
// 1400C7118: using guessed type __int64 qword_1400C7118;
// 1400C7120: using guessed type char *off_1400C7120;
// 1400C712D: using guessed type char byte_1400C712D;
// 1400C7140: using guessed type char *off_1400C7140;
// 1400C714D: using guessed type char byte_1400C714D;
// 1400C7160: using guessed type char *off_1400C7160;
// 1400C7168: using guessed type int dword_1400C7168;
// 1400C716C: using guessed type char byte_1400C716C;
// 1400C716D: using guessed type char byte_1400C716D;
// 1400C7170: using guessed type __int64 qword_1400C7170;
// 1400C7178: using guessed type __int64 qword_1400C7178;
// 1400C7180: using guessed type char *off_1400C7180;
// 1400C7188: using guessed type int dword_1400C7188;
// 1400C718C: using guessed type char byte_1400C718C;
// 1400C718D: using guessed type char byte_1400C718D;
// 1400C7190: using guessed type __int64 qword_1400C7190;
// 1400C7198: using guessed type __int64 qword_1400C7198;
// 1400C71A0: using guessed type char *off_1400C71A0;
// 1400C71A8: using guessed type int dword_1400C71A8;
// 1400C71AC: using guessed type char byte_1400C71AC;
// 1400C71AD: using guessed type char byte_1400C71AD;
// 1400C71B0: using guessed type __int64 qword_1400C71B0;
// 1400C71B8: using guessed type __int64 qword_1400C71B8;
// 1400C71C0: using guessed type char *off_1400C71C0;
// 1400C73C0: using guessed type char *off_1400C73C0;
// 1400C73C8: using guessed type int dword_1400C73C8;
// 1400C73CC: using guessed type char byte_1400C73CC;
// 1400C73CD: using guessed type char byte_1400C73CD;
// 1400C73E0: using guessed type char *off_1400C73E0;
// 1400C7400: using guessed type char *off_1400C7400;
// 1400C7420: using guessed type char *off_1400C7420;
// 1400C7440: using guessed type char *off_1400C7440;
// 1400C7460: using guessed type char *off_1400C7460;
// 1400C7480: using guessed type char *off_1400C7480;
// 1400C74A0: using guessed type char *off_1400C74A0;
// 1400C74C0: using guessed type char *off_1400C74C0;
// 1400C74F0: using guessed type char **off_1400C74F0;
// 1400CB61C: using guessed type char byte_1400CB61C;
