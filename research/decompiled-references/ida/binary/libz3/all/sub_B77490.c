__int64 __fastcall sub_B77490(__int64 a1, __int64 a2)
{
  char **v2; // rbx
  unsigned int *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  int *v7; // rbx
  unsigned int *v8; // r13
  __int64 v9; // rax
  void *v10; // rdi
  unsigned int *v11; // rbx
  unsigned int v12; // r15d
  unsigned int *v13; // rbp
  unsigned __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int i; // ebx
  void *v17; // r15
  void *v18; // r15
  void *v19; // rdi
  int v20; // eax
  void *v21; // r15
  void *v22; // r15
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // r14
  void *v27; // r14
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r14
  void *v33; // rbp
  __int64 v34; // rsi
  int v35; // edx
  __int64 v36; // rdx
  char v37; // cl
  __int64 v38; // rdx
  char v39; // cl
  __int64 v40; // rax
  __int64 v41; // rbx
  void *v42; // rbp
  int v43; // eax
  __int64 v44; // rax
  unsigned int v45; // ebx
  __int64 v46; // rbp
  __int64 v47; // r15
  unsigned int v48; // ebx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r14
  int v53; // eax
  char **exception; // rbx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  unsigned int v58; // edx
  __int64 v59; // rbp
  _DWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rbx
  _QWORD *v64; // rdx
  __int64 v65; // rax
  unsigned int v66; // r14d
  unsigned int v67; // ecx
  unsigned int *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // r13
  void *v73; // rbp
  __int64 v74; // rsi
  _QWORD *v76; // rax
  __int64 v77; // [rsp+8h] [rbp-1D0h]
  int v79; // [rsp+20h] [rbp-1B8h]
  unsigned int v80; // [rsp+20h] [rbp-1B8h]
  unsigned int v81; // [rsp+24h] [rbp-1B4h]
  unsigned int *v82; // [rsp+28h] [rbp-1B0h]
  __int64 v83; // [rsp+30h] [rbp-1A8h]
  __int64 v84; // [rsp+40h] [rbp-198h]
  unsigned int *v85; // [rsp+48h] [rbp-190h]
  void *v86; // [rsp+58h] [rbp-180h]
  unsigned int *v87; // [rsp+58h] [rbp-180h]
  __int64 v88; // [rsp+68h] [rbp-170h]
  unsigned int v89; // [rsp+70h] [rbp-168h]
  unsigned int v90; // [rsp+74h] [rbp-164h]
  unsigned int v92; // [rsp+94h] [rbp-144h] BYREF
  __int64 v93; // [rsp+98h] [rbp-140h] BYREF
  unsigned int *v94; // [rsp+A0h] [rbp-138h] BYREF
  unsigned int *v95; // [rsp+A8h] [rbp-130h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v97; // [rsp+B8h] [rbp-120h]
  __int64 v98; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-110h]
  int v100; // [rsp+D0h] [rbp-108h]
  _QWORD v101[2]; // [rsp+E0h] [rbp-F8h] BYREF
  _QWORD v102[2]; // [rsp+F0h] [rbp-E8h] BYREF
  int v103; // [rsp+100h] [rbp-D8h]
  int v104; // [rsp+110h] [rbp-C8h] BYREF
  char v105; // [rsp+114h] [rbp-C4h]
  __int64 v106; // [rsp+118h] [rbp-C0h]
  int v107; // [rsp+120h] [rbp-B8h] BYREF
  char v108; // [rsp+124h] [rbp-B4h]
  __int64 v109; // [rsp+128h] [rbp-B0h]
  int v110; // [rsp+130h] [rbp-A8h]
  int v111; // [rsp+140h] [rbp-98h] BYREF
  char v112; // [rsp+144h] [rbp-94h]
  __int64 v113; // [rsp+148h] [rbp-90h]
  int v114; // [rsp+150h] [rbp-88h] BYREF
  char v115; // [rsp+154h] [rbp-84h]
  __int64 v116; // [rsp+158h] [rbp-80h]
  int v117; // [rsp+160h] [rbp-78h]
  __int64 v118; // [rsp+170h] [rbp-68h] BYREF
  __int64 v119; // [rsp+178h] [rbp-60h]
  __int64 v120; // [rsp+180h] [rbp-58h] BYREF
  __int64 v121; // [rsp+188h] [rbp-50h]
  int v122; // [rsp+190h] [rbp-48h]

  v90 = *(_DWORD *)(a1 + 132);
  v3 = (unsigned int *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)v90 << 6));
  ++dword_1C7ED80;
  v96 = 0;
  v97 = 0;
  v98 = 1;
  v99 = 0;
  sub_182CBA0(qword_1C7F2C0, &v98);
  BYTE4(v98) &= ~1u;
  v4 = *v3;
  LODWORD(v98) = 1;
  v100 = 0;
  v5 = 5 * v4;
  v6 = *(_QWORD *)(a1 + 72);
  v101[0] = 0;
  v101[1] = 0;
  v7 = (int *)(v6 + 8 * v5);
  v102[0] = 1;
  v102[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v101, v7);
  v85 = nullptr;
  v8 = nullptr;
  v83 = 0;
  v103 = v7[8];
  v81 = v90;
  do
  {
    if ( !v85 || (v9 = *(v85 - 1), (_DWORD)v9 == *(v85 - 2)) )
    {
      v94 = v85;
      sub_313C10(&v94);
      v85 = v94;
      v9 = *(v94 - 1);
    }
    v10 = qword_1C7F2C0;
    v85[v9] = v81;
    ++*(v85 - 1);
    v11 = (unsigned int *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)v81 << 6));
    v12 = *v11;
    v89 = *v11;
    sub_2FC4A0((__int64)v10, (__int64)&v96, (__int64)(v11 + 2), (__int64)&v96);
    v100 += v11[10];
    v88 = v12;
    v13 = *(unsigned int **)(*(_QWORD *)(a1 + 48) + 8LL * v12);
    if ( v13 )
    {
      v82 = &v13[*(v13 - 1)];
      if ( v13 != v82 )
      {
        while ( 2 )
        {
          while ( 1 )
          {
            v92 = *v13;
            v14 = *(_QWORD *)(a1 + 40) + ((unsigned __int64)v92 << 6);
            if ( v92 != v81 && *(_BYTE *)(v14 + 60) && v8 )
              break;
LABEL_7:
            if ( v82 == ++v13 )
              goto LABEL_57;
          }
          v15 = *(v8 - 1);
          v84 = v14 + 8;
          v79 = *(_DWORD *)(v14 + 4);
          for ( i = 0; ; ++i )
          {
            if ( i >= v15 )
              goto LABEL_7;
            if ( v79 == v8[i] )
              break;
LABEL_12:
            ;
          }
          v77 = v83 + 40LL * i;
          sub_89AC50((__int64)&v111, v84, (__int64)&v96);
          v118 = 0;
          v17 = qword_1C7F2C0;
          v119 = 0;
          v120 = 1;
          v121 = 0;
          if ( (v112 & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v118, &v111);
            if ( (v115 & 1) == 0 )
              goto LABEL_17;
          }
          else
          {
            LODWORD(v118) = v111;
            if ( (v115 & 1) == 0 )
            {
LABEL_17:
              BYTE4(v120) &= ~1u;
              LODWORD(v120) = v114;
              goto LABEL_18;
            }
          }
          sub_182C690(v17, &v120, &v114);
LABEL_18:
          v18 = qword_1C7F2C0;
          v122 = v117;
          if ( *(_DWORD *)v77 )
          {
            if ( (_DWORD)v118 )
            {
              if ( (v120 & 0x100000000LL) != 0
                || (_DWORD)v120 != 1
                || (*(_BYTE *)(v77 + 20) & 1) != 0
                || *(_DWORD *)(v77 + 16) != 1 )
              {
                sub_1851D20(qword_1C7F2C0, &v118, v77, &v118);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, &v118, v77, &v118);
                sub_182CBA0(v18, &v120);
                BYTE4(v120) &= ~1u;
                LODWORD(v120) = 1;
              }
            }
            else
            {
              if ( (*(_BYTE *)(v77 + 4) & 1) != 0 )
              {
                sub_182C690(qword_1C7F2C0, &v118, v77);
              }
              else
              {
                LODWORD(v118) = *(_DWORD *)v77;
                BYTE4(v118) &= ~1u;
              }
              if ( (*(_BYTE *)(v77 + 20) & 1) != 0 )
              {
                sub_182C690(v18, &v120, v77 + 16);
              }
              else
              {
                v53 = *(_DWORD *)(v77 + 16);
                BYTE4(v120) &= ~1u;
                LODWORD(v120) = v53;
              }
            }
          }
          else
          {
            if ( (v118 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v118, &v118);
            else
              BYTE4(v118) &= ~1u;
            if ( (v120 & 0x100000000LL) != 0 )
              sub_182C690(v18, &v120, &v120);
            else
              BYTE4(v120) &= ~1u;
          }
          v19 = qword_1C7F2C0;
          v104 = 0;
          v105 &= 0xFCu;
          v20 = *(_DWORD *)(v77 + 32);
          v108 &= 0xFCu;
          v122 += v20;
          v106 = 0;
          v107 = 1;
          v109 = 0;
          if ( (v118 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v104, &v118);
          else
            v104 = v118;
          if ( (v120 & 0x100000000LL) != 0 )
          {
            sub_182C690(v19, &v107, &v120);
          }
          else
          {
            v108 &= ~1u;
            v107 = v120;
          }
          v21 = qword_1C7F2C0;
          v110 = v122;
          sub_182CBA0(qword_1C7F2C0, &v118);
          sub_182CBA0(v21, &v120);
          v22 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v111);
          sub_182CBA0(v22, &v114);
          if ( v104 <= 0 && (v104 || v110 < 0) )
          {
LABEL_44:
            v27 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v104);
            sub_182CBA0(v27, &v107);
            v15 = *(v8 - 1);
            goto LABEL_12;
          }
          v118 = 0;
          v23 = qword_1C7F2C0;
          v119 = 0;
          v120 = 1;
          v121 = 0;
          if ( (v101[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v118, v101);
          else
            LODWORD(v118) = v101[0];
          if ( (v102[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v23, &v120, v102);
          }
          else
          {
            BYTE4(v120) &= ~1u;
            LODWORD(v120) = v102[0];
          }
          v24 = qword_1C7F2C0;
          v122 = v103;
          if ( v104 )
          {
            if ( (_DWORD)v118 )
            {
              if ( (v120 & 0x100000000LL) != 0 || (_DWORD)v120 != 1 || (v108 & 1) != 0 || v107 != 1 )
              {
                sub_1851D20(qword_1C7F2C0, &v118, &v104, &v118);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, &v118, &v104, &v118);
                sub_182CBA0(v24, &v120);
                BYTE4(v120) &= ~1u;
                LODWORD(v120) = 1;
              }
            }
            else
            {
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v118, &v104);
            }
          }
          else
          {
            if ( (v118 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v118, &v118);
            else
              BYTE4(v118) &= ~1u;
            if ( (v120 & 0x100000000LL) != 0 )
              sub_182C690(v24, &v120, &v120);
            else
              BYTE4(v120) &= ~1u;
          }
          v25 = qword_1C7F2C0;
          v111 = 0;
          v122 += v110;
          v112 &= 0xFCu;
          v115 &= 0xFCu;
          v113 = 0;
          v114 = 1;
          v116 = 0;
          if ( (v118 & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v111, &v118);
            if ( (v120 & 0x100000000LL) == 0 )
              goto LABEL_39;
          }
          else
          {
            v111 = v118;
            if ( (v120 & 0x100000000LL) == 0 )
            {
LABEL_39:
              v115 &= ~1u;
              v114 = v120;
              goto LABEL_40;
            }
          }
          sub_182C690(v25, &v114, &v120);
LABEL_40:
          v117 = v122;
          v86 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v118);
          sub_182CBA0(v86, &v120);
          v26 = qword_1C7F2C0;
          if ( v111 < 0 || !v111 && v117 < 0 )
          {
            sub_182CBA0(qword_1C7F2C0, &v111);
            sub_182CBA0(v26, &v114);
            sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v101, (__int64)&v104, (__int64)v101);
            v103 += v110;
            v28 = i + 1;
            *(v8 - 1) = i + 1;
            if ( v83 )
            {
              v29 = 40LL * v28;
              v30 = v83 + v29;
              v31 = 40LL * *(unsigned int *)(v83 - 4);
              v32 = v83 + v31;
              if ( v29 != v31 )
              {
                v80 = v28;
                v87 = v13;
                do
                {
                  v33 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v30);
                  v34 = v30 + 16;
                  v30 += 40;
                  sub_182CBA0(v33, v34);
                }
                while ( v32 != v30 );
                v28 = v80;
                v13 = v87;
              }
              *(_DWORD *)(v83 - 4) = v28;
            }
            if ( v85 )
              *(v85 - 1) = v28;
            v94 = v85;
            sub_B76360(&v94, &v92);
            v85 = v94;
            sub_89AA40((__int64)&v118, v77, v84);
            v35 = v118;
            ++v13;
            LODWORD(v118) = v96;
            LODWORD(v96) = v35;
            v36 = v119;
            v119 = v97;
            v97 = v36;
            v37 = BYTE4(v118) & 1;
            LOBYTE(v36) = BYTE4(v96) & 0xFC | BYTE4(v118) & 2;
            BYTE4(v118) = BYTE4(v96) & 1 | BYTE4(v118) & 0xFC | BYTE4(v96) & 2;
            BYTE4(v96) = v37 | v36;
            LODWORD(v36) = v120;
            LODWORD(v120) = v98;
            LODWORD(v98) = v36;
            v38 = v121;
            v121 = v99;
            v99 = v38;
            v39 = BYTE4(v120) & 1;
            LOBYTE(v38) = BYTE4(v98) & 0xFD | BYTE4(v120) & 2;
            BYTE4(v120) = BYTE4(v98) & 1 | BYTE4(v120) & 0xFC | BYTE4(v98) & 2;
            BYTE4(v98) = v39 | v38 & 0xFE;
            v100 = v122;
            sub_25A130((char *)&v118);
            sub_25A130((char *)&v104);
            if ( v82 != v13 )
              continue;
            goto LABEL_57;
          }
          break;
        }
        sub_182CBA0(qword_1C7F2C0, &v111);
        sub_182CBA0(v26, &v114);
        goto LABEL_44;
      }
    }
LABEL_57:
    if ( !v83 || (v40 = *(unsigned int *)(v83 - 4), (_DWORD)v40 == *(_DWORD *)(v83 - 8)) )
    {
      v93 = v83;
      sub_8CF310(&v93);
      v83 = v93;
      v40 = *(unsigned int *)(v93 - 4);
    }
    v41 = v83 + 40 * v40;
    *(_QWORD *)v41 = 0;
    v42 = qword_1C7F2C0;
    *(_QWORD *)(v41 + 8) = 0;
    *(_QWORD *)(v41 + 16) = 1;
    *(_QWORD *)(v41 + 24) = 0;
    if ( (v96 & 0x100000000LL) != 0 )
      sub_182C690(v42, v41, &v96);
    else
      *(_DWORD *)v41 = v96;
    if ( (v98 & 0x100000000LL) != 0 )
    {
      sub_182C690(v42, v41 + 16, &v98);
    }
    else
    {
      v43 = v98;
      *(_BYTE *)(v41 + 20) &= ~1u;
      *(_DWORD *)(v41 + 16) = v43;
    }
    *(_DWORD *)(v41 + 32) = v100;
    ++*(_DWORD *)(v83 - 4);
    if ( !v8 || (v44 = *(v8 - 1), (_DWORD)v44 == *(v8 - 2)) )
    {
      v95 = v8;
      sub_313C10(&v95);
      v8 = v95;
      v44 = *(v95 - 1);
    }
    v8[v44] = v89;
    ++*(v8 - 1);
    v81 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v88);
  }
  while ( v90 != v81 );
  if ( !v85 )
  {
    v118 = 0;
    v119 = 0;
    v120 = 1;
    v121 = 0;
    v122 = 0;
    goto LABEL_113;
  }
  v45 = *(v85 - 1);
  v118 = 0;
  v119 = 0;
  v120 = 1;
  v121 = 0;
  v122 = 0;
  if ( !v45 )
    goto LABEL_113;
  v46 = v45;
  v47 = 0;
  v48 = v45 - 1;
  do
  {
    v50 = *(_QWORD *)(a1 + 40);
    v51 = (unsigned int)(v47 - 1);
    v52 = v50 + ((unsigned __int64)v85[v47] << 6);
    if ( !v47 )
      v51 = v48;
    if ( *(_DWORD *)(v52 + 4) != *(_DWORD *)(v50 + ((unsigned __int64)v85[v51] << 6)) )
      goto LABEL_113;
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v118, v52 + 8, (__int64)&v118);
    ++v47;
    v49 = v122 + *(_DWORD *)(v52 + 40);
    v122 = v49;
  }
  while ( v47 != v46 );
  if ( (int)v118 > 0 || !(_DWORD)v118 && v49 >= 0 )
  {
LABEL_113:
    sub_25A130((char *)&v118);
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_B75C60(&v118, "edges are not inconsistent");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v118);
    sub_233E40((__int64)&v118);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_25A130((char *)&v118);
  if ( *(v85 - 1) )
  {
    v55 = *(_QWORD *)(a1 + 184);
    v56 = 0;
    do
    {
      v57 = v85[v56++];
      ++*(_DWORD *)(v55 + 4 * v57);
      v58 = *(v85 - 1);
    }
    while ( (unsigned int)v56 < v58 );
    if ( v58 )
    {
      v59 = 0;
      do
      {
        v63 = *(_QWORD *)(a1 + 40) + ((unsigned __int64)v85[v59] << 6);
        if ( *(_DWORD *)(v63 + 52) != -2 )
        {
          v64 = *(_QWORD **)a2;
          if ( *(_QWORD *)a2 )
          {
            v65 = *((unsigned int *)v64 - 1);
            if ( (_DWORD)v65 == *((_DWORD *)v64 - 2) )
            {
              v66 = (unsigned int)(3 * v65 + 1) >> 1;
              v67 = 4 * v66 + 8;
              if ( 4 * (int)v65 + 8 >= v67 || (unsigned int)v65 >= v66 )
              {
                v2 = (char **)__cxa_allocate_exception(0x28u);
                sub_B75C60(&v118, "Overflow encountered when expanding vector");
                *v2 = (char *)off_1C63128;
                sub_2333C0(v2 + 1, &v118);
                sub_233E40((__int64)&v118);
                __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v68 = (unsigned int *)sub_186B300(v64 - 1, v67);
              v64 = v68 + 2;
              *v68 = v66;
              v69 = v68[1];
              *(_QWORD *)a2 = v64;
              v60 = (_DWORD *)v64 + v69;
            }
            else
            {
              v60 = (_DWORD *)v64 + v65;
            }
          }
          else
          {
            v76 = (_QWORD *)sub_186B270(0x10u);
            *v76 = 2;
            v64 = v76 + 1;
            *(_QWORD *)a2 = v76 + 1;
            v60 = v76 + 1;
          }
          *v60 = *(_DWORD *)(v63 + 52);
          ++*((_DWORD *)v64 - 1);
          v61 = *(_QWORD *)(a2 + 8);
          if ( !v61 || (v62 = *(unsigned int *)(v61 - 4), (_DWORD)v62 == *(_DWORD *)(v61 - 8)) )
          {
            sub_2FD3F0((unsigned int **)(a2 + 8));
            v61 = *(_QWORD *)(a2 + 8);
            v62 = *(unsigned int *)(v61 - 4);
          }
          *(_DWORD *)(v61 + 4 * v62) = *(_DWORD *)(v63 + 56);
          ++*(_DWORD *)(v61 - 4);
          v58 = *(v85 - 1);
        }
        ++v59;
      }
      while ( (unsigned int)v59 < v58 );
    }
  }
  sub_25A130((char *)v101);
  sub_25A130((char *)&v96);
  sub_186B220(v8 - 2);
  sub_186B220(v85 - 2);
  v70 = *(unsigned int *)(v83 - 4);
  if ( (_DWORD)v70 )
  {
    v71 = v83;
    v72 = v83 + 40 * v70;
    do
    {
      v73 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v71);
      v74 = v71 + 16;
      v71 += 40;
      sub_182CBA0(v73, v74);
    }
    while ( v71 != v72 );
  }
  return sub_186B220((void *)(v83 - 8));
}

