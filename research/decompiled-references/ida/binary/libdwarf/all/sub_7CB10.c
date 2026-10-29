void __fastcall sub_7CB10(char *a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4, __int64 a5, char a6)
{
  unsigned __int8 *v6; // r11
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // r10
  char *v12; // r8
  unsigned __int8 *v13; // rbp
  bool v14; // r12
  unsigned __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r9d
  char *v19; // rdi
  __int64 v20; // rcx
  unsigned int v21; // r9d
  char *v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // r9d
  char *v25; // rdi
  __int64 v26; // rcx
  unsigned int v27; // r9d
  char *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // r12
  __int64 *v31; // r14
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 *v35; // rbp
  unsigned int v36; // ecx
  unsigned __int8 *v37; // r11
  unsigned int v38; // eax
  unsigned __int64 v39; // r9
  bool v40; // r12
  __int64 v41; // rcx
  __int64 v42; // r12
  __int64 *v43; // r14
  unsigned int v44; // edx
  bool v45; // r13
  unsigned __int64 v46; // r14
  int v47; // r12d
  __int64 v48; // rcx
  unsigned int v49; // r9d
  char *v50; // rdi
  __int64 v51; // rcx
  unsigned int v52; // r9d
  char *v53; // rdi
  __int64 v54; // rcx
  unsigned int v55; // r9d
  char *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 *v59; // r15
  char v60; // r11
  __int64 v61; // rax
  unsigned __int8 *v62; // rbp
  unsigned int v63; // r9d
  unsigned int v64; // r9d
  __int64 v65; // rax
  __int64 v66; // r10
  int v67; // ebx
  char *v68; // r11
  unsigned __int8 *v69; // r8
  bool v70; // r12
  unsigned __int64 v71; // r13
  int v72; // ecx
  __int64 v73; // r14
  unsigned int v74; // r9d
  char *v75; // rdi
  __int64 v76; // r14
  unsigned int v77; // r9d
  char *v78; // rdi
  __int64 v79; // r14
  unsigned int v80; // r9d
  char *v81; // rdi
  __int64 v82; // r14
  unsigned int v83; // r9d
  __int64 v84; // rax
  char *v85; // rdi
  __int64 v86; // r12
  __int64 *v87; // r14
  __int64 v88; // rdx
  unsigned __int64 v89; // rax
  __int64 *v90; // r8
  unsigned int v91; // ecx
  unsigned __int8 *v92; // rbp
  unsigned int v93; // eax
  unsigned __int64 v94; // r9
  bool v95; // r12
  __int64 v96; // rcx
  __int64 v97; // r12
  __int64 *v98; // r14
  unsigned int v99; // edx
  __int64 *v100; // rcx
  unsigned __int64 v101; // r13
  int v102; // r8d
  __int64 v103; // r14
  unsigned int v104; // r9d
  char *v105; // rdi
  __int64 v106; // r14
  unsigned int v107; // r9d
  char *v108; // rdi
  __int64 v109; // r14
  unsigned int v110; // r9d
  __int64 v111; // rax
  char *v112; // rdi
  __int64 v113; // r12
  __int64 *v114; // r14
  __int64 v115; // rdx
  char v116; // cl
  __int64 v117; // rax
  int v118; // r9d
  __int64 v119; // [rsp+30h] [rbp-68h]
  __int64 v120; // [rsp+30h] [rbp-68h]
  unsigned int v121; // [rsp+38h] [rbp-60h]
  unsigned int v122; // [rsp+38h] [rbp-60h]
  __int64 *v123; // [rsp+40h] [rbp-58h]
  __int64 *v124; // [rsp+40h] [rbp-58h]
  unsigned __int8 *v125; // [rsp+48h] [rbp-50h]
  unsigned __int8 *v126; // [rsp+48h] [rbp-50h]
  unsigned __int8 *v127; // [rsp+50h] [rbp-48h]
  unsigned __int8 *v128; // [rsp+50h] [rbp-48h]

  v118 = a6 & 1;
  if ( !*(_BYTE *)(a5 + 1) )
  {
    if ( v118 )
      sub_738E0((unsigned __int64)a1, a2, a3, a4, (int *)a5);
    else
      sub_73CE0((unsigned __int64)a1, a2, a3, a4, (int *)a5);
    return;
  }
  if ( !v118 )
  {
    if ( a4 )
    {
      v6 = a3 + 8;
      v7 = a3[a4 - 1];
      v125 = a3;
      v127 = a3 + 8;
      v9 = *a3;
      v123 = (__int64 *)a3;
      v119 = v9;
      switch ( a4 )
      {
        case 1uLL:
          goto LABEL_20;
        case 2uLL:
          goto LABEL_19;
        case 3uLL:
          goto LABEL_18;
        case 4uLL:
          goto LABEL_17;
        case 5uLL:
          goto LABEL_16;
        case 6uLL:
          goto LABEL_15;
        case 7uLL:
          v9 += (unsigned __int64)a3[6] << 48;
LABEL_15:
          v9 += (unsigned __int64)a3[5] << 40;
LABEL_16:
          v9 += (unsigned __int64)a3[4] << 32;
LABEL_17:
          v9 += (unsigned __int64)a3[3] << 24;
LABEL_18:
          v9 += (unsigned __int64)a3[2] << 16;
LABEL_19:
          v119 = ((unsigned __int64)a3[1] << 8) + v9;
LABEL_20:
          if ( !(_BYTE)v7 )
            return;
          _BitScanReverse(&v7, v7);
          v8 = (v7 ^ 0x1F) - 8 * a4 + 41;
          v121 = v8;
LABEL_22:
          v10 = *(unsigned __int8 *)(a5 + 2);
          v11 = a5 + 4;
          if ( a2 <= 0 )
          {
            v12 = a1;
            v34 = 0;
          }
          else
          {
            v12 = &a1[a2];
            if ( (unsigned __int64)a2 > 7 )
            {
              if ( (unsigned __int8)v10 <= 0xBu )
              {
                v13 = (unsigned __int8 *)v123;
                v14 = 0;
                v15 = (unsigned __int64)(v12 - 9);
                v16 = -v10 & 0x3F;
                while ( 1 )
                {
                  if ( v6 <= v13 )
                  {
                    v121 = v8 & 7;
                    v13 -= v8 >> 3;
                    v14 = (unsigned __int64)a1 < v15;
                    v119 = *(_QWORD *)v13;
                  }
                  else
                  {
                    if ( a3 == v13 )
                    {
                      if ( v14 )
                        goto LABEL_70;
LABEL_34:
                      a3 = v125;
                      v33 = v12 - a1;
                      goto LABEL_35;
                    }
                    v30 = v8 >> 3;
                    v31 = (__int64 *)&v13[-v30];
                    if ( a3 > &v13[-v30] )
                      goto LABEL_32;
                    v13 -= v30;
                    v14 = (unsigned __int64)a1 < v15;
                    v121 = v8 - 8 * (v8 >> 3);
                    v119 = *v31;
                  }
                  if ( !v14 )
                    goto LABEL_33;
                  v17 = v11 + 4 * ((unsigned __int64)(v119 << v121) >> v16);
                  *(_WORD *)a1 = *(_WORD *)v17;
                  v18 = *(unsigned __int8 *)(v17 + 2) + v121;
                  v19 = &a1[*(unsigned __int8 *)(v17 + 3)];
                  v20 = v11 + 4 * ((unsigned __int64)(v119 << v18) >> v16);
                  *(_WORD *)v19 = *(_WORD *)v20;
                  v21 = *(unsigned __int8 *)(v20 + 2) + v18;
                  v22 = &v19[*(unsigned __int8 *)(v20 + 3)];
                  v23 = v11 + 4 * ((unsigned __int64)(v119 << v21) >> v16);
                  *(_WORD *)v22 = *(_WORD *)v23;
                  v24 = *(unsigned __int8 *)(v23 + 2) + v21;
                  v25 = &v22[*(unsigned __int8 *)(v23 + 3)];
                  v26 = v11 + 4 * ((unsigned __int64)(v119 << v24) >> v16);
                  *(_WORD *)v25 = *(_WORD *)v26;
                  v27 = *(unsigned __int8 *)(v26 + 2) + v24;
                  v28 = &v25[*(unsigned __int8 *)(v26 + 3)];
                  v29 = v11 + 4 * ((unsigned __int64)(v119 << v27) >> v16);
                  *(_WORD *)v28 = *(_WORD *)v29;
                  v8 = *(unsigned __int8 *)(v29 + 2) + v27;
                  v121 = v8;
                  a1 = &v28[*(unsigned __int8 *)(v29 + 3)];
                  if ( v8 > 0x40 )
                    goto LABEL_74;
                }
              }
              v13 = (unsigned __int8 *)v123;
              v45 = 0;
              v46 = (unsigned __int64)(v12 - 7);
              v47 = -v10 & 0x3F;
              while ( 1 )
              {
                if ( v6 <= v13 )
                {
                  v121 = v8 & 7;
                  v13 -= v8 >> 3;
                  v45 = (unsigned __int64)a1 < v46;
                  v119 = *(_QWORD *)v13;
                }
                else
                {
                  if ( a3 == v13 )
                  {
                    if ( !v45 )
                      goto LABEL_34;
LABEL_70:
                    v123 = (__int64 *)a3;
                    v33 = v12 - a1;
LABEL_35:
                    if ( v33 <= 1 )
                      goto LABEL_36;
LABEL_45:
                    v38 = v121;
                    v39 = (unsigned __int64)(v12 - 2);
                    if ( v121 <= 0x40 )
                    {
                      v6 = v127;
                      v35 = v123;
                      goto LABEL_50;
                    }
                    goto LABEL_62;
                  }
                  v58 = v8 >> 3;
                  v59 = (__int64 *)&v13[-v58];
                  if ( a3 > &v13[-v58] )
                  {
LABEL_32:
                    v32 = (unsigned int)((_DWORD)v13 - (_DWORD)a3);
                    v13 -= v32;
                    v121 = v8 - 8 * v32;
                    v119 = *(_QWORD *)v13;
LABEL_33:
                    v123 = (__int64 *)v13;
                    goto LABEL_34;
                  }
                  v13 -= v58;
                  v45 = (unsigned __int64)a1 < v46;
                  v121 = v8 - 8 * (v8 >> 3);
                  v119 = *v59;
                }
                if ( !v45 )
                  goto LABEL_33;
                v48 = v11 + 4 * ((unsigned __int64)(v119 << v121) >> v47);
                *(_WORD *)a1 = *(_WORD *)v48;
                v49 = *(unsigned __int8 *)(v48 + 2) + v121;
                v50 = &a1[*(unsigned __int8 *)(v48 + 3)];
                v51 = v11 + 4 * ((unsigned __int64)(v119 << v49) >> v47);
                *(_WORD *)v50 = *(_WORD *)v51;
                v52 = *(unsigned __int8 *)(v51 + 2) + v49;
                v53 = &v50[*(unsigned __int8 *)(v51 + 3)];
                v54 = v11 + 4 * ((unsigned __int64)(v119 << v52) >> v47);
                *(_WORD *)v53 = *(_WORD *)v54;
                v55 = *(unsigned __int8 *)(v54 + 2) + v52;
                v56 = &v53[*(unsigned __int8 *)(v54 + 3)];
                v57 = v11 + 4 * ((unsigned __int64)(v119 << v55) >> v47);
                *(_WORD *)v56 = *(_WORD *)v57;
                v8 = *(unsigned __int8 *)(v57 + 2) + v55;
                v121 = v8;
                a1 = &v56[*(unsigned __int8 *)(v57 + 3)];
                if ( v8 > 0x40 )
                {
LABEL_74:
                  v34 = v12 - a1;
                  v123 = qword_AA7C0;
                  goto LABEL_44;
                }
              }
            }
            v34 = a2;
          }
          v35 = v123;
          if ( v123 >= (__int64 *)v6 )
          {
            v121 = v8 & 7;
            v35 = (__int64 *)((char *)v123 - (v8 >> 3));
            v119 = *v35;
          }
          else if ( a3 != (unsigned __int8 *)v123 )
          {
            v36 = v8 >> 3;
            v37 = (unsigned __int8 *)v123 - (v8 >> 3);
            if ( a3 > v37 )
            {
              v36 = (_DWORD)v123 - (_DWORD)a3;
              v37 = (unsigned __int8 *)v123 - (unsigned int)((_DWORD)v123 - (_DWORD)a3);
            }
            v123 = (__int64 *)v37;
            v121 = v8 - 8 * v36;
            v119 = *(_QWORD *)v37;
LABEL_44:
            if ( v34 <= 1 )
            {
LABEL_36:
              if ( v12 <= a1 )
                return;
              goto LABEL_67;
            }
            goto LABEL_45;
          }
          if ( v34 <= 1 )
            goto LABEL_66;
          v38 = v121;
          v39 = (unsigned __int64)(v12 - 2);
          do
          {
LABEL_50:
            if ( v35 >= (__int64 *)v6 )
            {
              v121 = v38 & 7;
              v35 = (__int64 *)((char *)v35 - (v38 >> 3));
              v40 = (unsigned __int64)a1 <= v39;
              v119 = *v35;
            }
            else
            {
              if ( v35 == (__int64 *)a3 )
                break;
              v42 = v38 >> 3;
              v43 = (__int64 *)((char *)v35 - v42);
              if ( (char *)v35 - v42 < (char *)a3 )
              {
                v44 = (_DWORD)v35 - (_DWORD)a3;
                LOBYTE(v121) = v38 - 8 * v44;
                v119 = *(__int64 *)((char *)v35 - v44);
                break;
              }
              v35 = (__int64 *)((char *)v35 - v42);
              v40 = (unsigned __int64)a1 <= v39;
              v121 = v38 - 8 * (v38 >> 3);
              v119 = *v43;
            }
            if ( !v40 )
              break;
            v41 = v11 + 4 * ((unsigned __int64)(v119 << v121) >> (-(char)v10 & 0x3F));
            *(_WORD *)a1 = *(_WORD *)v41;
            v38 = v121 + *(unsigned __int8 *)(v41 + 2);
            LOBYTE(v121) = v121 + *(_BYTE *)(v41 + 2);
            a1 += *(unsigned __int8 *)(v41 + 3);
          }
          while ( v38 <= 0x40 );
LABEL_62:
          if ( v39 >= (unsigned __int64)a1 )
          {
            v60 = v121;
            do
            {
              v61 = v11 + 4 * ((unsigned __int64)(v119 << v60) >> (-(char)v10 & 0x3F));
              *(_WORD *)a1 = *(_WORD *)v61;
              v60 += *(_BYTE *)(v61 + 2);
              a1 += *(unsigned __int8 *)(v61 + 3);
            }
            while ( (unsigned __int64)a1 <= v39 );
            LOBYTE(v121) = v60;
          }
LABEL_66:
          if ( v12 <= a1 )
            return;
LABEL_67:
          *a1 = *(_BYTE *)(v11 + 4 * ((unsigned __int64)(v119 << v121) >> -(char)v10));
          break;
        default:
          v123 = (__int64 *)&a3[a4 - 8];
          v119 = *v123;
          if ( !(_BYTE)v7 )
            return;
          _BitScanReverse(&v7, v7);
          v8 = (v7 ^ 0x1F) - 23;
          v121 = v8;
          if ( a4 > 0xFFFFFFFFFFFFFF88LL )
            return;
          goto LABEL_22;
      }
    }
    else
    {
      nullsub_1();
    }
    return;
  }
  if ( !a4 )
  {
    nullsub_2();
    return;
  }
  v62 = a3 + 8;
  v63 = a3[a4 - 1];
  v126 = a3;
  v128 = a3 + 8;
  v65 = *a3;
  v124 = (__int64 *)a3;
  v120 = v65;
  switch ( a4 )
  {
    case 1uLL:
      goto LABEL_95;
    case 2uLL:
      goto LABEL_94;
    case 3uLL:
      goto LABEL_93;
    case 4uLL:
      goto LABEL_92;
    case 5uLL:
      goto LABEL_91;
    case 6uLL:
      goto LABEL_90;
    case 7uLL:
      v65 += (unsigned __int64)a3[6] << 48;
LABEL_90:
      v65 += (unsigned __int64)a3[5] << 40;
LABEL_91:
      v65 += (unsigned __int64)a3[4] << 32;
LABEL_92:
      v65 += (unsigned __int64)a3[3] << 24;
LABEL_93:
      v65 += (unsigned __int64)a3[2] << 16;
LABEL_94:
      v120 = ((unsigned __int64)a3[1] << 8) + v65;
LABEL_95:
      if ( !(_BYTE)v63 )
        return;
      v64 = __lzcnt(v63) - 8 * a4 + 41;
      v122 = v64;
LABEL_97:
      v66 = a5 + 4;
      v67 = *(unsigned __int8 *)(a5 + 2);
      if ( a2 <= 0 )
      {
        v68 = a1;
        v89 = 0;
        goto LABEL_111;
      }
      v68 = &a1[a2];
      if ( (unsigned __int64)a2 <= 7 )
      {
        v89 = a2;
LABEL_111:
        v90 = v124;
        if ( v124 >= (__int64 *)v62 )
        {
          v122 = v64 & 7;
          v90 = (__int64 *)((char *)v124 - (v64 >> 3));
          v120 = *v90;
        }
        else if ( a3 != (unsigned __int8 *)v124 )
        {
          v91 = v64 >> 3;
          v92 = (unsigned __int8 *)v124 - (v64 >> 3);
          if ( a3 > v92 )
          {
            v91 = (_DWORD)v124 - (_DWORD)a3;
            v92 = (unsigned __int8 *)v124 - (unsigned int)((_DWORD)v124 - (_DWORD)a3);
          }
          v124 = (__int64 *)v92;
          v122 = v64 - 8 * v91;
          v120 = *(_QWORD *)v92;
          goto LABEL_116;
        }
        if ( v89 <= 1 )
          goto LABEL_141;
        v93 = v122;
        v94 = (unsigned __int64)(v68 - 2);
        goto LABEL_123;
      }
      if ( (unsigned __int8)v67 > 0xBu )
      {
        v100 = v124;
        v70 = 0;
        v101 = (unsigned __int64)(v68 - 7);
        v102 = -v67 & 0x3F;
        while ( 1 )
        {
          if ( v62 <= (unsigned __int8 *)v100 )
          {
            v122 = v64 & 7;
            v100 = (__int64 *)((char *)v100 - (v64 >> 3));
            v70 = (unsigned __int64)a1 < v101;
            v120 = *v100;
          }
          else
          {
            if ( a3 == (unsigned __int8 *)v100 )
            {
LABEL_143:
              if ( v70 )
                v124 = (__int64 *)a3;
              goto LABEL_145;
            }
            v113 = v64 >> 3;
            v114 = (__int64 *)((char *)v100 - v113);
            if ( a3 > (unsigned __int8 *)v100 - v113 )
            {
              v115 = (unsigned int)((_DWORD)v100 - (_DWORD)a3);
              v100 = (__int64 *)((char *)v100 - v115);
              v122 = v64 - 8 * v115;
              v120 = *v100;
LABEL_136:
              v124 = v100;
LABEL_145:
              a3 = v126;
              if ( (unsigned __int64)(v68 - a1) <= 1 )
                goto LABEL_141;
              goto LABEL_117;
            }
            v100 = (__int64 *)((char *)v100 - v113);
            v70 = (unsigned __int64)a1 < v101;
            v122 = v64 - 8 * (v64 >> 3);
            v120 = *v114;
          }
          if ( !v70 )
            goto LABEL_136;
          v103 = v66 + 4 * ((unsigned __int64)(v120 << v122) >> v102);
          *(_WORD *)a1 = *(_WORD *)v103;
          v104 = *(unsigned __int8 *)(v103 + 2) + v122;
          v105 = &a1[*(unsigned __int8 *)(v103 + 3)];
          v106 = v66 + 4 * ((unsigned __int64)(v120 << v104) >> v102);
          *(_WORD *)v105 = *(_WORD *)v106;
          v107 = *(unsigned __int8 *)(v106 + 2) + v104;
          v108 = &v105[*(unsigned __int8 *)(v106 + 3)];
          v109 = v66 + 4 * ((unsigned __int64)(v120 << v107) >> v102);
          *(_WORD *)v108 = *(_WORD *)v109;
          v110 = *(unsigned __int8 *)(v109 + 2) + v107;
          v111 = v66 + 4 * ((unsigned __int64)(v120 << v110) >> v102);
          v112 = &v108[*(unsigned __int8 *)(v109 + 3)];
          *(_WORD *)v112 = *(_WORD *)v111;
          v64 = *(unsigned __int8 *)(v111 + 2) + v110;
          v122 = v64;
          a1 = &v112[*(unsigned __int8 *)(v111 + 3)];
          if ( v64 > 0x40 )
          {
LABEL_149:
            v89 = v68 - a1;
            v124 = qword_AA7C0;
            goto LABEL_116;
          }
        }
      }
      v69 = (unsigned __int8 *)v124;
      v70 = 0;
      v71 = (unsigned __int64)(v68 - 9);
      v72 = -v67 & 0x3F;
      while ( v62 <= v69 )
      {
        v122 = v64 & 7;
        v69 -= v64 >> 3;
        v70 = (unsigned __int64)a1 < v71;
        v120 = *(_QWORD *)v69;
LABEL_102:
        if ( !v70 )
          goto LABEL_108;
        v73 = v66 + 4 * ((unsigned __int64)(v120 << v122) >> v72);
        *(_WORD *)a1 = *(_WORD *)v73;
        v74 = *(unsigned __int8 *)(v73 + 2) + v122;
        v75 = &a1[*(unsigned __int8 *)(v73 + 3)];
        v76 = v66 + 4 * ((unsigned __int64)(v120 << v74) >> v72);
        *(_WORD *)v75 = *(_WORD *)v76;
        v77 = *(unsigned __int8 *)(v76 + 2) + v74;
        v78 = &v75[*(unsigned __int8 *)(v76 + 3)];
        v79 = v66 + 4 * ((unsigned __int64)(v120 << v77) >> v72);
        *(_WORD *)v78 = *(_WORD *)v79;
        v80 = *(unsigned __int8 *)(v79 + 2) + v77;
        v81 = &v78[*(unsigned __int8 *)(v79 + 3)];
        v82 = v66 + 4 * ((unsigned __int64)(v120 << v80) >> v72);
        *(_WORD *)v81 = *(_WORD *)v82;
        v83 = *(unsigned __int8 *)(v82 + 2) + v80;
        v84 = v66 + 4 * ((unsigned __int64)(v120 << v83) >> v72);
        v85 = &v81[*(unsigned __int8 *)(v82 + 3)];
        *(_WORD *)v85 = *(_WORD *)v84;
        v64 = *(unsigned __int8 *)(v84 + 2) + v83;
        v122 = v64;
        a1 = &v85[*(unsigned __int8 *)(v84 + 3)];
        if ( v64 > 0x40 )
          goto LABEL_149;
      }
      if ( a3 == v69 )
        goto LABEL_143;
      v86 = v64 >> 3;
      v87 = (__int64 *)&v69[-v86];
      if ( a3 <= &v69[-v86] )
      {
        v69 -= v86;
        v70 = (unsigned __int64)a1 < v71;
        v122 = v64 - 8 * (v64 >> 3);
        v120 = *v87;
        goto LABEL_102;
      }
      v88 = (unsigned int)((_DWORD)v69 - (_DWORD)a3);
      v69 -= v88;
      v122 = v64 - 8 * v88;
      v120 = *(_QWORD *)v69;
LABEL_108:
      v124 = (__int64 *)v69;
      a3 = v126;
      v89 = v68 - a1;
LABEL_116:
      if ( v89 <= 1 )
        goto LABEL_141;
LABEL_117:
      v93 = v122;
      v94 = (unsigned __int64)(v68 - 2);
      if ( v122 > 0x40 )
        goto LABEL_137;
      v62 = v128;
      v90 = v124;
LABEL_123:
      while ( 2 )
      {
        if ( v90 >= (__int64 *)v62 )
        {
          v122 = v93 & 7;
          v90 = (__int64 *)((char *)v90 - (v93 >> 3));
          v95 = (unsigned __int64)a1 <= v94;
          v120 = *v90;
          goto LABEL_121;
        }
        if ( v90 == (__int64 *)a3 )
          goto LABEL_137;
        v97 = v93 >> 3;
        v98 = (__int64 *)((char *)v90 - v97);
        if ( (char *)v90 - v97 >= (char *)a3 )
        {
          v90 = (__int64 *)((char *)v90 - v97);
          v95 = (unsigned __int64)a1 <= v94;
          v122 = v93 - 8 * (v93 >> 3);
          v120 = *v98;
LABEL_121:
          if ( !v95 )
            goto LABEL_137;
          v96 = v66 + 4 * ((unsigned __int64)(v120 << v122) >> (-(char)v67 & 0x3F));
          *(_WORD *)a1 = *(_WORD *)v96;
          v93 = v122 + *(unsigned __int8 *)(v96 + 2);
          LOBYTE(v122) = v122 + *(_BYTE *)(v96 + 2);
          a1 += *(unsigned __int8 *)(v96 + 3);
          if ( v93 > 0x40 )
            goto LABEL_137;
          continue;
        }
        break;
      }
      v99 = (_DWORD)v90 - (_DWORD)a3;
      LOBYTE(v122) = v93 - 8 * v99;
      v120 = *(__int64 *)((char *)v90 - v99);
LABEL_137:
      if ( v94 >= (unsigned __int64)a1 )
      {
        v116 = v122;
        do
        {
          v117 = v66 + 4 * ((unsigned __int64)(v120 << v116) >> (-(char)v67 & 0x3F));
          *(_WORD *)a1 = *(_WORD *)v117;
          v116 += *(_BYTE *)(v117 + 2);
          a1 += *(unsigned __int8 *)(v117 + 3);
        }
        while ( (unsigned __int64)a1 <= v94 );
        LOBYTE(v122) = v116;
      }
LABEL_141:
      if ( v68 > a1 )
        *a1 = *(_BYTE *)(v66 + 4 * ((unsigned __int64)(v120 << v122) >> -(char)v67));
      return;
    default:
      v124 = (__int64 *)&a3[a4 - 8];
      v120 = *v124;
      if ( !(_BYTE)v63 )
        return;
      v64 = __lzcnt(v63) - 23;
      v122 = v64;
      if ( a4 > 0xFFFFFFFFFFFFFF88LL )
        return;
      goto LABEL_97;
  }
}

