__int64 __fastcall sub_654AB0(__int64 *a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 *v7; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  int v10; // edx
  __int64 *v11; // rcx
  unsigned int v12; // edx
  __int64 result; // rax
  __int64 *v14; // rbx
  unsigned __int64 v15; // rbp
  __int64 v16; // rsi
  unsigned int v18; // r9d
  size_t v19; // rsi
  unsigned int v20; // ebp
  unsigned int *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v25; // [rsp+18h] [rbp-60h]
  __int64 v26[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(unsigned int *)(a2 + 24);
  v24 = *a1;
  v25 = nullptr;
  if ( (_DWORD)v5 )
  {
    v6 = *(_QWORD *)(a2 + 32);
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    v7 = (__int64 *)(sub_186B270(0x18u) + 8);
    v8 = a2;
    v9 = a2 + 8 * v5;
    *(v7 - 1) = 2;
    v10 = 1;
    v11 = v7;
    v25 = v7;
    while ( 1 )
    {
      v8 += 8;
      *v7 = v6;
      *((_DWORD *)v11 - 1) = v10;
      if ( v8 == v9 )
        break;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v8 + 32);
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        v12 = *((_DWORD *)v11 - 1);
        if ( v12 == *((_DWORD *)v11 - 2) )
          break;
        v8 += 8;
        v11[v12] = v6;
        *((_DWORD *)v11 - 1) = v12 + 1;
        if ( v8 == v9 )
          goto LABEL_10;
      }
      v18 = (3 * v12 + 1) >> 1;
      v19 = 8 * v18 + 8;
      v20 = v18;
      if ( 8 * v12 + 8 >= (unsigned int)v19 || v12 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_104888(v26, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v11 - 1, v19);
      v11 = (__int64 *)(v21 + 2);
      *v21 = v20;
      v22 = v21[1];
      v25 = v11;
      v23 = v22;
      v7 = &v11[v22];
      v10 = v23 + 1;
    }
  }
LABEL_10:
  result = sub_6549B0(a1, *(_QWORD *)(a2 + 16), &v24);
  v14 = v25;
  if ( v25 )
  {
    result = *((unsigned int *)v25 - 1);
    v15 = (unsigned __int64)&v25[result];
    if ( (unsigned __int64)v25 >= v15 )
      return sub_186B220(v14 - 1);
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          if ( (*(_DWORD *)(v16 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v14 >= v15 )
          goto LABEL_17;
      }
      result = sub_15D7BC0(v24, v16);
      ++v14;
    }
    while ( (unsigned __int64)v14 < v15 );
LABEL_17:
    v14 = v25;
    if ( v25 )
      return sub_186B220(v14 - 1);
  }
  return result;
}

