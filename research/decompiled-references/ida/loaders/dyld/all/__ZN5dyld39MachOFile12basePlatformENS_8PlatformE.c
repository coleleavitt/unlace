__int64 __fastcall dyld3::MachOFile::basePlatform(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0xB )
    return 0;
  else
    return dword_7C8A0[a1 - 1];
}
