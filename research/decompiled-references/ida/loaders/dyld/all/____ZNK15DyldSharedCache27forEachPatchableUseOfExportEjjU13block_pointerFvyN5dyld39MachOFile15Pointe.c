__int64 __fastcall ___ZNK15DyldSharedCache27forEachPatchableUseOfExportEjjU13block_pointerFvyN5dyld39MachOFile15PointerMetaDataEybE_block_invoke(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x10

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(unsigned int *)(v2 + 16);
  v4 = 24;
  if ( v3 > 0x1C3 )
    v4 = 448;
  return dyld3::MachOFile::preferredLoadAddress((dyld3::MachOFile *)(v2
                                                                   + *(_QWORD *)(v2
                                                                               + *(unsigned int *)(v2 + v4)
                                                                               + 32LL * a2)
                                                                   - *(_QWORD *)(v2 + v3)));
}
