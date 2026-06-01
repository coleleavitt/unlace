__int64 __fastcall sub_AE2FB0(_QWORD *a1, __int64 a2, int a3)
{
  char **v3; // r13
  char **v4; // r12
  char **v5; // rbx
  char **v6; // rbx
  char **exception; // rbx
  char **v8; // rbx
  char **v9; // rbx
  char **v10; // rbx
  char **v11; // rbx
  char **v12; // r13
  __int64 *v16; // rax
  int v17; // edi
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 *v22; // rsi
  __int64 v23; // rdx
  __int64 *v24; // r8
  __int64 *i; // rax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int16 v28; // dx
  _QWORD *v29; // rax
  __int64 v30; // r12
  unsigned int v31; // edx
  __int64 v32; // rcx
  int v33; // edx
  __int64 *v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // eax
  __int64 v38; // r13
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  _QWORD *v43; // rcx
  __int64 v44; // rax
  int v45; // edx
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  _QWORD *v50; // rcx
  __int64 v51; // rax
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 *v56; // rcx
  unsigned int v57; // ebx
  unsigned int v58; // ecx
  unsigned int *v59; // rax
  __int64 v60; // rcx
  int v61; // r13d
  char v63; // dl
  __int64 v64; // rax
  unsigned __int8 v65; // r12
  int v66; // r14d
  _QWORD *v67; // rcx
  __int64 v68; // rax
  __int64 *v69; // rax
  __int64 v70; // rax
  __int64 v71; // r13
  unsigned int v72; // r12d
  unsigned int v73; // ecx
  unsigned int *v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // r12d
  unsigned int v77; // ecx
  unsigned int *v78; // rax
  __int64 v79; // rcx
  char v80; // cl
  unsigned __int8 v81; // r12
  int v82; // r14d
  _QWORD *v83; // rdx
  __int64 v84; // rax
  __int64 *v85; // rax
  unsigned int v86; // r15d
  unsigned int v87; // ecx
  unsigned int *v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  unsigned int v91; // r15d
  unsigned int v92; // edx
  unsigned int *v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rdx
  _QWORD *v96; // rax
  unsigned int v97; // edx
  __int64 v98; // rcx
  int v99; // edx
  __int64 *v100; // rcx
  __int64 v101; // rdx
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rbx
  _QWORD *v105; // rax
  unsigned int v106; // edx
  __int64 v107; // rcx
  int v108; // edx
  __int64 *v109; // rcx
  _QWORD *v110; // rdx
  _QWORD *v111; // rdx
  unsigned int v112; // r12d
  unsigned int v113; // ecx
  unsigned int *v114; // rdx
  __int64 v115; // rcx
  unsigned int v116; // r12d
  unsigned int v117; // ecx
  unsigned int *v118; // rdx
  __int64 v119; // rcx
  _QWORD *v120; // rax
  unsigned int v121; // r13d
  unsigned int v122; // ecx
  unsigned int *v123; // rax
  __int64 v124; // rsi
  unsigned int v125; // r13d
  unsigned int v126; // ecx
  unsigned int *v127; // rdx
  __int64 v128; // rcx
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  _QWORD *v131; // rax
  _QWORD *v132; // rax
  __int64 v133[11]; // [rsp+10h] [rbp-58h] BYREF

  v16 = (__int64 *)a1[18];
  v17 = *(_DWORD *)(a2 + 12);
  v18 = *v16;
  v19 = *(__int64 **)(v18 + 96);
  v20 = *(unsigned int *)(v18 + 104);
  v21 = v20 - 1;
  v20 *= 16;
  v22 = (__int64 *)((char *)v19 + v20);
  v23 = 16LL * (v17 & v21);
  v24 = &v19[(unsigned __int64)v23 / 8];
  if ( v23 != v20 )
  {
    for ( i = &v19[(unsigned __int64)v23 / 8]; v22 != i; i += 2 )
    {
      v26 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v26 + 12) == v17 && a2 == v26 )
        {
LABEL_23:
          v38 = i[1];
          if ( v38 )
          {
            v39 = (_QWORD *)a1[7];
            ++*(_DWORD *)(v38 + 8);
            if ( v39 )
            {
              v40 = *((_DWORD *)v39 - 1);
              if ( v40 == *((_DWORD *)v39 - 2) )
              {
                v72 = (3 * v40 + 1) >> 1;
                v73 = 8 * v72 + 8;
                if ( 8 * v40 + 8 >= v73 || v40 >= v72 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v133, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v133);
                  sub_233E40((__int64)v133);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v74 = (unsigned int *)sub_186B300(v39 - 1, v73);
                v75 = v74[1];
                v39 = v74 + 2;
                *v74 = v72;
                a1[7] = v74 + 2;
                LODWORD(v74) = v75;
                v43 = &v39[v75];
                v42 = (_DWORD)v74 + 1;
              }
              else
              {
                v41 = v40;
                v42 = v40 + 1;
                v43 = &v39[v41];
              }
            }
            else
            {
              v110 = (_QWORD *)sub_186B270(0x18u);
              *v110 = 2;
              v42 = 1;
              v39 = v110 + 1;
              a1[7] = v39;
              v43 = v39;
            }
            *v43 = v38;
            *((_DWORD *)v39 - 1) = v42;
            if ( a2 != v38 )
            {
              v44 = a1[5];
              if ( v44 )
              {
                v45 = *(_DWORD *)(v44 - 4);
                if ( v45 )
                  *(_BYTE *)(v44 + 16LL * (unsigned int)(v45 - 1) + 8) |= 2u;
              }
            }
            v46 = (_QWORD *)a1[11];
            if ( !v46 )
              goto LABEL_95;
            v47 = *((_DWORD *)v46 - 1);
            if ( v47 != *((_DWORD *)v46 - 2) )
              goto LABEL_33;
            v57 = (3 * v47 + 1) >> 1;
            v58 = 8 * v57 + 8;
            if ( 8 * v47 + 8 >= v58 || v47 >= v57 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v133, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v133);
              sub_233E40((__int64)v133);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
LABEL_50:
            v59 = (unsigned int *)sub_186B300(v46 - 1, v58);
            v60 = v59[1];
            v46 = v59 + 2;
            a1[11] = v59 + 2;
            *v59 = v57;
            LODWORD(v59) = v60;
            v50 = &v46[v60];
            v49 = (_DWORD)v59 + 1;
LABEL_34:
            *v50 = 0;
            *((_DWORD *)v46 - 1) = v49;
            return 1;
          }
LABEL_8:
          v27 = *(_DWORD *)(a2 + 8);
          if ( !a3 )
            goto LABEL_43;
          goto LABEL_9;
        }
      }
      else if ( !v26 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v19 == v24 )
    goto LABEL_8;
  while ( 1 )
  {
    v51 = *v19;
    if ( (unsigned __int64)*v19 <= 1 )
      break;
    if ( *(_DWORD *)(v51 + 12) == v17 && a2 == v51 )
    {
      i = v19;
      goto LABEL_23;
    }
LABEL_39:
    v19 += 2;
    if ( v24 == v19 )
      goto LABEL_8;
  }
  if ( v51 )
    goto LABEL_39;
  v27 = *(_DWORD *)(a2 + 8);
  if ( !a3 )
  {
LABEL_43:
    v52 = (_QWORD *)a1[7];
    *(_DWORD *)(a2 + 8) = v27 + 1;
    if ( v52 )
    {
      v53 = *((_DWORD *)v52 - 1);
      if ( v53 == *((_DWORD *)v52 - 2) )
      {
        v76 = (3 * v53 + 1) >> 1;
        v77 = 8 * v76 + 8;
        if ( 8 * v53 + 8 >= v77 || v53 >= v76 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v133, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v133);
          sub_233E40((__int64)v133);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v78 = (unsigned int *)sub_186B300(v52 - 1, v77);
        v79 = v78[1];
        v52 = v78 + 2;
        *v78 = v76;
        a1[7] = v78 + 2;
        LODWORD(v78) = v79;
        v56 = &v52[v79];
        v55 = (_DWORD)v78 + 1;
      }
      else
      {
        v54 = v53;
        v55 = v53 + 1;
        v56 = &v52[v54];
      }
    }
    else
    {
      v111 = (_QWORD *)sub_186B270(0x18u);
      *v111 = 2;
      v55 = 1;
      v52 = v111 + 1;
      a1[7] = v52;
      v56 = v52;
    }
    *v56 = a2;
    *((_DWORD *)v52 - 1) = v55;
    v46 = (_QWORD *)a1[11];
    if ( v46 )
    {
      v47 = *((_DWORD *)v46 - 1);
      if ( v47 == *((_DWORD *)v46 - 2) )
      {
        v57 = (3 * v47 + 1) >> 1;
        v58 = 8 * v57 + 8;
        if ( 8 * v47 + 8 >= v58 || v47 >= v57 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v133, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v133);
          sub_233E40((__int64)v133);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_50;
      }
LABEL_33:
      v48 = v47;
      v49 = v47 + 1;
      v50 = &v46[v48];
      goto LABEL_34;
    }
LABEL_95:
    v95 = (_QWORD *)sub_186B270(0x18u);
    *v95 = 2;
    v49 = 1;
    v46 = v95 + 1;
    a1[11] = v46;
    v50 = v46;
    goto LABEL_34;
  }
LABEL_9:
  v28 = *(_WORD *)(a2 + 4);
  if ( v27 <= 1 || a2 == a1[15] )
  {
    v61 = 0;
    goto LABEL_52;
  }
  if ( v28 )
  {
    if ( v28 == 2 )
      goto LABEL_66;
    if ( v28 != 1 )
    {
LABEL_55:
      sub_1872CE0("");
      sub_1873130(114, 226);
    }
LABEL_75:
    sub_AE2460(a1, a2);
    return 1;
  }
  if ( !*(_DWORD *)(a2 + 24) )
  {
    v29 = (_QWORD *)a1[7];
    goto LABEL_14;
  }
LABEL_66:
  v70 = sub_1680FB0(a1[4], a2, 0);
  v71 = v70;
  if ( v70 )
  {
    ++*(_DWORD *)(v70 + 8);
    v96 = (_QWORD *)a1[7];
    if ( v96 )
    {
      v97 = *((_DWORD *)v96 - 1);
      if ( v97 == *((_DWORD *)v96 - 2) )
      {
        v112 = (3 * v97 + 1) >> 1;
        v113 = 8 * v112 + 8;
        if ( 8 * v97 + 8 >= v113 || v97 >= v112 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v133, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v133);
          sub_233E40((__int64)v133);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v114 = (unsigned int *)sub_186B300(v96 - 1, v113);
        v96 = v114 + 2;
        v115 = v114[1];
        *v114 = v112;
        a1[7] = v114 + 2;
        LODWORD(v114) = v115;
        v100 = &v96[v115];
        v99 = (_DWORD)v114 + 1;
      }
      else
      {
        v98 = v97;
        v99 = v97 + 1;
        v100 = &v96[v98];
      }
    }
    else
    {
      v131 = (_QWORD *)sub_186B270(0x18u);
      v99 = 1;
      *v131 = 2;
      v96 = v131 + 1;
      a1[7] = v96;
      v100 = v96;
    }
    *v100 = v71;
    *((_DWORD *)v96 - 1) = v99;
    if ( a2 != v71 )
    {
      v101 = a1[5];
      if ( v101 )
      {
        v102 = *(_DWORD *)(v101 - 4);
        if ( v102 )
          *(_BYTE *)(v101 + 16LL * (unsigned int)(v102 - 1) + 8) |= 2u;
      }
    }
    v103 = sub_1680FB0(a1[9], a2, 0);
    v104 = v103;
    if ( v103 )
      ++*(_DWORD *)(v103 + 8);
    v105 = (_QWORD *)a1[11];
    if ( v105 )
    {
      v106 = *((_DWORD *)v105 - 1);
      if ( v106 == *((_DWORD *)v105 - 2) )
      {
        v116 = (3 * v106 + 1) >> 1;
        v117 = 8 * v116 + 8;
        if ( 8 * v106 + 8 >= v117 || v106 >= v116 )
        {
          v11 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v133, "Overflow encountered when expanding vector");
          *v11 = (char *)off_1C63128;
          sub_2333C0(v11 + 1, v133);
          sub_233E40((__int64)v133);
          __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v118 = (unsigned int *)sub_186B300(v105 - 1, v117);
        v105 = v118 + 2;
        v119 = v118[1];
        *v118 = v116;
        a1[11] = v118 + 2;
        LODWORD(v118) = v119;
        v109 = &v105[v119];
        v108 = (_DWORD)v118 + 1;
      }
      else
      {
        v107 = v106;
        v108 = v106 + 1;
        v109 = &v105[v107];
      }
    }
    else
    {
      v130 = (_QWORD *)sub_186B270(0x18u);
      v108 = 1;
      *v130 = 2;
      v105 = v130 + 1;
      a1[11] = v105;
      v109 = v105;
    }
    *v109 = v104;
    *((_DWORD *)v105 - 1) = v108;
    return 1;
  }
  v28 = *(_WORD *)(a2 + 4);
  v61 = 1;
LABEL_52:
  if ( v28 == 1 )
    goto LABEL_75;
  if ( v28 != 2 )
  {
    if ( v28 )
      goto LABEL_55;
    v29 = (_QWORD *)a1[7];
    if ( *(_DWORD *)(a2 + 24) )
    {
      v80 = 3;
      if ( a3 != 3 )
        v80 = (a3 - 1) & 3;
      v81 = v80;
      if ( v29 )
        v82 = *((_DWORD *)v29 - 1);
      else
        v82 = 0;
      v83 = (_QWORD *)a1[5];
      if ( v83 )
      {
        v84 = *((unsigned int *)v83 - 1);
        if ( (_DWORD)v84 == *((_DWORD *)v83 - 2) )
        {
          v86 = (unsigned int)(3 * v84 + 1) >> 1;
          v87 = 16 * v86 + 8;
          if ( 16 * (int)v84 + 8 >= v87 || (unsigned int)v84 >= v86 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v133, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v133);
            sub_233E40((__int64)v133);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v88 = (unsigned int *)sub_186B300(v83 - 1, v87);
          v83 = v88 + 2;
          *v88 = v86;
          v89 = v88[1];
          a1[5] = v83;
          v85 = &v83[2 * v89];
        }
        else
        {
          v85 = &v83[2 * v84];
        }
      }
      else
      {
        v129 = (_QWORD *)sub_186B270(0x28u);
        *v129 = 2;
        v83 = v129 + 1;
        a1[5] = v129 + 1;
        v85 = v129 + 1;
      }
      *v85 = a2;
      *((_DWORD *)v85 + 3) = v82;
      *((_DWORD *)v85 + 2) = v61 | (16 * v81);
      ++*((_DWORD *)v83 - 1);
      return 0;
    }
LABEL_14:
    v30 = a1[1];
    *(_DWORD *)(a2 + 8) += 2;
    if ( v29 )
    {
      v31 = *((_DWORD *)v29 - 1);
      if ( v31 == *((_DWORD *)v29 - 2) )
      {
        v125 = (3 * v31 + 1) >> 1;
        v126 = 8 * v125 + 8;
        if ( 8 * v31 + 8 >= v126 || v31 >= v125 )
        {
          v12 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v133, "Overflow encountered when expanding vector");
          *v12 = (char *)off_1C63128;
          sub_2333C0(v12 + 1, v133);
          sub_233E40((__int64)v133);
          __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v127 = (unsigned int *)sub_186B300(v29 - 1, v126);
        v29 = v127 + 2;
        v128 = v127[1];
        *v127 = v125;
        a1[7] = v127 + 2;
        LODWORD(v127) = v128;
        v34 = &v29[v128];
        v33 = (_DWORD)v127 + 1;
      }
      else
      {
        v32 = v31;
        v33 = v31 + 1;
        v34 = &v29[v32];
      }
    }
    else
    {
      v90 = (_QWORD *)sub_186B270(0x18u);
      *v90 = 2;
      v29 = v90 + 1;
      v33 = 1;
      a1[7] = v29;
      v34 = v29;
    }
    *v34 = a2;
    *((_DWORD *)v29 - 1) = v33;
    v35 = a1[11];
    if ( v35 )
    {
      v36 = *(_DWORD *)(v35 - 4);
      if ( v36 == *(_DWORD *)(v35 - 8) )
      {
        v121 = (3 * v36 + 1) >> 1;
        v122 = 8 * v121 + 8;
        if ( 8 * v36 + 8 >= v122 || v36 >= v121 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v133, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v133);
          sub_233E40((__int64)v133);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v123 = (unsigned int *)sub_186B300((void *)(v35 - 8), v122);
        v124 = v123[1];
        *v123 = v121;
        a1[11] = v123 + 2;
        *(_QWORD *)&v123[2 * v124 + 2] = 0;
        v123[1] = v124 + 1;
      }
      else
      {
        *(_QWORD *)(v35 + 8LL * v36) = 0;
        *(_DWORD *)(v35 - 4) = v36 + 1;
      }
    }
    else
    {
      v132 = (_QWORD *)sub_186B270(0x18u);
      v132[1] = 0;
      a1[11] = v132 + 1;
      *v132 = 0x100000002LL;
    }
    if ( (*(_DWORD *)(a2 + 8))-- == 1 )
      sub_15D7BC0(v30, a2);
    return 1;
  }
  v63 = 3;
  if ( a3 != 3 )
    v63 = (a3 - 1) & 3;
  v64 = a1[7];
  v65 = v63;
  if ( v64 )
    v66 = *(_DWORD *)(v64 - 4);
  else
    v66 = 0;
  v67 = (_QWORD *)a1[5];
  if ( v67 )
  {
    v68 = *((unsigned int *)v67 - 1);
    if ( (_DWORD)v68 == *((_DWORD *)v67 - 2) )
    {
      v91 = (unsigned int)(3 * v68 + 1) >> 1;
      v92 = 16 * v91 + 8;
      if ( 16 * (int)v68 + 8 >= v92 || (unsigned int)v68 >= v91 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v133, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v133);
        sub_233E40((__int64)v133);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v93 = (unsigned int *)sub_186B300(v67 - 1, v92);
      v67 = v93 + 2;
      *v93 = v91;
      v94 = v93[1];
      a1[5] = v67;
      v69 = &v67[2 * v94];
    }
    else
    {
      v69 = &v67[2 * v68];
    }
  }
  else
  {
    v120 = (_QWORD *)sub_186B270(0x28u);
    *v120 = 2;
    v67 = v120 + 1;
    a1[5] = v120 + 1;
    v69 = v120 + 1;
  }
  *v69 = a2;
  *((_DWORD *)v69 + 3) = v66;
  *((_DWORD *)v69 + 2) = v61 | (16 * v65);
  ++*((_DWORD *)v67 - 1);
  return 0;
}

