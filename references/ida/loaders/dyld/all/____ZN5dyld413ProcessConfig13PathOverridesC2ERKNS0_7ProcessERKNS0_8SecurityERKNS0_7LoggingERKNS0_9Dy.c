char *__fastcall ___ZN5dyld413ProcessConfig13PathOverridesC2ERKNS0_7ProcessERKNS0_8SecurityERKNS0_7LoggingERKNS0_9DyldCacheERNS_15SyscallDelegateERN3lsl9AllocatorE_block_invoke(
        __int64 a1,
        char *__s)
{
  return dyld4::ProcessConfig::PathOverrides::addEnvVar(
           *(const char ***)(a1 + 32),
           *(const dyld4::ProcessConfig::Process **)(a1 + 40),
           *(const dyld4::ProcessConfig::Security **)(a1 + 48),
           *(lsl::Allocator **)(a1 + 56),
           __s,
           1,
           nullptr);
}
