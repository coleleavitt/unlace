vm_address_t *__fastcall sandbox_warn(
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
  vm_address_t *v10; // x20
  __int64 v11; // x0
  const char *v12; // x0

  v10 = (vm_address_t *)_simple_salloc();
  _simple_vsprintf((__int64)v10, a1, &a9);
  v11 = _simple_string((_BYTE **)v10);
  _simple_asl_log(2, (__int64)"com.apple.libsystem.sandbox", v11);
  v12 = (const char *)_simple_string((_BYTE **)v10);
  _simple_dprintf(2, "%s\n", v12);
  return _simple_sfree(v10);
}
