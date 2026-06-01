void __fastcall __noreturn abort_report_np(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  vm_address_t v10; // x0
  const char *v11; // x1
  _BYTE **v12; // x20

  v10 = _simple_salloc();
  if ( v10 )
  {
    v12 = (_BYTE **)v10;
    _simple_vsprintf(v10, a1, &a9);
    a1 = (char *)_simple_string(v12);
  }
  dyld4::halt((dyld4 *)a1, v11);
}
