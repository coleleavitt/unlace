__int64 __fastcall sub_5726C0(__int64 ***a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 *a5)
{
  __int64 **v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 *v8; // rbx
  char v9; // r13
  __int64 v10; // rdx
  __int64 *v11; // rax
  char v12; // cl
  const char *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  _BYTE *v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rsi
  size_t v28; // rax
  __int64 v29; // r15
  const void *v30; // r8
  size_t v31; // r9
  size_t v32; // r10
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r15
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rsi
  __int64 v39; // r15
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // r15
  unsigned __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rsi
  size_t v47; // rax
  __int64 v48; // r15
  size_t v49; // r8
  size_t v50; // r9
  __int64 v51; // rsi
  unsigned __int64 v52; // rdx
  __int64 v54; // r15
  unsigned __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rsi
  __int64 v58; // r15
  unsigned __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rsi
  __int64 v62; // r14
  unsigned __int64 v63; // r15
  __int64 v64; // r8
  __int64 v65; // rsi
  __int64 v66; // r14
  unsigned __int64 v67; // r15
  __int64 v68; // r8
  __int64 v69; // rsi
  char v70; // r8
  unsigned __int64 v71; // rdx
  __int64 v72; // r9
  __int64 v73; // rsi
  __int64 v74; // r15
  unsigned __int64 v75; // rdx
  __int64 v76; // r9
  __int64 v77; // rsi
  __int64 v78; // r15
  unsigned __int64 v79; // rdx
  __int64 v80; // r9
  __int64 v81; // rsi
  __int64 v82; // r15
  unsigned __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rsi
  __int64 v86; // r15
  unsigned __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  void *src; // [rsp+0h] [rbp-58h]
  void *srcq; // [rsp+0h] [rbp-58h]
  void *srca; // [rsp+0h] [rbp-58h]
  void *srcp; // [rsp+0h] [rbp-58h]
  void *srcg; // [rsp+0h] [rbp-58h]
  void *srcm; // [rsp+0h] [rbp-58h]
  void *srcl; // [rsp+0h] [rbp-58h]
  void *srco; // [rsp+0h] [rbp-58h]
  void *srcn; // [rsp+0h] [rbp-58h]
  void *srci; // [rsp+0h] [rbp-58h]
  void *srch; // [rsp+0h] [rbp-58h]
  void *srck; // [rsp+0h] [rbp-58h]
  void *srcj; // [rsp+0h] [rbp-58h]
  void *srcd; // [rsp+0h] [rbp-58h]
  void *srcc; // [rsp+0h] [rbp-58h]
  void *srcb; // [rsp+0h] [rbp-58h]
  void *srcf; // [rsp+0h] [rbp-58h]
  void *srce; // [rsp+0h] [rbp-58h]
  size_t v125; // [rsp+8h] [rbp-50h]
  __int64 v126; // [rsp+8h] [rbp-50h]
  __int64 v127; // [rsp+8h] [rbp-50h]
  __int64 v128; // [rsp+8h] [rbp-50h]
  char v129; // [rsp+8h] [rbp-50h]
  char v130; // [rsp+8h] [rbp-50h]
  __int64 v131; // [rsp+8h] [rbp-50h]
  char v132; // [rsp+8h] [rbp-50h]
  __int64 v133; // [rsp+8h] [rbp-50h]
  __int64 v134; // [rsp+8h] [rbp-50h]
  size_t v135; // [rsp+8h] [rbp-50h]
  __int64 v136; // [rsp+8h] [rbp-50h]
  __int64 v137; // [rsp+8h] [rbp-50h]
  __int64 v138; // [rsp+8h] [rbp-50h]
  __int64 v139; // [rsp+8h] [rbp-50h]
  size_t v140; // [rsp+10h] [rbp-48h]
  _BYTE *v141; // [rsp+10h] [rbp-48h]
  __int64 v142; // [rsp+10h] [rbp-48h]
  __int64 v143; // [rsp+10h] [rbp-48h]
  __int64 v144; // [rsp+10h] [rbp-48h]
  const void *v145; // [rsp+10h] [rbp-48h]
  _BYTE *v146; // [rsp+10h] [rbp-48h]
  _BYTE *v147; // [rsp+10h] [rbp-48h]
  size_t v148; // [rsp+18h] [rbp-40h]

  v5 = *a1;
  v6 = *a3;
  v7 = *a5;
  *(_BYTE *)(*a1)[3] = 12;
  v8 = *v5;
  v9 = *(_BYTE *)v5[3];
  v10 = *a2 + 56 * v6;
  v11 = v5[2];
  v12 = *(_BYTE *)v11;
  if ( *(_QWORD *)(v10 + 8) )
  {
    v13 = *(const char **)v10;
    if ( v12 )
      goto LABEL_36;
  }
  else
  {
    v13 = haystack;
    if ( v12 )
      goto LABEL_43;
  }
  v14 = v8[1];
  v15 = v5[4][4];
  v16 = *(_BYTE **)(v15 + 280);
  if ( v16 )
  {
    if ( v16[1] )
    {
      if ( v14 )
      {
        v18 = v14 + 1;
        v17 = v8[1];
        --v14;
      }
      else
      {
        v17 = 1;
        v18 = 2;
      }
      v19 = *v8;
      if ( v8[2] < v18 )
      {
        v141 = *(_BYTE **)(v15 + 280);
        v126 = v17;
        srca = (void *)v18;
        v91 = qvector_reserve(*v5, v19, v18, 1);
        v16 = v141;
        v17 = v126;
        *v8 = v91;
        v18 = (unsigned __int64)srca;
        v19 = v91;
      }
      v8[1] = v18;
      *(_BYTE *)(v19 + v14) = 32;
      *(_BYTE *)(*v8 + v17) = 0;
      if ( *v16 )
      {
        v20 = v8[1];
        if ( v20 )
        {
          v21 = v20 + 1;
          v22 = v8[1];
          --v20;
        }
        else
        {
          v22 = 1;
          v21 = 2;
        }
        v23 = *v8;
        if ( v8[2] < v21 )
        {
          v147 = v16;
          v137 = v22;
          srcb = (void *)v21;
          v104 = qvector_reserve(v8, v23, v21, 1);
          v16 = v147;
          v22 = v137;
          *v8 = v104;
          v21 = (unsigned __int64)srcb;
          v23 = v104;
        }
        v8[1] = v21;
        *(_BYTE *)(v23 + v20) = 1;
        *(_BYTE *)(*v8 + v22) = 0;
        v24 = v8[1];
        if ( v24 )
        {
          v25 = v24 + 1;
          v26 = v8[1];
          --v24;
        }
        else
        {
          v26 = 1;
          v25 = 2;
        }
        v27 = *v8;
        if ( v8[2] < v25 )
        {
          v146 = v16;
          v136 = v26;
          srcc = (void *)v25;
          v103 = qvector_reserve(v8, v27, v25, 1);
          v16 = v146;
          v26 = v136;
          *v8 = v103;
          v25 = (unsigned __int64)srcc;
          v27 = v103;
        }
        v8[1] = v25;
        *(_BYTE *)(v27 + v24) = 32;
        src = v16;
        *(_BYTE *)(*v8 + v26) = 0;
        v28 = strlen(v16);
        v29 = v8[1];
        v30 = src;
        v31 = v28;
        v32 = v28;
        if ( v29 )
        {
          --v29;
          v32 = v28 + v29;
        }
        v33 = *v8;
        v34 = v32 + 1;
        if ( v8[2] < v32 + 1 )
        {
          v148 = v28;
          v145 = src;
          v135 = v32;
          srcd = (void *)(v32 + 1);
          v102 = qvector_reserve(v8, v33, v34, 1);
          v31 = v148;
          v30 = v145;
          v32 = v135;
          v34 = (__int64)srcd;
          *v8 = v102;
          v33 = v102;
        }
        v8[1] = v34;
        *(_BYTE *)(v33 + v32) = 0;
        memmove((void *)(v29 + *v8), v30, v31);
        v35 = v8[1];
        if ( v35 )
        {
          v36 = v35 + 1;
          v37 = v8[1];
          --v35;
        }
        else
        {
          v37 = 1;
          v36 = 2;
        }
        v38 = *v8;
        if ( v8[2] < v36 )
        {
          v139 = v37;
          srce = (void *)v36;
          v106 = qvector_reserve(v8, v38, v36, 1);
          v37 = v139;
          v36 = (unsigned __int64)srce;
          *v8 = v106;
          v38 = v106;
        }
        v8[1] = v36;
        *(_BYTE *)(v38 + v35) = 2;
        *(_BYTE *)(*v8 + v37) = 0;
        v39 = v8[1];
        if ( v39 )
        {
          v40 = v39 + 1;
          v41 = v8[1];
          --v39;
        }
        else
        {
          v41 = 1;
          v40 = 2;
        }
        v42 = *v8;
        if ( v8[2] < v40 )
        {
          v138 = v41;
          srcf = (void *)v40;
          v105 = qvector_reserve(v8, v42, v40, 1);
          v41 = v138;
          v40 = (unsigned __int64)srcf;
          *v8 = v105;
          v42 = v105;
        }
        v8[1] = v40;
        *(_BYTE *)(v42 + v39) = 32;
        *(_BYTE *)(*v8 + v41) = 0;
      }
      v43 = v8[1];
      if ( v43 )
      {
        v44 = v43 + 1;
        v45 = v8[1];
        --v43;
      }
      else
      {
        v45 = 1;
        v44 = 2;
      }
      v46 = *v8;
      if ( v8[2] < v44 )
      {
        v128 = v45;
        srcg = (void *)v44;
        v93 = qvector_reserve(v8, v46, v44, 1);
        v45 = v128;
        v44 = (unsigned __int64)srcg;
        *v8 = v93;
        v46 = v93;
      }
      v8[1] = v44;
      *(_BYTE *)(v46 + v43) = 32;
      *(_BYTE *)(*v8 + v45) = 0;
LABEL_36:
      if ( !*v13 )
        goto LABEL_42;
      goto LABEL_37;
    }
    v70 = *v16;
  }
  else
  {
    v70 = 124;
  }
  if ( v14 )
  {
    v71 = v14 + 1;
    v72 = v8[1];
    --v14;
  }
  else
  {
    v72 = 1;
    v71 = 2;
  }
  v73 = *v8;
  if ( v8[2] < v71 )
  {
    v143 = v72;
    v130 = v70;
    srcl = (void *)v71;
    v95 = qvector_reserve(*v5, v73, v71, 1);
    v72 = v143;
    v70 = v130;
    *v8 = v95;
    v71 = (unsigned __int64)srcl;
    v73 = v95;
  }
  v8[1] = v71;
  *(_BYTE *)(v73 + v14) = 1;
  *(_BYTE *)(*v8 + v72) = 0;
  v74 = v8[1];
  if ( v74 )
  {
    v75 = v74 + 1;
    v76 = v8[1];
    --v74;
  }
  else
  {
    v76 = 1;
    v75 = 2;
  }
  v77 = *v8;
  if ( v8[2] < v75 )
  {
    v142 = v76;
    v129 = v70;
    srcm = (void *)v75;
    v94 = qvector_reserve(v8, v77, v75, 1);
    v76 = v142;
    v70 = v129;
    *v8 = v94;
    v75 = (unsigned __int64)srcm;
    v77 = v94;
  }
  v8[1] = v75;
  *(_BYTE *)(v77 + v74) = 9;
  *(_BYTE *)(*v8 + v76) = 0;
  v78 = v8[1];
  if ( v78 )
  {
    v79 = v78 + 1;
    v80 = v8[1];
    --v78;
  }
  else
  {
    v80 = 1;
    v79 = 2;
  }
  v81 = *v8;
  if ( v8[2] < v79 )
  {
    v144 = v80;
    v132 = v70;
    srcn = (void *)v79;
    v97 = qvector_reserve(v8, v81, v79, 1);
    v80 = v144;
    v70 = v132;
    *v8 = v97;
    v79 = (unsigned __int64)srcn;
    v81 = v97;
  }
  v8[1] = v79;
  *(_BYTE *)(v81 + v78) = v70;
  *(_BYTE *)(*v8 + v80) = 0;
  v82 = v8[1];
  if ( v82 )
  {
    v83 = v82 + 1;
    v84 = v8[1];
    --v82;
  }
  else
  {
    v84 = 1;
    v83 = 2;
  }
  v85 = *v8;
  if ( v8[2] < v83 )
  {
    v131 = v84;
    srco = (void *)v83;
    v96 = qvector_reserve(v8, v85, v83, 1);
    v84 = v131;
    v83 = (unsigned __int64)srco;
    *v8 = v96;
    v85 = v96;
  }
  v8[1] = v83;
  *(_BYTE *)(v85 + v82) = 2;
  *(_BYTE *)(*v8 + v84) = 0;
  v86 = v8[1];
  if ( v86 )
  {
    v87 = v86 + 1;
    v88 = v8[1];
    --v86;
  }
  else
  {
    v88 = 1;
    v87 = 2;
  }
  v89 = *v8;
  if ( v8[2] < v87 )
  {
    v127 = v88;
    srcp = (void *)v87;
    v92 = qvector_reserve(v8, v89, v87, 1);
    v88 = v127;
    v87 = (unsigned __int64)srcp;
    *v8 = v92;
    v89 = v92;
  }
  v8[1] = v87;
  *(_BYTE *)(v89 + v86) = 9;
  *(_BYTE *)(*v8 + v88) = 0;
  if ( !*v13 )
    goto LABEL_42;
LABEL_37:
  if ( v9 )
  {
    v54 = v8[1];
    if ( v54 )
    {
      v55 = v54 + 1;
      v56 = v8[1];
      --v54;
    }
    else
    {
      v56 = 1;
      v55 = 2;
    }
    v57 = *v8;
    if ( v8[2] < v55 )
    {
      v134 = v56;
      srch = (void *)v55;
      v99 = qvector_reserve(v8, v57, v55, 1);
      v56 = v134;
      v55 = (unsigned __int64)srch;
      *v8 = v99;
      v57 = v99;
    }
    v8[1] = v55;
    *(_BYTE *)(v57 + v54) = 1;
    *(_BYTE *)(*v8 + v56) = 0;
    v58 = v8[1];
    if ( v58 )
    {
      v59 = v58 + 1;
      v60 = v8[1];
      --v58;
    }
    else
    {
      v60 = 1;
      v59 = 2;
    }
    v61 = *v8;
    if ( v8[2] < v59 )
    {
      v133 = v60;
      srci = (void *)v59;
      v98 = qvector_reserve(v8, v61, v59, 1);
      v60 = v133;
      v59 = (unsigned __int64)srci;
      *v8 = v98;
      v61 = v98;
    }
    v8[1] = v59;
    *(_BYTE *)(v61 + v58) = v9;
    *(_BYTE *)(*v8 + v60) = 0;
    if ( !v13 )
      goto LABEL_55;
LABEL_39:
    v47 = strlen(v13);
    v48 = v8[1];
    v49 = v47;
    v50 = v47;
    if ( v48 )
    {
      --v48;
      v51 = *v8;
      v50 = v47 + v48;
      v52 = v47 + v48 + 1;
      if ( v8[2] >= v52 )
        goto LABEL_41;
    }
    else
    {
      v51 = *v8;
      v52 = v47 + 1;
      if ( v8[2] >= v47 + 1 )
        goto LABEL_41;
    }
    v140 = v47;
    v125 = v50;
    srcq = (void *)v52;
    v90 = qvector_reserve(v8, v51, v52, 1);
    v49 = v140;
    v50 = v125;
    *v8 = v90;
    v52 = (unsigned __int64)srcq;
    v51 = v90;
LABEL_41:
    v8[1] = v52;
    *(_BYTE *)(v51 + v50) = 0;
    memmove((void *)(v48 + *v8), v13, v49);
    if ( !v9 )
      goto LABEL_42;
LABEL_55:
    v62 = v8[1];
    if ( v62 )
    {
      v63 = v62 + 1;
      v64 = v8[1];
      --v62;
    }
    else
    {
      v64 = 1;
      v63 = 2;
    }
    v65 = *v8;
    if ( v8[2] < v63 )
    {
      srcj = (void *)v64;
      v101 = qvector_reserve(v8, v65, v63, 1);
      v64 = (__int64)srcj;
      *v8 = v101;
      v65 = v101;
    }
    v8[1] = v63;
    *(_BYTE *)(v65 + v62) = 2;
    *(_BYTE *)(*v8 + v64) = 0;
    v66 = v8[1];
    if ( v66 )
    {
      v67 = v66 + 1;
      v68 = v8[1];
      --v66;
    }
    else
    {
      v68 = 1;
      v67 = 2;
    }
    v69 = *v8;
    if ( v8[2] < v67 )
    {
      srck = (void *)v68;
      v100 = qvector_reserve(v8, v69, v67, 1);
      v68 = (__int64)srck;
      *v8 = v100;
      v69 = v100;
    }
    v8[1] = v67;
    *(_BYTE *)(v69 + v66) = v9;
    *(_BYTE *)(*v8 + v68) = 0;
    goto LABEL_42;
  }
  if ( v13 )
    goto LABEL_39;
LABEL_42:
  v11 = v5[2];
LABEL_43:
  *(_BYTE *)v11 = 0;
  *v5[1] &= ~v7;
  return 0;
}
