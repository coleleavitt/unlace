__int64 __fastcall dyld3::MachOFile::walkChain(
        Diagnostics *a1,
        unsigned int *a2,
        mach_o::ChainedFixupPointerOnDisk *this,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  int v9; // w20
  unsigned int *v10; // x24
  int v12; // w25
  unsigned int v13; // w19
  unsigned int v14; // w28
  int v16; // w8
  int v17; // w8
  __int64 v18; // x8
  int v19; // w8
  unsigned int v20; // w8
  char v21; // [xsp+1Fh] [xbp-51h] BYREF

  v9 = (int)this;
  v10 = a2;
  v12 = mach_o::ChainedFixupPointerOnDisk::strideSize(this, (unsigned __int16)a2);
  v21 = 0;
  v14 = *v10;
  v13 = v10[1];
  (*(void (__fastcall **)(__int64, unsigned int *, char *))(a6 + 16))(a6, v10, &v21);
  if ( v21 )
    return 1;
  while ( 2 )
  {
    if ( (unsigned int)(v9 - 1) > 0xB )
    {
LABEL_22:
      Diagnostics::error(a1, "unknown pointer format 0x%04X", v9);
      return 1;
    }
    switch ( v9 )
    {
      case 1:
      case 7:
      case 9:
      case 10:
      case 12:
        v16 = (v13 >> 19) & 0x7FF;
        if ( !v16 )
          return 0;
        goto LABEL_10;
      case 2:
      case 6:
        v17 = (v13 >> 19) & 0xFFF;
        if ( !v17 )
          return 0;
        v18 = (unsigned int)(4 * v17);
        goto LABEL_11;
      case 3:
        v19 = (v14 >> 26) & 0x1F;
        if ( !v19 )
          return 0;
        v10 = (unsigned int *)((char *)v10 + (unsigned int)(4 * v19));
        if ( (a4 & 1) == 0 )
        {
          while ( 1 )
          {
            v20 = *v10;
            if ( (*v10 & 0x80000000) != 0 || (v20 & 0x3FFFFFF) <= a5 )
              break;
            v10 = (unsigned int *)((char *)v10 + (HIBYTE(v20) & 0x7C));
          }
        }
        goto LABEL_12;
      case 5:
        if ( !(v14 >> 26) )
          return 0;
        v18 = HIBYTE(v14) & 0xFC;
        goto LABEL_11;
      case 8:
      case 11:
        v16 = (v13 >> 19) & 0xFFF;
        if ( v16 )
        {
LABEL_10:
          v18 = (unsigned int)(v16 * v12);
LABEL_11:
          v10 = (unsigned int *)((char *)v10 + v18);
LABEL_12:
          v14 = *v10;
          v13 = v10[1];
          (*(void (__fastcall **)(__int64, unsigned int *, char *))(a6 + 16))(a6, v10, &v21);
          if ( v21 )
            return 1;
          continue;
        }
        return 0;
      default:
        goto LABEL_22;
    }
  }
}
