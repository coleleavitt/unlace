void __fastcall dyld3::MachOAnalyzer::forEachObjCClass(dyld3::MachOFile *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x23
  bool v9; // zf
  __int64 v10; // x23
  bool v11; // zf
  __int64 v12; // [xsp+40h] [xbp-110h]
  __int64 v13; // [xsp+A0h] [xbp-B0h]
  __int64 v14; // [xsp+C8h] [xbp-88h] BYREF
  __int64 *v15; // [xsp+D0h] [xbp-80h]
  __int64 v16; // [xsp+D8h] [xbp-78h]
  char v17; // [xsp+E0h] [xbp-70h]

  if ( (unsigned int)dyld3::MachOFile::pointerSize(a1) == 8 )
  {
    v14 = 0;
    v15 = &v14;
    v16 = 0x2000000000LL;
    v17 = 0;
    if ( a3 )
    {
      v8 = a3 - 1;
      do
      {
        v13 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, *(_QWORD *)((char *)a1 + a2));
        dyld3::MachOAnalyzer::parseObjCClass(a1, a4, v13);
        if ( *((_BYTE *)v15 + 24) )
          v9 = 1;
        else
          v9 = v8 == 0;
        --v8;
        a2 += 8;
      }
      while ( !v9 );
    }
  }
  else
  {
    v14 = 0;
    v15 = &v14;
    v16 = 0x2000000000LL;
    v17 = 0;
    if ( a3 )
    {
      v10 = a3 - 1;
      do
      {
        v12 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, *(unsigned int *)((char *)a1 + a2));
        dyld3::MachOAnalyzer::parseObjCClass(a1, a4, v12);
        if ( *((_BYTE *)v15 + 24) )
          v11 = 1;
        else
          v11 = v10 == 0;
        --v10;
        a2 += 4;
      }
      while ( !v11 );
    }
  }
  _Block_object_dispose(&v14, 8);
}
