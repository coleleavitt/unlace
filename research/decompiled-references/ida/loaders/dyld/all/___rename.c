void __cdecl __rename(
        const std::__fs::filesystem::path *__from,
        const std::__fs::filesystem::path *__to,
        std::error_code *__ec)
{
  char v3; // cf
  __int64 v4; // x0

  mac_syscall(SYS_rename, __from, __to, __ec);
  if ( v3 )
    cerror(v4);
}
