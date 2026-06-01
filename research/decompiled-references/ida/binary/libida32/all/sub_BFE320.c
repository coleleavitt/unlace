void __fastcall sub_BFE320(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 *v9; // rdi
  __int64 *v10; // rsi
  __int64 *v11; // rdi
  __int64 *v12; // rdi
  __int64 *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 *v18; // rdi
  __int64 *v19; // rax
  char v20; // cl
  __int64 *v21; // rsi
  char v22; // si
  int v23; // eax
  __int64 *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  char v28; // al
  __int64 v29; // rcx
  __int64 *v30; // rax
  int v31; // eax
  unsigned __int8 v32; // dl
  __int64 *v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rsi
  __int64 *v37; // rax
  __int64 v38; // rsi
  __int64 *v39; // rax
  __int64 *v40; // r14
  __int64 *v41; // rax
  __int64 v42; // rsi
  __int64 *v43; // rbx
  __int64 *v44; // rbp
  __int64 v45; // rdi
  __int64 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rbx
  __int64 v50; // rbp
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 *v53; // rax
  __int64 v54; // rsi
  __int64 *i; // rbx
  __int64 *v56; // rbp
  __int64 v57; // rdi
  __int64 *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rbx
  __int64 v62; // rbp
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 *v65; // rax
  __int64 *v66; // rax
  __int64 *v67; // rax
  char v68; // r13
  _BOOL8 v69; // rsi
  char v70; // r13
  _BOOL8 v71; // rsi
  int v72; // ecx
  __int64 *v73; // rsi
  __int64 *v74; // rax
  __int64 *v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rsi
  __int64 *v78; // rax
  unsigned int v82; // [rsp+50h] [rbp-1A8h]
  __int64 v83; // [rsp+50h] [rbp-1A8h]
  __int64 v84; // [rsp+50h] [rbp-1A8h]
  __int64 *v87; // [rsp+68h] [rbp-190h]
  __int64 v88; // [rsp+70h] [rbp-188h]
  __int64 v89; // [rsp+70h] [rbp-188h]
  __int64 v90; // [rsp+80h] [rbp-178h] BYREF
  __int64 *v91; // [rsp+88h] [rbp-170h]
  _QWORD v92[4]; // [rsp+A0h] [rbp-158h] BYREF
  _QWORD v93[4]; // [rsp+C0h] [rbp-138h] BYREF
  _QWORD v94[4]; // [rsp+E0h] [rbp-118h] BYREF
  _QWORD v95[4]; // [rsp+100h] [rbp-F8h] BYREF
  _QWORD v96[4]; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v97[2]; // [rsp+140h] [rbp-B8h] BYREF
  char v98; // [rsp+154h] [rbp-A4h]
  __int64 v99; // [rsp+160h] [rbp-98h] BYREF
  __int64 *v100; // [rsp+168h] [rbp-90h]
  __int64 v101; // [rsp+180h] [rbp-78h] BYREF
  __int64 v102; // [rsp+188h] [rbp-70h]
  char v103; // [rsp+194h] [rbp-64h]
  __int64 v104; // [rsp+1A0h] [rbp-58h] BYREF
  __int64 *v105; // [rsp+1A8h] [rbp-50h]

  v8 = sub_21D5390();
  if ( *a4 == v8 )
    sub_21DC120(&v101, a4);
  else
    sub_21D5A60(&v101, a4);
  if ( v101 == v8 )
  {
    if ( (*(_BYTE *)(v102 + 20) & 8) == 0 )
      goto LABEL_98;
    sub_21DC230(&v101);
    v26 = v101;
  }
  else
  {
    if ( (v103 & 8) == 0 )
    {
LABEL_5:
      sub_21D5A90(&v104, &v101);
      goto LABEL_6;
    }
    sub_21D66D0(&v101);
    v26 = v101;
  }
  if ( v8 != v26 )
    goto LABEL_5;
LABEL_98:
  sub_21DC190(&v104, &v101);
LABEL_6:
  v87 = a3;
  if ( *a3 == v8 )
    sub_21DC120(v97, a3);
  else
    sub_21D5A60(v97, a3);
  if ( v97[0] == v8 )
  {
    if ( (*(_BYTE *)(v97[1] + 20) & 8) == 0 )
      goto LABEL_100;
    sub_21DC230(v97);
    v25 = v97[0];
  }
  else
  {
    if ( (v98 & 8) == 0 )
    {
LABEL_10:
      sub_21D5A90(&v99, v97);
      goto LABEL_11;
    }
    sub_21D66D0(v97);
    v25 = v97[0];
  }
  if ( v8 != v25 )
    goto LABEL_10;
LABEL_100:
  sub_21DC190(&v99, v97);
LABEL_11:
  v9 = &v99;
  if ( v8 == v99 )
    v9 = v100;
  if ( (unsigned __int8)sub_21D7760(v9) )
  {
    v10 = &v99;
    if ( v8 != v99 )
    {
LABEL_15:
      sub_21D5A60(&v90, v10);
LABEL_16:
      v11 = &v90;
      if ( v8 == v90 )
        v11 = v91;
      sub_21D94F0(v11);
      goto LABEL_19;
    }
LABEL_189:
    sub_21DC120(&v90, v10);
    goto LABEL_16;
  }
  v18 = &v104;
  if ( v8 == v104 )
    v18 = v105;
  if ( (unsigned __int8)sub_21D7760(v18) )
  {
    v10 = &v104;
    if ( v8 != v104 )
      goto LABEL_15;
    goto LABEL_189;
  }
  v19 = &v99;
  if ( v99 == v8 )
    v19 = v100;
  v20 = *((_BYTE *)v19 + 20);
  if ( (v20 & 7) == 1 )
  {
    sub_9718E0((__int64)&v90, &v104);
  }
  else
  {
    v21 = &v104;
    if ( v104 == v8 )
      v21 = v105;
    v22 = *((_BYTE *)v21 + 20);
    if ( (v22 & 7) == 1 )
    {
      sub_9718E0((__int64)&v90, &v99);
    }
    else if ( (v20 & 7) == 3 && (v22 & 7) == 3 && (v72 = v20 & 8, (v72 != 0) != ((v22 & 8) != 0)) )
    {
      v73 = &v99;
      if ( (_BYTE)v72 )
        v73 = &v104;
      sub_9718E0((__int64)&v90, v73);
    }
    else
    {
      if ( v99 == v8 )
        v23 = sub_21DD2E0(&v99, &v104);
      else
        v23 = sub_21D6700(&v99, &v104);
      v24 = &v99;
      if ( !v23 )
        v24 = &v104;
      if ( v8 == *v24 )
        sub_21DC120(&v90, v24);
      else
        sub_21D5A60(&v90, v24);
    }
  }
LABEL_19:
  sub_971860(&v99);
  sub_971860(v97);
  sub_971860(&v104);
  sub_971860(&v101);
  v12 = &v90;
  if ( v90 == v8 )
    v12 = v91;
  v82 = 0;
  if ( (*((_BYTE *)v12 + 20) & 7u) > 1 )
  {
    v82 = -(int)sub_21DBAA0();
    sub_9718E0((__int64)&v101, a3);
    sub_BF3320((__int64)&v104, &v101, v82, 1u);
    sub_BF3A80(a3, &v104);
    sub_971860(&v104);
    sub_971860(&v101);
    sub_9718E0((__int64)&v101, a4);
    sub_BF3320((__int64)&v104, &v101, v82, 1u);
    sub_BF3A80(a4, &v104);
    sub_971860(&v104);
    sub_971860(&v101);
    v13 = a4;
    if ( v8 != *a4 )
      goto LABEL_23;
LABEL_126:
    sub_21DC120(&v104, v13);
    goto LABEL_24;
  }
  v13 = a4;
  if ( v8 == *a4 )
    goto LABEL_126;
LABEL_23:
  sub_21D5A60(&v104, v13);
LABEL_24:
  if ( v8 == v104 )
    sub_21DDB80(&v104, a4, 1);
  else
    sub_21DAE00(&v104, a4, 1);
  if ( v8 == *a3 )
    sub_21DC120(&v101, a3);
  else
    sub_21D5A60(&v101, a3);
  if ( v8 == v101 )
    sub_21DDB80(&v101, a3, 1);
  else
    sub_21DAE00(&v101, a3, 1);
  if ( v8 == v101 )
    sub_21DC120(v92, &v101);
  else
    sub_21D5A60(v92, &v101);
  if ( v8 == v92[0] )
    sub_21DCE30(v92, &v104, 1);
  else
    sub_21D9B20(v92, &v104, 1);
  sub_971860(&v101);
  sub_971860(&v104);
  if ( v8 == *a2 )
    sub_21DC120(v94, a2);
  else
    sub_21D5A60(v94, a2);
  if ( v8 == v94[0] )
    sub_21DDB80(v94, a4, 1);
  else
    sub_21DAE00(v94, a4, 1);
  if ( v8 == *a1 )
    sub_21DC120(v93, a1);
  else
    sub_21D5A60(v93, a1);
  if ( v8 == v93[0] )
    sub_21DDB80(v93, a3, 1);
  else
    sub_21DAE00(v93, a3, 1);
  if ( v8 == v93[0] )
    sub_21DC120(v95, v93);
  else
    sub_21D5A60(v95, v93);
  if ( v8 == v95[0] )
    sub_21DCE30(v95, v94, 1);
  else
    sub_21D9B20(v95, v94, 1);
  if ( v8 == v95[0] )
    sub_21DC120(v96, v95);
  else
    sub_21D5A60(v96, v95);
  if ( v8 == v96[0] )
    sub_21DD7B0(v96, v92, 1);
  else
    sub_21D9740(v96, v92, 1);
  v14 = v96[0];
  if ( v8 != v96[0] )
  {
    sub_21D5A60(&v101, v96);
    sub_21DBB90(&v99, &v101, v82, 1);
    sub_21D5A90(&v104, &v99);
    sub_21DE690(v97, &v104, v14);
    sub_21D5AF0(&v104);
    sub_21D5AF0(&v99);
    sub_21D5AF0(&v101);
    goto LABEL_52;
  }
  sub_21DE830(&v101, v96, v82, 1);
  sub_21DC190(&v104, &v101);
  sub_21DC190(v97, &v104);
  v53 = v105;
  if ( !v105 )
    goto LABEL_171;
  v54 = 3 * *(v105 - 1);
  if ( v105 == &v105[v54] )
    goto LABEL_170;
  v88 = v8;
  for ( i = &v105[v54]; ; i -= 3 )
  {
    v56 = i - 3;
    v57 = (__int64)(i - 3);
    if ( v14 == *(i - 3) )
      break;
    sub_21D5AF0(v57);
    if ( v105 == v56 )
      goto LABEL_169;
LABEL_166:
    ;
  }
  sub_A2B2D0(v57);
  if ( v105 != v56 )
    goto LABEL_166;
LABEL_169:
  v58 = i;
  v53 = i - 3;
  v8 = v88;
  v54 = 3 * *(v58 - 4);
LABEL_170:
  operator delete[](v53 - 1, v54 * 8 + 8);
LABEL_171:
  v59 = v102;
  if ( !v102 )
    goto LABEL_52;
  v60 = 24LL * *(_QWORD *)(v102 - 8);
  if ( v102 == v102 + v60 )
    goto LABEL_179;
  v89 = v8;
  v61 = v102 + v60;
  while ( 2 )
  {
    v62 = v61 - 24;
    v63 = v61 - 24;
    if ( v14 != *(_QWORD *)(v61 - 24) )
    {
      sub_21D5AF0(v63);
      if ( v102 == v62 )
        break;
      goto LABEL_175;
    }
    sub_A2B2D0(v63);
    if ( v102 != v62 )
    {
LABEL_175:
      v61 -= 24;
      continue;
    }
    break;
  }
  v64 = v61;
  v59 = v61 - 24;
  v8 = v89;
  v60 = 24LL * *(_QWORD *)(v64 - 32);
LABEL_179:
  operator delete[]((void *)(v59 - 8), v60 + 8);
LABEL_52:
  sub_BF3A80(a5, v97);
  sub_971860(v97);
  sub_971860(v96);
  sub_971860(v95);
  sub_971860(v93);
  sub_971860(v94);
  if ( v8 == *a1 )
    sub_21DC120(v94, a1);
  else
    sub_21D5A60(v94, a1);
  if ( v8 == v94[0] )
    sub_21DDB80(v94, a4, 1);
  else
    sub_21DAE00(v94, a4, 1);
  if ( v8 == *a2 )
    sub_21DC120(v93, a2);
  else
    sub_21D5A60(v93, a2);
  if ( v8 == v93[0] )
    sub_21DDB80(v93, a3, 1);
  else
    sub_21DAE00(v93, a3, 1);
  if ( v8 == v93[0] )
    sub_21DC120(v95, v93);
  else
    sub_21D5A60(v95, v93);
  if ( v8 == v95[0] )
    sub_21DCC30(v95, v94, 1);
  else
    sub_21D9B10(v95, v94, 1);
  if ( v8 == v95[0] )
    sub_21DC120(v96, v95);
  else
    sub_21D5A60(v96, v95);
  if ( v8 == v96[0] )
    sub_21DD7B0(v96, v92, 1);
  else
    sub_21D9740(v96, v92, 1);
  v15 = v96[0];
  if ( v8 != v96[0] )
  {
    sub_21D5A60(&v101, v96);
    sub_21DBB90(&v99, &v101, v82, 1);
    sub_21D5A90(&v104, &v99);
    sub_21DE690(v97, &v104, v15);
    sub_21D5AF0(&v104);
    sub_21D5AF0(&v99);
    sub_21D5AF0(&v101);
    goto LABEL_70;
  }
  sub_21DE830(&v101, v96, v82, 1);
  sub_21DC190(&v104, &v101);
  sub_21DC190(v97, &v104);
  v41 = v105;
  if ( !v105 )
    goto LABEL_145;
  v42 = 3 * *(v105 - 1);
  if ( v105 == &v105[v42] )
    goto LABEL_144;
  v83 = v8;
  v43 = &v105[v42];
  while ( 2 )
  {
    v44 = v43 - 3;
    v45 = (__int64)(v43 - 3);
    if ( v15 != *(v43 - 3) )
    {
      sub_21D5AF0(v45);
      if ( v105 == v44 )
        break;
      goto LABEL_140;
    }
    sub_A2B2D0(v45);
    if ( v105 != v44 )
    {
LABEL_140:
      v43 -= 3;
      continue;
    }
    break;
  }
  v46 = v43;
  v41 = v43 - 3;
  v8 = v83;
  v42 = 3 * *(v46 - 4);
LABEL_144:
  operator delete[](v41 - 1, v42 * 8 + 8);
LABEL_145:
  v47 = v102;
  if ( !v102 )
    goto LABEL_70;
  v48 = 24LL * *(_QWORD *)(v102 - 8);
  if ( v102 == v102 + v48 )
    goto LABEL_153;
  v84 = v8;
  v49 = v102 + v48;
  while ( 2 )
  {
    v50 = v49 - 24;
    v51 = v49 - 24;
    if ( v15 != *(_QWORD *)(v49 - 24) )
    {
      sub_21D5AF0(v51);
      if ( v50 == v102 )
        break;
      goto LABEL_149;
    }
    sub_A2B2D0(v51);
    if ( v102 != v50 )
    {
LABEL_149:
      v49 -= 24;
      continue;
    }
    break;
  }
  v52 = v49;
  v47 = v49 - 24;
  v8 = v84;
  v48 = 24LL * *(_QWORD *)(v52 - 32);
LABEL_153:
  operator delete[]((void *)(v47 - 8), v48 + 8);
LABEL_70:
  sub_BF3A80((__int64 *)a6, v97);
  sub_971860(v97);
  sub_971860(v96);
  sub_971860(v95);
  sub_971860(v93);
  sub_971860(v94);
  v16 = *a5;
  v17 = a5;
  if ( *a5 == v8 )
    v17 = (__int64 *)a5[1];
  if ( (*((_BYTE *)v17 + 20) & 7) == 1 )
  {
    if ( *(_QWORD *)a6 == v8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a6 + 8) + 20LL) & 7) != 1 )
        goto LABEL_73;
    }
    else if ( (*(_BYTE *)(a6 + 20) & 7) != 1 )
    {
      goto LABEL_73;
    }
    v27 = v92;
    if ( v8 == v92[0] )
      v27 = (_QWORD *)v92[1];
    v28 = *((_BYTE *)v27 + 20);
    v29 = *a1;
    if ( (v28 & 7) == 3 && (v28 & 8) == 0 )
    {
      v66 = a1;
      if ( v8 == v29 )
        v66 = (__int64 *)a1[1];
      if ( (*((_BYTE *)v66 + 20) & 7) != 1 )
        goto LABEL_204;
      v74 = a2;
      if ( *a2 == v8 )
        v74 = (__int64 *)a2[1];
      if ( (*((_BYTE *)v74 + 20) & 7) != 1 )
      {
LABEL_204:
        v67 = a3;
        if ( *a3 == v8 )
          v67 = (__int64 *)a3[1];
        v68 = *((_BYTE *)v67 + 20);
        LODWORD(v104) = 0;
        sub_972040((__int64)&v101, v16, (unsigned int *)&v104);
        v69 = (v68 & 8) != 0;
        if ( v8 == v101 )
          sub_21DC3A0(&v101, v69);
        else
          sub_21D7780(&v101, v69);
        sub_9718E0((__int64)&v104, &v101);
        sub_BECD20(&v104, (__int64)a1);
        sub_BF3A80(a5, &v104);
        sub_971860(&v104);
        sub_971860(&v101);
        if ( *a3 == v8 )
          v87 = (__int64 *)a3[1];
        v70 = *((_BYTE *)v87 + 20);
        LODWORD(v104) = 0;
        sub_972040((__int64)&v101, *a5, (unsigned int *)&v104);
        v71 = (v70 & 8) != 0;
        if ( v8 == v101 )
          sub_21DC3A0(&v101, v71);
        else
          sub_21D7780(&v101, v71);
        sub_9718E0((__int64)&v104, &v101);
        sub_BECD20(&v104, (__int64)a2);
        sub_BF3A80((__int64 *)a6, &v104);
        sub_971860(&v104);
        sub_971860(&v101);
        goto LABEL_73;
      }
    }
    v30 = a1;
    if ( v8 == v29 )
      v30 = (__int64 *)a1[1];
    v31 = *((_BYTE *)v30 + 20) & 7;
    v32 = v31;
    if ( v31 )
    {
      v65 = a2;
      if ( *a2 == v8 )
        v65 = (__int64 *)a2[1];
      if ( (*((_BYTE *)v65 + 20) & 7) != 0 )
        goto LABEL_112;
    }
    v33 = a3;
    if ( *a3 == v8 )
      v33 = (__int64 *)a3[1];
    if ( (*((_BYTE *)v33 + 20) & 7u) <= 1 )
      goto LABEL_112;
    v75 = a4;
    if ( *a4 == v8 )
      v75 = (__int64 *)a4[1];
    if ( (*((_BYTE *)v75 + 20) & 7u) <= 1 )
    {
LABEL_112:
      v34 = &v90;
      if ( v90 == v8 )
        v34 = v91;
      if ( (*((_BYTE *)v34 + 20) & 7) != 0 || v32 <= 1u )
        goto LABEL_73;
      v35 = a2;
      if ( *a2 == v8 )
        v35 = (__int64 *)a2[1];
      if ( (*((_BYTE *)v35 + 20) & 7u) <= 1 )
        goto LABEL_73;
      v36 = *a3;
      v37 = a3;
      if ( *a3 == v8 )
        v37 = (__int64 *)a3[1];
      v104 = (*((_BYTE *)v37 + 20) & 7) == 0;
      sub_BFD6B0((__int64)&v101, v36, &v104);
      sub_BF3020(&v101, a3);
      sub_BF2EE0((__int64)&v104, &v101);
      sub_BF3A80(a3, &v104);
      sub_971860(&v104);
      sub_971860(&v101);
      v38 = *a4;
      v39 = a4;
      if ( *a4 == v8 )
        v39 = (__int64 *)a4[1];
      v104 = (*((_BYTE *)v39 + 20) & 7) == 0;
      sub_BFD6B0((__int64)&v101, v38, &v104);
      sub_BF3020(&v101, a4);
      sub_BF2EE0((__int64)&v104, &v101);
      sub_BF3A80(a4, &v104);
      sub_971860(&v104);
      sub_971860(&v101);
      sub_9718E0((__int64)&v99, a2);
      sub_BECD20(&v99, (__int64)a4);
      sub_9718E0((__int64)v97, a1);
      sub_BECD20(v97, (__int64)a3);
      sub_9718E0((__int64)&v101, v97);
      sub_BF2FA0(&v101, (__int64)&v99, 1u);
      LODWORD(v104) = 0;
      sub_972040((__int64)v96, *a5, (unsigned int *)&v104);
      sub_BF2F20(v96, 0);
      sub_9718E0((__int64)&v104, v96);
      sub_BECD20(&v104, (__int64)&v101);
      sub_BF3A80(a5, &v104);
      sub_971860(&v104);
      sub_971860(v96);
      sub_971860(&v101);
      sub_971860(v97);
      sub_971860(&v99);
      sub_9718E0((__int64)&v99, a1);
      sub_BECD20(&v99, (__int64)a4);
      sub_9718E0((__int64)v97, a2);
      sub_BECD20(v97, (__int64)a3);
      sub_9718E0((__int64)&v101, v97);
      sub_BF2FE0(&v101, (__int64)&v99, 1u);
      v40 = (__int64 *)a6;
      LODWORD(v104) = 0;
      sub_972040((__int64)v96, *(_QWORD *)a6, (unsigned int *)&v104);
      sub_BF2F20(v96, 0);
    }
    else
    {
      v76 = *a1;
      v104 = v32 == 0;
      sub_BFD6B0((__int64)&v101, v76, &v104);
      sub_BF3020(&v101, a1);
      sub_BF2EE0((__int64)&v104, &v101);
      sub_BF3A80(a1, &v104);
      sub_971860(&v104);
      sub_971860(&v101);
      v77 = *a2;
      v78 = a2;
      if ( *a2 == v8 )
        v78 = (__int64 *)a2[1];
      v104 = (*((_BYTE *)v78 + 20) & 7) == 0;
      sub_BFD6B0((__int64)&v101, v77, &v104);
      sub_BF3020(&v101, a2);
      sub_BF2EE0((__int64)&v104, &v101);
      sub_BF3A80(a2, &v104);
      sub_971860(&v104);
      sub_971860(&v101);
      sub_9718E0((__int64)&v99, a2);
      sub_BECD20(&v99, (__int64)a4);
      sub_9718E0((__int64)v97, a1);
      sub_BECD20(v97, (__int64)a3);
      sub_9718E0((__int64)&v101, v97);
      sub_BF2FA0(&v101, (__int64)&v99, 1u);
      LODWORD(v104) = 0;
      sub_972040((__int64)v96, *a5, (unsigned int *)&v104);
      sub_BF2F60(v96, 0);
      sub_9718E0((__int64)&v104, v96);
      sub_BECD20(&v104, (__int64)&v101);
      sub_BF3A80(a5, &v104);
      sub_971860(&v104);
      sub_971860(v96);
      sub_971860(&v101);
      sub_971860(v97);
      sub_971860(&v99);
      sub_9718E0((__int64)&v99, a1);
      sub_BECD20(&v99, (__int64)a4);
      sub_9718E0((__int64)v97, a2);
      sub_BECD20(v97, (__int64)a3);
      sub_9718E0((__int64)&v101, v97);
      sub_BF2FE0(&v101, (__int64)&v99, 1u);
      v40 = (__int64 *)a6;
      LODWORD(v104) = 0;
      sub_972040((__int64)v96, *(_QWORD *)a6, (unsigned int *)&v104);
      sub_BF2F60(v96, 0);
    }
    sub_9718E0((__int64)&v104, v96);
    sub_BECD20(&v104, (__int64)&v101);
    sub_BF3A80(v40, &v104);
    sub_971860(&v104);
    sub_971860(v96);
    sub_971860(&v101);
    sub_971860(v97);
    sub_971860(&v99);
  }
LABEL_73:
  sub_971860(v92);
  sub_971860(&v90);
}

