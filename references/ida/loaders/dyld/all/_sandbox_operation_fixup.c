vm_address_t *__fastcall sandbox_operation_fixup(vm_address_t **a1)
{
  vm_address_t *result; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7

  result = *a1;
  if ( result )
  {
    result = (vm_address_t *)_platform_strcmp((const char *)result, "iokit-open");
    if ( !(_DWORD)result )
    {
      result = sandbox_warn(
                 "sandbox operation \"%s\" is obsolete; replace with \"%s\"",
                 v3,
                 v4,
                 v5,
                 v6,
                 v7,
                 v8,
                 v9,
                 (int)"iokit-open");
      *a1 = (vm_address_t *)"iokit-open-user-client";
    }
  }
  return result;
}
