__int64 __fastcall dyld3::MachOAnalyzer::forEachObjCDuplicateClassToIgnore(dyld3::MachOFile *a1, __int64 a2)
{
  unsigned int v4; // w21
  __int64 result; // x0
  bool v6; // zf
  __int64 v7; // x20
  __int64 v8; // x22
  unsigned __int64 v9; // [xsp+8h] [xbp-38h] BYREF

  v4 = dyld3::MachOFile::pointerSize(a1);
  v9 = 0;
  result = dyld3::MachOLoaded::findSectionContent(a1, "__DATA", "__objc_dupclass", &v9, 0);
  if ( result )
  {
    if ( v9 % v4 )
      v6 = 1;
    else
      v6 = v9 == 0;
    if ( !v6 )
    {
      v7 = result;
      v8 = 0;
      do
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 16))(a2, *(_QWORD *)(v7 + v8) + 8LL);
        v8 += v4;
      }
      while ( v8 != v9 );
    }
  }
  return result;
}
