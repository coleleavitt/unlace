__int64 __fastcall dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  int v4; // w1
  unsigned __int64 v6; // [xsp+0h] [xbp-20h] BYREF
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  v2 = a2;
  v7 = a2;
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( a2 )
    {
      v2 = a2 - *(_QWORD *)(a1 + 8);
LABEL_4:
      v7 = v2;
    }
  }
  else
  {
    v4 = *(unsigned __int16 *)(a1 + 16);
    if ( *(_WORD *)(a1 + 16) && v2 )
    {
      v6 = 0;
      if ( (mach_o::ChainedFixupPointerOnDisk::isRebase(
              (mach_o::ChainedFixupPointerOnDisk *)&v7,
              v4,
              *(_QWORD *)a1,
              &v6)
          & 1) == 0 )
        return v7;
      v2 = v6 + *(_QWORD *)a1;
      goto LABEL_4;
    }
  }
  return v2;
}
