void __fastcall sub_E13910(__int64 a1, __int64 a2)
{
  _QWORD *exception; // rbx
  _QWORD *v3; // rbx

  if ( !*(_BYTE *)(a2 + 273) )
  {
    if ( !(unsigned __int8)sub_DF7C90(a2) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(
        exception,
        "unsat core construction is not enabled, use command (set-option :produce-unsat-cores true)");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( !*(_QWORD *)(a2 + 296) || (unsigned int)sub_DF7CC0(a2) )
    {
      v3 = __cxa_allocate_exception(0x30u);
      sub_305660(v3, "unsat core is not available");
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    sub_E11560(a2);
  }
}

