__int64 __fastcall sub_5CDEB0(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  _DWORD *v5; // rax
  bool v6; // zf
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r13
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // r13
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // r14d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  char **v37; // r13
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  char **v40; // r13
  char **exception; // r13
  __int64 v42; // [rsp+8h] [rbp-50h] BYREF
  __int64 v43[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v5 || *v5 )
    goto LABEL_5;
  v8 = v5[1];
  if ( v8 == 8 )
    BUG();
  if ( (unsigned int)(v8 - 5) > 1 )
  {
LABEL_5:
    ++*(_DWORD *)(a2 + 8);
    v42 = a2;
    sub_5C94A0((_QWORD *)(a1 + 56), &v42);
    v43[0] = 0;
    sub_5C93E0((_QWORD *)(a1 + 88), v43);
    goto LABEL_6;
  }
  v9 = **(_QWORD **)(a1 + 144);
  if ( v8 == 5 )
  {
    v10 = *(_QWORD *)(v9 + 856);
    if ( v10 )
      goto LABEL_13;
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 864);
    if ( v10 )
    {
LABEL_13:
      ++*(_DWORD *)(v10 + 8);
      sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v10;
      ++*(_DWORD *)(v10 + 8);
      goto LABEL_14;
    }
  }
  sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  *(_QWORD *)(a1 + 480) = 0;
  v10 = 0;
LABEL_14:
  v11 = *(_QWORD **)(a1 + 56);
  if ( v11 )
  {
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 == *((_DWORD *)v11 - 2) )
    {
      v28 = (3 * v12 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v29 || v12 >= v28 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v43, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v11 - 1, v29);
      v31 = v30[1];
      v11 = v30 + 2;
      *v30 = v28;
      *(_QWORD *)(a1 + 56) = v30 + 2;
      LODWORD(v30) = v31;
      v15 = &v11[v31];
      v14 = (_DWORD)v30 + 1;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = &v11[v13];
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x18u);
    v11 = v38 + 1;
    *v38 = 2;
    v14 = 1;
    *(_QWORD *)(a1 + 56) = v11;
    v15 = v11;
  }
  *v15 = v10;
  v16 = *(_QWORD *)(a1 + 496);
  *((_DWORD *)v11 - 1) = v14;
  if ( v16 )
  {
    v17 = *(_QWORD **)(a1 + 88);
    ++*(_DWORD *)(v16 + 8);
    if ( v17 )
    {
      v18 = *((_DWORD *)v17 - 1);
      if ( v18 != *((_DWORD *)v17 - 2) )
      {
LABEL_20:
        v19 = v18;
        v20 = v18 + 1;
        v21 = &v17[v19];
        goto LABEL_21;
      }
      v33 = (3 * v18 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v34 || v18 >= v33 )
      {
        v37 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v43, "Overflow encountered when expanding vector");
        *v37 = (char *)off_1C63128;
        sub_2333C0(v37 + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(v37, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      goto LABEL_39;
    }
  }
  else
  {
    v32 = sub_15DE370(*(_QWORD *)(a1 + 8));
    v16 = v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    v17 = *(_QWORD **)(a1 + 88);
    if ( v17 )
    {
      v18 = *((_DWORD *)v17 - 1);
      if ( v18 != *((_DWORD *)v17 - 2) )
        goto LABEL_20;
      v33 = (3 * v18 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v34 || v18 >= v33 )
      {
        v40 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v43, "Overflow encountered when expanding vector");
        *v40 = (char *)off_1C63128;
        sub_2333C0(v40 + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(v40, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
LABEL_39:
      v35 = (unsigned int *)sub_186B300(v17 - 1, v34);
      v36 = v35[1];
      v17 = v35 + 2;
      *(_QWORD *)(a1 + 88) = v35 + 2;
      *v35 = v33;
      LODWORD(v35) = v36;
      v21 = &v17[v36];
      v20 = (_DWORD)v35 + 1;
      goto LABEL_21;
    }
  }
  v39 = (_QWORD *)sub_186B270(0x18u);
  v17 = v39 + 1;
  *v39 = 2;
  v20 = 1;
  *(_QWORD *)(a1 + 88) = v17;
  v21 = v17;
LABEL_21:
  *v21 = v16;
  v22 = *(_QWORD *)(a1 + 496);
  *((_DWORD *)v17 - 1) = v20;
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 504);
    v6 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v23, v22);
  }
  v24 = *(_QWORD *)(a1 + 480);
  *(_QWORD *)(a1 + 496) = 0;
  if ( v24 )
  {
    v25 = *(_QWORD *)(a1 + 488);
    v6 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v25, v24);
  }
  *(_QWORD *)(a1 + 480) = 0;
  v26 = *(_QWORD *)(a1 + 40);
  if ( v26 )
  {
    v27 = *(_DWORD *)(v26 - 4);
    if ( v27 )
      *(_BYTE *)(v26 + 16LL * (unsigned int)(v27 - 1) + 8) |= 2u;
  }
LABEL_6:
  v6 = (*(_DWORD *)(a2 + 8))-- == 1;
  if ( v6 )
    sub_15D7BC0(v4, a2);
  return 1;
}

