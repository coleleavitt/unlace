unsigned __int64 __fastcall dyld4::APIs::mapFromVersionSet(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x8
  __int64 v4; // x20
  int v6; // w0

  v2 = HIDWORD(a2);
  if ( (_DWORD)a2 == -1 )
  {
    v4 = 20;
    while ( *(_DWORD *)((char *)&dyld3::sVersionMap + v4 - 20) < HIDWORD(a2) )
    {
      v4 += 24;
      if ( v4 == 884 )
      {
        LODWORD(a2) = 0;
LABEL_6:
        LODWORD(v2) = 0;
        return (unsigned int)a2 | ((unsigned __int64)(unsigned int)v2 << 32);
      }
    }
    v6 = dyld3::MachOFile::basePlatform(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL));
    if ( (unsigned int)(v6 - 1) > 4 )
    {
      LODWORD(a2) = dyld3::MachOFile::basePlatform(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL));
      goto LABEL_6;
    }
    switch ( v6 )
    {
      case 1:
        LODWORD(v2) = *(_DWORD *)((char *)&dyld3::sVersionMap + v4 - 8);
        LODWORD(a2) = 1;
        break;
      case 2:
        LODWORD(v2) = *(_DWORD *)((char *)&dyld3::sVersionMap + v4 - 12);
        LODWORD(a2) = 2;
        break;
      case 3:
        LODWORD(v2) = *(_DWORD *)((char *)&dyld3::sVersionMap + v4 - 4);
        LODWORD(a2) = 3;
        break;
      case 4:
        LODWORD(v2) = *(_DWORD *)((char *)&dyld3::sVersionMap + v4);
        LODWORD(a2) = 4;
        break;
      case 5:
        LODWORD(v2) = *(_DWORD *)((char *)&dyld3::sVersionMap + v4 - 16);
        LODWORD(a2) = 5;
        break;
    }
  }
  return (unsigned int)a2 | ((unsigned __int64)(unsigned int)v2 << 32);
}
