__int64 __fastcall sub_B86AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // r8
  void **v9; // r14
  void **v10; // r13
  void **v11; // r14
  void **v12; // r13
  char *v13; // r13
  char *v14; // rdi
  char *v15; // r14
  char *v16; // rdi
  void **v17; // r14
  void **v18; // r13
  void **v19; // r14
  void **v20; // r13
  void **v21; // r14
  void **v22; // r13
  void **v23; // r13
  void **v24; // rbp
  void **v25; // r13
  void **v26; // rbp
  void **v27; // r13
  void **v28; // rbp
  void **v29; // r13
  void **v30; // rbp
  void **v31; // r13
  void **v32; // rbp
  void **v33; // r13
  void **v34; // rbp
  void **v35; // r13
  void **v36; // rbp
  char *v37; // rbp
  char *v38; // rdi
  char *v39; // r13
  char *v40; // rdi
  void **v41; // r13
  void **v42; // rbp
  void **v43; // r13
  void **v44; // rbp
  void **v45; // r13
  void **v46; // rbp
  void **v47; // rbp
  void **v48; // rbx
  void **v49; // rbp
  void **v50; // rbx
  void **v51; // rbp
  void **v52; // rbx
  void **v53; // rbp
  void **v54; // rbx
  void **v55; // rbp
  void **v56; // rbx
  __int64 v58; // [rsp+0h] [rbp-6F8h] BYREF
  void *v59; // [rsp+F8h] [rbp-600h]
  void **v60; // [rsp+100h] [rbp-5F8h]
  void *v61; // [rsp+110h] [rbp-5E8h]
  void **v62; // [rsp+118h] [rbp-5E0h]
  void *v63; // [rsp+128h] [rbp-5D0h]
  void **v64; // [rsp+130h] [rbp-5C8h]
  void *v65; // [rsp+140h] [rbp-5B8h]
  void **v66; // [rsp+148h] [rbp-5B0h]
  void *v67; // [rsp+158h] [rbp-5A0h]
  void **v68; // [rsp+160h] [rbp-598h]
  void *v69; // [rsp+188h] [rbp-570h]
  __int64 v70; // [rsp+198h] [rbp-560h] BYREF
  void *v71; // [rsp+1A8h] [rbp-550h]
  __int64 v72; // [rsp+1B8h] [rbp-540h] BYREF
  void *v73; // [rsp+1C8h] [rbp-530h]
  __int64 v74; // [rsp+1D8h] [rbp-520h] BYREF
  void *v75; // [rsp+1E8h] [rbp-510h]
  __int64 v76; // [rsp+1F8h] [rbp-500h] BYREF
  void *v77; // [rsp+208h] [rbp-4F0h]
  void **v78; // [rsp+210h] [rbp-4E8h]
  void *v79; // [rsp+220h] [rbp-4D8h]
  void **v80; // [rsp+228h] [rbp-4D0h]
  void *v81; // [rsp+240h] [rbp-4B8h]
  void **v82; // [rsp+248h] [rbp-4B0h]
  __int64 v83; // [rsp+258h] [rbp-4A0h] BYREF
  void *v84; // [rsp+268h] [rbp-490h]
  void *v85; // [rsp+288h] [rbp-470h]
  void **v86; // [rsp+290h] [rbp-468h]
  void *v87; // [rsp+2A0h] [rbp-458h]
  __int64 v88; // [rsp+2B0h] [rbp-448h] BYREF
  void *v89; // [rsp+2C0h] [rbp-438h]
  __int64 v90; // [rsp+2D0h] [rbp-428h] BYREF
  void *v91; // [rsp+2F8h] [rbp-400h]
  void **v92; // [rsp+300h] [rbp-3F8h]
  void *v93; // [rsp+310h] [rbp-3E8h]
  __int64 v94; // [rsp+320h] [rbp-3D8h] BYREF
  void *v95; // [rsp+338h] [rbp-3C0h]
  __int64 v96; // [rsp+348h] [rbp-3B0h] BYREF
  int v97; // [rsp+360h] [rbp-398h] BYREF
  char v98; // [rsp+3B9h] [rbp-33Fh]
  void *v99; // [rsp+458h] [rbp-2A0h]
  void **v100; // [rsp+460h] [rbp-298h]
  void *v101; // [rsp+470h] [rbp-288h]
  void **v102; // [rsp+478h] [rbp-280h]
  void *v103; // [rsp+488h] [rbp-270h]
  void **v104; // [rsp+490h] [rbp-268h]
  void *v105; // [rsp+4A0h] [rbp-258h]
  void **v106; // [rsp+4A8h] [rbp-250h]
  void *v107; // [rsp+4B8h] [rbp-240h]
  void **v108; // [rsp+4C0h] [rbp-238h]
  void *v109; // [rsp+4E8h] [rbp-210h]
  __int64 v110; // [rsp+4F8h] [rbp-200h] BYREF
  void *v111; // [rsp+508h] [rbp-1F0h]
  __int64 v112; // [rsp+518h] [rbp-1E0h] BYREF
  void *v113; // [rsp+528h] [rbp-1D0h]
  __int64 v114; // [rsp+538h] [rbp-1C0h] BYREF
  void *v115; // [rsp+548h] [rbp-1B0h]
  __int64 v116; // [rsp+558h] [rbp-1A0h] BYREF
  void *v117; // [rsp+568h] [rbp-190h]
  void **v118; // [rsp+570h] [rbp-188h]
  void *v119; // [rsp+580h] [rbp-178h]
  void **v120; // [rsp+588h] [rbp-170h]
  void *v121; // [rsp+5A0h] [rbp-158h]
  void **v122; // [rsp+5A8h] [rbp-150h]
  __int64 v123; // [rsp+5B8h] [rbp-140h] BYREF
  void *v124; // [rsp+5C8h] [rbp-130h]
  void *v125; // [rsp+5E8h] [rbp-110h]
  void **v126; // [rsp+5F0h] [rbp-108h]
  void *v127; // [rsp+600h] [rbp-F8h]
  __int64 v128; // [rsp+610h] [rbp-E8h] BYREF
  void *v129; // [rsp+620h] [rbp-D8h]
  __int64 v130; // [rsp+630h] [rbp-C8h] BYREF
  void *v131; // [rsp+658h] [rbp-A0h]
  void **v132; // [rsp+660h] [rbp-98h]
  void *v133; // [rsp+670h] [rbp-88h]
  __int64 v134; // [rsp+680h] [rbp-78h] BYREF
  void *v135; // [rsp+698h] [rbp-60h]
  __int64 v136; // [rsp+6A8h] [rbp-50h] BYREF

  sub_FEA220(&v58);
  sub_FEA220(&v97);
  v8 = (unsigned __int64)((v97 & 0x1000) != 0) << 27;
  sub_B85C90(
    &a7,
    a1,
    ((unsigned __int64)(v98 & 1) << 47)
  | ((unsigned __int64)((v97 & 0x10000080) == 128) << 34)
  | ((unsigned __int64)((v97 & 0x8000000) != 0) << 33)
  | ((unsigned __int64)(((BYTE1(v97) >> 4) ^ 1) & 1) << 30)
  | ((unsigned __int64)(((BYTE1(v97) >> 3) ^ 1) & 1) << 29)
  | ((unsigned __int64)((v97 & 2) != 0) << 28)
  | v8
  | ((unsigned __int64)(v97 & 1) << 26)
  | ((unsigned __int64)((v97 & 0x800) != 0) << 25)
  | ((unsigned __int64)((v97 & 0x1008) != 0) << 24)
  | ((unsigned __int64)((v97 & 0x800) != 0) << 9)
  | ((unsigned __int64)((v97 & 0x4000000) != 0) << 23)
  | 0x660800442002LL,
    0,
    v8);
  if ( v135 != &v136 )
    operator delete(v135);
  if ( v133 != &v134 )
    operator delete(v133);
  v9 = v132;
  v10 = (void **)v131;
  if ( v132 != v131 )
  {
    do
    {
      while ( *v10 != v10 + 2 )
      {
        operator delete(*v10);
        v10 += 4;
        if ( v9 == v10 )
          goto LABEL_8;
      }
      v10 += 4;
    }
    while ( v9 != v10 );
LABEL_8:
    v10 = (void **)v131;
  }
  if ( v10 )
    operator delete(v10);
  if ( v129 != &v130 )
    operator delete(v129);
  if ( v127 != &v128 )
    operator delete(v127);
  v11 = v126;
  v12 = (void **)v125;
  if ( v126 != v125 )
  {
    do
    {
      while ( *v12 != v12 + 2 )
      {
        operator delete(*v12);
        v12 += 7;
        if ( v11 == v12 )
          goto LABEL_18;
      }
      v12 += 7;
    }
    while ( v11 != v12 );
LABEL_18:
    v12 = (void **)v125;
  }
  if ( v12 )
    operator delete(v12);
  v13 = (char *)v124;
  if ( v124 )
  {
    while ( 1 )
    {
      sub_998560((__int64)&v123, *((_QWORD **)v13 + 3));
      v14 = *((char **)v13 + 8);
      v15 = *((char **)v13 + 2);
      if ( v14 != v13 + 80 )
        operator delete(v14);
      v16 = *((char **)v13 + 4);
      if ( v16 == v13 + 48 )
      {
        operator delete(v13);
        if ( !v15 )
          break;
      }
      else
      {
        operator delete(v16);
        operator delete(v13);
        if ( !v15 )
          break;
      }
      v13 = v15;
    }
  }
  v17 = v122;
  v18 = (void **)v121;
  if ( v122 != v121 )
  {
    do
    {
      while ( *v18 != v18 + 2 )
      {
        operator delete(*v18);
        v18 += 4;
        if ( v17 == v18 )
          goto LABEL_31;
      }
      v18 += 4;
    }
    while ( v17 != v18 );
LABEL_31:
    v18 = (void **)v121;
  }
  if ( v18 )
    operator delete(v18);
  v19 = v120;
  v20 = (void **)v119;
  if ( v120 != v119 )
  {
    do
    {
      while ( *v20 != v20 + 2 )
      {
        operator delete(*v20);
        v20 += 4;
        if ( v19 == v20 )
          goto LABEL_37;
      }
      v20 += 4;
    }
    while ( v19 != v20 );
LABEL_37:
    v20 = (void **)v119;
  }
  if ( v20 )
    operator delete(v20);
  v21 = v118;
  v22 = (void **)v117;
  if ( v118 != v117 )
  {
    do
    {
      while ( *v22 != v22 + 2 )
      {
        operator delete(*v22);
        v22 += 4;
        if ( v21 == v22 )
          goto LABEL_43;
      }
      v22 += 4;
    }
    while ( v21 != v22 );
LABEL_43:
    v22 = (void **)v117;
  }
  if ( v22 )
    operator delete(v22);
  if ( v115 != &v116 )
    operator delete(v115);
  if ( v113 != &v114 )
    operator delete(v113);
  if ( v111 != &v112 )
    operator delete(v111);
  if ( v109 != &v110 )
    operator delete(v109);
  v23 = v108;
  v24 = (void **)v107;
  if ( v108 != v107 )
  {
    do
    {
      while ( *v24 != v24 + 2 )
      {
        operator delete(*v24);
        v24 += 4;
        if ( v23 == v24 )
          goto LABEL_57;
      }
      v24 += 4;
    }
    while ( v23 != v24 );
LABEL_57:
    v24 = (void **)v107;
  }
  if ( v24 )
    operator delete(v24);
  v25 = v106;
  v26 = (void **)v105;
  if ( v106 != v105 )
  {
    do
    {
      while ( *v26 != v26 + 2 )
      {
        operator delete(*v26);
        v26 += 4;
        if ( v25 == v26 )
          goto LABEL_63;
      }
      v26 += 4;
    }
    while ( v25 != v26 );
LABEL_63:
    v26 = (void **)v105;
  }
  if ( v26 )
    operator delete(v26);
  v27 = v104;
  v28 = (void **)v103;
  if ( v104 != v103 )
  {
    do
    {
      while ( *v28 != v28 + 2 )
      {
        operator delete(*v28);
        v28 += 4;
        if ( v27 == v28 )
          goto LABEL_69;
      }
      v28 += 4;
    }
    while ( v27 != v28 );
LABEL_69:
    v28 = (void **)v103;
  }
  if ( v28 )
    operator delete(v28);
  v29 = v102;
  v30 = (void **)v101;
  if ( v102 != v101 )
  {
    do
    {
      while ( *v30 != v30 + 2 )
      {
        operator delete(*v30);
        v30 += 4;
        if ( v29 == v30 )
          goto LABEL_75;
      }
      v30 += 4;
    }
    while ( v29 != v30 );
LABEL_75:
    v30 = (void **)v101;
  }
  if ( v30 )
    operator delete(v30);
  v31 = v100;
  v32 = (void **)v99;
  if ( v100 != v99 )
  {
    do
    {
      while ( *v32 != v32 + 2 )
      {
        operator delete(*v32);
        v32 += 4;
        if ( v31 == v32 )
          goto LABEL_81;
      }
      v32 += 4;
    }
    while ( v31 != v32 );
LABEL_81:
    v32 = (void **)v99;
  }
  if ( v32 )
    operator delete(v32);
  if ( v95 != &v96 )
    operator delete(v95);
  if ( v93 != &v94 )
    operator delete(v93);
  v33 = v92;
  v34 = (void **)v91;
  if ( v92 != v91 )
  {
    do
    {
      while ( *v34 != v34 + 2 )
      {
        operator delete(*v34);
        v34 += 4;
        if ( v33 == v34 )
          goto LABEL_91;
      }
      v34 += 4;
    }
    while ( v33 != v34 );
LABEL_91:
    v34 = (void **)v91;
  }
  if ( v34 )
    operator delete(v34);
  if ( v89 != &v90 )
    operator delete(v89);
  if ( v87 != &v88 )
    operator delete(v87);
  v35 = v86;
  v36 = (void **)v85;
  if ( v86 != v85 )
  {
    do
    {
      while ( *v36 != v36 + 2 )
      {
        operator delete(*v36);
        v36 += 7;
        if ( v35 == v36 )
          goto LABEL_101;
      }
      v36 += 7;
    }
    while ( v35 != v36 );
LABEL_101:
    v36 = (void **)v85;
  }
  if ( v36 )
    operator delete(v36);
  v37 = (char *)v84;
  if ( v84 )
  {
    while ( 1 )
    {
      sub_998560((__int64)&v83, *((_QWORD **)v37 + 3));
      v38 = *((char **)v37 + 8);
      v39 = *((char **)v37 + 2);
      if ( v38 != v37 + 80 )
        operator delete(v38);
      v40 = *((char **)v37 + 4);
      if ( v40 == v37 + 48 )
      {
        operator delete(v37);
        if ( !v39 )
          break;
      }
      else
      {
        operator delete(v40);
        operator delete(v37);
        if ( !v39 )
          break;
      }
      v37 = v39;
    }
  }
  v41 = v82;
  v42 = (void **)v81;
  if ( v82 != v81 )
  {
    do
    {
      while ( *v42 != v42 + 2 )
      {
        operator delete(*v42);
        v42 += 4;
        if ( v42 == v41 )
          goto LABEL_114;
      }
      v42 += 4;
    }
    while ( v41 != v42 );
LABEL_114:
    v42 = (void **)v81;
  }
  if ( v42 )
    operator delete(v42);
  v43 = v80;
  v44 = (void **)v79;
  if ( v80 != v79 )
  {
    do
    {
      while ( *v44 != v44 + 2 )
      {
        operator delete(*v44);
        v44 += 4;
        if ( v43 == v44 )
          goto LABEL_120;
      }
      v44 += 4;
    }
    while ( v43 != v44 );
LABEL_120:
    v44 = (void **)v79;
  }
  if ( v44 )
    operator delete(v44);
  v45 = v78;
  v46 = (void **)v77;
  if ( v78 != v77 )
  {
    do
    {
      while ( *v46 != v46 + 2 )
      {
        operator delete(*v46);
        v46 += 4;
        if ( v45 == v46 )
          goto LABEL_126;
      }
      v46 += 4;
    }
    while ( v45 != v46 );
LABEL_126:
    v46 = (void **)v77;
  }
  if ( v46 )
    operator delete(v46);
  if ( v75 != &v76 )
    operator delete(v75);
  if ( v73 != &v74 )
    operator delete(v73);
  if ( v71 != &v72 )
    operator delete(v71);
  if ( v69 != &v70 )
    operator delete(v69);
  v47 = v68;
  v48 = (void **)v67;
  if ( v68 != v67 )
  {
    do
    {
      while ( *v48 != v48 + 2 )
      {
        operator delete(*v48);
        v48 += 4;
        if ( v48 == v47 )
          goto LABEL_140;
      }
      v48 += 4;
    }
    while ( v47 != v48 );
LABEL_140:
    v48 = (void **)v67;
  }
  if ( v48 )
    operator delete(v48);
  v49 = v66;
  v50 = (void **)v65;
  if ( v66 != v65 )
  {
    do
    {
      while ( *v50 != v50 + 2 )
      {
        operator delete(*v50);
        v50 += 4;
        if ( v50 == v49 )
          goto LABEL_146;
      }
      v50 += 4;
    }
    while ( v49 != v50 );
LABEL_146:
    v50 = (void **)v65;
  }
  if ( v50 )
    operator delete(v50);
  v51 = v64;
  v52 = (void **)v63;
  if ( v64 != v63 )
  {
    do
    {
      while ( *v52 != v52 + 2 )
      {
        operator delete(*v52);
        v52 += 4;
        if ( v52 == v51 )
          goto LABEL_152;
      }
      v52 += 4;
    }
    while ( v51 != v52 );
LABEL_152:
    v52 = (void **)v63;
  }
  if ( v52 )
    operator delete(v52);
  v53 = v62;
  v54 = (void **)v61;
  if ( v62 != v61 )
  {
    do
    {
      while ( *v54 != v54 + 2 )
      {
        operator delete(*v54);
        v54 += 4;
        if ( v54 == v53 )
          goto LABEL_158;
      }
      v54 += 4;
    }
    while ( v53 != v54 );
LABEL_158:
    v54 = (void **)v61;
  }
  if ( v54 )
    operator delete(v54);
  v55 = v60;
  v56 = (void **)v59;
  if ( v60 != v59 )
  {
    do
    {
      while ( *v56 != v56 + 2 )
      {
        operator delete(*v56);
        v56 += 4;
        if ( v56 == v55 )
          goto LABEL_164;
      }
      v56 += 4;
    }
    while ( v55 != v56 );
LABEL_164:
    v56 = (void **)v59;
  }
  if ( v56 )
    operator delete(v56);
  return a1;
}
