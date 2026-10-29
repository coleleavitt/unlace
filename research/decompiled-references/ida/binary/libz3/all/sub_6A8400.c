__int64 __fastcall sub_6A8400(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  int v4; // r13d
  __int64 v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rax
  int v8; // r15d
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // r15d
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // r12
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  int v25; // r12d
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rbp
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 result; // rax
  __int64 *v32; // rdx
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r12d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // r13d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // r14d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  char **exception; // rbp
  __int64 v54[11]; // [rsp+10h] [rbp-58h] BYREF

  sub_11CB7C0(a1 + 96);
  sub_786880(a1 + 4544);
  sub_1623DD0(a1 + 4648);
  sub_180C250(a1 + 4384);
  v2 = *(_QWORD *)(a1 + 4368);
  if ( v2 )
  {
    v3 = *(_QWORD **)(a1 + 4376);
    v4 = *(_DWORD *)(v2 - 4);
    if ( v3 )
      goto LABEL_3;
LABEL_33:
    v49 = (_QWORD *)sub_186B270(0x10u);
    v3 = v49 + 1;
    *v49 = 2;
    *(_QWORD *)(a1 + 4376) = v49 + 1;
    v6 = v49 + 1;
    goto LABEL_5;
  }
  v3 = *(_QWORD **)(a1 + 4376);
  v4 = 0;
  if ( !v3 )
    goto LABEL_33;
LABEL_3:
  v5 = *((unsigned int *)v3 - 1);
  if ( (_DWORD)v5 == *((_DWORD *)v3 - 2) )
  {
    v33 = (unsigned int)(3 * v5 + 1) >> 1;
    v34 = 4 * v33 + 8;
    if ( 4 * (int)v5 + 8 >= (unsigned int)v34 || (unsigned int)v5 >= v33 )
      goto LABEL_38;
    v35 = (unsigned int *)sub_186B300(v3 - 1, v34);
    v3 = v35 + 2;
    *v35 = v33;
    v36 = v35[1];
    *(_QWORD *)(a1 + 4376) = v3;
    v6 = (_DWORD *)v3 + v36;
  }
  else
  {
    v6 = (_DWORD *)v3 + v5;
  }
LABEL_5:
  *v6 = v4;
  v7 = *(_QWORD *)(a1 + 4576);
  ++*((_DWORD *)v3 - 1);
  if ( v7 )
    v8 = *(_DWORD *)(v7 - 4);
  else
    v8 = 0;
  v9 = sub_180C100(a1 + 4384, 24);
  v10 = *(_QWORD **)(a1 + 4368);
  *(_QWORD *)v9 = off_1C52DE0;
  v11 = v9;
  *(_QWORD *)(v9 + 8) = a1 + 4568;
  *(_DWORD *)(v9 + 16) = v8;
  if ( v10 )
  {
    v12 = *((_DWORD *)v10 - 1);
    if ( v12 == *((_DWORD *)v10 - 2) )
    {
      v45 = (3 * v12 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v46 || v12 >= v45 )
        goto LABEL_38;
      v47 = (unsigned int *)sub_186B300(v10 - 1, v46);
      v48 = v47[1];
      v10 = v47 + 2;
      *v47 = v45;
      *(_QWORD *)(a1 + 4368) = v47 + 2;
      LODWORD(v47) = v48;
      v15 = &v10[v48];
      v14 = (_DWORD)v47 + 1;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = &v10[v13];
    }
  }
  else
  {
    v50 = (_QWORD *)sub_186B270(0x18u);
    v10 = v50 + 1;
    *v50 = 2;
    v14 = 1;
    *(_QWORD *)(a1 + 4368) = v10;
    v15 = v10;
  }
  *v15 = v11;
  *((_DWORD *)v10 - 1) = v14;
  v16 = *(_QWORD *)(a1 + 4624);
  if ( v16 )
    v17 = *(_DWORD *)(v16 - 4);
  else
    v17 = 0;
  v18 = sub_180C100(a1 + 4384, 24);
  v19 = *(_QWORD **)(a1 + 4368);
  *(_QWORD *)v18 = off_1C52DE0;
  v20 = v18;
  *(_QWORD *)(v18 + 8) = a1 + 4616;
  *(_DWORD *)(v18 + 16) = v17;
  if ( v19 )
  {
    v21 = *((_DWORD *)v19 - 1);
    if ( v21 == *((_DWORD *)v19 - 2) )
    {
      v41 = (3 * v21 + 1) >> 1;
      v42 = 8 * v41 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v42 || v21 >= v41 )
        goto LABEL_38;
      v43 = (unsigned int *)sub_186B300(v19 - 1, v42);
      v44 = v43[1];
      v19 = v43 + 2;
      *v43 = v41;
      *(_QWORD *)(a1 + 4368) = v43 + 2;
      LODWORD(v43) = v44;
      v24 = &v19[v44];
      v23 = (_DWORD)v43 + 1;
    }
    else
    {
      v22 = v21;
      v23 = v21 + 1;
      v24 = &v19[v22];
    }
  }
  else
  {
    v51 = (_QWORD *)sub_186B270(0x18u);
    v19 = v51 + 1;
    *v51 = 2;
    v23 = 1;
    *(_QWORD *)(a1 + 4368) = v19;
    v24 = v19;
  }
  *v24 = v20;
  *((_DWORD *)v19 - 1) = v23;
  v25 = *(_DWORD *)(a1 + 4560);
  v26 = sub_180C100(a1 + 4384, 24);
  v27 = *(__int64 **)(a1 + 4368);
  v28 = v26;
  *(_QWORD *)v26 = &off_1C4C070;
  *(_QWORD *)(v26 + 8) = a1 + 4560;
  *(_DWORD *)(v26 + 16) = v25;
  if ( !v27 )
  {
    v52 = (_QWORD *)sub_186B270(0x18u);
    v27 = v52 + 1;
    *v52 = 2;
    result = 1;
    *(_QWORD *)(a1 + 4368) = v27;
    v32 = v27;
    goto LABEL_18;
  }
  v29 = *((_DWORD *)v27 - 1);
  if ( v29 == *((_DWORD *)v27 - 2) )
  {
    v37 = (3 * v29 + 1) >> 1;
    v38 = 8 * v37 + 8;
    if ( 8 * v29 + 8 < (unsigned int)v38 && v29 < v37 )
    {
      v39 = (unsigned int *)sub_186B300(v27 - 1, v38);
      v40 = v39[1];
      v27 = (__int64 *)(v39 + 2);
      *v39 = v37;
      *(_QWORD *)(a1 + 4368) = v39 + 2;
      LODWORD(v39) = v40;
      v32 = &v27[v40];
      result = (unsigned int)((_DWORD)v39 + 1);
      goto LABEL_18;
    }
LABEL_38:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v54, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v54);
    sub_233E40((__int64)v54);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v30 = v29;
  result = v29 + 1;
  v32 = &v27[v30];
LABEL_18:
  *v32 = v28;
  *((_DWORD *)v27 - 1) = result;
  return result;
}

