__int64 *__fastcall sub_15A6E80(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 *v7; // r10
  __int64 v8; // r14
  __int64 *v9; // rbp
  __int64 *v10; // rbx
  __int64 *v11; // r15
  __int64 v12; // r12
  _QWORD *v13; // r13
  _QWORD *v14; // rsi
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD *i; // rax
  char *v21; // rdi
  char v22; // cl
  char v23; // al
  char v24; // al
  char v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  _QWORD *v30; // r12
  _QWORD *v31; // r13
  _QWORD *v32; // r15
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rcx
  char *v39; // rdi
  char v40; // al
  char v41; // al
  char v42; // al
  char v43; // al
  char v44; // al
  char v45; // al
  bool v46; // zf
  _QWORD *v47; // r12
  _QWORD *v48; // r13
  _QWORD *v49; // rbp
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  char *v55; // rdi
  char v56; // dl
  char v57; // al
  char v58; // al
  char v59; // al
  char v60; // al
  char v61; // al
  char v62; // al
  char v63; // al
  __int64 *v65; // r15
  __int64 v66; // r13
  _QWORD *v67; // r12
  _QWORD *v68; // rcx
  int v69; // edx
  __int64 v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // rdx
  _QWORD *j; // rdx
  char *v75; // rdi
  char v76; // cl
  char v77; // dl
  char v78; // dl
  char v79; // dl
  char v80; // dl
  char v81; // dl
  char v82; // dl
  char v83; // dl
  _QWORD *v84; // r15
  _QWORD *v85; // r12
  _QWORD *v86; // r14
  int v87; // edx
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rsi
  char *v93; // rdi
  char v94; // cl
  char v95; // dl
  char v96; // dl
  char v97; // dl
  char v98; // dl
  char v99; // dl
  char v100; // dl
  char v101; // dl
  _QWORD *v102; // r14
  _QWORD *v103; // r12
  _QWORD *v104; // rbp
  int v105; // edx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  char *v110; // rdi
  char v111; // dl
  char v112; // dl
  char v113; // dl
  char v114; // dl
  char v115; // dl
  char v116; // dl
  _QWORD *v117; // [rsp+0h] [rbp-68h]
  __int64 *v118; // [rsp+0h] [rbp-68h]
  __int64 *v119; // [rsp+0h] [rbp-68h]
  __int64 *v120; // [rsp+0h] [rbp-68h]
  _QWORD *v121; // [rsp+0h] [rbp-68h]
  __int64 *v122; // [rsp+0h] [rbp-68h]
  __int64 *v123; // [rsp+0h] [rbp-68h]
  __int64 *v124; // [rsp+0h] [rbp-68h]
  unsigned __int64 v125; // [rsp+8h] [rbp-60h]
  _QWORD *v126; // [rsp+8h] [rbp-60h]
  unsigned __int64 v127; // [rsp+8h] [rbp-60h]
  __int64 *v128; // [rsp+10h] [rbp-58h]
  __int64 v129; // [rsp+10h] [rbp-58h]
  __int64 *v130; // [rsp+10h] [rbp-58h]
  __int64 v131; // [rsp+10h] [rbp-58h]
  unsigned __int64 v132; // [rsp+18h] [rbp-50h]
  unsigned __int64 v133; // [rsp+18h] [rbp-50h]
  unsigned __int64 v134; // [rsp+20h] [rbp-48h]
  unsigned __int64 v135; // [rsp+20h] [rbp-48h]
  __int64 v136; // [rsp+28h] [rbp-40h]
  __int64 v137; // [rsp+28h] [rbp-40h]

  v7 = a1;
  v8 = a6;
  v9 = a2;
  v10 = a3;
  if ( a4 > a5 && a5 <= a7 )
  {
    if ( !a5 )
      return v7;
    v136 = (char *)a2 - (char *)a1;
    v134 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)a2) >> 5);
    v132 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 5);
    if ( (char *)a3 - (char *)a2 <= 0 )
    {
      if ( v136 <= 0 )
        return v7;
      v125 = 0;
      v129 = 0;
    }
    else
    {
      v11 = a2;
      v12 = a6;
      do
      {
        v13 = *(_QWORD **)(v12 + 40);
        v14 = *(_QWORD **)(v12 + 48);
        *(_QWORD *)v12 = *v11;
        *(_QWORD *)(v12 + 8) = v11[1];
        *(_DWORD *)(v12 + 16) = *((_DWORD *)v11 + 4);
        *(_DWORD *)(v12 + 20) = *((_DWORD *)v11 + 5);
        *(_DWORD *)(v12 + 24) = *((_DWORD *)v11 + 6);
        *(_DWORD *)(v12 + 28) = *((_DWORD *)v11 + 7);
        v15 = *((_DWORD *)v11 + 8);
        *(_QWORD *)(v12 + 48) = 0;
        *(_QWORD *)(v12 + 56) = 0;
        *(_QWORD *)(v12 + 40) = 0;
        *(_DWORD *)(v12 + 32) = v15;
        *(_QWORD *)(v12 + 40) = v11[5];
        v16 = v11[6];
        v11[5] = 0;
        v17 = *(_QWORD *)(v12 + 48);
        *(_QWORD *)(v12 + 48) = v16;
        v18 = v11[7];
        v11[6] = v17;
        v19 = *(_QWORD *)(v12 + 56);
        *(_QWORD *)(v12 + 56) = v18;
        v11[7] = v19;
        for ( i = v13; v14 != i; i += 8 )
        {
          while ( 1 )
          {
            v21 = (char *)i[3];
            if ( v21 == (char *)(i + 5) )
              break;
            v128 = v7;
            v117 = i;
            operator delete(v21);
            v7 = v128;
            i = v117 + 8;
            if ( v117 + 8 == v14 )
              goto LABEL_9;
          }
        }
LABEL_9:
        if ( v13 )
        {
          v118 = v7;
          operator delete(v13);
          v7 = v118;
        }
        v22 = *((_BYTE *)v11 + 64);
        v23 = *(_BYTE *)(v12 + 64);
        v11 += 12;
        v12 += 96;
        v24 = v22 & 1 | v23 & 0xFE;
        *(_BYTE *)(v12 - 32) = v24;
        v25 = *(_BYTE *)(v11 - 4) & 2 | v24 & 0xFD;
        *(_BYTE *)(v12 - 32) = v25;
        v26 = *(_BYTE *)(v11 - 4) & 4 | v25 & 0xFB;
        *(_BYTE *)(v12 - 32) = v26;
        v27 = *(_BYTE *)(v11 - 4) & 8 | v26 & 0xF7;
        *(_BYTE *)(v12 - 32) = v27;
        v28 = *(_BYTE *)(v11 - 4) & 0x10 | v27 & 0xEF;
        *(_BYTE *)(v12 - 32) = v28;
        v29 = *(_BYTE *)(v11 - 4) & 0x20 | v28 & 0xDF;
        *(_BYTE *)(v12 - 32) = v29;
        *(_BYTE *)(v12 - 32) = *(_BYTE *)(v11 - 4) & 0x40 | v29 & 0xBF;
        *(_QWORD *)(v12 - 24) = *(v11 - 3);
        *(_QWORD *)(v12 - 16) = *(v11 - 2);
        *(_QWORD *)(v12 - 8) = *(v11 - 1);
        --v134;
      }
      while ( v134 );
      v129 = v12 - v8;
      v125 = 0xAAAAAAAAAAAAAAABLL * ((v12 - v8) >> 5);
      if ( v136 <= 0 )
      {
LABEL_19:
        if ( v129 > 0 )
        {
          v10 = v7;
          do
          {
            v47 = (_QWORD *)v10[5];
            v48 = (_QWORD *)v10[6];
            *v10 = *(_QWORD *)v8;
            v49 = v47;
            v10[1] = *(_QWORD *)(v8 + 8);
            *((_DWORD *)v10 + 4) = *(_DWORD *)(v8 + 16);
            *((_DWORD *)v10 + 5) = *(_DWORD *)(v8 + 20);
            *((_DWORD *)v10 + 6) = *(_DWORD *)(v8 + 24);
            *((_DWORD *)v10 + 7) = *(_DWORD *)(v8 + 28);
            v50 = *(_DWORD *)(v8 + 32);
            v10[6] = 0;
            v10[7] = 0;
            v10[5] = 0;
            *((_DWORD *)v10 + 8) = v50;
            v10[5] = *(_QWORD *)(v8 + 40);
            v51 = *(_QWORD *)(v8 + 48);
            *(_QWORD *)(v8 + 40) = 0;
            v52 = v10[6];
            v10[6] = v51;
            v53 = *(_QWORD *)(v8 + 56);
            *(_QWORD *)(v8 + 48) = v52;
            v54 = v10[7];
            v10[7] = v53;
            for ( *(_QWORD *)(v8 + 56) = v54; v48 != v49; v49 += 8 )
            {
              while ( 1 )
              {
                v55 = (char *)v49[3];
                if ( v55 == (char *)(v49 + 5) )
                  break;
                operator delete(v55);
                v49 += 8;
                if ( v48 == v49 )
                  goto LABEL_24;
              }
            }
LABEL_24:
            if ( v47 )
              operator delete(v47);
            v56 = *(_BYTE *)(v8 + 64);
            v57 = *((_BYTE *)v10 + 64);
            v8 += 96;
            v10 += 12;
            v58 = v56 & 1 | v57 & 0xFE;
            *((_BYTE *)v10 - 32) = v58;
            v59 = *(_BYTE *)(v8 - 32) & 2 | v58 & 0xFD;
            *((_BYTE *)v10 - 32) = v59;
            v60 = *(_BYTE *)(v8 - 32) & 4 | v59 & 0xFB;
            *((_BYTE *)v10 - 32) = v60;
            v61 = *(_BYTE *)(v8 - 32) & 8 | v60 & 0xF7;
            *((_BYTE *)v10 - 32) = v61;
            v62 = *(_BYTE *)(v8 - 32) & 0x10 | v61 & 0xEF;
            *((_BYTE *)v10 - 32) = v62;
            v63 = *(_BYTE *)(v8 - 32) & 0x20 | v62 & 0xDF;
            *((_BYTE *)v10 - 32) = v63;
            *((_BYTE *)v10 - 32) = *(_BYTE *)(v8 - 32) & 0x40 | v63 & 0xBF;
            *(v10 - 3) = *(_QWORD *)(v8 - 24);
            *(v10 - 2) = *(_QWORD *)(v8 - 16);
            *(v10 - 1) = *(_QWORD *)(v8 - 8);
            --v125;
          }
          while ( v125 );
          return v10;
        }
        return v7;
      }
    }
    do
    {
      v9 -= 12;
      v10 -= 12;
      v30 = (_QWORD *)v10[5];
      v31 = (_QWORD *)v10[6];
      *v10 = *v9;
      v32 = v30;
      v10[1] = v9[1];
      *((_DWORD *)v10 + 4) = *((_DWORD *)v9 + 4);
      *((_DWORD *)v10 + 5) = *((_DWORD *)v9 + 5);
      *((_DWORD *)v10 + 6) = *((_DWORD *)v9 + 6);
      *((_DWORD *)v10 + 7) = *((_DWORD *)v9 + 7);
      v33 = *((_DWORD *)v9 + 8);
      v10[6] = 0;
      v10[7] = 0;
      v10[5] = 0;
      v34 = v9[5];
      *((_DWORD *)v10 + 8) = v33;
      v10[5] = v34;
      v35 = v9[6];
      v9[5] = 0;
      v36 = v10[6];
      v10[6] = v35;
      v37 = v9[7];
      v9[6] = v36;
      v38 = v10[7];
      v10[7] = v37;
      for ( v9[7] = v38; v31 != v32; v32 += 8 )
      {
        while ( 1 )
        {
          v39 = (char *)v32[3];
          if ( v39 == (char *)(v32 + 5) )
            break;
          v32 += 8;
          v119 = v7;
          operator delete(v39);
          v7 = v119;
          if ( v31 == v32 )
            goto LABEL_16;
        }
      }
LABEL_16:
      if ( v30 )
      {
        v120 = v7;
        operator delete(v30);
        v7 = v120;
      }
      v40 = v9[8] & 1 | v10[8] & 0xFE;
      *((_BYTE *)v10 + 64) = v40;
      v41 = v9[8] & 2 | v40 & 0xFD;
      *((_BYTE *)v10 + 64) = v41;
      v42 = v9[8] & 4 | v41 & 0xFB;
      *((_BYTE *)v10 + 64) = v42;
      v43 = v9[8] & 8 | v42 & 0xF7;
      *((_BYTE *)v10 + 64) = v43;
      v44 = v9[8] & 0x10 | v43 & 0xEF;
      *((_BYTE *)v10 + 64) = v44;
      v45 = v9[8] & 0x20 | v44 & 0xDF;
      *((_BYTE *)v10 + 64) = v45;
      v46 = v132-- == 1;
      *((_BYTE *)v10 + 64) = v9[8] & 0x40 | v45 & 0xBF;
      v10[9] = v9[9];
      v10[10] = v9[10];
      v10[11] = v9[11];
    }
    while ( !v46 );
    goto LABEL_19;
  }
  if ( a4 > a7 )
  {
    sub_15A1FD0(a1, a2, a3);
    return (__int64 *)((char *)a1 + (char *)v10 - (char *)a2);
  }
  if ( a4 )
  {
    v137 = (char *)a3 - (char *)a2;
    v135 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 5);
    v133 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)a2) >> 5);
    if ( (char *)a2 - (char *)a1 <= 0 )
    {
      if ( v137 <= 0 )
        return v10;
      v127 = 0;
      v66 = a6;
      v131 = 0;
    }
    else
    {
      v65 = a1;
      v66 = a6;
      do
      {
        v67 = *(_QWORD **)(v66 + 40);
        v68 = *(_QWORD **)(v66 + 48);
        *(_QWORD *)v66 = *v65;
        *(_QWORD *)(v66 + 8) = v65[1];
        *(_DWORD *)(v66 + 16) = *((_DWORD *)v65 + 4);
        *(_DWORD *)(v66 + 20) = *((_DWORD *)v65 + 5);
        *(_DWORD *)(v66 + 24) = *((_DWORD *)v65 + 6);
        *(_DWORD *)(v66 + 28) = *((_DWORD *)v65 + 7);
        v69 = *((_DWORD *)v65 + 8);
        *(_QWORD *)(v66 + 48) = 0;
        *(_QWORD *)(v66 + 56) = 0;
        *(_QWORD *)(v66 + 40) = 0;
        *(_DWORD *)(v66 + 32) = v69;
        *(_QWORD *)(v66 + 40) = v65[5];
        v70 = v65[6];
        v65[5] = 0;
        v71 = *(_QWORD *)(v66 + 48);
        *(_QWORD *)(v66 + 48) = v70;
        v72 = v65[7];
        v65[6] = v71;
        v73 = *(_QWORD *)(v66 + 56);
        *(_QWORD *)(v66 + 56) = v72;
        v65[7] = v73;
        for ( j = v67; v68 != j; j += 8 )
        {
          while ( 1 )
          {
            v75 = (char *)j[3];
            if ( v75 == (char *)(j + 5) )
              break;
            v130 = v7;
            v126 = j;
            v121 = v68;
            operator delete(v75);
            v68 = v121;
            v7 = v130;
            j = v126 + 8;
            if ( v126 + 8 == v121 )
              goto LABEL_35;
          }
        }
LABEL_35:
        if ( v67 )
        {
          v122 = v7;
          operator delete(v67);
          v7 = v122;
        }
        v76 = *((_BYTE *)v65 + 64);
        v77 = *(_BYTE *)(v66 + 64);
        v65 += 12;
        v66 += 96;
        v78 = v76 & 1 | v77 & 0xFE;
        *(_BYTE *)(v66 - 32) = v78;
        v79 = *(_BYTE *)(v65 - 4) & 2 | v78 & 0xFD;
        *(_BYTE *)(v66 - 32) = v79;
        v80 = *(_BYTE *)(v65 - 4) & 4 | v79 & 0xFB;
        *(_BYTE *)(v66 - 32) = v80;
        v81 = *(_BYTE *)(v65 - 4) & 8 | v80 & 0xF7;
        *(_BYTE *)(v66 - 32) = v81;
        v82 = *(_BYTE *)(v65 - 4) & 0x10 | v81 & 0xEF;
        *(_BYTE *)(v66 - 32) = v82;
        v83 = *(_BYTE *)(v65 - 4) & 0x20 | v82 & 0xDF;
        *(_BYTE *)(v66 - 32) = v83;
        *(_BYTE *)(v66 - 32) = *(_BYTE *)(v65 - 4) & 0x40 | v83 & 0xBF;
        *(_QWORD *)(v66 - 24) = *(v65 - 3);
        *(_QWORD *)(v66 - 16) = *(v65 - 2);
        *(_QWORD *)(v66 - 8) = *(v65 - 1);
        --v135;
      }
      while ( v135 );
      v131 = v66 - v8;
      v127 = 0xAAAAAAAAAAAAAAABLL * ((v66 - v8) >> 5);
      if ( v137 <= 0 )
        goto LABEL_45;
    }
    do
    {
      v84 = (_QWORD *)v7[5];
      v85 = (_QWORD *)v7[6];
      *v7 = *v9;
      v86 = v84;
      v7[1] = v9[1];
      *((_DWORD *)v7 + 4) = *((_DWORD *)v9 + 4);
      *((_DWORD *)v7 + 5) = *((_DWORD *)v9 + 5);
      *((_DWORD *)v7 + 6) = *((_DWORD *)v9 + 6);
      *((_DWORD *)v7 + 7) = *((_DWORD *)v9 + 7);
      v87 = *((_DWORD *)v9 + 8);
      v7[6] = 0;
      v7[7] = 0;
      v7[5] = 0;
      v88 = v9[5];
      *((_DWORD *)v7 + 8) = v87;
      v7[5] = v88;
      v89 = v9[6];
      v9[5] = 0;
      v90 = v7[6];
      v7[6] = v89;
      v91 = v9[7];
      v9[6] = v90;
      v92 = v7[7];
      v7[7] = v91;
      for ( v9[7] = v92; v85 != v86; v86 += 8 )
      {
        while ( 1 )
        {
          v93 = (char *)v86[3];
          if ( v93 == (char *)(v86 + 5) )
            break;
          v86 += 8;
          v123 = v7;
          operator delete(v93);
          v7 = v123;
          if ( v86 == v85 )
            goto LABEL_42;
        }
      }
LABEL_42:
      if ( v84 )
      {
        v124 = v7;
        operator delete(v84);
        v7 = v124;
      }
      v94 = *((_BYTE *)v9 + 64);
      v95 = *((_BYTE *)v7 + 64);
      v9 += 12;
      v7 += 12;
      v96 = v94 & 1 | v95 & 0xFE;
      *((_BYTE *)v7 - 32) = v96;
      v97 = *(_BYTE *)(v9 - 4) & 2 | v96 & 0xFD;
      *((_BYTE *)v7 - 32) = v97;
      v98 = *(_BYTE *)(v9 - 4) & 4 | v97 & 0xFB;
      *((_BYTE *)v7 - 32) = v98;
      v99 = *(_BYTE *)(v9 - 4) & 8 | v98 & 0xF7;
      *((_BYTE *)v7 - 32) = v99;
      v100 = *(_BYTE *)(v9 - 4) & 0x10 | v99 & 0xEF;
      *((_BYTE *)v7 - 32) = v100;
      v101 = *(_BYTE *)(v9 - 4) & 0x20 | v100 & 0xDF;
      *((_BYTE *)v7 - 32) = v101;
      *((_BYTE *)v7 - 32) = *(_BYTE *)(v9 - 4) & 0x40 | v101 & 0xBF;
      *(v7 - 3) = *(v9 - 3);
      *(v7 - 2) = *(v9 - 2);
      *(v7 - 1) = *(v9 - 1);
      --v133;
    }
    while ( v133 );
LABEL_45:
    if ( v131 > 0 )
    {
      do
      {
        v66 -= 96;
        v10 -= 12;
        v102 = (_QWORD *)v10[5];
        v103 = (_QWORD *)v10[6];
        *v10 = *(_QWORD *)v66;
        v104 = v102;
        v10[1] = *(_QWORD *)(v66 + 8);
        *((_DWORD *)v10 + 4) = *(_DWORD *)(v66 + 16);
        *((_DWORD *)v10 + 5) = *(_DWORD *)(v66 + 20);
        *((_DWORD *)v10 + 6) = *(_DWORD *)(v66 + 24);
        *((_DWORD *)v10 + 7) = *(_DWORD *)(v66 + 28);
        v105 = *(_DWORD *)(v66 + 32);
        v10[6] = 0;
        v10[7] = 0;
        v10[5] = 0;
        *((_DWORD *)v10 + 8) = v105;
        v10[5] = *(_QWORD *)(v66 + 40);
        v106 = *(_QWORD *)(v66 + 48);
        *(_QWORD *)(v66 + 40) = 0;
        v107 = v10[6];
        v10[6] = v106;
        v108 = *(_QWORD *)(v66 + 56);
        *(_QWORD *)(v66 + 48) = v107;
        v109 = v10[7];
        v10[7] = v108;
        for ( *(_QWORD *)(v66 + 56) = v109; v103 != v104; v104 += 8 )
        {
          while ( 1 )
          {
            v110 = (char *)v104[3];
            if ( v110 == (char *)(v104 + 5) )
              break;
            operator delete(v110);
            v104 += 8;
            if ( v104 == v103 )
              goto LABEL_49;
          }
        }
LABEL_49:
        if ( v102 )
          operator delete(v102);
        v111 = *(_BYTE *)(v66 + 64) & 1 | v10[8] & 0xFE;
        *((_BYTE *)v10 + 64) = v111;
        v112 = *(_BYTE *)(v66 + 64) & 2 | v111 & 0xFD;
        *((_BYTE *)v10 + 64) = v112;
        v113 = *(_BYTE *)(v66 + 64) & 4 | v112 & 0xFB;
        *((_BYTE *)v10 + 64) = v113;
        v114 = *(_BYTE *)(v66 + 64) & 8 | v113 & 0xF7;
        *((_BYTE *)v10 + 64) = v114;
        v115 = *(_BYTE *)(v66 + 64) & 0x10 | v114 & 0xEF;
        *((_BYTE *)v10 + 64) = v115;
        v116 = *(_BYTE *)(v66 + 64) & 0x20 | v115 & 0xDF;
        *((_BYTE *)v10 + 64) = v116;
        v46 = v127-- == 1;
        *((_BYTE *)v10 + 64) = *(_BYTE *)(v66 + 64) & 0x40 | v116 & 0xBF;
        v10[9] = *(_QWORD *)(v66 + 72);
        v10[10] = *(_QWORD *)(v66 + 80);
        v10[11] = *(_QWORD *)(v66 + 88);
      }
      while ( !v46 );
    }
  }
  return v10;
}
