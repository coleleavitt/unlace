__int64 __fastcall sub_638480(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r13
  _DWORD *v15; // r14
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // r13
  __int64 v27; // r15
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r15
  _QWORD *v36; // rax
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rsi
  unsigned int v43; // r8d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rsi
  unsigned int v47; // r9d
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rsi
  __int64 *v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rdx
  char v54; // al
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned int v57; // r9d
  __int64 *v58; // r8
  __int64 v59; // rsi
  bool v60; // zf
  __int64 *v61; // rcx
  __int64 v62; // rax
  __int64 *v63; // rdx
  char v64; // al
  __int64 *v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // r9d
  __int64 *v68; // r8
  __int64 v69; // rsi
  _QWORD *v70; // rax
  int v71; // r14d
  int v72; // r13d
  __int64 v73; // rcx
  int v74; // edx
  _QWORD *v75; // rcx
  _QWORD *v76; // rdx
  __int64 v77; // rax
  _DWORD *v78; // rax
  unsigned int v79; // edx
  unsigned int v80; // ecx
  size_t v81; // rsi
  unsigned int *v82; // rdx
  __int64 v83; // rcx
  unsigned int v84; // ecx
  size_t v85; // rsi
  unsigned int *v86; // rax
  _DWORD *v87; // rdx
  __int64 v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  char **v91; // r15
  char **exception; // r14
  char **v93; // r15
  __int64 v94; // [rsp+10h] [rbp-F0h]
  __int64 v95; // [rsp+18h] [rbp-E8h]
  __int64 v96; // [rsp+20h] [rbp-E0h]
  __int64 v97; // [rsp+28h] [rbp-D8h]
  __int64 v98; // [rsp+30h] [rbp-D0h]
  __int64 *v99; // [rsp+30h] [rbp-D0h]
  int v100; // [rsp+3Ch] [rbp-C4h]
  unsigned int v101; // [rsp+40h] [rbp-C0h]
  __int64 *v103; // [rsp+50h] [rbp-B0h]
  __int64 *v104; // [rsp+50h] [rbp-B0h]
  __int64 v105; // [rsp+58h] [rbp-A8h]
  unsigned int v106; // [rsp+60h] [rbp-A0h]
  __int64 v107; // [rsp+68h] [rbp-98h]
  unsigned int v108; // [rsp+68h] [rbp-98h]
  __int64 *v109; // [rsp+68h] [rbp-98h]
  __int64 *v110; // [rsp+68h] [rbp-98h]
  unsigned int v111; // [rsp+70h] [rbp-90h]
  __int64 v112; // [rsp+70h] [rbp-90h]
  __int64 v113; // [rsp+70h] [rbp-90h]
  __int64 *v114; // [rsp+70h] [rbp-90h]
  __int64 *v115; // [rsp+70h] [rbp-90h]
  unsigned int v116; // [rsp+70h] [rbp-90h]
  __int64 v117; // [rsp+70h] [rbp-90h]
  unsigned int v118; // [rsp+78h] [rbp-88h]
  __int64 v119; // [rsp+78h] [rbp-88h]
  unsigned int v120; // [rsp+78h] [rbp-88h]
  unsigned int v121; // [rsp+78h] [rbp-88h]
  __int64 v122; // [rsp+78h] [rbp-88h]
  __int64 v123; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v124; // [rsp+98h] [rbp-68h]
  __int64 v125[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v126[10]; // [rsp+B0h] [rbp-50h] BYREF

  v100 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v70 = *(_QWORD **)(a1 + 160);
  if ( v70 )
    v71 = *((_DWORD *)v70 - 1);
  else
    v71 = 0;
  if ( v100 )
  {
    v72 = 0;
    while ( 1 )
    {
      if ( v70 )
      {
        v79 = *((_DWORD *)v70 - 1);
        if ( v79 == *((_DWORD *)v70 - 2) )
        {
          v80 = (3 * v79 + 1) >> 1;
          v81 = 8 * v80 + 8;
          v120 = v80;
          if ( 8 * v79 + 8 >= (unsigned int)v81 || v79 >= v80 )
          {
LABEL_103:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v126, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v126);
            sub_233E40((__int64)v126);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v82 = (unsigned int *)sub_186B300(v70 - 1, v81);
          v70 = v82 + 2;
          v83 = v82[1];
          *v82 = v120;
          *(_QWORD *)(a1 + 160) = v82 + 2;
          LODWORD(v82) = v83;
          v75 = &v70[v83];
          v74 = (_DWORD)v82 + 1;
        }
        else
        {
          v73 = v79;
          v74 = v79 + 1;
          v75 = &v70[v73];
        }
      }
      else
      {
        v89 = (_QWORD *)sub_186B270(0x18u);
        v74 = 1;
        *v89 = 2;
        v70 = v89 + 1;
        *(_QWORD *)(a1 + 160) = v70;
        v75 = v70;
      }
      *v75 = 0;
      *((_DWORD *)v70 - 1) = v74;
      v76 = *(_QWORD **)(a1 + 528);
      if ( !v76 )
        break;
      v77 = *((unsigned int *)v76 - 1);
      if ( (_DWORD)v77 != *((_DWORD *)v76 - 2) )
      {
        v78 = (_DWORD *)v76 + v77;
        goto LABEL_85;
      }
      v84 = (unsigned int)(3 * v77 + 1) >> 1;
      v85 = 4 * v84 + 8;
      v121 = v84;
      if ( 4 * (int)v77 + 8 >= (unsigned int)v85 || (unsigned int)v77 >= v84 )
        goto LABEL_103;
      ++v72;
      v86 = (unsigned int *)sub_186B300(v76 - 1, v85);
      v87 = v86 + 2;
      *v86 = v121;
      v88 = v86[1];
      *(_QWORD *)(a1 + 528) = v87;
      v87[v88] = v71;
      ++*(v87 - 1);
      if ( v72 == v100 )
        goto LABEL_95;
LABEL_86:
      v70 = *(_QWORD **)(a1 + 160);
    }
    v90 = (_QWORD *)sub_186B270(0x10u);
    v76 = v90 + 1;
    *v90 = 2;
    *(_QWORD *)(a1 + 528) = v90 + 1;
    v78 = v90 + 1;
LABEL_85:
    ++v72;
    *v78 = v71;
    ++*((_DWORD *)v76 - 1);
    if ( v72 == v100 )
      goto LABEL_95;
    goto LABEL_86;
  }
LABEL_95:
  *(_DWORD *)(a1 + 128) += v100;
LABEL_2:
  v5 = *(_DWORD *)(a2 + 76) + *(_DWORD *)(a2 + 72) + 1;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v9 >= v5 )
      break;
    if ( v9 )
    {
      v10 = *(_DWORD *)(a2 + 72);
      if ( v10 < v9 )
        v11 = a2 + 8LL * (v9 - v10 - 1);
      else
        v11 = a2 + 8LL * (v9 - 1);
      v6 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + v11 + 80);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 24);
    }
    v7 = ((v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_637A50((_QWORD *)a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v12 = *(unsigned int *)(a2 + 20);
  v103 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v118 = *(_DWORD *)(a2 + 76);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = 16 * v12;
  v97 = *v103;
  v96 = *(_QWORD *)(a1 + 8);
  v106 = *(_DWORD *)(a2 + 72);
  v123 = v96;
  if ( !v106 )
  {
    v125[0] = v13;
    v15 = nullptr;
    v95 = v13;
    if ( !v118 )
    {
      v124 = nullptr;
      sub_39BEE0(&v123, 0);
      v101 = 0;
      v16 = 0;
      LODWORD(v15) = 0;
      goto LABEL_14;
    }
LABEL_41:
    v35 = *(_QWORD *)(a2 + v14 + 80);
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    v36 = (_QWORD *)sub_186B270(0x18u);
    v37 = v36 + 1;
    v38 = a2 + v14;
    *v36 = 2;
    v39 = 0;
    v16 = (__int64)(v36 + 1);
    v40 = 1;
    while ( 1 )
    {
      *v37 = v35;
      ++v39;
      *(_DWORD *)(v16 - 4) = v40;
      if ( (unsigned int)v39 >= v118 )
        break;
      v35 = *(_QWORD *)(v38 + 8 * v39 + 80);
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      v41 = *(_DWORD *)(v16 - 4);
      if ( v41 == *(_DWORD *)(v16 - 8) )
      {
        v47 = (3 * v41 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v41 + 8 >= (unsigned int)v48 || v41 >= v47 )
        {
          v93 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v126, "Overflow encountered when expanding vector");
          *v93 = (char *)off_1C63128;
          sub_2333C0(v93 + 1, v126);
          sub_233E40((__int64)v126);
          __cxa_throw(v93, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v105 = v38;
        v108 = (3 * v41 + 1) >> 1;
        v112 = v39;
        v49 = (unsigned int *)sub_186B300((void *)(v16 - 8), v48);
        v50 = v49[1];
        v16 = (__int64)(v49 + 2);
        v39 = v112;
        v38 = v105;
        *v49 = v108;
        LODWORD(v49) = v50;
        v37 = (_QWORD *)(v16 + 8 * v50);
        v40 = (_DWORD)v49 + 1;
      }
      else
      {
        v42 = v41;
        v40 = v41 + 1;
        v37 = (_QWORD *)(v16 + 8 * v42);
      }
    }
    v51 = v103 + 1;
    v98 = v106;
    if ( !v106 )
    {
      v124 = v15;
      sub_39BEE0(&v123, 0);
      v101 = 0;
      v61 = v103 + 1;
      v98 = 0;
      goto LABEL_68;
    }
    v52 = *(_QWORD *)(a1 + 8);
    goto LABEL_57;
  }
  v26 = a2 + v14;
  v27 = *(_QWORD *)(v26 + 80);
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  v28 = (_QWORD *)sub_186B270(0x18u);
  v29 = v28 + 1;
  *v28 = 2;
  v30 = 1;
  v98 = v106;
  v31 = v106 + 2 * v12;
  v15 = v29;
  v32 = a2 + 8 * v31;
  while ( 1 )
  {
    v26 += 8;
    *v29 = v27;
    *(v15 - 1) = v30;
    if ( v32 == v26 )
      break;
    while ( 1 )
    {
      v27 = *(_QWORD *)(v26 + 80);
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      v33 = *(v15 - 1);
      if ( v33 == *(v15 - 2) )
        break;
      v26 += 8;
      *(_QWORD *)&v15[2 * v33] = v27;
      *(v15 - 1) = v33 + 1;
      if ( v32 == v26 )
        goto LABEL_40;
    }
    v43 = (3 * v33 + 1) >> 1;
    v44 = 8 * v43 + 8;
    if ( 8 * v33 + 8 >= (unsigned int)v44 || v33 >= v43 )
    {
      v91 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v126, "Overflow encountered when expanding vector");
      *v91 = (char *)off_1C63128;
      sub_2333C0(v91 + 1, v126);
      sub_233E40((__int64)v126);
      __cxa_throw(v91, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v107 = v32;
    v111 = (3 * v33 + 1) >> 1;
    v45 = (unsigned int *)sub_186B300(v15 - 2, v44);
    v46 = v45[1];
    v15 = v45 + 2;
    v32 = v107;
    *v45 = v111;
    LODWORD(v45) = v46;
    v29 = &v15[2 * v46];
    v30 = (_DWORD)v45 + 1;
  }
LABEL_40:
  v34 = *(_QWORD *)(a1 + 8);
  v95 = v34;
  v14 = 16LL * *(unsigned int *)(a2 + 20);
  v125[0] = v34;
  if ( v118 )
    goto LABEL_41;
  v52 = v34;
  v16 = 0;
  v51 = v103 + 1;
LABEL_57:
  v101 = 0;
  v53 = 0;
  while ( 1 )
  {
    v109 = v51;
    v113 = v53;
    v54 = sub_15D3190(v52, v51[v53]);
    v55 = v113;
    v51 = v109;
    if ( v54 )
      break;
    v53 = v113 + 1;
    if ( (int)v113 + 1 >= v106 )
      goto LABEL_67;
LABEL_59:
    v52 = *(_QWORD *)(a1 + 8);
  }
  v56 = v109[v113];
  v57 = v101 + 1;
  v58 = (__int64 *)&v15[2 * v101];
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  v59 = *v58;
  if ( *v58 )
  {
    v60 = (*(_DWORD *)(v59 + 8))-- == 1;
    if ( v60 )
    {
      v117 = v56;
      v94 = v55;
      sub_15D7BC0(v96, v59);
      v51 = v109;
      v55 = v94;
      v58 = (__int64 *)&v15[2 * v101];
      v57 = v101 + 1;
      v56 = v117;
    }
  }
  *v58 = v56;
  v53 = v55 + 1;
  v101 = v57;
  if ( (unsigned int)v53 < v106 )
    goto LABEL_59;
LABEL_67:
  v124 = v15;
  v114 = v51;
  sub_39BEE0(&v123, v101);
  v61 = v114;
  if ( v118 )
  {
LABEL_68:
    v62 = v118;
    v118 = 0;
    v63 = &v61[v98];
    v110 = &v61[v98 + v62];
    do
    {
      v115 = v63;
      v64 = sub_15D3190(*(_QWORD *)(a1 + 8), *v63);
      v65 = v115;
      if ( v64 )
      {
        v66 = *v115;
        v67 = v118 + 1;
        v68 = (__int64 *)(v16 + 8LL * v118);
        if ( *v115 )
          ++*(_DWORD *)(v66 + 8);
        v69 = *v68;
        if ( *v68 )
        {
          v60 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v60 )
          {
            v99 = v115;
            v104 = (__int64 *)(v16 + 8LL * v118);
            v116 = v118 + 1;
            v122 = v66;
            sub_15D7BC0(v95, v69);
            v65 = v99;
            v68 = v104;
            v67 = v116;
            v66 = v122;
          }
        }
        *v68 = v66;
        v118 = v67;
      }
      v63 = v65 + 1;
    }
    while ( v110 != v63 );
  }
LABEL_14:
  v125[1] = v16;
  sub_39BEE0(v125, v118);
  if ( !(unsigned __int8)sub_6AC390(*(_QWORD *)(a1 + 144), a2, v97, (_DWORD)v15, v16, (int)a1 + 480, a1 + 496) )
  {
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v17 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v101, (_DWORD)v15, v118, v16, v97);
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v119 = v17;
      sub_629FE0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v119;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_629FE0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = a2;
    }
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v18 = *(_QWORD *)(a1 + 480);
  v126[0] = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  sub_62BD60((_QWORD *)(a1 + 56), v126);
  v19 = *(_QWORD *)(a1 + 160);
  if ( v19 )
    *(_DWORD *)(v19 - 4) -= v100;
  v20 = *(_QWORD *)(a1 + 528);
  if ( v20 )
    *(_DWORD *)(v20 - 4) -= v100;
  sub_15844D0(a1);
  v21 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v21 = *(_QWORD *)(a1 + 480);
  }
  sub_629FE0(v21, *(_QWORD *)(a1 + 488));
  v22 = *(_QWORD *)(a1 + 504);
  v23 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_629F20(v23, v22);
  *(_QWORD *)(a1 + 496) = 0;
  v24 = *(_QWORD *)(a1 + 40);
  v25 = *(_DWORD *)(v24 - 4);
  *(_DWORD *)(v24 - 4) = v25 - 1;
  if ( *(_QWORD *)(a1 + 480) != a2 && v25 != 1 )
    *(_BYTE *)(v24 + 16LL * (unsigned int)(v25 - 2) + 8) |= 2u;
  sub_2334C0(v125);
  return sub_2334C0(&v123);
}

