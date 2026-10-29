__int64 __fastcall sub_C76B20(__int64 a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  _QWORD *v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int *v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rbx
  void *v20; // r14
  __int64 v21; // rsi
  void *v22; // rbx
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r15
  void *v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int *v35; // rsi
  __int64 v36; // rax
  void (__fastcall ***v37)(void *); // rbp
  bool v38; // zf
  _DWORD *v39; // rbp
  void *v40; // rdi
  _QWORD *v41; // rbp
  __int64 v42; // rax
  _QWORD *v43; // r12
  void *v44; // rdi
  _QWORD *v45; // rbp
  __int64 v46; // rax
  _QWORD *v47; // r12
  void *v48; // rdi
  __int64 v49; // rax
  void *v50; // rdi
  __int64 *v51; // rbp
  __int64 *v52; // r12
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  void *v57; // rdi
  __int64 v58; // rax
  __int64 *v59; // rbp
  __int64 *v60; // r12
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rax
  _DWORD *v65; // rdx
  __int64 v66; // rax
  int v67; // ecx
  __int64 v68; // rsi
  __int64 v69; // rbx
  unsigned int v70; // eax
  unsigned int *v71; // r14
  unsigned int v72; // esi
  unsigned int *v73; // r14
  unsigned int v74; // eax
  __int64 v75; // rsi
  __int64 v76; // rdi
  unsigned int v77; // ecx
  size_t v78; // rsi
  unsigned int v79; // r15d
  unsigned int *v80; // rax
  __int64 v81; // rsi
  _QWORD *v82; // rax
  unsigned int v83; // ecx
  __int64 v84; // rsi
  int v85; // ecx
  unsigned int **v86; // rsi
  _DWORD *v87; // rax
  int v88; // edx
  __int64 v89; // rax
  unsigned int v90; // r8d
  size_t v91; // rsi
  unsigned int v92; // r15d
  unsigned int *v93; // rcx
  __int64 v94; // rsi
  unsigned int v95; // r9d
  size_t v96; // rsi
  unsigned int v97; // r15d
  unsigned int *v98; // rdx
  _QWORD *v99; // rax
  char **exception; // rbp
  __int64 v101; // rdx
  __int64 *v102; // [rsp+0h] [rbp-78h]
  __int64 *v103; // [rsp+8h] [rbp-70h]
  unsigned int **v104; // [rsp+10h] [rbp-68h]
  __int64 v105[11]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (_QWORD *)a1;
  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 544);
  if ( !v3 )
    goto LABEL_23;
  v4 = *(unsigned int *)(v3 - 4);
  v2 = (_QWORD *)(a1 + 8);
  if ( !(_DWORD)v4 )
    goto LABEL_22;
  v102 = *(__int64 **)(a1 + 544);
  v103 = (__int64 *)(v3 + 8 * v4);
  v104 = (unsigned int **)(a1 + 728);
  do
  {
    v5 = (unsigned int *)*v102;
    v6 = *(unsigned int **)(*v102 + 72);
    if ( v6 )
    {
      v7 = (_QWORD *)*v1;
      v8 = (*v6 + 0x3FFFFFFF) & 0x3FFFFFFF | *v6 & 0xC0000000;
      *v6 = v8;
      if ( (v8 & 0x3FFFFFFF) == 0 )
      {
        v65 = (_DWORD *)v7[83];
        if ( v65 )
        {
          v66 = (unsigned int)*(v65 - 1);
          if ( (_DWORD)v66 != *(v65 - 2) )
          {
            v67 = v66 + 1;
            *(_QWORD *)&v65[2 * v66] = v6;
            *(v65 - 1) = v66 + 1;
            goto LABEL_104;
          }
          v77 = (unsigned int)(3 * v66 + 1) >> 1;
          v78 = 8 * v77 + 8;
          v79 = v77;
          if ( 8 * (int)v66 + 8 < (unsigned int)v78 && (unsigned int)v66 < v77 )
          {
            a1 = (__int64)(v65 - 2);
            v80 = (unsigned int *)sub_186B300(v65 - 2, v78);
            v81 = v80[1];
            v65 = v80 + 2;
            v7[83] = v80 + 2;
            v67 = v81 + 1;
            *v80 = v79;
            *(_QWORD *)&v80[2 * v81 + 2] = v6;
            v80[1] = v81 + 1;
            goto LABEL_104;
          }
LABEL_138:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_161886(v105, "Overflow encountered when expanding vector", v101);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v105);
          sub_233E40((__int64)v105);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        a1 = 24;
        v89 = sub_186B270(0x18u);
        v67 = 1;
        v65 = (_DWORD *)(v89 + 8);
        *(_QWORD *)v89 = 2;
        v7[83] = v89 + 8;
        *(_QWORD *)(v89 + 8) = v6;
        *(_DWORD *)(v89 + 4) = 1;
LABEL_104:
        while ( v67 )
        {
          v68 = (unsigned int)(v67 - 1);
          v69 = *(_QWORD *)&v65[2 * v68];
          v70 = v67 - 1;
          *(v65 - 1) = v68;
          if ( *(char *)(v69 + 3) < 0 )
          {
            v75 = *(_QWORD *)(v69 + 8);
            if ( v75 )
            {
              v76 = v7[81];
              v38 = (*(_DWORD *)(v75 + 8))-- == 1;
              if ( v38 )
                sub_15D7BC0(v76, v75);
            }
            a1 = v7[82];
            sub_17E9C40(a1, 16, v69);
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
                v95 = (3 * v70 + 1) >> 1;
                v96 = 8 * v95 + 8;
                v97 = v95;
                if ( 8 * v67 >= (unsigned int)v96 || v70 >= v95 )
                  goto LABEL_138;
                v98 = (unsigned int *)sub_186B300(v65 - 2, v96);
                v87 = v98 + 2;
                v7[83] = v98 + 2;
                *v98 = v97;
              }
              else
              {
                v87 = (_DWORD *)v7[83];
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
              v82 = (_QWORD *)v7[83];
              if ( v82 )
              {
                v83 = *((_DWORD *)v82 - 1);
                if ( v83 == *((_DWORD *)v82 - 2) )
                {
                  v90 = (3 * v83 + 1) >> 1;
                  v91 = 8 * v90 + 8;
                  v92 = v90;
                  if ( 8 * v83 + 8 >= (unsigned int)v91 || v83 >= v90 )
                    goto LABEL_138;
                  v93 = (unsigned int *)sub_186B300(v82 - 1, v91);
                  v82 = v93 + 2;
                  v94 = v93[1];
                  v7[83] = v93 + 2;
                  *v93 = v92;
                  LODWORD(v93) = v94;
                  v86 = (unsigned int **)&v82[v94];
                  v85 = (_DWORD)v93 + 1;
                }
                else
                {
                  v84 = v83;
                  v85 = v83 + 1;
                  v86 = (unsigned int **)&v82[v84];
                }
              }
              else
              {
                v99 = (_QWORD *)sub_186B270(0x18u);
                v85 = 1;
                *v99 = 2;
                v82 = v99 + 1;
                v7[83] = v82;
                v86 = (unsigned int **)v82;
              }
              *v86 = v73;
              *((_DWORD *)v82 - 1) = v85;
            }
            a1 = v7[82];
            sub_17E9C40(a1, 24, v69);
          }
          v65 = (_DWORD *)v7[83];
          if ( !v65 )
            break;
          v67 = *(v65 - 1);
        }
      }
    }
    v9 = v1[99];
    v10 = *v5;
    if ( v9 )
    {
      if ( v10 < *(_DWORD *)(v9 - 4) )
      {
        v11 = (unsigned int *)(v9 + 4LL * v10);
        v12 = *v11;
        if ( *v11 != -1 )
        {
          v13 = v1[100];
          *v11 = -1;
          if ( v13 )
          {
            v14 = (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
            if ( v12 == (_DWORD)v14 )
            {
LABEL_13:
              *(_DWORD *)(v13 - 4) = v14;
              v10 = *v5;
              goto LABEL_14;
            }
            v15 = 8 * v14;
          }
          else
          {
            v15 = 0x7FFFFFFF8LL;
          }
          v14 = *(_QWORD *)(v13 + v15);
          a1 = v12;
          *(_QWORD *)(v13 + 8LL * v12) = v14;
          *(_DWORD *)(v9 + 4LL * *(unsigned int *)v14) = v12;
          LODWORD(v14) = *(_DWORD *)(v13 - 4) - 1;
          goto LABEL_13;
        }
      }
    }
LABEL_14:
    if ( !(unsigned __int8)sub_186AF10(a1) )
    {
      v16 = v1[91];
      if ( !v16 || (v17 = *(unsigned int *)(v16 - 4), (_DWORD)v17 == *(_DWORD *)(v16 - 8)) )
      {
        sub_2FD3F0(v104);
        v16 = v1[91];
        v17 = *(unsigned int *)(v16 - 4);
      }
      *(_DWORD *)(v16 + 4 * v17) = v10;
      ++*(_DWORD *)(v16 - 4);
    }
    v18 = *((_QWORD *)v5 + 4);
    v19 = v18 + 32LL * v5[2];
    while ( v19 != v18 )
    {
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v18);
      v21 = v18 + 16;
      v18 += 32;
      sub_182CBA0(v20, v21);
    }
    v22 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v5 + 10);
    v23 = v22;
    v2 = v1 + 1;
    sub_182CBA0(v23, v5 + 14);
    a1 = (__int64)(v1 + 1);
    sub_17E9C40(v1 + 1, 4 * (9 * v5[2] + (v5[1] & 0x1FFFFFFF) + 20), v5);
    ++v102;
  }
  while ( v103 != v102 );
  v3 = v1[68];
  if ( v3 )
LABEL_22:
    *(_DWORD *)(v3 - 4) = 0;
LABEL_23:
  v24 = v1[105];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = v1[104];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = v1[103];
  if ( v26 )
  {
    v27 = *(unsigned int *)(v26 - 4);
    if ( (_DWORD)v27 )
    {
      v28 = v26 + 32 * v27;
      do
      {
        v29 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v26);
        v30 = v26 + 16;
        v26 += 32;
        sub_182CBA0(v29, v30);
      }
      while ( v26 != v28 );
      v26 = v1[103];
    }
    sub_186B220((void *)(v26 - 8));
  }
  v31 = v1[102];
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = v1[101];
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = v1[100];
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = v1[99];
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  v35 = (unsigned int *)v1[97];
  if ( v35 )
    sub_234C20((__int64 *)(v1[98] + 648LL), v35);
  v36 = v1[91];
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = (void (__fastcall ***)(void *))v1[89];
  if ( v37 )
  {
    v38 = (*((_DWORD *)v37 + 2))-- == 1;
    if ( v38 )
    {
      (**v37)(v37);
      sub_186B220(v37);
    }
  }
  v39 = (_DWORD *)v1[88];
  if ( v39 )
  {
    v38 = v39[8]-- == 1;
    if ( v38 )
    {
      sub_ED44E0(v39);
      sub_186B220(v39);
    }
  }
  v40 = (void *)v1[85];
  if ( v40 )
    sub_186B220(v40);
  v41 = (_QWORD *)v1[84];
  if ( v41 )
  {
    v42 = *((unsigned int *)v41 - 1);
    if ( (_DWORD)v42 )
    {
      v43 = &v41[v42];
      do
      {
        while ( *v41 )
        {
          v44 = (void *)(*v41++ - 8LL);
          sub_186B220(v44);
          if ( v43 == v41 )
          {
            v41 = (_QWORD *)v1[84];
            goto LABEL_59;
          }
        }
        ++v41;
      }
      while ( v41 != v43 );
      v41 = (_QWORD *)v1[84];
    }
LABEL_59:
    sub_186B220(v41 - 1);
  }
  v45 = (_QWORD *)v1[83];
  if ( v45 )
  {
    v46 = *((unsigned int *)v45 - 1);
    if ( (_DWORD)v46 )
    {
      v47 = &v45[v46];
      do
      {
        while ( *v45 )
        {
          v48 = (void *)(*v45++ - 8LL);
          sub_186B220(v48);
          if ( v47 == v45 )
          {
            v45 = (_QWORD *)v1[83];
            goto LABEL_66;
          }
        }
        ++v45;
      }
      while ( v45 != v47 );
      v45 = (_QWORD *)v1[83];
    }
LABEL_66:
    sub_186B220(v45 - 1);
  }
  v49 = v1[82];
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  v50 = (void *)v1[79];
  if ( v50 )
    sub_186B220(v50);
  v51 = (__int64 *)v1[78];
  if ( v51 )
  {
    v52 = &v51[*((unsigned int *)v51 - 1)];
    if ( v51 >= v52 )
      goto LABEL_79;
    do
    {
      while ( 1 )
      {
        v53 = *v51;
        if ( *v51 )
        {
          v54 = v1[77];
          v38 = (*(_DWORD *)(v53 + 8))-- == 1;
          if ( v38 )
            break;
        }
        if ( ++v51 >= v52 )
          goto LABEL_78;
      }
      sub_15D7BC0(v54, v53);
      ++v51;
    }
    while ( v51 < v52 );
LABEL_78:
    v51 = (__int64 *)v1[78];
    if ( v51 )
LABEL_79:
      sub_186B220(v51 - 1);
  }
  v55 = v1[76];
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v56 = v1[75];
  if ( v56 )
    sub_186B220((void *)(v56 - 8));
  v57 = (void *)v1[72];
  if ( v57 )
    sub_186B220(v57);
  v58 = v1[71];
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  v59 = (__int64 *)v1[70];
  if ( v59 )
  {
    v60 = &v59[*((unsigned int *)v59 - 1)];
    if ( v59 >= v60 )
      goto LABEL_96;
    do
    {
      while ( 1 )
      {
        v61 = *v59;
        if ( *v59 )
        {
          v62 = v1[69];
          v38 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v38 )
            break;
        }
        if ( ++v59 >= v60 )
          goto LABEL_95;
      }
      sub_15D7BC0(v62, v61);
      ++v59;
    }
    while ( v59 < v60 );
LABEL_95:
    v59 = (__int64 *)v1[70];
    if ( v59 )
LABEL_96:
      sub_186B220(v59 - 1);
  }
  v63 = v1[68];
  if ( v63 )
    sub_186B220((void *)(v63 - 8));
  return sub_17E9B80(v2);
}

