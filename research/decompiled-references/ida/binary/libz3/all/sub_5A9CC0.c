__int64 __fastcall sub_5A9CC0(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r13
  void (***v11)(void); // rdi
  _QWORD *v12; // r14
  _QWORD *v13; // rdx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 *v17; // rsi
  unsigned int v18; // ebx
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rax
  char **exception; // rbx
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8LL * *(unsigned int *)a2);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(v6);
  v8 = *a3;
  v9 = v7;
  v10 = *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8 * v8);
  v11 = *(void (****)(void))(*(_QWORD *)(a1 + 8) + 48LL);
  if ( !v11 )
  {
    v23 = sub_4C4940(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL), v7, *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8 * v8), 0);
    v24 = *(_QWORD *)(a1 + 8);
    v25 = v23;
    v11 = *(void (****)(void))(v24 + 48);
    if ( (void (***)(void))v23 != v11 )
    {
      sub_54D7B0(v11);
      v26 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v24 + 48) = v25;
      v11 = *(void (****)(void))(v26 + 48);
    }
  }
  ((void (__fastcall *)(void (***)(void), __int64, __int64, _QWORD))(*v11)[2])(v11, v9, v10, 0);
  v12 = *(_QWORD **)(a1 + 16);
  v13 = (_QWORD *)*v12;
  if ( *v12 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 == *((_DWORD *)v13 - 2) )
    {
      v18 = (3 * v14 + 1) >> 1;
      v19 = 8 * v18 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v19 || v14 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v28, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v28);
        sub_233E40((__int64)v28);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B300(v13 - 1, v19);
      v15 = v14;
      v21 = v20[1];
      v13 = v20 + 2;
      *v12 = v20 + 2;
      *v20 = v18;
      LODWORD(v20) = v21;
      v17 = &v13[v21];
      result = (unsigned int)((_DWORD)v20 + 1);
    }
    else
    {
      v15 = v14;
      result = v14 + 1;
      v17 = &v13[v14];
    }
  }
  else
  {
    v22 = (_QWORD *)sub_186B270(0x18u);
    v15 = 0;
    v13 = v22 + 1;
    *v22 = 2;
    result = 1;
    *v12 = v13;
    v17 = v13;
  }
  *v17 = v9;
  *((_DWORD *)v13 - 1) = result;
  *a2 = v15;
  return result;
}

