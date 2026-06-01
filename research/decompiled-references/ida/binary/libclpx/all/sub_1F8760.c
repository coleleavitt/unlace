double __fastcall sub_1F8760(
        char **a1,
        __int64 a2,
        char **a3,
        int *a4,
        __int64 a5,
        CoinModelHash *a6,
        double a7,
        int *a8,
        int *a9,
        char **a10,
        _DWORD *a11)
{
  int v11; // r11d
  __int16 *v12; // r12
  __int64 v13; // rbx
  __int16 *v14; // r14
  char *v15; // r9
  char *v16; // r13
  char v17; // r8
  unsigned __int64 v18; // rcx
  int v19; // r15d
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r8
  double v23; // xmm0_8
  char **v24; // rsi
  __int64 v25; // rax
  int v26; // r11d
  __int16 *v27; // rcx
  char *v28; // rax
  char *v29; // r8
  const char *v30; // rbx
  char *v31; // r12
  const char *v32; // rdi
  int v33; // eax
  char *v34; // r8
  int v35; // eax
  int v36; // eax
  int v37; // eax
  signed int v38; // eax
  char *v39; // rsi
  int v40; // eax
  char *v41; // r9
  int v42; // r11d
  char *v43; // rcx
  double v44; // xmm0_8
  int v45; // eax
  size_t v46; // rax
  char *v47; // rax
  char *v48; // rsi
  char *v49; // rdx
  double v50; // xmm0_8
  char *v51; // rax
  const char *v53; // rdi
  int v54; // esi
  int v55; // edx
  int v56; // r8d
  const char *v57; // rax
  int v58; // eax
  __int64 v59; // r8
  int v60; // esi
  char *v61; // rax
  __int64 v62; // rbx
  int v63; // r12d
  int v64; // r14d
  int v65; // r13d
  int v66; // eax
  char *v67; // rdx
  unsigned __int64 v68; // rdx
  __int64 v69; // r13
  __int64 v70; // rcx
  __int64 v71; // r12
  size_t v72; // r13
  size_t v73; // rdx
  void *v74; // rsp
  __int16 *v75; // r15
  __int64 v76; // r14
  char *v77; // r10
  int v78; // edi
  int v79; // edx
  __int64 v80; // rsi
  __int64 v81; // rax
  char *v82; // r13
  int v83; // eax
  signed int v84; // edi
  __int64 v85; // rax
  double v86; // xmm1_8
  double v87; // xmm0_8
  bool v88; // zf
  int v89; // edi
  int v90; // r8d
  int i; // r8d
  __int64 v92; // rdx
  int j; // eax
  int *v94; // rcx
  _BYTE v95[8]; // [rsp+0h] [rbp-890h] BYREF
  unsigned __int64 v96; // [rsp+8h] [rbp-888h]
  int v97; // [rsp+14h] [rbp-87Ch]
  char *v98; // [rsp+18h] [rbp-878h]
  __int16 *v99; // [rsp+20h] [rbp-870h]
  char *v100; // [rsp+28h] [rbp-868h]
  __int64 v101; // [rsp+30h] [rbp-860h]
  double v102; // [rsp+38h] [rbp-858h]
  CoinModelHash *v103; // [rsp+40h] [rbp-850h]
  char **v104; // [rsp+48h] [rbp-848h]
  int *v105; // [rsp+50h] [rbp-840h]
  char **v106; // [rsp+58h] [rbp-838h]
  __int64 v107; // [rsp+60h] [rbp-830h]
  double v108; // [rsp+68h] [rbp-828h]
  char *v109; // [rsp+70h] [rbp-820h]
  char *s; // [rsp+78h] [rbp-818h]
  int v111; // [rsp+80h] [rbp-810h]
  int v112; // [rsp+84h] [rbp-80Ch]
  void *v113; // [rsp+88h] [rbp-808h]
  _WORD src[200]; // [rsp+90h] [rbp-800h] BYREF
  _BYTE v115[1648]; // [rsp+220h] [rbp-670h] BYREF

  v11 = 0;
  *(double *)&v12 = COERCE_DOUBLE(src);
  v13 = 0;
  v14 = src;
  v105 = a4;
  v103 = a6;
  src[0] = 0;
  v102 = a7;
  *(double *)&v15 = COERCE_DOUBLE(qword_297640);
  *a11 = 0;
  v16 = v115;
  v101 = a5;
  v17 = -13;
  v113 = v115;
  v104 = a1;
  v18 = 200;
  v107 = a2;
  v106 = a3;
  *a9 = -2;
  v112 = 0;
  v111 = 0;
  while ( 1 )
  {
    v19 = v17;
    if ( v17 == -13 )
      goto LABEL_7;
    v20 = *a9;
    if ( (_DWORD)v20 == -2 )
      break;
LABEL_4:
    if ( (int)v20 <= 0 )
      goto LABEL_17;
    if ( (int)v20 <= 261 )
      goto LABEL_44;
    v19 += 2;
    v21 = 2;
    if ( (unsigned int)v19 <= 0x40 )
      goto LABEL_19;
LABEL_7:
    if ( !*((_BYTE *)qword_297680 + (int)v13) )
      goto LABEL_21;
    v22 = *((unsigned __int8 *)qword_2976A0 + *((unsigned __int8 *)qword_297680 + (int)v13));
    v23 = *(double *)&v16[8 * (1 - (int)v22)];
    switch ( (int)v13 )
    {
      case 4:
        v23 = *(double *)v16;
        v78 = -7;
        v79 = 3;
        v80 = -2;
        v81 = -8;
        goto LABEL_76;
      case 5:
        v78 = -7;
        v79 = 3;
        v80 = -2;
        v23 = *(double *)(*(_QWORD *)v16 + 16LL);
        v81 = -8;
        goto LABEL_76;
      case 12:
        v78 = -13;
        v79 = 2;
        v112 = 0;
        v81 = -8 * v22;
        v80 = -2 * v22;
        goto LABEL_76;
      case 15:
        v78 = -7;
        v79 = 3;
        v80 = -4;
        v81 = -16;
        v23 = -*(double *)v16;
        goto LABEL_76;
      case 22:
        return *((double *)v16 - 1);
      case 23:
        v23 = *(double *)v16;
        v78 = -7;
        v79 = 3;
        v80 = -6;
        *(_QWORD *)(*((_QWORD *)v16 - 2) + 16LL) = *(_QWORD *)v16;
        v81 = -24;
        goto LABEL_76;
      case 25:
      case 66:
      case 67:
        v23 = *((double *)v16 - 1);
        v78 = -7;
        v79 = 3;
        v80 = -6;
        v81 = -24;
        goto LABEL_76;
      case 26:
        v78 = -7;
        v79 = 3;
        v80 = -6;
        v81 = -24;
        v23 = *((double *)v16 - 2) - *(double *)v16;
        goto LABEL_76;
      case 27:
        v78 = -7;
        v79 = 3;
        v80 = -6;
        v81 = -24;
        v23 = *((double *)v16 - 2) + *(double *)v16;
        goto LABEL_76;
      case 28:
        v78 = -7;
        v79 = 3;
        v80 = -6;
        v81 = -24;
        v23 = *((double *)v16 - 2) * *(double *)v16;
        goto LABEL_76;
      case 29:
        v78 = -7;
        v79 = 3;
        v80 = -6;
        v81 = -24;
        v23 = *((double *)v16 - 2) / *(double *)v16;
        goto LABEL_76;
      case 30:
      case 65:
        v86 = *(double *)v16;
        v108 = *(double *)&v18;
        v87 = *((double *)v16 - 2);
        LODWORD(v109) = v11;
        s = v15;
        v23 = pow(v87, v86);
        v78 = -7;
        v79 = 3;
        v80 = -6;
        v81 = -24;
        v15 = s;
        v11 = (int)v109;
        *(double *)&v18 = v108;
        goto LABEL_76;
      case 31:
        v85 = *((_QWORD *)v16 - 3);
        v108 = *(double *)&v18;
        LODWORD(v109) = v11;
        s = v15;
        v23 = *((double *)v16 - 1);
        (*(void (__fastcall **)(__int64, double))(v85 + 16))(v22, v23);
        v78 = -7;
        v79 = 3;
        v80 = -8;
        v81 = -32;
        v15 = s;
        v11 = (int)v109;
        *(double *)&v18 = v108;
        goto LABEL_76;
      default:
        v81 = -8 * v22;
        v80 = -2 * v22;
        v79 = *((unsigned __int8 *)qword_2976C0 + *((unsigned __int8 *)qword_297680 + (int)v13)) - 16;
        v78 = byte_297621[v79];
LABEL_76:
        v12 = (__int16 *)((char *)v12 + v80);
        v82 = &v16[v81];
        v83 = *v12;
        v39 = v82 + 8;
        *((double *)v82 + 1) = v23;
        v84 = v83 + v78;
        if ( (unsigned int)v84 <= 0x40 && v83 == *((char *)qword_297580 + v84) )
          v13 = *((unsigned __int8 *)qword_2975E0 + v84);
        else
          v13 = *((char *)qword_297660 + v79);
        break;
    }
LABEL_69:
    v68 = 2 * v18;
    v12[1] = v13;
    if ( v12 + 1 < &v14[v18 - 1] )
    {
      v16 = v39;
      v77 = (char *)v113;
      ++v12;
      v75 = v14;
    }
    else
    {
      LODWORD(v109) = v11;
      s = v15;
      v69 = v12 + 1 - v14 + 1;
      if ( v18 > 0x270F )
        return 2.0;
      v70 = 10000;
      v71 = 2 * v69;
      if ( v68 <= 0x2710 )
        v70 = v68;
      v72 = 8 * v69;
      v73 = v71;
      v108 = *(double *)&v70;
      v74 = alloca(10 * v70 + 22);
      v75 = (__int16 *)v95;
      v12 = (__int16 *)&v95[v71 - 2];
      memcpy(v95, v14, v73);
      v76 = 2LL * *(_QWORD *)&v108;
      v77 = (char *)memcpy(&v95[2 * *(_QWORD *)&v108], v113, v72);
      v16 = &v77[v72 - 8];
      *(double *)&v18 = v108;
      v15 = s;
      v11 = (int)v109;
      if ( v12 >= (__int16 *)&v95[v76 - 2] )
        return 1.0;
    }
    v113 = v77;
    v14 = v75;
    v17 = v15[(int)v13];
  }
  v53 = (const char *)(v11 + v107);
  v54 = *v53;
  v55 = v54;
  switch ( v54 )
  {
    case 32:
    case 9:
      v56 = v11;
      v57 = (const char *)(v107 + v11 + 1);
      do
      {
        do
        {
          v54 = *v57;
          ++v56;
          v53 = v57++;
          v55 = v54;
        }
        while ( v54 == 9 );
      }
      while ( v54 == 32 );
      break;
    case -1:
      goto LABEL_17;
    case 46:
      v108 = *(double *)&v18;
      v109 = v15;
      LODWORD(s) = v56;
      sscanf(v53, "%lf", a10);
      v89 = 1;
      v90 = (int)s;
      v15 = v109;
      *(double *)&v18 = v108;
      goto LABEL_97;
    default:
      v56 = v11;
      break;
  }
  if ( (unsigned int)(v54 - 48) > 9 )
  {
    v99 = (__int16 *)v18;
    v100 = v15;
    LODWORD(v108) = v56;
    LODWORD(v109) = v55;
    LODWORD(s) = v54;
    v58 = isalpha(v54);
    v20 = (int)v109;
    v59 = SLODWORD(v108);
    v15 = v100;
    v18 = (unsigned __int64)v99;
    if ( v58 )
    {
      v60 = *v105;
      if ( *v105 )
      {
        v61 = *v106;
      }
      else
      {
        *v105 = 40;
        v100 = (char *)v18;
        v108 = *(double *)&v15;
        LODWORD(v109) = v59;
        LODWORD(s) = v20;
        v61 = (char *)malloc(0x29u);
        v94 = v105;
        *(double *)&v15 = v108;
        v59 = (int)v109;
        LOBYTE(v20) = (_BYTE)s;
        *v106 = v61;
        v60 = *v94;
        v18 = (unsigned __int64)v100;
      }
      LODWORD(v108) = v13;
      v99 = v12;
      v62 = 0;
      v97 = v19;
      v100 = (char *)v14;
      LOBYTE(v19) = v20;
      v98 = v16;
      v96 = v18;
      v63 = v59 + 1;
      v109 = (char *)(v107 + v59);
      while ( 1 )
      {
        if ( v60 == (_DWORD)v62 )
        {
          s = v15;
          *v105 = 2 * v62;
          v61 = (char *)realloc(v61, 2 * (int)v62 + 1);
          v15 = s;
          *v106 = v61;
        }
        v61[v62] = v19;
        v64 = v62 + 1;
        s = v15;
        v65 = v63 + v62;
        v19 = v109[++v62];
        v66 = isalnum(v19);
        v15 = s;
        if ( !v66 )
          break;
        v60 = *v105;
        v61 = *v106;
      }
      v24 = v106;
      v25 = v64;
      v26 = v65;
      v13 = SLODWORD(v108);
      v16 = v98;
      v12 = v99;
      v19 = v97;
      v27 = (__int16 *)v96;
      v14 = (__int16 *)v100;
      (*v106)[v25] = 0;
      v28 = *v24;
      v98 = *v24;
      v29 = *v104;
      if ( *v104 )
      {
        LODWORD(v109) = v13;
        v108 = *(double *)&v12;
        v30 = v28;
        v31 = v29;
        LODWORD(v100) = v26;
        v99 = v27;
        do
        {
          v32 = *(const char **)v31;
          s = v15;
          v33 = strcmp(v32, v30);
          v15 = s;
          if ( !v33 )
          {
            v13 = (int)v109;
            v34 = v31;
            v11 = (int)v100;
            *(double *)&v12 = v108;
            v18 = (unsigned __int64)v99;
            v20 = *((int *)v34 + 2);
            *a10 = v34;
            goto LABEL_14;
          }
          v31 = *((char **)v31 + 3);
        }
        while ( v31 );
        v13 = (int)v109;
        *(double *)&v12 = v108;
        v26 = (int)v100;
        v27 = v99;
      }
      v108 = *(double *)&v27;
      LODWORD(v109) = v26;
      s = v15;
      v40 = CoinModelHash::hash(v103, v98);
      v41 = s;
      v42 = (int)v109;
      v43 = *(char **)&v108;
      if ( v40 < 0 )
      {
        v44 = v102;
        *a8 = 3;
      }
      else
      {
        v44 = *(double *)(v101 + 8LL * v40);
        if ( v102 == v44 )
        {
          v45 = 1;
          if ( *a8 > 0 )
            v45 = *a8;
          *a8 = v45;
        }
      }
      v98 = v43;
      LODWORD(v99) = v42;
      v100 = v41;
      v108 = v44;
      s = *v106;
      v109 = (char *)malloc(0x20u);
      v46 = strlen(s);
      v47 = (char *)malloc(v46 + 1);
      v48 = s;
      *(_QWORD *)v109 = v47;
      strcpy(v47, v48);
      v49 = v109;
      v50 = v108;
      v15 = v100;
      v11 = (int)v99;
      v51 = *v104;
      *v104 = v109;
      *((double *)v49 + 2) = v50;
      v18 = (unsigned __int64)v98;
      *((_DWORD *)v49 + 2) = 259;
      *((_QWORD *)v49 + 3) = v51;
      *a10 = v49;
      v20 = 259;
      *a9 = 259;
      goto LABEL_44;
    }
    v11 = LODWORD(v108) + 1;
    if ( (_DWORD)s )
    {
LABEL_14:
      *a9 = v20;
      if ( (_DWORD)v20 != 10 )
        goto LABEL_4;
      if ( !v111 )
      {
        v111 = 1;
        goto LABEL_44;
      }
    }
    else
    {
      v11 = LODWORD(v108);
      v88 = v111 == 0;
      *a9 = 10;
      if ( v88 )
      {
        v111 = 1;
        v20 = 10;
LABEL_44:
        v21 = *((unsigned __int8 *)qword_2976E0 + v20);
        goto LABEL_45;
      }
    }
    ++v111;
LABEL_17:
    *a9 = 0;
    v21 = 0;
    goto LABEL_18;
  }
  v108 = *(double *)&v18;
  v109 = v15;
  LODWORD(s) = v56;
  sscanf(v53, "%lf", a10);
  *(double *)&v18 = v108;
  v15 = v109;
  v89 = 0;
  v90 = (int)s;
LABEL_97:
  v11 = v90 + 1;
  for ( i = 0; ; i = 1 )
  {
    while ( 1 )
    {
      v92 = v11;
      for ( j = *(char *)(v107 + v11); (unsigned int)(j - 48) <= 9; j = *(char *)(v107 + v11) )
        v92 = ++v11;
      if ( j != 46 || v89 )
        break;
      ++v11;
      v89 = 1;
    }
    if ( j != 101 || i )
      break;
    if ( ((*(_BYTE *)(v107 + v92 + 1) - 43) & 0xFD) != 0 )
      ++v11;
    else
      v11 += 2;
  }
  *a9 = 258;
  v21 = 3;
LABEL_45:
  v19 += v21;
LABEL_18:
  if ( (unsigned int)v19 > 0x40 )
    goto LABEL_7;
LABEL_19:
  if ( *((char *)qword_297580 + v19) != v21 )
    goto LABEL_7;
  v35 = *((unsigned __int8 *)qword_2975E0 + v19);
  if ( *((_BYTE *)qword_2975E0 + v19) )
  {
    if ( v35 == 2 )
      return 0.0;
    if ( *a9 )
      *a9 = -2;
    v13 = v35;
    v39 = v16 + 8;
    v67 = *a10;
    v112 = (v112 == 0) + v112 - 1;
    *((_QWORD *)v16 + 1) = v67;
    goto LABEL_69;
  }
LABEL_21:
  if ( v112 )
  {
    if ( v112 != 3 )
      goto LABEL_28;
    if ( *a9 > 0 )
    {
      *a9 = -2;
      goto LABEL_28;
    }
    if ( *a9 )
      goto LABEL_28;
    return 1.0;
  }
  v36 = 2;
  if ( *a8 >= 2 )
    v36 = *a8;
  *a8 = v36;
  ++*a11;
LABEL_28:
  while ( 1 )
  {
    v37 = v15[v13];
    if ( v37 != -13 )
    {
      v38 = v37 + 1;
      if ( (unsigned int)v38 <= 0x40 && *((_BYTE *)qword_297580 + v38) == 1 )
      {
        v13 = *((unsigned __int8 *)qword_2975E0 + v38);
        if ( *((_BYTE *)qword_2975E0 + v38) )
          break;
      }
    }
    if ( v14 == v12 )
      return 1.0;
    v13 = *--v12;
    v16 -= 8;
  }
  if ( (_DWORD)v13 != 2 )
  {
    v39 = v16 + 8;
    v112 = 3;
    *((_QWORD *)v16 + 1) = *a10;
    goto LABEL_69;
  }
  return 0.0;
}

