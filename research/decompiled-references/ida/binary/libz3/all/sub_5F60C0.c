__int64 __fastcall sub_5F60C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v9; // al
  unsigned int v10; // ebp
  __int64 v11; // rsi
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  __int64 *v16; // rdx
  __int64 v17; // r15
  __int64 *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rdi
  int v30; // ecx
  __int64 v31; // rdi
  int v32; // edx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rbp
  _QWORD *v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // rsi
  int v40; // edx
  _QWORD *v41; // rax
  int v42; // ecx
  __int64 v43; // rax
  unsigned int v44; // r14d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdi
  _QWORD *v55; // rdx
  unsigned int v56; // r15d
  unsigned __int64 v57; // r14
  __int64 *v58; // rbp
  __int64 v59; // rsi
  __int64 v60; // rdi
  _QWORD *v61; // rcx
  int v62; // eax
  int v63; // ecx
  __int64 v64; // rsi
  __int64 v65; // rdi
  _QWORD *v66; // rax
  unsigned int v67; // r14d
  size_t v68; // rsi
  unsigned int *v69; // rax
  __int64 v70; // rcx
  unsigned int v71; // r14d
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rax
  int v75; // edx
  _QWORD *v76; // rcx
  int v77; // edx
  unsigned int v78; // r8d
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // r15
  unsigned __int64 v82; // r14
  __int64 *v83; // rbp
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 *v89; // rdx
  int v90; // eax
  __int64 v91; // rcx
  int v92; // esi
  __int64 v93; // rdi
  unsigned int v94; // ebp
  unsigned int v95; // eax
  unsigned int *v96; // rax
  __int64 v97; // rdx
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  unsigned int v100; // eax
  __int64 v101; // rsi
  int v102; // eax
  __int64 *v103; // rsi
  unsigned __int8 v104; // al
  _QWORD *v105; // rax
  int v106; // edx
  __int64 v107; // rbp
  __int64 v108; // rsi
  __int64 v109; // rdi
  int v110; // edx
  __int64 v111; // rdi
  __int64 v112; // rcx
  __int64 v113; // rsi
  int v114; // ecx
  int v115; // ebp
  int v116; // edx
  __int64 v117; // rsi
  __int64 v118; // r14
  _QWORD *v119; // rdx
  unsigned int v120; // ecx
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rsi
  __int64 v124; // rdi
  _QWORD *v125; // rax
  _QWORD *v126; // rdx
  unsigned int v127; // ebp
  size_t v128; // rsi
  unsigned int *v129; // rax
  __int64 v130; // rsi
  unsigned int v131; // ebp
  unsigned int v132; // edx
  unsigned int *v133; // rax
  _QWORD *v134; // rax
  char **v135; // rbp
  char **exception; // rbp
  int v137; // [rsp+0h] [rbp-88h]
  int v138; // [rsp+8h] [rbp-80h]
  __int64 v139; // [rsp+8h] [rbp-80h]
  unsigned int v140; // [rsp+8h] [rbp-80h]
  __int64 v141; // [rsp+8h] [rbp-80h]
  __int64 v142; // [rsp+8h] [rbp-80h]
  int v143; // [rsp+10h] [rbp-78h]
  int v144; // [rsp+18h] [rbp-70h]
  __int64 v145; // [rsp+20h] [rbp-68h] BYREF
  __int64 v146; // [rsp+28h] [rbp-60h]
  __int64 v147; // [rsp+30h] [rbp-58h] BYREF
  int v148; // [rsp+38h] [rbp-50h]
  int v149; // [rsp+40h] [rbp-48h]
  void *v150; // [rsp+48h] [rbp-40h]

  v9 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v9 == 2 )
  {
    v43 = *(_QWORD *)(a1 + 8);
    v44 = *(_DWORD *)(a2 + 24);
    v145 = 0;
    v146 = v43;
    v45 = *(_QWORD *)(a1 + 160);
    if ( v45 )
      *(_DWORD *)(v45 - 4) -= v44;
    v46 = *(_QWORD *)(a1 + 528);
    if ( v46 )
      *(_DWORD *)(v46 - 4) -= v44;
    *(_DWORD *)(a1 + 128) -= v44;
    sub_15844D0(a1);
    v47 = 0x7FFFFFFF8LL;
    v48 = *(_QWORD *)(a1 + 56);
    if ( v48 )
      v47 = 8LL * (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
    v49 = *(_QWORD *)(v48 + v47);
    if ( v49 )
      ++*(_DWORD *)(v49 + 8);
    v50 = *(_QWORD *)(a1 + 480);
    if ( v50 )
    {
      v51 = *(_QWORD *)(a1 + 488);
      v24 = (*(_DWORD *)(v50 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v51, v50);
    }
    v24 = *(_WORD *)(v49 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v49;
    if ( v24 && (*(_BYTE *)(v49 + 30) & 1) != 0 )
    {
      v55 = *(_QWORD **)(a1 + 56);
      if ( !v55 )
      {
LABEL_83:
        ++*(_DWORD *)(v49 + 8);
LABEL_84:
        v66 = (_QWORD *)sub_186B270(0x18u);
        v55 = v66 + 1;
        *v66 = 2;
        v62 = 1;
        *(_QWORD *)(a1 + 56) = v55;
        v61 = v55;
LABEL_74:
        *v61 = v49;
        *((_DWORD *)v55 - 1) = v62;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        result = *(_QWORD *)(a1 + 40);
        v63 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v63 - 1;
        if ( v63 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v63 - 2) + 8) |= 2u;
        v64 = v145;
        if ( v145 )
        {
          v65 = v146;
          v24 = (*(_DWORD *)(v145 + 8))-- == 1;
          if ( v24 )
            return sub_15D7BC0(v65, v64);
        }
        return result;
      }
    }
    else
    {
      sub_1585DF0(a1 + 328, v49, v44, &v145);
      v53 = v145;
      v145 = *(_QWORD *)(a1 + 480);
      v52 = v145;
      *(_QWORD *)(a1 + 480) = v53;
      if ( v52 )
      {
        v54 = v146;
        v24 = (*(_DWORD *)(v52 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v54, v52);
      }
      v145 = 0;
      v55 = *(_QWORD **)(a1 + 56);
      if ( !v55 )
        goto LABEL_105;
    }
    v56 = *(_DWORD *)(a3 + 12);
    v57 = (unsigned __int64)&v55[*((unsigned int *)v55 - 1)];
    v58 = &v55[v56];
    if ( (unsigned __int64)v58 >= v57 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v59 = *v58;
        if ( *v58 )
        {
          v60 = *(_QWORD *)(a1 + 48);
          v24 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( (unsigned __int64)++v58 >= v57 )
          goto LABEL_69;
      }
      sub_15D7BC0(v60, v59);
      ++v58;
    }
    while ( (unsigned __int64)v58 < v57 );
LABEL_69:
    v55 = *(_QWORD **)(a1 + 56);
    if ( v55 )
    {
LABEL_70:
      v49 = *(_QWORD *)(a1 + 480);
      *((_DWORD *)v55 - 1) = v56;
      if ( v49 )
      {
        ++*(_DWORD *)(v49 + 8);
        v56 = *((_DWORD *)v55 - 1);
      }
      if ( *((_DWORD *)v55 - 2) == v56 )
      {
        v67 = (3 * v56 + 1) >> 1;
        v68 = 8 * v67 + 8;
        if ( 8 * v56 + 8 >= (unsigned int)v68 || v56 >= v67 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v147, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v147);
          sub_233E40((__int64)&v147);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v69 = (unsigned int *)sub_186B300(v55 - 1, v68);
        v70 = v69[1];
        v55 = v69 + 2;
        *v69 = v67;
        *(_QWORD *)(a1 + 56) = v69 + 2;
        LODWORD(v69) = v70;
        v61 = &v55[v70];
        v62 = (_DWORD)v69 + 1;
      }
      else
      {
        v61 = &v55[*((unsigned int *)v55 - 1)];
        v62 = *((_DWORD *)v55 - 1) + 1;
      }
      goto LABEL_74;
    }
LABEL_105:
    v49 = *(_QWORD *)(a1 + 480);
    if ( !v49 )
      goto LABEL_84;
    goto LABEL_83;
  }
  if ( v9 == 3 )
  {
    sub_1872CE0("");
    sub_1873130(107, 520);
  }
  if ( v9 )
  {
    v25 = 0xFFFFFFFFLL;
    v26 = *(_QWORD **)(a1 + 56);
    if ( v26 )
      v25 = (unsigned int)(*((_DWORD *)v26 - 1) - 1);
    v27 = v26[v25];
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v28 = *(_QWORD *)(a1 + 480);
    if ( v28 )
    {
      v29 = *(_QWORD *)(a1 + 488);
      v24 = (*(_DWORD *)(v28 + 8))-- == 1;
      if ( v24 )
      {
        sub_15D7BC0(v29, v28);
        v26 = *(_QWORD **)(a1 + 56);
      }
    }
    v30 = *((_DWORD *)v26 - 1);
    v31 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v27;
    v32 = v30 - 1;
    v33 = v26[v30 - 1];
    *((_DWORD *)v26 - 1) = v30 - 1;
    if ( v33 )
    {
      v24 = (*(_DWORD *)(v33 + 8))-- == 1;
      if ( v24 )
      {
        sub_15D7BC0(v31, v33);
        v26 = *(_QWORD **)(a1 + 56);
        v31 = *(_QWORD *)(a1 + 48);
      }
      v32 = *((_DWORD *)v26 - 1);
    }
    v34 = (unsigned int)(v32 - 1);
    v35 = v26[v34];
    *((_DWORD *)v26 - 1) = v34;
    if ( v35 && (v24 = *(_DWORD *)(v35 + 8) == 1, --*(_DWORD *)(v35 + 8), v24) )
    {
      sub_15D7BC0(v31, v35);
      v36 = *(_QWORD *)(a1 + 480);
      v26 = *(_QWORD **)(a1 + 56);
      if ( !v36 )
      {
LABEL_39:
        v37 = v26;
        if ( !v26 )
        {
          v98 = (_QWORD *)sub_186B270(0x18u);
          v40 = 1;
          v37 = v98 + 1;
          *v98 = 2;
          *(_QWORD *)(a1 + 56) = v98 + 1;
          v41 = v98 + 1;
LABEL_42:
          *v41 = v36;
          *((_DWORD *)v37 - 1) = v40;
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          result = *(_QWORD *)(a1 + 40);
          v42 = *(_DWORD *)(result - 4);
          *(_DWORD *)(result - 4) = v42 - 1;
          if ( v42 != 1 )
            *(_BYTE *)(result + 16LL * (unsigned int)(v42 - 2) + 8) |= 2u;
          return result;
        }
LABEL_40:
        v38 = *((_DWORD *)v26 - 1);
        if ( v38 == *((_DWORD *)v26 - 2) )
        {
          v71 = (3 * v38 + 1) >> 1;
          v72 = 8 * v71 + 8;
          if ( 8 * v38 + 8 >= (unsigned int)v72 || v38 >= v71 )
            goto LABEL_181;
          v73 = (unsigned int *)sub_186B300(v26 - 1, v72);
          v37 = v73 + 2;
          *v73 = v71;
          v74 = v73[1];
          *(_QWORD *)(a1 + 56) = v37;
          v75 = v74;
          v41 = &v37[v74];
          v40 = v75 + 1;
        }
        else
        {
          v39 = v38;
          v40 = v38 + 1;
          v41 = &v26[v39];
        }
        goto LABEL_42;
      }
    }
    else
    {
      v36 = *(_QWORD *)(a1 + 480);
      v37 = v26;
      if ( !v36 )
        goto LABEL_40;
    }
    ++*(_DWORD *)(v36 + 8);
    goto LABEL_39;
  }
  v10 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v14 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v14 >= v10 )
    {
      v76 = *(_QWORD **)(a1 + 56);
      if ( v76 )
        v77 = *((_DWORD *)v76 - 1);
      else
        v77 = 0;
      v78 = *(_DWORD *)(a3 + 12);
      if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
      {
        v79 = *(_QWORD *)(a1 + 480);
        ++*(_DWORD *)(a2 + 8);
        if ( v79 )
        {
          v80 = *(_QWORD *)(a1 + 488);
          v24 = (*(_DWORD *)(v79 + 8))-- == 1;
          if ( v24 )
          {
            sub_15D7BC0(v80, v79);
            v78 = *(_DWORD *)(a3 + 12);
            v76 = *(_QWORD **)(a1 + 56);
          }
          *(_QWORD *)(a1 + 480) = a2;
          if ( v76 )
          {
            v81 = a2;
            goto LABEL_99;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 480) = a2;
          v81 = a2;
          if ( v76 )
            goto LABEL_99;
        }
        v81 = a2;
        goto LABEL_135;
      }
      v86 = sub_15DC610(
              *(_QWORD *)(a1 + 8),
              *(_QWORD *)(a2 + 16),
              v77 - v78,
              (unsigned int)v76 + 8 * v78,
              v78,
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
      v81 = v86;
      if ( v86 )
        ++*(_DWORD *)(v86 + 8);
      v87 = *(_QWORD *)(a1 + 480);
      if ( v87 )
      {
        v88 = *(_QWORD *)(a1 + 488);
        v24 = (*(_DWORD *)(v87 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v88, v87);
      }
      v76 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = v81;
      if ( !v76 )
        goto LABEL_134;
      v78 = *(_DWORD *)(a3 + 12);
LABEL_99:
      v82 = (unsigned __int64)&v76[*((unsigned int *)v76 - 1)];
      v83 = &v76[v78];
      if ( (unsigned __int64)v83 >= v82 )
        goto LABEL_115;
      do
      {
        v84 = *v83;
        if ( *v83 )
        {
          v85 = *(_QWORD *)(a1 + 48);
          v24 = (*(_DWORD *)(v84 + 8))-- == 1;
          if ( v24 )
          {
            v140 = v78;
            sub_15D7BC0(v85, v84);
            v78 = v140;
          }
        }
        ++v83;
      }
      while ( (unsigned __int64)v83 < v82 );
      v76 = *(_QWORD **)(a1 + 56);
      v81 = *(_QWORD *)(a1 + 480);
      if ( v76 )
      {
LABEL_115:
        *((_DWORD *)v76 - 1) = v78;
        if ( v81 )
        {
          ++*(_DWORD *)(v81 + 8);
          v78 = *((_DWORD *)v76 - 1);
        }
        if ( *((_DWORD *)v76 - 2) == v78 )
        {
          v94 = (3 * v78 + 1) >> 1;
          v95 = 8 * v94 + 8;
          if ( 8 * v78 + 8 >= v95 || v78 >= v94 )
            goto LABEL_181;
          v96 = (unsigned int *)sub_186B300(v76 - 1, v95);
          v97 = v96[1];
          v76 = v96 + 2;
          *v96 = v94;
          *(_QWORD *)(a1 + 56) = v96 + 2;
          LODWORD(v96) = v97;
          v89 = &v76[v97];
          v90 = (_DWORD)v96 + 1;
        }
        else
        {
          v89 = &v76[*((unsigned int *)v76 - 1)];
          v90 = *((_DWORD *)v76 - 1) + 1;
        }
        goto LABEL_119;
      }
LABEL_134:
      if ( !v81 )
      {
LABEL_136:
        v99 = (_QWORD *)sub_186B270(0x18u);
        v76 = v99 + 1;
        *v99 = 2;
        v90 = 1;
        *(_QWORD *)(a1 + 56) = v76;
        v89 = v76;
LABEL_119:
        *v89 = v81;
        *((_DWORD *)v76 - 1) = v90;
        v91 = *(_QWORD *)(a1 + 480);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        {
          sub_1584390(a1, a2, 0, v91);
          v91 = *(_QWORD *)(a1 + 480);
        }
        result = *(_QWORD *)(a1 + 40);
        v92 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v92 - 1;
        if ( a2 != v91 && v92 != 1 )
        {
          *(_BYTE *)(result + 16LL * (unsigned int)(v92 - 2) + 8) |= 2u;
          v91 = *(_QWORD *)(a1 + 480);
        }
        if ( v91 )
        {
          v93 = *(_QWORD *)(a1 + 488);
          v24 = (*(_DWORD *)(v91 + 8))-- == 1;
          if ( v24 )
            result = sub_15D7BC0(v93, v91);
        }
        goto LABEL_127;
      }
LABEL_135:
      ++*(_DWORD *)(v81 + 8);
      goto LABEL_136;
    }
    if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFC0) != 0x40 )
      goto LABEL_5;
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    v15 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v15 || *v15 || v15[1] != 4 )
      goto LABEL_5;
    v16 = *(__int64 **)(a1 + 56);
    v17 = *(unsigned int *)(a3 + 12);
    v18 = &v16[v17];
    v19 = *(_QWORD *)(a1 + 8);
    if ( *v18 == *(_QWORD *)(v19 + 856) )
      break;
    if ( *v18 == *(_QWORD *)(v19 + 864) )
    {
      v20 = *(_QWORD *)(a2 + 48);
      goto LABEL_15;
    }
LABEL_5:
    v11 = *(_QWORD *)(a2 + 8LL * v14 + 32);
    v12 = ((v14 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v12;
    result = sub_5F5A10((_QWORD *)a1, v11, ((unsigned __int8)v12 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v20 = *(_QWORD *)(a2 + 40);
LABEL_15:
  if ( !v20 )
    goto LABEL_5;
  if ( !v16 )
    goto LABEL_168;
  v21 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
  if ( (unsigned __int64)v18 < v21 )
  {
    do
    {
      v22 = *v18;
      if ( *v18 )
      {
        v23 = *(_QWORD *)(a1 + 48);
        v24 = (*(_DWORD *)(v22 + 8))-- == 1;
        if ( v24 )
        {
          v139 = v20;
          sub_15D7BC0(v23, v22);
          v20 = v139;
        }
      }
      ++v18;
    }
    while ( (unsigned __int64)v18 < v21 );
    v16 = *(__int64 **)(a1 + 56);
    if ( !v16 )
    {
LABEL_168:
      ++*(_DWORD *)(v20 + 8);
      v141 = v20;
      v125 = (_QWORD *)sub_186B270(0x18u);
      v20 = v141;
      v126 = v125;
      *v125 = 2;
      v102 = 1;
      v16 = v126 + 1;
      *(_QWORD *)(a1 + 56) = v16;
      v103 = v16;
      goto LABEL_143;
    }
  }
  *((_DWORD *)v16 - 1) = v17;
  ++*(_DWORD *)(v20 + 8);
  v100 = *((_DWORD *)v16 - 1);
  if ( v100 != *((_DWORD *)v16 - 2) )
  {
    v101 = v100;
    v102 = v100 + 1;
    v103 = &v16[v101];
    goto LABEL_143;
  }
  v127 = (3 * v100 + 1) >> 1;
  v128 = 8 * v127 + 8;
  if ( 8 * v100 + 8 >= (unsigned int)v128 || v100 >= v127 )
    goto LABEL_181;
  v142 = v20;
  v129 = (unsigned int *)sub_186B300(v16 - 1, v128);
  v20 = v142;
  v130 = v129[1];
  v16 = (__int64 *)(v129 + 2);
  *v129 = v127;
  *(_QWORD *)(a1 + 56) = v129 + 2;
  LODWORD(v129) = v130;
  v103 = &v16[v130];
  v102 = (_DWORD)v129 + 1;
LABEL_143:
  *v103 = v20;
  *((_DWORD *)v16 - 1) = v102;
  v104 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
  *(_BYTE *)(a3 + 8) = v104;
  result = sub_5F5A10((_QWORD *)a1, v20, (v104 >> 4) & 3);
  if ( (_BYTE)result )
  {
    v105 = *(_QWORD **)(a1 + 56);
    if ( v105 )
      v106 = *((_DWORD *)v105 - 1);
    else
      v106 = 0;
    v107 = v105[v106 - 1];
    if ( v107 )
      ++*(_DWORD *)(v107 + 8);
    v108 = *(_QWORD *)(a1 + 480);
    if ( v108 )
    {
      v109 = *(_QWORD *)(a1 + 488);
      v24 = (*(_DWORD *)(v108 + 8))-- == 1;
      if ( v24 )
      {
        sub_15D7BC0(v109, v108);
        v105 = *(_QWORD **)(a1 + 56);
      }
    }
    v110 = *((_DWORD *)v105 - 1);
    v111 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v107;
    v112 = (unsigned int)(v110 - 1);
    v113 = v105[v112];
    *((_DWORD *)v105 - 1) = v112;
    if ( v113
      && (v114 = *(_DWORD *)(v113 + 8), v115 = v114 - 1, *(_DWORD *)(v113 + 8) = v114 - 1, v114 == 1)
      && (sub_15D7BC0(v111, v113), v105 = *(_QWORD **)(a1 + 56), v111 = *(_QWORD *)(a1 + 48), !v105) )
    {
      v116 = MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    else
    {
      v115 = *((_DWORD *)v105 - 1);
      v116 = v115;
    }
    v117 = v105[v115 - 1];
    *((_DWORD *)v105 - 1) = v116 - 1;
    if ( !v117 || (v24 = *(_DWORD *)(v117 + 8) == 1, --*(_DWORD *)(v117 + 8), !v24) )
    {
      v118 = *(_QWORD *)(a1 + 480);
      v119 = v105;
      if ( v118 )
        goto LABEL_157;
      goto LABEL_159;
    }
    sub_15D7BC0(v111, v117);
    v118 = *(_QWORD *)(a1 + 480);
    v105 = *(_QWORD **)(a1 + 56);
    if ( v118 )
LABEL_157:
      ++*(_DWORD *)(v118 + 8);
    v119 = v105;
    if ( v105 )
    {
LABEL_159:
      v120 = *((_DWORD *)v105 - 2);
      if ( *((_DWORD *)v105 - 1) != v120 )
        goto LABEL_160;
      v131 = (3 * v120 + 1) >> 1;
      v132 = 8 * v131 + 8;
      if ( 8 * v120 + 8 < v132 && v120 < v131 )
      {
        v133 = (unsigned int *)sub_186B300(v105 - 1, v132);
        v119 = v133 + 2;
        *v133 = v131;
        *(_QWORD *)(a1 + 56) = v133 + 2;
        goto LABEL_160;
      }
LABEL_181:
      v135 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v147, "Overflow encountered when expanding vector");
      *v135 = (char *)off_1C63128;
      sub_2333C0(v135 + 1, &v147);
      sub_233E40((__int64)&v147);
      __cxa_throw(v135, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v134 = (_QWORD *)sub_186B270(0x18u);
    *v134 = 2;
    v119 = v134 + 1;
    *(_QWORD *)(a1 + 56) = v134 + 1;
LABEL_160:
    v121 = *((_DWORD *)v119 - 1);
    v119[v121] = v118;
    *((_DWORD *)v119 - 1) = v121 + 1;
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
  v123 = *(_QWORD *)(a1 + 480);
  if ( v123 )
  {
    v124 = *(_QWORD *)(a1 + 488);
    v24 = (*(_DWORD *)(v123 + 8))-- == 1;
    if ( v24 )
      result = sub_15D7BC0(v124, v123);
  }
LABEL_127:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

