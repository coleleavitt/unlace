void __fastcall sub_E139F0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *exception; // rbx

  if ( !*(_BYTE *)(a2 + 273) )
  {
    if ( !*(_BYTE *)(a2 + 265) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(
        exception,
        "unsat assumptions construction is not enabled, use command (set-option :produce-unsat-assumptions true)");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( !*(_QWORD *)(a2 + 296) || (unsigned int)sub_DF7CC0(a2) )
    {
      v2 = __cxa_allocate_exception(0x30u);
      sub_305660(v2, "unsat assumptions is not available");
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    sub_E11560(a2);
  }
}

