__int64 __fastcall sub_3FBAE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  char **v6; // r13
  char **v7; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE *v18; // rax
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // r12
  char v22; // al
  __int64 v23; // r15
  char v24; // al
  __int64 v25; // rax
  _DWORD *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 *v33; // r12
  __int64 *v34; // r15
  __int64 *v35; // rbx
  __int64 *v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  _QWORD *v44; // rax
  __int64 *v45; // r12
  __int64 v46; // rdx
  _QWORD *v47; // rax
  __int64 v48; // rax
  char **exception; // r13
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rax
  char **v53; // r13
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  _QWORD *v56; // r8
  __int64 v57; // rcx
  unsigned int v58; // eax
  unsigned int v59; // r9d
  size_t v60; // rsi
  unsigned int *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  _DWORD *v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 *v67; // rbx
  __int64 *v68; // r13
  __int64 v69; // rsi
  _QWORD *v70; // rdx
  unsigned int v71; // eax
  _QWORD *v72; // r8
  __int64 v73; // rcx
  unsigned int v74; // eax
  unsigned int v75; // r9d
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 *v84; // rbx
  __int64 *v85; // r14
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rbx
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 *v94; // rbx
  __int64 *v95; // r13
  __int64 v96; // rsi
  __int64 *v97; // rbx
  __int64 *v98; // r14
  __int64 v99; // rsi
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rax
  __int64 *v105; // r12
  __int64 *v106; // r14
  __int64 *v107; // rbx
  __int64 *v108; // r13
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rdi
  unsigned __int64 v113; // rcx
  _QWORD *v114; // rax
  __int64 v115; // rsi
  unsigned __int64 v116; // rcx
  _QWORD *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // [rsp+10h] [rbp-150h]
  __int64 v120; // [rsp+18h] [rbp-148h]
  __int64 v121; // [rsp+20h] [rbp-140h]
  _QWORD *v122; // [rsp+28h] [rbp-138h]
  _QWORD *v123; // [rsp+28h] [rbp-138h]
  unsigned int i; // [rsp+30h] [rbp-130h]
  unsigned int v125; // [rsp+34h] [rbp-12Ch]
  int v126; // [rsp+34h] [rbp-12Ch]
  unsigned int v127; // [rsp+34h] [rbp-12Ch]
  __int64 v128; // [rsp+38h] [rbp-128h]
  __int64 v129; // [rsp+38h] [rbp-128h]
  __int64 v130; // [rsp+38h] [rbp-128h]
  unsigned __int64 v131; // [rsp+38h] [rbp-128h]
  unsigned __int64 v132; // [rsp+38h] [rbp-128h]
  __int64 v133; // [rsp+40h] [rbp-120h]
  _QWORD *v134; // [rsp+40h] [rbp-120h]
  int v135; // [rsp+40h] [rbp-120h]
  __int64 v136; // [rsp+40h] [rbp-120h]
  _QWORD *v137; // [rsp+40h] [rbp-120h]
  _QWORD *v138; // [rsp+40h] [rbp-120h]
  _QWORD *v139; // [rsp+40h] [rbp-120h]
  __int64 v141; // [rsp+50h] [rbp-110h]
  __int64 v142; // [rsp+58h] [rbp-108h]
  __int64 v143; // [rsp+60h] [rbp-100h]
  __int64 *v144; // [rsp+70h] [rbp-F0h]
  int v145; // [rsp+78h] [rbp-E8h]
  int v146[2]; // [rsp+78h] [rbp-E8h]
  __int64 *v147; // [rsp+78h] [rbp-E8h]
  int v148; // [rsp+78h] [rbp-E8h]
  int v149; // [rsp+78h] [rbp-E8h]
  int v150; // [rsp+78h] [rbp-E8h]
  int v151; // [rsp+78h] [rbp-E8h]
  int v152; // [rsp+78h] [rbp-E8h]
  int v153; // [rsp+78h] [rbp-E8h]
  int v154; // [rsp+78h] [rbp-E8h]
  __int64 *v155; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v156; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v157; // [rsp+98h] [rbp-C8h]
  __int64 v158; // [rsp+A0h] [rbp-C0h] BYREF
  __int64 v159; // [rsp+A8h] [rbp-B8h]
  __int64 v160; // [rsp+B0h] [rbp-B0h] BYREF
  __int64 v161; // [rsp+B8h] [rbp-A8h]
  __int64 v162; // [rsp+C0h] [rbp-A0h] BYREF
  __int64 v163; // [rsp+C8h] [rbp-98h]
  __int64 v164; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v165; // [rsp+D8h] [rbp-88h]
  __int64 v166; // [rsp+E0h] [rbp-80h] BYREF
  __int64 v167; // [rsp+E8h] [rbp-78h]
  __int64 v168; // [rsp+F0h] [rbp-70h]
  __int64 v169; // [rsp+100h] [rbp-60h]
  __int64 v170[10]; // [rsp+110h] [rbp-50h] BYREF

  v12 = *a1;
  v156 = 0;
  v157 = v12;
  v158 = 0;
  v159 = v12;
  sub_3FA320(a1, a2, a4, &v156, 1u);
  sub_3FA320(a1, a2, a5, &v158, 1u);
  v13 = v158;
  if ( v158 == v156 )
  {
    v39 = *(_QWORD *)(*a1 + 856);
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    result = *a6;
    if ( *a6 )
    {
      v40 = a6[1];
      v29 = (*(_DWORD *)(result + 8))-- == 1;
      if ( v29 )
      {
        result = sub_15D7BC0(v40, result);
        v13 = v158;
      }
    }
    *a6 = v39;
    goto LABEL_48;
  }
  v14 = sub_15D1F10(a4);
  v15 = 0xFFFFFFFF0LL;
  v16 = *(_QWORD *)(v14 + 24);
  v17 = *(_QWORD *)(v16 + 8);
  if ( v17 )
    v15 = 16LL * (unsigned int)(*(_DWORD *)(v17 - 4) - 1);
  v18 = (_BYTE *)(v15 + v17);
  if ( v18[8] != 1 )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v19 = *(_QWORD *)(*(_QWORD *)v18 + 24LL);
  if ( v19 )
  {
    if ( (unsigned int)(*(_DWORD *)(v19 + 24) - 1) > 1 )
    {
      result = (unsigned int)(*(_DWORD *)(v16 + 24) - 1);
      if ( (unsigned int)result > 1 )
      {
        v50 = *a6;
        if ( *a6 )
        {
          v51 = a6[1];
          v29 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v29 )
            result = sub_15D7BC0(v51, v50);
        }
        *a6 = 0;
        v13 = v158;
        goto LABEL_48;
      }
    }
  }
  v21 = *a1;
  v155 = nullptr;
  v142 = v21;
  v160 = 0;
  v161 = v21;
  v22 = sub_3FAC20((__int64)a1, a2, v156, &v155, &v160);
  v23 = v160;
  v121 = v161;
  if ( !v22 )
  {
    v30 = *a6;
    v144 = v155;
    if ( !*a6 || (v31 = a6[1], v29 = *(_DWORD *)(v30 + 8) == 1, --*(_DWORD *)(v30 + 8), !v29) )
    {
      *a6 = 0;
      goto LABEL_24;
    }
    v143 = 0;
LABEL_128:
    sub_15D7BC0(v31, v30);
LABEL_72:
    *a6 = 0;
LABEL_73:
    if ( v143 )
    {
      v148 = *(_DWORD *)(v143 + 8);
      *(_DWORD *)(v143 + 8) = v148 - 1;
      if ( v148 == 1 )
LABEL_20:
        sub_15D7BC0(v142, v143);
    }
LABEL_24:
    if ( !v23 )
    {
LABEL_27:
      result = (__int64)v144;
      if ( v144 )
      {
        v32 = *((unsigned int *)v144 - 1);
        if ( (_DWORD)v32 )
        {
          v33 = v144;
          v34 = &v144[2 * v32];
          do
          {
            v35 = (__int64 *)v33[1];
            if ( v35 )
            {
              v36 = &v35[*((unsigned int *)v35 - 1)];
              if ( v35 >= v36 )
                goto LABEL_38;
              do
              {
                while ( 1 )
                {
                  v37 = *v35;
                  if ( *v35 )
                  {
                    v38 = *v33;
                    v29 = (*(_DWORD *)(v37 + 8))-- == 1;
                    if ( v29 )
                      break;
                  }
                  if ( ++v35 >= v36 )
                    goto LABEL_37;
                }
                sub_15D7BC0(v38, v37);
                ++v35;
              }
              while ( v35 < v36 );
LABEL_37:
              v35 = (__int64 *)v33[1];
              if ( v35 )
LABEL_38:
                sub_186B220(v35 - 1);
            }
            v33 += 2;
          }
          while ( v34 != v33 );
        }
        result = sub_186B220(v144 - 1);
      }
      v13 = v158;
LABEL_48:
      if ( v13 )
      {
        v41 = v159;
        v29 = (*(_DWORD *)(v13 + 8))-- == 1;
        if ( v29 )
          result = sub_15D7BC0(v41, v13);
      }
      v42 = v156;
      if ( !v156 )
        return result;
      v43 = v157;
      v29 = (*(_DWORD *)(v156 + 8))-- == 1;
      if ( !v29 )
        return result;
      return sub_15D7BC0(v43, v42);
    }
LABEL_25:
    v29 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v29 )
      sub_15D7BC0(v121, v23);
    goto LABEL_27;
  }
  v163 = v21;
  v162 = 0;
  v24 = sub_3FAC20((__int64)a1, a2, v158, &v155, &v162);
  v144 = v155;
  v143 = v162;
  v142 = v163;
  if ( !v24 )
  {
    v30 = *a6;
    if ( !*a6 )
      goto LABEL_72;
    v31 = a6[1];
    v29 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( !v29 )
      goto LABEL_72;
    goto LABEL_128;
  }
  v25 = *a1;
  v141 = *a1;
  if ( v162 != v23 )
  {
    if ( !(unsigned __int8)sub_15D26C0(v25, v23) || !(unsigned __int8)sub_15D26C0(*a1, v143) )
    {
      v26 = *(_DWORD **)(sub_15D1F10(v23) + 24);
      if ( v26 && *((_DWORD *)a1 + 2) == *v26 && !v26[1] )
      {
        sub_3FBAE0(a1, a2, a3, v23, v143, a6);
        if ( !v143 )
          goto LABEL_25;
        v154 = *(_DWORD *)(v143 + 8);
        *(_DWORD *)(v143 + 8) = v154 - 1;
        if ( v154 != 1 )
          goto LABEL_25;
      }
      else
      {
        v27 = *a6;
        if ( *a6 )
        {
          v28 = a6[1];
          v29 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v28, v27);
        }
        *a6 = 0;
        if ( !v143 )
          goto LABEL_25;
        v145 = *(_DWORD *)(v143 + 8);
        *(_DWORD *)(v143 + 8) = v145 - 1;
        if ( v145 != 1 )
          goto LABEL_25;
      }
      goto LABEL_20;
    }
    v78 = *(_QWORD *)(*a1 + 864);
    if ( v78 )
      ++*(_DWORD *)(v78 + 8);
    v79 = *a6;
    if ( *a6 )
    {
      v80 = a6[1];
      v29 = (*(_DWORD *)(v79 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v80, v79);
    }
    *a6 = v78;
    goto LABEL_73;
  }
  v165 = *a1;
  v167 = v25;
  v168 = v25;
  v169 = v25;
  v164 = 0;
  v166 = 0;
  *(_QWORD *)v146 = v156;
  if ( v156 )
    ++*(_DWORD *)(v156 + 8);
  v44 = (_QWORD *)sub_186B270(0x18u);
  v45 = v44 + 1;
  v44[1] = *(_QWORD *)v146;
  v46 = v158;
  *v44 = 0x100000002LL;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  v133 = v46;
  v47 = (_QWORD *)sub_186B270(0x18u);
  v147 = v47 + 1;
  *v47 = 0x100000002LL;
  v47[1] = v133;
  if ( v144 )
  {
    v119 = 0;
    v120 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= *((_DWORD *)v144 - 1) )
        goto LABEL_164;
      v48 = *((unsigned int *)v45 - 1);
      if ( (unsigned int)v48 > 1 )
      {
        v113 = (unsigned __int64)&v45[v48];
        v114 = v45 + 1;
        if ( (unsigned __int64)(v45 + 1) >= v113 )
        {
LABEL_162:
          *((_DWORD *)v45 - 1) = 1;
          goto LABEL_77;
        }
        do
        {
          v115 = *v114;
          if ( *v114 )
          {
            v29 = (*(_DWORD *)(v115 + 8))-- == 1;
            if ( v29 )
            {
              v131 = v113;
              v138 = v114;
              sub_15D7BC0(v141, v115);
              v113 = v131;
              v114 = v138;
            }
          }
          ++v114;
        }
        while ( (unsigned __int64)v114 < v113 );
        LODWORD(v48) = *((_DWORD *)v45 - 1);
      }
      if ( (_DWORD)v48 )
        goto LABEL_162;
      if ( !*((_DWORD *)v45 - 2) )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v170, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v170);
        sub_233E40((__int64)v170);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      *((_DWORD *)v45 - 1) = 1;
      *v45 = 0;
LABEL_77:
      v52 = *((unsigned int *)v147 - 1);
      if ( (unsigned int)v52 > 1 )
      {
        v116 = (unsigned __int64)&v147[v52];
        v117 = v147 + 1;
        if ( (unsigned __int64)(v147 + 1) >= v116 )
        {
LABEL_222:
          *((_DWORD *)v147 - 1) = 1;
          goto LABEL_82;
        }
        do
        {
          v118 = *v117;
          if ( *v117 )
          {
            v29 = (*(_DWORD *)(v118 + 8))-- == 1;
            if ( v29 )
            {
              v132 = v116;
              v139 = v117;
              sub_15D7BC0(v141, v118);
              v116 = v132;
              v117 = v139;
            }
          }
          ++v117;
        }
        while ( (unsigned __int64)v117 < v116 );
        LODWORD(v52) = *((_DWORD *)v147 - 1);
      }
      if ( (_DWORD)v52 )
        goto LABEL_222;
      if ( !*((_DWORD *)v147 - 2) )
      {
        v53 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v170, "Overflow encountered when expanding vector");
        *v53 = (char *)off_1C63128;
        sub_2333C0(v53 + 1, v170);
        sub_233E40((__int64)v170);
        __cxa_throw(v53, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      *((_DWORD *)v147 - 1) = 1;
      *v147 = 0;
LABEL_82:
      v54 = (_QWORD *)v144[2 * i + 1];
      if ( v54 )
      {
        v55 = *((_DWORD *)v54 - 1) - 1;
        if ( *((_DWORD *)v54 - 1) == 1 )
          goto LABEL_92;
      }
      else
      {
        v55 = -1;
      }
      v56 = &v54[v55];
      do
      {
        v57 = *v54;
        if ( *v54 )
          ++*(_DWORD *)(v57 + 8);
        v58 = *((_DWORD *)v45 - 1);
        if ( v58 == *((_DWORD *)v45 - 2) )
        {
          v59 = (3 * v58 + 1) >> 1;
          v60 = 8 * v59 + 8;
          if ( 8 * v58 + 8 >= (unsigned int)v60 || v58 >= v59 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v170, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v170);
            sub_233E40((__int64)v170);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v122 = v54;
          v125 = (3 * v58 + 1) >> 1;
          v128 = v57;
          v134 = v56;
          v61 = (unsigned int *)sub_186B300(v45 - 1, v60);
          v45 = (__int64 *)(v61 + 2);
          v56 = v134;
          v57 = v128;
          v54 = v122;
          *v61 = v125;
          v58 = v61[1];
        }
        ++v54;
        v45[v58] = v57;
        *((_DWORD *)v45 - 1) = v58 + 1;
      }
      while ( v56 != v54 );
      v70 = (_QWORD *)v144[2 * i + 1];
      if ( v70 )
      {
        v71 = *((_DWORD *)v70 - 1) - 1;
        if ( *((_DWORD *)v70 - 1) == 1 )
          goto LABEL_92;
      }
      else
      {
        v71 = -1;
      }
      v72 = &v70[v71];
      do
      {
        v73 = *v70;
        if ( *v70 )
          ++*(_DWORD *)(v73 + 8);
        v74 = *((_DWORD *)v147 - 1);
        if ( v74 == *((_DWORD *)v147 - 2) )
        {
          v75 = (3 * v74 + 1) >> 1;
          v76 = 8 * v75 + 8;
          if ( 8 * v74 + 8 >= (unsigned int)v76 || v74 >= v75 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v170, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v170);
            sub_233E40((__int64)v170);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v123 = v72;
          v127 = (3 * v74 + 1) >> 1;
          v130 = v73;
          v137 = v70;
          v77 = (unsigned int *)sub_186B300(v147 - 1, v76);
          v70 = v137;
          v147 = (__int64 *)(v77 + 2);
          v72 = v123;
          *v77 = v127;
          v73 = v130;
          v74 = v77[1];
        }
        ++v70;
        v147[v74] = v73;
        *((_DWORD *)v147 - 1) = v74 + 1;
      }
      while ( v72 != v70 );
LABEL_92:
      v62 = sub_15DCAD0(a1[2], (int)v45, 0);
      v129 = v62;
      if ( v62 )
        ++*(_DWORD *)(v62 + 8);
      if ( v120 )
      {
        v135 = *(_DWORD *)(v120 + 8);
        *(_DWORD *)(v120 + 8) = v135 - 1;
        if ( v135 == 1 )
          sub_15D7BC0(v141, v120);
      }
      v63 = sub_15DCAD0(a1[2], (int)v147, 0);
      v136 = v63;
      if ( v63 )
        ++*(_DWORD *)(v63 + 8);
      if ( v119 )
      {
        v126 = *(_DWORD *)(v119 + 8);
        *(_DWORD *)(v119 + 8) = v126 - 1;
        if ( v126 == 1 )
          sub_15D7BC0(v141, v119);
      }
      sub_3FA320(a1, a2, v129, &v164, 1u);
      sub_3FA320(a1, a2, v136, &v166, 1u);
      if ( v164 != v166 )
      {
        if ( (unsigned __int8)sub_15D26C0(*a1, v164) && (unsigned __int8)sub_15D26C0(*a1, v166) )
        {
          v81 = *(_QWORD *)(*a1 + 864);
          if ( v81 )
            ++*(_DWORD *)(v81 + 8);
          v82 = *a6;
          if ( *a6 )
          {
            v83 = a6[1];
            v29 = (*(_DWORD *)(v82 + 8))-- == 1;
            if ( v29 )
              sub_15D7BC0(v83, v82);
          }
          *a6 = v81;
          goto LABEL_111;
        }
        v64 = *(_DWORD **)(sub_15D1F10(v164) + 24);
        if ( !v64 || *((_DWORD *)a1 + 2) != *v64 || v64[1] )
        {
          v65 = *a6;
          if ( *a6 )
          {
            v66 = a6[1];
            v29 = (*(_DWORD *)(v65 + 8))-- == 1;
            if ( v29 )
              sub_15D7BC0(v66, v65);
          }
          *a6 = 0;
LABEL_111:
          v67 = v147;
          v68 = &v147[*((unsigned int *)v147 - 1)];
          if ( v147 < v68 )
          {
            do
            {
              v69 = *v67;
              if ( *v67 )
              {
                v29 = (*(_DWORD *)(v69 + 8))-- == 1;
                if ( v29 )
                  sub_15D7BC0(v141, v69);
              }
              ++v67;
            }
            while ( v67 < v68 );
          }
          v84 = v45;
          sub_186B220(v147 - 1);
          v85 = &v45[*((unsigned int *)v45 - 1)];
          if ( v45 < v85 )
          {
            do
            {
              v86 = *v84;
              if ( *v84 )
              {
                v29 = (*(_DWORD *)(v86 + 8))-- == 1;
                if ( v29 )
                  sub_15D7BC0(v141, v86);
              }
              ++v84;
            }
            while ( v84 < v85 );
          }
          sub_186B220(v45 - 1);
          v87 = v166;
          if ( v166 )
          {
            v88 = v167;
            v29 = (*(_DWORD *)(v166 + 8))-- == 1;
            if ( v29 )
              sub_15D7BC0(v88, v87);
          }
          v89 = v164;
          if ( v164 )
          {
            v90 = v165;
            v29 = (*(_DWORD *)(v164 + 8))-- == 1;
            if ( v29 )
              sub_15D7BC0(v90, v89);
          }
          if ( v136 )
          {
            v149 = *(_DWORD *)(v136 + 8);
            *(_DWORD *)(v136 + 8) = v149 - 1;
            if ( v149 == 1 )
              sub_15D7BC0(v141, v136);
          }
          if ( v129 )
          {
            v150 = *(_DWORD *)(v129 + 8);
            *(_DWORD *)(v129 + 8) = v150 - 1;
            if ( v150 == 1 )
              sub_15D7BC0(v141, v129);
          }
          goto LABEL_73;
        }
        sub_3FBAE0(a1, a2, a3, v164, v166, a6);
        if ( *(_QWORD *)(*a1 + 856) != *a6 )
          goto LABEL_111;
      }
      v119 = v136;
      v120 = v129;
    }
  }
  v119 = 0;
  v120 = 0;
LABEL_164:
  v91 = *(_QWORD *)(*a1 + 856);
  if ( v91 )
    ++*(_DWORD *)(v91 + 8);
  v92 = *a6;
  if ( *a6 )
  {
    v93 = a6[1];
    v29 = (*(_DWORD *)(v92 + 8))-- == 1;
    if ( v29 )
      sub_15D7BC0(v93, v92);
  }
  *a6 = v91;
  v94 = v147;
  v95 = &v147[*((unsigned int *)v147 - 1)];
  if ( v147 < v95 )
  {
    do
    {
      v96 = *v94;
      if ( *v94 )
      {
        v29 = (*(_DWORD *)(v96 + 8))-- == 1;
        if ( v29 )
          sub_15D7BC0(v141, v96);
      }
      ++v94;
    }
    while ( v94 < v95 );
  }
  v97 = v45;
  sub_186B220(v147 - 1);
  if ( v45 < &v45[*((unsigned int *)v45 - 1)] )
  {
    v98 = &v45[*((unsigned int *)v45 - 1)];
    do
    {
      v99 = *v97;
      if ( *v97 )
      {
        v29 = (*(_DWORD *)(v99 + 8))-- == 1;
        if ( v29 )
          sub_15D7BC0(v141, v99);
      }
      ++v97;
    }
    while ( v97 < v98 );
  }
  sub_186B220(v45 - 1);
  v100 = v166;
  if ( v166 )
  {
    v101 = v167;
    v29 = (*(_DWORD *)(v166 + 8))-- == 1;
    if ( v29 )
      sub_15D7BC0(v101, v100);
  }
  v102 = v164;
  if ( v164 )
  {
    v103 = v165;
    v29 = (*(_DWORD *)(v164 + 8))-- == 1;
    if ( v29 )
      sub_15D7BC0(v103, v102);
  }
  if ( v119 )
  {
    v151 = *(_DWORD *)(v119 + 8);
    *(_DWORD *)(v119 + 8) = v151 - 1;
    if ( v151 == 1 )
      sub_15D7BC0(v141, v119);
  }
  if ( v120 )
  {
    v152 = *(_DWORD *)(v120 + 8);
    *(_DWORD *)(v120 + 8) = v152 - 1;
    if ( v152 == 1 )
      sub_15D7BC0(v141, v120);
  }
  if ( v143 )
  {
    v153 = *(_DWORD *)(v143 + 8);
    *(_DWORD *)(v143 + 8) = v153 - 1;
    if ( v153 == 1 )
      sub_15D7BC0(v142, v143);
    v29 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v29 )
      sub_15D7BC0(v121, v23);
  }
  result = (__int64)v144;
  if ( v144 )
  {
    v104 = *((unsigned int *)v144 - 1);
    if ( (_DWORD)v104 )
    {
      v105 = v144;
      v106 = &v144[2 * v104];
      do
      {
        v107 = (__int64 *)v105[1];
        if ( v107 )
        {
          v108 = &v107[*((unsigned int *)v107 - 1)];
          if ( v107 >= v108 )
            goto LABEL_209;
          do
          {
            while ( 1 )
            {
              v109 = *v107;
              if ( *v107 )
              {
                v110 = *v105;
                v29 = (*(_DWORD *)(v109 + 8))-- == 1;
                if ( v29 )
                  break;
              }
              if ( ++v107 >= v108 )
                goto LABEL_208;
            }
            sub_15D7BC0(v110, v109);
            ++v107;
          }
          while ( v107 < v108 );
LABEL_208:
          v107 = (__int64 *)v105[1];
          if ( v107 )
LABEL_209:
            sub_186B220(v107 - 1);
        }
        v105 += 2;
      }
      while ( v106 != v105 );
    }
    result = sub_186B220(v144 - 1);
  }
  v111 = v158;
  if ( v158 )
  {
    v112 = v159;
    v29 = (*(_DWORD *)(v158 + 8))-- == 1;
    if ( v29 )
      result = sub_15D7BC0(v112, v111);
  }
  v42 = v156;
  if ( v156 )
  {
    v43 = v157;
    v29 = (*(_DWORD *)(v156 + 8))-- == 1;
    if ( v29 )
      return sub_15D7BC0(v43, v42);
  }
  return result;
}

