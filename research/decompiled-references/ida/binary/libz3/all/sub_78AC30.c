void *__fastcall sub_78AC30(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, __int64, _QWORD *, __int64, __int64); // r8
  void *result; // rax
  const void *v13; // rdi
  _BYTE *v14; // r14
  char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  char **exception; // rbx
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+8h] [rbp-60h]
  __int64 v21[11]; // [rsp+10h] [rbp-58h] BYREF

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
        sub_24ABB0(v21, "cannot convert to euf");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v16 = sub_186B270(0x20E0u);
      v17 = *(_QWORD *)(a1 + 8);
      v21[0] = 0;
      v14 = (_BYTE *)v16;
      sub_7D2250(v16, v17, a1, v21);
      sub_18572D0(v21);
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 192) + 96LL))(*(_QWORD *)(a1 + 192), v14);
    }
    if ( v14[168] )
    {
      v15 = (char *)sub_789F10(a1);
      sub_7F3170(v15 + 160, a2, a3);
    }
  }
  v10 = *(_QWORD *)(a1 + 192);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64))(*(_QWORD *)v10 + 16LL);
  v20 = a4;
  v19 = 1;
  if ( v11 == sub_788610 )
  {
    v21[0] = 1;
    v21[1] = a4;
    result = (void *)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, __int64, __int64), __int64, __int64, __int64))sub_11C4C20)(
                       v10,
                       a2,
                       a3,
                       v21,
                       v11,
                       a6,
                       v19,
                       v20);
  }
  else
  {
    result = (void *)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *))v11)(v10, a2, a3, &v19);
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

