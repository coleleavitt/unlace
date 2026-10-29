__int64 __fastcall sub_E210E0(std::ios_base **a1, size_t a2, double a3)
{
  std::ios_base *v3; // rbp
  __int64 v4; // rax
  __int64 v6; // rdi
  std::ios_base *v7; // r14
  _QWORD *v8; // r12
  __int64 v9; // rax
  unsigned int v10; // edx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned int *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  __int64 *v19; // rbp
  unsigned int v20; // r12d
  __int64 *v21; // r13
  __int64 v22; // rsi
  std::ios_base *v23; // rdi
  bool v24; // zf
  __int64 v26; // rdi
  __int64 v27; // rdx
  std::ios_base *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  size_t v31; // r14
  _QWORD *v32; // rdx
  unsigned int v33; // r9d
  __int64 v34; // r15
  __int64 v35; // rcx
  unsigned int v36; // ebp
  __int64 v37; // rax
  unsigned int v38; // ebp
  _QWORD *v39; // rax
  unsigned int v40; // r8d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rax
  std::ios_base *v44; // rsi
  unsigned int v45; // ecx
  __int64 v46; // r15
  unsigned int v47; // eax
  __int64 v48; // rdi
  int v49; // eax
  _QWORD *v50; // rdi
  unsigned int v51; // eax
  size_t *v52; // rcx
  std::ios_base *v53; // rdi
  int v54; // eax
  _QWORD *v55; // rcx
  size_t *v56; // r15
  _QWORD *v57; // rax
  unsigned int v58; // r12d
  _QWORD *v59; // rbp
  unsigned __int64 v60; // rbx
  __int64 v61; // rdi
  _QWORD *v62; // rcx
  _QWORD *v63; // r15
  unsigned __int64 v64; // rcx
  __int64 v65; // rsi
  std::ios_base *v66; // rdi
  _QWORD *v67; // r8
  __int64 v68; // rdx
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  _QWORD *v71; // r9
  _QWORD *v72; // rcx
  __int64 v73; // r15
  __int64 v74; // rdx
  _QWORD *v75; // rax
  _QWORD *v76; // rdx
  unsigned int v77; // r8d
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rsi
  size_t *v81; // rbp
  __int64 v82; // rdi
  unsigned int v83; // eax
  _QWORD *v84; // rdx
  int v85; // eax
  unsigned int v86; // r15d
  size_t v87; // rsi
  unsigned int *v88; // rax
  __int64 v89; // rcx
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  unsigned int v93; // r15d
  unsigned int v94; // edx
  unsigned int *v95; // rax
  __int64 v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // rdx
  int v99; // eax
  _QWORD *v100; // rdx
  _QWORD *v101; // rax
  unsigned int v102; // edx
  unsigned int v103; // ecx
  unsigned int *v104; // rax
  _QWORD *v105; // rax
  char **v106; // r15
  char **v107; // r15
  char **v108; // r15
  char **v109; // rbp
  char **exception; // rbx
  char **v111; // r15
  int v112; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v113; // [rsp+8h] [rbp-B0h]
  unsigned int v114; // [rsp+8h] [rbp-B0h]
  unsigned int v115; // [rsp+8h] [rbp-B0h]
  unsigned int v116; // [rsp+8h] [rbp-B0h]
  _QWORD *v117; // [rsp+8h] [rbp-B0h]
  _QWORD *v118; // [rsp+8h] [rbp-B0h]
  __int64 v119; // [rsp+10h] [rbp-A8h]
  __int64 v120; // [rsp+10h] [rbp-A8h]
  unsigned int v121; // [rsp+10h] [rbp-A8h]
  _QWORD *v122; // [rsp+10h] [rbp-A8h]
  _QWORD *v123; // [rsp+10h] [rbp-A8h]
  unsigned int v124; // [rsp+18h] [rbp-A0h]
  _QWORD *v125; // [rsp+18h] [rbp-A0h]
  unsigned int v126; // [rsp+18h] [rbp-A0h]
  unsigned int v127; // [rsp+2Ch] [rbp-8Ch]
  __int64 v128; // [rsp+30h] [rbp-88h]
  __int64 v129; // [rsp+38h] [rbp-80h]
  std::ios_base *v130; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v131; // [rsp+58h] [rbp-60h]
  __int64 v132[11]; // [rsp+60h] [rbp-58h] BYREF

  v3 = a1[3];
  if ( !v3 )
    return 1;
  v4 = *((unsigned int *)v3 - 1);
  if ( !(_DWORD)v4 )
    return 1;
  v6 = 24;
  v7 = (std::ios_base *)((char *)v3 + 8 * v4);
  v8 = (_QWORD *)a2;
  v9 = sub_186B270(0x18u);
  v10 = 1;
  v11 = (_QWORD *)(v9 + 8);
  *(v11 - 1) = 2;
  v12 = v11;
  while ( 1 )
  {
    v13 = *(_QWORD *)v3;
    v3 = (std::ios_base *)((char *)v3 + 8);
    *v11 = v13;
    *((_DWORD *)v12 - 1) = v10;
    if ( v3 == v7 )
      break;
    if ( *((_DWORD *)v12 - 2) == v10 )
    {
      v15 = (3 * v10 + 1) >> 1;
      a2 = 8 * v15 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)a2 || v10 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v132, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v132);
        sub_233E40((__int64)v132);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v6 = (__int64)(v12 - 1);
      v16 = (unsigned int *)sub_186B300(v12 - 1, a2);
      v12 = v16 + 2;
      *v16 = v15;
      v17 = v16[1];
      v18 = v17;
      v11 = &v12[v17];
      v10 = v18 + 1;
    }
    else
    {
      v14 = v10++;
      v11 = &v12[v14];
    }
  }
  v131 = nullptr;
  v130 = a1[1];
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_12;
    if ( (unsigned int)sub_180B130(v6) > 0xB )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        sub_180B150(v6, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v26 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v26, ")\n");
      }
      else
      {
        sub_180B150(v6, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v27 = (unsigned int)(*((_DWORD *)v12 - 1) - 1);
    v28 = a1[1];
    v29 = v12[v27];
    *((_DWORD *)v12 - 1) = v27;
    v129 = (__int64)v28;
    v128 = v29;
    v30 = sub_15EC2C0(v28, v29);
    v31 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v32 = (_QWORD *)v8[1];
    v33 = *((_DWORD *)v12 - 1);
    if ( v32 )
    {
      v127 = *((_DWORD *)v32 - 1);
      if ( v33 )
      {
        v34 = *v12;
        if ( *v12 )
          ++*(_DWORD *)(v34 + 8);
        v35 = 0;
        goto LABEL_34;
      }
      v44 = a1[5];
      v38 = *((_DWORD *)v32 - 1);
      if ( !v44 )
      {
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        v38 = v127;
        goto LABEL_53;
      }
    }
    else if ( v33 )
    {
      v34 = *v12;
      if ( *v12 )
        ++*(_DWORD *)(v34 + 8);
      v116 = v33;
      v92 = (_QWORD *)sub_186B270(0x18u);
      v32 = v92 + 1;
      v33 = v116;
      v127 = 0;
      v8[1] = v92 + 1;
      v38 = 1;
      *v92 = 2;
      v39 = v92 + 1;
      v35 = 0;
LABEL_36:
      ++v35;
      *v39 = v34;
      *((_DWORD *)v32 - 1) = v38;
      if ( (unsigned int)v35 < v33 )
      {
        do
        {
          v34 = v12[v35];
          if ( v34 )
          {
            ++*(_DWORD *)(v34 + 8);
            v36 = *((_DWORD *)v32 - 1);
            if ( v36 != *((_DWORD *)v32 - 2) )
            {
LABEL_35:
              v37 = v36;
              v38 = v36 + 1;
              v39 = &v32[v37];
              goto LABEL_36;
            }
          }
          else
          {
LABEL_34:
            v36 = *((_DWORD *)v32 - 1);
            if ( v36 != *((_DWORD *)v32 - 2) )
              goto LABEL_35;
          }
          v40 = (3 * v36 + 1) >> 1;
          v41 = 8 * v40 + 8;
          if ( 8 * v36 + 8 >= (unsigned int)v41 || v36 >= v40 )
          {
            v111 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v132, "Overflow encountered when expanding vector");
            *v111 = (char *)off_1C63128;
            sub_2333C0(v111 + 1, v132);
            sub_233E40((__int64)v132);
            __cxa_throw(v111, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v124 = v33;
          v119 = v35;
          v42 = (unsigned int *)sub_186B300(v32 - 1, v41);
          v32 = v42 + 2;
          v33 = v124;
          v8[1] = v42 + 2;
          *v42 = (3 * v36 + 1) >> 1;
          v43 = v42[1];
          v35 = v119 + 1;
          v38 = v43 + 1;
          v32[v43] = v34;
          *((_DWORD *)v32 - 1) = v43 + 1;
        }
        while ( (int)v119 + 1 < v124 );
      }
      v44 = a1[5];
      if ( !v44 )
      {
LABEL_51:
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        goto LABEL_53;
      }
    }
    else
    {
      v44 = a1[5];
      v127 = 0;
      v38 = 0;
      if ( !v44 )
      {
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        v127 = 0;
        v38 = 0;
LABEL_127:
        v91 = (_QWORD *)sub_186B270(0x18u);
        v32 = v91 + 1;
        a2 = 1;
        v8[1] = v91 + 1;
        *v91 = 2;
        v52 = v91 + 1;
        goto LABEL_55;
      }
    }
    v45 = 0;
    while ( v45 < *((_DWORD *)v44 - 1) )
    {
      v46 = *((_QWORD *)v44 + v45);
      if ( v46 )
        ++*(_DWORD *)(v46 + 8);
      if ( v32 )
      {
        v47 = *((_DWORD *)v32 - 1);
        if ( v47 == *((_DWORD *)v32 - 2) )
        {
          v77 = (3 * v47 + 1) >> 1;
          v78 = 8 * v77 + 8;
          if ( 8 * v47 + 8 >= (unsigned int)v78 || v47 >= v77 )
          {
            v109 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v132, "Overflow encountered when expanding vector");
            *v109 = (char *)off_1C63128;
            sub_2333C0(v109 + 1, v132);
            sub_233E40((__int64)v132);
            __cxa_throw(v109, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v121 = (3 * v47 + 1) >> 1;
          v114 = v45;
          v79 = (unsigned int *)sub_186B300(v32 - 1, v78);
          v80 = v79[1];
          v32 = v79 + 2;
          v8[1] = v79 + 2;
          v45 = v114;
          *v79 = v121;
          LODWORD(v79) = v80;
          v50 = &v32[v80];
          v44 = a1[5];
          v49 = (_DWORD)v79 + 1;
        }
        else
        {
          v48 = v47;
          v49 = v47 + 1;
          v50 = &v32[v48];
        }
      }
      else
      {
        v115 = v45;
        v90 = (_QWORD *)sub_186B270(0x18u);
        v32 = v90 + 1;
        v8[1] = v90 + 1;
        v50 = v90 + 1;
        v44 = a1[5];
        *v90 = 2;
        v45 = v115;
        v49 = 1;
      }
      *v50 = v46;
      ++v45;
      *((_DWORD *)v32 - 1) = v49;
      if ( !v44 )
        goto LABEL_51;
    }
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    if ( !v32 )
      goto LABEL_127;
LABEL_53:
    v51 = *((_DWORD *)v32 - 1);
    if ( v51 == *((_DWORD *)v32 - 2) )
    {
      v86 = (3 * v51 + 1) >> 1;
      v87 = 8 * v86 + 8;
      if ( 8 * v51 + 8 >= (unsigned int)v87 || v51 >= v86 )
      {
        v106 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v132, "Overflow encountered when expanding vector");
        *v106 = (char *)off_1C63128;
        sub_2333C0(v106 + 1, v132);
        sub_233E40((__int64)v132);
        __cxa_throw(v106, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v88 = (unsigned int *)sub_186B300(v32 - 1, v87);
      v89 = v88[1];
      v32 = v88 + 2;
      *v88 = v86;
      v8[1] = v88 + 2;
      LODWORD(v88) = v89;
      v52 = &v32[v89];
      a2 = (unsigned int)((_DWORD)v88 + 1);
    }
    else
    {
      a2 = v51 + 1;
      v52 = &v32[v51];
    }
LABEL_55:
    *v52 = v31;
    v53 = *a1;
    *((_DWORD *)v32 - 1) = a2;
    v54 = sub_E60CB0(v53, a2, (int)v32);
    v55 = (_QWORD *)v8[1];
    v112 = v54;
    if ( !v55 )
      goto LABEL_64;
    v56 = &v55[v38];
    if ( v56 >= &v55[*((unsigned int *)v55 - 1)] )
      goto LABEL_170;
    v120 = v38;
    v57 = v8;
    v58 = v38;
    v125 = v12;
    v59 = v57;
    v60 = (unsigned __int64)&v55[*((unsigned int *)v55 - 1)];
    do
    {
      while ( 1 )
      {
        a2 = *v56;
        if ( *v56 )
        {
          v61 = *v59;
          v24 = (*(_DWORD *)(a2 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( (unsigned __int64)++v56 >= v60 )
          goto LABEL_62;
      }
      sub_15D7BC0(v61, a2);
      ++v56;
    }
    while ( (unsigned __int64)v56 < v60 );
LABEL_62:
    v62 = v59;
    v38 = v58;
    v12 = v125;
    v8 = v62;
    v55 = (_QWORD *)v62[1];
    v56 = &v55[v120];
    if ( v55 )
    {
LABEL_170:
      *((_DWORD *)v55 - 1) = v38;
      v81 = &v55[v127];
      if ( v81 >= v56 )
        break;
      do
      {
        while ( 1 )
        {
          a2 = *v81;
          if ( *v81 )
          {
            v82 = *v8;
            v24 = (*(_DWORD *)(a2 + 8))-- == 1;
            if ( v24 )
              break;
          }
          if ( ++v81 >= v56 )
            goto LABEL_103;
        }
        sub_15D7BC0(v82, a2);
        ++v81;
      }
      while ( v81 < v56 );
LABEL_103:
      v55 = (_QWORD *)v8[1];
      if ( v55 )
        break;
    }
    v54 = v112;
LABEL_64:
    if ( !v54 )
      goto LABEL_118;
    if ( v54 == 1 )
    {
      if ( v128 )
        ++*(_DWORD *)(v128 + 8);
      v101 = (_QWORD *)sub_186B270(0x18u);
      v55 = v101 + 1;
      *v101 = 2;
      v84 = v55;
      v85 = 1;
      v8[1] = v55;
LABEL_110:
      *v84 = v128;
      v6 = (__int64)a1;
      *((_DWORD *)v55 - 1) = v85;
      sub_E20C60((__int64)a1);
      goto LABEL_111;
    }
LABEL_66:
    v63 = v131;
    if ( v131 )
    {
      v64 = (unsigned __int64)&v131[*((unsigned int *)v131 - 1)];
      if ( (unsigned __int64)v131 >= v64 )
        goto LABEL_74;
      do
      {
        while ( 1 )
        {
          v65 = *v63;
          if ( *v63 )
          {
            v66 = v130;
            v24 = (*(_DWORD *)(v65 + 8))-- == 1;
            if ( v24 )
              break;
          }
          if ( (unsigned __int64)++v63 >= v64 )
            goto LABEL_73;
        }
        v113 = v64;
        sub_15D7BC0(v66, v65);
        v64 = v113;
        ++v63;
      }
      while ( (unsigned __int64)v63 < v113 );
LABEL_73:
      v63 = v131;
      if ( v131 )
LABEL_74:
        *((_DWORD *)v63 - 1) = 0;
    }
    v6 = (__int64)*a1;
    a2 = (size_t)&v130;
    (*(void (__fastcall **)(std::ios_base *, std::ios_base **))(*(_QWORD *)*a1 + 24LL))(*a1, &v130);
    v67 = v131;
    if ( !v131 )
    {
      *((_DWORD *)v12 - 1) = 0;
      if ( !v31 )
        goto LABEL_92;
LABEL_153:
      v24 = (*(_DWORD *)(v31 + 8))-- == 1;
      if ( v24 )
      {
        v6 = v129;
        a2 = v31;
        sub_15D7BC0(v129, v31);
      }
      goto LABEL_92;
    }
    v68 = *((unsigned int *)v131 - 1);
    if ( !(_DWORD)v68 )
    {
LABEL_80:
      *((_DWORD *)v12 - 1) = 0;
      v71 = &v67[*((unsigned int *)v67 - 1)];
      if ( v67 == v71 )
      {
        if ( !v31 )
          goto LABEL_92;
        goto LABEL_153;
      }
      v72 = (_QWORD *)v8[1];
      while ( 2 )
      {
        v73 = *v67;
        if ( !v72 || (v74 = *((unsigned int *)v72 - 1), !(_DWORD)v74) )
        {
LABEL_135:
          if ( !v12 )
          {
            v6 = 24;
            v123 = v71;
            v118 = v67;
            v105 = (_QWORD *)sub_186B270(0x18u);
            v67 = v118;
            v12 = v105 + 1;
            v71 = v123;
            *v105 = 2;
            v100 = v105 + 1;
            v99 = 1;
            goto LABEL_138;
          }
          while ( 1 )
          {
            v97 = *((_DWORD *)v12 - 1);
            if ( v97 == *((_DWORD *)v12 - 2) )
            {
              v102 = (3 * v97 + 1) >> 1;
              v103 = 8 * v102 + 8;
              if ( 8 * v97 + 8 >= v103 || v97 >= v102 )
              {
                v107 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v132, "Overflow encountered when expanding vector");
                *v107 = (char *)off_1C63128;
                sub_2333C0(v107 + 1, v132);
                sub_233E40((__int64)v132);
                __cxa_throw(v107, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              a2 = v103;
              v6 = (__int64)(v12 - 1);
              v126 = (3 * v97 + 1) >> 1;
              v122 = v71;
              v117 = v67;
              v104 = (unsigned int *)sub_186B300(v12 - 1, v103);
              v12 = v104 + 2;
              v67 = v117;
              v71 = v122;
              *v104 = v126;
              LODWORD(v104) = v104[1];
              v100 = &v12[(unsigned int)v104];
              v99 = (_DWORD)v104 + 1;
            }
            else
            {
              v98 = v97;
              v99 = v97 + 1;
              v100 = &v12[v98];
            }
LABEL_138:
            ++v67;
            *v100 = v73;
            *((_DWORD *)v12 - 1) = v99;
            if ( v71 == v67 )
              goto LABEL_88;
            v72 = (_QWORD *)v8[1];
            v73 = *v67;
            if ( v72 )
            {
              v74 = *((unsigned int *)v72 - 1);
              if ( (_DWORD)v74 )
                break;
            }
          }
        }
        v75 = v72;
        v76 = &v72[v74];
        while ( *v75 != v73 )
        {
          if ( v76 == ++v75 )
            goto LABEL_135;
        }
        if ( v71 == ++v67 )
        {
LABEL_88:
          if ( v31 )
          {
            v24 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v24 )
              goto LABEL_90;
          }
LABEL_91:
          if ( !v12 )
          {
LABEL_12:
            v19 = v131;
            v20 = 1;
            if ( v131 )
              goto LABEL_13;
            goto LABEL_21;
          }
          goto LABEL_92;
        }
        continue;
      }
    }
    v69 = v131;
    v70 = &v131[v68];
    while ( v31 != *v69 )
    {
      if ( ++v69 == v70 )
        goto LABEL_80;
    }
LABEL_111:
    if ( v31 )
    {
      v24 = (*(_DWORD *)(v31 + 8))-- == 1;
      if ( v24 )
      {
LABEL_90:
        v6 = v129;
        a2 = v31;
        sub_15D7BC0(v129, v31);
        goto LABEL_91;
      }
    }
LABEL_92:
    v10 = *((_DWORD *)v12 - 1);
  }
  *((_DWORD *)v55 - 1) = v127;
  if ( v112 )
  {
    if ( v112 == 1 )
    {
      if ( v128 )
        ++*(_DWORD *)(v128 + 8);
      v83 = *((_DWORD *)v55 - 2);
      if ( *((_DWORD *)v55 - 1) == v83 )
      {
        v93 = (3 * v83 + 1) >> 1;
        v94 = 8 * v93 + 8;
        if ( 8 * v83 + 8 >= v94 || v83 >= v93 )
        {
          v108 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v132, "Overflow encountered when expanding vector");
          *v108 = (char *)off_1C63128;
          sub_2333C0(v108 + 1, v132);
          sub_233E40((__int64)v132);
          __cxa_throw(v108, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        a2 = v94;
        v95 = (unsigned int *)sub_186B300(v55 - 1, v94);
        v96 = v95[1];
        v55 = v95 + 2;
        *v95 = v93;
        v8[1] = v95 + 2;
        LODWORD(v95) = v96;
        v84 = &v55[v96];
        v85 = (_DWORD)v95 + 1;
      }
      else
      {
        v84 = &v55[*((unsigned int *)v55 - 1)];
        v85 = *((_DWORD *)v55 - 1) + 1;
      }
      goto LABEL_110;
    }
    goto LABEL_66;
  }
LABEL_118:
  if ( v31 )
  {
    v24 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v129, v31);
  }
  v19 = v131;
  v20 = 0;
  if ( !v131 )
  {
LABEL_22:
    sub_186B220(v12 - 1);
    return v20;
  }
LABEL_13:
  v21 = &v19[*((unsigned int *)v19 - 1)];
  if ( v19 >= v21 )
    goto LABEL_20;
  do
  {
    while ( 1 )
    {
      v22 = *v19;
      if ( *v19 )
      {
        v23 = v130;
        v24 = (*(_DWORD *)(v22 + 8))-- == 1;
        if ( v24 )
          break;
      }
      if ( ++v19 >= v21 )
        goto LABEL_19;
    }
    sub_15D7BC0(v23, v22);
    ++v19;
  }
  while ( v19 < v21 );
LABEL_19:
  v19 = v131;
  if ( v131 )
LABEL_20:
    sub_186B220(v19 - 1);
LABEL_21:
  if ( v12 )
    goto LABEL_22;
  return v20;
}

