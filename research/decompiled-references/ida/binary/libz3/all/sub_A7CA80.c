__int64 __fastcall sub_A7CA80(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // ebp
  char v9; // al
  __int64 v10; // rdi
  int v11; // eax
  int v12; // ebp
  __int64 v13; // rcx
  char *v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r9
  char *v18; // rdi
  char *i; // r13
  int v20; // eax
  void *v21; // r13
  void *v22; // rdi
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned int v27; // r9d
  char *v28; // r13
  int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rdx
  char *v33; // rdi
  char *v34; // rdx
  char *v35; // rsi
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  char v39; // cl
  char v40; // si
  __int64 v41; // rax
  char v42; // cl
  char v43; // si
  int v44; // eax
  int v45; // eax
  __int64 v46; // rax
  char v47; // dl
  char v48; // cl
  __int64 v49; // rax
  char v50; // dl
  char v51; // cl
  int v52; // eax
  int v53; // ebp
  int v54; // r8d
  int v55; // r9d
  void *v56; // rbp
  void *v57; // r13
  int v58; // edx
  __int64 v59; // rdx
  char v60; // di
  __int64 v61; // rdx
  char v62; // di
  void *v63; // r13
  void *v64; // r13
  void *v65; // r13
  void *v66; // rbp
  __int64 v67; // r15
  __int64 v68; // rax
  int v69; // r9d
  __int64 v70; // rdx
  char *v71; // rax
  char *v72; // rax
  char *v73; // r10
  unsigned int v74; // esi
  char *v75; // rbp
  __int64 v76; // rax
  char *v77; // rdx
  char *v78; // rax
  int v79; // edx
  int v80; // edx
  __int64 v81; // rsi
  __int64 v82; // rdx
  char v83; // di
  char v84; // di
  __int64 v85; // rsi
  __int64 v86; // rdx
  char v87; // di
  char v88; // di
  void *v89; // [rsp+0h] [rbp-128h]
  int *v90; // [rsp+8h] [rbp-120h]
  void *v91; // [rsp+8h] [rbp-120h]
  int *v92; // [rsp+10h] [rbp-118h]
  _QWORD *v93; // [rsp+18h] [rbp-110h]
  __int64 *v94; // [rsp+20h] [rbp-108h]
  __int64 *v95; // [rsp+28h] [rbp-100h]
  __int64 v96; // [rsp+30h] [rbp-F8h]
  void *v97; // [rsp+30h] [rbp-F8h]
  void *v98; // [rsp+30h] [rbp-F8h]
  __int64 *v99; // [rsp+38h] [rbp-F0h]
  __int64 v100; // [rsp+40h] [rbp-E8h]
  __int64 v101; // [rsp+48h] [rbp-E0h]
  int v102; // [rsp+50h] [rbp-D8h]
  int v103; // [rsp+58h] [rbp-D0h]
  __int64 v104; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v105; // [rsp+68h] [rbp-C0h]
  int v106[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v107; // [rsp+78h] [rbp-B0h]
  int v108[4]; // [rsp+80h] [rbp-A8h] BYREF
  int v109; // [rsp+90h] [rbp-98h] BYREF
  char v110; // [rsp+94h] [rbp-94h]
  char v111; // [rsp+98h] [rbp-90h]
  int v112; // [rsp+A0h] [rbp-88h] BYREF
  char v113; // [rsp+A4h] [rbp-84h]
  __int64 v114; // [rsp+A8h] [rbp-80h]
  int v115; // [rsp+B0h] [rbp-78h] BYREF
  char v116; // [rsp+B4h] [rbp-74h]
  __int64 v117; // [rsp+B8h] [rbp-70h]
  int v118[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v119; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v120; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v121; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v122; // [rsp+E0h] [rbp-48h]

  result = *(unsigned int *)(a2 + 8);
  v6 = *(_QWORD *)a2;
  v93 = a1;
  v100 = a4;
  v7 = *(_QWORD *)a2 + 48 * result;
  if ( *(_QWORD *)a2 != v7 )
  {
    while ( *(_DWORD *)(v6 + 4) != 2 )
    {
      v6 += 48;
      if ( v7 == v6 )
        return result;
    }
    if ( v7 != v6 )
    {
      v92 = v106;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v6 + 8);
        v9 = sub_FF9F70(v93[63], v8);
        v10 = v93[63];
        if ( v9 )
        {
          v53 = sub_FF9F90(v10, v8);
          sub_3EBE30((__int64)v118, v100, v6 + 16);
          sub_A7CA80(
            (int)v93,
            v53,
            a3,
            (int)v118,
            v54,
            v55,
            v89,
            (int)v90,
            (int)v92,
            v93,
            v94,
            (int)v95,
            v96,
            (int)v99,
            v100,
            v101,
            v102,
            v103,
            v104,
            v105,
            v106[0],
            v107,
            v108[0],
            v108[2],
            v109,
            v111);
          v56 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v118);
          sub_182CBA0(v56, &v120);
          goto LABEL_57;
        }
        v11 = sub_FF9E10(v10, v8);
        v104 = 0;
        v105 = 0;
        v12 = v11;
        *(_QWORD *)v106 = 1;
        v107 = 0;
        sub_182CBA0(qword_1C7F2C0, v92);
        v13 = *(unsigned int *)(a3 + 8);
        v14 = *(char **)a3;
        v106[0] = 1;
        LOBYTE(v106[1]) &= ~1u;
        v15 = v13 - 1;
        v118[0] = v12;
        v16 = 48 * v13;
        v119 = 0;
        v120 = 0;
        v121 = 1;
        v17 = 48LL * (v12 & v15);
        v122 = 0;
        v18 = &v14[v17];
        if ( v17 != v16 )
        {
          for ( i = &v14[v17]; &v14[v16] != i; i += 48 )
          {
            v20 = *((_DWORD *)i + 1);
            if ( v20 == 2 )
            {
              if ( v12 == *(_DWORD *)i && v12 == *((_DWORD *)i + 2) )
              {
LABEL_15:
                v95 = &v119;
                v91 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v119);
                v99 = &v121;
                sub_182CBA0(v91, &v121);
                v94 = &v104;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v104, (int *)i + 4);
                goto LABEL_16;
              }
            }
            else if ( !v20 )
            {
              goto LABEL_63;
            }
          }
        }
        for ( ; v18 != v14; v14 += 48 )
        {
          v52 = *((_DWORD *)v14 + 1);
          if ( v52 == 2 )
          {
            if ( v12 == *(_DWORD *)v14 && v12 == *((_DWORD *)v14 + 2) )
            {
              i = v14;
              goto LABEL_15;
            }
          }
          else if ( !v52 )
          {
            break;
          }
        }
LABEL_63:
        v57 = qword_1C7F2C0;
        v95 = &v119;
        sub_182CBA0(qword_1C7F2C0, &v119);
        v99 = &v121;
        sub_182CBA0(v57, &v121);
        v94 = &v104;
LABEL_16:
        v90 = v108;
        sub_3EBE30((__int64)v108, v6 + 16, v100);
        *(_QWORD *)v118 = 0;
        v119 = 0;
        v120 = 1;
        v21 = qword_1C7F2C0;
        v121 = 0;
        if ( (v104 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, v118, &v104);
        else
          v118[0] = v104;
        if ( (v106[1] & 1) != 0 )
        {
          sub_182C690(v21, &v120, v92);
        }
        else
        {
          BYTE4(v120) &= ~1u;
          LODWORD(v120) = v106[0];
        }
        if ( v108[0] )
        {
          if ( v118[0] )
          {
            if ( (v120 & 0x100000000LL) != 0 || (_DWORD)v120 != 1 || (v110 & 1) != 0 || v109 != 1 )
            {
              sub_1851D20(qword_1C7F2C0, v118, v108, v118);
            }
            else
            {
              v98 = qword_1C7F2C0;
              sub_1831A80(qword_1C7F2C0, v118, v108, v118);
              sub_182CBA0(v98, &v120);
              BYTE4(v120) &= ~1u;
              LODWORD(v120) = 1;
            }
          }
          else
          {
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v118, v108);
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v118, v118);
        }
        v113 &= 0xFCu;
        v116 &= 0xFCu;
        v112 = 0;
        v22 = qword_1C7F2C0;
        v114 = 0;
        v115 = 1;
        v117 = 0;
        if ( (v118[1] & 1) != 0 )
        {
          v97 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v112, v118);
          v22 = v97;
        }
        else
        {
          v112 = v118[0];
        }
        if ( (v120 & 0x100000000LL) != 0 )
        {
          sub_182C690(v22, &v115, &v120);
        }
        else
        {
          v116 &= ~1u;
          v115 = v120;
        }
        v96 = (__int64)qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v118);
        sub_182CBA0(v96, &v120);
        v118[0] = v12;
        LODWORD(v119) = v112;
        BYTE4(v119) = v113 & 3 | BYTE4(v119) & 0xFC;
        v23 = v114;
        v114 = 0;
        v120 = v23;
        LODWORD(v121) = v115;
        v24 = *(_DWORD *)(a3 + 12) + *(_DWORD *)(a3 + 16);
        BYTE4(v121) = v116 & 3 | BYTE4(v121) & 0xFC;
        v25 = v117;
        v117 = 0;
        v122 = v25;
        v26 = *(unsigned int *)(a3 + 8);
        v27 = 2 * v26;
        if ( 3 * (int)v26 < (unsigned int)(4 * v24) )
        {
          v67 = v27;
          v103 = 2 * v26;
          v96 = 48LL * v27;
          v101 = v96;
          v68 = sub_186B270(v96);
          v69 = v103;
          v30 = v96;
          v28 = (char *)v68;
          if ( v103 )
          {
            v70 = v68 + 48 * v67;
            do
            {
              *(_BYTE *)(v68 + 20) &= 0xFCu;
              *(_BYTE *)(v68 + 36) &= 0xFCu;
              v68 += 48;
              *(_QWORD *)(v68 - 48) = 0;
              *(_QWORD *)(v68 - 24) = 0;
              *(_QWORD *)(v68 - 8) = 0;
            }
            while ( v68 != v70 );
            v71 = v28;
            if ( (((_BYTE)v70 - (_BYTE)v28) & 0x10) == 0
              || (v71 = v28 + 48, *((_DWORD *)v28 + 4) = 0, v28 + 48 != (char *)v70) )
            {
              do
              {
                *((_DWORD *)v71 + 4) = 0;
                v71 += 96;
                *((_DWORD *)v71 - 8) = 0;
              }
              while ( v71 != (char *)v70 );
            }
            v72 = v28;
            if ( (((_BYTE)v70 - (_BYTE)v28) & 0x10) == 0
              || (v72 = v28 + 48, *((_DWORD *)v28 + 8) = 1, v28 + 48 != (char *)v70) )
            {
              do
              {
                *((_DWORD *)v72 + 8) = 1;
                v72 += 96;
                *((_DWORD *)v72 - 4) = 1;
              }
              while ( v72 != (char *)v70 );
            }
          }
          v73 = *(char **)a3;
          v29 = v103 - 1;
          v74 = *(_DWORD *)(a3 + 8);
          v75 = (char *)(*(_QWORD *)a3 + 48LL * v74);
          v31 = (__int64)&v28[v96];
          if ( *(char **)a3 != v75 )
          {
            do
            {
              while ( *((_DWORD *)v73 + 1) != 2 )
              {
                v73 += 48;
                if ( v75 == v73 )
                  goto LABEL_86;
              }
              v76 = 48LL * (*(_DWORD *)v73 & (unsigned int)v29);
              v77 = &v28[v76];
              if ( v96 == v76 )
              {
LABEL_97:
                if ( v28 == v77 )
                {
LABEL_102:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v78 = v28;
                while ( *((_DWORD *)v78 + 1) )
                {
                  v78 += 48;
                  if ( v77 == v78 )
                    goto LABEL_102;
                }
              }
              else
              {
                v78 = &v28[v76];
                while ( *((_DWORD *)v78 + 1) )
                {
                  v78 += 48;
                  if ( (char *)v31 == v78 )
                    goto LABEL_97;
                }
              }
              *(_DWORD *)v78 = *(_DWORD *)v73;
              v79 = *((_DWORD *)v73 + 2);
              v73 += 48;
              *((_DWORD *)v78 + 1) = 2;
              *((_DWORD *)v78 + 2) = v79;
              v80 = *((_DWORD *)v78 + 4);
              *((_DWORD *)v78 + 4) = *((_DWORD *)v73 - 8);
              v81 = *((_QWORD *)v73 - 3);
              *((_DWORD *)v73 - 8) = v80;
              v82 = *((_QWORD *)v78 + 3);
              *((_QWORD *)v78 + 3) = v81;
              v83 = *(v73 - 28);
              *((_QWORD *)v73 - 3) = v82;
              LOBYTE(v82) = v78[20];
              v78[20] = v83 & 2 | v82 & 0xFD;
              LOBYTE(v82) = v82 & 2 | *(v73 - 28) & 0xFD;
              *(v73 - 28) = v82;
              v84 = v78[20];
              v78[20] = v82 & 1 | v84 & 0xFE;
              LODWORD(v81) = *((_DWORD *)v73 - 4);
              *(v73 - 28) = v84 & 1 | *(v73 - 28) & 0xFE;
              LODWORD(v82) = *((_DWORD *)v78 + 8);
              *((_DWORD *)v78 + 8) = v81;
              v85 = *((_QWORD *)v73 - 1);
              *((_DWORD *)v73 - 4) = v82;
              v86 = *((_QWORD *)v78 + 5);
              *((_QWORD *)v78 + 5) = v85;
              v87 = *(v73 - 12);
              *((_QWORD *)v73 - 1) = v86;
              LOBYTE(v86) = v78[36];
              v78[36] = v87 & 2 | v86 & 0xFD;
              LOBYTE(v86) = v86 & 2 | *(v73 - 12) & 0xFD;
              *(v73 - 12) = v86;
              v88 = v78[36] & 1;
              v78[36] = v86 & 1 | v78[36] & 0xFE;
              *(v73 - 12) = v88 | *(v73 - 12) & 0xFE;
            }
            while ( v75 != v73 );
LABEL_86:
            v74 = *(_DWORD *)(a3 + 8);
            v75 = *(char **)a3;
          }
          if ( v75 )
          {
            LODWORD(v96) = v103 - 1;
            sub_A73030(v75, v74);
            v69 = v103;
            v30 = v101;
            v29 = v103 - 1;
          }
          *(_QWORD *)a3 = v28;
          v12 = v118[0];
          *(_DWORD *)(a3 + 8) = v69;
          *(_DWORD *)(a3 + 16) = 0;
        }
        else
        {
          v28 = *(char **)a3;
          v29 = v26 - 1;
          v30 = 48 * v26;
          v31 = *(_QWORD *)a3 + 48 * v26;
        }
        v32 = 48LL * (v12 & (unsigned int)v29);
        v33 = &v28[v32];
        if ( v32 != v30 )
        {
          v34 = &v28[v32];
          v35 = nullptr;
          while ( 1 )
          {
            v36 = *((_DWORD *)v34 + 1);
            if ( v36 == 2 )
            {
              if ( *(_DWORD *)v34 == v12 && *((_DWORD *)v34 + 2) == v12 )
              {
                *((_DWORD *)v34 + 2) = v12;
                v37 = *((_DWORD *)v34 + 4);
                *((_DWORD *)v34 + 4) = v119;
                LODWORD(v119) = v37;
                v38 = *((_QWORD *)v34 + 3);
                *((_QWORD *)v34 + 3) = v120;
                v120 = v38;
                v39 = v34[20];
                v34[20] = BYTE4(v119) & 2 | v39 & 0xFD;
                BYTE4(v119) = v39 & 2 | BYTE4(v119) & 0xFD;
                v40 = v34[20];
                v34[20] = BYTE4(v119) & 1 | v40 & 0xFE;
                BYTE4(v119) = v40 & 1 | BYTE4(v119) & 0xFE;
                LODWORD(v38) = *((_DWORD *)v34 + 8);
                *((_DWORD *)v34 + 8) = v121;
                LODWORD(v121) = v38;
                v41 = *((_QWORD *)v34 + 5);
                *((_QWORD *)v34 + 5) = v122;
                v122 = v41;
                v42 = v34[36];
                v34[36] = BYTE4(v121) & 2 | v42 & 0xFD;
                BYTE4(v121) = v42 & 2 | BYTE4(v121) & 0xFD;
                v43 = v34[36] & 1;
                v34[36] = BYTE4(v121) & 1 | v34[36] & 0xFE;
                BYTE4(v121) = v43 | BYTE4(v121) & 0xFE;
                *((_DWORD *)v34 + 1) = 2;
                goto LABEL_67;
              }
            }
            else
            {
              if ( !v36 )
              {
                if ( v35 )
                  goto LABEL_65;
                v35 = v34;
                goto LABEL_66;
              }
              v35 = v34;
            }
            v34 += 48;
            if ( v34 == (char *)v31 )
              goto LABEL_43;
          }
        }
        v35 = nullptr;
        while ( 1 )
        {
LABEL_43:
          if ( v33 == v28 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v44 = *((_DWORD *)v28 + 1);
          if ( v44 != 2 )
            break;
          if ( *(_DWORD *)v28 == v12 && *((_DWORD *)v28 + 2) == v12 )
          {
            *((_DWORD *)v28 + 2) = v12;
            v45 = *((_DWORD *)v28 + 4);
            *((_DWORD *)v28 + 4) = v119;
            LODWORD(v119) = v45;
            v46 = *((_QWORD *)v28 + 3);
            *((_QWORD *)v28 + 3) = v120;
            v120 = v46;
            v47 = v28[20];
            v28[20] = BYTE4(v119) & 2 | v47 & 0xFD;
            BYTE4(v119) = v47 & 2 | BYTE4(v119) & 0xFD;
            v48 = v28[20];
            v28[20] = BYTE4(v119) & 1 | v48 & 0xFE;
            BYTE4(v119) = v48 & 1 | BYTE4(v119) & 0xFE;
            LODWORD(v46) = *((_DWORD *)v28 + 8);
            *((_DWORD *)v28 + 8) = v121;
            LODWORD(v121) = v46;
            v49 = *((_QWORD *)v28 + 5);
            *((_QWORD *)v28 + 5) = v122;
            v122 = v49;
            v50 = v28[36];
            v28[36] = BYTE4(v121) & 2 | v50 & 0xFD;
            BYTE4(v121) = v50 & 2 | BYTE4(v121) & 0xFD;
            v51 = v28[36] & 1;
            v28[36] = BYTE4(v121) & 1 | v28[36] & 0xFE;
            BYTE4(v121) = v51 | BYTE4(v121) & 0xFE;
            *((_DWORD *)v28 + 1) = 2;
            goto LABEL_67;
          }
LABEL_42:
          v28 += 48;
        }
        if ( v44 )
          break;
        if ( v35 )
LABEL_65:
          --*(_DWORD *)(a3 + 16);
        else
          v35 = v28;
LABEL_66:
        *((_DWORD *)v35 + 2) = v12;
        v58 = *((_DWORD *)v35 + 4);
        *((_DWORD *)v35 + 4) = v119;
        LODWORD(v119) = v58;
        v59 = *((_QWORD *)v35 + 3);
        *((_QWORD *)v35 + 3) = v120;
        v120 = v59;
        LOBYTE(v59) = v35[20];
        v35[20] = BYTE4(v119) & 2 | v59 & 0xFD;
        BYTE4(v119) = v59 & 2 | BYTE4(v119) & 0xFD;
        v60 = v35[20];
        v35[20] = BYTE4(v119) & 1 | v60 & 0xFE;
        BYTE4(v119) = v60 & 1 | BYTE4(v119) & 0xFE;
        LODWORD(v59) = *((_DWORD *)v35 + 8);
        *((_DWORD *)v35 + 8) = v121;
        LODWORD(v121) = v59;
        v61 = *((_QWORD *)v35 + 5);
        *((_QWORD *)v35 + 5) = v122;
        v122 = v61;
        LOBYTE(v61) = v35[36];
        v35[36] = BYTE4(v121) & 2 | v61 & 0xFD;
        BYTE4(v121) = v61 & 2 | BYTE4(v121) & 0xFD;
        v62 = v35[36] & 1;
        v35[36] = BYTE4(v121) & 1 | v35[36] & 0xFE;
        BYTE4(v121) = v62 | BYTE4(v121) & 0xFE;
        *((_DWORD *)v35 + 1) = 2;
        *(_DWORD *)v35 = v12;
        ++*(_DWORD *)(a3 + 12);
LABEL_67:
        v63 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v119);
        sub_182CBA0(v63, &v121);
        v64 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v112);
        sub_182CBA0(v64, &v115);
        v65 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v108);
        sub_182CBA0(v65, &v109);
        v66 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v104);
        sub_182CBA0(v66, v92);
LABEL_57:
        result = v6 + 48;
        if ( v7 != v6 + 48 )
        {
          while ( 1 )
          {
            v6 = result;
            if ( *(_DWORD *)(result + 4) == 2 )
              break;
            result += 48;
            if ( v7 == result )
              return result;
          }
          if ( v7 != result )
            continue;
        }
        return result;
      }
      v35 = v28;
      goto LABEL_42;
    }
  }
  return result;
}

