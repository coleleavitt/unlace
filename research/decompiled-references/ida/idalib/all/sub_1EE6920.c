__int64 __fastcall sub_1EE6920(__int64 a1, __int64 a2, unsigned int *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  char v9; // r12
  size_t v10; // rax
  void **v11; // rbp
  void **v12; // rbx
  void **v13; // rdi
  void **v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  void *v18; // rdx
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rbp
  int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // esi
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v27; // r14
  __int64 v28; // rdx
  int v29; // eax
  void **v30; // rbx
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rbp
  char ***v33; // rcx
  unsigned __int64 v34; // r14
  __int64 v35; // r14
  unsigned int *v36; // r15
  unsigned int *i; // rbp
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // esi
  __int64 v44; // rax
  unsigned int v45; // eax
  _QWORD *v46; // r14
  __int64 v47; // rbp
  unsigned int v48; // r12d
  unsigned __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  int v55; // ebx
  __int64 v56; // rsi
  void **v57; // rbp
  void **v58; // rdi
  size_t v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // r12d
  unsigned int v62; // esi
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  void **v69; // r14
  __int64 v70; // rbp
  char v71; // r14
  void **v72; // rbx
  void **v73; // r12
  void *v74; // rax
  int v75; // r8d
  void **v76; // rbp
  unsigned __int64 v77; // rcx
  void **v78; // rdi
  int v79; // eax
  void *v80; // rax
  void *v81; // rax
  size_t v82; // rax
  unsigned int v83; // [rsp+8h] [rbp-540h]
  __int64 v84; // [rsp+10h] [rbp-538h]
  void **v85; // [rsp+20h] [rbp-528h]
  __int64 v87; // [rsp+48h] [rbp-500h]
  void **v88; // [rsp+50h] [rbp-4F8h]
  __int64 v89; // [rsp+58h] [rbp-4F0h]
  int v90; // [rsp+58h] [rbp-4F0h]
  __int64 v91; // [rsp+68h] [rbp-4E0h] BYREF
  _QWORD v92[2]; // [rsp+70h] [rbp-4D8h] BYREF
  void *v93; // [rsp+80h] [rbp-4C8h] BYREF
  char v94; // [rsp+88h] [rbp-4C0h]
  void *v95; // [rsp+90h] [rbp-4B8h] BYREF
  char v96; // [rsp+98h] [rbp-4B0h]
  void *v97[2]; // [rsp+A0h] [rbp-4A8h] BYREF
  void *v98; // [rsp+B0h] [rbp-498h] BYREF
  __int64 v99; // [rsp+B8h] [rbp-490h]
  _BYTE v100[48]; // [rsp+C0h] [rbp-488h] BYREF
  void **v101; // [rsp+F0h] [rbp-458h] BYREF
  __int64 v102; // [rsp+F8h] [rbp-450h]
  _BYTE v103[512]; // [rsp+100h] [rbp-448h] BYREF
  void *ptr; // [rsp+300h] [rbp-248h] BYREF
  __int64 v105; // [rsp+308h] [rbp-240h]
  _BYTE v106[568]; // [rsp+310h] [rbp-238h] BYREF

  v3 = (_QWORD *)a1;
  v4 = *(_QWORD *)a3;
  v5 = *(_QWORD *)(*(_QWORD *)a3 + 1752LL);
  v6 = *(unsigned int *)(*(_QWORD *)a3 + 1768LL);
  v7 = v4 + 1736;
  v8 = *(_QWORD *)(*(_QWORD *)a3 + 2088LL) + a3[2];
  v92[0] = v4 + 1736;
  v92[1] = 8 * v5 - v6;
  sub_1EAF7C0((__int64 *)&ptr, v4 + 1736, v8);
  if ( ptr )
  {
    sub_1EBF0A0(a1, (_QWORD **)&ptr);
    if ( ptr )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
    return sub_1EAF840((__int64)v92);
  }
  v101 = (void **)v103;
  v105 = 0x4000000000LL;
  v102 = 0x800000000LL;
  ptr = v106;
  while ( 1 )
  {
    sub_1EAFB80((__int64)&v93, v7, 1);
    if ( (v94 & 1) != 0 )
    {
      v80 = v93;
      v93 = nullptr;
      v97[0] = v80;
      sub_1EBF0A0((__int64)v3, (_QWORD **)v97);
      if ( v97[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v97[0] + 8LL))(v97[0]);
      goto LABEL_10;
    }
    if ( (_DWORD)v93 != 3 )
    {
      v82 = j__strlen("malformed block record in AST file");
      sub_1EAD680((__int64)v3, "malformed block record in AST file", v82);
LABEL_10:
      sub_A0B030((__int64 *)&v93);
      goto LABEL_11;
    }
    LODWORD(v105) = 0;
    sub_2027F10(&v95, v7, HIDWORD(v93), &ptr, 0);
    v9 = v96 & 1;
    if ( (v96 & 1) != 0 )
    {
      v81 = v95;
      v95 = nullptr;
      v97[0] = v81;
      sub_1EBF0A0((__int64)v3, (_QWORD **)v97);
      if ( v97[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v97[0] + 8LL))(v97[0]);
LABEL_9:
      sub_A0AE90((__int64 *)&v95);
      goto LABEL_10;
    }
    if ( (_DWORD)v95 == 4 )
      break;
    if ( (_DWORD)v95 != 5 )
    {
      v10 = j__strlen("malformed block record in AST file");
      sub_1EAD680((__int64)v3, "malformed block record in AST file", v10);
      goto LABEL_9;
    }
    *(_OWORD *)v97 = 0;
    v15 = v97;
    v98 = v100;
    v99 = 0x800000000LL;
    v16 = (unsigned int)v102 + 1LL;
    v17 = (unsigned __int64)&v101[8 * (unsigned __int64)(unsigned int)v102];
    if ( v16 > HIDWORD(v102) )
    {
      v87 = -1;
      if ( v101 <= v97 && v17 > (unsigned __int64)v97 )
      {
        v9 = 1;
        v87 = ((char *)v97 - (char *)v101) >> 6;
      }
      v67 = sub_2237400(&v101, v103, v16, 64, &v91);
      v88 = (void **)v67;
      v68 = (unsigned __int64)(unsigned int)v102 << 6;
      v69 = (void **)((char *)v101 + v68);
      if ( v101 != (void **)((char *)v101 + v68) )
      {
        v70 = v67;
        v89 = v7;
        v71 = v9;
        v72 = v101;
        v73 = (void **)((char *)v101 + v68);
        do
        {
          *(_DWORD *)v70 = *(_DWORD *)v72;
          v74 = v72[1];
          *(_DWORD *)(v70 + 24) = 0;
          *(_QWORD *)(v70 + 8) = v74;
          *(_DWORD *)(v70 + 28) = 8;
          v75 = *((_DWORD *)v72 + 6);
          *(_QWORD *)(v70 + 16) = v70 + 32;
          if ( v75 )
            sub_1744C20((char ***)(v70 + 16), (char ***)v72 + 2);
          v72 += 8;
          v70 += 64;
        }
        while ( v73 != v72 );
        v76 = v101;
        v9 = v71;
        v7 = v89;
        v77 = (unsigned __int64)(unsigned int)v102 << 6;
        v69 = (void **)((char *)v101 + v77);
        if ( v101 != (void **)((char *)v101 + v77) )
        {
          do
          {
            while ( 1 )
            {
              v69 -= 8;
              v78 = (void **)v69[2];
              if ( v78 == v69 + 4 )
                break;
              free(v78);
              if ( v69 == v76 )
                goto LABEL_104;
            }
          }
          while ( v69 != v76 );
LABEL_104:
          v69 = v101;
        }
      }
      v79 = v91;
      if ( v69 != (void **)v103 )
      {
        v90 = v91;
        free(v69);
        v79 = v90;
      }
      HIDWORD(v102) = v79;
      v15 = &v88[8 * v87];
      v101 = v88;
      v17 = (unsigned __int64)&v88[8 * (unsigned __int64)(unsigned int)v102];
      if ( !v9 )
        v15 = v97;
    }
    *(_DWORD *)v17 = *(_DWORD *)v15;
    v18 = v15[1];
    *(_QWORD *)(v17 + 24) = 0x800000000LL;
    *(_QWORD *)(v17 + 8) = v18;
    v19 = *((_DWORD *)v15 + 6);
    *(_QWORD *)(v17 + 16) = v17 + 32;
    if ( v19 )
      sub_1744C20((char ***)(v17 + 16), (char ***)v15 + 2);
    v20 = (unsigned int)(v102 + 1);
    LODWORD(v102) = v102 + 1;
    if ( v98 != v100 )
    {
      free(v98);
      v20 = (unsigned int)v102;
    }
    v21 = (__int64)&v101[8 * v20 - 8];
    v22 = *(_QWORD *)ptr;
    if ( v22 )
      v22 = sub_1EDFD20((__int64)v3, v4, *(_QWORD *)ptr);
    *(_DWORD *)v21 = v22;
    v23 = *((_QWORD *)ptr + 1);
    v24 = v23;
    if ( (_DWORD)v23 )
      v24 = sub_1EE09C0((__int64)v3, v4, v23);
    *(_QWORD *)(v21 + 8) = sub_1EE6840(v3, v24);
    if ( (_DWORD)v105 != 2 )
    {
      v25 = v21 + 16;
      v26 = 16;
      v27 = 8LL * (unsigned int)(v105 - 3) + 24;
      do
      {
        while ( 1 )
        {
          v28 = *(_QWORD *)((char *)ptr + v26);
          if ( !(_DWORD)v28 )
            break;
          v26 += 8;
          v29 = sub_1EDFD20((__int64)v3, v4, v28);
          sub_9B7040(v25, v29);
          if ( v26 == v27 )
            goto LABEL_33;
        }
        v26 += 8;
        sub_9B7040(v25, 0);
      }
      while ( v27 != v26 );
    }
LABEL_33:
    sub_A0AE90((__int64 *)&v95);
    sub_A0B030((__int64 *)&v93);
  }
  sub_A0AE90((__int64 *)&v95);
  sub_A0B030((__int64 *)&v93);
  v30 = v101;
  v31 = (unsigned __int64)(unsigned int)v102 << 6;
  v85 = (void **)((char *)v101 + v31);
  if ( v101 != (void **)((char *)v101 + v31) )
  {
    v32 = (unsigned __int64)v101 + v31 - 64;
    if ( v32 <= (unsigned __int64)v101 )
    {
      HIDWORD(v97[1]) = 8;
      v97[0] = &v98;
      goto LABEL_47;
    }
    do
    {
      while ( 1 )
      {
        v33 = (char ***)(v30 + 2);
        LODWORD(v97[0]) = *(_DWORD *)v30;
        v97[1] = v30[1];
        v98 = v100;
        v99 = 0x800000000LL;
        if ( *((_DWORD *)v30 + 6) )
        {
          sub_1744C20((char ***)&v98, (char ***)v30 + 2);
          v33 = (char ***)(v30 + 2);
        }
        *(_DWORD *)v30 = *(_DWORD *)v32;
        v30[1] = *(void **)(v32 + 8);
        sub_1744C20(v33, (char ***)(v32 + 16));
        *(_DWORD *)v32 = v97[0];
        *(void **)(v32 + 8) = v97[1];
        sub_1744C20((char ***)(v32 + 16), (char ***)&v98);
        if ( v98 == v100 )
          break;
        free(v98);
        v30 += 8;
        v32 -= 64LL;
        if ( v32 <= (unsigned __int64)v30 )
          goto LABEL_46;
      }
      v30 += 8;
      v32 -= 64LL;
    }
    while ( (unsigned __int64)v30 < v32 );
LABEL_46:
    v30 = v101;
    v34 = (unsigned __int64)(unsigned int)v102 << 6;
    v97[0] = &v98;
    v85 = (void **)((char *)v101 + v34);
    v97[1] = (void *)0x800000000LL;
    if ( v101 != (void **)((char *)v101 + v34) )
    {
LABEL_47:
      v35 = (__int64)v3;
      do
      {
        LODWORD(v97[1]) = 0;
        v36 = (unsigned int *)v30[2];
        for ( i = &v36[*((unsigned int *)v30 + 6)]; i != v36; ++LODWORD(v97[1]) )
        {
          v42 = *v36;
          if ( *v36 )
          {
            if ( v42 > *(_DWORD *)(v35 + 4480) )
            {
              v59 = j__strlen("submodule ID out of range in AST file");
              sub_1EAD680(v35, "submodule ID out of range in AST file", v59);
              v38 = 0;
            }
            else
            {
              v38 = *(_QWORD *)(*(_QWORD *)(v35 + 4472) + 8LL * (v42 - 1));
            }
          }
          else
          {
            v38 = 0;
          }
          v39 = sub_1441A70(*(_QWORD *)(v35 + 136), v38, a2);
          v40 = LODWORD(v97[1]);
          v41 = LODWORD(v97[1]) + 1LL;
          if ( v41 > HIDWORD(v97[1]) )
          {
            v84 = v39;
            sub_2237220(v97, &v98, v41, 8);
            v40 = LODWORD(v97[1]);
            v39 = v84;
          }
          ++v36;
          *((_QWORD *)v97[0] + v40) = v39;
        }
        LOBYTE(v95) = 0;
        v43 = *(_DWORD *)v30;
        v30 += 8;
        v44 = sub_1EAD760(v35, v43);
        sub_1446F00(*(_QWORD *)(v35 + 136), v44, a2, (__int64)*(v30 - 7), (char *)v97[0], LODWORD(v97[1]), &v95);
      }
      while ( v85 != v30 );
      v3 = (_QWORD *)v35;
      if ( v97[0] != &v98 )
        free(v97[0]);
    }
  }
  v45 = *(_DWORD *)(v4 + 4);
  if ( v45 <= 1 || v45 == 5 )
  {
LABEL_11:
    if ( ptr != v106 )
      free(ptr);
    v11 = v101;
    v12 = &v101[8 * (unsigned __int64)(unsigned int)v102];
    if ( v101 != v12 )
    {
      do
      {
        while ( 1 )
        {
          v12 -= 8;
          v13 = (void **)v12[2];
          if ( v13 == v12 + 4 )
            break;
          free(v13);
          if ( v11 == v12 )
            goto LABEL_16;
        }
      }
      while ( v11 != v12 );
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  v46 = nullptr;
  v47 = 0;
  v83 = v105;
  if ( !(_DWORD)v105 )
    goto LABEL_78;
  v48 = 0;
  while ( 2 )
  {
    v50 = sub_1EE4770((__int64)v3, v4, *((_QWORD *)ptr + v48));
    v54 = v48 + 2;
    v55 = v50;
    v56 = *((_QWORD *)ptr + v48 + 1);
    if ( (_DWORD)v56 == 1 )
    {
      v49 = sub_141F580((_QWORD *)v3[17], v50, v54, v51, v52, v53);
      LODWORD(v54) = v48 + 2;
    }
    else
    {
      if ( (_DWORD)v56 == 2 )
      {
        v49 = sub_141F500((_QWORD *)v3[17], v50, *((_QWORD *)ptr + v54) != 0, v51, v52, v53);
        LODWORD(v54) = v48 + 3;
        if ( !v47 )
          v47 = v49;
        if ( !v46 )
          goto LABEL_75;
LABEL_68:
        *v46 = v49;
        if ( v83 <= (unsigned int)v54 )
          break;
        goto LABEL_69;
      }
      v49 = 0;
      if ( !(_DWORD)v56 )
      {
        v60 = *((_QWORD *)ptr + v54);
        v61 = v48 + 3;
        v62 = v60;
        if ( (_DWORD)v60 )
          v62 = sub_1EE09C0((__int64)v3, v4, v60);
        v63 = sub_1EE6840(v3, v62);
        v49 = sub_141F5F0((_QWORD *)v3[17], v63, v55, v64, v65, v66);
        LODWORD(v54) = v61;
      }
    }
    if ( !v47 )
      v47 = v49;
    if ( v46 )
      goto LABEL_68;
LABEL_75:
    if ( v83 > (unsigned int)v54 )
    {
LABEL_69:
      v48 = v54;
      v46 = (_QWORD *)v49;
      continue;
    }
    break;
  }
  if ( v47 )
    sub_14469E0(v3[17], a2, v49, v47, v52, v53);
LABEL_78:
  if ( ptr != v106 )
    free(ptr);
  v57 = v101;
  v12 = &v101[8 * (unsigned __int64)(unsigned int)v102];
  if ( v101 != v12 )
  {
    do
    {
      while ( 1 )
      {
        v12 -= 8;
        v58 = (void **)v12[2];
        if ( v58 == v12 + 4 )
          break;
        free(v58);
        if ( v57 == v12 )
          goto LABEL_16;
      }
    }
    while ( v57 != v12 );
LABEL_16:
    v12 = v101;
  }
LABEL_17:
  if ( v12 != (void **)v103 )
    free(v12);
  return sub_1EAF840((__int64)v92);
}
