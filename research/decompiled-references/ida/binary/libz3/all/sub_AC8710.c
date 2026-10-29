void __fastcall sub_AC8710(__int64 a1)
{
  char **exception; // rbp
  const char *v2; // rax
  __int64 v4; // rdi
  __int64 v5[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    if ( (unsigned __int8)sub_8E6FA0(v4) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      v2 = (const char *)sub_1829130(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL));
      sub_24ABB0(v5, v2);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, v5);
      sub_233E40((__int64)v5);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
  }
}

