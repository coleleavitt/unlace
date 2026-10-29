__int64 __fastcall sub_DB6200(__int64 a1, unsigned int *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char **v5; // rbp
  unsigned int *v7; // r14
  int v8; // eax
  _QWORD *v9; // r15
  unsigned int **v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // edi
  int v13; // ecx
  unsigned int **v14; // rsi
  __int64 v15; // rcx
  unsigned int **v16; // r8
  unsigned int **i; // rax
  unsigned int *v18; // r13
  __int64 v19; // rbp
  unsigned int v20; // eax
  unsigned int v21; // r12d
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbp
  unsigned int *v29; // r14
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int16 v33; // ax
  _QWORD *v35; // rax
  size_t v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  unsigned int **v40; // rdx
  int v41; // r8d
  __int64 *v42; // rsi
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 *v45; // rdi
  __int64 v46; // rdx
  __int64 *v47; // r10
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r15
  _QWORD *v52; // r8
  __int64 v53; // rbp
  unsigned int v54; // eax
  unsigned int v55; // r12d
  unsigned int v56; // edx
  size_t v57; // rsi
  unsigned int v58; // r14d
  unsigned int *v59; // rax
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r14
  __int64 v63; // rbp
  _DWORD *v64; // rsi
  _QWORD *v65; // rax
  unsigned int v66; // r12d
  unsigned int v67; // edx
  unsigned int *v68; // rax
  __int64 v69; // r14
  __int64 v70; // rdx
  _QWORD *v71; // rdx
  unsigned int v72; // eax
  __int64 v73; // rdi
  int v74; // eax
  _QWORD *v75; // rdi
  unsigned int v76; // r12d
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rsi
  unsigned int v82; // r8d
  unsigned int v83; // r10d
  unsigned int v84; // r11d
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned int v87; // eax
  _QWORD *v88; // rax
  _QWORD *v89; // rdx
  _QWORD *v90; // rax
  __int64 v91; // r14
  _QWORD *v92; // r15
  _DWORD *v93; // rdx
  unsigned int v95; // [rsp+8h] [rbp-80h]
  unsigned int v96; // [rsp+8h] [rbp-80h]
  _QWORD *v97; // [rsp+8h] [rbp-80h]
  unsigned int *v98; // [rsp+10h] [rbp-78h]
  __int64 v99; // [rsp+18h] [rbp-70h]
  __int64 v100[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *(unsigned int **)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 8) + 1;
  *(_DWORD *)(a1 + 8) = v8;
  if ( v8 == -1 )
  {
    if ( v7 )
    {
      v36 = 4LL * *(v7 - 1);
      if ( v36 )
        memset(v7, 0, v36);
    }
    *(_DWORD *)(a1 + 8) = 0;
  }
  v9 = *(_QWORD **)(a1 + 24);
  if ( v9 )
    *((_DWORD *)v9 - 1) = 0;
  v10 = *(unsigned int ***)(*(_QWORD *)a1 + 120LL);
  v11 = *(unsigned int *)(*(_QWORD *)a1 + 128LL);
  v12 = a2[3];
  v13 = v11 - 1;
  v11 *= 24;
  v14 = (unsigned int **)((char *)v10 + v11);
  v15 = 24LL * (v12 & v13);
  v16 = &v10[(unsigned __int64)v15 / 8];
  if ( v15 != v11 )
  {
    for ( i = &v10[(unsigned __int64)v15 / 8]; v14 != i; i += 3 )
    {
      v18 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( v18[3] == v12 && a2 == v18 )
        {
          v18 = (unsigned int *)i;
          goto LABEL_11;
        }
      }
      else if ( !v18 )
      {
        goto LABEL_11;
      }
    }
  }
  if ( v10 == v16 )
  {
LABEL_37:
    v18 = nullptr;
    v19 = *a2;
    if ( !v7 )
      goto LABEL_38;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = *v10;
        if ( (unsigned __int64)*v10 > 1 )
          break;
        if ( !v18 )
          goto LABEL_11;
        v10 += 3;
        if ( v16 == v10 )
          goto LABEL_37;
      }
      if ( v18[3] == v12 && a2 == v18 )
        break;
      v10 += 3;
      if ( v16 == v10 )
        goto LABEL_37;
    }
    v18 = (unsigned int *)v10;
LABEL_11:
    v19 = *a2;
    if ( !v7 )
    {
LABEL_38:
      v21 = v19 + 1;
      if ( (_DWORD)v19 != -1 )
      {
        v35 = (_QWORD *)sub_186B270(0x10u);
        v95 = 0;
        v7 = (unsigned int *)(v35 + 1);
        *v35 = 2;
        *(_QWORD *)(a1 + 16) = v35 + 1;
        goto LABEL_18;
      }
      goto LABEL_21;
    }
  }
  v20 = *(v7 - 1);
  v95 = v20;
  if ( (unsigned int)v19 >= v20 )
  {
    v21 = v19 + 1;
    if ( v20 < (int)v19 + 1 )
    {
LABEL_18:
      while ( 1 )
      {
        v25 = *(v7 - 2);
        if ( v25 >= v21 )
          break;
        v22 = (3 * v25 + 1) >> 1;
        v23 = 4 * v22 + 8;
        if ( 4 * v25 + 8 >= (unsigned int)v23 || v25 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v100, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v100);
          sub_233E40((__int64)v100);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = (unsigned int *)sub_186B300(v7 - 2, v23);
        v7 = v24 + 2;
        *v24 = v22;
        *(_QWORD *)(a1 + 16) = v24 + 2;
      }
      v9 = *(_QWORD **)(a1 + 24);
      *(v7 - 1) = v21;
      v26 = 4LL * v21;
      v27 = 4LL * v95;
      if ( v27 != v26 )
        memset(&v7[(unsigned __int64)v27 / 4], 0, v26 - v27);
      goto LABEL_21;
    }
    *(v7 - 1) = v21;
  }
LABEL_21:
  v28 = 4 * v19;
  v29 = &v7[(unsigned __int64)v28 / 4];
  if ( *(_DWORD *)(a1 + 8) >= *v29 )
  {
    if ( v9 )
    {
      v37 = *((_DWORD *)v9 - 1);
      if ( v37 == *((_DWORD *)v9 - 2) )
      {
        v66 = (3 * v37 + 1) >> 1;
        v67 = 8 * v66 + 8;
        if ( 8 * v37 + 8 >= v67 || v37 >= v66 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v100, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v100);
          sub_233E40((__int64)v100);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v68 = (unsigned int *)sub_186B300(v9 - 1, v67);
        v69 = *(_QWORD *)(a1 + 16);
        v70 = v68[1];
        v9 = v68 + 2;
        *v68 = v66;
        *(_QWORD *)(a1 + 24) = v68 + 2;
        v29 = (unsigned int *)(v28 + v69);
        LODWORD(v68) = v70;
        v40 = (unsigned int **)&v9[v70];
        v39 = (_DWORD)v68 + 1;
      }
      else
      {
        v38 = v37;
        v39 = v37 + 1;
        v40 = (unsigned int **)&v9[v38];
      }
    }
    else
    {
      v90 = (_QWORD *)sub_186B270(0x18u);
      v91 = *(_QWORD *)(a1 + 16);
      v92 = v90;
      *v90 = 2;
      v39 = 1;
      v9 = v92 + 1;
      v29 = (unsigned int *)(v28 + v91);
      *(_QWORD *)(a1 + 24) = v9;
      v40 = (unsigned int **)v9;
    }
    *v40 = a2;
    *((_DWORD *)v9 - 1) = v39;
    *v29 = *(_DWORD *)(a1 + 8) + 1;
  }
  if ( !v9 )
    return 0;
  while ( 1 )
  {
LABEL_23:
    v30 = *((_DWORD *)v9 - 1);
    if ( !v30 )
      return 0;
    v31 = (unsigned int)(v30 - 1);
    v32 = v9[v31];
    *((_DWORD *)v9 - 1) = v31;
    v33 = *(_WORD *)(v32 + 4);
    if ( !v33 )
      break;
    if ( v33 != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 367);
    }
  }
  if ( a2 == (unsigned int *)v32 )
  {
    v50 = a2[6];
    if ( !(_DWORD)v50 )
      goto LABEL_23;
    goto LABEL_57;
  }
  v41 = *(_DWORD *)(v32 + 12);
  v42 = *(__int64 **)(*(_QWORD *)a1 + 120LL);
  v43 = *(unsigned int *)(*(_QWORD *)a1 + 128LL);
  v44 = v43 - 1;
  v43 *= 24;
  v45 = (__int64 *)((char *)v42 + v43);
  v46 = 24LL * (v41 & v44);
  v47 = &v42[(unsigned __int64)v46 / 8];
  if ( v46 == v43 )
  {
LABEL_93:
    if ( v42 != v47 )
    {
      while ( 1 )
      {
        v86 = *v42;
        if ( (unsigned __int64)*v42 > 1 )
        {
          if ( *(_DWORD *)(v86 + 12) == v41 && v86 == v32 )
          {
            v48 = v42;
            goto LABEL_83;
          }
        }
        else if ( !v86 )
        {
          goto LABEL_56;
        }
        v42 += 3;
        if ( v47 == v42 )
          goto LABEL_56;
      }
    }
    goto LABEL_56;
  }
  v48 = &v42[(unsigned __int64)v46 / 8];
  while ( 1 )
  {
    v49 = *v48;
    if ( (unsigned __int64)*v48 > 1 )
      break;
    if ( !v49 )
      goto LABEL_56;
LABEL_53:
    v48 += 3;
    if ( v45 == v48 )
      goto LABEL_93;
  }
  if ( *(_DWORD *)(v49 + 12) != v41 || v49 != v32 )
    goto LABEL_53;
LABEL_83:
  v80 = *((_QWORD *)v18 + 1);
  v81 = v48[1];
  if ( !v80 )
  {
    if ( !v81 )
      return 1;
    v83 = *(_DWORD *)(v81 - 4);
    v84 = 0;
    goto LABEL_113;
  }
  v82 = *(_DWORD *)(v80 - 4);
  if ( v81 )
  {
    v83 = *(_DWORD *)(v81 - 4);
    v84 = v83;
    if ( v82 <= v83 )
      v84 = *(_DWORD *)(v80 - 4);
    v85 = 0;
    if ( v84 )
    {
      while ( *(_DWORD *)(v80 + v85) == *(_DWORD *)(v81 + v85) )
      {
        v85 += 4;
        if ( 4LL * v84 == v85 )
          goto LABEL_102;
      }
    }
    else
    {
LABEL_102:
      if ( v83 < v82 )
      {
LABEL_103:
        v87 = v84;
        do
        {
          if ( *(_DWORD *)(v80 + 4LL * v87) )
            goto LABEL_56;
          ++v87;
        }
        while ( v87 < v82 );
        if ( !v81 )
          return 1;
        v83 = *(_DWORD *)(v81 - 4);
      }
LABEL_113:
      if ( v84 >= v83 )
        return 1;
      v93 = (_DWORD *)(v81 + 4LL * v84);
      while ( !*v93 )
      {
        if ( ++v93 == (_DWORD *)(v81 + 4 * (v84 + (unsigned __int64)(v83 - 1 - v84)) + 4) )
          return 1;
      }
    }
LABEL_56:
    v50 = *(unsigned int *)(v32 + 24);
    if ( !(_DWORD)v50 )
      goto LABEL_23;
LABEL_57:
    v51 = v32;
    v52 = *(_QWORD **)(a1 + 16);
    v99 = v32 + 8 * v50;
    v98 = *(unsigned int **)(v32 + 32);
    v53 = *v98;
    if ( v52 )
    {
LABEL_58:
      v54 = *((_DWORD *)v52 - 1);
      v96 = v54;
      if ( (unsigned int)v53 < v54 )
        goto LABEL_67;
      v55 = v53 + 1;
      if ( v54 >= (int)v53 + 1 )
      {
        *((_DWORD *)v52 - 1) = v55;
        goto LABEL_67;
      }
    }
    else
    {
      while ( 1 )
      {
        v55 = v53 + 1;
        if ( (_DWORD)v53 != -1 )
          break;
LABEL_67:
        v63 = 4 * v53;
        v64 = (_DWORD *)((char *)v52 + v63);
        if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)((char *)v52 + v63) )
        {
          v71 = *(_QWORD **)(a1 + 24);
          if ( v71 )
          {
            v72 = *((_DWORD *)v71 - 1);
            if ( v72 == *((_DWORD *)v71 - 2) )
            {
              v76 = (3 * v72 + 1) >> 1;
              v77 = 8 * v76 + 8;
              if ( 8 * v72 + 8 >= (unsigned int)v77 || v72 >= v76 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v100, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v100);
                sub_233E40((__int64)v100);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v78 = (unsigned int *)sub_186B300(v71 - 1, v77);
              v52 = *(_QWORD **)(a1 + 16);
              v79 = v78[1];
              v71 = v78 + 2;
              *v78 = v76;
              *(_QWORD *)(a1 + 24) = v78 + 2;
              v64 = (_DWORD *)((char *)v52 + v63);
              LODWORD(v78) = v79;
              v75 = &v71[v79];
              v74 = (_DWORD)v78 + 1;
            }
            else
            {
              v73 = v72;
              v74 = v72 + 1;
              v75 = &v71[v73];
            }
          }
          else
          {
            v88 = (_QWORD *)sub_186B270(0x18u);
            v52 = *(_QWORD **)(a1 + 16);
            v89 = v88;
            *v88 = 2;
            v74 = 1;
            v71 = v89 + 1;
            v64 = (_DWORD *)((char *)v52 + v63);
            *(_QWORD *)(a1 + 24) = v71;
            v75 = v71;
          }
          *v75 = v98;
          *((_DWORD *)v71 - 1) = v74;
          *v64 = *(_DWORD *)(a1 + 8) + 1;
        }
        v51 += 8;
        if ( v51 == v99 )
        {
          v9 = *(_QWORD **)(a1 + 24);
          if ( !v9 )
            return 0;
          goto LABEL_23;
        }
        v98 = *(unsigned int **)(v51 + 32);
        v53 = *v98;
        if ( v52 )
          goto LABEL_58;
      }
      v65 = (_QWORD *)sub_186B270(0x10u);
      v96 = 0;
      v52 = v65 + 1;
      *v65 = 2;
      *(_QWORD *)(a1 + 16) = v65 + 1;
    }
    while ( 1 )
    {
      v60 = *((_DWORD *)v52 - 2);
      if ( v60 >= v55 )
        break;
      v56 = (3 * v60 + 1) >> 1;
      v57 = 4 * v56 + 8;
      v58 = v56;
      if ( 4 * v60 + 8 >= (unsigned int)v57 || v60 >= v56 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v100, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v100);
        sub_233E40((__int64)v100);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v59 = (unsigned int *)sub_186B300(v52 - 1, v57);
      v52 = v59 + 2;
      *v59 = v58;
      *(_QWORD *)(a1 + 16) = v59 + 2;
    }
    *((_DWORD *)v52 - 1) = v55;
    v61 = 4LL * v55;
    v62 = 4LL * v96;
    if ( v62 != v61 )
    {
      v97 = v52;
      memset((char *)v52 + v62, 0, v61 - v62);
      v52 = v97;
    }
    goto LABEL_67;
  }
  if ( v82 )
  {
    v84 = 0;
    goto LABEL_103;
  }
  return 1;
}

