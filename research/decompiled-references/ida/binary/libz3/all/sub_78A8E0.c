__int64 __fastcall sub_78A8E0(__int64 a1, unsigned int a2, unsigned int a3)
{
  const void *v6; // rdi
  _QWORD *v7; // r13
  __int64 v8; // rax
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  char **exception; // rbx
  __int64 v14[9]; // [rsp+2h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a1 + 273) )
    return 0;
  v6 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
  if ( v6 )
  {
    v7 = __dynamic_cast(
           v6,
           (const struct __class_type_info *)&`typeinfo for'sat::extension,
           (const struct __class_type_info *)&`typeinfo for'euf::solver,
           0);
    if ( !v7 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v14, "cannot convert to euf");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v14);
      sub_233E40((__int64)v14);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  else
  {
    v11 = sub_186B270(0x20E0u);
    v12 = *(_QWORD *)(a1 + 8);
    v14[0] = 0;
    v7 = (_QWORD *)v11;
    sub_7D2250(v11, v12, a1, v14);
    sub_18572D0(v14);
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 192) + 96LL))(*(_QWORD *)(a1 + 192), v7);
  }
  v8 = v7[3];
  if ( !v8 || !*(_BYTE *)(v8 + 352) )
    return 0;
  sub_7A4170(v7);
  v14[0] = __PAIR64__(a3, a2);
  v10 = sub_789F10(a1);
  return sub_7A6620(v10, a1 + 288, 2, v14, 0, 0);
}

