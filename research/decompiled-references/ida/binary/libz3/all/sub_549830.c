__int64 __fastcall sub_549830(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v4; // rbp
  char **exception; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  void *v12; // r14
  void *v13; // rbx
  __int64 v15[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = *(_QWORD **)(a4 + 32);
  v8 = *v7;
  if ( *(_DWORD *)(*(_QWORD *)(*v7 + 8LL) + 32LL) != 4 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v15, "explanations are not supported with undefined predicates");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v15);
    sub_233E40((__int64)v15);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v9 = v7[1];
  if ( *(_DWORD *)(*(_QWORD *)(v9 + 8) + 32LL) != 4 )
  {
    v4 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v15, "explanations are not supported with undefined predicates");
    *v4 = (char *)off_1C63128;
    sub_2333C0(v4 + 1, v15);
    sub_233E40((__int64)v15);
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v10 = *(_QWORD *)(v8 + 64);
  v11 = *(_QWORD *)(v9 + 64);
  if ( *(_QWORD *)(a1 + 72) == *(_QWORD *)(v10 + 8) )
  {
    v11 = *(_QWORD *)(v8 + 64);
    v10 = *(_QWORD *)(v9 + 64);
  }
  v12 = (void *)sub_4C4940(a2, v10, a3, 0);
  (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)v12 + 16LL))(v12, v10, a3, 0);
  (**(void (__fastcall ***)(void *))v12)(v12);
  sub_186B220(v12);
  v13 = (void *)sub_4C4940(a2, v11, *(_QWORD *)(a1 + 88), 0);
  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 16LL))(v13, v11, *(_QWORD *)(a1 + 88), 0);
  (**(void (__fastcall ***)(void *))v13)(v13);
  return sub_186B220(v13);
}

