char *__fastcall mach_o::ChainedFixupPointerOnDisk::Arm64e::keyName(
        mach_o::ChainedFixupPointerOnDisk::Arm64e *this,
        unsigned __int8 a2)
{
  if ( (unsigned int)this >= 4 )
    mach_o::ChainedFixupPointerOnDisk::Arm64e::keyName(this, a2);
  return mach_o::ChainedFixupPointerOnDisk::Kernel64::keyName(void)const::names[(unsigned int)this];
}
