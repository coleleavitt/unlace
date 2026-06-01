void *__fastcall sub_789F10(__int64 a1)
{
  const void *v1; // rax
  void *result; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  char **exception; // rbx
  __int64 v7[7]; // [rsp+10h] [rbp-38h] BYREF

  v1 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
  if ( v1 )
  {
    result = __dynamic_cast(
               v1,
               (const struct __class_type_info *)&`typeinfo for'sat::extension,
               (const struct __class_type_info *)&`typeinfo for'euf::solver,
               0);
    if ( !result )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v7, "cannot convert to euf");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v7);
      sub_233E40((__int64)v7);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  else
  {
    v3 = sub_186B270(0x20E0u);
    v4 = *(_QWORD *)(a1 + 8);
    v7[0] = 0;
    v5 = v3;
    sub_7D2250(v3, v4, a1, v7);
    sub_18572D0(v7);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 192) + 96LL))(*(_QWORD *)(a1 + 192), v5);
    return (void *)v5;
  }
  return result;
}

