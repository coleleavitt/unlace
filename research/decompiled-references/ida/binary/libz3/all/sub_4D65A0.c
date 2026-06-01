__int64 __fastcall sub_4D65A0(__int64 a1)
{
  char **exception; // r12
  __int64 v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rax
  void (__fastcall ***v8)(_QWORD); // rbx
  __int64 result; // rax
  __int64 v11[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  v4 = *(__int64 **)(v3 + 8);
  v5 = *v4;
  v6 = *(_QWORD *)(*v4 + 864);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = sub_4C4AD0(v3, a1);
  v8 = (void (__fastcall ***)(_QWORD))v7;
  if ( !v7 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v11, "filter function does not exist");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v11);
    sub_233E40((__int64)v11);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, a1);
  (**v8)(v8);
  result = sub_186B220(v8);
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 8))-- == 1 )
      return sub_15D7BC0(v5, v6);
  }
  return result;
}

