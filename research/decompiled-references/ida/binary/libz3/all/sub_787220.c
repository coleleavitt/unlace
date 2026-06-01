void *__fastcall sub_787220(__int64 *a1)
{
  char **exception; // rbx
  __int64 v2; // rbp
  const void *v3; // rax
  void *result; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *a1;
  v3 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 192) + 88LL))(*(_QWORD *)(*a1 + 192));
  if ( v3 )
  {
    result = __dynamic_cast(
               v3,
               (const struct __class_type_info *)&`typeinfo for'sat::extension,
               (const struct __class_type_info *)&`typeinfo for'euf::solver,
               0);
    if ( !result )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v8, "cannot convert to euf");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v8);
      sub_233E40((__int64)v8);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  else
  {
    v5 = sub_186B270(0x20E0u);
    v6 = *(_QWORD *)(v2 + 8);
    v8[0] = 0;
    v7 = v5;
    sub_7D2250(v5, v6, v2, v8);
    sub_18572D0(v8);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 192) + 96LL))(*(_QWORD *)(v2 + 192), v7);
    return (void *)v7;
  }
  return result;
}

