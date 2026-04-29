unsigned __int64 __fastcall mach_o::ChainedFixupPointerOnDisk::Arm64e::unpackTarget(
        mach_o::ChainedFixupPointerOnDisk::Arm64e *this)
{
  unsigned __int64 v1; // x8

  v1 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 0x4000000000000000LL) != 0 )
    mach_o::ChainedFixupPointerOnDisk::Arm64e::unpackTarget();
  if ( (v1 & 0x8000000000000000LL) != 0 )
    mach_o::ChainedFixupPointerOnDisk::Arm64e::unpackTarget();
  return v1 & 0x7FFFFFFFFFFLL | ((unsigned __int64)(unsigned __int8)(v1 >> 43) << 56);
}
