__int64 __fastcall sub_E60DA0(std::ios_base *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  char **v4; // r13
  __int64 v5; // rdx
  char **v6; // r13
  __int64 v7; // rdx
  char **v8; // r13
  __int64 v9; // rdx
  char **v10; // r15
  __int64 v11; // rdx
  char **exception; // r12
  __int64 v13; // rdx
  __int64 v15; // rdx
  unsigned int v16; // esi
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // r14d
  __int64 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  unsigned int *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 v31; // r14
  __int64 v32; // r12
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rdx
  unsigned int v41; // esi
  int v42; // eax
  __int64 v43; // rdx
  __int64 *v44; // rbp
  __int64 *v45; // r14
  __int64 v46; // rsi
  __int64 *v47; // rbp
  unsigned __int64 v48; // r13
  __int64 v49; // rsi
  void (__fastcall ***v50)(_QWORD); // rbx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // r15
  _QWORD *v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 *v60; // rcx
  __int64 *v61; // r13
  unsigned __int64 v62; // r14
  __int64 v63; // rsi
  unsigned int v64; // r13d
  _DWORD *v65; // rax
  __int64 *v66; // r13
  unsigned __int64 v67; // r14
  __int64 v68; // rsi
  unsigned int v69; // r15d
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rax
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rcx
  unsigned int v77; // eax
  unsigned int v78; // esi
  __int64 *v79; // rdx
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rsi
  unsigned int v83; // ecx
  size_t v84; // rsi
  unsigned int *v85; // rax
  __int64 *v86; // rcx
  __int64 v87; // r15
  unsigned int v88; // r14d
  unsigned int v89; // r8d
  __int64 v90; // r15
  __int64 v91; // rdi
  __int64 *v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // rax
  unsigned int v95; // r14d
  unsigned int v96; // r15d
  unsigned int v97; // edx
  unsigned int *v98; // rax
  unsigned int v99; // eax
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // r14
  __int64 v104; // rax
  __int64 v105; // rdx
  _QWORD *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rsi
  unsigned int v109; // r14d
  unsigned int v110; // edx
  unsigned int *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // r14
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  unsigned int v117; // r8d
  unsigned int v118; // ecx
  unsigned int *v119; // rcx
  unsigned __int64 v120; // r15
  __int64 *v121; // r14
  __int64 v122; // rsi
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  int v125[2]; // [rsp+0h] [rbp-F8h]
  __int64 v126; // [rsp+8h] [rbp-F0h]
  int v127; // [rsp+8h] [rbp-F0h]
  unsigned int v128; // [rsp+10h] [rbp-E8h]
  int v129; // [rsp+10h] [rbp-E8h]
  unsigned int v131; // [rsp+24h] [rbp-D4h]
  __int64 v133; // [rsp+38h] [rbp-C0h]
  __int64 v134; // [rsp+38h] [rbp-C0h]
  __int64 v135; // [rsp+40h] [rbp-B8h]
  int v136; // [rsp+40h] [rbp-B8h]
  int v137; // [rsp+40h] [rbp-B8h]
  int v138; // [rsp+40h] [rbp-B8h]
  int v140; // [rsp+60h] [rbp-98h]
  __int64 v141; // [rsp+68h] [rbp-90h]
  unsigned int v142; // [rsp+70h] [rbp-88h]
  unsigned int v143; // [rsp+70h] [rbp-88h]
  __int64 *v144; // [rsp+70h] [rbp-88h]
  unsigned int v145; // [rsp+70h] [rbp-88h]
  unsigned int v146; // [rsp+70h] [rbp-88h]
  __int64 v147; // [rsp+70h] [rbp-88h]
  unsigned int v148; // [rsp+70h] [rbp-88h]
  __int64 v149; // [rsp+70h] [rbp-88h]
  __int64 *v150; // [rsp+78h] [rbp-80h]
  unsigned int v151; // [rsp+78h] [rbp-80h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  char v153[8]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v154; // [rsp+90h] [rbp-68h] BYREF
  __int64 *v155; // [rsp+98h] [rbp-60h]
  __int64 v156[11]; // [rsp+A0h] [rbp-58h] BYREF

  v15 = a2[1];
  *(_QWORD *)v125 = *a2;
  if ( v15 )
    v16 = *(_DWORD *)(v15 - 4);
  else
    v16 = 0;
  v131 = sub_E60CB0(a1, v16, v15);
  if ( v131 != 1 )
    return v131;
  v18 = *(_QWORD *)a1;
  ptr = nullptr;
  (*(void (__fastcall **)(std::ios_base *, void **))(v18 + 32))(a1, &ptr);
  if ( ptr )
  {
    v19 = *((_QWORD *)a1 + 7);
    if ( v19 )
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v19 + 32LL))(v19, &ptr);
  }
  v20 = 0;
  v21 = a2[1];
  v141 = *a2;
  if ( v21 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= *(_DWORD *)(v21 - 4) )
        break;
      v23 = *(_QWORD *)(v21 + 8LL * v22);
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      if ( v20 )
      {
        v24 = *(_DWORD *)(v20 - 4);
        if ( v24 == *(_DWORD *)(v20 - 8) )
        {
          v69 = (3 * v24 + 1) >> 1;
          v70 = 8 * v69 + 8;
          if ( 8 * v24 + 8 >= (unsigned int)v70 || v24 >= v69 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_182962(v156, "Overflow encountered when expanding vector", v13);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v156);
            sub_233E40((__int64)v156);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v71 = (unsigned int *)sub_186B300((void *)(v20 - 8), v70);
          v72 = v71[1];
          v20 = (unsigned __int64)(v71 + 2);
          *v71 = v69;
          v27 = &v71[2 * v72 + 2];
          v26 = v72 + 1;
          v21 = a2[1];
        }
        else
        {
          v25 = v24;
          v26 = v24 + 1;
          v27 = (unsigned int *)(v20 + 8 * v25);
        }
      }
      else
      {
        v73 = (_QWORD *)sub_186B270(0x18u);
        v27 = (unsigned int *)(v73 + 1);
        *v73 = 2;
        v26 = 1;
        v20 = (unsigned __int64)v27;
        v21 = a2[1];
      }
      *(_QWORD *)v27 = v23;
      ++v22;
      *(_DWORD *)(v20 - 4) = v26;
    }
    while ( v21 );
  }
  v156[0] = 0;
  sub_1360C00(v153, ptr, v156);
  sub_18572D0(v156);
  v28 = *(_QWORD *)(a3 + 8);
  if ( v28 )
  {
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v133 = 0;
    v128 = 0;
    while ( 1 )
    {
      if ( v128 >= *(_DWORD *)(v28 - 4) )
      {
        v126 = v29;
        v32 = v31;
LABEL_55:
        sub_13606C0(v153);
        if ( !v20 )
          goto LABEL_63;
LABEL_56:
        v47 = (__int64 *)v20;
        v48 = v20 + 8LL * *(unsigned int *)(v20 - 4);
        if ( v20 < v48 )
        {
          do
          {
            while ( 1 )
            {
              v49 = *v47;
              if ( *v47 )
              {
                v33 = (*(_DWORD *)(v49 + 8))-- == 1;
                if ( v33 )
                  break;
              }
              if ( (unsigned __int64)++v47 >= v48 )
                goto LABEL_62;
            }
            ++v47;
            sub_15D7BC0(v141, v49);
          }
          while ( (unsigned __int64)v47 < v48 );
        }
LABEL_62:
        sub_186B220((void *)(v20 - 8));
LABEL_63:
        if ( v126 )
        {
          v129 = *(_DWORD *)(v126 + 8);
          *(_DWORD *)(v126 + 8) = v129 - 1;
          if ( v129 == 1 )
            sub_15D7BC0(*(_QWORD *)v125, v126);
        }
        if ( v30 )
        {
          v33 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(*(_QWORD *)v125, v30);
        }
        if ( v133 )
        {
          v127 = *(_DWORD *)(v133 + 8);
          *(_DWORD *)(v133 + 8) = v127 - 1;
          if ( v127 == 1 )
            sub_15D7BC0(*(_QWORD *)v125, v133);
        }
        if ( v32 )
        {
          v33 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(*(_QWORD *)v125, v32);
        }
        goto LABEL_75;
      }
      v155 = nullptr;
      v32 = *(_QWORD *)(v28 + 8LL * v128);
      v154 = *(_QWORD *)v125;
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      if ( v31 )
      {
        v33 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(*(_QWORD *)v125, v31);
      }
      sub_13615B0(v156, v153, v32);
      v34 = v156[0];
      v156[0] = v29;
      v126 = v34;
      if ( v29 )
      {
        v35 = v156[1];
        v33 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v35, v29);
      }
      if ( !(unsigned __int8)sub_15D26C0(*(_QWORD *)v125, v126) )
      {
LABEL_109:
        v66 = v155;
        if ( v155 )
        {
          v67 = (unsigned __int64)&v155[*((unsigned int *)v155 - 1)];
          if ( (unsigned __int64)v155 >= v67 )
            goto LABEL_117;
          do
          {
            while ( 1 )
            {
              v68 = *v66;
              if ( *v66 )
              {
                v33 = (*(_DWORD *)(v68 + 8))-- == 1;
                if ( v33 )
                  break;
              }
              if ( (unsigned __int64)++v66 >= v67 )
                goto LABEL_116;
            }
            sub_15D7BC0(v154, v68);
            ++v66;
          }
          while ( (unsigned __int64)v66 < v67 );
LABEL_116:
          v66 = v155;
          if ( v155 )
LABEL_117:
            sub_186B220(v66 - 1);
        }
        goto LABEL_95;
      }
      if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)v125, v32)
        || *(_WORD *)(v32 + 4)
        || (v64 = *(_DWORD *)(v32 + 24)) != 0
        || (v65 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL)) != nullptr && *v65 != -1 )
      {
        v36 = sub_15E1B70(v125[0]);
        v135 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        if ( v30 )
        {
          v33 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(*(_QWORD *)v125, v30);
        }
        v37 = 0;
        v38 = sub_15E1A70(v125[0]);
        v39 = v38;
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        if ( v133 )
        {
          v140 = *(_DWORD *)(v133 + 8);
          *(_DWORD *)(v133 + 8) = v140 - 1;
          if ( v140 == 1 )
          {
            v37 = v133;
            sub_15D7BC0(*(_QWORD *)v125, v133);
          }
        }
        (*(void (__fastcall **)(std::ios_base *, __int64))(*(_QWORD *)a1 + 192LL))(a1, v37);
        sub_E5EBF0((__int64)a1, v39);
        v40 = a2[1];
        if ( v40 )
          v41 = *(_DWORD *)(v40 - 4);
        else
          v41 = 0;
        v42 = sub_E60CB0(a1, v41, v40);
        v43 = *(_QWORD *)a1;
        if ( v42 == -1 )
        {
          (*(void (__fastcall **)(std::ios_base *, __int64 *))(v43 + 24))(a1, &v154);
          v134 = v154;
          if ( v155 )
            v51 = *((unsigned int *)v155 - 1);
          else
            v51 = 0;
          v52 = sub_15EC1C0(v154, v51);
          v53 = v52;
          if ( v52 )
            ++*(_DWORD *)(v52 + 8);
          v54 = sub_15E1B70(v125[0]);
          v55 = v54;
          if ( v54 )
            ++*(_DWORD *)(v54 + 8);
          v56 = *(_QWORD **)(a4 + 8);
          if ( v56 )
          {
            v57 = *((_DWORD *)v56 - 1);
            if ( v57 == *((_DWORD *)v56 - 2) )
            {
              v83 = (3 * v57 + 1) >> 1;
              v84 = 8 * v83 + 8;
              if ( 8 * v57 + 8 >= (unsigned int)v84 || v57 >= v83 )
              {
                v10 = (char **)__cxa_allocate_exception(0x28u);
                sub_182962(v156, "Overflow encountered when expanding vector", v11);
                *v10 = (char *)off_1C63128;
                sub_2333C0(v10 + 1, v156);
                sub_233E40((__int64)v156);
                __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v142 = (3 * v57 + 1) >> 1;
              v85 = (unsigned int *)sub_186B300(v56 - 1, v84);
              v56 = v85 + 2;
              *(_QWORD *)(a4 + 8) = v85 + 2;
              *v85 = v142;
              LODWORD(v85) = v85[1];
              v60 = &v56[(unsigned int)v85];
              v59 = (_DWORD)v85 + 1;
            }
            else
            {
              v58 = v57;
              v59 = v57 + 1;
              v60 = &v56[v58];
            }
          }
          else
          {
            v115 = (_QWORD *)sub_186B270(0x18u);
            *v115 = 2;
            v56 = v115 + 1;
            *(_QWORD *)(a4 + 8) = v115 + 1;
            v60 = v115 + 1;
            v59 = 1;
          }
          *v60 = v55;
          *((_DWORD *)v56 - 1) = v59;
          if ( v53 )
          {
            v33 = (*(_DWORD *)(v53 + 8))-- == 1;
            if ( v33 )
              sub_15D7BC0(v134, v53);
          }
          v43 = *(_QWORD *)a1;
        }
        else if ( !v42 )
        {
          (*(void (__fastcall **)(std::ios_base *, __int64))(v43 + 200))(a1, 1);
          v44 = v155;
          if ( v155 )
            goto LABEL_46;
          goto LABEL_54;
        }
        (*(void (__fastcall **)(std::ios_base *, __int64))(v43 + 200))(a1, 1);
        v133 = v39;
        v30 = v135;
        goto LABEL_92;
      }
      if ( *(_QWORD *)(*(_QWORD *)v125 + 856LL) != v126 )
      {
        if ( v126 != *(_QWORD *)(*(_QWORD *)v125 + 864LL) )
          goto LABEL_109;
        if ( v32 != v133 )
        {
          if ( v133 )
          {
            v136 = *(_DWORD *)(v133 + 8);
            *(_DWORD *)(v133 + 8) = v136 - 1;
            if ( v136 == 1 )
              sub_15D7BC0(*(_QWORD *)v125, v133);
          }
          ++*(_DWORD *)(v32 + 8);
        }
        v74 = sub_15E1A70(v125[0]);
        v135 = v74;
        if ( v74 )
          ++*(_DWORD *)(v74 + 8);
        if ( v30 )
        {
          v33 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(*(_QWORD *)v125, v30);
        }
        v133 = v32;
        v75 = *(_DWORD *)(v32 + 8);
        v76 = v32;
        goto LABEL_137;
      }
      v113 = sub_15E1A70(v125[0]);
      v114 = v113;
      if ( v113 )
      {
        v75 = *(_DWORD *)(v113 + 8) + 1;
        *(_DWORD *)(v114 + 8) = v75;
        if ( v133 )
        {
          v137 = *(_DWORD *)(v133 + 8);
          *(_DWORD *)(v133 + 8) = v137 - 1;
          if ( v137 == 1 )
          {
            sub_15D7BC0(*(_QWORD *)v125, v133);
            if ( v30 == v32 )
              goto LABEL_228;
            goto LABEL_221;
          }
          if ( v30 == v32 )
            goto LABEL_228;
        }
        else if ( v30 == v32 )
        {
          v135 = v32;
          v76 = v114;
          v133 = v114;
          goto LABEL_137;
        }
        if ( !v30 )
        {
          ++*(_DWORD *)(v32 + 8);
LABEL_228:
          v135 = v32;
          v75 = *(_DWORD *)(v114 + 8);
          v76 = v114;
          v133 = v114;
LABEL_137:
          *(_DWORD *)(v76 + 8) = v75 + 1;
          goto LABEL_138;
        }
      }
      else
      {
        if ( v133 )
        {
          v138 = *(_DWORD *)(v133 + 8);
          *(_DWORD *)(v133 + 8) = v138 - 1;
          if ( v138 == 1 )
          {
            sub_15D7BC0(*(_QWORD *)v125, v133);
            if ( v30 == v32 )
              goto LABEL_196;
LABEL_221:
            if ( !v30 )
              goto LABEL_195;
            goto LABEL_193;
          }
        }
        if ( v30 == v32 )
          goto LABEL_196;
        if ( !v30 )
        {
          ++*(_DWORD *)(v32 + 8);
          goto LABEL_196;
        }
      }
LABEL_193:
      v33 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v33 )
        sub_15D7BC0(*(_QWORD *)v125, v30);
LABEL_195:
      ++*(_DWORD *)(v32 + 8);
      if ( v114 )
        goto LABEL_228;
LABEL_196:
      v135 = v32;
      v133 = 0;
LABEL_138:
      if ( v20 )
      {
        v77 = *(_DWORD *)(v20 - 4);
        if ( v77 == *(_DWORD *)(v20 - 8) )
        {
          v109 = (3 * v77 + 1) >> 1;
          v110 = 8 * v109 + 8;
          if ( 8 * v77 + 8 >= v110 || v77 >= v109 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_182962(v156, "Overflow encountered when expanding vector", v9);
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v156);
            sub_233E40((__int64)v156);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v111 = (unsigned int *)sub_186B300((void *)(v20 - 8), v110);
          v112 = v111[1];
          v20 = (unsigned __int64)(v111 + 2);
          *v111 = v109;
          LODWORD(v111) = v112;
          v79 = (__int64 *)(v20 + 8 * v112);
          v78 = (_DWORD)v111 + 1;
        }
        else
        {
          v78 = v77 + 1;
          v79 = (__int64 *)(v20 + 8LL * v77);
        }
      }
      else
      {
        v123 = (_QWORD *)sub_186B270(0x18u);
        *v123 = 2;
        v78 = 1;
        v20 = (unsigned __int64)(v123 + 1);
        v79 = v123 + 1;
      }
      *v79 = v133;
      *(_DWORD *)(v20 - 4) = v78;
      v80 = sub_E60CB0(a1, v78, v20);
      if ( v80 != -1 )
      {
        if ( !v80 )
        {
          v81 = (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
          v82 = *(_QWORD *)(v20 + 8 * v81);
          *(_DWORD *)(v20 - 4) = v81;
          if ( v82 )
          {
            v33 = (*(_DWORD *)(v82 + 8))-- == 1;
            if ( v33 )
              sub_15D7BC0(v141, v82);
          }
          v44 = v155;
          v39 = v133;
          if ( !v155 )
          {
            sub_13606C0(v153);
            v131 = 0;
            v30 = v135;
            goto LABEL_56;
          }
LABEL_46:
          v45 = &v44[*((unsigned int *)v44 - 1)];
          if ( v44 >= v45 )
            goto LABEL_53;
          do
          {
            while ( 1 )
            {
              v46 = *v44;
              if ( *v44 )
              {
                v33 = (*(_DWORD *)(v46 + 8))-- == 1;
                if ( v33 )
                  break;
              }
              if ( ++v44 >= v45 )
                goto LABEL_52;
            }
            sub_15D7BC0(v154, v46);
            ++v44;
          }
          while ( v44 < v45 );
LABEL_52:
          v44 = v155;
          if ( v155 )
LABEL_53:
            sub_186B220(v44 - 1);
LABEL_54:
          v133 = v39;
          v30 = v135;
          v131 = 0;
          goto LABEL_55;
        }
        goto LABEL_178;
      }
      (*(void (__fastcall **)(std::ios_base *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v154);
      v86 = v155;
      v87 = v154;
      v88 = 0;
      v89 = 0;
      if ( v155 )
      {
        while ( 2 )
        {
          if ( v88 < *((_DWORD *)v86 - 1) )
          {
            while ( 1 )
            {
              v90 = v86[v88];
              if ( v90 == v133 )
                goto LABEL_187;
              v91 = v154;
              v92 = &v86[v89];
              if ( v90 )
                ++*(_DWORD *)(v90 + 8);
              v93 = *v92;
              if ( *v92 )
              {
                v33 = (*(_DWORD *)(v93 + 8))-- == 1;
                if ( v33 )
                  break;
              }
              *v92 = v90;
              ++v89;
              if ( ++v88 >= *((_DWORD *)v86 - 1) )
                goto LABEL_159;
            }
            v150 = &v86[v89];
            v145 = v89;
            sub_15D7BC0(v91, v93);
            v86 = v155;
            *v150 = v90;
            v89 = v145 + 1;
            if ( v86 )
            {
LABEL_187:
              ++v88;
              continue;
            }
LABEL_199:
            if ( !v89 )
            {
              v87 = v154;
              goto LABEL_169;
            }
            v146 = v89;
            v116 = (_QWORD *)sub_186B270(0x18u);
            *v116 = 2;
            v89 = v146;
            v95 = 0;
            v86 = v116 + 1;
            v155 = v116 + 1;
            goto LABEL_165;
          }
          break;
        }
LABEL_159:
        v94 = *((unsigned int *)v86 - 1);
        if ( v89 < (unsigned int)v94 )
        {
          v120 = (unsigned __int64)&v86[v94];
          v121 = &v86[v89];
          if ( (unsigned __int64)v121 < v120 )
          {
            do
            {
              v122 = *v121;
              if ( *v121 )
              {
                v33 = (*(_DWORD *)(v122 + 8))-- == 1;
                if ( v33 )
                {
                  v148 = v89;
                  sub_15D7BC0(v154, v122);
                  v89 = v148;
                }
              }
              ++v121;
            }
            while ( (unsigned __int64)v121 < v120 );
            v86 = v155;
            if ( !v155 )
              goto LABEL_199;
          }
        }
        v95 = *((_DWORD *)v86 - 1);
        if ( v95 < v89 )
        {
LABEL_165:
          while ( 1 )
          {
            v99 = *((_DWORD *)v86 - 2);
            if ( v99 >= v89 )
              break;
            v96 = (3 * v99 + 1) >> 1;
            v97 = 8 * v96 + 8;
            if ( 8 * v99 + 8 >= v97 || v99 >= v96 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_182962(v156, "Overflow encountered when expanding vector", v7);
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v156);
              sub_233E40((__int64)v156);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v143 = v89;
            v98 = (unsigned int *)sub_186B300(v86 - 1, v97);
            v86 = (__int64 *)(v98 + 2);
            *v98 = v96;
            v89 = v143;
            v155 = (__int64 *)(v98 + 2);
          }
          *((_DWORD *)v86 - 1) = v89;
          v87 = v154;
          v100 = 8LL * v95;
          v101 = 8LL * v89;
          if ( v100 != v101 )
          {
            v144 = v86;
            memset(&v86[(unsigned __int64)v100 / 8], 0, v101 - v100);
            v87 = v154;
            v86 = v144;
          }
        }
        else
        {
          *((_DWORD *)v86 - 1) = v89;
          v87 = v154;
        }
        v89 = *((_DWORD *)v86 - 1);
      }
LABEL_169:
      v102 = sub_15EC1C0(v87, v89);
      v103 = v102;
      if ( v102 )
        ++*(_DWORD *)(v102 + 8);
      v104 = sub_15E1B70(v125[0]);
      v105 = v104;
      if ( v104 )
        ++*(_DWORD *)(v104 + 8);
      v106 = *(_QWORD **)(a4 + 8);
      if ( v106 )
      {
        v64 = *((_DWORD *)v106 - 1);
        if ( v64 == *((_DWORD *)v106 - 2) )
        {
          v117 = (3 * v64 + 1) >> 1;
          v118 = 8 * v117 + 8;
          if ( 8 * v64 + 8 >= v118 || v64 >= v117 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_182962(v156, "Overflow encountered when expanding vector", v5);
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v156);
            sub_233E40((__int64)v156);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v151 = (3 * v64 + 1) >> 1;
          v147 = v105;
          v119 = (unsigned int *)sub_186B300(v106 - 1, v118);
          v106 = v119 + 2;
          v64 = v119[1];
          *(_QWORD *)(a4 + 8) = v119 + 2;
          v105 = v147;
          *v119 = v151;
        }
      }
      else
      {
        v149 = v105;
        v124 = (_QWORD *)sub_186B270(0x18u);
        *v124 = 2;
        v106 = v124 + 1;
        v105 = v149;
        *(_QWORD *)(a4 + 8) = v106;
      }
      v106[v64] = v105;
      *((_DWORD *)v106 - 1) = v64 + 1;
      if ( v103 )
      {
        v33 = (*(_DWORD *)(v103 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v87, v103);
      }
LABEL_178:
      v107 = (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
      v108 = *(_QWORD *)(v20 + 8 * v107);
      *(_DWORD *)(v20 - 4) = v107;
      if ( v108 )
      {
        v33 = (*(_DWORD *)(v108 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v141, v108);
      }
      v30 = v135;
LABEL_92:
      v61 = v155;
      if ( !v155 )
        goto LABEL_95;
      v62 = (unsigned __int64)&v155[*((unsigned int *)v155 - 1)];
      if ( (unsigned __int64)v155 >= v62 )
        goto LABEL_94;
      do
      {
        while ( 1 )
        {
          v63 = *v61;
          if ( !*v61 )
            goto LABEL_98;
          v33 = (*(_DWORD *)(v63 + 8))-- == 1;
          if ( !v33 )
            break;
          sub_15D7BC0(v154, v63);
LABEL_98:
          if ( (unsigned __int64)++v61 >= v62 )
            goto LABEL_102;
        }
        ++v61;
      }
      while ( (unsigned __int64)v61 < v62 );
LABEL_102:
      if ( v155 )
LABEL_94:
        sub_186B220(v155 - 1);
LABEL_95:
      ++v128;
      v28 = *(_QWORD *)(a3 + 8);
      if ( !v28 )
        goto LABEL_55;
      v29 = v126;
      v31 = v32;
    }
  }
  sub_13606C0(v153);
  if ( v20 )
  {
    v126 = 0;
    v32 = 0;
    v30 = 0;
    v133 = 0;
    goto LABEL_56;
  }
LABEL_75:
  v50 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v33 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v33 )
    {
      (**v50)(v50);
      sub_186B220(v50);
    }
  }
  return v131;
}

