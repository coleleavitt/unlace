__int64 __fastcall mach_o::ChainedFixupPointerOnDisk::isRebase(
        mach_o::ChainedFixupPointerOnDisk *this,
        int a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // x0
  __int64 v8; // x8
  unsigned __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x10
  int v12; // w8

  if ( (unsigned int)(a2 - 1) <= 0xB )
  {
    switch ( a2 )
    {
      case 1:
      case 7:
      case 9:
      case 10:
      case 12:
        if ( (*(_QWORD *)this & 0x4000000000000000LL) != 0 )
          return 0;
        if ( (*(_QWORD *)this & 0x8000000000000000LL) != 0 )
        {
          v7 = (unsigned int)*(_QWORD *)this;
        }
        else
        {
          v7 = mach_o::ChainedFixupPointerOnDisk::Arm64e::unpackTarget(this);
          if ( a2 == 10 || a2 == 1 )
            v7 -= a3;
        }
        goto LABEL_19;
      case 2:
      case 6:
        v8 = *(_QWORD *)this;
        if ( (*(_QWORD *)this & 0x8000000000000000LL) != 0 )
          return 0;
        v9 = (v8 << 20) & 0xFF00000000000000LL;
        v10 = v8 & 0xFFFFFFFFFLL;
        if ( a2 == 2 )
          v11 = a3;
        else
          v11 = 0;
        v7 = v10 - v11 + v9;
        goto LABEL_19;
      case 3:
        v12 = *(_DWORD *)this;
        if ( (*(_DWORD *)this & 0x80000000) == 0 )
          goto LABEL_17;
        return 0;
      case 5:
        v12 = *(_DWORD *)this;
LABEL_17:
        v7 = (v12 & 0x3FFFFFF) - a3;
        goto LABEL_19;
      case 8:
      case 11:
        v7 = *(_QWORD *)this & 0x3FFFFFFFLL;
LABEL_19:
        *a4 = v7;
        return 1;
      default:
        break;
    }
  }
  mach_o::ChainedFixupPointerOnDisk::isRebase(this);
}
