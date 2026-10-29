__int64 __fastcall sub_4CFE30(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r12
  void *v4; // rbx
  __int64 v5; // rbp
  __int64 (__fastcall *v6)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r12
  unsigned int *v11; // rcx
  __int64 v12; // rax
  void (***v13)(void); // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  void (***v18)(void); // rdi
  char **exception; // rbx
  __int64 v20; // rdx
  __int64 v21[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 16LL))(*(_QWORD *)(a1 + 48));
  v3 = *(_QWORD *)(a1 + 56);
  v4 = (void *)v2;
  if ( !v3 )
  {
    v8 = *(_QWORD *)(v2 + 8);
    v9 = *(_DWORD *)(a1 + 16);
    v10 = *(_QWORD *)(v8 + 24);
    if ( v9 )
    {
      v14 = (_QWORD *)sub_186B270(8u);
      v15 = *(_QWORD *)(a1 + 64);
      *v14 = off_1C4EF20;
      if ( v15 )
        v16 = *(unsigned int *)(v15 - 4);
      else
        v16 = 0;
      v17 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 24LL))(v10, v4, v16);
      v18 = *(void (****)(void))(a1 + 56);
      v3 = v17;
      if ( v18 != (void (***)(void))v17 )
      {
        sub_4CFE00(v18);
        *(_QWORD *)(a1 + 56) = v3;
      }
      if ( !v3 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DFB18(v21, "projection for table does not exist", v20);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v11 = *(unsigned int **)(a1 + 64);
      if ( v11 )
        v9 = *(v11 - 1);
      v12 = sub_4C5900(*(_QWORD *)(v8 + 24), (__int64)v4, v9, v11);
      v13 = *(void (****)(void))(a1 + 56);
      v3 = v12;
      if ( v13 != (void (***)(void))v12 )
      {
        sub_4CFE00(v13);
        *(_QWORD *)(a1 + 56) = v3;
      }
    }
  }
  v5 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 16LL))(v3, v4);
  v6 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v4 + 16LL);
  if ( v6 == sub_4C9C30 )
  {
    (**(void (__fastcall ***)(void *))v4)(v4);
    sub_186B220(v4);
  }
  else
  {
    v6((void (__fastcall ***)(_QWORD))v4);
  }
  return v5;
}

