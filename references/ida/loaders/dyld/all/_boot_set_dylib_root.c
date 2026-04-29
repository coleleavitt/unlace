__int64 __fastcall boot_set_dylib_root(__int64 a1, _DWORD *a2)
{
  return boot_set_root(a1, (__int64)&_boot_root_canonical_os, a2);
}
