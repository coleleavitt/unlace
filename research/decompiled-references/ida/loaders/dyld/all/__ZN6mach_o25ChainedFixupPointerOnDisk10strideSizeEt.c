__int64 __fastcall mach_o::ChainedFixupPointerOnDisk::strideSize(
        mach_o::ChainedFixupPointerOnDisk *this,
        unsigned __int16 a2)
{
  if ( (unsigned int)((_DWORD)this - 1) >= 0xC )
    mach_o::ChainedFixupPointerOnDisk::strideSize(this, a2);
  return dword_7C8D0[(__int16)((_WORD)this - 1)];
}
