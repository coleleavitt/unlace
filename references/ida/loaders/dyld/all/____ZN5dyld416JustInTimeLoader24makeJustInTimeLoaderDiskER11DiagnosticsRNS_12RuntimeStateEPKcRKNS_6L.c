void __fastcall ___ZN5dyld416JustInTimeLoader24makeJustInTimeLoaderDiskER11DiagnosticsRNS_12RuntimeStateEPKcRKNS_6Loader11LoadOptionsEbjPKN6mach_o6LayoutE_block_invoke(
        __int64 a1,
        dyld3::FatFile *a2,
        unsigned __int64 a3,
        _BOOL8 a4,
        __int64 *a5,
        __int64 a6)
{
  dyld3::MachOFile *v10; // x0
  dyld3::MachOFile *v11; // x22
  _BYTE *v12; // x8
  char v13; // w25
  bool v14; // w24
  __int64 v15; // x0
  char v16; // w8
  __int64 v17; // x9
  __int64 v18; // x10
  __int64 v19; // x13
  __int64 v20; // x14
  __int64 v21; // x15
  __int64 v22; // x8
  Diagnostics *v23; // x0
  _QWORD v24[17]; // [xsp+18h] [xbp-F8h] BYREF
  char v25; // [xsp+A4h] [xbp-6Ch]
  __int64 *v26; // [xsp+A8h] [xbp-68h]
  __int64 v27; // [xsp+B0h] [xbp-60h]
  __int64 v28; // [xsp+B8h] [xbp-58h]
  int v29; // [xsp+C0h] [xbp-50h]
  bool v30; // [xsp+C4h] [xbp-4Ch]
  char v31; // [xsp+C5h] [xbp-4Bh]
  char v32; // [xsp+C6h] [xbp-4Ah]

  v10 = dyld3::MachOFile::compatibleSlice(
          *(Diagnostics **)(a1 + 40),
          a2,
          a3,
          *(const char **)(a1 + 48),
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) + 68LL),
          a4,
          *(dyld3::GradedArchs **)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) + 144LL));
  if ( v10 )
  {
    v11 = v10;
    if ( dyld3::MachOFile::isDylib(v10) )
    {
      v12 = *(_BYTE **)(a1 + 64);
      if ( !v12[7] )
      {
        Diagnostics::error(*(Diagnostics **)(a1 + 40), "cannot load dylib '%s'");
        return;
      }
    }
    else if ( (unsigned int)dyld3::MachOFile::isBundle(v11) )
    {
      v12 = *(_BYTE **)(a1 + 64);
      if ( !v12[8] )
      {
        Diagnostics::error(*(Diagnostics **)(a1 + 40), "cannot link against bundle '%s'");
        return;
      }
    }
    else
    {
      if ( !(unsigned int)dyld3::MachOFile::isMainExecutable(v11) )
      {
        Diagnostics::error(*(Diagnostics **)(a1 + 40), "unloadable mach-o file type %d '%s'");
        return;
      }
      v12 = *(_BYTE **)(a1 + 64);
      if ( !v12[9] )
      {
        v23 = *(Diagnostics **)(a1 + 40);
        if ( v12[1] )
          Diagnostics::error(v23, "cannot link against a main executable '%s'");
        else
          Diagnostics::error(v23, "cannot dlopen a main executable '%s'");
        return;
      }
    }
    v13 = v12[4];
    if ( v12[10] )
    {
      v14 = 0;
    }
    else if ( *v12 )
    {
      v14 = 1;
    }
    else
    {
      v14 = dyld3::MachOAnalyzer::neverUnload(v11);
    }
    v15 = dyld3::MachOFile::mappedSize(v11);
    v16 = *((_BYTE *)a5 + 24);
    v17 = *a5;
    v18 = a5[2];
    v24[0] = _NSConcreteStackBlock;
    v24[1] = 0x40000000;
    v24[2] = ___ZN5dyld416JustInTimeLoader24makeJustInTimeLoaderDiskER11DiagnosticsRNS_12RuntimeStateEPKcRKNS_6Loader11LoadOptionsEbjPKN6mach_o6LayoutE_block_invoke_2;
    v24[3] = &unk_96158;
    v19 = *(_QWORD *)(a1 + 32);
    v20 = *(_QWORD *)(a1 + 56);
    v21 = *(_QWORD *)(a1 + 64);
    v24[6] = *(_QWORD *)(a1 + 40);
    v24[7] = v20;
    v24[8] = a6;
    v24[9] = v15;
    v30 = v14;
    v24[10] = v11 - a2;
    v24[11] = v17;
    v24[12] = v18;
    v25 = v16;
    v24[4] = v19;
    v24[5] = v11;
    v31 = v13;
    v32 = *(_BYTE *)(a1 + 84);
    v29 = *(_DWORD *)(a1 + 80);
    v22 = *(_QWORD *)(a1 + 72);
    v26 = a5;
    v27 = v22;
    v28 = v21;
    dyld4::JustInTimeLoader::withRegions(v11, (__int64)v24);
  }
}
