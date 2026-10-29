void __fastcall sub_DF9320(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  _QWORD *exception; // rbx

  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 268) == 1 )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "check annotation that says sat");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
  }
  else if ( a2 == 1 && !*(_DWORD *)(a1 + 268) )
  {
    v2 = __cxa_allocate_exception(0x30u);
    sub_305660(v2, "check annotation that says unsat");
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
}

