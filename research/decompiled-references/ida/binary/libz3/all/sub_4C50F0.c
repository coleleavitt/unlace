__int64 __fastcall sub_4C50F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rbp
  char **exception; // rbx
  __int64 v9; // rdx
  __int64 v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) )
  {
    v6 = *(_QWORD *)(a1 + 104);
    if ( !v6 )
      goto LABEL_10;
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 16);
    if ( !v4 || (v5 = &v4[*((unsigned int *)v4 - 1)], v4 == v5) )
    {
LABEL_10:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_DFB18(v10, "no suitable plugin found for given table signature", v9);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v10);
      sub_233E40((__int64)v10);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    while ( 1 )
    {
      v6 = *v4;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v4 + 24LL))(*v4, a2) )
        break;
      if ( v5 == ++v4 )
        goto LABEL_10;
    }
  }
  return v6;
}

