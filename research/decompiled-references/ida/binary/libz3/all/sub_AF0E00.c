__int64 __fastcall sub_AF0E00(__int64 a1, __int64 a2)
{
  char **v2; // r12
  __int64 v3; // rdx
  char **v4; // r12
  __int64 v5; // rdx
  char **v6; // r12
  __int64 v7; // rdx
  char **exception; // r12
  __int64 v9; // rdx
  char **v10; // r12
  __int64 v11; // rdx
  _QWORD *v12; // r9
  _DWORD *v13; // r15
  _QWORD *v14; // r14
  _QWORD *v15; // r13
  __int64 v16; // rax
  unsigned int v17; // r8d
  int v18; // edx
  __int64 v19; // rax
  unsigned int *v20; // rax
  __int64 v21; // rbp
  unsigned int *v22; // rax
  __int64 v23; // r11
  _DWORD *v24; // r12
  _DWORD *v25; // r10
  __int64 v26; // rbp
  _DWORD *v27; // rcx
  __int64 i; // rax
  int v29; // ebx
  int v30; // ebx
  __int64 v31; // rax
  int *v32; // rax
  __int64 v33; // rax
  unsigned int *v34; // rax
  __int64 v35; // rax
  unsigned int v36; // r8d
  __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // edi
  unsigned int v41; // r8d
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned int v44; // ebp
  size_t v45; // rsi
  unsigned int *v46; // rax
  unsigned int v47; // ebx
  size_t v48; // rsi
  unsigned int *v49; // rax
  _QWORD *v50; // rax
  unsigned int v51; // ebx
  size_t v52; // rsi
  unsigned int *v53; // rax
  int v54; // eax
  _DWORD *v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // edx
  __int64 v62; // r12
  __int64 v63; // rcx
  __int64 v64; // rsi
  unsigned int v65; // ebp
  _DWORD *v66; // r10
  _QWORD *v67; // rdi
  __int64 v68; // rax
  _DWORD *v69; // r8
  unsigned int v70; // r8d
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  int v76; // [rsp+0h] [rbp-A8h]
  _DWORD *v77; // [rsp+0h] [rbp-A8h]
  __int64 v78; // [rsp+0h] [rbp-A8h]
  __int64 v79; // [rsp+0h] [rbp-A8h]
  __int64 v80; // [rsp+8h] [rbp-A0h]
  __int64 v81; // [rsp+8h] [rbp-A0h]
  __int64 v82; // [rsp+8h] [rbp-A0h]
  int v83; // [rsp+8h] [rbp-A0h]
  __int64 v84; // [rsp+8h] [rbp-A0h]
  int v85; // [rsp+8h] [rbp-A0h]
  __int64 v86; // [rsp+8h] [rbp-A0h]
  _DWORD *v87; // [rsp+8h] [rbp-A0h]
  unsigned int v88; // [rsp+10h] [rbp-98h]
  unsigned int v89; // [rsp+10h] [rbp-98h]
  unsigned int v90; // [rsp+10h] [rbp-98h]
  unsigned int v91; // [rsp+10h] [rbp-98h]
  _QWORD *v92; // [rsp+10h] [rbp-98h]
  int v94; // [rsp+20h] [rbp-88h]
  _QWORD *v95; // [rsp+20h] [rbp-88h]
  int v96; // [rsp+28h] [rbp-80h]
  int v97; // [rsp+28h] [rbp-80h]
  int v98; // [rsp+28h] [rbp-80h]
  _QWORD *v99; // [rsp+28h] [rbp-80h]
  _DWORD *v100; // [rsp+28h] [rbp-80h]
  _QWORD *v101; // [rsp+28h] [rbp-80h]
  int v102; // [rsp+28h] [rbp-80h]
  _QWORD *v103; // [rsp+30h] [rbp-78h]
  _QWORD *v104; // [rsp+30h] [rbp-78h]
  _QWORD *v105; // [rsp+30h] [rbp-78h]
  unsigned int v106; // [rsp+30h] [rbp-78h]
  _QWORD *v107; // [rsp+30h] [rbp-78h]
  _QWORD *v108; // [rsp+38h] [rbp-70h]
  _QWORD *v109; // [rsp+48h] [rbp-60h] BYREF
  __int64 v110[11]; // [rsp+50h] [rbp-58h] BYREF

  v12 = (_QWORD *)a1;
  v13 = nullptr;
  v14 = nullptr;
  v15 = nullptr;
  v16 = *(unsigned int *)(a1 + 132);
  ++dword_1C7ED14;
  v94 = v16;
  v17 = v16;
  v18 = 0;
  v76 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4LL * *(unsigned int *)(*(_QWORD *)(a1 + 40) + 32 * v16));
  do
  {
    if ( v14 )
    {
      v19 = *((unsigned int *)v14 - 1);
      if ( (_DWORD)v19 == *((_DWORD *)v14 - 2) )
      {
        v51 = (unsigned int)(3 * v19 + 1) >> 1;
        v52 = 4 * v51 + 8;
        if ( 4 * (int)v19 + 8 >= (unsigned int)v52 || (unsigned int)v19 >= v51 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_140FB4(v110, "Overflow encountered when expanding vector", v9);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v110);
          sub_233E40((__int64)v110);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v99 = v12;
        v89 = v17;
        v83 = v18;
        v53 = (unsigned int *)sub_186B300(v14 - 1, v52);
        v14 = v53 + 2;
        v18 = v83;
        v17 = v89;
        *v53 = v51;
        v12 = v99;
        v20 = &v53[v53[1] + 2];
      }
      else
      {
        v20 = (unsigned int *)v14 + v19;
      }
    }
    else
    {
      v101 = v12;
      v90 = v17;
      v85 = v18;
      v56 = (_QWORD *)sub_186B270(0x10u);
      v14 = v56 + 1;
      *v56 = 2;
      v18 = v85;
      v17 = v90;
      v12 = v101;
      v20 = (unsigned int *)(v56 + 1);
    }
    *v20 = v17;
    v21 = v12[5];
    ++*((_DWORD *)v14 - 1);
    v22 = (unsigned int *)(v21 + 32LL * v17);
    v23 = *v22;
    v18 += v22[2];
    v88 = *v22;
    v24 = *(_DWORD **)(v12[6] + 8 * v23);
    if ( v24 )
    {
      v25 = &v24[*(v24 - 1)];
      if ( v24 != v25 )
      {
        while ( 1 )
        {
          LODWORD(v110[0]) = *v24;
          v26 = 32LL * LODWORD(v110[0]) + v21;
          if ( LODWORD(v110[0]) != v17 && *(_BYTE *)(v26 + 24) && v15 )
            break;
LABEL_8:
          if ( v25 == ++v24 )
            goto LABEL_20;
LABEL_9:
          v21 = v12[5];
        }
        v27 = v13;
        for ( i = 0; *((_DWORD *)v15 - 1) != i; ++i )
        {
          if ( *(_DWORD *)(v26 + 4) == *((_DWORD *)v15 + i) )
          {
            v29 = *v27 + *(_DWORD *)(v26 + 8) - v18;
            if ( v29 >= 0 )
            {
              v30 = v76 + v29;
              if ( v30 < 0 )
              {
                v54 = i + 1;
                *((_DWORD *)v15 - 1) = v54;
                if ( v13 )
                  *(v13 - 1) = v54;
                if ( v14 )
                  *((_DWORD *)v14 - 1) = v54;
                v108 = v12;
                v77 = v27;
                v106 = v17;
                v100 = v25;
                v84 = v23;
                v109 = v14;
                sub_AF0D60(&v109, (unsigned int *)v110);
                v55 = v77;
                v76 = v30;
                v14 = v109;
                v23 = v84;
                v25 = v100;
                v17 = v106;
                v12 = v108;
                v18 = *v55 + *(_DWORD *)(v26 + 8);
                goto LABEL_8;
              }
            }
          }
          ++v27;
        }
        if ( v25 != ++v24 )
          goto LABEL_9;
      }
    }
LABEL_20:
    if ( !v13 )
    {
      v107 = v12;
      v102 = v18;
      v86 = v23;
      v57 = (_QWORD *)sub_186B270(0x10u);
      v13 = v57 + 1;
      *v57 = 2;
      v23 = v86;
      v18 = v102;
      v12 = v107;
      v32 = (int *)(v57 + 1);
LABEL_23:
      *v32 = v18;
      ++*(v13 - 1);
      if ( !v15 )
        goto LABEL_41;
      goto LABEL_24;
    }
    v31 = (unsigned int)*(v13 - 1);
    if ( (_DWORD)v31 != *(v13 - 2) )
    {
      v32 = &v13[v31];
      goto LABEL_23;
    }
    v47 = (unsigned int)(3 * v31 + 1) >> 1;
    v48 = 4 * v47 + 8;
    if ( 4 * (int)v31 + 8 >= (unsigned int)v48 || (unsigned int)v31 >= v47 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_140FB4(v110, "Overflow encountered when expanding vector", v7);
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, v110);
      sub_233E40((__int64)v110);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v104 = v12;
    v97 = v18;
    v81 = v23;
    v49 = (unsigned int *)sub_186B300(v13 - 2, v48);
    v13 = v49 + 2;
    v18 = v97;
    v23 = v81;
    *v49 = v47;
    v12 = v104;
    v49[v49[1]++ + 2] = v97;
    if ( !v15 )
    {
LABEL_41:
      v105 = v12;
      v98 = v18;
      v82 = v23;
      v50 = (_QWORD *)sub_186B270(0x10u);
      v15 = v50 + 1;
      *v50 = 2;
      v23 = v82;
      v18 = v98;
      v12 = v105;
      v34 = (unsigned int *)(v50 + 1);
      goto LABEL_26;
    }
LABEL_24:
    v33 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v33 == *((_DWORD *)v15 - 2) )
    {
      v44 = (unsigned int)(3 * v33 + 1) >> 1;
      v45 = 4 * v44 + 8;
      if ( 4 * (int)v33 + 8 >= (unsigned int)v45 || (unsigned int)v33 >= v44 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v110, "Overflow encountered when expanding vector", v5);
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v110);
        sub_233E40((__int64)v110);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v103 = v12;
      v96 = v18;
      v80 = v23;
      v46 = (unsigned int *)sub_186B300(v15 - 1, v45);
      v15 = v46 + 2;
      v23 = v80;
      v18 = v96;
      *v46 = v44;
      v12 = v103;
      v34 = &v46[v46[1] + 2];
    }
    else
    {
      v34 = (unsigned int *)v15 + v33;
    }
LABEL_26:
    *v34 = v88;
    v35 = v12[11];
    ++*((_DWORD *)v15 - 1);
    v17 = *(_DWORD *)(v35 + 4 * v23);
  }
  while ( v94 != v17 );
  if ( !v14 )
    goto LABEL_75;
  v36 = *((_DWORD *)v14 - 1);
  if ( !v36 )
    goto LABEL_75;
  v37 = v36;
  v38 = v12[5];
  v39 = 0;
  v40 = 0;
  v41 = v36 - 1;
  do
  {
    v42 = (unsigned int)(v39 - 1);
    v43 = v38 + 32LL * *((unsigned int *)v14 + v39);
    if ( !v39 )
      v42 = v41;
    if ( *(_DWORD *)(v43 + 4) != *(_DWORD *)(v38 + 32LL * *((unsigned int *)v14 + v42)) )
      goto LABEL_75;
    ++v39;
    v40 += *(_DWORD *)(v43 + 8);
  }
  while ( v39 != v37 );
  if ( v40 >= 0 )
  {
LABEL_75:
    v10 = (char **)__cxa_allocate_exception(0x28u);
    sub_140FB4(v110, "edges are not inconsistent", v11);
    *v10 = (char *)off_1C63128;
    sub_2333C0(v10 + 1, v110);
    sub_233E40((__int64)v110);
    __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v58 = v12[23];
  v59 = 0;
  do
  {
    v60 = *((unsigned int *)v14 + v59++);
    ++*(_DWORD *)(v58 + 4 * v60);
    v61 = *((_DWORD *)v14 - 1);
  }
  while ( (unsigned int)v59 < v61 );
  if ( v61 )
  {
    v62 = 0;
    while ( 1 )
    {
      v63 = 32LL * *((unsigned int *)v14 + v62) + v38;
      v64 = *(_QWORD *)(v63 + 16);
      if ( v64 )
      {
        v65 = 0;
        do
        {
          if ( v65 >= *(_DWORD *)(v64 - 4) )
            break;
          v66 = (_DWORD *)(v64 + 4LL * v65);
          v67 = *(_QWORD **)(a2 + 544);
          if ( v67 )
          {
            v68 = *((unsigned int *)v67 - 1);
            v69 = (_DWORD *)v67 + v68;
            if ( (_DWORD)v68 == *((_DWORD *)v67 - 2) )
            {
              v70 = (unsigned int)(3 * v68 + 1) >> 1;
              v71 = 4 * v70 + 8;
              if ( 4 * (int)v68 + 8 >= (unsigned int)v71 || (unsigned int)v68 >= v70 )
              {
                v2 = (char **)__cxa_allocate_exception(0x28u);
                sub_140FB4(v110, "Overflow encountered when expanding vector", v3);
                *v2 = (char *)off_1C63128;
                sub_2333C0(v2 + 1, v110);
                sub_233E40((__int64)v110);
                __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v95 = v12;
              v91 = (unsigned int)(3 * v68 + 1) >> 1;
              v87 = v66;
              v78 = v63;
              v72 = (unsigned int *)sub_186B300(v67 - 1, v71);
              v67 = v72 + 2;
              v63 = v78;
              v66 = v87;
              *v72 = v91;
              v73 = v72[1];
              *(_QWORD *)(a2 + 544) = v67;
              v12 = v95;
              v64 = *(_QWORD *)(v78 + 16);
              v69 = (_DWORD *)v67 + v73;
            }
          }
          else
          {
            v92 = v12;
            v79 = v63;
            v74 = (_QWORD *)sub_186B270(0x10u);
            v67 = v74 + 1;
            v63 = v79;
            v66 = (_DWORD *)(v64 + 4LL * v65);
            v12 = v92;
            v69 = v74 + 1;
            *v74 = 2;
            *(_QWORD *)(a2 + 544) = v74 + 1;
            v64 = *(_QWORD *)(v79 + 16);
          }
          ++v65;
          *v69 = *v66;
          ++*((_DWORD *)v67 - 1);
        }
        while ( v64 );
        v61 = *((_DWORD *)v14 - 1);
      }
      if ( (unsigned int)++v62 >= v61 )
        break;
      v38 = v12[5];
    }
  }
  sub_186B220(v15 - 1);
  sub_186B220(v14 - 1);
  return sub_186B220(v13 - 2);
}

