dyld3::FatFile *__fastcall dyld3::MachOFile::compatibleSlice(
        Diagnostics *a1,
        dyld3::FatFile *this,
        unsigned __int64 a3,
        const char *a4,
        __int64 a5,
        _BOOL8 a6,
        dyld3::GradedArchs *a7)
{
  dyld3::FatFile *v12; // x20
  __int64 v14; // x8
  int v15; // w11
  __int64 i; // x9
  __int64 v18; // x10
  const char *v19; // x8
  __int64 v20; // x11
  const char *v21; // x10
  _QWORD v22[5]; // [xsp+18h] [xbp-288h] BYREF
  bool v23; // [xsp+47h] [xbp-259h] BYREF
  unsigned __int64 v24; // [xsp+48h] [xbp-258h] BYREF
  unsigned __int64 v25; // [xsp+50h] [xbp-250h] BYREF
  char v26[8]; // [xsp+58h] [xbp-248h] BYREF
  __int64 v27; // [xsp+60h] [xbp-240h]
  __int64 (__fastcall *v28)(int, char *); // [xsp+68h] [xbp-238h]
  void *v29; // [xsp+70h] [xbp-230h]
  __int64 *v30; // [xsp+78h] [xbp-228h]
  __int64 v31; // [xsp+158h] [xbp-148h] BYREF
  __int64 *v32; // [xsp+160h] [xbp-140h]
  __int64 v33; // [xsp+168h] [xbp-138h]
  int v34; // [xsp+170h] [xbp-130h]

  v12 = this;
  if ( (*(_DWORD *)this | 0x1000000) == 0xBFBAFECA )
  {
    v24 = 0;
    v25 = 0;
    if ( !(unsigned int)dyld3::FatFile::isFatFileWithSlice(this, a1, a3, a7, a6, &v25, &v24, &v23) )
    {
      LOBYTE(v31) = 0;
      *(_QWORD *)v26 = _NSConcreteStackBlock;
      v27 = 0x40000000;
      v28 = ___ZN5dyld3L12getArchNamesERKNS_11GradedArchsEbPc_block_invoke;
      v29 = &__block_descriptor_tmp_194;
      v30 = &v31;
      dyld3::GradedArchs::forEachArch(a7, a6, v26);
      dyld3::FatFile::archNames(v12, v26, a3);
      Diagnostics::error(a1, "fat file, but missing compatible architecture (have '%s', need '%s')");
      return nullptr;
    }
    v12 = (dyld3::FatFile *)((char *)v12 + v25);
  }
  if ( *(_DWORD *)v12 >> 1 == 2138504551 && dyld3::MachOFile::isMachO(v12, a1, a3) )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = *(_DWORD *)((char *)a7 + v14);
      if ( !v15 )
        goto LABEL_13;
      if ( v15 == *((_DWORD *)v12 + 1)
        && *(_DWORD *)((char *)a7 + v14 + 4) == (*((_DWORD *)v12 + 2) & 0xFFFFFF)
        && (!*((_BYTE *)a7 + v14 + 8) || a6) )
      {
        break;
      }
      v14 += 12;
      if ( v14 == 48 )
        goto LABEL_13;
    }
    if ( !*(_WORD *)((char *)a7 + v14 + 10) )
    {
LABEL_13:
      LOBYTE(v31) = 0;
      *(_QWORD *)v26 = _NSConcreteStackBlock;
      v27 = 0x40000000;
      v28 = ___ZN5dyld3L12getArchNamesERKNS_11GradedArchsEbPc_block_invoke;
      v29 = &__block_descriptor_tmp_194;
      v30 = &v31;
      dyld3::GradedArchs::forEachArch(a7, a6, v26);
      for ( i = 0; i != 26; i += 2 )
      {
        if ( LODWORD((&dyld3::MachOFile::_s_archInfos)[i + 1]) == *((_DWORD *)v12 + 1)
          && (*((_DWORD *)v12 + 2) & 0xFFFFFF) == *((_DWORD *)&dyld3::MachOFile::_s_archInfos + 2 * i + 3) )
        {
          break;
        }
      }
      Diagnostics::error(a1, "mach-o file, but is an incompatible architecture (have '%s', need '%s')");
      return nullptr;
    }
    if ( (dyld3::MachOFile::loadableIntoProcess(v12, a5, a4) & 1) != 0 )
      return v12;
    v31 = 0;
    v32 = &v31;
    v33 = 0x2000000000LL;
    v34 = 0;
    v22[0] = _NSConcreteStackBlock;
    v22[1] = 0x40000000;
    v22[2] = ___ZN5dyld39MachOFile15compatibleSliceER11DiagnosticsPKvmPKcNS_8PlatformEbRKNS_11GradedArchsE_block_invoke;
    v22[3] = &unk_97558;
    v22[4] = &v31;
    dyld3::MachOFile::forEachSupportedPlatform(v12, v22);
    v18 = 0;
    v19 = "unknown";
    while ( LODWORD((&dyld3::MachOFile::_s_platformInfos)[v18 + 1]) != *((_DWORD *)v32 + 6) )
    {
      v18 += 2;
      if ( v18 == 20 )
        goto LABEL_31;
    }
    v19 = (&dyld3::MachOFile::_s_platformInfos)[v18];
LABEL_31:
    v20 = 0;
    v21 = "unknown";
    while ( LODWORD((&dyld3::MachOFile::_s_platformInfos)[v20 + 1]) != (_DWORD)a5 )
    {
      v20 += 2;
      if ( v20 == 20 )
        goto LABEL_36;
    }
    v21 = (&dyld3::MachOFile::_s_platformInfos)[v20];
LABEL_36:
    Diagnostics::error(a1, "mach-o file (%s), but incompatible platform (have '%s', need '%s')", a4, v19, v21);
    _Block_object_dispose(&v31, 8);
  }
  else if ( Diagnostics::noError(a1) )
  {
    Diagnostics::error(a1, "not a mach-o file");
  }
  return nullptr;
}
