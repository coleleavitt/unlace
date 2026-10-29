__int64 (__fastcall **__fastcall sub_238140(_QWORD *a1))()
{
  _QWORD *v1; // rbp
  bool v2; // zf
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  _QWORD *v14; // r12
  void *v15; // rdi
  void *v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD **v21; // r13
  _QWORD **v22; // r15
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  unsigned int *v29; // rdx
  _QWORD *v30; // rbp
  unsigned int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // r12
  void *v35; // rbx
  void (__fastcall ***v36)(_QWORD); // rbx
  __int64 *v37; // rbx
  __int64 *v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  _DWORD *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 *v48; // rbx
  __int64 *v49; // r12
  __int64 v50; // rsi
  __int64 v51; // rdi
  void *v52; // rdi
  __int64 (__fastcall **result)(); // rax
  void *v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rbx
  __int64 *v58; // rbp
  __int64 *v59; // rbx
  _QWORD *v60; // r12
  unsigned int *v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rsi
  _DWORD *v65; // rdi
  __int64 v66; // rax
  int v67; // esi
  __int64 v68; // rax
  __int64 v69; // rdx
  unsigned int v70; // r8d
  unsigned int *v71; // rcx
  unsigned int v72; // eax
  unsigned int *v73; // r8
  unsigned int v74; // eax
  unsigned int v75; // r9d
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // r9
  __int64 v79; // rsi
  __int64 v80; // rdi
  _QWORD *v81; // rcx
  unsigned int v82; // eax
  __int64 v83; // rsi
  int v84; // eax
  unsigned int **v85; // rsi
  __int64 v86; // rax
  _DWORD *v87; // rsi
  int v88; // eax
  unsigned int v89; // r9d
  size_t v90; // rsi
  unsigned int *v91; // rax
  __int64 v92; // rsi
  unsigned int v93; // r9d
  unsigned int v94; // eax
  unsigned int *v95; // rax
  _QWORD *v96; // rax
  _QWORD *v97; // rcx
  char **exception; // rbp
  __int64 v99; // rdx
  _QWORD *ptr; // [rsp+8h] [rbp-90h]
  _QWORD *ptra; // [rsp+8h] [rbp-90h]
  _QWORD *ptrb; // [rsp+8h] [rbp-90h]
  _QWORD *ptrc; // [rsp+8h] [rbp-90h]
  _QWORD *ptrd; // [rsp+8h] [rbp-90h]
  unsigned int *v105; // [rsp+10h] [rbp-88h]
  __int64 v106; // [rsp+10h] [rbp-88h]
  unsigned int *v107; // [rsp+10h] [rbp-88h]
  unsigned int v108; // [rsp+10h] [rbp-88h]
  unsigned int v109; // [rsp+10h] [rbp-88h]
  __int64 v110; // [rsp+10h] [rbp-88h]
  unsigned int v111; // [rsp+18h] [rbp-80h]
  __int64 v112; // [rsp+18h] [rbp-80h]
  __int64 v113; // [rsp+18h] [rbp-80h]
  unsigned int *v114; // [rsp+18h] [rbp-80h]
  _QWORD *v115; // [rsp+20h] [rbp-78h]
  _QWORD *v116; // [rsp+28h] [rbp-70h]
  unsigned int *v117; // [rsp+30h] [rbp-68h]
  unsigned int *v118; // [rsp+30h] [rbp-68h]
  __int64 v119[11]; // [rsp+40h] [rbp-58h] BYREF

  v1 = a1;
  *a1 = &off_1C4C5D8;
  v2 = a1[41] == 0;
  a1[2] = &off_1C4C6F0;
  if ( v2 )
    goto LABEL_12;
  v3 = a1[16];
  if ( v3 )
  {
    v4 = (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
    v5 = 4 * v4;
  }
  else
  {
    v5 = 0x3FFFFFFFCLL;
    LODWORD(v4) = -1;
  }
  v6 = *(unsigned int *)(v3 + v5);
  v7 = a1[15];
  v8 = v6;
  v9 = 8 * v6;
  v10 = v7 + v9;
  if ( !v7 )
  {
    v12 = 0;
    if ( !v9 )
      goto LABEL_9;
    goto LABEL_6;
  }
  v11 = 8LL * *(unsigned int *)(v7 - 4);
  v12 = v7 + v11;
  if ( v9 != v11 )
  {
    do
    {
LABEL_6:
      v13 = *(_QWORD *)(v12 - 8);
      v12 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    while ( v10 != v12 );
    v7 = v1[15];
    v3 = v1[16];
    if ( !v7 )
      goto LABEL_9;
  }
  *(_DWORD *)(v7 - 4) = v8;
LABEL_9:
  if ( v3 )
    *(_DWORD *)(v3 - 4) = v4;
  sub_180C2E0(v1 + 17);
LABEL_12:
  v14 = (_QWORD *)v1[42];
  if ( v14 )
  {
    v15 = (void *)v14[11];
    v14[5] = &off_1C62200;
    if ( v15 )
      sub_186B220(v15);
    v16 = (void *)v14[8];
    if ( v16 )
      sub_186B220(v16);
    v17 = (__int64 *)v14[4];
    if ( v17 )
    {
      v18 = &v17[*((unsigned int *)v17 - 1)];
      if ( v17 >= v18 )
        goto LABEL_25;
      do
      {
        while ( 1 )
        {
          v19 = *v17;
          if ( *v17 )
          {
            v20 = v14[3];
            v2 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( v2 )
              break;
          }
          if ( ++v17 >= v18 )
            goto LABEL_24;
        }
        sub_15D7BC0(v20, v19);
        ++v17;
      }
      while ( v17 < v18 );
LABEL_24:
      v17 = (__int64 *)v14[4];
      if ( v17 )
LABEL_25:
        sub_186B220(v17 - 1);
    }
    v21 = (_QWORD **)v14[2];
    if ( v21 )
    {
      v22 = &v21[*((unsigned int *)v21 - 1)];
      if ( v21 == v22 )
        goto LABEL_49;
      v115 = v14;
      v116 = v1;
      do
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = v23[5];
          if ( v24 )
          {
            v25 = *(unsigned int *)(v24 - 4);
            if ( (_DWORD)v25 )
            {
              ptr = *v21;
              v26 = v24 + 48 * v25;
              do
              {
                v32 = *(_QWORD *)(v24 + 32);
                if ( v32 )
                {
                  v33 = *(_QWORD *)(v24 + 40);
                  v2 = (*(_DWORD *)(v32 + 8))-- == 1;
                  if ( v2 )
                    sub_15D7BC0(v33, v32);
                }
                v27 = *(_QWORD *)(v24 + 16);
                if ( v27 )
                {
                  v28 = *(_QWORD *)(v24 + 24);
                  v2 = (*(_DWORD *)(v27 + 8))-- == 1;
                  if ( v2 )
                    sub_15D7BC0(v28, v27);
                }
                v29 = *(unsigned int **)v24;
                if ( *(_QWORD *)v24 )
                {
                  v30 = *(_QWORD **)(v24 + 8);
                  v31 = (*v29 + 0x3FFFFFFF) & 0x3FFFFFFF | *v29 & 0xC0000000;
                  *v29 = v31;
                  if ( (v31 & 0x3FFFFFFF) == 0 )
                  {
                    v65 = (_DWORD *)v30[83];
                    if ( v65 )
                    {
                      v66 = (unsigned int)*(v65 - 1);
                      if ( (_DWORD)v66 != *(v65 - 2) )
                      {
                        v67 = v66 + 1;
                        *(_QWORD *)&v65[2 * v66] = v29;
                        *(v65 - 1) = v66 + 1;
                        goto LABEL_111;
                      }
                      v75 = (unsigned int)(3 * v66 + 1) >> 1;
                      v76 = 8 * v75 + 8;
                      if ( 8 * (int)v66 + 8 < (unsigned int)v76 && (unsigned int)v66 < v75 )
                      {
                        v111 = (unsigned int)(3 * v66 + 1) >> 1;
                        v105 = v29;
                        v77 = (unsigned int *)sub_186B300(v65 - 2, v76);
                        v65 = v77 + 2;
                        v30[83] = v77 + 2;
                        *v77 = v111;
                        v78 = v77[1];
                        v67 = v78 + 1;
                        *(_QWORD *)&v77[2 * v78 + 2] = v105;
                        v77[1] = v78 + 1;
                        goto LABEL_111;
                      }
LABEL_143:
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_A3E10(v119, "Overflow encountered when expanding vector", v99);
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v119);
                      sub_233E40((__int64)v119);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v107 = v29;
                    v86 = sub_186B270(0x18u);
                    v67 = 1;
                    v65 = (_DWORD *)(v86 + 8);
                    *(_QWORD *)v86 = 2;
                    v30[83] = v86 + 8;
                    *(_QWORD *)(v86 + 8) = v107;
                    *(_DWORD *)(v86 + 4) = 1;
LABEL_111:
                    while ( v67 )
                    {
                      v68 = (unsigned int)(v67 - 1);
                      v69 = *(_QWORD *)&v65[2 * v68];
                      v70 = v67 - 1;
                      *(v65 - 1) = v68;
                      if ( *(char *)(v69 + 3) < 0 )
                      {
                        v79 = *(_QWORD *)(v69 + 8);
                        if ( v79 )
                        {
                          v80 = v30[81];
                          v2 = (*(_DWORD *)(v79 + 8))-- == 1;
                          if ( v2 )
                          {
                            v106 = v69;
                            sub_15D7BC0(v80, v79);
                            v69 = v106;
                          }
                        }
                        sub_17E9C40(v30[82], 16, v69);
                      }
                      else
                      {
                        v71 = *(unsigned int **)(v69 + 8);
                        v72 = (*v71 + 0x3FFFFFFF) & 0x3FFFFFFF | *v71 & 0xC0000000;
                        *v71 = v72;
                        if ( (v72 & 0x3FFFFFFF) == 0 )
                        {
                          if ( v70 == *(v65 - 2) )
                          {
                            v118 = v71;
                            v93 = (3 * v70 + 1) >> 1;
                            v113 = v69;
                            v94 = 8 * v93 + 8;
                            if ( 8 * v67 >= v94 )
                              goto LABEL_143;
                            v109 = (3 * v70 + 1) >> 1;
                            if ( v70 >= v93 )
                              goto LABEL_143;
                            v95 = (unsigned int *)sub_186B300(v65 - 2, v94);
                            v69 = v113;
                            v87 = v95 + 2;
                            v71 = v118;
                            v30[83] = v95 + 2;
                            *v95 = v109;
                          }
                          else
                          {
                            v87 = (_DWORD *)v30[83];
                          }
                          v88 = *(v87 - 1);
                          *(_QWORD *)&v87[2 * v88] = v71;
                          *(v87 - 1) = v88 + 1;
                        }
                        v73 = *(unsigned int **)(v69 + 16);
                        v74 = (*v73 + 0x3FFFFFFF) & 0x3FFFFFFF | *v73 & 0xC0000000;
                        *v73 = v74;
                        if ( (v74 & 0x3FFFFFFF) == 0 )
                        {
                          v81 = (_QWORD *)v30[83];
                          if ( v81 )
                          {
                            v82 = *((_DWORD *)v81 - 1);
                            if ( v82 == *((_DWORD *)v81 - 2) )
                            {
                              v117 = v73;
                              v89 = (3 * v82 + 1) >> 1;
                              v112 = v69;
                              v90 = 8 * v89 + 8;
                              if ( 8 * v82 + 8 >= (unsigned int)v90 )
                                goto LABEL_143;
                              v108 = (3 * v82 + 1) >> 1;
                              if ( v82 >= v89 )
                                goto LABEL_143;
                              v91 = (unsigned int *)sub_186B300(v81 - 1, v90);
                              v69 = v112;
                              v92 = v91[1];
                              v81 = v91 + 2;
                              v73 = v117;
                              v30[83] = v91 + 2;
                              *v91 = v108;
                              LODWORD(v91) = v92;
                              v85 = (unsigned int **)&v81[v92];
                              v84 = (_DWORD)v91 + 1;
                            }
                            else
                            {
                              v83 = v82;
                              v84 = v82 + 1;
                              v85 = (unsigned int **)&v81[v83];
                            }
                          }
                          else
                          {
                            v114 = v73;
                            v110 = v69;
                            v96 = (_QWORD *)sub_186B270(0x18u);
                            v69 = v110;
                            v73 = v114;
                            v97 = v96;
                            *v96 = 2;
                            v84 = 1;
                            v81 = v97 + 1;
                            v30[83] = v81;
                            v85 = (unsigned int **)v81;
                          }
                          *v85 = v73;
                          *((_DWORD *)v81 - 1) = v84;
                        }
                        sub_17E9C40(v30[82], 24, v69);
                      }
                      v65 = (_DWORD *)v30[83];
                      if ( !v65 )
                        break;
                      v67 = *(v65 - 1);
                    }
                  }
                }
                v24 += 48;
              }
              while ( v24 != v26 );
              v23 = ptr;
              v24 = ptr[5];
            }
            ptrc = v23;
            sub_186B220((void *)(v24 - 8));
            v23 = ptrc;
          }
          v55 = v23[3];
          if ( v55 )
          {
            v56 = v23[4];
            v2 = (*(_DWORD *)(v55 + 8))-- == 1;
            if ( v2 )
            {
              ptrd = v23;
              sub_15D7BC0(v56, v55);
              v23 = ptrd;
            }
          }
          v34 = v23[2];
          if ( v34 )
          {
            v57 = *(unsigned int *)(v34 - 4);
            if ( (_DWORD)v57 )
            {
              v58 = (__int64 *)v23[2];
              v59 = (__int64 *)(v34 + 32 * v57);
              v60 = v23;
              do
              {
                v64 = v58[1];
                v62 = *v58;
                if ( v64 )
                {
                  v2 = (*(_DWORD *)(v64 + 8))-- == 1;
                  if ( v2 )
                  {
                    sub_15D7BC0(v62, v64);
                    v62 = *v58;
                  }
                }
                v61 = (unsigned int *)v58[3];
                if ( v61 )
                {
                  sub_234C20((__int64 *)(v62 + 648), v61);
                  v62 = *v58;
                }
                v63 = v58[2];
                if ( v63 )
                {
                  v2 = (*(_DWORD *)(v63 + 8))-- == 1;
                  if ( v2 )
                    sub_15D7BC0(v62, v63);
                }
                v58 += 4;
              }
              while ( v58 != v59 );
              v23 = v60;
              v34 = v60[2];
            }
            ptra = v23;
            sub_186B220((void *)(v34 - 8));
            v23 = ptra;
          }
          v35 = (void *)v23[1];
          if ( v35 )
          {
            ptrb = v23;
            sub_1695230(v23[1]);
            sub_186B220(v35);
            v23 = ptrb;
          }
          sub_186B220(v23);
        }
        ++v21;
      }
      while ( v22 != v21 );
      v14 = v115;
      v1 = v116;
      v22 = (_QWORD **)v115[2];
      if ( v22 )
      {
LABEL_49:
        *((_DWORD *)v22 - 1) = 0;
        sub_186B220(v22 - 1);
      }
    }
    sub_186B220(v14);
  }
  v36 = (void (__fastcall ***)(_QWORD))v1[41];
  if ( v36 )
  {
    (**v36)(v1[41]);
    sub_186B220(v36);
  }
  v37 = (__int64 *)v1[40];
  if ( v37 )
  {
    v38 = &v37[*((unsigned int *)v37 - 1)];
    if ( v37 >= v38 )
      goto LABEL_61;
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v40 = v1[39];
          v2 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v2 )
            break;
        }
        if ( ++v37 >= v38 )
          goto LABEL_60;
      }
      sub_15D7BC0(v40, v39);
      ++v37;
    }
    while ( v37 < v38 );
LABEL_60:
    v37 = (__int64 *)v1[40];
    if ( v37 )
LABEL_61:
      sub_186B220(v37 - 1);
  }
  v41 = v1[37];
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v42 = v1[36];
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  sub_234F80(v1 + 32);
  v43 = (_DWORD *)v1[31];
  if ( v43 )
  {
    v2 = v43[8]-- == 1;
    if ( v2 )
    {
      sub_ED44E0(v43);
      sub_186B220(v43);
    }
  }
  sub_180C0E0(v1 + 26);
  v44 = v1[25];
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v45 = v1[24];
  if ( v45 )
    sub_186B220((void *)(v45 - 8));
  sub_18572D0(v1 + 23);
  v1[2] = qword_1C63778;
  sub_180C0E0(v1 + 17);
  v46 = v1[16];
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  v47 = v1[15];
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = (__int64 *)v1[14];
  if ( v48 )
  {
    v49 = &v48[*((unsigned int *)v48 - 1)];
    if ( v48 >= v49 )
      goto LABEL_85;
    do
    {
      while ( 1 )
      {
        v50 = *v48;
        if ( *v48 )
        {
          v51 = v1[13];
          v2 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v2 )
            break;
        }
        if ( ++v48 >= v49 )
          goto LABEL_84;
      }
      sub_15D7BC0(v51, v50);
      ++v48;
    }
    while ( v48 < v49 );
LABEL_84:
    v48 = (__int64 *)v1[14];
    if ( v48 )
LABEL_85:
      sub_186B220(v48 - 1);
  }
  v52 = (void *)v1[12];
  result = &off_1C62200;
  v1[6] = &off_1C62200;
  if ( v52 )
    result = (__int64 (__fastcall **)())sub_186B220(v52);
  v54 = (void *)v1[9];
  if ( v54 )
    return (__int64 (__fastcall **)())sub_186B220(v54);
  return result;
}

