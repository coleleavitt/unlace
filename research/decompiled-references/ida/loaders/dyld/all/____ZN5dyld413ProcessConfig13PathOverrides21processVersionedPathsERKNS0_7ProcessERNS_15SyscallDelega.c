__int64 __fastcall ___ZN5dyld413ProcessConfig13PathOverrides21processVersionedPathsERKNS0_7ProcessERNS_15SyscallDelegateERKNS0_9DyldCacheEN5dyld38PlatformERKNSA_11GradedArchsERN3lsl9AllocatorE_block_invoke(
        __int64 a1,
        char *a2)
{
  return dyld4::SyscallDelegate::forEachInDirectory(*(_QWORD *)(a1 + 40), a2);
}
