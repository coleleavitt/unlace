__int64 __fastcall sub_5A8780(_QWORD *a1, unsigned int *a2)
{
  _QWORD *v3; // r12
  __int64 v4; // r15
  __int64 v5; // rdx
  unsigned int v6; // ebx
  _QWORD *v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  unsigned int v17; // r14d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // ecx
  __int64 v23; // rax
  void (***v24)(void); // rdi
  _QWORD *v25; // rax
  char **exception; // rbx
  __int64 v27; // [rsp+8h] [rbp-70h]
  __int64 v28[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = (_QWORD *)a1[4];
  v4 = *(_QWORD *)(*(_QWORD *)(a1[2] + 112LL) + 8LL * *a2);
  v5 = *(_QWORD *)(*(_QWORD *)(a1[3] + 112LL) + 8LL * a2[2]);
  if ( *v3 )
    v6 = *(_DWORD *)(*v3 - 4LL);
  else
    v6 = 0;
  v7 = (_QWORD *)a1[1];
  v8 = v7[5];
  if ( !v8 )
  {
    v21 = v7[8];
    v22 = v21 ? *(_DWORD *)(v21 - 4) : 0;
    v27 = *(_QWORD *)(*(_QWORD *)(a1[3] + 112LL) + 8LL * a2[2]);
    v23 = sub_4C4750(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL), v4, v5, v22, v21, v7[9], 0);
    v24 = (void (***)(void))v7[5];
    v8 = v23;
    v5 = v27;
    if ( (void (***)(void))v23 != v24 )
    {
      sub_4CFDD0(v24);
      v7[5] = v8;
      v5 = v27;
    }
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v4, v5);
  v10 = (_QWORD *)*v3;
  v11 = v9;
  if ( *v3 )
  {
    v12 = *((_DWORD *)v10 - 1);
    if ( v12 == *((_DWORD *)v10 - 2) )
    {
      v17 = (3 * v12 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v18 || v12 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v28, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v28);
        sub_233E40((__int64)v28);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v10 - 1, v18);
      v20 = v19[1];
      v10 = v19 + 2;
      *v3 = v19 + 2;
      *v19 = v17;
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
    v25 = (_QWORD *)sub_186B270(0x18u);
    v10 = v25 + 1;
    *v25 = 2;
    v14 = 1;
    *v3 = v10;
    v15 = v10;
  }
  *v15 = v11;
  *((_DWORD *)v10 - 1) = v14;
  *(_QWORD *)a2 = v6;
  return 1;
}

