void *__fastcall sub_7872D0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **exception; // rbx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(); // r8
  void *result; // rax
  const void *v13; // rdi
  _BYTE *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 273) )
  {
    v13 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
    if ( v13 )
    {
      v14 = __dynamic_cast(
              v13,
              (const struct __class_type_info *)&`typeinfo for'sat::extension,
              (const struct __class_type_info *)&`typeinfo for'euf::solver,
              0);
      if ( !v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v20, "cannot convert to euf");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v16 = sub_186B270(0x20E0u);
      v17 = *(_QWORD *)(a1 + 8);
      v20[0] = 0;
      v14 = (_BYTE *)v16;
      sub_7D2250(v16, v17, a1, v20);
      sub_18572D0(v20);
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 192) + 96LL))(*(_QWORD *)(a1 + 192), v14);
    }
    if ( v14[168] )
    {
      v15 = sub_789F10(a1);
      sub_7F1790(v15 + 160, a2, a3);
    }
  }
  v10 = *(_QWORD *)(a1 + 192);
  v11 = *(__int64 (__fastcall **)())(*(_QWORD *)v10 + 16LL);
  v19 = 0;
  v18 = 0xFFFFFFFF00000000LL;
  if ( v11 == sub_788610 )
  {
    v20[0] = 0xFFFFFFFF00000000LL;
    v20[1] = 0;
    result = (void *)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *, __int64 (__fastcall *)(), __int64, unsigned __int64, __int64))sub_11C4C20)(
                       v10,
                       a2,
                       a3,
                       v20,
                       v11,
                       a6,
                       v18,
                       v19);
  }
  else
  {
    result = (void *)((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned __int64 *))v11)(v10, a2, a3, &v18);
  }
  if ( *(_BYTE *)(a1 + 274) )
  {
    result = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
    if ( result )
    {
      result = __dynamic_cast(
                 result,
                 (const struct __class_type_info *)&`typeinfo for'sat::extension,
                 (const struct __class_type_info *)&`typeinfo for'euf::solver,
                 0);
      if ( result )
        return (void *)sub_79B170(result, a2, a3);
    }
  }
  return result;
}

