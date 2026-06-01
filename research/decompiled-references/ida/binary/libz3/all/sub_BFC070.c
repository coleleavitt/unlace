__int64 __fastcall sub_BFC070(__int64 a1, unsigned int *a2, double a3)
{
  char **exception; // r12
  char **v4; // r12
  __int64 v6; // rax
  void *v7; // rbx
  void *v8; // rbx
  unsigned int *v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  unsigned int *v12; // rsi
  __int64 v13; // rdi
  unsigned int v15; // eax
  void *v16; // rbx
  __int64 v17; // rax
  unsigned int *v18; // r15
  unsigned int **v19; // rbx
  int v20; // r13d
  __int64 v21; // rcx
  int v22; // eax
  unsigned int **v23; // rcx
  unsigned int *v24; // rax
  unsigned int *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r13
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  unsigned int v36; // ecx
  int v37; // r13d
  unsigned int **v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rdi
  __int64 v43; // rax
  unsigned int *v44; // rsi
  __int64 v45; // rdi
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int *v49; // r13
  __int64 v50; // rsi
  __int64 v51; // rdi
  unsigned int v52; // edx
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // rdi
  __int64 v57; // rax
  char v58; // al
  void *v59; // rdi
  unsigned int v60; // eax
  __int64 v61; // rsi
  __int64 v62; // rdi
  unsigned int **v63; // r13
  unsigned int *v64; // rsi
  _QWORD *v65; // rax
  void *v66; // rdi
  __int64 v67; // rdx
  void *v68; // rdi
  void *v69; // rdi
  int v70; // ecx
  int v71; // r8d
  int v72; // r9d
  __int64 v73; // rdi
  __int64 v74; // rax
  int v75; // eax
  unsigned int v76; // r13d
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rcx
  int v80; // eax
  int v81; // r8d
  int v82; // r9d
  _QWORD *v83; // rax
  int v84; // [rsp+0h] [rbp-180h]
  int v85; // [rsp+0h] [rbp-180h]
  int v86; // [rsp+8h] [rbp-178h]
  int v87; // [rsp+8h] [rbp-178h]
  __int64 v88; // [rsp+8h] [rbp-178h]
  int v89; // [rsp+10h] [rbp-170h]
  int v90; // [rsp+10h] [rbp-170h]
  __int64 v91; // [rsp+10h] [rbp-170h]
  int v92; // [rsp+18h] [rbp-168h]
  int v93; // [rsp+18h] [rbp-168h]
  char v94; // [rsp+1Fh] [rbp-161h]
  int v95; // [rsp+20h] [rbp-160h]
  int v96; // [rsp+20h] [rbp-160h]
  __int64 v97; // [rsp+20h] [rbp-160h]
  char v98; // [rsp+28h] [rbp-158h]
  char v99; // [rsp+28h] [rbp-158h]
  __int64 v100; // [rsp+28h] [rbp-158h]
  void *v101; // [rsp+30h] [rbp-150h]
  __int64 *v102; // [rsp+38h] [rbp-148h]
  __int64 v103; // [rsp+40h] [rbp-140h]
  __int64 v104; // [rsp+40h] [rbp-140h]
  unsigned int v105; // [rsp+48h] [rbp-138h]
  void *v106; // [rsp+48h] [rbp-138h]
  void *v107; // [rsp+48h] [rbp-138h]
  unsigned int *v108; // [rsp+50h] [rbp-130h]
  __int64 v109; // [rsp+50h] [rbp-130h]
  unsigned int *v110; // [rsp+50h] [rbp-130h]
  void *v111; // [rsp+50h] [rbp-130h]
  unsigned int v112; // [rsp+50h] [rbp-130h]
  char v113; // [rsp+58h] [rbp-128h]
  int v114; // [rsp+58h] [rbp-128h]
  int v115; // [rsp+60h] [rbp-120h]
  unsigned int *v116; // [rsp+60h] [rbp-120h]
  unsigned int *v117; // [rsp+68h] [rbp-118h]
  int v118; // [rsp+70h] [rbp-110h]
  __int64 v119; // [rsp+70h] [rbp-110h]
  __int64 v120; // [rsp+70h] [rbp-110h]
  unsigned __int8 v121; // [rsp+78h] [rbp-108h]
  void *v122; // [rsp+78h] [rbp-108h]
  unsigned int *v123; // [rsp+78h] [rbp-108h]
  unsigned int v125; // [rsp+88h] [rbp-F8h]
  int v126; // [rsp+88h] [rbp-F8h]
  unsigned int v127; // [rsp+88h] [rbp-F8h]
  unsigned int **v128; // [rsp+88h] [rbp-F8h]
  unsigned int *v129; // [rsp+90h] [rbp-F0h] BYREF
  __int64 v130; // [rsp+98h] [rbp-E8h]
  unsigned int *v131; // [rsp+A0h] [rbp-E0h] BYREF
  __int64 v132; // [rsp+A8h] [rbp-D8h]
  __int64 v133; // [rsp+B0h] [rbp-D0h]
  __int64 v134[2]; // [rsp+C0h] [rbp-C0h] BYREF
  _QWORD v135[2]; // [rsp+D0h] [rbp-B0h] BYREF
  _QWORD v136[2]; // [rsp+E0h] [rbp-A0h] BYREF
  _QWORD v137[2]; // [rsp+F0h] [rbp-90h] BYREF
  _QWORD v138[2]; // [rsp+100h] [rbp-80h] BYREF
  int v139; // [rsp+110h] [rbp-70h] BYREF
  char v140; // [rsp+114h] [rbp-6Ch]
  __int64 v141; // [rsp+118h] [rbp-68h]
  int v142; // [rsp+120h] [rbp-60h] BYREF
  char v143; // [rsp+124h] [rbp-5Ch]
  __int64 v144; // [rsp+128h] [rbp-58h]
  __int64 v145; // [rsp+130h] [rbp-50h] BYREF
  __int64 v146; // [rsp+138h] [rbp-48h]
  __int64 v147; // [rsp+140h] [rbp-40h] BYREF
  __int64 v148; // [rsp+148h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 24);
  v129 = nullptr;
  v130 = v6;
  v132 = v6;
  v131 = nullptr;
  v135[0] = 0;
  v135[1] = 0;
  v136[0] = 1;
  v136[1] = 0;
  v137[0] = 0;
  v137[1] = 0;
  v138[0] = 1;
  v138[1] = 0;
  if ( !(unsigned __int8)sub_BB1010(a1) )
    goto LABEL_2;
  if ( !(unsigned __int8)sub_BB0A60(a1 + 136, a2) )
    goto LABEL_2;
  v121 = sub_BB2080(a1, (__int64)a2, (__int64)v135);
  if ( !v121 || SLODWORD(v135[0]) <= 0 )
    goto LABEL_2;
  v145 = 2048;
  v146 = 0;
  v147 = 1;
  v148 = 0;
  sub_182CBA0(qword_1C7F2C0, &v147);
  LODWORD(v147) = 1;
  BYTE4(v147) &= ~1u;
  if ( (v136[0] & 0x100000000LL) == 0 && LODWORD(v136[0]) == 1 )
  {
    if ( (v135[0] & 0x100000000LL) != 0 || (v145 & 0x100000000LL) != 0 )
      v15 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v135, &v145) >> 31;
    else
      LOBYTE(v15) = SLODWORD(v135[0]) < (int)v145;
  }
  else
  {
    LOBYTE(v15) = sub_1848D40(qword_1C7F2C0, v135, &v145);
  }
  v16 = qword_1C7F2C0;
  if ( !(_BYTE)v15 )
  {
    sub_182CBA0(qword_1C7F2C0, &v145);
    sub_182CBA0(v16, &v147);
LABEL_2:
    v121 = 0;
    goto LABEL_3;
  }
  sub_182CBA0(qword_1C7F2C0, &v145);
  sub_182CBA0(v16, &v147);
  v17 = *(_QWORD *)(a1 + 24);
  v103 = v17;
  if ( a2 )
    ++a2[2];
  v133 = v17;
  v118 = sub_182D020(qword_1C7F2C0, v135);
  if ( v118 )
  {
    v18 = a2;
    v19 = nullptr;
    v20 = 0;
    sub_14078B0(a1 + 1848, a2, &v129, &v131);
    while ( 1 )
    {
      v25 = v129;
      if ( v129 )
        ++v129[2];
      if ( v19 )
      {
        v26 = *((_DWORD *)v19 - 1);
        if ( v26 == *((_DWORD *)v19 - 2) )
        {
          v27 = (3 * v26 + 1) >> 1;
          v28 = 8 * v27 + 8;
          if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v145, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v145);
            sub_233E40((__int64)&v145);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v105 = (3 * v26 + 1) >> 1;
          v108 = v25;
          v29 = (unsigned int *)sub_186B300(v19 - 1, v28);
          v19 = (unsigned int **)(v29 + 2);
          v25 = v108;
          *v29 = v105;
          LODWORD(v29) = v29[1];
          v23 = &v19[(unsigned int)v29];
          v22 = (_DWORD)v29 + 1;
        }
        else
        {
          v21 = v26;
          v22 = v26 + 1;
          v23 = &v19[v21];
        }
      }
      else
      {
        v110 = v25;
        v65 = (_QWORD *)sub_186B270(0x18u);
        v19 = (unsigned int **)(v65 + 1);
        *v65 = 2;
        v25 = v110;
        v22 = 1;
        v23 = v19;
      }
      *v23 = v25;
      *((_DWORD *)v19 - 1) = v22;
      v24 = v131;
      if ( v131 != v18 )
      {
        if ( v18 )
        {
          v11 = v18[2]-- == 1;
          if ( v11 )
          {
            sub_15D7BC0(v103, v18);
            v24 = v131;
          }
        }
        if ( v24 )
          ++v24[2];
        v18 = v24;
      }
      if ( v118 == ++v20 )
        break;
      sub_14078B0(a1 + 1848, v18, &v129, &v131);
    }
  }
  else
  {
    v18 = a2;
    v19 = nullptr;
  }
  v106 = *(void **)(a1 + 24);
  v30 = sub_15D1F10(a2);
  v31 = *(_QWORD *)(a1 + 1736);
  v32 = sub_15D2D60(v31, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v30);
  v35 = sub_15DC610(v31, v32, 0, 0, v33, v34, v84, v86, v89, v92, v95, v98, (int)&v147, (int)&v145, v103, v106);
  v117 = (unsigned int *)v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  if ( v18 )
    ++v18[2];
  if ( v19 )
  {
    v36 = *((_DWORD *)v19 - 1);
    if ( v36 == *((_DWORD *)v19 - 2) )
    {
      v76 = (3 * v36 + 1) >> 1;
      v77 = 8 * v76 + 8;
      if ( 8 * v36 + 8 >= (unsigned int)v77 || v36 >= v76 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v102, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v102);
        sub_233E40((__int64)v102);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v78 = (unsigned int *)sub_186B300(v19 - 1, v77);
      *v78 = v76;
      v19 = (unsigned int **)(v78 + 2);
      v79 = v78[1];
      v38 = (unsigned int **)&v78[2 * v79 + 2];
      v37 = v79 + 1;
    }
    else
    {
      v37 = v36 + 1;
      v38 = &v19[v36];
    }
  }
  else
  {
    v83 = (_QWORD *)sub_186B270(0x18u);
    *v83 = 2;
    v38 = (unsigned int **)(v83 + 1);
    v37 = 1;
    v19 = v38;
  }
  *v38 = v18;
  *((_DWORD *)v19 - 1) = v37;
  v119 = *(_QWORD *)(a1 + 24);
  v39 = sub_15D1F10(*v19);
  v42 = *(_QWORD *)(a1 + 1736);
  if ( v37 )
  {
    if ( v37 == 1 )
      v43 = (__int64)*v19;
    else
      v43 = sub_15E1AF0(v42);
  }
  else
  {
    v80 = sub_15D2D60(v42, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v39);
    v43 = sub_15DC610(v42, v80, 0, 0, v81, v82, v85, v87, v90, v93, v96, v99, (int)v101, (int)v102, v104, v107);
  }
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  v44 = v131;
  v131 = (unsigned int *)v43;
  if ( v44 )
  {
    v11 = v44[2]-- == 1;
    if ( v11 )
      sub_15D7BC0(v119, v44);
  }
  v45 = *(_QWORD *)(a1 + 1840);
  v46 = a1 + 1832;
  v109 = a1 + 1832;
  v100 = *(_QWORD *)(a1 + 24);
  if ( !v45 )
  {
    sub_16669E0(a1 + 1832);
    v45 = *(_QWORD *)(a1 + 1840);
  }
  v47 = sub_166A700(v45, (unsigned int)v135, 1, v46, v40, v41);
  v120 = v47;
  if ( v47 )
    ++*(_DWORD *)(v47 + 8);
  v97 = *(_QWORD *)(a1 + 24);
  sub_BB1EF0((__int64)v102, a1);
  v48 = sub_15E1B70(*(_QWORD *)(a1 + 1832));
  v49 = (unsigned int *)v48;
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  v50 = v145;
  if ( v145 )
  {
    v51 = v146;
    v11 = (*(_DWORD *)(v145 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v51, v50);
  }
  v115 = sub_966440(a1, v49);
  v52 = sub_BB2190(a1, (int)a2, (int)v131);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v52) == 1 )
  {
    v94 = 0;
  }
  else
  {
    sub_BBF3C0((_QWORD *)a1, v115 ^ 1, v52, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a3);
    v94 = v121;
  }
  sub_BB1EF0((__int64)v134, a1);
  v113 = sub_BB1FE0(a1, v134[0], (__int64)v137);
  if ( v113 )
  {
    v56 = *(_QWORD *)(a1 + 1840);
    v88 = *(_QWORD *)(a1 + 24);
    if ( !v56 )
    {
      sub_16669E0(v109);
      v56 = *(_QWORD *)(a1 + 1840);
    }
    sub_166A700(v56, (unsigned int)v137, 1, v53, v54, v55);
    v57 = sub_15E1B70(*(_QWORD *)(a1 + 1832));
    v116 = (unsigned int *)v57;
    if ( v57 )
      ++*(_DWORD *)(v57 + 8);
    v58 = BYTE4(v137[0]);
    v59 = qword_1C7F2C0;
    if ( (v137[0] & 0x100000000LL) != 0 || (v135[0] & 0x100000000LL) != 0 )
    {
      v59 = qword_1C7F2C0;
      if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v137, v135) )
      {
LABEL_107:
        v58 = BYTE4(v137[0]);
        goto LABEL_108;
      }
    }
    else if ( LODWORD(v137[0]) != LODWORD(v135[0]) )
    {
LABEL_108:
      v145 = 0;
      v146 = 0;
      v66 = qword_1C7F2C0;
      v67 = *(_QWORD *)(a1 + 24);
      v147 = 1;
      v148 = 0;
      v91 = v67;
      if ( (v58 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v102, v137);
      else
        LODWORD(v145) = v137[0];
      if ( (v138[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v66, v101, v138);
      }
      else
      {
        BYTE4(v147) &= ~1u;
        LODWORD(v147) = v138[0];
      }
      v68 = qword_1C7F2C0;
      if ( (v147 & 0x100000000LL) != 0 || (_DWORD)v147 != 1 || (v136[0] & 0x100000000LL) != 0 || LODWORD(v136[0]) != 1 )
      {
        sub_1852000(qword_1C7F2C0, v102, v135);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, v102, v135);
        sub_182CBA0(v68, v101);
        BYTE4(v147) &= ~1u;
        LODWORD(v147) = 1;
      }
      v140 &= 0xFCu;
      v69 = qword_1C7F2C0;
      v143 &= 0xFCu;
      v139 = 0;
      v141 = 0;
      v142 = 1;
      v144 = 0;
      if ( (v145 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v139, v102);
      else
        v139 = v145;
      if ( (v147 & 0x100000000LL) != 0 )
      {
        sub_182C690(v69, &v142, v101);
      }
      else
      {
        v143 &= ~1u;
        v142 = v147;
      }
      v122 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v102);
      sub_182CBA0(v122, v101);
      v73 = *(_QWORD *)(a1 + 1840);
      if ( !v73 )
      {
        sub_16669E0(v109);
        v73 = *(_QWORD *)(a1 + 1840);
      }
      sub_166A700(v73, (unsigned int)&v139, 1, v70, v71, v72);
      sub_BB1EF0((__int64)v102, a1);
      v74 = sub_15E1B70(*(_QWORD *)(a1 + 1832));
      v123 = (unsigned int *)v74;
      if ( v74 )
        ++*(_DWORD *)(v74 + 8);
      sub_BF6100(v145, v146);
      v111 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v139);
      sub_182CBA0(v111, &v142);
      v112 = sub_966440(a1, v123);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v112) == 1 )
      {
        v113 = v94;
      }
      else
      {
        v75 = sub_966440(a1, v116);
        sub_BBF3C0((_QWORD *)a1, v75 ^ 1, v112, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a3);
      }
      sub_BF6100((__int64)v123, v91);
      v121 = v113;
      goto LABEL_80;
    }
    if ( (v138[0] & 0x100000000LL) != 0 || (v136[0] & 0x100000000LL) != 0 )
      v121 = (unsigned int)sub_182C7B0(v59, v138, v136) == 0;
    else
      v121 = LODWORD(v138[0]) == LODWORD(v136[0]);
    if ( v121 )
    {
      v114 = sub_966440(a1, v116) ^ 1;
      v60 = sub_BB2190(a1, (int)v18, (int)v117);
      sub_BBF3C0((_QWORD *)a1, v114, v60, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a3);
LABEL_80:
      if ( v116 )
      {
        v125 = v116[2];
        v116[2] = v125 - 1;
        if ( v125 == 1 )
          sub_15D7BC0(v88, v116);
      }
      goto LABEL_83;
    }
    goto LABEL_107;
  }
  sub_BF7830(a1, v18, v117);
LABEL_83:
  v61 = v134[0];
  if ( v134[0] )
  {
    v62 = v134[1];
    v11 = (*(_DWORD *)(v134[0] + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v62, v61);
  }
  if ( v49 )
  {
    v11 = v49[2]-- == 1;
    if ( v11 )
      sub_15D7BC0(v97, v49);
  }
  if ( v120 )
  {
    v126 = *(_DWORD *)(v120 + 8);
    *(_DWORD *)(v120 + 8) = v126 - 1;
    if ( v126 == 1 )
      sub_15D7BC0(v100, v120);
  }
  if ( v117 )
  {
    v127 = v117[2];
    v117[2] = v127 - 1;
    if ( v127 == 1 )
      sub_15D7BC0(v107, v117);
  }
  v63 = &v19[*((unsigned int *)v19 - 1)];
  if ( v19 < v63 )
  {
    v128 = v19;
    do
    {
      v64 = *v128;
      if ( *v128 )
      {
        v11 = v64[2]-- == 1;
        if ( v11 )
          sub_15D7BC0(v104, v64);
      }
      ++v128;
    }
    while ( v128 < v63 );
  }
  sub_186B220(v19 - 1);
  if ( v18 )
  {
    v11 = v18[2]-- == 1;
    if ( v11 )
      sub_15D7BC0(v104, v18);
  }
LABEL_3:
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v137);
  sub_182CBA0(v7, v138);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v135);
  sub_182CBA0(v8, v136);
  v9 = v131;
  if ( v131 )
  {
    v10 = v132;
    v11 = v131[2]-- == 1;
    if ( v11 )
      sub_15D7BC0(v10, v9);
  }
  v12 = v129;
  if ( v129 )
  {
    v13 = v130;
    v11 = v129[2]-- == 1;
    if ( v11 )
      sub_15D7BC0(v13, v12);
  }
  return v121;
}

