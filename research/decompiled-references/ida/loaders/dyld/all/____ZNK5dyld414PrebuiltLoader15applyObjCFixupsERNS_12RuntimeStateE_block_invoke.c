__int64 __fastcall ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 v6; // x9
  unsigned __int64 v7; // x8
  __int64 v8; // x19
  __int64 *v9; // x20
  __int64 v10; // x21

  v6 = *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL);
  v7 = *(unsigned int *)(v6 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  if ( *(_QWORD *)(result + 56) <= v7 )
    ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_cold_1();
  v8 = result;
  if ( *(_BYTE *)(*(_QWORD *)(result + 40) + v7) == 1 )
  {
    v9 = (__int64 *)(*(_QWORD *)(result + 72) + a2 - *(_QWORD *)(result + 64));
    v10 = mach_o::ChainedFixupPointerOnDisk::Arm64e::signPointer(
            *(mach_o::ChainedFixupPointerOnDisk::Arm64e **)(result + 80),
            (unsigned __int64)v9,
            (char *)&dword_0 + 1,
            225,
            2u,
            a6);
    result = *(_QWORD *)(v8 + 88);
    if ( *(_BYTE *)(*(_QWORD *)(result + 8) + 182LL) )
      result = dyld4::RuntimeState::log(
                 (dyld4::RuntimeState *)result,
                 "fixup: *0x%012lX = 0x%012lX <objc-protocol>\n",
                 v9,
                 v10);
    *v9 = v10;
  }
  return result;
}
