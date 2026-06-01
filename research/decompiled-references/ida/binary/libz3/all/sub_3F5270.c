__int64 __fastcall sub_3F5270(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  void *v10; // r13
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int *v14; // r14
  __int64 *v15; // r13
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  void *v20; // rbx
  void *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  _BYTE *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  _BYTE *v29; // rcx
  _BYTE *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  _BYTE *v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rdi
  void *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rbx
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rdi
  __int64 v51; // rax
  unsigned int v52; // r12d
  __int64 v53; // rdx
  unsigned int v54; // r13d
  char v55; // al
  _BYTE *v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  _BYTE *v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // edx
  unsigned int v64; // edi
  size_t v65; // rsi
  unsigned int *v66; // rax
  unsigned int v67; // edi
  size_t v68; // rsi
  unsigned int *v69; // rax
  _DWORD *v70; // rdx
  _QWORD *v71; // rax
  unsigned int v72; // edi
  size_t v73; // rsi
  unsigned int *v74; // rax
  __int64 v75; // rax
  __int64 *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // edx
  __int64 v81; // rdx
  char v82; // cl
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  _DWORD *v86; // rax
  __int16 v87; // ax
  _DWORD *v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rcx
  _DWORD *v91; // rdx
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  _DWORD *v94; // rax
  char **v95; // r15
  char **v96; // r15
  char **exception; // r15
  __int64 v98; // [rsp+0h] [rbp-1A0h]
  __int64 v99; // [rsp+0h] [rbp-1A0h]
  __int64 v100; // [rsp+8h] [rbp-198h]
  __int64 v102; // [rsp+18h] [rbp-188h]
  __int64 v103; // [rsp+20h] [rbp-180h]
  __int64 v104; // [rsp+28h] [rbp-178h]
  unsigned int v105; // [rsp+30h] [rbp-170h]
  unsigned int v106; // [rsp+34h] [rbp-16Ch]
  __int64 *v108; // [rsp+40h] [rbp-160h]
  char v109; // [rsp+48h] [rbp-158h]
  __int64 v110; // [rsp+48h] [rbp-158h]
  char v111; // [rsp+50h] [rbp-150h]
  __int64 v112; // [rsp+50h] [rbp-150h]
  __int64 v113; // [rsp+50h] [rbp-150h]
  __int64 v114; // [rsp+60h] [rbp-140h]
  unsigned int *v115; // [rsp+70h] [rbp-130h]
  __int64 v116; // [rsp+78h] [rbp-128h]
  __int64 v117; // [rsp+78h] [rbp-128h]
  unsigned int v118; // [rsp+80h] [rbp-120h]
  __int64 v119; // [rsp+80h] [rbp-120h]
  __int64 v120; // [rsp+88h] [rbp-118h]
  __int64 v121; // [rsp+98h] [rbp-108h]
  void *v122; // [rsp+98h] [rbp-108h]
  __int64 v123; // [rsp+98h] [rbp-108h]
  __int64 v124; // [rsp+98h] [rbp-108h]
  unsigned __int8 v125; // [rsp+98h] [rbp-108h]
  char v126; // [rsp+ACh] [rbp-F4h] BYREF
  char v127; // [rsp+ADh] [rbp-F3h] BYREF
  _WORD v128[5]; // [rsp+AEh] [rbp-F2h] BYREF
  __int64 v129; // [rsp+B8h] [rbp-E8h] BYREF
  __int64 v130; // [rsp+C0h] [rbp-E0h] BYREF
  __int64 v131; // [rsp+C8h] [rbp-D8h] BYREF
  __int64 v132; // [rsp+D0h] [rbp-D0h] BYREF
  unsigned int *v133; // [rsp+D8h] [rbp-C8h] BYREF
  __int64 v134; // [rsp+E0h] [rbp-C0h] BYREF
  __int64 v135; // [rsp+E8h] [rbp-B8h]
  __int64 v136; // [rsp+F0h] [rbp-B0h] BYREF
  __int64 v137; // [rsp+F8h] [rbp-A8h]
  __int64 v138; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v139; // [rsp+108h] [rbp-98h]
  _QWORD v140[2]; // [rsp+110h] [rbp-90h] BYREF
  _QWORD v141[2]; // [rsp+120h] [rbp-80h] BYREF
  __int64 v142; // [rsp+130h] [rbp-70h] BYREF
  __int64 v143; // [rsp+138h] [rbp-68h]
  __int64 v144; // [rsp+140h] [rbp-60h]
  __int64 v145; // [rsp+148h] [rbp-58h]
  __int64 v146; // [rsp+150h] [rbp-50h] BYREF
  __int64 v147; // [rsp+158h] [rbp-48h]
  __int64 v148; // [rsp+160h] [rbp-40h] BYREF
  __int64 v149; // [rsp+168h] [rbp-38h]

  v5 = (__int64 *)(a1 + 40);
  v104 = *(v5 - 5);
  v132 = v104;
  sub_2FCDE0(v5);
  sub_2FCDE0((__int64 *)(a1 + 56));
  v6 = *(_QWORD *)(a1 + 72);
  v108 = (__int64 *)(a1 + 72);
  if ( v6 )
  {
    v7 = *(unsigned int *)(v6 - 4);
    if ( (_DWORD)v7 )
    {
      v8 = v6 + 32 * v7;
      v9 = *(_QWORD *)(a1 + 72);
      do
      {
        v10 = qword_1C7F2C0;
        v11 = v9;
        sub_182CBA0(qword_1C7F2C0, v9);
        sub_182CBA0(v10, v11 + 16);
        v9 = v11 + 32;
      }
      while ( v11 + 32 != v8 );
      v6 = *(_QWORD *)(a1 + 72);
    }
    *(_DWORD *)(v6 - 4) = 0;
  }
  v12 = *(_QWORD *)(a1 + 88);
  if ( v12 )
    *(_DWORD *)(v12 - 4) = 0;
  v13 = *(_QWORD *)(a1 + 96);
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  v14 = *(unsigned int **)(a3 + 8);
  if ( v14 )
  {
    v115 = &v14[2 * *(v14 - 1)];
    if ( v14 == v115 )
    {
      v105 = 0;
      v14 = nullptr;
      v106 = 0;
      v114 = 0;
      v111 = 0;
    }
    else
    {
      v15 = *(__int64 **)(a3 + 8);
      v114 = 0;
      v14 = nullptr;
      v111 = 0;
      v105 = 0;
      v106 = 0;
      do
      {
        while ( 1 )
        {
          v22 = *v15;
          v136 = 0;
          v137 = 0;
          v121 = v22;
          v138 = 1;
          v139 = 0;
          sub_182CBA0(qword_1C7F2C0, &v138);
          BYTE4(v138) &= ~1u;
          LODWORD(v138) = 1;
          v140[0] = 0;
          v140[1] = 0;
          v141[0] = 1;
          v141[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v141);
          v23 = *(_QWORD *)(a1 + 104);
          v24 = *(_QWORD *)a1;
          LODWORD(v141[0]) = 1;
          BYTE4(v141[0]) &= ~1u;
          v135 = v24;
          v134 = 0;
          v126 = 0;
          v127 = 0;
          LOBYTE(v128[0]) = 0;
          if ( !(unsigned __int8)sub_168D740(v23 + 32, v121) )
            break;
          if ( !(unsigned __int8)sub_3F1170(
                                   (_QWORD *)a1,
                                   v121,
                                   (__int64)&v136,
                                   &v134,
                                   (__int64)v140,
                                   &v126,
                                   a4,
                                   &v127,
                                   v128) )
          {
            sub_3E5D20(v134, v135);
            sub_25A130((char *)v140);
            sub_25A130((char *)&v136);
            v55 = 0;
            goto LABEL_74;
          }
          if ( !(_DWORD)v136 )
          {
            sub_14B9BF0(a1 + 24, v121, &v134);
            *(_QWORD *)&v128[1] = v134;
            if ( v134 )
              ++*(_DWORD *)(v134 + 8);
            v133 = v14;
            sub_3E6950(&v133, &v128[1]);
            v14 = v133;
            goto LABEL_38;
          }
          v109 = v127;
          if ( !v127 )
          {
            if ( LOBYTE(v128[0]) )
            {
              v75 = *(_QWORD *)a1;
              v142 = 0;
              v144 = 1;
              v110 = v75;
              v76 = *(__int64 **)(a1 + 104);
              v143 = 0;
              v77 = *v76;
              v145 = 0;
              v78 = sub_3ECD20(a1, (int)&v136, v77);
              v102 = v78;
              if ( v78 )
                ++*(_DWORD *)(v78 + 8);
              v79 = sub_15E1B70(*(_QWORD *)(a1 + 8));
              v103 = v79;
              if ( v79 )
                ++*(_DWORD *)(v79 + 8);
              sub_1374250(&v146, a2, v79);
              v100 = v146;
              if ( !(unsigned __int8)sub_1666AE0(a1 + 8, v146, &v142, (char *)v128 + 1) )
              {
                sub_1872CE0("");
                sub_1873130(114, 370);
              }
              if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&qword_1C7F2A0, (__int64)&v142) )
              {
                sub_3EBD70((__int64)&v146, (__int64)&v136);
                v80 = v146;
                LODWORD(v146) = v136;
                LODWORD(v136) = v80;
                v81 = v147;
                v147 = v137;
                v137 = v81;
                v82 = BYTE4(v146) & 1;
                LOBYTE(v81) = BYTE4(v136) & 0xFC | BYTE4(v146) & 2;
                BYTE4(v146) = BYTE4(v136) & 1 | BYTE4(v146) & 0xFC | BYTE4(v136) & 2;
                BYTE4(v136) = v82 | v81;
                LODWORD(v81) = v148;
                LODWORD(v148) = v138;
                LODWORD(v138) = v81;
                v83 = v149;
                v149 = v139;
                v139 = v83;
                LOBYTE(v83) = BYTE4(v148) & 1 | BYTE4(v138) & 0xFC | BYTE4(v148) & 2;
                BYTE4(v148) = BYTE4(v138) & 1 | BYTE4(v148) & 0xFC | BYTE4(v138) & 2;
                BYTE4(v138) = v83;
                sub_25A130((char *)&v146);
                v98 = v134;
                sub_3EBD70((__int64)&v146, (__int64)&qword_1C7F280);
                v84 = sub_3ECD20(a1, (int)&v146, v98);
                if ( v84 )
                  ++*(_DWORD *)(v84 + 8);
                v99 = v84;
                sub_3E5D20(v134, v135);
                v134 = v99;
                sub_25A130((char *)&v146);
              }
              v126 = 1;
              sub_25A130((char *)&v142);
              sub_3E5D20(v100, v110);
              sub_3E5D20(v103, v110);
              sub_3E5D20(v102, v110);
            }
            v131 = v121;
            if ( v121 )
              ++*(_DWORD *)(v121 + 8);
            sub_3E6950((unsigned int **)(a1 + 48), &v131);
            sub_3E5F00(v108, (__int64)&v136);
            v142 = v134;
            if ( v134 )
              ++*(_DWORD *)(v134 + 8);
            sub_3E6950((unsigned int **)(a1 + 64), &v142);
            v57 = *(_BYTE **)(a1 + 88);
            if ( v57 )
            {
              v58 = *((_DWORD *)v57 - 1);
              if ( v58 == *((_DWORD *)v57 - 2) )
              {
                v72 = (3 * v58 + 1) >> 1;
                v73 = v72 + 8;
                if ( v58 + 8 >= (unsigned int)v73 || v58 >= v72 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v146, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v146);
                  sub_233E40((__int64)&v146);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v74 = (unsigned int *)sub_186B300(v57 - 8, v73);
                v57 = v74 + 2;
                *(_QWORD *)(a1 + 88) = v74 + 2;
                *v74 = v72;
                LODWORD(v74) = v74[1];
                v61 = &v57[(unsigned int)v74];
                v60 = (_DWORD)v74 + 1;
              }
              else
              {
                v59 = v58;
                v60 = v58 + 1;
                v61 = &v57[v59];
              }
            }
            else
            {
              v93 = (_QWORD *)sub_186B270(0xAu);
              v57 = v93 + 1;
              *v93 = 2;
              v60 = 1;
              *(_QWORD *)(a1 + 88) = v57;
              v61 = v57;
            }
            *v61 = v126;
            *((_DWORD *)v57 - 1) = v60;
            v62 = *(_QWORD *)(a1 + 96);
            if ( !v62 || (v63 = *(_DWORD *)(v62 - 4), v63 == *(_DWORD *)(v62 - 8)) )
            {
              sub_3F2670((unsigned int **)(a1 + 96));
              v62 = *(_QWORD *)(a1 + 96);
              v63 = *(_DWORD *)(v62 - 4);
            }
            *(_BYTE *)(v62 + v63) = 0;
            *(_DWORD *)(v62 - 4) = v63 + 1;
            if ( (int)v136 <= 0 )
              ++v105;
            else
              ++v106;
            goto LABEL_38;
          }
          if ( !v111 )
          {
            v112 = v134;
            sub_27B620((__int64)&v142, (__int64)&qword_1C7F280, (__int64)&v136);
            sub_3EBD70((__int64)&v146, (__int64)&v142);
            v85 = sub_3ECD20(a1, (int)&v146, v112);
            if ( v85 )
              ++*(_DWORD *)(v85 + 8);
            v113 = v85;
            sub_3E5D20(v114, v104);
            sub_25A130((char *)&v146);
            sub_25A130((char *)&v142);
            v114 = v113;
          }
          v129 = v121;
          if ( v121 )
            ++*(_DWORD *)(v121 + 8);
          sub_3E6950((unsigned int **)(a1 + 48), &v129);
          sub_3E5F00(v108, (__int64)&v136);
          v130 = v134;
          if ( v134 )
            ++*(_DWORD *)(v134 + 8);
          sub_3E6950((unsigned int **)(a1 + 64), &v130);
          v25 = *(_BYTE **)(a1 + 88);
          if ( !v25 )
          {
            v92 = (_QWORD *)sub_186B270(0xAu);
            v25 = v92 + 1;
            *v92 = 2;
            v28 = 1;
            *(_QWORD *)(a1 + 88) = v25;
            v29 = v25;
LABEL_34:
            *v29 = 0;
            *((_DWORD *)v25 - 1) = v28;
            v30 = *(_BYTE **)(a1 + 96);
            if ( v30 )
              goto LABEL_35;
            goto LABEL_99;
          }
          v26 = *((_DWORD *)v25 - 1);
          if ( v26 != *((_DWORD *)v25 - 2) )
          {
            v27 = v26;
            v28 = v26 + 1;
            v29 = &v25[v27];
            goto LABEL_34;
          }
          v67 = (3 * v26 + 1) >> 1;
          v68 = v67 + 8;
          if ( v26 + 8 >= (unsigned int)v68 || v26 >= v67 )
          {
            v95 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v146, "Overflow encountered when expanding vector");
            *v95 = (char *)off_1C63128;
            sub_2333C0(v95 + 1, &v146);
            sub_233E40((__int64)&v146);
            __cxa_throw(v95, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v69 = (unsigned int *)sub_186B300(v25 - 8, v68);
          v70 = v69 + 2;
          *(_QWORD *)(a1 + 88) = v69 + 2;
          *v69 = v67;
          LODWORD(v69) = v69[1];
          *((_BYTE *)v70 + (unsigned int)v69) = 0;
          *(v70 - 1) = (_DWORD)v69 + 1;
          v30 = *(_BYTE **)(a1 + 96);
          if ( v30 )
          {
LABEL_35:
            v31 = *((_DWORD *)v30 - 1);
            if ( v31 == *((_DWORD *)v30 - 2) )
            {
              v64 = (3 * v31 + 1) >> 1;
              v65 = v64 + 8;
              if ( v31 + 8 >= (unsigned int)v65 || v31 >= v64 )
              {
                v96 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v146, "Overflow encountered when expanding vector");
                *v96 = (char *)off_1C63128;
                sub_2333C0(v96 + 1, &v146);
                sub_233E40((__int64)&v146);
                __cxa_throw(v96, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v66 = (unsigned int *)sub_186B300(v30 - 8, v65);
              v30 = v66 + 2;
              *(_QWORD *)(a1 + 96) = v66 + 2;
              *v66 = v64;
              LODWORD(v66) = v66[1];
              v34 = &v30[(unsigned int)v66];
              v33 = (_DWORD)v66 + 1;
            }
            else
            {
              v32 = v31;
              v33 = v31 + 1;
              v34 = &v30[v32];
            }
            goto LABEL_37;
          }
LABEL_99:
          v71 = (_QWORD *)sub_186B270(0xAu);
          v30 = v71 + 1;
          *v71 = 2;
          v33 = 1;
          *(_QWORD *)(a1 + 96) = v30;
          v34 = v30;
LABEL_37:
          *v34 = 1;
          *((_DWORD *)v30 - 1) = v33;
          v111 = v109;
LABEL_38:
          v35 = v134;
          if ( v134 )
          {
            v36 = v135;
            v19 = (*(_DWORD *)(v134 + 8))-- == 1;
            if ( v19 )
              sub_15D7BC0(v36, v35);
          }
          ++v15;
          v122 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v140);
          sub_182CBA0(v122, v141);
          v37 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v136);
          sub_182CBA0(v37, &v138);
          if ( v115 == (unsigned int *)v15 )
            goto LABEL_42;
        }
        if ( v121 )
          ++*(_DWORD *)(v121 + 8);
        if ( !v14 || (v16 = *(v14 - 1), v16 == *(v14 - 2)) )
        {
          v133 = v14;
          sub_23A6F0(&v133);
          v14 = v133;
          v16 = *(v133 - 1);
        }
        *(_QWORD *)&v14[2 * v16] = v121;
        v17 = v134;
        *(v14 - 1) = v16 + 1;
        if ( v17 )
        {
          v18 = v135;
          v19 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v19 )
            sub_15D7BC0(v18, v17);
        }
        v20 = qword_1C7F2C0;
        ++v15;
        sub_182CBA0(qword_1C7F2C0, v140);
        sub_182CBA0(v20, v141);
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v136);
        sub_182CBA0(v21, &v138);
      }
      while ( v115 != (unsigned int *)v15 );
LABEL_42:
      if ( v111 )
      {
        v38 = *(_QWORD *)(a1 + 48);
        if ( v38 )
        {
          v118 = 0;
          while ( 1 )
          {
            if ( v118 >= *(_DWORD *)(v38 - 4) )
              goto LABEL_60;
            v39 = *(_QWORD *)a1;
            v142 = 0;
            v116 = v39;
            v143 = v39;
            v40 = sub_3ECD20(a1, *(_DWORD *)(a1 + 72) + 32 * v118, v114);
            v123 = v40;
            if ( v40 )
              ++*(_DWORD *)(v40 + 8);
            v41 = sub_15E1B70(*(_QWORD *)(a1 + 8));
            v42 = v41;
            if ( v41 )
              ++*(_DWORD *)(v41 + 8);
            v43 = sub_15D1F10(v114);
            v146 = 0;
            v44 = v43;
            v147 = 0;
            v148 = 1;
            v149 = 0;
            sub_182CBA0(qword_1C7F2C0, &v148);
            BYTE4(v148) &= ~1u;
            LODWORD(v148) = 1;
            v48 = sub_3EC140(a1 + 8, (int)&v146, v44, v45, v46, v47);
            v49 = v48;
            if ( v48 )
              ++*(_DWORD *)(v48 + 8);
            sub_25A130((char *)&v146);
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + v118) )
              break;
            v50 = *(_QWORD *)(a1 + 8);
LABEL_54:
            v51 = sub_15E1B70(v50);
            v120 = v51;
LABEL_55:
            if ( v51 )
              ++*(_DWORD *)(v51 + 8);
            sub_3E5D20(v142, v143);
            v142 = v120;
            sub_14B9B80(a1 + 24, &v142);
            v140[0] = v142;
            if ( v142 )
              ++*(_DWORD *)(v142 + 8);
            v133 = v14;
            sub_3E6950(&v133, v140);
            v14 = v133;
            sub_3E5D20(v142, v143);
            sub_3E5D20(v49, v116);
            sub_3E5D20(v42, v116);
            sub_3E5D20(v123, v116);
            v38 = *(_QWORD *)(a1 + 48);
            ++v118;
            if ( !v38 )
              goto LABEL_60;
          }
          v50 = *(_QWORD *)(a1 + 8);
          if ( !*(_WORD *)(v42 + 4)
            && (v86 = *(_DWORD **)(*(_QWORD *)(v42 + 16) + 24LL)) != nullptr
            && *v86 == 5
            && !v86[1] )
          {
            v87 = 0;
            v89 = v42;
            v90 = v49;
          }
          else
          {
            v87 = *(_WORD *)(v49 + 4);
            if ( !v87 && (v88 = *(_DWORD **)(*(_QWORD *)(v49 + 16) + 24LL)) != nullptr && *v88 == 5 && !v88[1]
              || *(_DWORD *)v49 >= *(_DWORD *)v42 )
            {
              v89 = v49;
              v90 = v42;
              if ( v42 == v49 )
              {
LABEL_134:
                v51 = *(_QWORD *)(v50 + 856);
                v120 = v51;
                goto LABEL_55;
              }
              goto LABEL_128;
            }
            v87 = *(_WORD *)(v42 + 4);
            v89 = v42;
            v90 = v49;
          }
          if ( v90 == v89 )
            goto LABEL_134;
LABEL_128:
          if ( !*(_WORD *)(v90 + 4) )
          {
            v91 = *(_DWORD **)(*(_QWORD *)(v90 + 16) + 24LL);
            if ( v91 )
            {
              if ( *v91 == 5 && !v91[1] && !v87 )
              {
                v94 = *(_DWORD **)(*(_QWORD *)(v89 + 16) + 24LL);
                if ( v94 )
                {
                  if ( *v94 == 5 && !v94[1] )
                  {
                    v51 = *(_QWORD *)(v50 + 864);
                    v120 = v51;
                    goto LABEL_55;
                  }
                }
              }
            }
          }
          goto LABEL_54;
        }
      }
    }
  }
  else
  {
    v114 = 0;
    v105 = 0;
    v106 = 0;
    v111 = 0;
  }
LABEL_60:
  sub_2FCDE0((__int64 *)a3);
  v133 = v14;
  sub_2FD290(a3, (__int64)&v132);
  if ( v105 != 0 && v106 != 0 && !v111 )
  {
    v52 = sub_3EE1A0((__int64 *)a1, a2, v106 < v105, a4);
    v53 = *(_QWORD *)(a1 + 48);
    v124 = 0;
    v117 = *(_QWORD *)a1;
    if ( v53 )
    {
      v54 = 0;
      do
      {
        if ( v54 >= *(_DWORD *)(v53 - 4) )
          break;
        if ( v52 != v54 )
        {
          if ( v106 < v105 == *(_DWORD *)(*(_QWORD *)(a1 + 72) + 32LL * v54) > 0 )
            sub_3EC8A0(&v146, (__int64 *)a1, v54, v52);
          else
            sub_3EC280(&v146, (__int64 *)a1, v54, v52);
          v119 = v146;
          v146 = v124;
          sub_3E5D20(v124, v147);
          v124 = v119;
          v146 = v119;
          if ( v119 )
            ++*(_DWORD *)(v119 + 8);
          sub_3E6950((unsigned int **)(a3 + 8), &v146);
          v53 = *(_QWORD *)(a1 + 48);
        }
        ++v54;
      }
      while ( v53 );
    }
    sub_3E5D20(v124, v117);
  }
  v55 = 1;
LABEL_74:
  v125 = v55;
  sub_3E5D20(v114, v104);
  v133 = v14;
  sub_2334C0(&v132);
  return v125;
}

