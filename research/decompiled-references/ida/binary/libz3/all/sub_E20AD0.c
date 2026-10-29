__int64 __fastcall sub_E20AD0(__int64 *a1, __int64 *a2)
{
  char **exception; // rbx
  __int64 v4; // r13
  void (__fastcall ***v5)(void *); // rbx
  bool v6; // zf
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  _QWORD *v12; // rdx
  int v13; // r12d
  __int64 v15; // r13
  unsigned int v16; // edx
  _QWORD *v17; // rdx
  unsigned int v18; // r12d
  unsigned int v19; // eax
  unsigned int *v20; // rdx
  __int64 v21; // rdx
  int v22; // r12d
  _QWORD *v23; // rax
  __int64 v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *a1;
  v5 = *(void (__fastcall ****)(void *))(*a1 + 72);
  if ( v5 )
  {
    v6 = (*((_DWORD *)v5 + 4))-- == 1;
    if ( v6 )
    {
      (**v5)(v5);
      sub_186B220(v5);
    }
  }
  v7 = (_QWORD *)a2[1];
  *(_QWORD *)(v4 + 72) = 0;
  v8 = v7;
  if ( !v7 )
    goto LABEL_16;
  v9 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
  if ( (unsigned __int64)v7 >= v9 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        v11 = *a2;
        v6 = (*(_DWORD *)(v10 + 8))-- == 1;
        if ( v6 )
          break;
      }
      if ( (unsigned __int64)++v8 >= v9 )
        goto LABEL_11;
    }
    sub_15D7BC0(v11, v10);
    ++v8;
  }
  while ( (unsigned __int64)v8 < v9 );
LABEL_11:
  v8 = (_QWORD *)a2[1];
  v7 = v8;
  if ( v8 )
LABEL_12:
    *((_DWORD *)v7 - 1) = 0;
  else
LABEL_16:
    v8 = nullptr;
  v12 = *(_QWORD **)(v4 + 24);
  if ( !v12 )
    return sub_E210E0(v4);
  v13 = *((_DWORD *)v12 - 1);
  if ( v13 != 1 )
    return sub_E210E0(v4);
  v15 = *v12;
  if ( *v12 )
    ++*(_DWORD *)(v15 + 8);
  if ( v8 )
  {
    v16 = *((_DWORD *)v8 - 2);
    if ( *((_DWORD *)v8 - 1) == v16 )
    {
      v18 = (3 * v16 + 1) >> 1;
      v19 = 8 * v18 + 8;
      if ( 8 * v16 + 8 >= v19 || v16 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v24, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v24);
        sub_233E40((__int64)v24);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B300(v8 - 1, v19);
      v7 = v20 + 2;
      *v20 = v18;
      v21 = v20[1];
      a2[1] = (__int64)v7;
      v22 = v21;
      v17 = &v7[v21];
      v13 = v22 + 1;
    }
    else
    {
      v17 = &v7[*((unsigned int *)v7 - 1)];
      v13 = *((_DWORD *)v7 - 1) + 1;
    }
  }
  else
  {
    v23 = (_QWORD *)sub_186B270(0x18u);
    *v23 = 2;
    v7 = v23 + 1;
    a2[1] = (__int64)v7;
    v17 = v7;
  }
  *v17 = v15;
  *((_DWORD *)v7 - 1) = v13;
  return 1;
}

