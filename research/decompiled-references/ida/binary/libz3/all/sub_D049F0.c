__int64 __fastcall sub_D049F0(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int v14; // r13d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // r13d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  char **v24; // r13
  char **exception; // r13
  __int64 v26[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = (_QWORD *)a1[7];
  v5 = a1[1];
  *(_DWORD *)(a2 + 8) += 2;
  if ( v4 )
  {
    v6 = *((_DWORD *)v4 - 1);
    if ( v6 == *((_DWORD *)v4 - 2) )
    {
      v18 = (3 * v6 + 1) >> 1;
      v19 = 8 * v18 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v19 || v6 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D03640(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B300(v4 - 1, v19);
      v21 = v20[1];
      v10 = a1[11];
      *v20 = v18;
      a1[7] = v20 + 2;
      *(_QWORD *)&v20[2 * v21 + 2] = a2;
      v20[1] = v21 + 1;
      if ( v10 )
        goto LABEL_5;
LABEL_16:
      v22 = (_QWORD *)sub_186B270(0x18u);
      v22[1] = 0;
      a1[11] = v22 + 1;
      *v22 = 0x100000002LL;
      goto LABEL_7;
    }
    v7 = v6;
    v8 = v6 + 1;
    v9 = &v4[v7];
  }
  else
  {
    v23 = (_QWORD *)sub_186B270(0x18u);
    v4 = v23 + 1;
    *v23 = 2;
    v8 = 1;
    a1[7] = v4;
    v9 = v4;
  }
  v10 = a1[11];
  *v9 = a2;
  *((_DWORD *)v4 - 1) = v8;
  if ( !v10 )
    goto LABEL_16;
LABEL_5:
  v11 = *(_DWORD *)(v10 - 4);
  if ( v11 == *(_DWORD *)(v10 - 8) )
  {
    v14 = (3 * v11 + 1) >> 1;
    v15 = 8 * v14 + 8;
    if ( 8 * v11 + 8 >= (unsigned int)v15 || v11 >= v14 )
    {
      v24 = (char **)__cxa_allocate_exception(0x28u);
      sub_D03640(v26, "Overflow encountered when expanding vector");
      *v24 = (char *)off_1C63128;
      sub_2333C0(v24 + 1, v26);
      sub_233E40((__int64)v26);
      __cxa_throw(v24, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v16 = (unsigned int *)sub_186B300((void *)(v10 - 8), v15);
    v17 = v16[1];
    *v16 = v14;
    a1[11] = v16 + 2;
    *(_QWORD *)&v16[2 * v17 + 2] = 0;
    v16[1] = v17 + 1;
  }
  else
  {
    *(_QWORD *)(v10 + 8LL * v11) = 0;
    *(_DWORD *)(v10 - 4) = v11 + 1;
  }
LABEL_7:
  if ( (*(_DWORD *)(a2 + 8))-- == 1 )
    sub_15D7BC0(v5, a2);
  return 1;
}

