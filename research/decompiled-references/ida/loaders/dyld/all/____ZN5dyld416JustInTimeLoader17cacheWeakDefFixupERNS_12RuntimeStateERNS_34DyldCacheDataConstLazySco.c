dyld4::RuntimeState *__fastcall ___ZN5dyld416JustInTimeLoader17cacheWeakDefFixupERNS_12RuntimeStateERNS_34DyldCacheDataConstLazyScopedWriterEjjRKNS_6Loader14ResolvedSymbolE_block_invoke(
        __int64 a1,
        __int64 a2,
        _BOOL4 a3,
        __int64 a4)
{
  mach_o::ChainedFixupPointerOnDisk::Arm64e **v7; // x19
  dyld4::RuntimeState *result; // x0
  unsigned __int8 v9; // w5
  mach_o::ChainedFixupPointerOnDisk::Arm64e *v10; // x21

  v7 = (mach_o::ChainedFixupPointerOnDisk::Arm64e **)(*(_QWORD *)(a1 + 32) + a2);
  result = dyld4::Loader::resolvedAddress(*(dyld4::RuntimeState **)(a1 + 40), *(_QWORD *)(a1 + 48));
  v10 = (dyld4::RuntimeState *)((char *)result + a4);
  if ( (a3 & 0x1000000) != 0 )
  {
    result = (dyld4::RuntimeState *)mach_o::ChainedFixupPointerOnDisk::Arm64e::signPointer(
                                      v10,
                                      (unsigned __int64)v7,
                                      (void *)(((unsigned int)a3 >> 27) & 1),
                                      a3,
                                      ((unsigned int)a3 >> 25) & 3,
                                      v9);
    v10 = result;
  }
  if ( *v7 != v10 )
  {
    dyld4::DyldCacheDataConstLazyScopedWriter::makeWriteable(*(_BYTE **)(a1 + 56));
    result = *(dyld4::RuntimeState **)(a1 + 40);
    if ( *(_BYTE *)(*((_QWORD *)result + 1) + 182LL) )
      result = (dyld4::RuntimeState *)dyld4::RuntimeState::log(result, "cache patch: %p = 0x%0lX\n", v7, v10);
    *v7 = v10;
  }
  return result;
}
