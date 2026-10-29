__int64 __fastcall sub_85BD50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v4; // rbp
  char **exception; // rbp
  char **v6; // rbp
  char **v7; // rbp
  void *v11; // rdi
  __int64 v12; // r13
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // rsi
  void *v21; // r14
  int v22; // eax
  __int64 v23; // rax
  void *v24; // r13
  void *v25; // r14
  __int64 v26; // r13
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  _QWORD *v31; // rcx
  __int64 v32; // r12
  __int64 v33; // rax
  _QWORD *v34; // r12
  void *v35; // rdi
  int v36; // eax
  void *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r8d
  unsigned int v42; // r15d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  size_t v47; // rdi
  __int64 v48; // rax
  int *v49; // r14
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  int *v53; // rax
  int *v54; // rdi
  int v55; // ecx
  char v56; // si
  __int64 v57; // rcx
  char v58; // si
  __int64 v59; // rcx
  __int64 v60; // rax
  void *v61; // r12
  int *v62; // rsi
  unsigned int v63; // ecx
  size_t v64; // rsi
  unsigned int v65; // r14d
  unsigned int *v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rax
  size_t v69; // rdi
  __int64 v70; // rax
  int *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rdx
  int *v75; // rax
  int *v76; // rdi
  int v77; // ecx
  char v78; // si
  __int64 v79; // rcx
  char v80; // si
  __int64 v81; // rcx
  __int64 v82; // rax
  void *v83; // r15
  int *v84; // rsi
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  int *v88; // [rsp+10h] [rbp-A8h]
  int *v89; // [rsp+10h] [rbp-A8h]
  void *v90; // [rsp+10h] [rbp-A8h]
  _DWORD *v91; // [rsp+18h] [rbp-A0h]
  _DWORD *v92; // [rsp+18h] [rbp-A0h]
  __int64 v93; // [rsp+20h] [rbp-98h]
  __int64 v94; // [rsp+20h] [rbp-98h]
  unsigned int v95; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v96; // [rsp+2Ch] [rbp-8Ch]
  __int64 v97; // [rsp+40h] [rbp-78h] BYREF
  __int64 v98; // [rsp+48h] [rbp-70h]
  __int64 v99; // [rsp+50h] [rbp-68h] BYREF
  __int64 v100; // [rsp+58h] [rbp-60h]
  __int64 v101[11]; // [rsp+60h] [rbp-58h] BYREF

  v97 = 0;
  v11 = qword_1C7F2C0;
  v98 = 0;
  v99 = 1;
  v100 = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    v90 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v97, &qword_1C7F280);
    v11 = v90;
  }
  else
  {
    LODWORD(v97) = qword_1C7F280;
  }
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    sub_182C690(v11, &v99, &qword_1C7F290);
  }
  else
  {
    BYTE4(v99) &= ~1u;
    LODWORD(v99) = qword_1C7F290;
  }
  v12 = *(_QWORD *)(a4 + 8);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v13 = *(_QWORD **)(v12 + 8);
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 == *((_DWORD *)v13 - 2) )
    {
      v42 = (3 * v14 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v43 || v14 >= v42 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v101, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v101);
        sub_233E40((__int64)v101);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = (unsigned int *)sub_186B300(v13 - 1, v43);
      v45 = v44[1];
      *(_QWORD *)(v12 + 8) = v44 + 2;
      v12 = *(_QWORD *)(a4 + 8);
      *v44 = v42;
      v18 = *(_QWORD *)(v12 + 16);
      *(_QWORD *)&v44[2 * v45 + 2] = a2;
      v44[1] = v45 + 1;
      if ( v18 )
        goto LABEL_11;
LABEL_37:
      v46 = (_QWORD *)sub_186B270(0x48u);
      v20 = v46 + 1;
      *v46 = 2;
      *(_QWORD *)(v12 + 16) = v46 + 1;
      goto LABEL_13;
    }
    v15 = v14;
    v16 = v14 + 1;
    v17 = &v13[v15];
  }
  else
  {
    v85 = (_QWORD *)sub_186B270(0x18u);
    v13 = v85 + 1;
    *v85 = 2;
    v16 = 1;
    *(_QWORD *)(v12 + 8) = v13;
    v17 = v13;
    v12 = *(_QWORD *)(a4 + 8);
  }
  v18 = *(_QWORD *)(v12 + 16);
  *v17 = a2;
  *((_DWORD *)v13 - 1) = v16;
  if ( !v18 )
    goto LABEL_37;
LABEL_11:
  v19 = *(unsigned int *)(v18 - 4);
  if ( (_DWORD)v19 == *(_DWORD *)(v18 - 8) )
  {
    v96 = (unsigned int)(3 * v19 + 1) >> 1;
    v69 = 32 * v96 + 8;
    if ( 32 * (int)v19 + 8 >= (unsigned int)v69 || (unsigned int)v19 >= (unsigned int)(3 * v19 + 1) >> 1 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v101, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v101);
      sub_233E40((__int64)v101);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v70 = sub_186B270(v69);
    v71 = *(int **)(v12 + 16);
    v92 = (_DWORD *)v70;
    v72 = v70 + 8;
    v94 = v72;
    if ( v71 )
    {
      v73 = (unsigned int)*(v71 - 1);
      v74 = v72;
      v92[1] = v73;
      v75 = v71;
      v76 = &v71[8 * v73];
      if ( v71 != v76 )
      {
        do
        {
          v77 = *v75;
          v78 = *((_BYTE *)v75 + 4);
          v75 += 8;
          v74 += 32;
          *(_DWORD *)(v74 - 32) = v77;
          *(_BYTE *)(v74 - 28) = v78 & 3 | *(_BYTE *)(v74 - 28) & 0xFC;
          v79 = *((_QWORD *)v75 - 3);
          *((_QWORD *)v75 - 3) = 0;
          *(_QWORD *)(v74 - 24) = v79;
          v80 = *((_BYTE *)v75 - 12);
          *(_DWORD *)(v74 - 16) = *(v75 - 4);
          *(_BYTE *)(v74 - 12) = v80 & 3 | *(_BYTE *)(v74 - 12) & 0xFC;
          v81 = *((_QWORD *)v75 - 1);
          *((_QWORD *)v75 - 1) = 0;
          *(_QWORD *)(v74 - 8) = v81;
        }
        while ( v76 != v75 );
      }
      v82 = (unsigned int)*(v71 - 1);
      v89 = &v71[8 * v82];
      if ( (_DWORD)v82 )
      {
        do
        {
          v83 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v71);
          v84 = v71 + 4;
          v71 += 8;
          sub_182CBA0(v83, v84);
        }
        while ( v71 != v89 );
        v71 = *(int **)(v12 + 16);
      }
      sub_186B220(v71 - 2);
      v72 = v94;
      v20 = (_QWORD *)(v94 + 32LL * (unsigned int)v92[1]);
    }
    else
    {
      v20 = (_QWORD *)v72;
      v92[1] = 0;
    }
    *(_QWORD *)(v12 + 16) = v72;
    *v92 = v96;
  }
  else
  {
    v20 = (_QWORD *)(32 * v19 + v18);
  }
LABEL_13:
  *v20 = 0;
  v21 = qword_1C7F2C0;
  v20[1] = 0;
  v20[2] = 1;
  v20[3] = 0;
  if ( (v97 & 0x100000000LL) != 0 )
    sub_182C690(v21, v20, &v97);
  else
    *(_DWORD *)v20 = v97;
  if ( (v99 & 0x100000000LL) != 0 )
  {
    sub_182C690(v21, v20 + 2, &v99);
  }
  else
  {
    v22 = v99;
    *((_BYTE *)v20 + 20) &= ~1u;
    *((_DWORD *)v20 + 4) = v22;
  }
  v23 = *(_QWORD *)(v12 + 16);
  v24 = qword_1C7F2C0;
  ++*(_DWORD *)(v23 - 4);
  sub_182CBA0(v24, &v97);
  sub_182CBA0(v24, &v99);
  v25 = qword_1C7F2C0;
  v97 = 0;
  v98 = 0;
  v99 = 1;
  v100 = 0;
  if ( (qword_1C7F260 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v97, &qword_1C7F260);
  else
    LODWORD(v97) = qword_1C7F260;
  if ( (qword_1C7F270 & 0x100000000LL) != 0 )
  {
    sub_182C690(v25, &v99, &qword_1C7F270);
  }
  else
  {
    BYTE4(v99) &= ~1u;
    LODWORD(v99) = qword_1C7F270;
  }
  v26 = *(_QWORD *)(a4 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v27 = *(_QWORD **)(v26 + 8);
  if ( v27 )
  {
    v28 = *((_DWORD *)v27 - 1);
    if ( v28 == *((_DWORD *)v27 - 2) )
    {
      v63 = (3 * v28 + 1) >> 1;
      v64 = 8 * v63 + 8;
      v65 = v63;
      if ( 8 * v28 + 8 >= (unsigned int)v64 || v28 >= v63 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v101, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v101);
        sub_233E40((__int64)v101);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v66 = (unsigned int *)sub_186B300(v27 - 1, v64);
      v67 = v66[1];
      *(_QWORD *)(v26 + 8) = v66 + 2;
      v26 = *(_QWORD *)(a4 + 8);
      *v66 = v65;
      *(_QWORD *)&v66[2 * v67 + 2] = a3;
      v32 = *(_QWORD *)(v26 + 16);
      v66[1] = v67 + 1;
      if ( v32 )
        goto LABEL_27;
LABEL_51:
      v68 = (_QWORD *)sub_186B270(0x48u);
      v34 = v68 + 1;
      *v68 = 2;
      *(_QWORD *)(v26 + 16) = v68 + 1;
      goto LABEL_29;
    }
    v29 = v28;
    v30 = v28 + 1;
    v31 = &v27[v29];
  }
  else
  {
    v86 = (_QWORD *)sub_186B270(0x18u);
    v27 = v86 + 1;
    *v86 = 2;
    v30 = 1;
    *(_QWORD *)(v26 + 8) = v27;
    v31 = v27;
    v26 = *(_QWORD *)(a4 + 8);
  }
  *v31 = a3;
  v32 = *(_QWORD *)(v26 + 16);
  *((_DWORD *)v27 - 1) = v30;
  if ( !v32 )
    goto LABEL_51;
LABEL_27:
  v33 = *(unsigned int *)(v32 - 4);
  if ( (_DWORD)v33 == *(_DWORD *)(v32 - 8) )
  {
    v95 = (unsigned int)(3 * v33 + 1) >> 1;
    v47 = 32 * v95 + 8;
    if ( 32 * (int)v33 + 8 >= (unsigned int)v47 || (unsigned int)v33 >= (unsigned int)(3 * v33 + 1) >> 1 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v101, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, v101);
      sub_233E40((__int64)v101);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v48 = sub_186B270(v47);
    v49 = *(int **)(v26 + 16);
    v91 = (_DWORD *)v48;
    v50 = v48 + 8;
    v93 = v50;
    if ( v49 )
    {
      v51 = (unsigned int)*(v49 - 1);
      v52 = v50;
      v91[1] = v51;
      v53 = v49;
      v54 = &v49[8 * v51];
      if ( v49 != v54 )
      {
        do
        {
          v55 = *v53;
          v56 = *((_BYTE *)v53 + 4);
          v53 += 8;
          v52 += 32;
          *(_DWORD *)(v52 - 32) = v55;
          *(_BYTE *)(v52 - 28) = v56 & 3 | *(_BYTE *)(v52 - 28) & 0xFC;
          v57 = *((_QWORD *)v53 - 3);
          *((_QWORD *)v53 - 3) = 0;
          *(_QWORD *)(v52 - 24) = v57;
          v58 = *((_BYTE *)v53 - 12);
          *(_DWORD *)(v52 - 16) = *(v53 - 4);
          *(_BYTE *)(v52 - 12) = v58 & 3 | *(_BYTE *)(v52 - 12) & 0xFC;
          v59 = *((_QWORD *)v53 - 1);
          *((_QWORD *)v53 - 1) = 0;
          *(_QWORD *)(v52 - 8) = v59;
        }
        while ( v54 != v53 );
      }
      v60 = (unsigned int)*(v49 - 1);
      v88 = &v49[8 * v60];
      if ( (_DWORD)v60 )
      {
        do
        {
          v61 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v49);
          v62 = v49 + 4;
          v49 += 8;
          sub_182CBA0(v61, v62);
        }
        while ( v49 != v88 );
        v49 = *(int **)(v26 + 16);
      }
      sub_186B220(v49 - 2);
      v50 = v93;
      v34 = (_QWORD *)(v93 + 32LL * (unsigned int)v91[1]);
    }
    else
    {
      v34 = (_QWORD *)v50;
      v91[1] = 0;
    }
    *(_QWORD *)(v26 + 16) = v50;
    *v91 = v95;
  }
  else
  {
    v34 = (_QWORD *)(32 * v33 + v32);
  }
LABEL_29:
  *v34 = 0;
  v35 = qword_1C7F2C0;
  v34[1] = 0;
  v34[2] = 1;
  v34[3] = 0;
  if ( (v97 & 0x100000000LL) != 0 )
    sub_182C690(v35, v34, &v97);
  else
    *(_DWORD *)v34 = v97;
  if ( (v99 & 0x100000000LL) != 0 )
  {
    sub_182C690(v35, v34 + 2, &v99);
  }
  else
  {
    v36 = v99;
    *((_BYTE *)v34 + 20) &= ~1u;
    *((_DWORD *)v34 + 4) = v36;
  }
  v37 = qword_1C7F2C0;
  ++*(_DWORD *)(*(_QWORD *)(v26 + 16) - 4LL);
  sub_182CBA0(v37, &v97);
  sub_182CBA0(v37, &v99);
  return sub_856C90(a1, a4, v38, v39, v40);
}

