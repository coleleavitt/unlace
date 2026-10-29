__int64 __fastcall sub_4CFB30(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r13
  _QWORD **v5; // rbx
  void (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdi
  void (***v10)(void); // rdi
  __int64 v11; // rbp
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  void (***v16)(void); // rbp
  char **exception; // r12
  __int64 v18; // rdx
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  v4 = (_QWORD *)a1[1];
  v5 = (_QWORD **)v3;
  v6 = *(void (__fastcall **)(__int64, __int64))(*v4 + 16LL);
  if ( v6 == sub_4CBDD0 )
  {
    v7 = v4[1];
    if ( v7 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= *(_DWORD *)(v7 - 4) )
          break;
        if ( ((unsigned __int8 (__fastcall *)(_QWORD **))(*v5)[3])(v5) )
          break;
        v9 = *(_QWORD *)(v4[1] + 8LL * v8);
        (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v9 + 16LL))(v9, v5);
        v7 = v4[1];
        ++v8;
      }
      while ( v7 );
    }
  }
  else
  {
    v6(a1[1], (__int64)v5);
  }
  v10 = (void (***)(void))a1[2];
  if ( !v10 )
  {
    v13 = a1[3];
    if ( v13 )
      v14 = *(unsigned int *)(v13 - 4);
    else
      v14 = 0;
    v15 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **, __int64))(*v5[1] + 88LL))(v5[1], v5, v14);
    v10 = (void (***)(void))a1[2];
    v16 = (void (***)(void))v15;
    if ( (void (***)(void))v15 != v10 )
    {
      sub_4CFB00(v10);
      a1[2] = v16;
      v10 = v16;
    }
    if ( !v10 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_DFB18(v19, "projection does not exist", v18);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v19);
      sub_233E40((__int64)v19);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  v11 = ((__int64 (__fastcall *)(void (***)(void), _QWORD **))(*v10)[2])(v10, v5);
  if ( v5 )
    sub_4D63B0(v5);
  return v11;
}

