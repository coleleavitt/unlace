__int64 __fastcall sub_AF00F0(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  int v6; // eax
  _QWORD *v7; // rdx
  unsigned int v8; // ebp
  _QWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int v14; // r13d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v7 = *(_QWORD **)(a1 + 32);
  if ( v6 != -1 && a2 == (_QWORD *)v7[v6] )
    return sub_B39350(a2, *(unsigned int *)(a1 + 8));
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 - 1);
    if ( v8 == *((_DWORD *)v7 - 2) )
    {
      v14 = (3 * v8 + 1) >> 1;
      v15 = 8 * v14 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v15 || v8 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v19, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v7 - 1, v15);
      v17 = v16[1];
      v7 = v16 + 2;
      *v16 = v14;
      *(_QWORD *)(a1 + 32) = v16 + 2;
      LODWORD(v16) = v17;
      v9 = &v7[v17];
      v10 = (_DWORD)v16 + 1;
    }
    else
    {
      v9 = &v7[v8];
      v10 = v8 + 1;
    }
  }
  else
  {
    v8 = 0;
    v18 = (_QWORD *)sub_186B270(0x18u);
    v7 = v18 + 1;
    *v18 = 2;
    v10 = 1;
    *(_QWORD *)(a1 + 32) = v7;
    v9 = v7;
  }
  *v9 = a2;
  v11 = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v7 - 1) = v10;
  sub_B66EF0(v11, a2, a1, v8);
  v12 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 7488) + 48LL))(*(_QWORD *)(v12 + 7488), *a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 7488) + 64LL))(*(_QWORD *)(v12 + 7488));
  return v8;
}

