__int64 __fastcall sub_854190(_QWORD *a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 result; // rax
  unsigned int *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r14
  void *v9; // r13
  _QWORD *v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // r13d
  size_t v14; // rdi
  unsigned int *v15; // rax
  int *v16; // r14
  unsigned int *v17; // r15
  __int64 v18; // rdi
  _DWORD *v19; // rdx
  int *v20; // rax
  int *v21; // rdi
  int v22; // ecx
  char v23; // r8
  __int64 v24; // rcx
  char v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  int *v28; // r12
  int *v29; // rbp
  _QWORD *v30; // r14
  void *v31; // r13
  int *v32; // rsi
  __int64 v33; // r15
  __int64 v34; // rdx
  _QWORD *v35; // rax
  _QWORD *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdx
  void *v39; // r12
  void *v40; // rbx
  __int64 v41; // r12
  int v42; // eax
  int v43; // eax
  __int64 v44; // r12
  __int64 v45; // r14
  void *v46; // r13
  __int64 v47; // rsi
  unsigned int *v48; // r13
  __int64 v49; // rbx
  unsigned int v50; // r14d
  __int64 v51; // r12
  unsigned int *v52; // r15
  int v53; // r8d
  void *v54; // rdi
  int v55; // eax
  _QWORD *v56; // r9
  __int64 v57; // rax
  _QWORD *v58; // rax
  void *v59; // r15
  __int64 v60; // rdx
  __int64 v61; // rdx
  void *v62; // rbx
  __int64 v63; // r12
  unsigned int v64; // r10d
  unsigned int v65; // edx
  __int64 v66; // rax
  int *v67; // r15
  unsigned int v68; // r10d
  _DWORD *v69; // r11
  __int64 v70; // rax
  _QWORD *v71; // rdx
  int *v72; // rdi
  int *i; // rax
  int v74; // ecx
  char v75; // si
  __int64 v76; // rcx
  char v77; // si
  __int64 v78; // rcx
  __int64 v79; // rax
  int *v80; // rbp
  int *v81; // r15
  void *v82; // r12
  int *v83; // rsi
  __int64 v84; // rbx
  int v85; // eax
  __int64 v86; // rax
  _BOOL8 v87; // rdx
  _DWORD *v88; // rax
  int v89; // eax
  char v90; // al
  char v91; // al
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  _QWORD *v96; // r13
  _QWORD *v97; // r12
  void *v98; // r14
  _QWORD *v99; // rsi
  __int64 v100; // [rsp+8h] [rbp-E0h]
  __int64 v101; // [rsp+8h] [rbp-E0h]
  unsigned int v102; // [rsp+10h] [rbp-D8h]
  unsigned int v103; // [rsp+18h] [rbp-D0h]
  unsigned int v104; // [rsp+18h] [rbp-D0h]
  _QWORD *v105; // [rsp+18h] [rbp-D0h]
  int v106; // [rsp+18h] [rbp-D0h]
  void *v107; // [rsp+18h] [rbp-D0h]
  __int64 v108; // [rsp+18h] [rbp-D0h]
  unsigned int v109; // [rsp+20h] [rbp-C8h]
  _QWORD *v110; // [rsp+20h] [rbp-C8h]
  unsigned int v111; // [rsp+20h] [rbp-C8h]
  int v112; // [rsp+20h] [rbp-C8h]
  _QWORD *v113; // [rsp+28h] [rbp-C0h]
  _DWORD *v114; // [rsp+28h] [rbp-C0h]
  unsigned int v115; // [rsp+30h] [rbp-B8h]
  _DWORD *v116; // [rsp+30h] [rbp-B8h]
  __int64 v117; // [rsp+38h] [rbp-B0h]
  _QWORD *v118; // [rsp+38h] [rbp-B0h]
  unsigned int v119; // [rsp+4Ch] [rbp-9Ch]
  __int64 v120; // [rsp+60h] [rbp-88h] BYREF
  __int64 v121; // [rsp+68h] [rbp-80h]
  __int64 v122; // [rsp+70h] [rbp-78h] BYREF
  __int64 v123; // [rsp+78h] [rbp-70h]
  __int64 v124; // [rsp+80h] [rbp-68h] BYREF
  __int64 v125; // [rsp+88h] [rbp-60h]
  int v126; // [rsp+90h] [rbp-58h] BYREF
  char v127; // [rsp+94h] [rbp-54h]
  __int64 v128; // [rsp+98h] [rbp-50h]
  int v129; // [rsp+A0h] [rbp-48h]

  result = *(_QWORD *)(a2 + 8);
  v6 = *(unsigned int **)(result + 24);
  v117 = result;
  if ( !v6 )
  {
LABEL_30:
    v44 = a1[23];
    if ( v44 )
      goto LABEL_31;
    return result;
  }
  v103 = 0;
  while ( 1 )
  {
    result = v103;
    if ( v103 >= *(v6 - 1) )
      break;
    v7 = a1[22];
    v8 = *(_QWORD *)(v117 + 16) + 32LL * v103;
    v100 = v8;
    v115 = v6[v103];
    v9 = qword_1C7F2C0;
    if ( !v7 || v6[v103] >= *(_DWORD *)(v7 - 4) )
    {
      v120 = 0;
      v121 = 0;
      v122 = 1;
      v123 = 0;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v120, &qword_1C7F2A0);
      else
        LODWORD(v120) = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
        sub_182C690(v9, &v122, &qword_1C7F2B0);
      }
      else
      {
        BYTE4(v122) &= ~1u;
        LODWORD(v122) = qword_1C7F2B0;
      }
      v10 = (_QWORD *)a1[22];
      v102 = v115 + 1;
      if ( v10 )
      {
        v119 = *((_DWORD *)v10 - 1);
        if ( v119 < v115 + 1 )
          goto LABEL_12;
        v94 = 32LL * v102;
        v95 = 32LL * v119;
        v96 = &v10[(unsigned __int64)v94 / 8];
        v97 = &v10[(unsigned __int64)v95 / 8];
        if ( v94 != v95 )
        {
          do
          {
            v98 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v96);
            v99 = v96 + 2;
            v96 += 4;
            sub_182CBA0(v98, v99);
          }
          while ( v97 != v96 );
          v10 = (_QWORD *)a1[22];
        }
        *((_DWORD *)v10 - 1) = v102;
      }
      else
      {
        v119 = 0;
        if ( v115 != -1 )
        {
          v92 = (_QWORD *)sub_186B270(0x48u);
          v10 = v92 + 1;
          a1[22] = v92 + 1;
          *v92 = 2;
LABEL_12:
          while ( 1 )
          {
            v11 = *((_DWORD *)v10 - 2);
            v12 = v115 + 1;
            if ( v11 >= v102 )
              break;
            while ( 1 )
            {
              v13 = (3 * v11 + 1) >> 1;
              v14 = 32 * v13 + 8;
              if ( 32 * v11 + 8 >= (unsigned int)v14 || v11 >= v13 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v124, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v124);
                sub_233E40((__int64)&v124);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v15 = (unsigned int *)sub_186B270(v14);
              v16 = (int *)a1[22];
              v17 = v15;
              v10 = v15 + 2;
              if ( !v16 )
                break;
              v18 = (unsigned int)*(v16 - 1);
              v19 = v15 + 2;
              v15[1] = v18;
              v20 = v16;
              v21 = &v16[8 * v18];
              if ( v16 != v21 )
              {
                do
                {
                  v22 = *v20;
                  v23 = *((_BYTE *)v20 + 4);
                  v20 += 8;
                  v19 += 8;
                  *(v19 - 8) = v22;
                  *((_BYTE *)v19 - 28) = v23 & 3 | *(_BYTE *)(v19 - 7) & 0xFC;
                  v24 = *((_QWORD *)v20 - 3);
                  *((_QWORD *)v20 - 3) = 0;
                  *((_QWORD *)v19 - 3) = v24;
                  v25 = *((_BYTE *)v20 - 12);
                  *(v19 - 4) = *(v20 - 4);
                  *((_BYTE *)v19 - 12) = v25 & 3 | *(_BYTE *)(v19 - 3) & 0xFC;
                  v26 = *((_QWORD *)v20 - 1);
                  *((_QWORD *)v20 - 1) = 0;
                  *((_QWORD *)v19 - 1) = v26;
                }
                while ( v21 != v20 );
              }
              v27 = (unsigned int)*(v16 - 1);
              v28 = &v16[8 * v27];
              if ( (_DWORD)v27 )
              {
                v109 = v13;
                v113 = a1;
                v29 = v16;
                v30 = v10;
                do
                {
                  v31 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v29);
                  v32 = v29 + 4;
                  v29 += 8;
                  sub_182CBA0(v31, v32);
                }
                while ( v29 != v28 );
                a1 = v113;
                v10 = v30;
                v13 = v109;
                v16 = (int *)v113[22];
              }
              sub_186B220(v16 - 2);
              v12 = v115 + 1;
              *v17 = v13;
              v11 = *((_DWORD *)v10 - 2);
              a1[22] = v10;
              if ( v11 >= v102 )
                goto LABEL_23;
            }
            v15[1] = 0;
            a1[22] = v10;
            *v15 = v13;
          }
LABEL_23:
          *((_DWORD *)v10 - 1) = v12;
          v33 = 32LL * v12;
          v34 = 32LL * v119;
          v35 = &v10[(unsigned __int64)v34 / 8];
          v36 = &v10[(unsigned __int64)v33 / 8];
          if ( v34 != v33 )
          {
            do
            {
              v35 += 4;
              *((_DWORD *)v35 - 8) = v120;
              *((_BYTE *)v35 - 28) = BYTE4(v120) & 3 | *((_BYTE *)v35 - 28) & 0xFC;
              v37 = v121;
              v121 = 0;
              *(v35 - 3) = v37;
              *((_DWORD *)v35 - 4) = v122;
              *((_BYTE *)v35 - 12) = BYTE4(v122) & 3 | *((_BYTE *)v35 - 12) & 0xFC;
              v38 = v123;
              v123 = 0;
              *(v35 - 1) = v38;
            }
            while ( v36 != v35 );
          }
        }
      }
      v39 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v120);
      sub_182CBA0(v39, &v122);
      v40 = qword_1C7F2C0;
      v41 = a1[22] + 32LL * v115;
      if ( (*(_BYTE *)(v100 + 4) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, a1[22] + 32LL * v115, v100);
      }
      else
      {
        v42 = *(_DWORD *)v100;
        *(_BYTE *)(v41 + 4) &= ~1u;
        *(_DWORD *)v41 = v42;
      }
      if ( (*(_BYTE *)(v100 + 20) & 1) != 0 )
      {
        sub_182C690(v40, v41 + 16, v100 + 16);
      }
      else
      {
        v43 = *(_DWORD *)(v100 + 16);
        *(_BYTE *)(v41 + 20) &= ~1u;
        *(_DWORD *)(v41 + 16) = v43;
      }
      goto LABEL_29;
    }
    v84 = v7 + 32LL * v115;
    v85 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
    {
      if ( *(_DWORD *)v84 )
      {
        if ( (*(_BYTE *)(v84 + 20) & 1) != 0
          || *(_DWORD *)(v84 + 16) != 1
          || (*(_BYTE *)(v8 + 20) & 1) != 0
          || *(_DWORD *)(v8 + 16) != 1 )
        {
          sub_1851D20(qword_1C7F2C0, v84, v8, v84);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, v84, v8, v84);
          sub_182CBA0(v9, v84 + 16);
          *(_BYTE *)(v84 + 20) &= ~1u;
          *(_DWORD *)(v84 + 16) = 1;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v84, v8);
        }
        else
        {
          *(_BYTE *)(v84 + 4) &= ~1u;
          *(_DWORD *)v84 = v85;
        }
        if ( (*(_BYTE *)(v8 + 20) & 1) != 0 )
        {
          sub_182C690(v9, v84 + 16, v8 + 16);
        }
        else
        {
          v89 = *(_DWORD *)(v8 + 16);
          *(_BYTE *)(v84 + 20) &= ~1u;
          *(_DWORD *)(v84 + 16) = v89;
        }
      }
      goto LABEL_29;
    }
    v90 = *(_BYTE *)(v84 + 4);
    if ( (v90 & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v84, v7 + 32LL * v115);
      v91 = *(_BYTE *)(v84 + 20);
      if ( (v91 & 1) != 0 )
      {
LABEL_100:
        sub_182C690(v9, v84 + 16, v84 + 16);
        goto LABEL_29;
      }
    }
    else
    {
      *(_BYTE *)(v84 + 4) = v90 & 0xFE;
      v91 = *(_BYTE *)(v84 + 20);
      if ( (v91 & 1) != 0 )
        goto LABEL_100;
    }
    *(_BYTE *)(v84 + 20) = v91 & 0xFE;
LABEL_29:
    result = v117;
    ++v103;
    v6 = *(unsigned int **)(v117 + 24);
    if ( !v6 )
      goto LABEL_30;
  }
  v44 = a1[23];
  if ( v44 )
  {
LABEL_31:
    result = *(unsigned int *)(v44 - 4);
    if ( (_DWORD)result )
    {
      v45 = v44 + 40 * result;
      do
      {
        v46 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v44);
        v47 = v44 + 16;
        v44 += 40;
        sub_182CBA0(v46, v47);
      }
      while ( v44 != v45 );
      result = v117;
      v44 = a1[23];
      v6 = *(unsigned int **)(v117 + 24);
    }
    *(_DWORD *)(v44 - 4) = 0;
  }
  if ( v6 )
  {
    result = (__int64)&v6[*(v6 - 1)];
    v101 = result;
    if ( (unsigned int *)result != v6 )
    {
      v48 = v6;
      do
      {
        while ( 1 )
        {
          v49 = *v48;
          v50 = *v48;
          v51 = 32 * v49;
          v52 = (unsigned int *)(32 * v49 + a1[22]);
          result = *v52;
          if ( (_DWORD)result )
            break;
          if ( (unsigned int *)v101 == ++v48 )
            return result;
        }
        v53 = sub_FF9FB0(a1[62], (unsigned int)v49);
        if ( v53 == -1 )
        {
          v108 = a1[62];
          v86 = sub_15D1F10(**(_QWORD **)(a1[11] + 8 * v49));
          v87 = 0;
          v88 = *(_DWORD **)(v86 + 24);
          if ( v88 && *v88 == 5 )
            v87 = v88[1] == 1;
          v53 = sub_1006C00(v108, v50, v87);
        }
        BYTE4(v124) &= 0xFCu;
        v127 &= 0xFCu;
        LODWORD(v124) = 0;
        v54 = qword_1C7F2C0;
        v125 = 0;
        v126 = 1;
        v128 = 0;
        if ( (v52[1] & 1) != 0 )
        {
          v112 = v53;
          v107 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v124, v52);
          v53 = v112;
          v54 = v107;
        }
        else
        {
          LODWORD(v124) = *v52;
        }
        if ( (v52[5] & 1) != 0 )
        {
          v106 = v53;
          sub_182C690(v54, &v126, v52 + 4);
          v53 = v106;
        }
        else
        {
          v55 = v52[4];
          v127 &= ~1u;
          v126 = v55;
        }
        v56 = (_QWORD *)a1[23];
        v129 = v53;
        if ( v56 )
        {
          v57 = *((unsigned int *)v56 - 1);
          if ( (_DWORD)v57 == *((_DWORD *)v56 - 2) )
          {
            v64 = (unsigned int)(3 * v57 + 1) >> 1;
            v65 = 40 * v64 + 8;
            if ( 40 * (int)v57 + 8 >= v65 || (unsigned int)v57 >= v64 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v120, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, &v120);
              sub_233E40((__int64)&v120);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v104 = (unsigned int)(3 * v57 + 1) >> 1;
            v66 = sub_186B270(v65);
            v67 = (int *)a1[23];
            v68 = v104;
            v69 = (_DWORD *)v66;
            v56 = (_QWORD *)(v66 + 8);
            if ( v67 )
            {
              v70 = (unsigned int)*(v67 - 1);
              v71 = v56;
              v69[1] = v70;
              v72 = &v67[10 * v70];
              for ( i = v67; v72 != i; *((_DWORD *)v71 - 2) = *(i - 2) )
              {
                v74 = *i;
                v75 = *((_BYTE *)i + 4);
                i += 10;
                v71 += 5;
                *((_DWORD *)v71 - 10) = v74;
                *((_BYTE *)v71 - 36) = v75 & 3 | *((_BYTE *)v71 - 36) & 0xFC;
                v76 = *((_QWORD *)i - 4);
                *((_QWORD *)i - 4) = 0;
                *(v71 - 4) = v76;
                v77 = *((_BYTE *)i - 20);
                *((_DWORD *)v71 - 6) = *(i - 6);
                *((_BYTE *)v71 - 20) = v77 & 3 | *((_BYTE *)v71 - 20) & 0xFC;
                v78 = *((_QWORD *)i - 2);
                *((_QWORD *)i - 2) = 0;
                *(v71 - 2) = v78;
              }
              v79 = (unsigned int)*(v67 - 1);
              if ( (_DWORD)v79 )
              {
                v110 = v56;
                v116 = v69;
                v118 = a1;
                v80 = v67;
                v81 = &v67[10 * v79];
                do
                {
                  v82 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v80);
                  v83 = v80 + 4;
                  v80 += 10;
                  sub_182CBA0(v82, v83);
                }
                while ( v80 != v81 );
                a1 = v118;
                v51 = 32 * v49;
                v56 = v110;
                v68 = v104;
                v69 = v116;
                v67 = (int *)v118[23];
              }
              v114 = v69;
              v111 = v68;
              v105 = v56;
              sub_186B220(v67 - 2);
              v69 = v114;
              v56 = v105;
              v68 = v111;
              v58 = &v105[5 * (unsigned int)v114[1]];
            }
            else
            {
              *(_DWORD *)(v66 + 4) = 0;
              v58 = (_QWORD *)(v66 + 8);
            }
            a1[23] = v56;
            v53 = v129;
            *v69 = v68;
          }
          else
          {
            v58 = &v56[5 * v57];
          }
        }
        else
        {
          v93 = (_QWORD *)sub_186B270(0x58u);
          *v93 = 2;
          v53 = v129;
          v56 = v93 + 1;
          a1[23] = v93 + 1;
          v58 = v93 + 1;
        }
        v59 = qword_1C7F2C0;
        ++v48;
        *(_DWORD *)v58 = v124;
        *((_BYTE *)v58 + 4) = BYTE4(v124) & 3 | *((_BYTE *)v58 + 4) & 0xFC;
        v60 = v125;
        v125 = 0;
        v58[1] = v60;
        *((_DWORD *)v58 + 4) = v126;
        *((_BYTE *)v58 + 20) = v127 & 3 | *((_BYTE *)v58 + 20) & 0xFC;
        v61 = v128;
        v128 = 0;
        v58[3] = v61;
        *((_DWORD *)v58 + 8) = v53;
        ++*((_DWORD *)v56 - 1);
        sub_182CBA0(v59, &v124);
        sub_182CBA0(v59, &v126);
        v62 = qword_1C7F2C0;
        v63 = a1[22] + v51;
        sub_182CEF0(qword_1C7F2C0, v63);
        result = sub_182CBA0(v62, v63 + 16);
        *(_BYTE *)(v63 + 20) &= ~1u;
        *(_DWORD *)(v63 + 16) = 1;
      }
      while ( (unsigned int *)v101 != v48 );
    }
  }
  return result;
}

