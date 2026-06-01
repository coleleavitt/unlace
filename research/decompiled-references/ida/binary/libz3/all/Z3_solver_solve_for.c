char __fastcall Z3_solver_solve_for(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char **v5; // r12
  char **exception; // r12
  char **v7; // r12
  char **v8; // r12
  __int64 v10; // rbp
  __int64 v11; // rbx
  char v12; // al
  _QWORD *v13; // r15
  __int64 v14; // r13
  _QWORD *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // r10
  unsigned int v18; // edx
  __int64 *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r8d
  size_t v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // r14
  unsigned int v25; // r8d
  _DWORD *v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 *v29; // rsi
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 *v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // r14
  __int64 *v37; // rbp
  __int64 v38; // rsi
  __int64 v39; // rdi
  bool v40; // zf
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rax
  _QWORD *v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rdi
  _QWORD *v48; // r14
  _QWORD *v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rdi
  _QWORD *v52; // r14
  _QWORD *v53; // r15
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 *v56; // r15
  __int64 *v57; // r14
  _QWORD *v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rsi
  _QWORD *v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  unsigned int v65; // edx
  _QWORD *v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // rsi
  int v69; // eax
  _QWORD *v70; // rsi
  __int64 v71; // rcx
  unsigned int v72; // r8d
  size_t v73; // rsi
  __int64 v74; // rsi
  unsigned int v75; // r8d
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rsi
  unsigned int v79; // ecx
  size_t v80; // rsi
  unsigned int *v81; // rax
  _QWORD *v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // r8
  _QWORD *v85; // rsi
  int v86; // eax
  _QWORD *v87; // rax
  __int64 *v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rdi
  _QWORD *v93; // rax
  _QWORD *v95; // [rsp+8h] [rbp-B0h]
  __int64 v96; // [rsp+8h] [rbp-B0h]
  __int64 v97; // [rsp+8h] [rbp-B0h]
  unsigned int v98; // [rsp+8h] [rbp-B0h]
  __int64 v99; // [rsp+8h] [rbp-B0h]
  __int64 v100; // [rsp+8h] [rbp-B0h]
  __int64 v101; // [rsp+8h] [rbp-B0h]
  __int64 v102; // [rsp+10h] [rbp-A8h]
  unsigned int v103; // [rsp+10h] [rbp-A8h]
  __int64 *v104; // [rsp+10h] [rbp-A8h]
  unsigned int v105; // [rsp+10h] [rbp-A8h]
  unsigned int v106; // [rsp+10h] [rbp-A8h]
  unsigned int v107; // [rsp+10h] [rbp-A8h]
  __int64 v108; // [rsp+10h] [rbp-A8h]
  unsigned int v109; // [rsp+10h] [rbp-A8h]
  __int64 v110; // [rsp+18h] [rbp-A0h]
  _DWORD *v111; // [rsp+18h] [rbp-A0h]
  _DWORD *v112; // [rsp+18h] [rbp-A0h]
  __int64 *v113; // [rsp+20h] [rbp-98h]
  __int64 *v114; // [rsp+20h] [rbp-98h]
  __int64 v115; // [rsp+28h] [rbp-90h]
  __int64 v116; // [rsp+28h] [rbp-90h]
  __int64 v117; // [rsp+30h] [rbp-88h]
  char v119; // [rsp+4Fh] [rbp-69h]
  __int64 *v120; // [rsp+58h] [rbp-60h] BYREF
  __int64 v121[11]; // [rsp+60h] [rbp-58h] BYREF

  v10 = a4;
  v11 = a3;
  v12 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v119 = v12;
  if ( v12 )
    sub_29DC80(a1, a2, a3, a4, a5);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !*(_QWORD *)(a2 + 32) )
    sub_2A74C0(a1, a2);
  v13 = *(_QWORD **)(v11 + 32);
  v120 = nullptr;
  v14 = *(_QWORD *)(a1 + 232);
  if ( v13 )
  {
    v95 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 == v95 )
    {
      v43 = *(_QWORD *)(a2 + 32);
      v44 = *(_QWORD *)(*(_QWORD *)v43 + 320LL);
      if ( (__int64 (__fastcall *)())v44 == nullsub_124 )
      {
LABEL_39:
        *((_DWORD *)v13 - 1) = 0;
        goto LABEL_40;
      }
    }
    else
    {
      v102 = *v13;
      v15 = (_QWORD *)sub_186B270(0x58u);
      *v15 = 2;
      v16 = v15 + 1;
      v17 = v102;
      v18 = 1;
      v120 = v16;
      v19 = v16;
      while ( 1 )
      {
        *v16 = v17;
        ++v13;
        v16[2] = v14;
        v16[1] = 0;
        v16[4] = v14;
        v16[3] = 0;
        *((_DWORD *)v19 - 1) = v18;
        if ( v95 == v13 )
          break;
        v17 = *v13;
        if ( *((_DWORD *)v19 - 2) == v18 )
        {
          v21 = (3 * v18 + 1) >> 1;
          v22 = 40 * v21 + 8;
          if ( 40 * v18 + 8 >= (unsigned int)v22 || v18 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v121, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v121);
            sub_233E40((__int64)v121);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v110 = *v13;
          v103 = (3 * v18 + 1) >> 1;
          v23 = sub_186B270(v22);
          v24 = v120;
          v25 = v103;
          v26 = (_DWORD *)v23;
          v19 = (__int64 *)(v23 + 8);
          v17 = v110;
          if ( v120 )
          {
            v27 = *((unsigned int *)v120 - 1);
            v28 = v23 + 8;
            *(_DWORD *)(v23 + 4) = v27;
            v29 = &v24[5 * v27];
            v30 = v24;
            if ( v24 != v29 )
            {
              v104 = v19;
              do
              {
                v31 = *v30;
                v30 += 5;
                v28 += 40;
                *(_QWORD *)(v28 - 40) = v31;
                *(_QWORD *)(v28 - 24) = *(v30 - 3);
                v32 = *(v30 - 4);
                *(v30 - 4) = 0;
                *(_QWORD *)(v28 - 32) = v32;
                *(_QWORD *)(v28 - 8) = *(v30 - 1);
                v33 = *(v30 - 2);
                *(v30 - 2) = 0;
                *(_QWORD *)(v28 - 16) = v33;
              }
              while ( v29 != v30 );
              v19 = v104;
            }
            if ( (_DWORD)v27 )
            {
              v115 = v11;
              v34 = v24;
              v35 = &v24[5 * v27];
              v117 = v10;
              v36 = v110;
              v105 = v25;
              v37 = v35;
              v111 = v26;
              v113 = v19;
              do
              {
                while ( 1 )
                {
                  v41 = v34[3];
                  if ( v41 )
                  {
                    v42 = v34[4];
                    v40 = (*(_DWORD *)(v41 + 8))-- == 1;
                    if ( v40 )
                      sub_15D7BC0(v42, v41);
                  }
                  v38 = v34[1];
                  if ( v38 )
                  {
                    v39 = v34[2];
                    v40 = (*(_DWORD *)(v38 + 8))-- == 1;
                    if ( v40 )
                      break;
                  }
                  v34 += 5;
                  if ( v34 == v37 )
                    goto LABEL_27;
                }
                sub_15D7BC0(v39, v38);
                v34 += 5;
              }
              while ( v34 != v37 );
LABEL_27:
              v17 = v36;
              v25 = v105;
              v26 = v111;
              v19 = v113;
              v11 = v115;
              v10 = v117;
              v24 = v120;
            }
            v116 = v17;
            v114 = v19;
            v112 = v26;
            v106 = v25;
            sub_186B220(v24 - 1);
            v26 = v112;
            v19 = v114;
            v17 = v116;
            v25 = v106;
            v16 = &v114[5 * (unsigned int)v112[1]];
            v18 = v112[1] + 1;
          }
          else
          {
            *(_DWORD *)(v23 + 4) = 0;
            v18 = 1;
            v16 = (__int64 *)(v23 + 8);
          }
          v120 = v19;
          *v26 = v25;
        }
        else
        {
          v20 = v18++;
          v16 = &v19[5 * v20];
        }
      }
      v43 = *(_QWORD *)(a2 + 32);
      v44 = *(_QWORD *)(*(_QWORD *)v43 + 320LL);
      if ( (__int64 (__fastcall *)())v44 == nullsub_124 )
        goto LABEL_31;
    }
LABEL_110:
    LOBYTE(v44) = ((__int64 (__fastcall *)(__int64, __int64 **))v44)(v43, &v120);
LABEL_31:
    v13 = *(_QWORD **)(v11 + 32);
    if ( !v13 )
      goto LABEL_40;
    v44 = *((unsigned int *)v13 - 1);
    v45 = &v13[v44];
    if ( v13 < v45 )
    {
      do
      {
        while ( 1 )
        {
          v46 = *v13;
          if ( *v13 )
          {
            v47 = *(_QWORD *)(v11 + 24);
            v40 = (*(_DWORD *)(v46 + 8))-- == 1;
            if ( v40 )
              break;
          }
          if ( ++v13 >= v45 )
            goto LABEL_38;
        }
        LOBYTE(v44) = sub_15D7BC0(v47, v46);
        ++v13;
      }
      while ( v13 < v45 );
LABEL_38:
      v13 = *(_QWORD **)(v11 + 32);
      if ( !v13 )
        goto LABEL_40;
    }
    goto LABEL_39;
  }
  v43 = *(_QWORD *)(a2 + 32);
  v44 = *(_QWORD *)(*(_QWORD *)v43 + 320LL);
  if ( (__int64 (__fastcall *)())v44 != nullsub_124 )
    goto LABEL_110;
LABEL_40:
  v48 = *(_QWORD **)(v10 + 32);
  if ( v48 )
  {
    v44 = *((unsigned int *)v48 - 1);
    v49 = &v48[v44];
    if ( v48 >= v49 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v50 = *v48;
        if ( *v48 )
        {
          v51 = *(_QWORD *)(v10 + 24);
          v40 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( ++v48 >= v49 )
          goto LABEL_47;
      }
      LOBYTE(v44) = sub_15D7BC0(v51, v50);
      ++v48;
    }
    while ( v48 < v49 );
LABEL_47:
    v48 = *(_QWORD **)(v10 + 32);
    if ( v48 )
LABEL_48:
      *((_DWORD *)v48 - 1) = 0;
  }
  v52 = *(_QWORD **)(a5 + 32);
  if ( v52 )
  {
    v44 = *((unsigned int *)v52 - 1);
    v53 = &v52[v44];
    if ( v52 >= v53 )
      goto LABEL_57;
    do
    {
      while ( 1 )
      {
        v54 = *v52;
        if ( *v52 )
        {
          v55 = *(_QWORD *)(a5 + 24);
          v40 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( ++v52 >= v53 )
          goto LABEL_56;
      }
      LOBYTE(v44) = sub_15D7BC0(v55, v54);
      ++v52;
    }
    while ( v52 < v53 );
LABEL_56:
    v52 = *(_QWORD **)(a5 + 32);
    if ( v52 )
LABEL_57:
      *((_DWORD *)v52 - 1) = 0;
  }
  v56 = v120;
  if ( !v120 )
    goto LABEL_93;
  v44 = *((unsigned int *)v120 - 1);
  v57 = &v120[5 * v44];
  if ( v57 == v120 )
  {
LABEL_98:
    if ( (_DWORD)v44 )
    {
      v88 = &v56[5 * v44];
      do
      {
        v91 = v56[3];
        if ( v91 )
        {
          v92 = v56[4];
          v40 = (*(_DWORD *)(v91 + 8))-- == 1;
          if ( v40 )
            sub_15D7BC0(v92, v91);
        }
        v89 = v56[1];
        if ( v89 )
        {
          v90 = v56[2];
          v40 = (*(_DWORD *)(v89 + 8))-- == 1;
          if ( v40 )
            sub_15D7BC0(v90, v89);
        }
        v56 += 5;
      }
      while ( v56 != v88 );
      v56 = v120;
    }
    LOBYTE(v44) = sub_186B220(v56 - 1);
    goto LABEL_93;
  }
  do
  {
    v62 = v56[1];
    if ( v62 )
    {
      v63 = *v56;
      if ( *v56 )
        ++*(_DWORD *)(v63 + 8);
      v64 = *(_QWORD *)(v11 + 32);
      if ( v64 )
      {
        v65 = *(_DWORD *)(v64 - 4);
        if ( v65 != *(_DWORD *)(v64 - 8) )
        {
          *(_QWORD *)(v64 + 8LL * v65) = v63;
          *(_DWORD *)(v64 - 4) = v65 + 1;
          goto LABEL_72;
        }
        v79 = (3 * v65 + 1) >> 1;
        v80 = 8 * v79 + 8;
        if ( 8 * v65 + 8 >= (unsigned int)v80 || v65 >= v79 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v121, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v121);
          sub_233E40((__int64)v121);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v109 = (3 * v65 + 1) >> 1;
        v99 = v63;
        v81 = (unsigned int *)sub_186B300((void *)(v64 - 8), v80);
        v82 = v81 + 2;
        v83 = v81[1];
        *(_QWORD *)(v11 + 32) = v81 + 2;
        v84 = v99;
        *v81 = v109;
        LODWORD(v81) = v83;
        v62 = v56[1];
        v85 = &v82[v83];
        v86 = (_DWORD)v81 + 1;
      }
      else
      {
        v101 = v63;
        v93 = (_QWORD *)sub_186B270(0x18u);
        v82 = v93 + 1;
        *v93 = 2;
        v62 = v56[1];
        v86 = 1;
        *(_QWORD *)(v11 + 32) = v82;
        v84 = v101;
        v85 = v82;
      }
      *v85 = v84;
      *((_DWORD *)v82 - 1) = v86;
      if ( !v62 )
      {
        v66 = *(_QWORD **)(v10 + 32);
        if ( v66 )
        {
LABEL_73:
          v67 = *((_DWORD *)v66 - 1);
          if ( v67 == *((_DWORD *)v66 - 2) )
          {
            v75 = (3 * v67 + 1) >> 1;
            v76 = 8 * v75 + 8;
            if ( 8 * v67 + 8 >= (unsigned int)v76 || v67 >= v75 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v121, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v121);
              sub_233E40((__int64)v121);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v108 = v62;
            v98 = (3 * v67 + 1) >> 1;
            v77 = (unsigned int *)sub_186B300(v66 - 1, v76);
            v78 = v77[1];
            v66 = v77 + 2;
            *(_QWORD *)(v10 + 32) = v77 + 2;
            v62 = v108;
            *v77 = v98;
            LODWORD(v77) = v78;
            v70 = &v66[v78];
            v69 = (_DWORD)v77 + 1;
          }
          else
          {
            v68 = v67;
            v69 = v67 + 1;
            v70 = &v66[v68];
          }
LABEL_75:
          *v70 = v62;
          v71 = v56[3];
          *((_DWORD *)v66 - 1) = v69;
          if ( v71 || (v71 = *(_QWORD *)(v14 + 856)) != 0 )
          {
            v58 = *(_QWORD **)(a5 + 32);
            ++*(_DWORD *)(v71 + 8);
            if ( !v58 )
            {
LABEL_78:
              v96 = v71;
              v44 = sub_186B270(0x18u);
              v58 = (_QWORD *)(v44 + 8);
              *(_QWORD *)v44 = 2;
              v71 = v96;
              LODWORD(v44) = 1;
              *(_QWORD *)(a5 + 32) = v58;
              v61 = v58;
LABEL_64:
              *v61 = v71;
              *((_DWORD *)v58 - 1) = v44;
              goto LABEL_65;
            }
          }
          else
          {
            v58 = *(_QWORD **)(a5 + 32);
            if ( !v58 )
              goto LABEL_78;
          }
          v59 = *((_DWORD *)v58 - 1);
          if ( v59 == *((_DWORD *)v58 - 2) )
          {
            v72 = (3 * v59 + 1) >> 1;
            v73 = 8 * v72 + 8;
            if ( 8 * v59 + 8 >= (unsigned int)v73 || v59 >= v72 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v121, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v121);
              sub_233E40((__int64)v121);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v107 = (3 * v59 + 1) >> 1;
            v97 = v71;
            v44 = sub_186B300(v58 - 1, v73);
            v74 = *(unsigned int *)(v44 + 4);
            v58 = (_QWORD *)(v44 + 8);
            *(_QWORD *)(a5 + 32) = v44 + 8;
            v71 = v97;
            *(_DWORD *)v44 = v107;
            LODWORD(v44) = v74;
            v61 = &v58[v74];
            LODWORD(v44) = v44 + 1;
          }
          else
          {
            v60 = v59;
            LODWORD(v44) = v59 + 1;
            v61 = &v58[v60];
          }
          goto LABEL_64;
        }
LABEL_90:
        v100 = v62;
        v87 = (_QWORD *)sub_186B270(0x18u);
        v66 = v87 + 1;
        *v87 = 2;
        v62 = v100;
        v69 = 1;
        *(_QWORD *)(v10 + 32) = v66;
        v70 = v66;
        goto LABEL_75;
      }
LABEL_72:
      v66 = *(_QWORD **)(v10 + 32);
      ++*(_DWORD *)(v62 + 8);
      if ( v66 )
        goto LABEL_73;
      goto LABEL_90;
    }
LABEL_65:
    v56 += 5;
  }
  while ( v57 != v56 );
  v56 = v120;
  if ( v120 )
  {
    v44 = *((unsigned int *)v120 - 1);
    goto LABEL_98;
  }
LABEL_93:
  if ( v119 )
  {
    LOBYTE(v44) = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return v44;
}

