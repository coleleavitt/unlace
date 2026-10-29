void __noreturn ignition_halt(__int64 a1, __int64 a2, __int64 a3, char *a4, ...)
{
  __int64 unsafe; // x22
  __int64 v8; // x0
  __int64 v9; // x0
  const char *v10; // x23
  __int64 v11; // x24

  unsafe = boot_get_unsafe(a1);
  v8 = configuration_unsafe();
  v9 = _simple_salloc(v8);
  if ( v9 )
  {
    v11 = v9;
    _simple_vsprintf(v9, a4);
    v10 = (const char *)_simple_string(v11);
  }
  else
  {
    v10 = "panic: [failed to allocate panic message]";
  }
  ignition_write_BRA_blob(unsafe);
  abort_with_reason(35, a1, v10, a3);
}
