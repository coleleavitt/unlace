void __fastcall sub_8F23D0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  _QWORD *v4; // rbx
  _QWORD *v6; // r12
  unsigned int *v7; // rsi
  __int64 v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD **)(a2 + 8688);
  if ( v4 )
  {
    v6 = &v4[*((unsigned int *)v4 - 1)];
    while ( v6 != v4 )
    {
      v7 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v4 + 376LL))(*v4, a3);
      if ( !v7 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v8, "theory cannot be copied");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v8);
        sub_233E40((__int64)v8);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      ++v4;
      sub_8F1E10(a3, v7);
    }
  }
}

