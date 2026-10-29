__int64 __fastcall sub_48D650(int a1, unsigned int *a2, int *a3, __int64 a4)
{
  char **exception; // r12
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  void **v16; // rbx
  void ***v17; // r15
  __int64 v18; // rax
  void ***v19; // r12
  __int64 v20; // rax
  void **v21; // r13
  void *v22; // rbp
  void **v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rax
  unsigned int v26; // r12d
  unsigned int v27; // eax
  void *v28; // rbp
  __int64 v29; // rsi
  int v30; // r15d
  int *v31; // rax
  unsigned int j; // r14d
  int v33; // edx
  unsigned int *v34; // rax
  _QWORD *v35; // r13
  __int64 v36; // rax
  _QWORD *v37; // rbp
  void *v38; // r14
  _QWORD *v39; // rsi
  void *v40; // rdi
  __int64 v41; // r13
  int v42; // edx
  _QWORD *v43; // rax
  int v44; // edx
  __int64 v45; // rdx
  char v46; // si
  char v47; // di
  __int64 v48; // rdx
  void *v49; // r13
  char v50; // di
  __int64 v51; // rax
  int v52; // edx
  void *v53; // rbp
  _QWORD *v54; // r14
  unsigned int v55; // eax
  unsigned int v56; // edi
  unsigned int v57; // r13d
  size_t v58; // rdi
  unsigned int *v59; // rax
  int *v60; // r15
  unsigned int *v61; // r9
  __int64 v62; // rax
  _QWORD *v63; // rdx
  int *v64; // rdi
  int *i; // rax
  int v66; // ecx
  char v67; // si
  __int64 v68; // rcx
  char v69; // si
  __int64 v70; // rcx
  __int64 v71; // rax
  int *v72; // rbp
  int *v73; // r12
  unsigned int *v74; // r15
  void *v75; // r13
  _QWORD *v76; // rsi
  __int64 v77; // r15
  __int64 v78; // rdx
  _QWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rdx
  void *v82; // rbp
  int v83; // r12d
  unsigned int v84; // eax
  _QWORD *v85; // rbp
  void *v86; // r14
  __int64 v87; // rdx
  __int64 v88; // rcx
  _QWORD *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  _QWORD *v93; // r13
  _QWORD *v94; // rbp
  void *v95; // r14
  _QWORD *v96; // rsi
  __int64 v97; // [rsp+8h] [rbp-4A0h]
  unsigned int v99; // [rsp+18h] [rbp-490h]
  __int64 *v100; // [rsp+18h] [rbp-490h]
  unsigned int v101; // [rsp+20h] [rbp-488h]
  unsigned int *v102; // [rsp+20h] [rbp-488h]
  unsigned int v103; // [rsp+2Ch] [rbp-47Ch]
  int v105; // [rsp+48h] [rbp-460h]
  unsigned int v106; // [rsp+4Ch] [rbp-45Ch]
  _QWORD *v107; // [rsp+68h] [rbp-440h] BYREF
  _QWORD v108[2]; // [rsp+70h] [rbp-438h] BYREF
  _QWORD v109[2]; // [rsp+80h] [rbp-428h] BYREF
  __int64 v110; // [rsp+90h] [rbp-418h] BYREF
  __int64 v111; // [rsp+98h] [rbp-410h]
  __int64 v112; // [rsp+A0h] [rbp-408h] BYREF
  __int64 v113; // [rsp+A8h] [rbp-400h]
  __int64 v114; // [rsp+B0h] [rbp-3F8h] BYREF
  __int64 v115; // [rsp+B8h] [rbp-3F0h]
  __int64 v116; // [rsp+C0h] [rbp-3E8h] BYREF
  __int64 v117; // [rsp+C8h] [rbp-3E0h]
  _QWORD v118[6]; // [rsp+D0h] [rbp-3D8h] BYREF
  int v119; // [rsp+100h] [rbp-3A8h]
  _BYTE *v120; // [rsp+108h] [rbp-3A0h]
  __int64 v121; // [rsp+110h] [rbp-398h]
  __int64 v122; // [rsp+118h] [rbp-390h]
  __int64 v123; // [rsp+120h] [rbp-388h]
  __int64 v124; // [rsp+128h] [rbp-380h]
  _BYTE *v125; // [rsp+130h] [rbp-378h] BYREF
  __int64 v126; // [rsp+138h] [rbp-370h]
  __int64 v127; // [rsp+140h] [rbp-368h]
  __int64 v128; // [rsp+148h] [rbp-360h]
  __int64 v129; // [rsp+150h] [rbp-358h]
  __int64 v130; // [rsp+158h] [rbp-350h]
  int v131; // [rsp+160h] [rbp-348h]
  _BYTE *v132; // [rsp+168h] [rbp-340h]
  __int64 v133; // [rsp+170h] [rbp-338h]
  __int64 v134; // [rsp+178h] [rbp-330h]
  __int64 v135; // [rsp+180h] [rbp-328h]
  __int64 v136; // [rsp+188h] [rbp-320h]
  _BYTE v137[600]; // [rsp+190h] [rbp-318h] BYREF
  __int64 v138; // [rsp+3E8h] [rbp-C0h]
  __int64 v139; // [rsp+3F0h] [rbp-B8h]
  __int64 v140; // [rsp+3F8h] [rbp-B0h]
  __int64 v141; // [rsp+400h] [rbp-A8h]
  __int64 v142; // [rsp+408h] [rbp-A0h]
  __int64 v143; // [rsp+410h] [rbp-98h]
  __int64 v144; // [rsp+418h] [rbp-90h]
  __int64 v145; // [rsp+420h] [rbp-88h]
  __int64 v146; // [rsp+428h] [rbp-80h]
  __int64 v147; // [rsp+430h] [rbp-78h]
  __int64 v148; // [rsp+438h] [rbp-70h]
  __int64 v149; // [rsp+440h] [rbp-68h]
  __int64 v150; // [rsp+448h] [rbp-60h]
  __int64 v151; // [rsp+450h] [rbp-58h]
  __int64 v152; // [rsp+458h] [rbp-50h]
  __int64 v153; // [rsp+460h] [rbp-48h]

  sub_1839FF0(v137);
  v6 = a2[1];
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 0;
  v148 = 1;
  v149 = 0;
  v150 = 0;
  v151 = 0;
  v152 = 1;
  v153 = 0;
  v118[0] = v137;
  memset(&v118[1], 0, 40);
  v119 = 0;
  v120 = v137;
  v121 = 0;
  v122 = 0;
  v123 = 1;
  v124 = 0;
  sub_48E580(v118, v6);
  v7 = *a2;
  v8 = 0;
  v97 = 8 * v7;
  if ( (_DWORD)v7 )
  {
    do
    {
      v9 = sub_48E8C0(v118);
      v10 = a2[1];
      v11 = v9;
      v12 = 0;
      if ( (_DWORD)v10 )
      {
        do
        {
          sub_48EB00(v118, v11, *(_QWORD *)(*((_QWORD *)a2 + 1) + v8) + 32 * v12, (unsigned int)v12);
          ++v12;
        }
        while ( v12 != v10 );
      }
      sub_48EB00(v118, v11, &qword_1C7F280, (unsigned int)v10);
      v8 += 8;
    }
    while ( v8 != v97 );
  }
  v126 = 0;
  v127 = 0;
  v125 = v137;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = v137;
  v133 = 0;
  v134 = 0;
  v135 = 1;
  v136 = 0;
  sub_48FE60(v118, &v125, a4);
  if ( v128 )
    v15 = *(_DWORD *)(v128 - 4);
  else
    v15 = 0;
  LODWORD(v16) = (_DWORD)a3;
  v17 = *((void ****)a3 + 1);
  *a3 = 0;
  a3[1] = v15;
  if ( v17 )
  {
    v18 = *((unsigned int *)v17 - 1);
    if ( (_DWORD)v18 )
    {
      v19 = &v17[v18];
      do
      {
        v16 = *v17;
        if ( *v17 )
        {
          v20 = *((unsigned int *)v16 - 1);
          if ( (_DWORD)v20 )
          {
            v21 = &v16[4 * v20];
            do
            {
              v22 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v16);
              v23 = v16 + 2;
              v16 += 4;
              sub_182CBA0(v22, v23);
            }
            while ( v21 != v16 );
            v16 = *v17;
          }
          sub_186B220(v16 - 1);
        }
        ++v17;
      }
      while ( v19 != v17 );
      v17 = *((void ****)a3 + 1);
    }
    *((_DWORD *)v17 - 1) = 0;
  }
  v24 = v126;
  v107 = nullptr;
  if ( !v126 )
    goto LABEL_98;
  v25 = 0;
  v105 = *(_DWORD *)(v126 - 4);
  while ( *(_DWORD *)(v126 - 4) != v25 )
  {
    v13 = v25 + 1;
    v14 = *(unsigned int *)(v126 + 16 * (v25 + 1) - 8);
    if ( (_DWORD)v14 )
      break;
    ++v25;
  }
  v26 = v25;
  if ( v105 == (_DWORD)v25 )
  {
LABEL_98:
    LOBYTE(v16) = *a3 != 0;
    goto LABEL_89;
  }
  v16 = &qword_1C7F2C0;
  while ( 1 )
  {
    v108[0] = 0;
    v108[1] = 0;
    v109[0] = 1;
    v109[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v109);
    BYTE4(v109[0]) &= ~1u;
    LODWORD(v109[0]) = 1;
    if ( v128 )
    {
      v99 = *(_DWORD *)(v128 - 4);
      v27 = v107 ? *((_DWORD *)v107 - 1) : 0;
      if ( v27 < v99 )
      {
        v110 = 0;
        v53 = qword_1C7F2C0;
        v111 = 0;
        v112 = 1;
        v113 = 0;
        if ( (v108[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v110, v108);
        else
          LODWORD(v110) = v108[0];
        if ( (v109[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v53, &v112, v109);
          v54 = v107;
          if ( v107 )
          {
LABEL_65:
            v106 = *((_DWORD *)v54 - 1);
            if ( v106 >= v99 )
            {
              v91 = 32LL * v99;
              v92 = 32LL * v106;
              v93 = &v54[(unsigned __int64)v91 / 8];
              v94 = &v54[(unsigned __int64)v92 / 8];
              if ( v91 != v92 )
              {
                do
                {
                  v95 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v93);
                  v96 = v93 + 2;
                  v93 += 4;
                  sub_182CBA0(v95, v96);
                }
                while ( v94 != v93 );
                v54 = v107;
              }
              *((_DWORD *)v54 - 1) = v99;
LABEL_79:
              v82 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v110);
              sub_182CBA0(v82, &v112);
              goto LABEL_30;
            }
LABEL_66:
            while ( 1 )
            {
              v55 = *((_DWORD *)v54 - 2);
              v56 = v99;
              if ( v55 >= v99 )
                break;
              while ( 1 )
              {
                v57 = (3 * v55 + 1) >> 1;
                v58 = 32 * v57 + 8;
                if ( 32 * v55 + 8 >= (unsigned int)v58 || v55 >= v57 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v114, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v114);
                  sub_233E40((__int64)&v114);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v59 = (unsigned int *)sub_186B270(v58);
                v60 = (int *)v107;
                v61 = v59;
                v54 = v59 + 2;
                if ( !v107 )
                  break;
                v62 = *((unsigned int *)v107 - 1);
                v63 = v54;
                v61[1] = v62;
                v64 = &v60[8 * v62];
                for ( i = v60; i != v64; *(v63 - 1) = v70 )
                {
                  v66 = *i;
                  v67 = *((_BYTE *)i + 4);
                  i += 8;
                  v63 += 4;
                  *((_DWORD *)v63 - 8) = v66;
                  *((_BYTE *)v63 - 28) = v67 & 3 | *((_BYTE *)v63 - 28) & 0xFC;
                  v68 = *((_QWORD *)i - 3);
                  *((_QWORD *)i - 3) = 0;
                  *(v63 - 3) = v68;
                  v69 = *((_BYTE *)i - 12);
                  *((_DWORD *)v63 - 4) = *(i - 4);
                  *((_BYTE *)v63 - 12) = v69 & 3 | *((_BYTE *)v63 - 12) & 0xFC;
                  v70 = *((_QWORD *)i - 1);
                  *((_QWORD *)i - 1) = 0;
                }
                v71 = (unsigned int)*(v60 - 1);
                v72 = &v60[8 * v71];
                if ( (_DWORD)v71 )
                {
                  v103 = v57;
                  v101 = v26;
                  v73 = v60;
                  v74 = v61;
                  do
                  {
                    v75 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v73);
                    v76 = v73 + 4;
                    v73 += 8;
                    sub_182CBA0(v75, v76);
                  }
                  while ( v73 != v72 );
                  v61 = v74;
                  v26 = v101;
                  v57 = v103;
                  v60 = (int *)v107;
                }
                v102 = v61;
                sub_186B220(v60 - 2);
                v56 = v99;
                v107 = v54;
                *v102 = v57;
                v55 = *((_DWORD *)v54 - 2);
                if ( v55 >= v99 )
                  goto LABEL_77;
              }
              v59[1] = 0;
              v107 = v59 + 2;
              *v59 = v57;
            }
LABEL_77:
            *((_DWORD *)v54 - 1) = v56;
            v77 = 32LL * v56;
            v78 = 32LL * v106;
            v79 = &v54[(unsigned __int64)v78 / 8];
            if ( v78 != v77 )
            {
              do
              {
                v79 += 4;
                *((_DWORD *)v79 - 8) = v110;
                *((_BYTE *)v79 - 28) = BYTE4(v110) & 3 | *((_BYTE *)v79 - 28) & 0xFC;
                v80 = v111;
                v111 = 0;
                *(v79 - 3) = v80;
                *((_DWORD *)v79 - 4) = v112;
                *((_BYTE *)v79 - 12) = BYTE4(v112) & 3 | *((_BYTE *)v79 - 12) & 0xFC;
                v81 = v113;
                v113 = 0;
                *(v79 - 1) = v81;
              }
              while ( &v54[(unsigned __int64)v77 / 8] != v79 );
            }
            goto LABEL_79;
          }
        }
        else
        {
          v54 = v107;
          BYTE4(v112) &= ~1u;
          LODWORD(v112) = v109[0];
          if ( v107 )
            goto LABEL_65;
        }
        v106 = 0;
        v90 = (_QWORD *)sub_186B270(0x48u);
        v54 = v90 + 1;
        v107 = v90 + 1;
        *v90 = 2;
        goto LABEL_66;
      }
    }
LABEL_30:
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v108);
    sub_182CBA0(v28, v109);
    v29 = *(_QWORD *)(v126 + 16LL * v26);
    v100 = (__int64 *)(v126 + 16LL * v26);
    if ( v29 )
    {
      v30 = *(_DWORD *)(v29 - 4);
      v31 = (int *)(v29 + 32);
      for ( j = 0; j != v30; ++j )
      {
        v33 = *v31;
        v31 += 10;
        if ( v33 != -1 )
        {
          do
          {
            while ( 1 )
            {
              v40 = qword_1C7F2C0;
              v114 = 0;
              v115 = 0;
              v116 = 1;
              v41 = v29 + 40LL * j;
              v117 = 0;
              if ( (*(_BYTE *)(v41 + 4) & 1) != 0 )
                sub_182C690(qword_1C7F2C0, &v114, v41);
              else
                LODWORD(v114) = *(_DWORD *)v41;
              if ( (*(_BYTE *)(v41 + 20) & 1) != 0 )
              {
                sub_182C690(v40, &v116, v41 + 16);
              }
              else
              {
                v42 = *(_DWORD *)(v41 + 16);
                BYTE4(v116) &= ~1u;
                LODWORD(v116) = v42;
              }
              ++j;
              v43 = &v107[4 * *(unsigned int *)(v41 + 32)];
              v44 = *(_DWORD *)v43;
              *(_DWORD *)v43 = v114;
              LODWORD(v114) = v44;
              v45 = v43[1];
              v43[1] = v115;
              v115 = v45;
              v46 = *((_BYTE *)v43 + 4);
              *((_BYTE *)v43 + 4) = BYTE4(v114) & 2 | v46 & 0xFD;
              BYTE4(v114) = v46 & 2 | BYTE4(v114) & 0xFD;
              v47 = *((_BYTE *)v43 + 4);
              *((_BYTE *)v43 + 4) = BYTE4(v114) & 1 | v47 & 0xFE;
              BYTE4(v114) = v47 & 1 | BYTE4(v114) & 0xFE;
              LODWORD(v45) = *((_DWORD *)v43 + 4);
              *((_DWORD *)v43 + 4) = v116;
              LODWORD(v116) = v45;
              v48 = v43[3];
              v43[3] = v117;
              v117 = v48;
              LOBYTE(v48) = *((_BYTE *)v43 + 20);
              *((_BYTE *)v43 + 20) = BYTE4(v116) & 2 | v48 & 0xFD;
              BYTE4(v116) = v48 & 2 | BYTE4(v116) & 0xFD;
              v49 = qword_1C7F2C0;
              v50 = *((_BYTE *)v43 + 20);
              *((_BYTE *)v43 + 20) = BYTE4(v116) & 1 | v50 & 0xFE;
              BYTE4(v116) = v50 & 1 | BYTE4(v116) & 0xFE;
              sub_182CBA0(v49, &v114);
              sub_182CBA0(v49, &v116);
              v29 = *v100;
              if ( *v100 )
                break;
LABEL_47:
              if ( j == v30 )
                goto LABEL_35;
            }
            v51 = v29 + 40LL * j;
            while ( j < *(_DWORD *)(v29 - 4) )
            {
              v52 = *(_DWORD *)(v51 + 32);
              v51 += 40;
              if ( v52 != -1 )
                goto LABEL_47;
              ++j;
            }
          }
          while ( j != v30 );
          break;
        }
      }
    }
LABEL_35:
    v24 = (__int64)&v107;
    sub_4ACFD0(a3, &v107);
    ++v26;
    if ( v126 )
    {
      v24 = *(unsigned int *)(v126 - 4);
      v13 = 16LL * v26;
      v34 = (unsigned int *)(v126 + v13 + 8);
      while ( v26 < (unsigned int)v24 )
      {
        v13 = *v34;
        v14 = v26 + 1;
        v34 += 4;
        if ( (_DWORD)v13 )
          break;
        ++v26;
      }
    }
    v35 = v107;
    if ( v105 == v26 )
      break;
    if ( v107 )
    {
      v36 = *((unsigned int *)v107 - 1);
      if ( (_DWORD)v36 )
      {
        v37 = &v107[4 * v36];
        do
        {
          v38 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v35);
          v39 = v35 + 2;
          v35 += 4;
          sub_182CBA0(v38, v39);
        }
        while ( v37 != v35 );
        v35 = v107;
      }
      *((_DWORD *)v35 - 1) = 0;
    }
  }
  v83 = *a3;
  if ( v107 )
  {
    v84 = *((_DWORD *)v107 - 1);
    if ( v84 )
    {
      v85 = &v107[4 * v84];
      do
      {
        v86 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v35);
        v24 = (__int64)(v35 + 2);
        v35 += 4;
        sub_182CBA0(v86, v24);
      }
      while ( v85 != v35 );
      v35 = v107;
    }
    sub_186B220(v35 - 1);
  }
  LOBYTE(v16) = v83 != 0;
LABEL_89:
  sub_48E2D0(&v125, v24, v13, v14);
  sub_48E2D0(v118, v24, v87, v88);
  sub_184C8D0(v137);
  return (unsigned int)v16;
}

