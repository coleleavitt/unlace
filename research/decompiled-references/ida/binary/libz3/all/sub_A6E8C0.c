__int64 __fastcall sub_A6E8C0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 *v12; // rdx
  unsigned int v14; // r12d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = sub_186B270(0x20u);
  v7 = *(_QWORD **)(a1 + 16);
  v8 = v6;
  LODWORD(v6) = *(_DWORD *)(a1 + 24);
  *(_QWORD *)v8 = a2;
  *(_DWORD *)(v8 + 16) = v6;
  *(_QWORD *)(v8 + 8) = a3;
  *(_QWORD *)(v8 + 24) = 0;
  *(_DWORD *)(a1 + 24) = v6 + 1;
  if ( v7 )
  {
    v9 = *((_DWORD *)v7 - 1);
    if ( v9 == *((_DWORD *)v7 - 2) )
    {
      v14 = (3 * v9 + 1) >> 1;
      v15 = 8 * v14 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v15 || v9 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v19, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v7 - 1, v15);
      v17 = v16[1];
      v7 = v16 + 2;
      *v16 = v14;
      *(_QWORD *)(a1 + 16) = v16 + 2;
      LODWORD(v16) = v17;
      v12 = &v7[v17];
      v11 = (_DWORD)v16 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = &v7[v10];
    }
  }
  else
  {
    v18 = (_QWORD *)sub_186B270(0x18u);
    v7 = v18 + 1;
    *v18 = 2;
    v11 = 1;
    *(_QWORD *)(a1 + 16) = v7;
    v12 = v7;
  }
  *v12 = v8;
  *((_DWORD *)v7 - 1) = v11;
  return v8;
}

