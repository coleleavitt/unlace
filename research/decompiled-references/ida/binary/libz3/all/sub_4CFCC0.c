__int64 __fastcall sub_4CFCC0(__int64 a1)
{
  __int64 v2; // rax
  void (***v3)(void); // rdi
  void *v4; // rbx
  __int64 v5; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  void (***v10)(void); // r12
  char **exception; // r12
  __int64 v12; // rdx
  __int64 v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  v3 = *(void (****)(void))(a1 + 16);
  v4 = (void *)v2;
  if ( !v3 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
      v8 = *(unsigned int *)(v7 - 4);
    else
      v8 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v2 + 8) + 88LL))(
           *(_QWORD *)(v2 + 8),
           v2,
           v8);
    v3 = *(void (****)(void))(a1 + 16);
    v10 = (void (***)(void))v9;
    if ( (void (***)(void))v9 != v3 )
    {
      sub_4CFB00(v3);
      *(_QWORD *)(a1 + 16) = v10;
      v3 = v10;
    }
    if ( !v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_DFB18(v13, "projection does not exist", v12);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v13);
      sub_233E40((__int64)v13);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  v5 = ((__int64 (__fastcall *)(void (***)(void), void *))(*v3)[2])(v3, v4);
  if ( v4 )
    sub_4D63B0(v4);
  return v5;
}

