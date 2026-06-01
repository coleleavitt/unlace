__int64 __fastcall sub_429CC0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  char **v3; // r12
  char **exception; // r12
  char **v5; // r12
  char **v6; // r12
  __int64 v9; // rdx
  int v10; // esi
  _QWORD *v11; // rdx
  __int64 *v12; // rcx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 *v18; // rbx
  unsigned int v19; // r12d
  __int64 v20; // rbx
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rsi
  int v24; // eax
  unsigned int *v25; // rsi
  unsigned int v26; // r12d
  unsigned int v27; // r15d
  _QWORD *v28; // rdx
  __int64 v29; // rbx
  _QWORD *v30; // r8
  __int64 v31; // r13
  __int64 v32; // rdi
  int v33; // esi
  __int64 v34; // r9
  int v35; // eax
  _QWORD *v36; // r8
  __int64 v37; // r8
  _QWORD *v38; // r9
  __int64 v39; // rax
  bool v40; // zf
  __int64 v41; // rdi
  _QWORD *v42; // r8
  __int64 v43; // rsi
  void (__fastcall ***v44)(_QWORD); // rbx
  __int64 v45; // rbx
  int v46; // eax
  __int64 v47; // rbx
  __int64 v48; // r13
  unsigned __int64 v49; // r12
  _QWORD *v50; // rax
  __int64 *v51; // rsi
  int i; // eax
  unsigned int v53; // eax
  __int64 v54; // rbx
  unsigned int v55; // r12d
  size_t v56; // rsi
  unsigned int *v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rbx
  _QWORD *v60; // rdi
  void (__fastcall ***v61)(_QWORD); // rbx
  char v63; // al
  __int64 v64; // rsi
  unsigned int v65; // r14d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r13
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rbx
  __int64 *v73; // r13
  __int64 v74; // rsi
  unsigned int v75; // r13d
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rcx
  unsigned __int64 v79; // r12
  __int64 v80; // rsi
  __int64 v81; // rdi
  _QWORD *v82; // rax
  _QWORD *v83; // r12
  __int64 v84; // rdi
  unsigned __int64 v85; // r12
  __int64 *v86; // rbx
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rbx
  unsigned int v90; // r12d
  size_t v91; // rsi
  unsigned int *v92; // rax
  unsigned int v93; // eax
  __int64 v94; // rax
  _QWORD *v95; // rdi
  __int64 v96; // rdx
  _QWORD *v97; // rax
  unsigned __int64 v98; // r12
  __int64 *v99; // rbx
  __int64 v100; // rsi
  __int64 v101; // rdi
  _QWORD *v102; // rax
  unsigned int v103; // [rsp+4h] [rbp-D4h]
  __int64 v105; // [rsp+18h] [rbp-C0h]
  _QWORD *v106; // [rsp+18h] [rbp-C0h]
  _QWORD *v107; // [rsp+18h] [rbp-C0h]
  __int64 v108; // [rsp+20h] [rbp-B8h]
  unsigned int v109; // [rsp+28h] [rbp-B0h]
  unsigned int v110; // [rsp+2Ch] [rbp-ACh]
  __int64 v111; // [rsp+30h] [rbp-A8h]
  __int64 v112; // [rsp+38h] [rbp-A0h]
  _QWORD *v113; // [rsp+48h] [rbp-90h]
  __int64 v114; // [rsp+48h] [rbp-90h]
  _QWORD *v115; // [rsp+48h] [rbp-90h]
  __int64 v116; // [rsp+50h] [rbp-88h]
  void *ptr; // [rsp+70h] [rbp-68h] BYREF
  char v118[8]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v119[11]; // [rsp+80h] [rbp-58h] BYREF

  v111 = a1[6];
  sub_4334D0(v111, a2, 0);
  v9 = a2[1];
  if ( v9 )
  {
    v109 = *(_DWORD *)(v9 - 4);
    v10 = v109;
  }
  else
  {
    v109 = 0;
    v10 = 0;
  }
  v110 = sub_E60CB0((std::ios_base *)a1[6], v10, v9);
  if ( v110 != 1 )
    goto LABEL_88;
  v15 = a3[1];
  if ( !v15 )
    goto LABEL_88;
  LODWORD(v12) = *(_DWORD *)(v15 - 4);
  if ( !(_DWORD)v12 )
    goto LABEL_88;
  v16 = (_QWORD *)a1[6];
  ptr = nullptr;
  (*(void (__fastcall **)(_QWORD *, void **))(*v16 + 32LL))(v16, &ptr);
  if ( ptr )
  {
    v17 = v16[7];
    if ( v17 )
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v17 + 32LL))(v17, &ptr);
  }
  v12 = (__int64 *)a3[1];
  v18 = v12;
  if ( v12 )
  {
    v19 = 0;
    while ( v19 < *((_DWORD *)v12 - 1) )
    {
      v20 = v12[v19];
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      v21 = (_QWORD *)a2[1];
      if ( v21 )
      {
        v22 = *((_DWORD *)v21 - 1);
        if ( v22 == *((_DWORD *)v21 - 2) )
        {
          v75 = (3 * v22 + 1) >> 1;
          v76 = 8 * v75 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v76 || v22 >= v75 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v119, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v119);
            sub_233E40((__int64)v119);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v77 = (unsigned int *)sub_186B300(v21 - 1, v76);
          v78 = v77[1];
          v21 = v77 + 2;
          *v77 = v75;
          a2[1] = (__int64)(v77 + 2);
          v25 = &v77[2 * v78 + 2];
          v24 = v78 + 1;
          v12 = (__int64 *)a3[1];
        }
        else
        {
          v23 = v22;
          v24 = v22 + 1;
          v25 = (unsigned int *)&v21[v23];
        }
      }
      else
      {
        v82 = (_QWORD *)sub_186B270(0x18u);
        v21 = v82 + 1;
        *v82 = 2;
        v24 = 1;
        a2[1] = (__int64)v21;
        v25 = (unsigned int *)v21;
        v12 = (__int64 *)a3[1];
      }
      *(_QWORD *)v25 = v20;
      ++v19;
      v18 = v12;
      *((_DWORD *)v21 - 1) = v24;
      if ( !v12 )
        goto LABEL_18;
    }
    v79 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
    if ( (unsigned __int64)v12 < v79 )
    {
      do
      {
        while ( 1 )
        {
          v80 = *v18;
          if ( *v18 )
          {
            v81 = *a3;
            v40 = (*(_DWORD *)(v80 + 8))-- == 1;
            if ( v40 )
              break;
          }
          if ( (unsigned __int64)++v18 >= v79 )
            goto LABEL_125;
        }
        sub_15D7BC0(v81, v80);
        ++v18;
      }
      while ( (unsigned __int64)v18 < v79 );
LABEL_125:
      v12 = (__int64 *)a3[1];
    }
LABEL_18:
    if ( v12 )
      *((_DWORD *)v12 - 1) = 0;
  }
  v11 = (_QWORD *)a2[1];
  if ( !v11 )
    goto LABEL_176;
  v103 = v109;
  v26 = v109;
  do
  {
    if ( v26 >= *((_DWORD *)v11 - 1) )
      break;
    v119[0] = 0;
    sub_1360C00(v118, ptr, v119);
    v27 = v26;
    sub_18572D0(v119);
    v28 = (_QWORD *)a2[1];
    if ( !v28 )
    {
      v44 = (void (__fastcall ***)(_QWORD))ptr;
      if ( !ptr || (v40 = *((_DWORD *)ptr + 4) == 1, --*((_DWORD *)ptr + 4), !v40) )
      {
        ptr = nullptr;
        goto LABEL_64;
      }
LABEL_141:
      (**v44)(v44);
      sub_186B220(v44);
      v28 = (_QWORD *)a2[1];
      goto LABEL_56;
    }
    while ( v27 < *((_DWORD *)v28 - 1) )
    {
      v108 = *a1;
      v29 = v28[v27];
      v105 = v27;
      if ( v29 )
      {
        ++*(_DWORD *)(v29 + 8);
        if ( (unsigned __int8)sub_1361DE0(v118, v29) )
          goto LABEL_50;
        v28 = (_QWORD *)a2[1];
        v112 = *a1;
        v30 = &v28[v103];
        v31 = *v30;
        if ( !*v30 )
        {
          v41 = *a2;
          ++*(_DWORD *)(v29 + 8);
          *v30 = v29;
          v34 = v41;
          if ( v103 >= v26 )
          {
            v36 = &v28[v105];
            v64 = v28[v27];
            if ( !v64 )
              goto LABEL_145;
            goto LABEL_96;
          }
          if ( v26 == v27 )
          {
            v36 = &v28[v26];
            v64 = *v36;
            if ( !*v36 )
            {
LABEL_145:
              ++v103;
              ++v26;
LABEL_50:
              v40 = (*(_DWORD *)(v29 + 8))-- == 1;
              if ( v40 )
                sub_15D7BC0(v108, v29);
              goto LABEL_52;
            }
            goto LABEL_96;
          }
          v37 = v26;
          v38 = &v28[v37];
          v39 = v28[v37];
          if ( v39 )
          {
            ++*(_DWORD *)(v39 + 8);
            v40 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( !v40 )
            {
              v29 = v39;
              goto LABEL_37;
            }
LABEL_126:
            v116 = v37 * 8;
            v114 = v39;
            sub_15D7BC0(v108, v29);
            v28 = (_QWORD *)a2[1];
            v29 = v114;
            v38 = (_QWORD *)((char *)v28 + v116);
            v39 = *(_QWORD *)((char *)v28 + v116);
          }
          else
          {
LABEL_33:
            v40 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v40 )
              goto LABEL_126;
            v29 = v39;
          }
          v41 = *a2;
          if ( v31 )
            ++*(_DWORD *)(v31 + 8);
LABEL_37:
          if ( v39 )
            goto LABEL_38;
          goto LABEL_39;
        }
        v32 = *a2;
        ++*(_DWORD *)(v31 + 8);
        ++*(_DWORD *)(v29 + 8);
        v33 = *(_DWORD *)(v31 + 8);
        v34 = v32;
        v35 = v33 - 1;
        *(_DWORD *)(v31 + 8) = v33 - 1;
        if ( v33 != 1 )
          goto LABEL_29;
LABEL_92:
        v113 = v30;
        sub_15D7BC0(v32, v31);
        v28 = (_QWORD *)a2[1];
        *v113 = v29;
        if ( v103 >= v26 )
        {
          v35 = *(_DWORD *)(v31 + 8);
          v34 = *a2;
          v36 = &v28[v105];
          v33 = v35 + 1;
LABEL_95:
          *(_DWORD *)(v31 + 8) = v33;
          v64 = *v36;
          if ( !*v36 )
            goto LABEL_117;
          goto LABEL_96;
        }
        if ( v26 == v27 )
        {
          v34 = *a2;
          v36 = &v28[v26];
          v35 = *(_DWORD *)(v31 + 8);
          v33 = v35 + 1;
          goto LABEL_95;
        }
        goto LABEL_31;
      }
      v63 = sub_1361DE0(v118, 0);
      v28 = (_QWORD *)a2[1];
      if ( v63 )
        goto LABEL_53;
      v112 = *a1;
      v30 = &v28[v103];
      v31 = *v30;
      if ( *v30 )
      {
        v35 = *(_DWORD *)(v31 + 8);
        v32 = *a2;
        v33 = v35 + 1;
        v34 = *a2;
        *(_DWORD *)(v31 + 8) = v35 + 1;
        *(_DWORD *)(v31 + 8) = v35;
        if ( !v35 )
          goto LABEL_92;
LABEL_29:
        *v30 = v29;
        if ( v103 >= v26 )
        {
          *(_DWORD *)(v31 + 8) = v33;
          v36 = &v28[v105];
          v64 = v28[v27];
          if ( !v64 )
          {
LABEL_117:
            *v36 = v31;
            ++v26;
            ++v103;
            goto LABEL_47;
          }
          goto LABEL_96;
        }
        v36 = &v28[v26];
        if ( v26 == v27 )
          goto LABEL_95;
LABEL_31:
        v37 = v26;
        v38 = &v28[v37];
        v39 = v28[v37];
        if ( v39 )
          goto LABEL_32;
        if ( v29 )
          goto LABEL_33;
        v41 = *a2;
        goto LABEL_133;
      }
      v41 = *a2;
      v34 = *a2;
      if ( v103 >= v26 )
      {
        v36 = &v28[v105];
        v64 = v28[v27];
        if ( !v64 )
          goto LABEL_170;
LABEL_96:
        v40 = (*(_DWORD *)(v64 + 8))-- == 1;
        if ( v40 )
        {
          v107 = v36;
          sub_15D7BC0(v34, v64);
          v36 = v107;
        }
        *v36 = v31;
        goto LABEL_45;
      }
      if ( v26 == v27 )
      {
        v36 = &v28[v26];
        v64 = *v36;
        if ( !*v36 )
        {
LABEL_170:
          ++v103;
          ++v26;
          goto LABEL_53;
        }
        goto LABEL_96;
      }
      v37 = v26;
      v38 = &v28[v37];
      v39 = v28[v37];
      if ( v39 )
      {
LABEL_32:
        ++*(_DWORD *)(v39 + 8);
        if ( v29 )
          goto LABEL_33;
        v41 = *a2;
        if ( v31 )
        {
          ++*(_DWORD *)(v31 + 8);
          v29 = v39;
LABEL_38:
          v40 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( !v40 )
          {
LABEL_39:
            *v38 = v31;
            v42 = &v28[v105];
            if ( !v29 )
              goto LABEL_41;
            goto LABEL_40;
          }
        }
        else
        {
          v40 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( !v40 )
          {
            *v38 = 0;
            v29 = v39;
            v42 = &v28[v105];
LABEL_40:
            ++*(_DWORD *)(v29 + 8);
            goto LABEL_41;
          }
          v29 = v39;
        }
        v115 = v38;
        sub_15D7BC0(v41, v39);
        v41 = *a2;
        v28 = (_QWORD *)a2[1];
        v38 = v115;
        goto LABEL_39;
      }
LABEL_133:
      if ( !v31 )
      {
        *v38 = 0;
        v29 = 0;
        v42 = &v28[v105];
        v43 = v28[v27];
        if ( !v43 )
          goto LABEL_170;
LABEL_42:
        v40 = (*(_DWORD *)(v43 + 8))-- == 1;
        if ( v40 )
        {
          v106 = v42;
          sub_15D7BC0(v41, v43);
          v42 = v106;
        }
        goto LABEL_44;
      }
      ++*(_DWORD *)(v31 + 8);
      v29 = 0;
      *v38 = v31;
      v42 = &v28[v105];
LABEL_41:
      v43 = *v42;
      if ( *v42 )
        goto LABEL_42;
LABEL_44:
      *v42 = v29;
LABEL_45:
      ++v103;
      ++v26;
      if ( !v31 )
        goto LABEL_49;
      v35 = *(_DWORD *)(v31 + 8) - 1;
LABEL_47:
      *(_DWORD *)(v31 + 8) = v35;
      if ( !v35 )
        sub_15D7BC0(v112, v31);
LABEL_49:
      if ( v29 )
        goto LABEL_50;
LABEL_52:
      v28 = (_QWORD *)a2[1];
LABEL_53:
      ++v27;
      if ( !v28 )
        break;
    }
    v44 = (void (__fastcall ***)(_QWORD))ptr;
    if ( ptr )
    {
      v40 = (*((_DWORD *)ptr + 4))-- == 1;
      if ( v40 )
        goto LABEL_141;
    }
LABEL_56:
    ptr = nullptr;
    v45 = v26;
    if ( !v28 )
      goto LABEL_64;
    if ( v26 >= *((_DWORD *)v28 - 1) )
      goto LABEL_63;
    while ( 2 )
    {
      v46 = sub_E60CB0((std::ios_base *)a1[6], ++v26, (int)v28);
      if ( v46 == -1 )
      {
        v69 = v45;
        v70 = sub_15EC2C0(*a1, *(_QWORD *)(a2[1] + 8 * v45));
        v28 = (_QWORD *)a2[1];
        v71 = *a2;
        v72 = v70;
        v73 = &v28[v69];
        if ( v70 )
          ++*(_DWORD *)(v70 + 8);
        v74 = *v73;
        if ( *v73 )
        {
          v40 = (*(_DWORD *)(v74 + 8))-- == 1;
          if ( v40 )
          {
            sub_15D7BC0(v71, v74);
            v28 = (_QWORD *)a2[1];
          }
        }
        *v73 = v72;
LABEL_61:
        if ( !v28 )
          goto LABEL_64;
        v45 = v26;
        if ( v26 >= *((_DWORD *)v28 - 1) )
          goto LABEL_63;
        continue;
      }
      break;
    }
    if ( v46 != 1 )
    {
      v28 = (_QWORD *)a2[1];
      if ( !v46 )
      {
        if ( !v28 )
          goto LABEL_191;
        v89 = *((unsigned int *)v28 - 1);
        if ( v109 >= (unsigned int)v89 )
          goto LABEL_160;
        v98 = (unsigned __int64)&v28[v89];
        v99 = &v28[v109];
        if ( (unsigned __int64)v99 >= v98 )
        {
LABEL_190:
          *((_DWORD *)v28 - 1) = v109;
LABEL_168:
          sub_13606C0(v118);
          v110 = 0;
          goto LABEL_85;
        }
        do
        {
          v100 = *v99;
          if ( *v99 )
          {
            v101 = *a2;
            v40 = (*(_DWORD *)(v100 + 8))-- == 1;
            if ( v40 )
              sub_15D7BC0(v101, v100);
          }
          ++v99;
        }
        while ( (unsigned __int64)v99 < v98 );
        v28 = (_QWORD *)a2[1];
        if ( v28 )
        {
          LODWORD(v89) = *((_DWORD *)v28 - 1);
LABEL_160:
          if ( (unsigned int)v89 >= v109 )
            goto LABEL_190;
        }
        else
        {
LABEL_191:
          if ( !v109 )
            goto LABEL_168;
          v102 = (_QWORD *)sub_186B270(0x18u);
          v28 = v102 + 1;
          *v102 = 2;
          LODWORD(v89) = 0;
          a2[1] = (__int64)(v102 + 1);
        }
        while ( 1 )
        {
          v93 = *((_DWORD *)v28 - 2);
          if ( v93 >= v109 )
            break;
          v90 = (3 * v93 + 1) >> 1;
          v91 = 8 * v90 + 8;
          if ( 8 * v93 + 8 >= (unsigned int)v91 || v93 >= v90 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v119, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v119);
            sub_233E40((__int64)v119);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v92 = (unsigned int *)sub_186B300(v28 - 1, v91);
          v28 = v92 + 2;
          *v92 = v90;
          a2[1] = (__int64)(v92 + 2);
        }
        *((_DWORD *)v28 - 1) = v109;
        v94 = 8LL * (unsigned int)v89;
        v95 = &v28[(unsigned __int64)v94 / 8];
        v96 = 8LL * v109;
        if ( v94 != v96 )
          memset(v95, 0, v96 - v94);
        goto LABEL_168;
      }
      goto LABEL_61;
    }
    v83 = (_QWORD *)a1[6];
    (*(void (__fastcall **)(_QWORD *, void **))(*v83 + 32LL))(v83, &ptr);
    if ( ptr )
    {
      v84 = v83[7];
      if ( v84 )
        (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v84 + 32LL))(v84, &ptr);
    }
LABEL_63:
    v26 = v45;
LABEL_64:
    sub_13606C0(v118);
    v11 = (_QWORD *)a2[1];
  }
  while ( v11 );
  if ( v103 < v26 )
  {
    v12 = (__int64 *)a3[1];
    v47 = v11[v103];
    v48 = 8LL * v103;
    v49 = 8 * (v103 + (unsigned __int64)(v26 - 1 - v103) + 1);
    if ( v47 )
      ++*(_DWORD *)(v47 + 8);
    if ( v12 )
      goto LABEL_73;
    v50 = (_QWORD *)sub_186B270(0x18u);
    v12 = v50 + 1;
    *v50 = 2;
    v51 = v50 + 1;
    a3[1] = (__int64)(v50 + 1);
    v11 = (_QWORD *)a2[1];
    for ( i = 1; ; i = (_DWORD)v67 + 1 )
    {
      v48 += 8;
      *v51 = v47;
      *((_DWORD *)v12 - 1) = i;
      if ( v48 == v49 )
        break;
      while ( 1 )
      {
        v47 = v11[(unsigned __int64)v48 / 8];
        if ( v47 )
          ++*(_DWORD *)(v47 + 8);
LABEL_73:
        v53 = *((_DWORD *)v12 - 1);
        if ( v53 == *((_DWORD *)v12 - 2) )
          break;
        v48 += 8;
        v12[v53] = v47;
        *((_DWORD *)v12 - 1) = v53 + 1;
        if ( v48 == v49 )
          goto LABEL_75;
      }
      v65 = (3 * v53 + 1) >> 1;
      v66 = 8 * v65 + 8;
      if ( 8 * v53 + 8 >= (unsigned int)v66 || v53 >= v65 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v119, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v119);
        sub_233E40((__int64)v119);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v67 = (unsigned int *)sub_186B300(v12 - 1, v66);
      v68 = v67[1];
      v12 = (__int64 *)(v67 + 2);
      *v67 = v65;
      LODWORD(v67) = v68;
      a3[1] = (__int64)v12;
      v51 = &v12[v68];
      v11 = (_QWORD *)a2[1];
    }
  }
LABEL_75:
  if ( v11 )
  {
    v54 = *((unsigned int *)v11 - 1);
    if ( v109 >= (unsigned int)v54 )
      goto LABEL_77;
    v85 = (unsigned __int64)&v11[v54];
    v86 = &v11[v109];
    if ( (unsigned __int64)v86 >= v85 )
    {
LABEL_175:
      *((_DWORD *)v11 - 1) = v109;
      goto LABEL_85;
    }
    do
    {
      v87 = *v86;
      if ( *v86 )
      {
        v88 = *a2;
        v40 = (*(_DWORD *)(v87 + 8))-- == 1;
        if ( v40 )
          sub_15D7BC0(v88, v87);
      }
      ++v86;
    }
    while ( (unsigned __int64)v86 < v85 );
    v11 = (_QWORD *)a2[1];
    if ( v11 )
    {
      v54 = *((unsigned int *)v11 - 1);
LABEL_77:
      if ( (unsigned int)v54 >= v109 )
        goto LABEL_175;
LABEL_82:
      while ( 1 )
      {
        v58 = *((_DWORD *)v11 - 2);
        LODWORD(v12) = v109;
        if ( v58 >= v109 )
          break;
        v55 = (3 * v58 + 1) >> 1;
        v56 = 8 * v55 + 8;
        if ( 8 * v58 + 8 >= (unsigned int)v56 || v58 >= v55 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v119, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v119);
          sub_233E40((__int64)v119);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (unsigned int *)sub_186B300(v11 - 1, v56);
        v11 = v57 + 2;
        *v57 = v55;
        a2[1] = (__int64)(v57 + 2);
      }
      v59 = 8 * v54;
      *((_DWORD *)v11 - 1) = v109;
      v60 = &v11[(unsigned __int64)v59 / 8];
      v11 = (_QWORD *)(8LL * v109);
      if ( (_QWORD *)v59 != v11 )
        memset(v60, 0, (size_t)&v11[v59 / 0xFFFFFFFFFFFFFFF8LL]);
      goto LABEL_85;
    }
  }
LABEL_176:
  if ( v109 )
  {
    v97 = (_QWORD *)sub_186B270(0x18u);
    v11 = v97 + 1;
    *v97 = 2;
    v54 = 0;
    a2[1] = (__int64)(v97 + 1);
    goto LABEL_82;
  }
LABEL_85:
  v61 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v40 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v40 )
    {
      (**v61)(v61);
      sub_186B220(v61);
    }
  }
LABEL_88:
  sub_432170(v111, (_DWORD)a2, (_DWORD)v11, (_DWORD)v12, v13, v14);
  return v110;
}

