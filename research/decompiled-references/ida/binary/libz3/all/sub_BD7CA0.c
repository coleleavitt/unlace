__int64 __fastcall sub_BD7CA0(__int64 a1, _QWORD *a2, __m128 a3, __m128 a4, __m128 a5)
{
  char **exception; // r14
  __int64 *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // r13
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r12
  int v14; // ecx
  int v15; // r9d
  __int64 v16; // r15
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // esi
  unsigned int v25; // r8d
  unsigned int v26; // eax
  _DWORD *v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int16 v33; // ax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int8 v37; // al
  __int64 v38; // rsi
  __int64 v39; // rdi
  bool v40; // zf
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 *v47; // r12
  unsigned __int64 v48; // r15
  __int64 v49; // rsi
  int v51; // r12d
  int v52; // r15d
  int v53; // eax
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // rsi
  __int64 v61; // rdi
  int v62; // eax
  int v63; // [rsp-8h] [rbp-2F8h]
  int v64; // [rsp+0h] [rbp-2F0h]
  __int64 v65; // [rsp+0h] [rbp-2F0h]
  __int64 v66; // [rsp+0h] [rbp-2F0h]
  int v67; // [rsp+0h] [rbp-2F0h]
  __int64 v68; // [rsp+8h] [rbp-2E8h]
  int v69; // [rsp+8h] [rbp-2E8h]
  int v70; // [rsp+8h] [rbp-2E8h]
  __int64 v71; // [rsp+8h] [rbp-2E8h]
  int v72; // [rsp+8h] [rbp-2E8h]
  int v73; // [rsp+10h] [rbp-2E0h]
  int v74; // [rsp+10h] [rbp-2E0h]
  __int64 v75; // [rsp+10h] [rbp-2E0h]
  int v76; // [rsp+10h] [rbp-2E0h]
  __int64 v77; // [rsp+18h] [rbp-2D8h]
  __int64 v78; // [rsp+18h] [rbp-2D8h]
  __int64 v79; // [rsp+18h] [rbp-2D8h]
  int v80; // [rsp+18h] [rbp-2D8h]
  __int64 *v81; // [rsp+20h] [rbp-2D0h]
  __int64 v82; // [rsp+20h] [rbp-2D0h]
  int v83; // [rsp+20h] [rbp-2D0h]
  __int64 v84; // [rsp+28h] [rbp-2C8h]
  __int64 v85; // [rsp+28h] [rbp-2C8h]
  int v86[2]; // [rsp+28h] [rbp-2C8h]
  char v87; // [rsp+28h] [rbp-2C8h]
  __int64 v88; // [rsp+30h] [rbp-2C0h]
  __int64 v89; // [rsp+30h] [rbp-2C0h]
  __int64 v90; // [rsp+30h] [rbp-2C0h]
  int v91; // [rsp+30h] [rbp-2C0h]
  __int64 *v92; // [rsp+38h] [rbp-2B8h]
  int v93[2]; // [rsp+38h] [rbp-2B8h]
  int v94[2]; // [rsp+38h] [rbp-2B8h]
  int v95; // [rsp+38h] [rbp-2B8h]
  int v96[2]; // [rsp+38h] [rbp-2B8h]
  __int64 v97; // [rsp+40h] [rbp-2B0h]
  unsigned __int8 v98; // [rsp+40h] [rbp-2B0h]
  int v99; // [rsp+40h] [rbp-2B0h]
  _QWORD *v100; // [rsp+48h] [rbp-2A8h] BYREF
  int v101; // [rsp+50h] [rbp-2A0h]
  int v102; // [rsp+58h] [rbp-298h] BYREF
  __int64 v103; // [rsp+60h] [rbp-290h]
  __int64 v104; // [rsp+68h] [rbp-288h]
  int v105[2]; // [rsp+70h] [rbp-280h] BYREF
  __int64 v106; // [rsp+78h] [rbp-278h]
  int v107; // [rsp+80h] [rbp-270h]
  int v108; // [rsp+88h] [rbp-268h]
  __int64 *v109; // [rsp+90h] [rbp-260h] BYREF
  int v110; // [rsp+98h] [rbp-258h]
  int v111; // [rsp+A0h] [rbp-250h]
  void *v112; // [rsp+A8h] [rbp-248h]
  int v113; // [rsp+B0h] [rbp-240h]
  __int64 v114; // [rsp+B8h] [rbp-238h]
  _BYTE *v115; // [rsp+120h] [rbp-1D0h]
  int v116; // [rsp+128h] [rbp-1C8h]
  __int64 v117; // [rsp+130h] [rbp-1C0h]
  _QWORD v118[19]; // [rsp+138h] [rbp-1B8h] BYREF
  int v119; // [rsp+1D0h] [rbp-120h]
  _QWORD v120[18]; // [rsp+1D8h] [rbp-118h] BYREF
  int v121; // [rsp+268h] [rbp-88h]
  __int64 v122; // [rsp+270h] [rbp-80h]
  __int64 v123; // [rsp+278h] [rbp-78h]
  __int64 v124; // [rsp+280h] [rbp-70h]
  __int64 v125; // [rsp+288h] [rbp-68h]
  __int64 v126; // [rsp+290h] [rbp-60h]
  __int64 v127; // [rsp+298h] [rbp-58h]
  __int64 v128; // [rsp+2A0h] [rbp-50h]
  _BYTE v129[72]; // [rsp+2A8h] [rbp-48h] BYREF

  v6 = *(__int64 **)(a1 + 16);
  v97 = a1;
  v100 = a2;
  v92 = v6;
  if ( !sub_B70A50(v6 + 1055, a1, -118, 1u, &v100, 0) )
    return 0;
  v7 = v100;
  ++*(_DWORD *)(a1 + 320);
  v8 = *v7;
  v68 = *(_QWORD *)(a1 + 24);
  v9 = sub_BDD510(a1, *v7);
  v10 = (_DWORD *)v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v11 = sub_15D2BD0(*(_QWORD *)(a1 + 24), *(_QWORD *)(*v100 + 16LL));
  v12 = *(_QWORD *)(a1 + 24);
  v13 = v11;
  v103 = v12;
  sub_1584DD0(&v109, v12, 0);
  v116 = 0;
  v109 = (__int64 *)&off_1C4CA60;
  v115 = v129;
  v117 = 0;
  sub_1584DD0(v118, v12, 0);
  v118[18] = 0;
  v119 = 0;
  v118[0] = &off_1C61DB8;
  sub_1584DD0(v120, v12, 0);
  v14 = *(_DWORD *)(v8 + 24);
  v123 = v12;
  v125 = v12;
  v121 = 0;
  v122 = 0;
  v120[0] = &off_1C61DE0;
  v109 = &off_1C4CA80;
  v124 = 0;
  v126 = 0;
  v127 = v12;
  v128 = 0;
  v129[8] = 0;
  sub_157BE40(
    (int)v105,
    (int)&v109,
    v13,
    v14,
    v8 + 32,
    v15,
    v64,
    v68,
    (int)v120,
    (int)v118,
    (int)v105,
    (int)&v109,
    v88,
    v92);
  v16 = *(_QWORD *)v105;
  v17 = (_QWORD *)sub_186B270(0x18u);
  v17[1] = v16;
  v18 = v17 + 1;
  *v17 = 0x100000002LL;
  if ( *(_DWORD *)(v13 + 20) )
  {
    v19 = 0;
    do
    {
      v22 = sub_BD6F40(a1, *(_QWORD *)(v13 + 8 * v19 + 80));
      v23 = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      v24 = *((_DWORD *)v18 - 1);
      if ( v24 == *((_DWORD *)v18 - 2) )
      {
        v25 = (3 * v24 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * v24 + 8 >= v26 || v24 >= v25 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v81, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v81);
          sub_233E40((__int64)v81);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v89) = (3 * v24 + 1) >> 1;
        *(_QWORD *)v93 = v23;
        v27 = (_DWORD *)sub_186B300(v18 - 1, v26);
        v24 = v27[1];
        v18 = v27 + 2;
        v23 = *(_QWORD *)v93;
        *v27 = v89;
      }
      v20 = v24;
      v21 = v24 + 1;
      ++v19;
      v18[v20] = v23;
      *((_DWORD *)v18 - 1) = v21;
    }
    while ( (unsigned int)v19 < *(_DWORD *)(v13 + 20) );
    v28 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v21 = 1;
    v28 = *(_QWORD *)(a1 + 24);
  }
  v29 = sub_BDD3C0(a1, v21, v18);
  *(_QWORD *)v105 = v29;
  v106 = v28;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  sub_14B9B80(*(_QWORD *)(a1 + 16) + 7456LL, v81);
  v33 = *(_WORD *)(*(_QWORD *)v105 + 4LL);
  if ( !v33 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)v105 + 30LL) & 2) == 0 )
      goto LABEL_18;
LABEL_45:
    *(_QWORD *)v94 = *(_QWORD *)(a1 + 24);
    v51 = sub_15D1F10(*(_QWORD *)v105);
    sub_180C5A0(&v102, "lambda-body");
    v52 = v94[0];
    v53 = sub_15E3D10(
            v94[0],
            (int)&v102,
            (int)&qword_18D6CD0,
            0,
            0,
            v51,
            1,
            v63,
            v65,
            v69,
            v73,
            v77,
            (int)v81,
            v84,
            v89,
            v94[0],
            a1,
            (int)v100,
            v101,
            v102,
            v103,
            v104,
            v105[0],
            v106,
            v107,
            v108,
            (int)v109,
            v110,
            v111,
            v112,
            v113,
            v114);
    v56 = sub_15DC610(v52, v53, 0, 0, v54, v55, v67, v72, v76, v80, v83, v87, v91, v95, v99, v100);
    v57 = v56;
    if ( v56 )
      ++*(_DWORD *)(v56 + 8);
    v89 = *(_QWORD *)(v97 + 24);
    v58 = sub_15E1B70(v89);
    v59 = v58;
    if ( v58 )
      ++*(_DWORD *)(v58 + 8);
    sub_8F8A20(*(_QWORD *)(v97 + 16));
    sub_8EA730(*(_QWORD *)(v97 + 16));
    v60 = *(_QWORD *)v105;
    if ( *(_QWORD *)v105 == v57 )
    {
      if ( v59 )
      {
        v40 = (*(_DWORD *)(v59 + 8))-- == 1;
        if ( v40 )
          sub_15D7BC0(v89, v59);
      }
      if ( !v57 )
        goto LABEL_18;
    }
    else
    {
      if ( *(_QWORD *)v105 )
      {
        v61 = v106;
        v40 = (*(_DWORD *)(*(_QWORD *)v105 + 8LL))-- == 1;
        if ( v40 )
          sub_15D7BC0(v61, v60);
      }
      *(_QWORD *)v105 = v57;
      if ( !v57 )
      {
        if ( v59 )
        {
          v40 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v40 )
            sub_15D7BC0(v89, v59);
        }
        goto LABEL_18;
      }
      v62 = *(_DWORD *)(v57 + 8);
      *(_DWORD *)(v57 + 8) = v62 + 1;
      if ( !v59 )
        goto LABEL_58;
      v40 = (*(_DWORD *)(v59 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v89, v59);
    }
    v62 = *(_DWORD *)(v57 + 8) - 1;
LABEL_58:
    *(_DWORD *)(v57 + 8) = v62;
    if ( !v62 )
      sub_15D7BC0(*(_QWORD *)v96, v57);
    goto LABEL_18;
  }
  if ( v33 == 2 )
    goto LABEL_45;
LABEL_18:
  sub_B6F780(
    *(_QWORD **)(v97 + 16),
    (__int64)v10,
    0,
    a3,
    a4,
    a5,
    v30,
    v31,
    v32,
    v65,
    v69,
    v73,
    v77,
    (__int64)v81,
    v84,
    v89);
  sub_B6F780(*(_QWORD **)(v97 + 16), *(__int64 *)v105, 0, a3, a4, a5, v34, v35, v36, v66, v70, v74, v78, v82, v85, v90);
  v37 = sub_BD4E90(v97, *(_DWORD **)v105, v10);
  v38 = *(_QWORD *)v105;
  v98 = v37;
  if ( *(_QWORD *)v105 )
  {
    v39 = v106;
    v40 = (*(_DWORD *)(*(_QWORD *)v105 + 8LL))-- == 1;
    if ( v40 )
      sub_15D7BC0(v39, v38);
  }
  v109 = (__int64 *)&off_1C4CA60;
  if ( v128 )
    sub_186B220((void *)(v128 - 8));
  v41 = v126;
  if ( v126 )
  {
    v42 = v127;
    v40 = (*(_DWORD *)(v126 + 8))-- == 1;
    if ( v40 )
      sub_15D7BC0(v42, v41);
  }
  v43 = v124;
  if ( v124 )
  {
    v44 = v125;
    v40 = (*(_DWORD *)(v124 + 8))-- == 1;
    if ( v40 )
      sub_15D7BC0(v44, v43);
  }
  v45 = v122;
  if ( v122 )
  {
    v46 = v123;
    v40 = (*(_DWORD *)(v122 + 8))-- == 1;
    if ( v40 )
      sub_15D7BC0(v46, v45);
  }
  v120[0] = &qword_1C637E8;
  sub_15841B0(v75);
  v118[0] = &qword_1C637E8;
  sub_15841B0(v79);
  if ( v117 )
    sub_186B220((void *)(v117 - 8));
  v47 = v18;
  sub_15841B0(*(_QWORD *)v86);
  v48 = (unsigned __int64)&v18[*((unsigned int *)v18 - 1)];
  if ( (unsigned __int64)v18 < v48 )
  {
    do
    {
      while ( 1 )
      {
        v49 = *v47;
        if ( *v47 )
        {
          v40 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v47 >= v48 )
          goto LABEL_40;
      }
      ++v47;
      sub_15D7BC0(v12, v49);
    }
    while ( (unsigned __int64)v47 < v48 );
  }
LABEL_40:
  sub_186B220(v18 - 1);
  if ( v10 )
  {
    v40 = v10[2]-- == 1;
    if ( v40 )
      sub_15D7BC0(v71, v10);
  }
  return v98;
}

