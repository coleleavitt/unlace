__int64 *__fastcall sub_617430(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // r13
  __int64 v8; // rax
  _QWORD *v9; // rax
  bool v10; // cc
  _QWORD *v11; // rbx
  unsigned int v12; // r9d
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  size_t v17; // rsi
  unsigned int v18; // r13d
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rax
  __int64 *v26; // r15
  unsigned __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v31; // [rsp+10h] [rbp-80h]
  __int64 v32; // [rsp+18h] [rbp-78h]
  __int64 v33[10]; // [rsp+40h] [rbp-50h] BYREF

  v8 = *(_QWORD *)(a2 + 24);
  *a1 = 0;
  v31 = v8;
  a1[1] = v8;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v9 = (_QWORD *)sub_186B270(0x18u);
  v10 = *(_DWORD *)(a4 + 24) <= 1u;
  v9[1] = a3;
  v11 = v9 + 1;
  v12 = 1;
  *v9 = 0x100000002LL;
  if ( !v10 )
  {
    v13 = 1;
    do
    {
      v15 = *(_QWORD *)(a4 + 8LL * v13 + 32);
      v32 = v15;
      if ( v15 )
      {
        ++*(_DWORD *)(v15 + 8);
        v12 = *((_DWORD *)v11 - 1);
      }
      if ( v12 == *((_DWORD *)v11 - 2) )
      {
        v16 = (3 * v12 + 1) >> 1;
        v17 = 8 * v16 + 8;
        v18 = v16;
        if ( 8 * v12 + 8 >= (unsigned int)v17 || v12 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v33, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v33);
          sub_233E40((__int64)v33);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v11 - 1, v17);
        *v19 = v18;
        v12 = v19[1];
        v11 = v19 + 2;
      }
      v14 = v12++;
      ++v13;
      v11[v14] = v32;
      *((_DWORD *)v11 - 1) = v12;
    }
    while ( v13 < *(_DWORD *)(a4 + 24) );
  }
  v20 = sub_15DCAD0(*(_QWORD *)(a2 + 48), (int)v11, 0);
  v21 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v22 = *a1;
  if ( *a1 )
  {
    v23 = a1[1];
    v24 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v23, v22);
  }
  v25 = *((unsigned int *)v11 - 1);
  *a1 = v21;
  v26 = v11;
  v27 = (unsigned __int64)&v11[v25];
  if ( (unsigned __int64)v11 < v27 )
  {
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v24 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( (unsigned __int64)++v26 >= v27 )
          goto LABEL_23;
      }
      sub_15D7BC0(v31, v28);
      ++v26;
    }
    while ( (unsigned __int64)v26 < v27 );
  }
LABEL_23:
  sub_186B220(v11 - 1);
  return a1;
}

