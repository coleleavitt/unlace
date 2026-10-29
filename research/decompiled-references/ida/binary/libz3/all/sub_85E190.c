__int64 __fastcall sub_85E190(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  unsigned int v9; // eax
  _QWORD *v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // r13
  _DWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  _DWORD *v19; // rax
  _QWORD *v20; // r13
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // r12
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 *v32; // rcx
  unsigned int v34; // r14d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rax
  unsigned int v38; // r13d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // r14d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // r14d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rax
  unsigned int v50; // r14d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59[11]; // [rsp+10h] [rbp-58h] BYREF

  v9 = sub_7E69A0(a1, a2);
  v10 = *(_QWORD **)(a1 + 344);
  v11 = v9;
  if ( v10 )
  {
    v12 = *((unsigned int *)v10 - 1);
    v13 = (_DWORD *)v10 + v12;
    if ( (_DWORD)v12 == *((_DWORD *)v10 - 2) )
    {
      v34 = (unsigned int)(3 * v12 + 1) >> 1;
      v35 = 4 * v34 + 8;
      if ( 4 * (int)v12 + 8 >= (unsigned int)v35 || (unsigned int)v12 >= v34 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v59, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v59);
        sub_233E40((__int64)v59);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v36 = (unsigned int *)sub_186B300(v10 - 1, v35);
      v10 = v36 + 2;
      *v36 = v34;
      v37 = v36[1];
      *(_QWORD *)(a1 + 344) = v10;
      v13 = (_DWORD *)v10 + v37;
    }
  }
  else
  {
    LODWORD(v12) = 0;
    v54 = (_QWORD *)sub_186B270(0x10u);
    v10 = v54 + 1;
    *v54 = 2;
    *(_QWORD *)(a1 + 344) = v54 + 1;
    v13 = v54 + 1;
  }
  *v13 = v12;
  ++*((_DWORD *)v10 - 1);
  v14 = *(_QWORD **)(a1 + 352);
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
    {
      v50 = (unsigned int)(3 * v15 + 1) >> 1;
      v51 = 4 * v50 + 8;
      if ( 4 * (int)v15 + 8 >= (unsigned int)v51 || (unsigned int)v15 >= v50 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v59, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v59);
        sub_233E40((__int64)v59);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v52 = (unsigned int *)sub_186B300(v14 - 1, v51);
      v14 = v52 + 2;
      *v52 = v50;
      v53 = v52[1];
      *(_QWORD *)(a1 + 352) = v14;
      v16 = (_DWORD *)v14 + v53;
    }
    else
    {
      v16 = (_DWORD *)v14 + v15;
    }
  }
  else
  {
    v58 = (_QWORD *)sub_186B270(0x10u);
    v14 = v58 + 1;
    *v58 = 2;
    *(_QWORD *)(a1 + 352) = v58 + 1;
    v16 = v58 + 1;
  }
  *v16 = 1;
  ++*((_DWORD *)v14 - 1);
  v17 = *(_QWORD **)(a1 + 360);
  if ( v17 )
  {
    v18 = *((unsigned int *)v17 - 1);
    if ( (_DWORD)v18 == *((_DWORD *)v17 - 2) )
    {
      v46 = (unsigned int)(3 * v18 + 1) >> 1;
      v47 = 4 * v46 + 8;
      if ( 4 * (int)v18 + 8 >= (unsigned int)v47 || (unsigned int)v18 >= v46 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v59, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v59);
        sub_233E40((__int64)v59);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v17 - 1, v47);
      v17 = v48 + 2;
      *v48 = v46;
      v49 = v48[1];
      *(_QWORD *)(a1 + 360) = v17;
      v19 = (_DWORD *)v17 + v49;
    }
    else
    {
      v19 = (_DWORD *)v17 + v18;
    }
  }
  else
  {
    v55 = (_QWORD *)sub_186B270(0x10u);
    v17 = v55 + 1;
    *v55 = 2;
    *(_QWORD *)(a1 + 360) = v55 + 1;
    v19 = v55 + 1;
  }
  *v19 = v12;
  v20 = *(_QWORD **)(a1 + 336);
  ++*((_DWORD *)v17 - 1);
  v21 = (_QWORD *)*v20;
  if ( *v20 )
  {
    v22 = *((_DWORD *)v21 - 1);
    if ( v22 == *((_DWORD *)v21 - 2) )
    {
      v42 = (3 * v22 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v43 || v22 >= v42 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v59, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v59);
        sub_233E40((__int64)v59);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = (unsigned int *)sub_186B300(v21 - 1, v43);
      v45 = v44[1];
      v21 = v44 + 2;
      *v20 = v44 + 2;
      *v44 = v42;
      LODWORD(v44) = v45;
      v25 = &v21[v45];
      v24 = (_DWORD)v44 + 1;
    }
    else
    {
      v23 = v22;
      v24 = v22 + 1;
      v25 = &v21[v23];
    }
  }
  else
  {
    v56 = (_QWORD *)sub_186B270(0x18u);
    v21 = v56 + 1;
    *v56 = 2;
    v24 = 1;
    *v20 = v21;
    v25 = v21;
  }
  *v25 = a1 + 368;
  *((_DWORD *)v21 - 1) = v24;
  sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, a2, v11, *(unsigned int *)(a1 + 12));
  v26 = sub_186B270(0x20u);
  v27 = *(_QWORD **)(a1 + 184);
  v28 = v26;
  *(_WORD *)v26 = 0;
  *(_QWORD *)(v26 + 24) = 0;
  *(_OWORD *)(v26 + 8) = 0;
  if ( v27 )
  {
    v29 = *((_DWORD *)v27 - 1);
    if ( v29 == *((_DWORD *)v27 - 2) )
    {
      v38 = (3 * v29 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v29 + 8 >= (unsigned int)v39 || v29 >= v38 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v59, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v59);
        sub_233E40((__int64)v59);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v27 - 1, v39);
      v41 = v40[1];
      v27 = v40 + 2;
      *v40 = v38;
      *(_QWORD *)(a1 + 184) = v40 + 2;
      LODWORD(v40) = v41;
      v32 = &v27[v41];
      v31 = (_DWORD)v40 + 1;
    }
    else
    {
      v30 = v29;
      v31 = v29 + 1;
      v32 = &v27[v30];
    }
  }
  else
  {
    v57 = (_QWORD *)sub_186B270(0x18u);
    v27 = v57 + 1;
    *v57 = 2;
    v31 = 1;
    *(_QWORD *)(a1 + 184) = v27;
    v32 = v27;
  }
  *v32 = v28;
  *((_DWORD *)v27 - 1) = v31;
  return v11;
}

