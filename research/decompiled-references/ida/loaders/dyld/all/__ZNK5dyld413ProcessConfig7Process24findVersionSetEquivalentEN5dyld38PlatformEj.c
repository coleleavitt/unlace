__int64 __fastcall dyld4::ProcessConfig::Process::findVersionSetEquivalent(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // x22
  unsigned int v6; // w21
  unsigned int v7; // w24
  unsigned int *v8; // x25
  int v9; // w0
  unsigned int *v10; // x8
  unsigned int v11; // w8
  bool v12; // zf

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = (unsigned int *)&dyld3::sVersionMap;
  while ( 1 )
  {
    v9 = dyld3::MachOFile::basePlatform(a2);
    if ( (unsigned int)(v9 - 1) > 4 )
    {
      v11 = -1;
    }
    else
    {
      switch ( v9 )
      {
        case 1:
          v10 = v8 + 3;
          break;
        case 2:
          v10 = v8 + 2;
          break;
        case 3:
          v10 = v8 + 4;
          break;
        case 4:
          v10 = v8 + 5;
          break;
        case 5:
          v10 = (unsigned int *)((char *)&dyld3::sVersionMap + v5 + 4);
          break;
      }
      v11 = *v10;
    }
    if ( v11 > a3 )
      break;
    v6 = *(_DWORD *)((char *)&dyld3::sVersionMap + v5);
    v8 += 6;
    v5 += 24;
    v7 = v11;
    if ( v5 == 864 )
    {
      v7 = v11;
      break;
    }
  }
  if ( v7 )
    v12 = 0;
  else
    v12 = v11 == -1;
  if ( v12 )
    return 0xFFFFFFFFLL;
  else
    return v6;
}
