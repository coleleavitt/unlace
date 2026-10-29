__int64 __fastcall sub_2FD4D0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // r13d
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rbp
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 result; // rax
  __int64 *v23; // rdx
  unsigned int v24; // r12d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // r13d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  char **exception; // rbp
  __int64 v35[9]; // [rsp+0h] [rbp-48h] BYREF

  v1 = a1 + 120;
  sub_180C250(a1 + 120);
  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = *(_QWORD *)(a1 + 112);
  if ( !v5 || (v6 = *(unsigned int *)(v5 - 4), (_DWORD)v6 == *(_DWORD *)(v5 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 112));
    v5 = *(_QWORD *)(a1 + 112);
    v6 = *(unsigned int *)(v5 - 4);
  }
  *(_DWORD *)(v5 + 4 * v6) = v4;
  ++*(_DWORD *)(v5 - 4);
  v7 = *(_DWORD *)(a1 + 8);
  v8 = sub_180C100(v1, 24);
  v9 = *(_QWORD **)(a1 + 104);
  v10 = v8;
  *(_QWORD *)v8 = &off_1C4C070;
  *(_QWORD *)(v8 + 8) = a1 + 8;
  *(_DWORD *)(v8 + 16) = v7;
  if ( v9 )
  {
    v11 = *((_DWORD *)v9 - 1);
    if ( v11 == *((_DWORD *)v9 - 2) )
    {
      v28 = (3 * v11 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v29 || v11 >= v28 )
        goto LABEL_25;
      v30 = (unsigned int *)sub_186B300(v9 - 1, v29);
      v31 = v30[1];
      *v30 = v28;
      *(_QWORD *)(a1 + 104) = v30 + 2;
      *(_QWORD *)&v30[2 * v31 + 2] = v10;
      v30[1] = v31 + 1;
      v15 = *(_QWORD *)(a1 + 96);
      if ( v15 )
        goto LABEL_9;
      goto LABEL_21;
    }
    v12 = v11;
    v13 = v11 + 1;
    v14 = &v9[v12];
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v9 = v32 + 1;
    *v32 = 2;
    v13 = 1;
    *(_QWORD *)(a1 + 104) = v9;
    v14 = v9;
  }
  *v14 = v10;
  *((_DWORD *)v9 - 1) = v13;
  v15 = *(_QWORD *)(a1 + 96);
  if ( v15 )
  {
LABEL_9:
    v16 = *(_DWORD *)(v15 - 4);
    goto LABEL_10;
  }
LABEL_21:
  v16 = 0;
LABEL_10:
  v17 = sub_180C100(v1, 24);
  v18 = *(__int64 **)(a1 + 104);
  v19 = v17;
  *(_QWORD *)v17 = off_1C4C048;
  *(_DWORD *)(v17 + 8) = v16;
  *(_QWORD *)(v17 + 16) = a1;
  if ( !v18 )
  {
    v33 = (_QWORD *)sub_186B270(0x18u);
    v18 = v33 + 1;
    *v33 = 2;
    result = 1;
    *(_QWORD *)(a1 + 104) = v18;
    v23 = v18;
    goto LABEL_13;
  }
  v20 = *((_DWORD *)v18 - 1);
  if ( v20 == *((_DWORD *)v18 - 2) )
  {
    v24 = (3 * v20 + 1) >> 1;
    v25 = 8 * v24 + 8;
    if ( 8 * v20 + 8 < (unsigned int)v25 && v20 < v24 )
    {
      v26 = (unsigned int *)sub_186B300(v18 - 1, v25);
      v27 = v26[1];
      v18 = (__int64 *)(v26 + 2);
      *v26 = v24;
      *(_QWORD *)(a1 + 104) = v26 + 2;
      LODWORD(v26) = v27;
      v23 = &v18[v27];
      result = (unsigned int)((_DWORD)v26 + 1);
      goto LABEL_13;
    }
LABEL_25:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_2EB560(v35, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v35);
    sub_233E40((__int64)v35);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v21 = v20;
  result = v20 + 1;
  v23 = &v18[v21];
LABEL_13:
  *v23 = v19;
  *((_DWORD *)v18 - 1) = result;
  return result;
}

