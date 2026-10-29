__int64 __fastcall sub_4C6C30(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r13
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // r13
  __int64 v12; // rbp
  char **exception; // rbx
  __int64 v14; // rdx
  __int64 v15[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( a4 != -1 )
  {
    v7 = sub_4C3DD0(a1, a4);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, a2, a4) )
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, a3, a2, a4);
  }
  v9 = *(_QWORD *)(a1 + 112);
  if ( v9 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, a2) )
  {
    v12 = *(_QWORD *)(a1 + 112);
    if ( !v12 )
      goto LABEL_13;
  }
  else
  {
    v10 = *(_QWORD **)(a1 + 24);
    if ( !v10 || (v11 = &v10[*((unsigned int *)v10 - 1)], v10 == v11) )
    {
LABEL_13:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_DFB18(v15, "no suitable plugin found for given relation signature", v14);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v15);
      sub_233E40((__int64)v15);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    while ( 1 )
    {
      v12 = *v10;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 24LL))(*v10, a2) )
        break;
      if ( v11 == ++v10 )
        goto LABEL_13;
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v12 + 72LL))(
           v12,
           a3,
           a2,
           0xFFFFFFFFLL);
}

