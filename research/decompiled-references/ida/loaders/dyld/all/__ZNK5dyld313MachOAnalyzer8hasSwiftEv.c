bool __fastcall dyld3::MachOAnalyzer::hasSwift(dyld3::MachOAnalyzer *this)
{
  bool v2; // [xsp+Fh] [xbp-1h] BYREF

  v2 = 0;
  dyld3::MachOAnalyzer::hasSwiftOrObjC(this, &v2);
  return v2;
}
