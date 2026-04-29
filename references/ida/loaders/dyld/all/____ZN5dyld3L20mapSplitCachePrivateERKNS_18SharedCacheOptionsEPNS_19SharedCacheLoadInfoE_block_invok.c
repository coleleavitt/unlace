__int64 __fastcall ___ZN5dyld3L20mapSplitCachePrivateERKNS_18SharedCacheOptionsEPNS_19SharedCacheLoadInfoE_block_invoke(
        __int64 result,
        int a2,
        __int64 a3,
        vm_size_t size,
        __int64 a5,
        __int64 a6,
        char a7)
{
  if ( (a7 & 4) != 0 )
    return vm_protect(mach_task_self_, *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + a3, size, 0, 19);
  return result;
}
