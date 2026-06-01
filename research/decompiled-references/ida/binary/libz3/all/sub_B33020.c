__int64 __fastcall sub_B33020(__int64 a1, __int64 *a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  char **v9; // rbp
  _QWORD *v12; // rdx
  __int64 v13; // rbp
  unsigned int v14; // r13d
  _QWORD *v15; // rcx
  int v16; // eax
  _QWORD *v17; // rdi
  unsigned int v18; // r14d
  unsigned int *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rax
  _DWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rax
  unsigned int *v25; // rax
  _QWORD *v26; // r15
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rsi
  int v31; // eax
  _QWORD *v32; // rsi
  __int64 v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // r14
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 *v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rbp
  __int64 v42; // rax
  int v43; // edx
  _DWORD *v44; // rax
  _DWORD *v45; // rax
  _DWORD *v47; // rax
  _QWORD *v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  _QWORD *v52; // rcx
  int v53; // eax
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  _QWORD *v58; // rcx
  unsigned int v59; // r15d
  size_t v60; // rsi
  unsigned int *v61; // rax
  __int64 v62; // rcx
  unsigned int v63; // r8d
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rsi
  unsigned int v67; // r15d
  size_t v68; // rsi
  unsigned int *v69; // rax
  __int64 v70; // rax
  unsigned int v71; // r15d
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rax
  unsigned int v75; // r15d
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rax
  unsigned int v79; // r14d
  size_t v80; // rsi
  unsigned int *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdi
  __int64 v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  unsigned int v91; // r14d
  size_t v92; // rsi
  unsigned int *v93; // rax
  __int64 v94; // rcx
  _QWORD *v95; // rax
  unsigned int v96; // ebp
  size_t v97; // rsi
  unsigned int *v98; // rax
  __int64 v99; // rcx
  _QWORD *v100; // rax
  unsigned int v101; // [rsp+Ch] [rbp-6Ch]
  __int64 v102[11]; // [rsp+20h] [rbp-58h] BYREF

  v12 = *(_QWORD **)(a1 + 32);
  if ( v12 )
  {
    v13 = *((unsigned int *)v12 - 1);
    v14 = v13;
    if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
    {
      v79 = (unsigned int)(3 * v13 + 1) >> 1;
      v80 = 8 * v79 + 8;
      if ( 8 * (int)v13 + 8 >= (unsigned int)v80 || (unsigned int)v13 >= v79 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v102, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v102);
        sub_233E40((__int64)v102);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v81 = (unsigned int *)sub_186B300(v12 - 1, v80);
      v82 = v81[1];
      v12 = v81 + 2;
      *v81 = v79;
      *(_QWORD *)(a1 + 32) = v81 + 2;
      LODWORD(v81) = v82;
      v15 = &v12[v82];
      v16 = (_DWORD)v81 + 1;
    }
    else
    {
      v15 = &v12[(unsigned int)v13];
      v16 = v13 + 1;
    }
  }
  else
  {
    v13 = 0;
    v14 = 0;
    v85 = (_QWORD *)sub_186B270(0x18u);
    v12 = v85 + 1;
    *v85 = 2;
    v16 = 1;
    *(_QWORD *)(a1 + 32) = v12;
    v15 = v12;
  }
  v17 = *(_QWORD **)(a1 + 344);
  *v15 = a2;
  *((_DWORD *)v12 - 1) = v16;
  if ( v17 )
  {
    v18 = *((_DWORD *)v17 - 1);
    v19 = (unsigned int *)v17 + v18;
    if ( v18 == *((_DWORD *)v17 - 2) )
    {
      v75 = (3 * v18 + 1) >> 1;
      v76 = 4 * v75 + 8;
      if ( 4 * v18 + 8 >= (unsigned int)v76 || v18 >= v75 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v102, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v102);
        sub_233E40((__int64)v102);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v77 = (unsigned int *)sub_186B300(v17 - 1, v76);
      v17 = v77 + 2;
      *v77 = v75;
      v78 = v77[1];
      *(_QWORD *)(a1 + 344) = v17;
      v19 = (unsigned int *)v17 + v78;
    }
  }
  else
  {
    v18 = 0;
    v86 = (_QWORD *)sub_186B270(0x10u);
    v17 = v86 + 1;
    *v86 = 2;
    *(_QWORD *)(a1 + 344) = v86 + 1;
    v19 = (unsigned int *)(v86 + 1);
  }
  v20 = *(_QWORD **)(a1 + 352);
  *v19 = v18;
  ++*((_DWORD *)v17 - 1);
  if ( v20 )
  {
    v21 = *((unsigned int *)v20 - 1);
    if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
    {
      v71 = (unsigned int)(3 * v21 + 1) >> 1;
      v72 = 4 * v71 + 8;
      if ( 4 * (int)v21 + 8 >= (unsigned int)v72 || (unsigned int)v21 >= v71 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v102, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v102);
        sub_233E40((__int64)v102);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v73 = (unsigned int *)sub_186B300(v20 - 1, v72);
      v20 = v73 + 2;
      *v73 = v71;
      v74 = v73[1];
      *(_QWORD *)(a1 + 352) = v20;
      v22 = (_DWORD *)v20 + v74;
    }
    else
    {
      v22 = (_DWORD *)v20 + v21;
    }
  }
  else
  {
    v88 = (_QWORD *)sub_186B270(0x10u);
    v20 = v88 + 1;
    *v88 = 2;
    *(_QWORD *)(a1 + 352) = v88 + 1;
    v22 = v88 + 1;
  }
  *v22 = 1;
  ++*((_DWORD *)v20 - 1);
  v23 = *(_QWORD **)(a1 + 360);
  if ( v23 )
  {
    v24 = *((unsigned int *)v23 - 1);
    if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) )
    {
      v67 = (unsigned int)(3 * v24 + 1) >> 1;
      v68 = 4 * v67 + 8;
      if ( 4 * (int)v24 + 8 >= (unsigned int)v68 || (unsigned int)v24 >= v67 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v102, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v102);
        sub_233E40((__int64)v102);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v69 = (unsigned int *)sub_186B300(v23 - 1, v68);
      v23 = v69 + 2;
      *v69 = v67;
      v70 = v69[1];
      *(_QWORD *)(a1 + 360) = v23;
      v25 = (unsigned int *)v23 + v70;
    }
    else
    {
      v25 = (unsigned int *)v23 + v24;
    }
  }
  else
  {
    v89 = (_QWORD *)sub_186B270(0x10u);
    v23 = v89 + 1;
    *v89 = 2;
    *(_QWORD *)(a1 + 360) = v89 + 1;
    v25 = (unsigned int *)(v89 + 1);
  }
  v26 = *(_QWORD **)(a1 + 336);
  *v25 = v18;
  v27 = a1 + 368;
  ++*((_DWORD *)v23 - 1);
  v28 = (_QWORD *)*v26;
  if ( *v26 )
  {
    v29 = *((_DWORD *)v28 - 1);
    if ( v29 == *((_DWORD *)v28 - 2) )
    {
      v63 = (3 * v29 + 1) >> 1;
      v64 = 8 * v63 + 8;
      if ( 8 * v29 + 8 >= (unsigned int)v64 || v29 >= v63 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v102, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v102);
        sub_233E40((__int64)v102);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v101 = (3 * v29 + 1) >> 1;
      v65 = (unsigned int *)sub_186B300(v28 - 1, v64);
      v27 = a1 + 368;
      v66 = v65[1];
      v28 = v65 + 2;
      *v26 = v65 + 2;
      *v65 = v101;
      LODWORD(v65) = v66;
      v32 = &v28[v66];
      v31 = (_DWORD)v65 + 1;
    }
    else
    {
      v30 = v29;
      v31 = v29 + 1;
      v32 = &v28[v30];
    }
  }
  else
  {
    v90 = (_QWORD *)sub_186B270(0x18u);
    v27 = a1 + 368;
    v28 = v90 + 1;
    *v90 = 2;
    v31 = 1;
    *v26 = v28;
    v32 = v28;
  }
  *v32 = v27;
  *((_DWORD *)v28 - 1) = v31;
  if ( v18 != (_DWORD)v13 )
  {
    sub_1872CE0("");
    sub_1873130(114, 66);
  }
  v33 = sub_186B270(0x20u);
  v34 = *(_QWORD **)(a1 + 256);
  *(_QWORD *)(v33 + 16) = 0;
  v35 = v33;
  *(_WORD *)(v33 + 24) = 0;
  *(_BYTE *)(v33 + 26) = 0;
  *(_OWORD *)v33 = 0;
  if ( v34 )
  {
    v36 = *((_DWORD *)v34 - 1);
    if ( v36 == *((_DWORD *)v34 - 2) )
    {
      v59 = (3 * v36 + 1) >> 1;
      v60 = 8 * v59 + 8;
      if ( 8 * v36 + 8 >= (unsigned int)v60 || v36 >= v59 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v102, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v102);
        sub_233E40((__int64)v102);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v61 = (unsigned int *)sub_186B300(v34 - 1, v60);
      v62 = v61[1];
      v34 = v61 + 2;
      *v61 = v59;
      *(_QWORD *)(a1 + 256) = v61 + 2;
      LODWORD(v61) = v62;
      v39 = &v34[v62];
      v38 = (_DWORD)v61 + 1;
    }
    else
    {
      v37 = v36;
      v38 = v36 + 1;
      v39 = &v34[v37];
    }
  }
  else
  {
    v87 = (_QWORD *)sub_186B270(0x18u);
    v34 = v87 + 1;
    *v87 = 2;
    v38 = 1;
    *(_QWORD *)(a1 + 256) = v34;
    v39 = v34;
  }
  *v39 = v35;
  v40 = *a2;
  *((_DWORD *)v34 - 1) = v38;
  v41 = v34[v13];
  v42 = sub_15D1F10(v40);
  v43 = *(_DWORD *)(a1 + 8);
  v44 = *(_DWORD **)(v42 + 24);
  if ( v44 && v43 == *v44 && !v44[1] )
  {
    v83 = *a2;
    *(_BYTE *)(v41 + 25) = 1;
    v84 = sub_15D1F10(v83);
    sub_BE0160(a1, v84);
    v43 = *(_DWORD *)(a1 + 8);
  }
  else
  {
    *(_BYTE *)(v41 + 25) = 0;
  }
  v45 = *(_DWORD **)(*(_QWORD *)(*a2 + 16) + 24LL);
  if ( v45 && *v45 == v43 )
  {
    v53 = v45[1];
    if ( v53 == 1 )
    {
      *(_BYTE *)(v41 + 26) = 1;
    }
    else
    {
      *(_BYTE *)(v41 + 26) = 0;
      if ( !v53 )
      {
        v54 = *(_QWORD **)v41;
        if ( *(_QWORD *)v41 )
        {
          v55 = *((_DWORD *)v54 - 1);
          if ( v55 == *((_DWORD *)v54 - 2) )
          {
            v91 = (3 * v55 + 1) >> 1;
            v92 = 8 * v91 + 8;
            if ( 8 * v55 + 8 >= (unsigned int)v92 || v55 >= v91 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v102, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v102);
              sub_233E40((__int64)v102);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v93 = (unsigned int *)sub_186B300(v54 - 1, v92);
            v94 = v93[1];
            v54 = v93 + 2;
            *(_QWORD *)v41 = v93 + 2;
            *v93 = v91;
            LODWORD(v93) = v94;
            v58 = &v54[v94];
            v57 = (_DWORD)v93 + 1;
          }
          else
          {
            v56 = v55;
            v57 = v55 + 1;
            v58 = &v54[v56];
          }
        }
        else
        {
          v100 = (_QWORD *)sub_186B270(0x18u);
          v54 = v100 + 1;
          *v100 = 2;
          v57 = 1;
          *(_QWORD *)v41 = v54;
          v58 = v54;
        }
        *v58 = a2;
        *((_DWORD *)v54 - 1) = v57;
      }
    }
  }
  else
  {
    *(_BYTE *)(v41 + 26) = 0;
  }
  sub_B66EF0(*(_QWORD *)(a1 + 16), a2, a1, v14);
  if ( !(unsigned int)sub_8E7030(*(_QWORD *)(a1 + 16)) || *(_DWORD *)(*(_QWORD *)(a1 + 264) + 12LL) <= 1u )
  {
    v47 = *(_DWORD **)(*(_QWORD *)(*a2 + 16) + 24LL);
    if ( v47 )
    {
      if ( *(_DWORD *)(a1 + 8) == *v47 && !v47[1] )
      {
        v48 = *(_QWORD **)(a1 + 72);
        ++*(_DWORD *)(a1 + 272);
        if ( v48 )
        {
          v49 = *((_DWORD *)v48 - 1);
          if ( v49 == *((_DWORD *)v48 - 2) )
          {
            v96 = (3 * v49 + 1) >> 1;
            v97 = 8 * v96 + 8;
            if ( 8 * v49 + 8 >= (unsigned int)v97 || v49 >= v96 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v102, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v102);
              sub_233E40((__int64)v102);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v98 = (unsigned int *)sub_186B300(v48 - 1, v97);
            v99 = v98[1];
            v48 = v98 + 2;
            *v98 = v96;
            *(_QWORD *)(a1 + 72) = v98 + 2;
            LODWORD(v98) = v99;
            v52 = &v48[v99];
            v51 = (_DWORD)v98 + 1;
          }
          else
          {
            v50 = v49;
            v51 = v49 + 1;
            v52 = &v48[v50];
          }
        }
        else
        {
          v95 = (_QWORD *)sub_186B270(0x18u);
          v48 = v95 + 1;
          *v95 = 2;
          v51 = 1;
          *(_QWORD *)(a1 + 72) = v48;
          v52 = v48;
        }
        *v52 = a2;
        *((_DWORD *)v48 - 1) = v51;
      }
    }
  }
  return v14;
}

