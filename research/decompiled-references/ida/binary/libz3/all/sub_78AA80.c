__int64 __fastcall sub_78AA80(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  const void *v8; // rdi
  _QWORD *v9; // r14
  __int64 v10; // rax
  void *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  char **exception; // rbx
  unsigned __int64 v16; // [rsp+2h] [rbp-58h] BYREF
  int v17; // [rsp+Ah] [rbp-50h]

  if ( !*(_BYTE *)(a1 + 273) )
    return 0;
  v8 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
  if ( v8 )
  {
    v9 = __dynamic_cast(
           v8,
           (const struct __class_type_info *)&`typeinfo for'sat::extension,
           (const struct __class_type_info *)&`typeinfo for'euf::solver,
           0);
    if ( !v9 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v16, "cannot convert to euf");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v16);
      sub_233E40((__int64)&v16);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  else
  {
    v13 = sub_186B270(0x20E0u);
    v14 = *(_QWORD *)(a1 + 8);
    v16 = 0;
    v9 = (_QWORD *)v13;
    sub_7D2250(v13, v14, a1, &v16);
    sub_18572D0(&v16);
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 192) + 96LL))(*(_QWORD *)(a1 + 192), v9);
  }
  v10 = v9[3];
  if ( !v10 || !*(_BYTE *)(v10 + 352) )
    return 0;
  sub_7A4170(v9);
  v16 = __PAIR64__(a3, a2);
  v17 = a4;
  v12 = sub_789F10(a1);
  return sub_7A6620(v12, a1 + 288, 3, &v16, 0, 0);
}

