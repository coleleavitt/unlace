unsigned __int64 __fastcall mach_o::ChainedFixupPointerOnDisk::Arm64e::signExtendedAddend(
        mach_o::ChainedFixupPointerOnDisk::Arm64e *this)
{
  unsigned __int64 v1; // x8

  v1 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 0x4000000000000000LL) == 0 )
    mach_o::ChainedFixupPointerOnDisk::Arm64e::signExtendedAddend();
  if ( (v1 & 0x8000000000000000LL) != 0 )
    mach_o::ChainedFixupPointerOnDisk::Arm64e::signExtendedAddend();
  if ( (v1 & 0x4000000000000LL) != 0 )
    return HIDWORD(v1) | 0xFFFFFFFFFFFC0000LL;
  else
    return HIDWORD(v1) & 0x7FFFF;
}
