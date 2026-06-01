char *__fastcall dyld3::MachOFile::installName(dyld3::MachOFile *this)
{
  unsigned int v2[2]; // [xsp+0h] [xbp-10h] BYREF
  char *v3; // [xsp+8h] [xbp-8h] BYREF

  *(_QWORD *)v2 = 0;
  v3 = nullptr;
  if ( (unsigned int)dyld3::MachOFile::getDylibInstallName(this, (const char **)&v3, &v2[1], v2) )
    return v3;
  else
    return nullptr;
}
