char **__fastcall sub_307810(__int64 *a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  char **exception; // r12
  char **v6; // rbp
  __int64 v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r12
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  __int64 *v19; // rsi
  void *v20; // r15
  int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // r9d
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // rdx
  __int64 v32; // r11
  __int64 v33; // rcx
  __int64 v34; // rdx
  void *v35; // r12
  _QWORD *v36; // rax
  _QWORD *v37; // r12
  _QWORD *v38; // r14
  unsigned int i; // r15d
  __int64 v40; // rbx
  unsigned int v41; // ecx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 *v44; // rdx
  __int64 v45; // rsi
  bool v46; // zf
  unsigned int v48; // r15d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rsi
  __int64 v52; // r15
  int v53; // r9d
  __int64 v54; // rdx
  char *v55; // r15
  __int64 v56; // rdx
  char *v57; // r10
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rdi
  __int64 v61; // rdx
  int v62; // edi
  int v63; // esi
  __int64 v64; // rdi
  __int64 v65; // rsi
  char v66; // r11
  char v67; // r11
  __int64 v68; // rdi
  __int64 v69; // rsi
  char v70; // r11
  char v71; // r11
  char *v72; // r15
  char *v73; // rbx
  void *v74; // rbp
  char *v75; // rsi
  int v76; // eax
  int v77; // edx
  __int64 v78; // rax
  char v79; // si
  __int64 v80; // rax
  char v81; // si
  int v82; // eax
  int v83; // esi
  __int64 v84; // rax
  char v85; // di
  __int64 v86; // rax
  char v87; // di
  _QWORD *v88; // rax
  int v89; // edx
  int v90; // esi
  __int64 v91; // rdx
  char v92; // di
  __int64 v93; // rdx
  char v94; // di
  __int64 v95; // [rsp+0h] [rbp-C8h]
  __int64 *v97; // [rsp+10h] [rbp-B8h]
  size_t v98; // [rsp+20h] [rbp-A8h]
  _QWORD *v99; // [rsp+20h] [rbp-A8h]
  __int64 v100; // [rsp+20h] [rbp-A8h]
  int v101; // [rsp+28h] [rbp-A0h]
  __int64 v102; // [rsp+28h] [rbp-A0h]
  unsigned int v103; // [rsp+28h] [rbp-A0h]
  char *v104; // [rsp+30h] [rbp-98h]
  __int64 v105; // [rsp+30h] [rbp-98h]
  __int64 v106; // [rsp+38h] [rbp-90h]
  char **v107; // [rsp+40h] [rbp-88h]
  unsigned int v108; // [rsp+48h] [rbp-80h]
  int v109; // [rsp+48h] [rbp-80h]
  int v110; // [rsp+4Ch] [rbp-7Ch]
  __int64 v111; // [rsp+60h] [rbp-68h] BYREF
  __int64 v112; // [rsp+68h] [rbp-60h] BYREF
  __int64 v113; // [rsp+70h] [rbp-58h]
  __int64 v114; // [rsp+78h] [rbp-50h] BYREF
  __int64 v115; // [rsp+80h] [rbp-48h]

  v6 = (char **)a1;
  v8 = sub_186B270(0x140u);
  *(_QWORD *)(v8 + 224) = 1;
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 1;
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 1;
  *(_QWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_QWORD *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 96) = 0;
  *(_QWORD *)(v8 + 104) = 1;
  *(_QWORD *)(v8 + 112) = 0;
  *(_QWORD *)(v8 + 120) = 0;
  *(_QWORD *)(v8 + 128) = 0;
  *(_QWORD *)(v8 + 136) = 0;
  *(_QWORD *)(v8 + 144) = 1;
  *(_QWORD *)(v8 + 152) = 0;
  *(_QWORD *)(v8 + 160) = 0;
  *(_QWORD *)(v8 + 168) = 0;
  *(_QWORD *)(v8 + 176) = 0;
  *(_QWORD *)(v8 + 184) = 1;
  *(_QWORD *)(v8 + 192) = 0;
  *(_QWORD *)(v8 + 200) = 0;
  *(_QWORD *)(v8 + 208) = 0;
  *(_QWORD *)(v8 + 216) = 0;
  *(_BYTE *)(v8 + 228) = 0;
  *(_QWORD *)(v8 + 248) = 0;
  *(_OWORD *)(v8 + 232) = 0;
  *(_QWORD *)(v8 + 256) = 0;
  *a1 = v8;
  v9 = *(_QWORD **)a3;
  *(_QWORD *)(v8 + 264) = 1;
  *(_QWORD *)(v8 + 272) = 0;
  *(_QWORD *)(v8 + 280) = 0;
  *(_QWORD *)(v8 + 288) = 0;
  *(_QWORD *)(v8 + 296) = 0;
  *(_QWORD *)(v8 + 304) = 1;
  *(_QWORD *)(v8 + 312) = 0;
  a1[1] = 8;
  v10 = *(unsigned int *)(a3 + 8);
  *((_DWORD *)a1 + 4) = 0;
  v11 = &v9[5 * v10];
  if ( v9 == v11 )
    goto LABEL_39;
  while ( *v9 <= 1u )
  {
    v9 += 5;
    if ( v11 == v9 )
      goto LABEL_39;
  }
  if ( v11 == v9 )
    goto LABEL_39;
  v12 = *v9;
  do
  {
    v13 = sub_15EC2C0(*a2, v12);
    v14 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v15 = (_QWORD *)a2[3];
    if ( v15 )
    {
      v16 = *((_DWORD *)v15 - 1);
      if ( v16 == *((_DWORD *)v15 - 2) )
      {
        v48 = (3 * v16 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v16 + 8 >= (unsigned int)v49 || v16 >= v48 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v111, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v111);
          sub_233E40((__int64)&v111);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v50 = (unsigned int *)sub_186B300(v15 - 1, v49);
        v51 = v50[1];
        v15 = v50 + 2;
        *v50 = v48;
        a2[3] = v50 + 2;
        LODWORD(v50) = v51;
        v19 = &v15[v51];
        v18 = (_DWORD)v50 + 1;
      }
      else
      {
        v17 = v16;
        v18 = v16 + 1;
        v19 = &v15[v17];
      }
    }
    else
    {
      v88 = (_QWORD *)sub_186B270(0x18u);
      v15 = v88 + 1;
      *v88 = 2;
      v18 = 1;
      a2[3] = v15;
      v19 = v15;
    }
    *v19 = v14;
    *((_DWORD *)v15 - 1) = v18;
    v111 = v14;
    v112 = 0;
    v113 = 0;
    v20 = qword_1C7F2C0;
    v114 = 1;
    v115 = 0;
    if ( (*((_BYTE *)v9 + 12) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v112, v9 + 1);
    else
      LODWORD(v112) = *((_DWORD *)v9 + 2);
    if ( (*((_BYTE *)v9 + 28) & 1) != 0 )
    {
      sub_182C690(v20, &v114, v9 + 3);
    }
    else
    {
      v21 = *((_DWORD *)v9 + 6);
      BYTE4(v114) &= ~1u;
      LODWORD(v114) = v21;
    }
    v22 = *((unsigned int *)v6 + 2);
    v23 = 2 * v22;
    if ( 3 * (int)v22 < (unsigned int)(4 * (*((_DWORD *)v6 + 3) + *((_DWORD *)v6 + 4))) )
    {
      v52 = v23;
      v101 = 2 * v22;
      v98 = 40LL * v23;
      v95 = v98;
      v25 = sub_186B270(v98);
      v53 = v101;
      if ( v101 )
      {
        v54 = v25;
        do
        {
          *(_OWORD *)(v54 + 24) = 0;
          v54 += 40;
          *(_OWORD *)(v54 - 32) = 0;
          *(_QWORD *)(v54 - 40) = 0;
          *(_BYTE *)(v54 - 28) = 0;
          *(_DWORD *)(v54 - 16) = 1;
          *(_BYTE *)(v54 - 12) = 0;
        }
        while ( v25 + 40 * v52 != v54 );
      }
      v55 = *v6;
      v24 = v101 - 1;
      v56 = *((unsigned int *)v6 + 2);
      v57 = &(*v6)[40 * v56];
      v26 = v25 + v98;
      if ( *v6 != v57 )
      {
        do
        {
          while ( 1 )
          {
            v58 = *(_QWORD *)v55;
            if ( *(_QWORD *)v55 > 1u )
              break;
            v55 += 40;
            if ( v57 == v55 )
              goto LABEL_67;
          }
          v59 = 40LL * (*(_DWORD *)(v58 + 12) & v24);
          v60 = v25 + v59;
          if ( v98 == v59 )
          {
LABEL_75:
            if ( v25 == v60 )
            {
LABEL_83:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v61 = v25;
            while ( *(_QWORD *)v61 )
            {
              v61 += 40;
              if ( v60 == v61 )
                goto LABEL_83;
            }
          }
          else
          {
            v61 = v25 + v59;
            while ( *(_QWORD *)v61 )
            {
              v61 += 40;
              if ( v26 == v61 )
                goto LABEL_75;
            }
          }
          v62 = *((_DWORD *)v55 + 2);
          *(_QWORD *)v61 = v58;
          v55 += 40;
          v63 = *(_DWORD *)(v61 + 8);
          *(_DWORD *)(v61 + 8) = v62;
          v64 = *((_QWORD *)v55 - 3);
          *((_DWORD *)v55 - 8) = v63;
          v65 = *(_QWORD *)(v61 + 16);
          *(_QWORD *)(v61 + 16) = v64;
          v66 = *(v55 - 28);
          *((_QWORD *)v55 - 3) = v65;
          LOBYTE(v65) = *(_BYTE *)(v61 + 12);
          *(_BYTE *)(v61 + 12) = v66 & 2 | v65 & 0xFD;
          LOBYTE(v65) = v65 & 2 | *(v55 - 28) & 0xFD;
          *(v55 - 28) = v65;
          v67 = *(_BYTE *)(v61 + 12);
          *(_BYTE *)(v61 + 12) = v65 & 1 | v67 & 0xFE;
          LODWORD(v64) = *((_DWORD *)v55 - 4);
          *(v55 - 28) = v67 & 1 | *(v55 - 28) & 0xFE;
          LODWORD(v65) = *(_DWORD *)(v61 + 24);
          *(_DWORD *)(v61 + 24) = v64;
          v68 = *((_QWORD *)v55 - 1);
          *((_DWORD *)v55 - 4) = v65;
          v69 = *(_QWORD *)(v61 + 32);
          *(_QWORD *)(v61 + 32) = v68;
          v70 = *(v55 - 12);
          *((_QWORD *)v55 - 1) = v69;
          LOBYTE(v69) = *(_BYTE *)(v61 + 28);
          *(_BYTE *)(v61 + 28) = v70 & 2 | v69 & 0xFD;
          LOBYTE(v69) = v69 & 2 | *(v55 - 12) & 0xFD;
          *(v55 - 12) = v69;
          v71 = *(_BYTE *)(v61 + 28) & 1;
          *(_BYTE *)(v61 + 28) = v69 & 1 | *(_BYTE *)(v61 + 28) & 0xFE;
          *(v55 - 12) = v71 | *(v55 - 12) & 0xFE;
        }
        while ( v57 != v55 );
LABEL_67:
        v56 = *((unsigned int *)v6 + 2);
        v57 = *v6;
      }
      if ( v57 )
      {
        if ( (_DWORD)v56 )
        {
          v102 = v25;
          v104 = v57;
          v108 = v24;
          v72 = &v57[40 * v56];
          v106 = v25 + v98;
          v107 = v6;
          v110 = v53;
          v99 = v11;
          v73 = v57;
          do
          {
            v74 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v73 + 8);
            v75 = v73 + 24;
            v73 += 40;
            sub_182CBA0(v74, v75);
          }
          while ( v72 != v73 );
          v11 = v99;
          v25 = v102;
          v57 = v104;
          v24 = v108;
          v26 = v106;
          v6 = v107;
          v53 = v110;
        }
        v109 = v53;
        v105 = v26;
        v103 = v24;
        v100 = v25;
        sub_186B220(v57);
        v25 = v100;
        v24 = v103;
        v26 = v105;
        v53 = v109;
      }
      *v6 = (char *)v25;
      *((_DWORD *)v6 + 2) = v53;
      *((_DWORD *)v6 + 4) = 0;
    }
    else
    {
      v24 = v22 - 1;
      v25 = (__int64)*v6;
      v95 = 40 * v22;
      v26 = (__int64)&(*v6)[40 * v22];
    }
    v27 = v111;
    v28 = *(_DWORD *)(v111 + 12);
    v29 = 40LL * (v28 & v24);
    v30 = v25 + v29;
    if ( v29 != v95 )
    {
      v31 = v25 + v29;
      v32 = 0;
      while ( 1 )
      {
        v33 = *(_QWORD *)v31;
        if ( *(_QWORD *)v31 > 1u )
        {
          if ( *(_DWORD *)(v33 + 12) == v28 && v111 == v33 )
          {
            v82 = *(_DWORD *)(v31 + 8);
            v83 = v112;
            *(_QWORD *)v31 = v111;
            *(_DWORD *)(v31 + 8) = v83;
            LODWORD(v112) = v82;
            v84 = *(_QWORD *)(v31 + 16);
            *(_QWORD *)(v31 + 16) = v113;
            v113 = v84;
            LOBYTE(v83) = *(_BYTE *)(v31 + 12);
            *(_BYTE *)(v31 + 12) = BYTE4(v112) & 2 | v83 & 0xFD;
            BYTE4(v112) = v83 & 2 | BYTE4(v112) & 0xFD;
            v85 = *(_BYTE *)(v31 + 12);
            *(_BYTE *)(v31 + 12) = BYTE4(v112) & 1 | v85 & 0xFE;
            BYTE4(v112) = v85 & 1 | BYTE4(v112) & 0xFE;
            LODWORD(v84) = *(_DWORD *)(v31 + 24);
            *(_DWORD *)(v31 + 24) = v114;
            LODWORD(v114) = v84;
            v86 = *(_QWORD *)(v31 + 32);
            *(_QWORD *)(v31 + 32) = v115;
            v115 = v86;
            LOBYTE(v83) = *(_BYTE *)(v31 + 28);
            *(_BYTE *)(v31 + 28) = BYTE4(v114) & 2 | v83 & 0xFD;
            BYTE4(v114) = v83 & 2 | BYTE4(v114) & 0xFD;
            v87 = *(_BYTE *)(v31 + 28) & 1;
            *(_BYTE *)(v31 + 28) = BYTE4(v114) & 1 | *(_BYTE *)(v31 + 28) & 0xFE;
            BYTE4(v114) = v87 | BYTE4(v114) & 0xFE;
            goto LABEL_34;
          }
        }
        else
        {
          if ( !v33 )
          {
            if ( v32 )
              goto LABEL_81;
            v32 = v31;
            goto LABEL_82;
          }
          v32 = v31;
        }
        v31 += 40;
        if ( v31 == v26 )
          goto LABEL_29;
      }
    }
    v32 = 0;
    while ( 1 )
    {
LABEL_29:
      if ( v30 == v25 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v34 = *(_QWORD *)v25;
      if ( *(_QWORD *)v25 <= 1u )
        break;
      if ( *(_DWORD *)(v34 + 12) == v28 && v111 == v34 )
      {
        v89 = *(_DWORD *)(v25 + 8);
        v90 = v112;
        *(_QWORD *)v25 = v111;
        *(_DWORD *)(v25 + 8) = v90;
        LODWORD(v112) = v89;
        v91 = *(_QWORD *)(v25 + 16);
        *(_QWORD *)(v25 + 16) = v113;
        v113 = v91;
        LOBYTE(v91) = *(_BYTE *)(v25 + 12);
        *(_BYTE *)(v25 + 12) = BYTE4(v112) & 2 | v91 & 0xFD;
        BYTE4(v112) = v91 & 2 | BYTE4(v112) & 0xFD;
        v92 = *(_BYTE *)(v25 + 12);
        *(_BYTE *)(v25 + 12) = BYTE4(v112) & 1 | v92 & 0xFE;
        BYTE4(v112) = v92 & 1 | BYTE4(v112) & 0xFE;
        LODWORD(v91) = *(_DWORD *)(v25 + 24);
        *(_DWORD *)(v25 + 24) = v114;
        LODWORD(v114) = v91;
        v93 = *(_QWORD *)(v25 + 32);
        *(_QWORD *)(v25 + 32) = v115;
        v115 = v93;
        LOBYTE(v93) = *(_BYTE *)(v25 + 28);
        *(_BYTE *)(v25 + 28) = BYTE4(v114) & 2 | v93 & 0xFD;
        BYTE4(v114) = v93 & 2 | BYTE4(v114) & 0xFD;
        v94 = *(_BYTE *)(v25 + 28) & 1;
        *(_BYTE *)(v25 + 28) = BYTE4(v114) & 1 | *(_BYTE *)(v25 + 28) & 0xFE;
        BYTE4(v114) = v94 | BYTE4(v114) & 0xFE;
        goto LABEL_34;
      }
LABEL_28:
      v25 += 40;
    }
    if ( v34 )
    {
      v32 = v25;
      goto LABEL_28;
    }
    if ( v32 )
LABEL_81:
      --*((_DWORD *)v6 + 4);
    else
      v32 = v25;
LABEL_82:
    v76 = *(_DWORD *)(v32 + 8);
    v77 = v112;
    *(_QWORD *)v32 = v27;
    *(_DWORD *)(v32 + 8) = v77;
    LODWORD(v112) = v76;
    v78 = *(_QWORD *)(v32 + 16);
    *(_QWORD *)(v32 + 16) = v113;
    v113 = v78;
    LOBYTE(v77) = *(_BYTE *)(v32 + 12);
    *(_BYTE *)(v32 + 12) = BYTE4(v112) & 2 | v77 & 0xFD;
    BYTE4(v112) = v77 & 2 | BYTE4(v112) & 0xFD;
    v79 = *(_BYTE *)(v32 + 12);
    *(_BYTE *)(v32 + 12) = BYTE4(v112) & 1 | v79 & 0xFE;
    BYTE4(v112) = v79 & 1 | BYTE4(v112) & 0xFE;
    LODWORD(v78) = *(_DWORD *)(v32 + 24);
    *(_DWORD *)(v32 + 24) = v114;
    LODWORD(v114) = v78;
    v80 = *(_QWORD *)(v32 + 32);
    *(_QWORD *)(v32 + 32) = v115;
    v115 = v80;
    LOBYTE(v77) = *(_BYTE *)(v32 + 28);
    *(_BYTE *)(v32 + 28) = BYTE4(v114) & 2 | v77 & 0xFD;
    BYTE4(v114) = v77 & 2 | BYTE4(v114) & 0xFD;
    v81 = *(_BYTE *)(v32 + 28) & 1;
    *(_BYTE *)(v32 + 28) = BYTE4(v114) & 1 | *(_BYTE *)(v32 + 28) & 0xFE;
    LOBYTE(v80) = BYTE4(v114);
    ++*((_DWORD *)v6 + 3);
    BYTE4(v114) = v81 | v80 & 0xFE;
LABEL_34:
    v35 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v112);
    sub_182CBA0(v35, &v114);
    v36 = v9 + 5;
    if ( v11 == v9 + 5 )
      break;
    while ( 1 )
    {
      v12 = *v36;
      v9 = v36;
      if ( *v36 > 1u )
        break;
      v36 += 5;
      if ( v11 == v36 )
        goto LABEL_39;
    }
  }
  while ( v11 != v36 );
LABEL_39:
  v37 = (_QWORD *)a4[1];
  if ( v37 )
  {
    v38 = &v37[*((unsigned int *)v37 - 1)];
    if ( v38 != v37 )
    {
      for ( i = 0; ; i = v41 )
      {
        v40 = sub_15EC2C0(*a2, *v37);
        v41 = i + 1;
        v42 = *a4;
        v43 = a4[1];
        v44 = (__int64 *)(v43 + 8LL * i);
        if ( v40 )
          ++*(_DWORD *)(v40 + 8);
        v45 = *v44;
        if ( *v44 && (v46 = *(_DWORD *)(v45 + 8) == 1, --*(_DWORD *)(v45 + 8), v46) )
        {
          v97 = (__int64 *)(v43 + 8LL * i);
          sub_15D7BC0(v42, v45);
          ++v37;
          v41 = i + 1;
          *v97 = v40;
          if ( v38 == v37 )
            return v6;
        }
        else
        {
          ++v37;
          *v44 = v40;
          if ( v38 == v37 )
            return v6;
        }
      }
    }
  }
  return v6;
}

