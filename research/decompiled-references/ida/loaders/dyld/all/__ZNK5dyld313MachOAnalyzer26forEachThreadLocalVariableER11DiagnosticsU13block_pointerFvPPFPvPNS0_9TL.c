__int64 __fastcall dyld3::MachOAnalyzer::forEachThreadLocalVariable(dyld3::MachOFile *a1)
{
  __int64 v2; // x20
  __int64 v4; // [xsp+48h] [xbp-58h] BYREF
  __int64 *v5; // [xsp+50h] [xbp-50h]
  __int64 v6; // [xsp+58h] [xbp-48h]
  __int64 (__fastcall *v7)(); // [xsp+60h] [xbp-40h]
  __int64 (__fastcall *v8)(); // [xsp+68h] [xbp-38h]
  __int64 v9; // [xsp+70h] [xbp-30h]
  __int64 v10; // [xsp+78h] [xbp-28h]

  v4 = 0;
  v5 = &v4;
  v6 = 0x3802000000LL;
  v7 = __Block_byref_object_copy__269;
  v9 = 0;
  v10 = 0;
  v8 = __Block_byref_object_dispose__270;
  if ( (unsigned int)dyld3::MachOFile::hasThreadLocalVariables(a1) )
  {
    dyld3::MachOFile::preferredLoadAddress(a1);
    dyld3::MachOFile::forEachSection((int)a1);
  }
  v2 = v5[5];
  _Block_object_dispose(&v4, 8);
  return v2;
}
