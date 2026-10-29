__int64 __fastcall sub_452A90(_QWORD *a1, __int64 *a2)
{
  char **v2; // r12
  char **exception; // r12
  char **v4; // r12
  char **v5; // r12
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r12
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 *v18; // r13
  __int64 *v19; // r15
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 *v22; // rcx
  int v23; // edi
  unsigned int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // r9
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned int v32; // esi
  __int64 v33; // rax
  unsigned int v34; // esi
  unsigned int v35; // r15d
  _DWORD *v36; // rax
  _QWORD *v37; // r13
  __int64 v38; // rax
  unsigned int v39; // r12d
  size_t v40; // rdi
  __int64 v41; // rax
  _QWORD *v42; // rdi
  _DWORD *v43; // rsi
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  __int64 v46; // r9
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int *v49; // rax
  _QWORD *v50; // rax
  unsigned int v51; // r15d
  __int64 v52; // rdx
  int v53; // eax
  __int64 *v54; // rdx
  __int64 v55; // r13
  __int64 *v56; // rsi
  unsigned int v57; // eax
  unsigned int v58; // r14d
  size_t v59; // rdi
  __int64 v60; // rax
  __int64 *v61; // r14
  unsigned int *v62; // r9
  __int64 v63; // r12
  __int64 *v64; // rdx
  __int64 v65; // rcx
  int v66; // r10d
  __int64 *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 *v70; // r12
  __int64 *v71; // rbx
  unsigned int *v72; // r14
  __int64 *v73; // rbp
  __int64 *v74; // r13
  __int64 v75; // rsi
  __int64 v76; // rdi
  bool v77; // zf
  __int64 v78; // rax
  __int64 v79; // r12
  _QWORD *v80; // rdx
  unsigned int v81; // eax
  __int64 v82; // rcx
  int v83; // eax
  __int64 *v84; // rcx
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 *v87; // rbp
  unsigned __int64 v88; // r13
  __int64 v89; // rsi
  __int64 *v90; // r13
  unsigned int v91; // eax
  __int64 v92; // rbp
  __int64 *v93; // rbx
  __int64 *v94; // r14
  __int64 v95; // rsi
  __int64 v96; // rdi
  _QWORD *v98; // rax
  unsigned int v99; // r13d
  unsigned int v100; // ecx
  unsigned int *v101; // rax
  __int64 v102; // rcx
  _QWORD *v103; // rdx
  int v104; // [rsp+0h] [rbp-D8h]
  int *v105; // [rsp+8h] [rbp-D0h]
  unsigned int v106; // [rsp+8h] [rbp-D0h]
  int *v107; // [rsp+10h] [rbp-C8h]
  __int64 *v108; // [rsp+10h] [rbp-C8h]
  unsigned int *v109; // [rsp+18h] [rbp-C0h]
  _QWORD *v110; // [rsp+18h] [rbp-C0h]
  __int64 v111; // [rsp+20h] [rbp-B8h]
  _QWORD *v112; // [rsp+28h] [rbp-B0h]
  int v114; // [rsp+38h] [rbp-A0h]
  __int64 v115; // [rsp+38h] [rbp-A0h]
  int v116; // [rsp+40h] [rbp-98h]
  __int64 v117; // [rsp+48h] [rbp-90h]
  int v118[2]; // [rsp+50h] [rbp-88h] BYREF
  int v119[2]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v120; // [rsp+60h] [rbp-78h] BYREF
  __int64 v121; // [rsp+68h] [rbp-70h]
  __int64 v122; // [rsp+70h] [rbp-68h]
  __int64 v123; // [rsp+78h] [rbp-60h]
  __int64 v124[2]; // [rsp+80h] [rbp-58h] BYREF
  char v125; // [rsp+90h] [rbp-48h]

  v6 = a1;
  v7 = a1[1];
  v8 = *(_QWORD *)(*a1 + 160LL);
  v9 = *a2;
  v114 = v7;
  *(_QWORD *)v118 = 0;
  v10 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)v119 = 0;
  v120 = 0;
  v121 = v7;
  sub_62E310(v8 + 656, v10, &v120);
  v14 = sub_15DE060(v6[1], v120, v11, v12, v13);
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = (_QWORD *)sub_186B270(0x18u);
  v16[1] = v15;
  v17 = v16 + 1;
  *v16 = 0x100000002LL;
  v18 = (__int64 *)a2[10];
  if ( !v18 || (v19 = &v18[*((unsigned int *)v18 - 1)], v18 == v19) )
  {
    v34 = 1;
  }
  else
  {
    v107 = v119;
    do
    {
      v20 = *v18;
      v21 = *((unsigned int *)v6 + 12);
      v22 = (__int64 *)v6[5];
      v23 = *(_DWORD *)(*v18 + 12);
      v24 = v21 - 1;
      v21 *= 16;
      v25 = (__int64 *)((char *)v22 + v21);
      v26 = 16LL * (v23 & v24);
      v27 = &v22[(unsigned __int64)v26 / 8];
      if ( v26 == v21 )
      {
LABEL_14:
        while ( v27 != v22 )
        {
          v30 = *v22;
          if ( (unsigned __int64)*v22 > 1 )
          {
            if ( *(_DWORD *)(v30 + 12) == v23 && v20 == v30 )
            {
              v28 = v22;
              goto LABEL_23;
            }
          }
          else if ( !v30 )
          {
            break;
          }
          v22 += 2;
        }
LABEL_109:
        BUG();
      }
      v28 = &v22[(unsigned __int64)v26 / 8];
      while ( 1 )
      {
        while ( 1 )
        {
          v29 = *v28;
          if ( (unsigned __int64)*v28 > 1 )
            break;
          if ( !v29 )
            goto LABEL_109;
          v28 += 2;
          if ( v25 == v28 )
            goto LABEL_14;
        }
        if ( *(_DWORD *)(v29 + 12) == v23 && v20 == v29 )
          break;
        v28 += 2;
        if ( v25 == v28 )
          goto LABEL_14;
      }
LABEL_23:
      v31 = v28[1];
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v32 = *((_DWORD *)v17 - 1);
      if ( v32 == *((_DWORD *)v17 - 2) )
      {
        v47 = (3 * v32 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v32 + 8 >= v48 || v32 >= v47 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v124, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v124);
          sub_233E40((__int64)v124);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v106 = (3 * v32 + 1) >> 1;
        v49 = (unsigned int *)sub_186B300(v17 - 1, v48);
        v32 = v49[1];
        v17 = v49 + 2;
        *v49 = v106;
      }
      v33 = v32;
      ++v18;
      v34 = v32 + 1;
      v17[v33] = v31;
      *((_DWORD *)v17 - 1) = v34;
    }
    while ( v19 != v18 );
  }
  v35 = 0;
  v105 = v119;
  while ( v35 < v34 )
  {
    v37 = *(_QWORD **)v118;
    if ( *(_QWORD *)v118 )
    {
      v38 = *(unsigned int *)(*(_QWORD *)v118 - 4LL);
      if ( (_DWORD)v38 == *(_DWORD *)(*(_QWORD *)v118 - 8LL) )
      {
        v39 = (unsigned int)(3 * v38 + 1) >> 1;
        v40 = 8 * v39 + 8;
        if ( 8 * (int)v38 + 8 >= (unsigned int)v40 || (unsigned int)v38 >= v39 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v124, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v124);
          sub_233E40((__int64)v124);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = sub_186B270(v40);
        v42 = *(_QWORD **)v118;
        v43 = (_DWORD *)v41;
        v37 = (_QWORD *)(v41 + 8);
        v44 = *(unsigned int *)(*(_QWORD *)v118 - 4LL);
        *(_DWORD *)(v41 + 4) = v44;
        v45 = 0;
        v46 = 8 * v44;
        if ( v46 )
        {
          do
          {
            *(_QWORD *)&v43[v45 / 4 + 2] = v42[v45 / 8];
            v45 += 8LL;
          }
          while ( v46 != v45 );
        }
        LODWORD(v107) = (_DWORD)v43;
        sub_186B220(v42 - 1);
        v36 = &v37[v43[1]];
        *(_QWORD *)v118 = v37;
        *v43 = v39;
      }
      else
      {
        v36 = (_DWORD *)(*(_QWORD *)v118 + 8 * v38);
      }
    }
    else
    {
      v50 = (_QWORD *)sub_186B270(0x18u);
      v37 = v50 + 1;
      *v50 = 2;
      *(_QWORD *)v118 = v50 + 1;
      v36 = v50 + 1;
    }
    v36[1] = v35++;
    *v36 = 0;
    ++*((_DWORD *)v37 - 1);
    v34 = *((_DWORD *)v17 - 1);
  }
  v51 = 0;
  while ( 1 )
  {
    v55 = v6[1];
    if ( v34 < v51 )
      break;
    v123 = 0;
    v56 = *(__int64 **)v119;
    if ( *(_QWORD *)v119 )
    {
      v57 = *(_DWORD *)(*(_QWORD *)v119 - 4LL);
      if ( v57 == *(_DWORD *)(*(_QWORD *)v119 - 8LL) )
      {
        v58 = (3 * v57 + 1) >> 1;
        LODWORD(v105) = v58;
        v59 = 16 * v58 + 8;
        if ( 16 * v57 + 8 >= (unsigned int)v59 || v57 >= v58 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v124, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v124);
          sub_233E40((__int64)v124);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v60 = sub_186B270(v59);
        v61 = *(__int64 **)v119;
        v62 = (unsigned int *)v60;
        v56 = (__int64 *)(v60 + 8);
        if ( *(_QWORD *)v119 )
        {
          v63 = *(unsigned int *)(*(_QWORD *)v119 - 4LL);
          v64 = *(__int64 **)v119;
          v65 = v60 + 8;
          *(_DWORD *)(v60 + 4) = v63;
          v66 = v63;
          v67 = &v61[2 * v63];
          if ( v67 != v61 )
          {
            do
            {
              v68 = *v64;
              v64 += 2;
              v65 += 16;
              *(_QWORD *)(v65 - 16) = v68;
              v69 = *(v64 - 1);
              *(v64 - 1) = 0;
              *(_QWORD *)(v65 - 8) = v69;
            }
            while ( v64 != v67 );
          }
          v70 = &v61[2 * v63];
          if ( v66 )
          {
            v108 = v56;
            v111 = v55;
            v112 = v6;
            v110 = v17;
            v71 = v61;
            v72 = v62;
            do
            {
              v73 = (__int64 *)v71[1];
              if ( v73 )
              {
                v74 = &v73[*((unsigned int *)v73 - 1)];
                if ( v73 >= v74 )
                  goto LABEL_63;
                do
                {
                  while ( 1 )
                  {
                    v75 = *v73;
                    if ( *v73 )
                    {
                      v76 = *v71;
                      v77 = (*(_DWORD *)(v75 + 8))-- == 1;
                      if ( v77 )
                        break;
                    }
                    if ( ++v73 >= v74 )
                      goto LABEL_62;
                  }
                  sub_15D7BC0(v76, v75);
                  ++v73;
                }
                while ( v73 < v74 );
LABEL_62:
                v73 = (__int64 *)v71[1];
                if ( v73 )
LABEL_63:
                  sub_186B220(v73 - 1);
              }
              v71 += 2;
            }
            while ( v71 != v70 );
            v62 = v72;
            v56 = v108;
            v17 = v110;
            v55 = v111;
            v6 = v112;
            v61 = *(__int64 **)v119;
          }
          v109 = v62;
          LODWORD(v107) = (_DWORD)v56;
          sub_186B220(v61 - 1);
          v62 = v109;
          v54 = &v56[2 * v109[1]];
          v53 = v109[1] + 1;
        }
        else
        {
          *(_DWORD *)(v60 + 4) = 0;
          v54 = (__int64 *)(v60 + 8);
          v53 = 1;
        }
        *(_QWORD *)v119 = v56;
        *v62 = (unsigned int)v105;
      }
      else
      {
        v52 = v57;
        v53 = v57 + 1;
        v54 = (__int64 *)(*(_QWORD *)v119 + 16 * v52);
      }
    }
    else
    {
      v98 = (_QWORD *)sub_186B270(0x28u);
      v56 = v98 + 1;
      *(_QWORD *)v119 = v98 + 1;
      v54 = v98 + 1;
      *v98 = 2;
      v53 = 1;
    }
    *v54 = v55;
    ++v51;
    v54[1] = 0;
    *((_DWORD *)v56 - 1) = v53;
    v34 = *((_DWORD *)v17 - 1);
  }
  v78 = sub_15E9440(
          v6[1],
          v34,
          (int)v17,
          a2[6],
          (int)v118,
          (int)v119,
          v104,
          (__int64)v105,
          (int)v107,
          v109,
          v111,
          (int)v112,
          (int)a2,
          v114,
          v116,
          v117,
          v118[0],
          v119[0],
          v120,
          v121,
          v122,
          v123,
          v124[0],
          v124[1],
          v125);
  v79 = v78;
  if ( v78 )
    ++*(_DWORD *)(v78 + 8);
  v80 = (_QWORD *)v6[4];
  if ( v80 )
  {
    v81 = *((_DWORD *)v80 - 1);
    if ( v81 == *((_DWORD *)v80 - 2) )
    {
      v99 = (3 * v81 + 1) >> 1;
      v100 = 8 * v99 + 8;
      if ( 8 * v81 + 8 >= v100 || v81 >= v99 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v124, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v124);
        sub_233E40((__int64)v124);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v101 = (unsigned int *)sub_186B300(v80 - 1, v100);
      v102 = v101[1];
      v80 = v101 + 2;
      *v101 = v99;
      v6[4] = v101 + 2;
      LODWORD(v101) = v102;
      v84 = &v80[v102];
      v83 = (_DWORD)v101 + 1;
    }
    else
    {
      v82 = v81;
      v83 = v81 + 1;
      v84 = &v80[v82];
    }
  }
  else
  {
    v103 = (_QWORD *)sub_186B270(0x18u);
    *v103 = 2;
    v83 = 1;
    v80 = v103 + 1;
    v6[4] = v80;
    v84 = v80;
  }
  *v84 = v79;
  v85 = v120;
  *((_DWORD *)v80 - 1) = v83;
  if ( v85 )
  {
    v86 = v121;
    v77 = (*(_DWORD *)(v85 + 8))-- == 1;
    if ( v77 )
      sub_15D7BC0(v86, v85);
  }
  v87 = v17;
  v88 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
  if ( (unsigned __int64)v17 < v88 )
  {
    do
    {
      while ( 1 )
      {
        v89 = *v87;
        if ( *v87 )
        {
          v77 = (*(_DWORD *)(v89 + 8))-- == 1;
          if ( v77 )
            break;
        }
        if ( (unsigned __int64)++v87 >= v88 )
          goto LABEL_82;
      }
      ++v87;
      sub_15D7BC0(v115, v89);
    }
    while ( (unsigned __int64)v87 < v88 );
  }
LABEL_82:
  sub_186B220(v17 - 1);
  v90 = *(__int64 **)v119;
  if ( *(_QWORD *)v119 )
  {
    v91 = *(_DWORD *)(*(_QWORD *)v119 - 4LL);
    if ( v91 )
    {
      v92 = *(_QWORD *)v119 + 16LL * v91;
      do
      {
        v93 = (__int64 *)v90[1];
        if ( v93 )
        {
          v94 = &v93[*((unsigned int *)v93 - 1)];
          if ( v93 >= v94 )
            goto LABEL_93;
          do
          {
            while ( 1 )
            {
              v95 = *v93;
              if ( *v93 )
              {
                v96 = *v90;
                v77 = (*(_DWORD *)(v95 + 8))-- == 1;
                if ( v77 )
                  break;
              }
              if ( ++v93 >= v94 )
                goto LABEL_92;
            }
            sub_15D7BC0(v96, v95);
            ++v93;
          }
          while ( v93 < v94 );
LABEL_92:
          v93 = (__int64 *)v90[1];
          if ( v93 )
LABEL_93:
            sub_186B220(v93 - 1);
        }
        v90 += 2;
      }
      while ( v90 != (__int64 *)v92 );
      v90 = *(__int64 **)v119;
    }
    sub_186B220(v90 - 1);
  }
  if ( *(_QWORD *)v118 )
    sub_186B220((void *)(*(_QWORD *)v118 - 8LL));
  return v79;
}

