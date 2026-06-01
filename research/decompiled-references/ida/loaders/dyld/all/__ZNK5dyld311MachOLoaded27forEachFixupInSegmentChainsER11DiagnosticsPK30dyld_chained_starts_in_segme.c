__int64 __fastcall dyld3::MachOLoaded::forEachFixupInSegmentChains(
        __int64 result,
        Diagnostics *a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  __int64 v8; // x22
  unsigned __int64 v9; // x23
  int v10; // w8
  unsigned int v11; // w25
  int v12; // w26
  _QWORD v13[6]; // [xsp+0h] [xbp-70h] BYREF

  v13[0] = _NSConcreteStackBlock;
  v13[1] = 0x40000000;
  v13[2] = ___ZNK5dyld311MachOLoaded27forEachFixupInSegmentChainsER11DiagnosticsPK30dyld_chained_starts_in_segmentbU13block_pointerFvPN6mach_o25ChainedFixupPointerOnDiskES5_RbE_block_invoke;
  v13[3] = &unk_97B20;
  v13[4] = a5;
  v13[5] = a3;
  if ( *(_WORD *)(a3 + 20) )
  {
    v8 = result;
    v9 = 0;
    result = 0;
    do
    {
      v10 = *(unsigned __int16 *)(a3 + 2 * v9 + 22);
      if ( v10 != 0xFFFF )
      {
        if ( (v10 & 0x8000) != 0 )
        {
          if ( (result & 1) != 0 )
            return result;
          v11 = v10 & 0x7FFF;
          do
          {
            v12 = *(__int16 *)(a3 + 2LL * v11 + 22);
            result = dyld3::MachOFile::walkChain(
                       a2,
                       (unsigned int *)(v8
                                      + *(_QWORD *)(a3 + 8)
                                      + (unsigned int)v9 * *(unsigned __int16 *)(a3 + 4)
                                      + (*(_WORD *)(a3 + 2LL * v11 + 22) & 0x7FFF)),
                       (mach_o::ChainedFixupPointerOnDisk *)*(unsigned __int16 *)(a3 + 6),
                       a4,
                       *(_DWORD *)(a3 + 16),
                       (__int64)v13);
            if ( (result & 1) != 0 )
              break;
            ++v11;
          }
          while ( (v12 & 0x80000000) == 0 );
        }
        else
        {
          result = dyld3::MachOFile::walkChain(
                     a2,
                     (unsigned int *)(v8
                                    + *(_QWORD *)(a3 + 8)
                                    + (unsigned int)v9 * *(unsigned __int16 *)(a3 + 4)
                                    + *(unsigned __int16 *)(a3 + 2 * v9 + 22)),
                     (mach_o::ChainedFixupPointerOnDisk *)*(unsigned __int16 *)(a3 + 6),
                     a4,
                     *(_DWORD *)(a3 + 16),
                     (__int64)v13);
        }
      }
      ++v9;
    }
    while ( v9 < *(unsigned __int16 *)(a3 + 20) && (result & 1) == 0 );
  }
  return result;
}
