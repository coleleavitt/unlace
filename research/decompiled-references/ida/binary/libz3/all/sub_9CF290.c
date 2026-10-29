__int64 __fastcall sub_9CF290(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  int v3; // eax
  __int64 v4; // r13
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r13
  int *v18; // r12
  int *v19; // rbp
  void *v20; // r15
  bool v21; // al
  __int64 result; // rax
  unsigned int v24; // ebp
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  char **exception; // rbx
  __int64 v30[11]; // [rsp+0h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 1432);
  v2 = *(_DWORD *)(a1 + 1440);
  if ( v1 )
    v3 = *(_DWORD *)(v1 - 4);
  else
    v3 = 0;
  if ( v2 != v3 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = sub_180C100(v4 + 8400, 24);
    v6 = *(_QWORD **)(v4 + 9456);
    v7 = v5;
    *(_QWORD *)v5 = &off_1C4C070;
    *(_QWORD *)(v5 + 8) = a1 + 1440;
    *(_DWORD *)(v5 + 16) = v2;
    if ( v6 )
    {
      v8 = *((_DWORD *)v6 - 1);
      if ( v8 == *((_DWORD *)v6 - 2) )
      {
        v24 = (3 * v8 + 1) >> 1;
        v25 = 8 * v24 + 8;
        if ( 8 * v8 + 8 >= (unsigned int)v25 || v8 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v30, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v30);
          sub_233E40((__int64)v30);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v6 - 1, v25);
        v27 = v26[1];
        v6 = v26 + 2;
        *(_QWORD *)(v4 + 9456) = v26 + 2;
        *v26 = v24;
        LODWORD(v26) = v27;
        v11 = &v6[v27];
        v10 = (_DWORD)v26 + 1;
      }
      else
      {
        v9 = v8;
        v10 = v8 + 1;
        v11 = &v6[v9];
      }
    }
    else
    {
      v28 = (_QWORD *)sub_186B270(0x18u);
      v6 = v28 + 1;
      *v28 = 2;
      v10 = 1;
      *(_QWORD *)(v4 + 9456) = v6;
      v11 = v6;
    }
    *v11 = v7;
    *((_DWORD *)v6 - 1) = v10;
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 1432);
      if ( !v12 )
        break;
      v13 = *(_DWORD *)(a1 + 1440);
      if ( v13 >= *(_DWORD *)(v12 - 4) )
        break;
      v14 = (unsigned int *)(v12 + 8LL * v13);
      v15 = *(_QWORD *)(a1 + 32);
      v16 = *(_QWORD *)(v15 + 8LL * *v14);
      v17 = *(_QWORD *)(v15 + 8LL * v14[1]);
      *(_DWORD *)(a1 + 1440) = v13 + 1;
      v18 = sub_9AD4F0(a1, v14[1]);
      v19 = sub_9AD4F0(a1, *v14);
      v20 = qword_1C7F2C0;
      if ( (v19[1] & 1) != 0 || (v18[1] & 1) != 0 )
        v21 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v19, v18) == 0;
      else
        v21 = *v19 == *v18;
      if ( v21
        && ((v19[5] & 1) != 0 || (v18[5] & 1) != 0
          ? (unsigned int)sub_182C7B0(v20, v19 + 4, v18 + 4) == 0
          : v19[4] == v18[4])
        && sub_9B0850((__int64)(v19 + 8), (__int64)(v18 + 8))
        && *(_QWORD *)(v17 + 8) != *(_QWORD *)(v16 + 8) )
      {
        result = sub_966370(a1, v16, v17);
        if ( (_BYTE)result )
        {
          ++*(_DWORD *)(a1 + 408);
          return result;
        }
      }
    }
  }
  return 0;
}

