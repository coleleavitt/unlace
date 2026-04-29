unsigned __int64 __fastcall dyld3::MachOFile::mappedSize(dyld3::MachOFile *this)
{
  bool v2; // [xsp+7h] [xbp-9h] BYREF
  unsigned __int64 v3; // [xsp+8h] [xbp-8h] BYREF

  v3 = 0;
  dyld3::MachOFile::analyzeSegmentsLayout(this, &v3, &v2);
  return v3;
}
