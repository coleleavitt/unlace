unsigned __int64 __fastcall mach_o::ChainedFixupPointerOnDisk::Generic64::unpackedTarget(
        mach_o::ChainedFixupPointerOnDisk::Generic64 *this)
{
  return *(_QWORD *)this & 0xFFFFFFFFFLL | ((unsigned __int64)(unsigned __int8)(*(_QWORD *)this >> 36) << 56);
}
