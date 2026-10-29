__int64 __fastcall sub_766DC0(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // ebp
  __int64 v8; // rsi
  int v9; // edx
  __int64 result; // rax
  unsigned int v11; // eax
  _DWORD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // ecx
  __int64 v28; // rdi
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rbp
  _QWORD *v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rsi
  int v37; // edx
  _QWORD *v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  unsigned int v41; // r14d
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rbp
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdi
  _QWORD *v52; // rdx
  unsigned int v53; // r15d
  unsigned __int64 v54; // r14
  __int64 *v55; // rbp
  __int64 v56; // rsi
  __int64 v57; // rdi
  _QWORD *v58; // rcx
  int v59; // eax
  int v60; // ecx
  __int64 v61; // rsi
  __int64 v62; // rdi
  _QWORD *v63; // rax
  unsigned int v64; // r14d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // r14d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rax
  int v72; // edx
  __int64 v73; // rdx
  __int64 v74; // r14
  int v75; // ebp
  __int64 v76; // rax
  unsigned int v77; // ebp
  int v78; // r15d
  int v79; // r8d
  int v80; // r9d
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rax
  unsigned int v86; // r14d
  unsigned __int64 v87; // r15
  __int64 *v88; // rbp
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rax
  unsigned int v92; // r14d
  unsigned __int64 v93; // r15
  __int64 *v94; // rbp
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rax
  int v98; // ecx
  __int64 v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // rcx
  int v102; // esi
  __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rdi
  _QWORD *v106; // rax
  unsigned __int8 v107; // al
  __int64 v108; // rax
  int v109; // edx
  __int64 v110; // r15
  __int64 v111; // rsi
  __int64 v112; // rdi
  int v113; // edx
  __int64 v114; // rdi
  __int64 v115; // rcx
  __int64 v116; // rsi
  int v117; // ecx
  int v118; // r15d
  int v119; // edx
  __int64 v120; // rsi
  __int64 v121; // rax
  __int64 v122; // rdx
  char **v123; // rbx
  char **exception; // r12
  int v125; // [rsp+0h] [rbp-78h]
  int v126; // [rsp+8h] [rbp-70h]
  __int64 v127; // [rsp+8h] [rbp-70h]
  __int64 v128; // [rsp+8h] [rbp-70h]
  __int64 v129; // [rsp+10h] [rbp-68h] BYREF
  __int64 v130; // [rsp+18h] [rbp-60h]
  __int64 v131; // [rsp+20h] [rbp-58h] BYREF
  char v132; // [rsp+28h] [rbp-50h]
  int v133; // [rsp+30h] [rbp-48h]
  int v134; // [rsp+38h] [rbp-40h]
  int v135; // [rsp+40h] [rbp-38h]
  void *v136; // [rsp+48h] [rbp-30h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v40 = *(_QWORD *)(a1 + 8);
    v41 = *(_DWORD *)(a2 + 24);
    v129 = 0;
    v130 = v40;
    v42 = *(_QWORD *)(a1 + 160);
    if ( v42 )
      *(_DWORD *)(v42 - 4) -= v41;
    v43 = *(_QWORD *)(a1 + 528);
    if ( v43 )
      *(_DWORD *)(v43 - 4) -= v41;
    *(_DWORD *)(a1 + 128) -= v41;
    sub_15844D0(a1);
    v44 = 0x7FFFFFFF8LL;
    v45 = *(_QWORD *)(a1 + 56);
    if ( v45 )
      v44 = 8LL * (unsigned int)(*(_DWORD *)(v45 - 4) - 1);
    v46 = *(_QWORD *)(v45 + v44);
    if ( v46 )
      ++*(_DWORD *)(v46 + 8);
    v47 = *(_QWORD *)(a1 + 480);
    if ( v47 )
    {
      v48 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v47 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v48, v47);
    }
    v21 = *(_WORD *)(v46 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v46;
    if ( v21 && (*(_BYTE *)(v46 + 30) & 1) != 0 )
    {
      v52 = *(_QWORD **)(a1 + 56);
      if ( !v52 )
      {
LABEL_83:
        ++*(_DWORD *)(v46 + 8);
LABEL_84:
        v63 = (_QWORD *)sub_186B270(0x18u);
        v52 = v63 + 1;
        *v63 = 2;
        v59 = 1;
        *(_QWORD *)(a1 + 56) = v52;
        v58 = v52;
LABEL_74:
        *v58 = v46;
        *((_DWORD *)v52 - 1) = v59;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        result = *(_QWORD *)(a1 + 40);
        v60 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v60 - 1;
        if ( v60 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v60 - 2) + 8) |= 2u;
        v61 = v129;
        if ( v129 )
        {
          v62 = v130;
          v21 = (*(_DWORD *)(v129 + 8))-- == 1;
          if ( v21 )
            return sub_15D7BC0(v62, v61);
        }
        return result;
      }
    }
    else
    {
      sub_1585DF0(a1 + 328, v46, v41, &v129);
      v50 = v129;
      v129 = *(_QWORD *)(a1 + 480);
      v49 = v129;
      *(_QWORD *)(a1 + 480) = v50;
      if ( v49 )
      {
        v51 = v130;
        v21 = (*(_DWORD *)(v49 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v51, v49);
      }
      v129 = 0;
      v52 = *(_QWORD **)(a1 + 56);
      if ( !v52 )
        goto LABEL_107;
    }
    v53 = *(_DWORD *)(a3 + 12);
    v54 = (unsigned __int64)&v52[*((unsigned int *)v52 - 1)];
    v55 = &v52[v53];
    if ( (unsigned __int64)v55 >= v54 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v56 = *v55;
        if ( *v55 )
        {
          v57 = *(_QWORD *)(a1 + 48);
          v21 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( (unsigned __int64)++v55 >= v54 )
          goto LABEL_69;
      }
      sub_15D7BC0(v57, v56);
      ++v55;
    }
    while ( (unsigned __int64)v55 < v54 );
LABEL_69:
    v52 = *(_QWORD **)(a1 + 56);
    if ( v52 )
    {
LABEL_70:
      v46 = *(_QWORD *)(a1 + 480);
      *((_DWORD *)v52 - 1) = v53;
      if ( v46 )
      {
        ++*(_DWORD *)(v46 + 8);
        v53 = *((_DWORD *)v52 - 1);
      }
      if ( *((_DWORD *)v52 - 2) == v53 )
      {
        v64 = (3 * v53 + 1) >> 1;
        v65 = 8 * v64 + 8;
        if ( 8 * v53 + 8 >= (unsigned int)v65 || v53 >= v64 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_75C2B0(&v131, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v131);
          sub_233E40((__int64)&v131);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v66 = (unsigned int *)sub_186B300(v52 - 1, v65);
        v67 = v66[1];
        v52 = v66 + 2;
        *v66 = v64;
        *(_QWORD *)(a1 + 56) = v66 + 2;
        LODWORD(v66) = v67;
        v58 = &v52[v67];
        v59 = (_DWORD)v66 + 1;
      }
      else
      {
        v58 = &v52[*((unsigned int *)v52 - 1)];
        v59 = *((_DWORD *)v52 - 1) + 1;
      }
      goto LABEL_74;
    }
LABEL_107:
    v46 = *(_QWORD *)(a1 + 480);
    if ( !v46 )
      goto LABEL_84;
    goto LABEL_83;
  }
  if ( v6 == 3 )
  {
    sub_1872CE0("");
    sub_1873130(107, 520);
  }
  if ( v6 )
  {
    v22 = 0xFFFFFFFFLL;
    v23 = *(_QWORD **)(a1 + 56);
    if ( v23 )
      v22 = (unsigned int)(*((_DWORD *)v23 - 1) - 1);
    v24 = v23[v22];
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v25 = *(_QWORD *)(a1 + 480);
    if ( v25 )
    {
      v26 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v26, v25);
        v23 = *(_QWORD **)(a1 + 56);
      }
    }
    v27 = *((_DWORD *)v23 - 1);
    v28 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v24;
    v29 = v27 - 1;
    v30 = v23[v27 - 1];
    *((_DWORD *)v23 - 1) = v27 - 1;
    if ( v30 )
    {
      v21 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v28, v30);
        v23 = *(_QWORD **)(a1 + 56);
        v28 = *(_QWORD *)(a1 + 48);
      }
      v29 = *((_DWORD *)v23 - 1);
    }
    v31 = (unsigned int)(v29 - 1);
    v32 = v23[v31];
    *((_DWORD *)v23 - 1) = v31;
    if ( v32 && (v21 = *(_DWORD *)(v32 + 8) == 1, --*(_DWORD *)(v32 + 8), v21) )
    {
      sub_15D7BC0(v28, v32);
      v33 = *(_QWORD *)(a1 + 480);
      v23 = *(_QWORD **)(a1 + 56);
      if ( !v33 )
      {
LABEL_39:
        v34 = v23;
        if ( !v23 )
        {
          v106 = (_QWORD *)sub_186B270(0x18u);
          v37 = 1;
          v34 = v106 + 1;
          *v106 = 2;
          *(_QWORD *)(a1 + 56) = v106 + 1;
          v38 = v106 + 1;
LABEL_42:
          *v38 = v33;
          *((_DWORD *)v34 - 1) = v37;
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          result = *(_QWORD *)(a1 + 40);
          v39 = *(_DWORD *)(result - 4);
          *(_DWORD *)(result - 4) = v39 - 1;
          if ( v39 != 1 )
            *(_BYTE *)(result + 16LL * (unsigned int)(v39 - 2) + 8) |= 2u;
          return result;
        }
LABEL_40:
        v35 = *((_DWORD *)v23 - 1);
        if ( v35 == *((_DWORD *)v23 - 2) )
        {
          v68 = (3 * v35 + 1) >> 1;
          v69 = 8 * v68 + 8;
          if ( 8 * v35 + 8 >= (unsigned int)v69 || v35 >= v68 )
          {
            v123 = (char **)__cxa_allocate_exception(0x28u);
            sub_75C2B0(&v131, "Overflow encountered when expanding vector");
            *v123 = (char *)off_1C63128;
            sub_2333C0(v123 + 1, &v131);
            sub_233E40((__int64)&v131);
            __cxa_throw(v123, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v70 = (unsigned int *)sub_186B300(v23 - 1, v69);
          v34 = v70 + 2;
          *v70 = v68;
          v71 = v70[1];
          *(_QWORD *)(a1 + 56) = v34;
          v72 = v71;
          v38 = &v34[v71];
          v37 = v72 + 1;
        }
        else
        {
          v36 = v35;
          v37 = v35 + 1;
          v38 = &v23[v36];
        }
        goto LABEL_42;
      }
    }
    else
    {
      v33 = *(_QWORD *)(a1 + 480);
      v34 = v23;
      if ( !v33 )
        goto LABEL_40;
    }
    ++*(_DWORD *)(v33 + 8);
    goto LABEL_39;
  }
  v7 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v11 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v11 >= v7 )
      break;
    if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFC0) != 0x40 )
      goto LABEL_5;
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v12 || *v12 || v12[1] != 4 )
      goto LABEL_5;
    v13 = *(_QWORD *)(a1 + 56);
    v14 = *(unsigned int *)(a3 + 12);
    v15 = (__int64 *)(v13 + 8 * v14);
    v16 = *(_QWORD *)(a1 + 8);
    if ( *v15 == *(_QWORD *)(v16 + 856) )
    {
      v17 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      if ( *v15 != *(_QWORD *)(v16 + 864) )
        goto LABEL_5;
      v17 = *(_QWORD *)(a2 + 48);
    }
    if ( v17 )
    {
      if ( v13 )
      {
        v18 = v13 + 8LL * *(unsigned int *)(v13 - 4);
        if ( (unsigned __int64)v15 >= v18 )
          goto LABEL_152;
        do
        {
          v19 = *v15;
          if ( *v15 )
          {
            v20 = *(_QWORD *)(a1 + 48);
            v21 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( v21 )
            {
              v127 = v17;
              sub_15D7BC0(v20, v19);
              v17 = v127;
            }
          }
          ++v15;
        }
        while ( (unsigned __int64)v15 < v18 );
        v13 = *(_QWORD *)(a1 + 56);
        if ( v13 )
LABEL_152:
          *(_DWORD *)(v13 - 4) = v14;
      }
      v131 = v17;
      ++*(_DWORD *)(v17 + 8);
      v128 = v17;
      sub_75C790((_QWORD *)(a1 + 56), &v131);
      v107 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      *(_BYTE *)(a3 + 8) = v107;
      result = sub_7667D0((_QWORD *)a1, v128, (v107 >> 4) & 3);
      if ( (_BYTE)result )
      {
        v108 = *(_QWORD *)(a1 + 56);
        if ( v108 )
          v109 = *(_DWORD *)(v108 - 4);
        else
          v109 = 0;
        v110 = *(_QWORD *)(v108 + 8LL * (unsigned int)(v109 - 1));
        if ( v110 )
          ++*(_DWORD *)(v110 + 8);
        v111 = *(_QWORD *)(a1 + 480);
        if ( v111 )
        {
          v112 = *(_QWORD *)(a1 + 488);
          v21 = (*(_DWORD *)(v111 + 8))-- == 1;
          if ( v21 )
          {
            sub_15D7BC0(v112, v111);
            v108 = *(_QWORD *)(a1 + 56);
          }
        }
        v113 = *(_DWORD *)(v108 - 4);
        v114 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 480) = v110;
        v115 = (unsigned int)(v113 - 1);
        v116 = *(_QWORD *)(v108 + 8 * v115);
        *(_DWORD *)(v108 - 4) = v115;
        if ( v116
          && (v117 = *(_DWORD *)(v116 + 8), v118 = v117 - 1, *(_DWORD *)(v116 + 8) = v117 - 1, v117 == 1)
          && (sub_15D7BC0(v114, v116), v108 = *(_QWORD *)(a1 + 56), v114 = *(_QWORD *)(a1 + 48), !v108) )
        {
          v119 = MEMORY[0xFFFFFFFFFFFFFFFC];
        }
        else
        {
          v118 = *(_DWORD *)(v108 - 4);
          v119 = v118;
        }
        v120 = *(_QWORD *)(v108 + 8LL * (unsigned int)(v118 - 1));
        *(_DWORD *)(v108 - 4) = v119 - 1;
        if ( v120 )
        {
          v21 = (*(_DWORD *)(v120 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v114, v120);
        }
        v121 = *(_QWORD *)(a1 + 480);
        v131 = v121;
        if ( v121 )
          ++*(_DWORD *)(v121 + 8);
        sub_75C790((_QWORD *)(a1 + 56), &v131);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v122 = *(_QWORD *)(a1 + 40);
        result = *(unsigned int *)(v122 - 4);
        *(_DWORD *)(v122 - 4) = result - 1;
        if ( (_DWORD)result != 1 )
        {
          result = 16LL * (unsigned int)(result - 2);
          *(_BYTE *)(v122 + result + 8) |= 2u;
        }
      }
LABEL_126:
      v99 = *(_QWORD *)(a1 + 480);
      if ( v99 )
      {
        v100 = *(_QWORD *)(a1 + 488);
        v21 = (*(_DWORD *)(v99 + 8))-- == 1;
        if ( v21 )
          result = sub_15D7BC0(v100, v99);
      }
      goto LABEL_129;
    }
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_7667D0((_QWORD *)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v73 = *(_QWORD *)(a1 + 56);
  v74 = *(_QWORD *)(a2 + 16);
  if ( v73 )
    v75 = *(_DWORD *)(v73 - 4);
  else
    v75 = 0;
  v76 = *(unsigned int *)(a3 + 12);
  v77 = v75 - v76;
  v78 = v73 + 8 * v76;
  if ( (unsigned int)sub_762950(*(_QWORD *)(a1 + 144), *(_QWORD *)(a2 + 16), v77, v73 + 8 * v76, a1 + 480, a1 + 512) != 5 )
  {
    v91 = *(_QWORD *)(a1 + 56);
    if ( v91 )
    {
      v92 = *(_DWORD *)(a3 + 12);
      v93 = v91 + 8LL * *(unsigned int *)(v91 - 4);
      v94 = (__int64 *)(v91 + 8LL * v92);
      if ( (unsigned __int64)v94 >= v93 )
        goto LABEL_119;
      do
      {
        v95 = *v94;
        if ( *v94 )
        {
          v96 = *(_QWORD *)(a1 + 48);
          v21 = (*(_DWORD *)(v95 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v96, v95);
        }
        ++v94;
      }
      while ( (unsigned __int64)v94 < v93 );
      v91 = *(_QWORD *)(a1 + 56);
      if ( v91 )
LABEL_119:
        *(_DWORD *)(v91 - 4) = v92;
    }
    v97 = *(_QWORD *)(a1 + 480);
    v131 = v97;
    if ( v97 )
      ++*(_DWORD *)(v97 + 8);
    sub_75C790((_QWORD *)(a1 + 56), &v131);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    result = *(_QWORD *)(a1 + 40);
    v98 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v98 - 1;
    if ( v98 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v98 - 2) + 8) |= 2u;
    goto LABEL_126;
  }
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v81 = sub_15DC610(
            *(_QWORD *)(a1 + 8),
            v74,
            v77,
            v78,
            v79,
            v80,
            v125,
            v126,
            v129,
            v130,
            v131,
            v132,
            v133,
            v134,
            v135,
            v136);
    v82 = v81;
    if ( v81 )
      ++*(_DWORD *)(v81 + 8);
    v83 = *(_QWORD *)(a1 + 480);
    if ( v83 )
    {
      v84 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v83 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v84, v83);
    }
    v85 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 480) = v82;
    if ( v85 )
      goto LABEL_101;
LABEL_133:
    v131 = v82;
    if ( v82 )
      goto LABEL_134;
  }
  else
  {
    v104 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(a2 + 8);
    if ( v104 )
    {
      v105 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v104 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v105, v104);
    }
    v85 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 480) = a2;
    if ( v85 )
    {
LABEL_101:
      v86 = *(_DWORD *)(a3 + 12);
      v87 = v85 + 8LL * *(unsigned int *)(v85 - 4);
      v88 = (__int64 *)(v85 + 8LL * v86);
      if ( (unsigned __int64)v88 >= v87 )
        goto LABEL_131;
      do
      {
        v89 = *v88;
        if ( *v88 )
        {
          v90 = *(_QWORD *)(a1 + 48);
          v21 = (*(_DWORD *)(v89 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v90, v89);
        }
        ++v88;
      }
      while ( (unsigned __int64)v88 < v87 );
      v85 = *(_QWORD *)(a1 + 56);
      if ( v85 )
LABEL_131:
        *(_DWORD *)(v85 - 4) = v86;
      v82 = *(_QWORD *)(a1 + 480);
      goto LABEL_133;
    }
    v131 = a2;
    v82 = a2;
LABEL_134:
    ++*(_DWORD *)(v82 + 8);
  }
  sub_75C790((_QWORD *)(a1 + 56), &v131);
  v101 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, v101);
    v101 = *(_QWORD *)(a1 + 480);
  }
  result = *(_QWORD *)(a1 + 40);
  v102 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v102 - 1;
  if ( a2 != v101 && v102 != 1 )
  {
    *(_BYTE *)(result + 16LL * (unsigned int)(v102 - 2) + 8) |= 2u;
    v101 = *(_QWORD *)(a1 + 480);
  }
  if ( v101 )
  {
    v103 = *(_QWORD *)(a1 + 488);
    v21 = (*(_DWORD *)(v101 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v103, v101);
  }
LABEL_129:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

