void __fastcall sub_E12EC0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rbx

  *(_QWORD *)(a1 + 48) = a3;
  if ( !*(_DWORD *)(a3 + 32) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid map declaration, function declaration must have arity > 0");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
}

