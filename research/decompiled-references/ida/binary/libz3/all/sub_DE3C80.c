_DWORD *__fastcall sub_DE3C80(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  char **exception; // rbx
  __int64 v6; // r13
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  __int64 *v12; // r14
  __int64 *v13; // r13
  _QWORD *v14; // rax
  unsigned int v15; // edx
  _QWORD *v16; // rax
  _DWORD *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // r8d
  size_t v21; // rsi
  unsigned int v22; // r12d
  unsigned int *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  __int64 v27; // rdx
  __int64 v29[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a4;
  v8 = sub_17E9C90(*(_QWORD *)(a1 + 8), 48);
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 && (v10 = *(_DWORD *)(v9 - 4)) != 0 )
  {
    v27 = (unsigned int)(v10 - 1);
    v11 = *(_DWORD *)(v9 + 4 * v27);
    *(_DWORD *)(v9 - 4) = v27;
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v11 + 1;
  }
  *(_DWORD *)(v8 + 8) = v11;
  *(_QWORD *)v8 = off_1C5AB80;
  *(_DWORD *)(v8 + 12) = a2;
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = a3;
  *(_QWORD *)(v8 + 40) = 0;
  if ( (_DWORD)v6 )
  {
    v12 = &a5[v6];
    v13 = a5;
    v14 = (_QWORD *)sub_186B270(0x18u);
    v15 = 1;
    *v14 = 2;
    v16 = v14 + 1;
    *(_QWORD *)(v8 + 40) = v16;
    v17 = v16;
    while ( 1 )
    {
      v18 = *v13++;
      *v16 = v18;
      *(v17 - 1) = v15;
      if ( v12 == v13 )
        break;
      if ( *(v17 - 2) == v15 )
      {
        v20 = (3 * v15 + 1) >> 1;
        v21 = 8 * v20 + 8;
        v22 = v20;
        if ( 8 * v15 + 8 >= (unsigned int)v21 || v15 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v29, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v29);
          sub_233E40((__int64)v29);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v17 - 2, v21);
        v17 = v23 + 2;
        *(_QWORD *)(v8 + 40) = v23 + 2;
        *v23 = v22;
        v24 = v23[1];
        v25 = v24;
        v16 = &v17[2 * v24];
        v15 = v25 + 1;
      }
      else
      {
        v19 = v15++;
        v16 = &v17[2 * v19];
      }
    }
    if ( a3 )
      ++*(_DWORD *)(a3 + 16);
    do
    {
      if ( *a5 )
        ++*(_DWORD *)(*a5 + 16);
      ++a5;
    }
    while ( v12 != a5 );
  }
  else if ( a3 )
  {
    ++*(_DWORD *)(a3 + 16);
  }
  return sub_DE2E10(a1, (_DWORD *)v8);
}

