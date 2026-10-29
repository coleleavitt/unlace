__int64 __fastcall sub_BC6030(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  char **v7; // rbx
  __int64 v8; // rdx
  char **exception; // rbx
  __int64 v10; // rdx
  __int64 v12; // r13
  __int64 *v14; // rsi
  _QWORD *v15; // rbx
  __int64 *v16; // r8
  unsigned int **v17; // r15
  int v18; // ecx
  int v19; // r14d
  unsigned int v20; // r14d
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned int *v30; // r15
  unsigned int v31; // r14d
  __int64 result; // rax
  _DWORD *v33; // rsi
  _DWORD *v34; // rdi
  bool v35; // zf
  _DWORD *v36; // rsi
  _DWORD *v37; // rdi
  unsigned int v38; // ecx
  int v39; // eax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  int v45; // edx
  __int64 *v46; // r8
  __int64 v47; // r13
  unsigned int v48; // edx
  __int64 v49; // rax
  unsigned int v50; // r9d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rax
  int v54; // edx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // r9
  int v60; // edx
  unsigned int v61; // edx
  __int64 v62; // rax
  unsigned int v63; // r8d
  size_t v64; // rsi
  unsigned int *v65; // rax
  _DWORD *v66; // rcx
  __int64 v67; // rax
  int v68; // edx
  __int64 v69; // rax
  unsigned int *v70; // rsi
  unsigned int *v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  int v74; // edx
  int v75; // eax
  unsigned int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // eax
  int v80; // edx
  unsigned int v81; // eax
  __int64 v82; // rdx
  char v83; // al
  int v84; // eax
  unsigned int i; // r14d
  __int64 v86; // rax
  unsigned int j; // r14d
  __int64 v88; // rax
  int v89; // eax
  int v90; // [rsp-10h] [rbp-110h]
  int v91; // [rsp-8h] [rbp-108h]
  int v92; // [rsp+0h] [rbp-100h]
  int v93; // [rsp+8h] [rbp-F8h]
  int *v94; // [rsp+8h] [rbp-F8h]
  __int64 v95; // [rsp+10h] [rbp-F0h]
  int v96; // [rsp+18h] [rbp-E8h]
  __int64 v97; // [rsp+18h] [rbp-E8h]
  int v98; // [rsp+20h] [rbp-E0h]
  __int64 v99; // [rsp+20h] [rbp-E0h]
  char v100; // [rsp+28h] [rbp-D8h]
  __int64 *v101; // [rsp+28h] [rbp-D8h]
  __int64 v102; // [rsp+28h] [rbp-D8h]
  _QWORD *v103; // [rsp+28h] [rbp-D8h]
  int v104; // [rsp+30h] [rbp-D0h]
  int v105[2]; // [rsp+30h] [rbp-D0h]
  int v106[2]; // [rsp+30h] [rbp-D0h]
  unsigned int v107; // [rsp+30h] [rbp-D0h]
  int v108[2]; // [rsp+30h] [rbp-D0h]
  int v109[2]; // [rsp+30h] [rbp-D0h]
  int v110; // [rsp+30h] [rbp-D0h]
  unsigned int v111; // [rsp+38h] [rbp-C8h]
  unsigned int v112; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v113; // [rsp+38h] [rbp-C8h]
  __int64 *v114; // [rsp+40h] [rbp-C0h]
  unsigned int *v115; // [rsp+40h] [rbp-C0h]
  __int64 *v116; // [rsp+48h] [rbp-B8h]
  __int64 v117; // [rsp+48h] [rbp-B8h]
  unsigned __int8 v118; // [rsp+48h] [rbp-B8h]
  unsigned __int8 v119; // [rsp+48h] [rbp-B8h]
  unsigned __int8 v120; // [rsp+48h] [rbp-B8h]
  unsigned __int8 v121; // [rsp+48h] [rbp-B8h]
  __int64 v122; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v123; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v124[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v125[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v126[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v127[2]; // [rsp+90h] [rbp-70h] BYREF
  int *v128; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v129; // [rsp+A8h] [rbp-58h] BYREF
  int *v130; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v131; // [rsp+B8h] [rbp-48h] BYREF
  int v132; // [rsp+C0h] [rbp-40h]
  _QWORD *v133; // [rsp+C8h] [rbp-38h]

  v12 = a2;
  v14 = *(__int64 **)(a5 + 8);
  v15 = *(_QWORD **)(a6 + 8);
  v111 = a3;
  v16 = &v14[(unsigned int)v12];
  v116 = v14;
  v17 = (unsigned int **)&v15[a3];
  if ( v14 )
  {
    v18 = *((_DWORD *)v14 - 1) - v12;
    if ( v15 )
    {
LABEL_3:
      v19 = *((_DWORD *)v15 - 1);
      goto LABEL_4;
    }
  }
  else
  {
    v18 = -(int)v12;
    if ( v15 )
      goto LABEL_3;
  }
  v19 = 0;
LABEL_4:
  v20 = v19 - a3;
  if ( a4 )
  {
    v21 = v20;
    v20 = a3;
    v111 = v21;
    v22 = v18;
    v18 = v12;
    v12 = v22;
    v17 = *(unsigned int ***)(a6 + 8);
    v15 += a3;
    v23 = v16;
    v16 = v14;
    v116 = v23;
  }
  v104 = v18;
  v114 = v16;
  v95 = *(_QWORD *)(a1 + 24);
  v24 = sub_15D1F10(*v16);
  v25 = *(_QWORD *)(a1 + 1736);
  if ( v104 )
  {
    if ( v104 == 1 )
    {
      v26 = *v114;
      v115 = (unsigned int *)*v114;
    }
    else
    {
      v26 = sub_15E1AF0(v25);
      v115 = (unsigned int *)v26;
    }
  }
  else
  {
    v39 = sub_15D2D60(v25, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v24);
    v26 = sub_15DC610(v25, v39, 0, 0, v40, v41, v92, v93, v95, v96, v98, v100, 0, v111, v25, v116);
    v115 = (unsigned int *)v26;
  }
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v97 = *(_QWORD *)(a1 + 24);
  v27 = sub_15D1F10(*v17);
  v28 = *(_QWORD *)(a1 + 1736);
  if ( v20 )
  {
    if ( v20 == 1 )
    {
      v30 = *v17;
      goto LABEL_15;
    }
    v29 = sub_15E1AF0(v28);
  }
  else
  {
    v89 = sub_15D2D60(v28, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v27);
    v29 = sub_15DC610(v28, v89, 0, 0, v90, v91, v92, v93, v95, v97, v98, v100, v28, v111, (int)v115, v116);
  }
  v30 = (unsigned int *)v29;
LABEL_15:
  if ( v30 )
    ++v30[2];
  sub_1579480(v124, a1 + 1224);
  sub_1579480(v125, a1 + 1224);
  v31 = sub_966380(a1, v124[0], v125[0]);
  *(_QWORD *)v105 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v105 + 7488LL) + 48LL))(
    *(_QWORD *)(*(_QWORD *)v105 + 7488LL),
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v105 + 8840LL) + 8LL * (v31 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v105 + 7488LL) + 64LL))(*(_QWORD *)(*(_QWORD *)v105 + 7488LL));
  result = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v31) != 1 )
    goto LABEL_18;
  v94 = *(int **)(a1 + 24);
  v126[0] = (__int64)v94;
  v127[0] = (__int64)v94;
  if ( (_DWORD)v12 )
  {
    v42 = *v116;
    if ( *v116 )
      ++*(_DWORD *)(v42 + 8);
    *(_QWORD *)v106 = v42;
    v43 = (_QWORD *)(sub_186B270(0x18u) + 8);
    v44 = *(_QWORD *)v106;
    *(v43 - 1) = 2;
    v45 = 1;
    v46 = &v116[v12];
    v47 = (__int64)v43;
    while ( 1 )
    {
      *v43 = v44;
      ++v116;
      *(_DWORD *)(v47 - 4) = v45;
      if ( v46 == v116 )
        break;
      v44 = *v116;
      if ( *v116 )
        ++*(_DWORD *)(v44 + 8);
      v48 = *(_DWORD *)(v47 - 4);
      if ( v48 == *(_DWORD *)(v47 - 8) )
      {
        v50 = (3 * v48 + 1) >> 1;
        v51 = 8 * v50 + 8;
        if ( 8 * v48 + 8 >= (unsigned int)v51 || v48 >= v50 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526((__int64 *)&v128, "Overflow encountered when expanding vector", v10);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v128);
          sub_233E40((__int64)&v128);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v99 = v44;
        v101 = v46;
        v107 = (3 * v48 + 1) >> 1;
        v52 = (unsigned int *)sub_186B300((void *)(v47 - 8), v51);
        v47 = (__int64)(v52 + 2);
        v46 = v101;
        v44 = v99;
        *v52 = v107;
        v53 = v52[1];
        v54 = v53;
        v43 = (_QWORD *)(v47 + 8 * v53);
        v45 = v54 + 1;
      }
      else
      {
        v49 = v48;
        v45 = v48 + 1;
        v43 = (_QWORD *)(v47 + 8 * v49);
      }
    }
  }
  else
  {
    v47 = 0;
  }
  if ( v111 )
  {
    v55 = *v15;
    if ( *v15 )
      ++*(_DWORD *)(v55 + 8);
    *(_QWORD *)v108 = v55;
    v56 = (_QWORD *)sub_186B270(0x18u);
    *v56 = 2;
    v57 = v56 + 1;
    v117 = (__int64)v57;
    v58 = *(_QWORD *)v108;
    v59 = &v15[v111];
    v60 = 1;
    while ( 1 )
    {
      *v57 = v58;
      ++v15;
      *(_DWORD *)(v117 - 4) = v60;
      if ( v59 == v15 )
        break;
      v58 = *v15;
      if ( *v15 )
        ++*(_DWORD *)(v58 + 8);
      v61 = *(_DWORD *)(v117 - 4);
      if ( v61 == *(_DWORD *)(v117 - 8) )
      {
        v63 = (3 * v61 + 1) >> 1;
        v64 = 8 * v63 + 8;
        if ( 8 * v61 + 8 >= (unsigned int)v64 || v61 >= v63 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_154526((__int64 *)&v128, "Overflow encountered when expanding vector", v8);
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v128);
          sub_233E40((__int64)&v128);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v102 = v58;
        *(_QWORD *)v109 = v59;
        v112 = (3 * v61 + 1) >> 1;
        v65 = (unsigned int *)sub_186B300((void *)(v117 - 8), v64);
        v66 = v65 + 2;
        v59 = *(_QWORD **)v109;
        v117 = (__int64)(v65 + 2);
        *v65 = v112;
        v67 = v65[1];
        v68 = v67;
        v57 = &v66[2 * v67];
        v58 = v102;
        v60 = v68 + 1;
      }
      else
      {
        v62 = v61;
        v60 = v61 + 1;
        v57 = (_QWORD *)(v117 + 8 * v62);
      }
    }
  }
  else
  {
    v117 = 0;
  }
  v69 = *(unsigned int *)(a1 + 240);
  if ( !(_DWORD)v69 )
  {
LABEL_76:
    v103 = sub_BB2220(a1, a7, v31);
    v84 = *(_DWORD *)(a1 + 564);
    v129 = 0;
    v110 = v84;
    *(_DWORD *)(a1 + 564) = v84 + 1;
    v128 = v94;
    if ( v47 )
    {
      for ( i = 0; i < *(_DWORD *)(v47 - 4); ++i )
      {
        v86 = *(_QWORD *)(v47 + 8LL * i);
        v122 = v86;
        if ( v86 )
          ++*(_DWORD *)(v86 + 8);
        sub_BB70A0(&v129, &v122);
      }
    }
    v131 = 0;
    v130 = v94;
    if ( v117 )
    {
      for ( j = 0; j < *(_DWORD *)(v117 - 4); ++j )
      {
        v88 = *(_QWORD *)(v117 + 8LL * j);
        v123 = v88;
        if ( v88 )
          ++*(_DWORD *)(v88 + 8);
        sub_BB70A0(&v131, &v123);
      }
    }
    v132 = v110;
    v133 = v103;
    sub_BD1D40(a1 + 240, &v128);
    sub_2334C0((__int64 *)&v130);
    sub_2334C0((__int64 *)&v128);
    v128 = nullptr;
    sub_BC5010(a1, v103, &v128, v115, v30, 1);
    v83 = 1;
    goto LABEL_89;
  }
  v70 = *(unsigned int **)(a1 + 272);
  v71 = &v70[v69];
  while ( 1 )
  {
    v72 = *(_QWORD *)(a1 + 256) + 48LL * *v70;
    v73 = *(_QWORD *)(v72 + 8);
    if ( !v47 )
    {
      if ( !v73 )
      {
        v75 = 0;
        goto LABEL_64;
      }
      v74 = 0;
LABEL_62:
      v75 = *(_DWORD *)(v73 - 4);
      goto LABEL_63;
    }
    v74 = *(_DWORD *)(v47 - 4);
    if ( v73 )
      goto LABEL_62;
    v75 = 0;
LABEL_63:
    if ( v74 != v75 )
      goto LABEL_75;
LABEL_64:
    v76 = v75 - 1;
    while ( v76 != -1 )
    {
      v77 = v76--;
      if ( *(_QWORD *)(v47 + 8 * v77) != *(_QWORD *)(v73 + 8 * v77) )
        goto LABEL_75;
    }
    v78 = *(_QWORD *)(v72 + 24);
    if ( !v117 )
      break;
    v79 = *(_DWORD *)(v117 - 4);
    if ( v78 )
      goto LABEL_69;
    v80 = 0;
LABEL_70:
    if ( v80 == v79 )
      goto LABEL_71;
LABEL_75:
    if ( ++v70 == v71 )
      goto LABEL_76;
  }
  v79 = 0;
  if ( v78 )
  {
LABEL_69:
    v80 = *(_DWORD *)(v78 - 4);
    goto LABEL_70;
  }
LABEL_71:
  v81 = v79 - 1;
  while ( v81 != -1 )
  {
    v82 = v81--;
    if ( *(_QWORD *)(v117 + 8 * v82) != *(_QWORD *)(v78 + 8 * v82) )
      goto LABEL_75;
  }
  v83 = 0;
LABEL_89:
  v113 = v83;
  v127[1] = v117;
  sub_2334C0(v127);
  v126[1] = v47;
  sub_2334C0(v126);
  result = v113;
LABEL_18:
  v33 = v125[0];
  if ( v125[0] )
  {
    v34 = v125[1];
    v35 = v125[0][2]-- == 1;
    if ( v35 )
    {
      v119 = result;
      sub_15D7BC0(v34, v33);
      result = v119;
    }
  }
  v36 = v124[0];
  if ( v124[0] )
  {
    v37 = v124[1];
    v35 = v124[0][2]-- == 1;
    if ( v35 )
    {
      v120 = result;
      sub_15D7BC0(v37, v36);
      result = v120;
    }
  }
  if ( v30 )
  {
    v35 = v30[2]-- == 1;
    if ( v35 )
    {
      v121 = result;
      sub_15D7BC0(v97, v30);
      result = v121;
    }
  }
  if ( v115 )
  {
    v38 = v115[2];
    v115[2] = v38 - 1;
    if ( v38 == 1 )
    {
      v118 = result;
      sub_15D7BC0(v95, v115);
      return v118;
    }
  }
  return result;
}

