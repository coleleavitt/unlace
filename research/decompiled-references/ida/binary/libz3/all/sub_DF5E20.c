__int64 __fastcall sub_DF5E20(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rbx
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rbp
  void *v11; // r13
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  void *v13; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF

  v6 = a1[3];
  if ( v6 )
  {
    sub_18625B0(a1 + 5, v6, a3);
    a1[3] = 0;
    return 0;
  }
  else
  {
    sub_185B3A0(&v13, a3);
    sub_180C5A0(&v12, v13);
    v8 = (__int64 *)v13;
    a1[3] = v12;
    if ( v8 != &v14 )
      operator delete(v8, v14 + 1);
    v9 = a1[6];
    if ( !v9 )
    {
      v10 = sub_186B270(8u);
      sub_1857380(v10);
      v11 = (void *)a1[6];
      if ( (void *)v10 != v11 )
      {
        if ( v11 )
        {
          sub_1857540(a1[6]);
          sub_186B220(v11);
        }
        a1[6] = v10;
      }
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 224LL))(a1, a2, v10);
      v9 = a1[6];
    }
    result = sub_18583A0(v9, a1[3]);
    if ( (_DWORD)result == 19 )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid keyword argument");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
  }
  return result;
}

