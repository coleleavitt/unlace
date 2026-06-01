mach_o::ChainedFixupPointerOnDisk::Arm64e *__fastcall ___ZN5dyld4L7prepareERNS_4APIsEPKN5dyld313MachOAnalyzerE_block_invoke_3(
        mach_o::ChainedFixupPointerOnDisk::Arm64e *result,
        __int64 a2,
        _BOOL4 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  mach_o::ChainedFixupPointerOnDisk::Arm64e *v6; // x21
  mach_o::ChainedFixupPointerOnDisk::Arm64e **v7; // x19
  mach_o::ChainedFixupPointerOnDisk::Arm64e *v8; // x20

  v6 = result;
  v7 = (mach_o::ChainedFixupPointerOnDisk::Arm64e **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)result + 4) + 8LL) + 200LL)
                                                    + a2);
  v8 = (mach_o::ChainedFixupPointerOnDisk::Arm64e *)(*((_QWORD *)result + 5) + a4);
  if ( (a3 & 0x1000000) != 0 )
  {
    result = (mach_o::ChainedFixupPointerOnDisk::Arm64e *)mach_o::ChainedFixupPointerOnDisk::Arm64e::signPointer(
                                                            v8,
                                                            (unsigned __int64)v7,
                                                            (void *)(((unsigned int)a3 >> 27) & 1),
                                                            a3,
                                                            ((unsigned int)a3 >> 25) & 3,
                                                            a6);
    v8 = result;
  }
  if ( *v7 != v8 )
  {
    dyld4::DyldCacheDataConstLazyScopedWriter::makeWriteable(*((dyld4::DyldCacheDataConstLazyScopedWriter **)v6 + 6));
    result = *((mach_o::ChainedFixupPointerOnDisk::Arm64e **)v6 + 4);
    if ( *(_BYTE *)(*((_QWORD *)result + 1) + 182LL) )
      result = (mach_o::ChainedFixupPointerOnDisk::Arm64e *)dyld4::RuntimeState::log(
                                                              result,
                                                              "cache patch: %p = 0x%0lX\n",
                                                              v7,
                                                              v8);
    *v7 = v8;
  }
  return result;
}
