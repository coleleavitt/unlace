__int64 __fastcall sub_444C10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char **v6; // rbp
  char **exception; // rbp
  char v11; // al
  unsigned int v12; // ebp
  unsigned __int64 v13; // rsi
  int v14; // edx
  __int64 result; // rax
  unsigned int v16; // eax
  _DWORD *v17; // rdx
  unsigned __int64 *v18; // rdx
  __int64 v19; // r15
  unsigned __int64 *v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // rdi
  int v32; // ecx
  __int64 v33; // rdi
  int v34; // edx
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rbp
  _QWORD *v39; // rcx
  unsigned int v40; // edx
  __int64 v41; // rsi
  int v42; // edx
  _QWORD *v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  unsigned int v46; // r14d
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rbp
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdi
  _QWORD *v57; // rdx
  unsigned int v58; // r15d
  unsigned __int64 v59; // r14
  __int64 *v60; // rbp
  __int64 v61; // rsi
  __int64 v62; // rdi
  _QWORD *v63; // rcx
  int v64; // eax
  int v65; // ecx
  __int64 v66; // rsi
  __int64 v67; // rdi
  _QWORD *v68; // rax
  unsigned int v69; // r14d
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rcx
  unsigned int v73; // r14d
  size_t v74; // rsi
  unsigned int *v75; // rax
  __int64 v76; // rax
  int v77; // edx
  _QWORD *v78; // rcx
  int v79; // edx
  unsigned int v80; // r8d
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // r15
  unsigned __int64 v84; // r14
  __int64 *v85; // rbp
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 *v91; // rdx
  int v92; // eax
  __int64 v93; // rcx
  int v94; // esi
  __int64 v95; // rdi
  unsigned int v96; // ebp
  unsigned int v97; // eax
  unsigned int *v98; // rax
  __int64 v99; // rdx
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  unsigned int v102; // eax
  __int64 v103; // rsi
  int v104; // eax
  unsigned __int64 *v105; // rsi
  unsigned __int8 v106; // al
  _QWORD *v107; // rax
  int v108; // edx
  __int64 v109; // rbp
  __int64 v110; // rsi
  __int64 v111; // rdi
  int v112; // edx
  __int64 v113; // rdi
  __int64 v114; // rcx
  __int64 v115; // rsi
  int v116; // ecx
  int v117; // ebp
  int v118; // edx
  __int64 v119; // rsi
  __int64 v120; // r14
  _QWORD *v121; // rdx
  unsigned int v122; // ecx
  int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // rsi
  __int64 v126; // rdi
  _QWORD *v127; // rax
  _QWORD *v128; // rdx
  unsigned int v129; // ebp
  size_t v130; // rsi
  unsigned int *v131; // rax
  __int64 v132; // rsi
  unsigned int v133; // ebp
  unsigned int v134; // edx
  unsigned int *v135; // rax
  _QWORD *v136; // rax
  int v137; // [rsp+0h] [rbp-88h]
  int v138; // [rsp+8h] [rbp-80h]
  unsigned __int64 v139; // [rsp+8h] [rbp-80h]
  unsigned int v140; // [rsp+8h] [rbp-80h]
  unsigned __int64 v141; // [rsp+8h] [rbp-80h]
  unsigned __int64 v142; // [rsp+8h] [rbp-80h]
  int v143; // [rsp+10h] [rbp-78h]
  int v144; // [rsp+18h] [rbp-70h]
  __int64 v145; // [rsp+20h] [rbp-68h] BYREF
  __int64 v146; // [rsp+28h] [rbp-60h]
  __int64 v147; // [rsp+30h] [rbp-58h] BYREF
  int v148; // [rsp+38h] [rbp-50h]
  int v149; // [rsp+40h] [rbp-48h]
  void *v150; // [rsp+48h] [rbp-40h]

  v11 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v11 == 2 )
  {
    v45 = *(_QWORD *)(a1 + 8);
    v46 = *(_DWORD *)(a2 + 24);
    v145 = 0;
    v146 = v45;
    v47 = *(_QWORD *)(a1 + 160);
    if ( v47 )
      *(_DWORD *)(v47 - 4) -= v46;
    v48 = *(_QWORD *)(a1 + 528);
    if ( v48 )
      *(_DWORD *)(v48 - 4) -= v46;
    *(_DWORD *)(a1 + 128) -= v46;
    sub_15844D0(a1);
    v49 = 0x7FFFFFFF8LL;
    v50 = *(_QWORD *)(a1 + 56);
    if ( v50 )
      v49 = 8LL * (unsigned int)(*(_DWORD *)(v50 - 4) - 1);
    v51 = *(_QWORD *)(v50 + v49);
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    v52 = *(_QWORD *)(a1 + 480);
    if ( v52 )
    {
      v53 = *(_QWORD *)(a1 + 488);
      v26 = (*(_DWORD *)(v52 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v53, v52);
    }
    v26 = *(_WORD *)(v51 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v51;
    if ( v26 && (*(_BYTE *)(v51 + 30) & 1) != 0 )
    {
      v57 = *(_QWORD **)(a1 + 56);
      if ( !v57 )
      {
LABEL_83:
        ++*(_DWORD *)(v51 + 8);
LABEL_84:
        v68 = (_QWORD *)sub_186B270(0x18u);
        v57 = v68 + 1;
        *v68 = 2;
        v64 = 1;
        *(_QWORD *)(a1 + 56) = v57;
        v63 = v57;
LABEL_74:
        *v63 = v51;
        *((_DWORD *)v57 - 1) = v64;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        result = *(_QWORD *)(a1 + 40);
        v65 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v65 - 1;
        if ( v65 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v65 - 2) + 8) |= 2u;
        v66 = v145;
        if ( v145 )
        {
          v67 = v146;
          v26 = (*(_DWORD *)(v145 + 8))-- == 1;
          if ( v26 )
            return sub_15D7BC0(v67, v66);
        }
        return result;
      }
    }
    else
    {
      sub_1585DF0(a1 + 328, v51, v46, &v145);
      v55 = v145;
      v145 = *(_QWORD *)(a1 + 480);
      v54 = v145;
      *(_QWORD *)(a1 + 480) = v55;
      if ( v54 )
      {
        v56 = v146;
        v26 = (*(_DWORD *)(v54 + 8))-- == 1;
        if ( v26 )
          sub_15D7BC0(v56, v54);
      }
      v145 = 0;
      v57 = *(_QWORD **)(a1 + 56);
      if ( !v57 )
        goto LABEL_105;
    }
    v58 = *(_DWORD *)(a3 + 12);
    v59 = (unsigned __int64)&v57[*((unsigned int *)v57 - 1)];
    v60 = &v57[v58];
    if ( (unsigned __int64)v60 >= v59 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v61 = *v60;
        if ( *v60 )
        {
          v62 = *(_QWORD *)(a1 + 48);
          v26 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( (unsigned __int64)++v60 >= v59 )
          goto LABEL_69;
      }
      sub_15D7BC0(v62, v61);
      ++v60;
    }
    while ( (unsigned __int64)v60 < v59 );
LABEL_69:
    v57 = *(_QWORD **)(a1 + 56);
    if ( v57 )
    {
LABEL_70:
      v51 = *(_QWORD *)(a1 + 480);
      *((_DWORD *)v57 - 1) = v58;
      if ( v51 )
      {
        ++*(_DWORD *)(v51 + 8);
        v58 = *((_DWORD *)v57 - 1);
      }
      if ( *((_DWORD *)v57 - 2) == v58 )
      {
        v69 = (3 * v58 + 1) >> 1;
        v70 = 8 * v69 + 8;
        if ( 8 * v58 + 8 >= (unsigned int)v70 || v58 >= v69 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v147, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v147);
          sub_233E40((__int64)&v147);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v71 = (unsigned int *)sub_186B300(v57 - 1, v70);
        v72 = v71[1];
        v57 = v71 + 2;
        *v71 = v69;
        *(_QWORD *)(a1 + 56) = v71 + 2;
        LODWORD(v71) = v72;
        v63 = &v57[v72];
        v64 = (_DWORD)v71 + 1;
      }
      else
      {
        v63 = &v57[*((unsigned int *)v57 - 1)];
        v64 = *((_DWORD *)v57 - 1) + 1;
      }
      goto LABEL_74;
    }
LABEL_105:
    v51 = *(_QWORD *)(a1 + 480);
    if ( !v51 )
      goto LABEL_84;
    goto LABEL_83;
  }
  if ( v11 == 3 )
  {
    sub_1872CE0("");
    sub_1873130(107, 520);
  }
  if ( v11 )
  {
    v27 = 0xFFFFFFFFLL;
    v28 = *(_QWORD **)(a1 + 56);
    if ( v28 )
      v27 = (unsigned int)(*((_DWORD *)v28 - 1) - 1);
    v29 = v28[v27];
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v30 = *(_QWORD *)(a1 + 480);
    if ( v30 )
    {
      v31 = *(_QWORD *)(a1 + 488);
      v26 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v26 )
      {
        sub_15D7BC0(v31, v30);
        v28 = *(_QWORD **)(a1 + 56);
      }
    }
    v32 = *((_DWORD *)v28 - 1);
    v33 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v29;
    v34 = v32 - 1;
    v35 = v28[v32 - 1];
    *((_DWORD *)v28 - 1) = v32 - 1;
    if ( v35 )
    {
      v26 = (*(_DWORD *)(v35 + 8))-- == 1;
      if ( v26 )
      {
        sub_15D7BC0(v33, v35);
        v28 = *(_QWORD **)(a1 + 56);
        v33 = *(_QWORD *)(a1 + 48);
      }
      v34 = *((_DWORD *)v28 - 1);
    }
    v36 = (unsigned int)(v34 - 1);
    v37 = v28[v36];
    *((_DWORD *)v28 - 1) = v36;
    if ( v37 && (v26 = *(_DWORD *)(v37 + 8) == 1, --*(_DWORD *)(v37 + 8), v26) )
    {
      sub_15D7BC0(v33, v37);
      v38 = *(_QWORD *)(a1 + 480);
      v28 = *(_QWORD **)(a1 + 56);
      if ( !v38 )
      {
LABEL_39:
        v39 = v28;
        if ( !v28 )
        {
          v100 = (_QWORD *)sub_186B270(0x18u);
          v42 = 1;
          v39 = v100 + 1;
          *v100 = 2;
          *(_QWORD *)(a1 + 56) = v100 + 1;
          v43 = v100 + 1;
LABEL_42:
          *v43 = v38;
          *((_DWORD *)v39 - 1) = v42;
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          result = *(_QWORD *)(a1 + 40);
          v44 = *(_DWORD *)(result - 4);
          *(_DWORD *)(result - 4) = v44 - 1;
          if ( v44 != 1 )
            *(_BYTE *)(result + 16LL * (unsigned int)(v44 - 2) + 8) |= 2u;
          return result;
        }
LABEL_40:
        v40 = *((_DWORD *)v28 - 1);
        if ( v40 == *((_DWORD *)v28 - 2) )
        {
          v73 = (3 * v40 + 1) >> 1;
          v74 = 8 * v73 + 8;
          if ( 8 * v40 + 8 >= (unsigned int)v74 || v40 >= v73 )
            goto LABEL_181;
          v75 = (unsigned int *)sub_186B300(v28 - 1, v74);
          v39 = v75 + 2;
          *v75 = v73;
          v76 = v75[1];
          *(_QWORD *)(a1 + 56) = v39;
          v77 = v76;
          v43 = &v39[v76];
          v42 = v77 + 1;
        }
        else
        {
          v41 = v40;
          v42 = v40 + 1;
          v43 = &v28[v41];
        }
        goto LABEL_42;
      }
    }
    else
    {
      v38 = *(_QWORD *)(a1 + 480);
      v39 = v28;
      if ( !v38 )
        goto LABEL_40;
    }
    ++*(_DWORD *)(v38 + 8);
    goto LABEL_39;
  }
  v12 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v16 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v16 >= v12 )
    {
      v78 = *(_QWORD **)(a1 + 56);
      if ( v78 )
        v79 = *((_DWORD *)v78 - 1);
      else
        v79 = 0;
      v80 = *(_DWORD *)(a3 + 12);
      if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
      {
        v81 = *(_QWORD *)(a1 + 480);
        ++*(_DWORD *)(a2 + 8);
        if ( v81 )
        {
          v82 = *(_QWORD *)(a1 + 488);
          v26 = (*(_DWORD *)(v81 + 8))-- == 1;
          if ( v26 )
          {
            sub_15D7BC0(v82, v81);
            v80 = *(_DWORD *)(a3 + 12);
            v78 = *(_QWORD **)(a1 + 56);
          }
          *(_QWORD *)(a1 + 480) = a2;
          if ( v78 )
          {
            v83 = a2;
            goto LABEL_99;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 480) = a2;
          v83 = a2;
          if ( v78 )
            goto LABEL_99;
        }
        v83 = a2;
        goto LABEL_135;
      }
      v88 = sub_15DC610(
              *(_QWORD *)(a1 + 8),
              *(_QWORD *)(a2 + 16),
              v79 - v80,
              (unsigned int)v78 + 8 * v80,
              v80,
              a6,
              v137,
              v138,
              v143,
              v144,
              v145,
              v146,
              v147,
              v148,
              v149,
              v150);
      v83 = v88;
      if ( v88 )
        ++*(_DWORD *)(v88 + 8);
      v89 = *(_QWORD *)(a1 + 480);
      if ( v89 )
      {
        v90 = *(_QWORD *)(a1 + 488);
        v26 = (*(_DWORD *)(v89 + 8))-- == 1;
        if ( v26 )
          sub_15D7BC0(v90, v89);
      }
      v78 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = v83;
      if ( !v78 )
        goto LABEL_134;
      v80 = *(_DWORD *)(a3 + 12);
LABEL_99:
      v84 = (unsigned __int64)&v78[*((unsigned int *)v78 - 1)];
      v85 = &v78[v80];
      if ( (unsigned __int64)v85 >= v84 )
        goto LABEL_115;
      do
      {
        v86 = *v85;
        if ( *v85 )
        {
          v87 = *(_QWORD *)(a1 + 48);
          v26 = (*(_DWORD *)(v86 + 8))-- == 1;
          if ( v26 )
          {
            v140 = v80;
            sub_15D7BC0(v87, v86);
            v80 = v140;
          }
        }
        ++v85;
      }
      while ( (unsigned __int64)v85 < v84 );
      v78 = *(_QWORD **)(a1 + 56);
      v83 = *(_QWORD *)(a1 + 480);
      if ( v78 )
      {
LABEL_115:
        *((_DWORD *)v78 - 1) = v80;
        if ( v83 )
        {
          ++*(_DWORD *)(v83 + 8);
          v80 = *((_DWORD *)v78 - 1);
        }
        if ( *((_DWORD *)v78 - 2) == v80 )
        {
          v96 = (3 * v80 + 1) >> 1;
          v97 = 8 * v96 + 8;
          if ( 8 * v80 + 8 >= v97 || v80 >= v96 )
            goto LABEL_181;
          v98 = (unsigned int *)sub_186B300(v78 - 1, v97);
          v99 = v98[1];
          v78 = v98 + 2;
          *v98 = v96;
          *(_QWORD *)(a1 + 56) = v98 + 2;
          LODWORD(v98) = v99;
          v91 = &v78[v99];
          v92 = (_DWORD)v98 + 1;
        }
        else
        {
          v91 = &v78[*((unsigned int *)v78 - 1)];
          v92 = *((_DWORD *)v78 - 1) + 1;
        }
        goto LABEL_119;
      }
LABEL_134:
      if ( !v83 )
      {
LABEL_136:
        v101 = (_QWORD *)sub_186B270(0x18u);
        v78 = v101 + 1;
        *v101 = 2;
        v92 = 1;
        *(_QWORD *)(a1 + 56) = v78;
        v91 = v78;
LABEL_119:
        *v91 = v83;
        *((_DWORD *)v78 - 1) = v92;
        v93 = *(_QWORD *)(a1 + 480);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        {
          sub_1584390(a1, a2, 0, v93);
          v93 = *(_QWORD *)(a1 + 480);
        }
        result = *(_QWORD *)(a1 + 40);
        v94 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v94 - 1;
        if ( a2 != v93 && v94 != 1 )
        {
          *(_BYTE *)(result + 16LL * (unsigned int)(v94 - 2) + 8) |= 2u;
          v93 = *(_QWORD *)(a1 + 480);
        }
        if ( v93 )
        {
          v95 = *(_QWORD *)(a1 + 488);
          v26 = (*(_DWORD *)(v93 + 8))-- == 1;
          if ( v26 )
            result = sub_15D7BC0(v95, v93);
        }
        goto LABEL_127;
      }
LABEL_135:
      ++*(_DWORD *)(v83 + 8);
      goto LABEL_136;
    }
    if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFC0) != 0x40 )
      goto LABEL_5;
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    v17 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v17 || *v17 || v17[1] != 4 )
      goto LABEL_5;
    v18 = *(unsigned __int64 **)(a1 + 56);
    v19 = *(unsigned int *)(a3 + 12);
    v20 = &v18[v19];
    v21 = *(_QWORD *)(a1 + 8);
    if ( *v20 == *(_QWORD *)(v21 + 856) )
      break;
    if ( *v20 == *(_QWORD *)(v21 + 864) )
    {
      v22 = *(_QWORD *)(a2 + 48);
      goto LABEL_15;
    }
LABEL_5:
    v13 = *(_QWORD *)(a2 + 8LL * v16 + 32);
    v14 = ((v16 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v14;
    result = sub_442430((_QWORD *)a1, v13, ((unsigned __int8)v14 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v22 = *(_QWORD *)(a2 + 40);
LABEL_15:
  if ( !v22 )
    goto LABEL_5;
  if ( !v18 )
    goto LABEL_168;
  v23 = (unsigned __int64)&v18[*((unsigned int *)v18 - 1)];
  if ( (unsigned __int64)v20 < v23 )
  {
    do
    {
      v24 = *v20;
      if ( *v20 )
      {
        v25 = *(_QWORD *)(a1 + 48);
        v26 = (*(_DWORD *)(v24 + 8))-- == 1;
        if ( v26 )
        {
          v139 = v22;
          sub_15D7BC0(v25, v24);
          v22 = v139;
        }
      }
      ++v20;
    }
    while ( (unsigned __int64)v20 < v23 );
    v18 = *(unsigned __int64 **)(a1 + 56);
    if ( !v18 )
    {
LABEL_168:
      ++*(_DWORD *)(v22 + 8);
      v141 = v22;
      v127 = (_QWORD *)sub_186B270(0x18u);
      v22 = v141;
      v128 = v127;
      *v127 = 2;
      v104 = 1;
      v18 = v128 + 1;
      *(_QWORD *)(a1 + 56) = v18;
      v105 = v18;
      goto LABEL_143;
    }
  }
  *((_DWORD *)v18 - 1) = v19;
  ++*(_DWORD *)(v22 + 8);
  v102 = *((_DWORD *)v18 - 1);
  if ( v102 != *((_DWORD *)v18 - 2) )
  {
    v103 = v102;
    v104 = v102 + 1;
    v105 = &v18[v103];
    goto LABEL_143;
  }
  v129 = (3 * v102 + 1) >> 1;
  v130 = 8 * v129 + 8;
  if ( 8 * v102 + 8 >= (unsigned int)v130 || v102 >= v129 )
    goto LABEL_181;
  v142 = v22;
  v131 = (unsigned int *)sub_186B300(v18 - 1, v130);
  v22 = v142;
  v132 = v131[1];
  v18 = (unsigned __int64 *)(v131 + 2);
  *v131 = v129;
  *(_QWORD *)(a1 + 56) = v131 + 2;
  LODWORD(v131) = v132;
  v105 = &v18[v132];
  v104 = (_DWORD)v131 + 1;
LABEL_143:
  *v105 = v22;
  *((_DWORD *)v18 - 1) = v104;
  v106 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
  *(_BYTE *)(a3 + 8) = v106;
  result = sub_442430((_QWORD *)a1, v22, (v106 >> 4) & 3);
  if ( (_BYTE)result )
  {
    v107 = *(_QWORD **)(a1 + 56);
    if ( v107 )
      v108 = *((_DWORD *)v107 - 1);
    else
      v108 = 0;
    v109 = v107[v108 - 1];
    if ( v109 )
      ++*(_DWORD *)(v109 + 8);
    v110 = *(_QWORD *)(a1 + 480);
    if ( v110 )
    {
      v111 = *(_QWORD *)(a1 + 488);
      v26 = (*(_DWORD *)(v110 + 8))-- == 1;
      if ( v26 )
      {
        sub_15D7BC0(v111, v110);
        v107 = *(_QWORD **)(a1 + 56);
      }
    }
    v112 = *((_DWORD *)v107 - 1);
    v113 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v109;
    v114 = (unsigned int)(v112 - 1);
    v115 = v107[v114];
    *((_DWORD *)v107 - 1) = v114;
    if ( v115
      && (v116 = *(_DWORD *)(v115 + 8), v117 = v116 - 1, *(_DWORD *)(v115 + 8) = v116 - 1, v116 == 1)
      && (sub_15D7BC0(v113, v115), v107 = *(_QWORD **)(a1 + 56), v113 = *(_QWORD *)(a1 + 48), !v107) )
    {
      v118 = MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    else
    {
      v117 = *((_DWORD *)v107 - 1);
      v118 = v117;
    }
    v119 = v107[v117 - 1];
    *((_DWORD *)v107 - 1) = v118 - 1;
    if ( !v119 || (v26 = *(_DWORD *)(v119 + 8) == 1, --*(_DWORD *)(v119 + 8), !v26) )
    {
      v120 = *(_QWORD *)(a1 + 480);
      v121 = v107;
      if ( v120 )
        goto LABEL_157;
      goto LABEL_159;
    }
    sub_15D7BC0(v113, v119);
    v120 = *(_QWORD *)(a1 + 480);
    v107 = *(_QWORD **)(a1 + 56);
    if ( v120 )
LABEL_157:
      ++*(_DWORD *)(v120 + 8);
    v121 = v107;
    if ( v107 )
    {
LABEL_159:
      v122 = *((_DWORD *)v107 - 2);
      if ( *((_DWORD *)v107 - 1) != v122 )
        goto LABEL_160;
      v133 = (3 * v122 + 1) >> 1;
      v134 = 8 * v133 + 8;
      if ( 8 * v122 + 8 < v134 && v122 < v133 )
      {
        v135 = (unsigned int *)sub_186B300(v107 - 1, v134);
        v121 = v135 + 2;
        *v135 = v133;
        *(_QWORD *)(a1 + 56) = v135 + 2;
        goto LABEL_160;
      }
LABEL_181:
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v147, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, &v147);
      sub_233E40((__int64)&v147);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v136 = (_QWORD *)sub_186B270(0x18u);
    *v136 = 2;
    v121 = v136 + 1;
    *(_QWORD *)(a1 + 56) = v136 + 1;
LABEL_160:
    v123 = *((_DWORD *)v121 - 1);
    v121[v123] = v120;
    *((_DWORD *)v121 - 1) = v123 + 1;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v124 = *(_QWORD *)(a1 + 40);
    result = *(unsigned int *)(v124 - 4);
    *(_DWORD *)(v124 - 4) = result - 1;
    if ( (_DWORD)result != 1 )
    {
      result = 16LL * (unsigned int)(result - 2);
      *(_BYTE *)(v124 + result + 8) |= 2u;
    }
  }
  v125 = *(_QWORD *)(a1 + 480);
  if ( v125 )
  {
    v126 = *(_QWORD *)(a1 + 488);
    v26 = (*(_DWORD *)(v125 + 8))-- == 1;
    if ( v26 )
      result = sub_15D7BC0(v126, v125);
  }
LABEL_127:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

