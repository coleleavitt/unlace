mach_o::ChainedFixupPointerOnDisk::Arm64e *__fastcall mach_o::ChainedFixupPointerOnDisk::Arm64e::signPointer(
        mach_o::ChainedFixupPointerOnDisk::Arm64e *this,
        void *a2,
        mach_o::ChainedFixupPointerOnDisk::Arm64e *a3)
{
  mach_o::ChainedFixupPointerOnDisk::Arm64e *v3; // x17
  __int64 v4; // x4
  mach_o::ChainedFixupPointerOnDisk::Arm64e *result; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( (*(_QWORD *)this & 0x8000000000000000LL) == 0 )
    mach_o::ChainedFixupPointerOnDisk::Arm64e::signPointer();
  v4 = (*(_QWORD *)this >> 49) & 3LL;
  result = a3;
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  if ( a3 )
  {
    switch ( (int)v4 )
    {
      case 0:
        v3 = a3;
        break;
      case 1:
        v3 = a3;
        break;
      case 2:
        v3 = a3;
        break;
      case 3:
        v3 = a3;
        break;
    }
    return v3;
  }
  return result;
}
