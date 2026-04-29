__int64 __fastcall mach_o::ChainedFixupPointerOnDisk::isBind(
        mach_o::ChainedFixupPointerOnDisk *this,
        int a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // x8
  __int64 v6; // x8
  int v7; // w9
  unsigned __int64 v8; // x0

  *a4 = 0;
  if ( (unsigned int)(a2 - 1) > 0xB )
LABEL_17:
    mach_o::ChainedFixupPointerOnDisk::isBind(this);
  v5 = 0;
  switch ( a2 )
  {
    case 1:
    case 7:
    case 9:
    case 10:
    case 12:
      v6 = *(_QWORD *)this;
      if ( (*(_QWORD *)this & 0x4000000000000000LL) == 0 )
        return 0;
      if ( a2 == 12 )
        v7 = 0xFFFFFF;
      else
        v7 = 0xFFFF;
      *a3 = v7 & v6;
      if ( v6 < 0 )
        return 1;
      v8 = mach_o::ChainedFixupPointerOnDisk::Arm64e::signExtendedAddend(this);
      goto LABEL_14;
    case 2:
    case 6:
      if ( (*(_QWORD *)this & 0x8000000000000000LL) == 0 )
        return 0;
      *a3 = *(_QWORD *)this & 0xFFFFFF;
      v8 = *((unsigned __int8 *)this + 3);
      goto LABEL_14;
    case 3:
      if ( (*(_DWORD *)this & 0x80000000) == 0 )
        return 0;
      *a3 = *(_DWORD *)this & 0xFFFFF;
      v8 = ((unsigned __int64)*(unsigned int *)this >> 20) & 0x3F;
LABEL_14:
      *a4 = v8;
      return 1;
    case 8:
    case 11:
      return v5;
    default:
      goto LABEL_17;
  }
}
