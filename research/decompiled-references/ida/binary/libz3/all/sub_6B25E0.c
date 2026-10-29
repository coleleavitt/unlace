__int64 __fastcall sub_6B25E0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  char **exception; // r15
  const char *v10; // rax
  __int64 v11; // [rsp+0h] [rbp-50h] BYREF
  __int64 v12; // [rsp+8h] [rbp-48h]

  if ( !(unsigned __int8)sub_18290A0(a1[1]) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    v10 = (const char *)sub_1829130(a1[1]);
    sub_6A99E0(&v11, v10);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, &v11);
    sub_233E40((__int64)&v11);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v11 = a1[1];
  v6 = *a1;
  v12 = 0;
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64 *, _QWORD, _QWORD))(v6 + 16))(
    a1,
    a2,
    a3,
    a4,
    &v11,
    0,
    0);
  if ( v12 )
    v7 = *(unsigned int *)(v12 - 4);
  else
    v7 = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 56LL))(a1, v7, v12, a4);
  return sub_2B4F40(&v11);
}

