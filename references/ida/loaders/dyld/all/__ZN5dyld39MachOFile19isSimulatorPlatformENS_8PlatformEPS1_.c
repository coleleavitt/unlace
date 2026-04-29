__int64 __fastcall dyld3::MachOFile::isSimulatorPlatform(int a1, int *a2)
{
  __int64 result; // x0
  int v4; // w8

  result = 0;
  if ( (unsigned int)(a1 - 7) <= 5 )
  {
    switch ( a1 )
    {
      case 7:
        if ( !a2 )
          return 1;
        v4 = 2;
        break;
      case 8:
        if ( !a2 )
          return 1;
        v4 = 3;
        break;
      case 9:
        if ( !a2 )
          return 1;
        v4 = 4;
        break;
      case 12:
        if ( !a2 )
          return 1;
        v4 = 11;
        break;
      default:
        return result;
    }
    *a2 = v4;
    return 1;
  }
  return result;
}
