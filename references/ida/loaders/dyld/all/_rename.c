void __cdecl rename(
        const std::__fs::filesystem::path *__from,
        const std::__fs::filesystem::path *__to,
        std::error_code *__ec)
{
  int v3; // w0

  __rename(__from, __to, __ec);
  if ( !v3 )
    atomic_fetch_add(__remove_counter, 1u);
}
