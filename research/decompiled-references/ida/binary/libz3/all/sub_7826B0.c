unsigned __int64 __fastcall sub_7826B0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // r14d
  size_t v11; // rsi
  unsigned int *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r12
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v18; // r12
  __int64 *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  _QWORD *v23; // rax
  __int64 v24[9]; // [rsp+10h] [rbp-48h] BYREF

  sub_120E320(a1 + 40, a2 + 2392);
  v6 = *(_QWORD *)(a2 + 3296);
  v7 = *(_QWORD **)(a1 + 96);
  if ( v6 )
  {
    LODWORD(v8) = *(_DWORD *)(v6 - 4);
    if ( !v7 )
      goto LABEL_22;
    v9 = *((unsigned int *)v7 - 1);
    if ( (unsigned int)v8 >= (unsigned int)v9 )
    {
      if ( (unsigned int)v9 < (unsigned int)v8 )
        goto LABEL_9;
LABEL_15:
      *((_DWORD *)v7 - 1) = v8;
      goto LABEL_12;
    }
    v18 = (unsigned __int64)&v7[v9];
    v19 = &v7[(unsigned int)v8];
    if ( (unsigned __int64)v19 < v18 )
      goto LABEL_18;
LABEL_14:
    v9 = *((unsigned int *)v7 - 1);
    if ( (unsigned int)v9 < (unsigned int)v8 )
      goto LABEL_9;
    goto LABEL_15;
  }
  if ( !v7 )
    goto LABEL_12;
  v8 = *((unsigned int *)v7 - 1);
  if ( !(_DWORD)v8 )
    goto LABEL_15;
  v18 = (unsigned __int64)&v7[v8];
  v19 = *(__int64 **)(a1 + 96);
  LODWORD(v8) = 0;
  if ( (unsigned __int64)v7 >= v18 )
    goto LABEL_15;
  do
  {
    while ( 1 )
    {
LABEL_18:
      v20 = *v19;
      if ( !*v19 )
        goto LABEL_17;
      v21 = *(_QWORD *)(a1 + 88);
      if ( (*(_DWORD *)(v20 + 8))-- != 1 )
        break;
      sub_15D7BC0(v21, v20);
LABEL_17:
      if ( (unsigned __int64)++v19 >= v18 )
        goto LABEL_21;
    }
    ++v19;
  }
  while ( (unsigned __int64)v19 < v18 );
LABEL_21:
  v7 = *(_QWORD **)(a1 + 96);
  if ( v7 )
    goto LABEL_14;
LABEL_22:
  if ( (_DWORD)v8 )
  {
    v9 = 0;
    v23 = (_QWORD *)sub_186B270(0x18u);
    v7 = v23 + 1;
    *v23 = 2;
    *(_QWORD *)(a1 + 96) = v23 + 1;
LABEL_9:
    while ( 1 )
    {
      v13 = *((_DWORD *)v7 - 2);
      if ( v13 >= (unsigned int)v8 )
        break;
      v10 = (3 * v13 + 1) >> 1;
      v11 = 8 * v10 + 8;
      if ( 8 * v13 + 8 >= (unsigned int)v11 || v13 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v24, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v24);
        sub_233E40((__int64)v24);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = (unsigned int *)sub_186B300(v7 - 1, v11);
      v7 = v12 + 2;
      *v12 = v10;
      *(_QWORD *)(a1 + 96) = v12 + 2;
    }
    v14 = 8 * v9;
    *((_DWORD *)v7 - 1) = v8;
    v15 = &v7[(unsigned __int64)v14 / 8];
    v16 = 8LL * (unsigned int)v8;
    if ( v14 != v16 )
      memset(v15, 0, v16 - v14);
  }
LABEL_12:
  sub_7E6CD0(a3, a1 + 88);
  return sub_781D20(a1);
}

