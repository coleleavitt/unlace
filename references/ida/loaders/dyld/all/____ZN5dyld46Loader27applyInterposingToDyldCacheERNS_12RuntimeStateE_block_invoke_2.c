mach_o::ChainedFixupPointerOnDisk::Arm64e *__fastcall ___ZN5dyld46Loader27applyInterposingToDyldCacheERNS_12RuntimeStateE_block_invoke_2(
        __int64 a1,
        __int64 a2,
        _BOOL4 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 v8; // x8
  mach_o::ChainedFixupPointerOnDisk::Arm64e **v9; // x19
  mach_o::ChainedFixupPointerOnDisk::Arm64e *v10; // x23
  mach_o::ChainedFixupPointerOnDisk::Arm64e *result; // x0
  unsigned __int8 v12; // w1
  dyld4::RuntimeState *v13; // x22
  mach_o::ChainedFixupPointerOnDisk::Arm64e *v14; // x23
  const char *v15; // x0

  v8 = *(_QWORD *)(a1 + 32);
  v9 = (mach_o::ChainedFixupPointerOnDisk::Arm64e **)(v8 + a2);
  v10 = (mach_o::ChainedFixupPointerOnDisk::Arm64e *)(*(_QWORD *)(a1 + 40) + a4);
  if ( (a3 & 0x1000000) != 0 )
  {
    result = (mach_o::ChainedFixupPointerOnDisk::Arm64e *)mach_o::ChainedFixupPointerOnDisk::Arm64e::signPointer(
                                                            v10,
                                                            v8 + a2,
                                                            (void *)(((unsigned int)a3 >> 27) & 1),
                                                            a3,
                                                            ((unsigned int)a3 >> 25) & 3,
                                                            a6);
    *v9 = result;
    v13 = *(dyld4::RuntimeState **)(a1 + 48);
    if ( *(_BYTE *)(*((_QWORD *)v13 + 1) + 186LL) )
    {
      v14 = result;
      v15 = (const char *)mach_o::ChainedFixupPointerOnDisk::Arm64e::keyName(
                            (mach_o::ChainedFixupPointerOnDisk::Arm64e *)(((unsigned int)a3 >> 25) & 3),
                            v12);
      return (mach_o::ChainedFixupPointerOnDisk::Arm64e *)dyld4::RuntimeState::log(
                                                            v13,
                                                            "interpose: *%p = %p (JOP: diversity 0x%04X, addr-div=%d, key=%s)\n",
                                                            v9,
                                                            v14,
                                                            a3,
                                                            ((unsigned int)a3 >> 27) & 1,
                                                            v15);
    }
  }
  else
  {
    result = *(mach_o::ChainedFixupPointerOnDisk::Arm64e **)(a1 + 48);
    if ( *(_BYTE *)(*((_QWORD *)result + 1) + 186LL) )
      result = (mach_o::ChainedFixupPointerOnDisk::Arm64e *)dyld4::RuntimeState::log(
                                                              result,
                                                              "interpose: *%p = 0x%0llX (dyld cache patch) to %s\n",
                                                              v9,
                                                              v10,
                                                              *(const char **)(a1 + 56));
    *v9 = v10;
  }
  return result;
}
