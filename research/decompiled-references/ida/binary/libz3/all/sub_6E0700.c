void __fastcall sub_6E0700(__int64 *a1, unsigned int a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // r13
  unsigned int v6; // ebx
  size_t v7; // rsi
  unsigned int *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r13
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // r13
  __int64 *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  _QWORD *v18; // rax
  char **exception; // rbx
  __int64 v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = (_QWORD *)a1[1];
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( a2 >= (unsigned int)v5 )
      goto LABEL_3;
    v13 = (unsigned __int64)&v4[v5];
    v14 = &v4[a2];
    if ( (unsigned __int64)v14 >= v13 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v15 = *v14;
        if ( *v14 )
        {
          v16 = *a1;
          if ( (*(_DWORD *)(v15 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v14 >= v13 )
          goto LABEL_19;
      }
      sub_15D7BC0(v16, v15);
      ++v14;
    }
    while ( (unsigned __int64)v14 < v13 );
LABEL_19:
    v4 = (_QWORD *)a1[1];
    if ( v4 )
    {
      v5 = *((unsigned int *)v4 - 1);
LABEL_3:
      if ( (unsigned int)v5 >= a2 )
      {
LABEL_11:
        *((_DWORD *)v4 - 1) = a2;
        return;
      }
      goto LABEL_8;
    }
  }
  if ( !a2 )
    return;
  v5 = 0;
  v18 = (_QWORD *)sub_186B270(0x18u);
  v4 = v18 + 1;
  *v18 = 2;
  a1[1] = (__int64)(v18 + 1);
LABEL_8:
  while ( 1 )
  {
    v9 = *((_DWORD *)v4 - 2);
    if ( v9 >= a2 )
      break;
    v6 = (3 * v9 + 1) >> 1;
    v7 = 8 * v6 + 8;
    if ( 8 * v9 + 8 >= (unsigned int)v7 || v9 >= v6 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v20, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v20);
      sub_233E40((__int64)v20);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v8 = (unsigned int *)sub_186B300(v4 - 1, v7);
    v4 = v8 + 2;
    *v8 = v6;
    a1[1] = (__int64)(v8 + 2);
  }
  v10 = 8 * v5;
  *((_DWORD *)v4 - 1) = a2;
  v11 = &v4[(unsigned __int64)v10 / 8];
  v12 = 8LL * a2;
  if ( v10 != v12 )
    memset(v11, 0, v12 - v10);
}

