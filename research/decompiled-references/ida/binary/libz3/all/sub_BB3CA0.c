__int64 __fastcall sub_BB3CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // rdx
  unsigned int v17; // r12d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22[9]; // [rsp+0h] [rbp-48h] BYREF

  v9 = sub_186B270(0x20u);
  v10 = *(_QWORD **)(a1 + 4256);
  *(_QWORD *)v9 = a2;
  v11 = v9;
  *(_QWORD *)(v9 + 8) = a3;
  *(_QWORD *)(v9 + 16) = a4;
  *(_DWORD *)(v9 + 24) = 0;
  if ( v10 )
  {
    v12 = *((_DWORD *)v10 - 1);
    if ( v12 == *((_DWORD *)v10 - 2) )
    {
      v17 = (3 * v12 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v18 || v12 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v22, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v22);
        sub_233E40((__int64)v22);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v10 - 1, v18);
      v20 = v19[1];
      v10 = v19 + 2;
      *v19 = v17;
      *(_QWORD *)(a1 + 4256) = v19 + 2;
      LODWORD(v19) = v20;
      v15 = &v10[v20];
      v14 = (_DWORD)v19 + 1;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = &v10[v13];
    }
  }
  else
  {
    v21 = (_QWORD *)sub_186B270(0x18u);
    v10 = v21 + 1;
    *v21 = 2;
    v14 = 1;
    *(_QWORD *)(a1 + 4256) = v10;
    v15 = v10;
  }
  *v15 = v11;
  *((_DWORD *)v10 - 1) = v14;
  return v11;
}

