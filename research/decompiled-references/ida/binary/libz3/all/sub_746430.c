__int64 __fastcall sub_746430(_QWORD *a1, __int64 a2, int a3)
{
  char **v3; // r13
  char **v4; // rbx
  char **v5; // r13
  char **exception; // rbx
  char **v7; // rbx
  char **v8; // r13
  char **v9; // rbx
  __int16 v13; // ax
  __int16 v14; // ax
  __int64 v15; // rax
  char v16; // dl
  unsigned __int8 v17; // r13
  int v18; // ebp
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rax
  _QWORD *v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 *v27; // rdx
  __int64 *v28; // r14
  __int64 v29; // r15
  _QWORD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  _QWORD *v33; // rbp
  __int64 v34; // r8
  unsigned int v35; // edx
  __int64 v36; // rax
  unsigned int i; // ecx
  __int64 v38; // rsi
  int v39; // eax
  _QWORD *v40; // rsi
  __int64 v41; // r8
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  unsigned int v44; // r9d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rsi
  unsigned int v48; // ebp
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rdx
  unsigned __int8 v52; // bp
  __int64 v53; // rax
  int v54; // r13d
  _QWORD *v55; // rdx
  __int64 v56; // rax
  __int64 *v57; // rax
  unsigned int v58; // r9d
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rax
  int v62; // edx
  unsigned __int64 v63; // rdx
  __int64 *j; // r14
  __int64 v65; // rsi
  bool v66; // zf
  __int64 v67; // rax
  __int64 v68; // rbp
  _QWORD *v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // rcx
  int v72; // eax
  __int64 *v73; // rcx
  __int64 v74; // rax
  int v75; // edx
  unsigned int v76; // r14d
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rdx
  unsigned int v82; // r14d
  size_t v83; // rsi
  unsigned int *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbp
  unsigned int v87; // edx
  _QWORD *v88; // rax
  unsigned int v89; // r13d
  unsigned int v90; // ecx
  unsigned int *v91; // rax
  __int64 v92; // rcx
  _QWORD *v93; // rax
  unsigned int v94; // r13d
  unsigned int v95; // ecx
  unsigned int *v96; // rax
  __int64 v97; // rsi
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // [rsp+0h] [rbp-88h]
  unsigned int v101; // [rsp+0h] [rbp-88h]
  unsigned __int64 v102; // [rsp+0h] [rbp-88h]
  __int64 v103; // [rsp+0h] [rbp-88h]
  unsigned int v104; // [rsp+8h] [rbp-80h]
  __int64 v105; // [rsp+8h] [rbp-80h]
  unsigned int v106; // [rsp+8h] [rbp-80h]
  __int64 v107; // [rsp+10h] [rbp-78h]
  unsigned __int8 v108; // [rsp+1Bh] [rbp-6Dh]
  unsigned int v109; // [rsp+1Ch] [rbp-6Ch]
  __int64 v110[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v23 = (_QWORD *)a1[7];
    if ( v23 )
    {
      v24 = *((_DWORD *)v23 - 1);
      if ( v24 == *((_DWORD *)v23 - 2) )
      {
        v48 = (3 * v24 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v49 || v24 >= v48 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_743560(v110, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v110);
          sub_233E40((__int64)v110);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v50 = (unsigned int *)sub_186B300(v23 - 1, v49);
        v51 = v50[1];
        v23 = v50 + 2;
        *v50 = v48;
        a1[7] = v50 + 2;
        LODWORD(v50) = v51;
        v27 = &v23[v51];
        v26 = (_DWORD)v50 + 1;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = &v23[v25];
      }
    }
    else
    {
      v88 = (_QWORD *)sub_186B270(0x18u);
      v23 = v88 + 1;
      *v88 = 2;
      v26 = 1;
      a1[7] = v23;
      v27 = v23;
    }
    *v27 = a2;
    *((_DWORD *)v23 - 1) = v26;
    return 1;
  }
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v108 = 0;
    goto LABEL_9;
  }
  v13 = *(_WORD *)(a2 + 4);
  if ( v13 )
  {
    if ( v13 != 2 )
    {
      if ( v13 != 1 )
        goto LABEL_7;
      goto LABEL_72;
    }
    goto LABEL_73;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_73:
    v67 = sub_1680FB0(a1[4], a2, 0);
    v108 = 1;
    v68 = v67;
    if ( v67 )
    {
      v69 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v67 + 8);
      if ( v69 )
      {
        v70 = *((_DWORD *)v69 - 1);
        if ( v70 == *((_DWORD *)v69 - 2) )
        {
          v89 = (3 * v70 + 1) >> 1;
          v90 = 8 * v89 + 8;
          if ( 8 * v70 + 8 >= v90 || v70 >= v89 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_743560(v110, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, v110);
            sub_233E40((__int64)v110);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v91 = (unsigned int *)sub_186B300(v69 - 1, v90);
          v92 = v91[1];
          v69 = v91 + 2;
          *v91 = v89;
          a1[7] = v91 + 2;
          LODWORD(v91) = v92;
          v73 = &v69[v92];
          v72 = (_DWORD)v91 + 1;
        }
        else
        {
          v71 = v70;
          v72 = v70 + 1;
          v73 = &v69[v71];
        }
      }
      else
      {
        v81 = (_QWORD *)sub_186B270(0x18u);
        *v81 = 2;
        v72 = 1;
        v69 = v81 + 1;
        a1[7] = v69;
        v73 = v69;
      }
      *v73 = v68;
      *((_DWORD *)v69 - 1) = v72;
      if ( a2 != v68 )
      {
        v74 = a1[5];
        if ( v74 )
        {
          v75 = *(_DWORD *)(v74 - 4);
          if ( v75 )
            *(_BYTE *)(v74 + 16LL * (unsigned int)(v75 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
LABEL_9:
    v14 = *(_WORD *)(a2 + 4);
    if ( v14 != 2 )
    {
      if ( v14 != 1 )
        goto LABEL_11;
LABEL_72:
      sub_745BC0(a1, a2);
      return 1;
    }
    v28 = (__int64 *)a1[18];
    v107 = *v28;
    if ( *(_DWORD *)(a2 + 20) )
    {
      v29 = *(_QWORD *)(a2 + 80);
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      v30 = (_QWORD *)(sub_186B270(0x18u) + 8);
      v31 = 0;
      v32 = 1;
      *(v30 - 1) = 2;
      v33 = v30;
      while ( 1 )
      {
        *v30 = v29;
        v34 = v31 + 1;
        *((_DWORD *)v33 - 1) = v32;
        if ( (unsigned int)v34 >= *(_DWORD *)(a2 + 20) )
          break;
        while ( 1 )
        {
          v29 = *(_QWORD *)(a2 + 8 * v34 + 80);
          if ( v29 )
            ++*(_DWORD *)(v29 + 8);
          v35 = *((_DWORD *)v33 - 1);
          if ( v35 == *((_DWORD *)v33 - 2) )
            break;
          v36 = v35;
          v32 = v35 + 1;
          ++v34;
          v33[v36] = v29;
          *((_DWORD *)v33 - 1) = v32;
          if ( (unsigned int)v34 >= *(_DWORD *)(a2 + 20) )
            goto LABEL_37;
        }
        v58 = (3 * v35 + 1) >> 1;
        v59 = 8 * v58 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v59 || v35 >= v58 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_743560(v110, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v110);
          sub_233E40((__int64)v110);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v105 = v34;
        v101 = (3 * v35 + 1) >> 1;
        v60 = (unsigned int *)sub_186B300(v33 - 1, v59);
        v33 = v60 + 2;
        v31 = v105;
        *v60 = v101;
        v61 = v60[1];
        v62 = v61;
        v30 = &v33[v61];
        v32 = (unsigned int)(v62 + 1);
      }
LABEL_37:
      for ( i = 0; i < (unsigned int)v32; ++i )
      {
        v41 = v33[i];
        if ( v41 )
          ++*(_DWORD *)(v41 + 8);
        v42 = (_QWORD *)v28[13];
        if ( v42 )
        {
          v43 = *((_DWORD *)v42 - 1);
          if ( v43 == *((_DWORD *)v42 - 2) )
          {
            v44 = (3 * v43 + 1) >> 1;
            v45 = 8 * v44 + 8;
            if ( 8 * v43 + 8 >= (unsigned int)v45 || v43 >= v44 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_743560(v110, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v110);
              sub_233E40((__int64)v110);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v109 = (3 * v43 + 1) >> 1;
            v104 = i;
            v100 = v41;
            v46 = (unsigned int *)sub_186B300(v42 - 1, v45);
            v47 = v46[1];
            v42 = v46 + 2;
            v41 = v100;
            i = v104;
            v28[13] = (__int64)(v46 + 2);
            *v46 = v109;
            LODWORD(v46) = v47;
            v40 = &v42[v47];
            v39 = (_DWORD)v46 + 1;
          }
          else
          {
            v38 = v43;
            v39 = v43 + 1;
            v40 = &v42[v38];
          }
        }
        else
        {
          v106 = i;
          v103 = v41;
          v80 = (_QWORD *)sub_186B270(0x18u);
          v42 = v80 + 1;
          v41 = v103;
          v40 = v42;
          *v80 = 2;
          i = v106;
          v39 = 1;
          v28[13] = (__int64)v42;
        }
        *v40 = v41;
        *((_DWORD *)v42 - 1) = v39;
        v32 = *((unsigned int *)v33 - 1);
      }
      v63 = (unsigned __int64)&v33[v32];
      for ( j = v33; (unsigned __int64)j < v63; ++j )
      {
        v65 = *j;
        if ( *j )
        {
          v66 = (*(_DWORD *)(v65 + 8))-- == 1;
          if ( v66 )
          {
            v102 = v63;
            sub_15D7BC0(v107, v65);
            v63 = v102;
          }
        }
      }
      sub_186B220(v33 - 1);
      v14 = *(_WORD *)(a2 + 4);
      if ( v14 == 1 )
        goto LABEL_72;
      if ( v14 != 2 )
      {
LABEL_11:
        if ( v14 )
        {
LABEL_7:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
        goto LABEL_12;
      }
    }
    v52 = (a3 - 1) & 3;
    if ( a3 == 3 )
      v52 = 3;
    v53 = a1[7];
    if ( v53 )
      v54 = *(_DWORD *)(v53 - 4);
    else
      v54 = 0;
    v55 = (_QWORD *)a1[5];
    if ( v55 )
    {
      v56 = *((unsigned int *)v55 - 1);
      if ( (_DWORD)v56 == *((_DWORD *)v55 - 2) )
      {
        v76 = (unsigned int)(3 * v56 + 1) >> 1;
        v77 = 16 * v76 + 8;
        if ( 16 * (int)v56 + 8 >= (unsigned int)v77 || (unsigned int)v56 >= v76 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_743560(v110, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v110);
          sub_233E40((__int64)v110);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v78 = (unsigned int *)sub_186B300(v55 - 1, v77);
        v55 = v78 + 2;
        *v78 = v76;
        v79 = v78[1];
        a1[5] = v55;
        v57 = &v55[2 * v79];
      }
      else
      {
        v57 = &v55[2 * v56];
      }
    }
    else
    {
      v93 = (_QWORD *)sub_186B270(0x28u);
      v55 = v93 + 1;
      *v93 = 2;
      a1[5] = v93 + 1;
      v57 = v93 + 1;
    }
    *v57 = a2;
    *((_DWORD *)v57 + 3) = v54;
    *((_DWORD *)v57 + 2) = v108 | (16 * v52);
    ++*((_DWORD *)v55 - 1);
    return 0;
  }
  v108 = 0;
LABEL_12:
  v15 = a1[7];
  if ( !*(_DWORD *)(a2 + 24) )
  {
    v86 = a1[1];
    *(_DWORD *)(a2 + 8) += 2;
    if ( v15 )
    {
      v87 = *(_DWORD *)(v15 - 4);
      if ( v87 == *(_DWORD *)(v15 - 8) )
      {
        v94 = (3 * v87 + 1) >> 1;
        v95 = 8 * v94 + 8;
        if ( 8 * v87 + 8 >= v95 || v87 >= v94 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_743560(v110, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v110);
          sub_233E40((__int64)v110);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v96 = (unsigned int *)sub_186B300((void *)(v15 - 8), v95);
        v97 = v96[1];
        *v96 = v94;
        a1[7] = v96 + 2;
        *(_QWORD *)&v96[2 * v97 + 2] = a2;
        v96[1] = v97 + 1;
      }
      else
      {
        *(_QWORD *)(v15 + 8LL * v87) = a2;
        *(_DWORD *)(v15 - 4) = v87 + 1;
      }
    }
    else
    {
      v99 = (_QWORD *)sub_186B270(0x18u);
      v99[1] = a2;
      a1[7] = v99 + 1;
      *v99 = 0x100000002LL;
    }
    v66 = (*(_DWORD *)(a2 + 8))-- == 1;
    if ( v66 )
      sub_15D7BC0(v86, a2);
    return 1;
  }
  v16 = 3;
  if ( a3 != 3 )
    v16 = (a3 - 1) & 3;
  v17 = v16;
  if ( v15 )
    v18 = *(_DWORD *)(v15 - 4);
  else
    v18 = 0;
  v19 = (_QWORD *)a1[5];
  if ( v19 )
  {
    v20 = *((unsigned int *)v19 - 1);
    if ( (_DWORD)v20 == *((_DWORD *)v19 - 2) )
    {
      v82 = (unsigned int)(3 * v20 + 1) >> 1;
      v83 = 16 * v82 + 8;
      if ( 16 * (int)v20 + 8 >= (unsigned int)v83 || (unsigned int)v20 >= v82 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_743560(v110, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v110);
        sub_233E40((__int64)v110);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v84 = (unsigned int *)sub_186B300(v19 - 1, v83);
      v19 = v84 + 2;
      *v84 = v82;
      v85 = v84[1];
      a1[5] = v19;
      v21 = &v19[2 * v85];
    }
    else
    {
      v21 = &v19[2 * v20];
    }
  }
  else
  {
    v98 = (_QWORD *)sub_186B270(0x28u);
    v19 = v98 + 1;
    *v98 = 2;
    a1[5] = v98 + 1;
    v21 = v98 + 1;
  }
  *v21 = a2;
  *((_DWORD *)v21 + 3) = v18;
  *((_DWORD *)v21 + 2) = (16 * v17) | v108;
  ++*((_DWORD *)v19 - 1);
  return 0;
}

