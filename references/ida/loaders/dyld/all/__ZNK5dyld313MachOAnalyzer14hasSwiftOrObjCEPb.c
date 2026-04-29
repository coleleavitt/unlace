__int64 __fastcall dyld3::MachOAnalyzer::hasSwiftOrObjC(dyld3::MachOAnalyzer *this, bool *a2)
{
  int v2; // w19
  __int64 v3; // x19
  __int64 v5; // [xsp+40h] [xbp-30h] BYREF
  __int64 *v6; // [xsp+48h] [xbp-28h]
  __int64 v7; // [xsp+50h] [xbp-20h]
  char v8; // [xsp+58h] [xbp-18h]

  v2 = (int)this;
  if ( a2 )
    *a2 = 0;
  v5 = 0;
  v6 = &v5;
  v7 = 0x2000000000LL;
  v8 = 0;
  dyld3::MachOLoaded::getSlide(this);
  dyld3::MachOFile::forEachSection(v2);
  v3 = *((unsigned __int8 *)v6 + 24);
  _Block_object_dispose(&v5, 8);
  return v3;
}
