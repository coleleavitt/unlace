__int64 __fastcall dyld4::Loader::hasExportedSymbol(
        dyld4::Loader *a1,
        dyld3::MachOFile *a2,
        dyld4::RuntimeState *a3,
        const unsigned __int8 *a4,
        __int64 a5,
        dyld4::Loader **a6,
        __int64 a7)
{
  __int64 v14; // x9
  dyld4::Loader **v15; // x8
  __int64 v16; // x9
  int v17; // w28
  char v18; // w19
  __int64 v19; // x26
  __int64 Address; // x27
  int ExportsTrie; // w0
  const char *v22; // x4
  Diagnostics *v23; // x1
  unsigned __int8 *v24; // x27
  const unsigned __int8 **v25; // x0
  const unsigned __int8 *v26; // x3
  __int64 v27; // x0
  int v28; // w19
  __int64 v29; // x25
  __int64 v30; // x27
  __int64 v31; // x0
  _BOOL4 v32; // w8
  const unsigned __int8 *v33; // x3
  char v34; // w26
  const unsigned __int8 *v35; // x3
  dyld4::Loader **v36; // x22
  int v37; // w8
  dyld3::MachOFile *v38; // x0
  __int64 v39; // x0
  unsigned __int64 v40; // x27
  const unsigned __int8 **v41; // x26
  _BOOL4 v42; // w19
  const char *v43; // x0
  __int64 v45; // x0
  __int64 v46; // x23
  __int64 v47; // x4
  __int64 v48; // x8
  dyld4::Loader **v49; // x9
  __int64 v50; // x4
  __int64 v51; // [xsp+20h] [xbp-100h] BYREF
  dyld4::Loader **v52; // [xsp+28h] [xbp-F8h]
  _QWORD v53[10]; // [xsp+30h] [xbp-F0h] BYREF
  dyld4::Loader *v54; // [xsp+80h] [xbp-A0h] BYREF
  dyld4::Loader **v55; // [xsp+88h] [xbp-98h]
  __int64 v56; // [xsp+90h] [xbp-90h]
  char v57; // [xsp+98h] [xbp-88h]
  char v58; // [xsp+A7h] [xbp-79h] BYREF
  const unsigned __int8 **v59; // [xsp+A8h] [xbp-78h] BYREF
  unsigned int v60; // [xsp+B4h] [xbp-6Ch] BYREF
  unsigned __int64 v61; // [xsp+B8h] [xbp-68h] BYREF

  if ( a7 )
  {
    v14 = *(_QWORD *)(a7 + 16);
    if ( v14 )
    {
      v15 = *(dyld4::Loader ***)a7;
      v16 = 8 * v14;
      while ( *v15 != a1 )
      {
        ++v15;
        v16 -= 8;
        if ( !v16 )
          goto LABEL_6;
      }
      return 0;
    }
LABEL_6:
    v54 = a1;
    dyld3::Array<dyld4::Loader const*>::push_back(a7, &v54);
  }
  v52 = a6;
  if ( (unsigned int)a5 > 3 )
  {
    HIDWORD(v51) = 0;
    v17 = 0;
    v19 = 0;
LABEL_13:
    v18 = 1;
  }
  else
  {
    switch ( (int)a5 )
    {
      case 0:
        v17 = 0;
        v18 = 0;
        HIDWORD(v51) = 1;
        break;
      case 1:
        HIDWORD(v51) = 0;
        v17 = 0;
        v18 = 0;
        break;
      case 2:
        v19 = 3;
        HIDWORD(v51) = 1;
        v17 = 1;
        goto LABEL_13;
      case 3:
        v18 = 0;
        HIDWORD(v51) = 1;
        v17 = 1;
        break;
    }
    v19 = a5;
  }
  Address = dyld4::Loader::loadAddress(a1, a3);
  v61 = 0;
  v60 = 0;
  ExportsTrie = dyld4::Loader::getExportsTrie(a1, &v61, &v60);
  v23 = (Diagnostics *)(Address + v61);
  if ( ExportsTrie )
    v24 = (unsigned __int8 *)v23 + v60;
  else
    v24 = nullptr;
  if ( !ExportsTrie )
  {
    v27 = dyld4::Loader::mf(a1, a3);
    v54 = nullptr;
    v55 = &v54;
    v56 = 0x2000000000LL;
    v57 = 0;
    v53[0] = _NSConcreteStackBlock;
    v53[1] = 0x40000000;
    v53[2] = ___ZNK5dyld46Loader17hasExportedSymbolER11DiagnosticsRNS_12RuntimeStateEPKcNS0_18ExportedSymbolModeEPNS0_14ResolvedSymbolEPN5dyld35ArrayIPKS0_EE_block_invoke;
    v53[3] = &unk_95DA8;
    v53[6] = a2;
    v53[7] = a4;
    v53[8] = v52;
    v53[9] = v27;
    v53[4] = &v54;
    v53[5] = a1;
    dyld4::Loader::withLayout(a1, a2, a3, v53);
    v28 = *((unsigned __int8 *)v55 + 24);
    v29 = *((_BYTE *)v55 + 24) != 0;
    _Block_object_dispose(&v54, 8);
    if ( v28 || ((HIDWORD(v51) ^ 1) & 1) != 0 )
      return v29;
    goto LABEL_25;
  }
  v25 = (const unsigned __int8 **)dyld3::MachOFile::trieWalk(a2, v23, v24, a4, v22);
  if ( !(v18 & 1 | (v25 == nullptr)) )
  {
    v59 = v25;
    v34 = dyld3::MachOFile::read_uleb128(a2, &v59, (const unsigned __int8 **)v24, v26);
    if ( (v34 & 8) == 0 )
    {
      if ( !Diagnostics::hasError(a2) )
      {
        v36 = v52;
        *v52 = a1;
        v36[1] = (dyld4::Loader *)a4;
        v36[2] = (dyld4::Loader *)dyld3::MachOFile::read_uleb128(a2, &v59, (const unsigned __int8 **)v24, v35);
        v29 = 1;
        if ( (v34 & 3) == 2 )
          v37 = 2;
        else
          v37 = 1;
        *((_DWORD *)v36 + 6) = v37;
        v38 = (dyld3::MachOFile *)dyld4::Loader::mf(a1, a3);
        *((_BYTE *)v36 + 28) = dyld3::MachOFile::inCodeSection(v38, *((_DWORD *)v36 + 4));
        *((_BYTE *)v36 + 29) = (v34 & 4) != 0;
        *((_BYTE *)v36 + 30) = 0;
        return v29;
      }
      return 0;
    }
    v39 = dyld3::MachOFile::read_uleb128(a2, &v59, (const unsigned __int8 **)v24, v33);
    v40 = v39;
    v41 = v59;
    if ( *(_BYTE *)v59 )
    {
      v42 = _platform_strcmp((const char *)v59, (const char *)a4) != 0;
      if ( !v40 )
        goto LABEL_46;
    }
    else
    {
      v42 = 0;
      v41 = (const unsigned __int8 **)a4;
      if ( !v39 )
      {
LABEL_46:
        v43 = (const char *)dyld4::Loader::path(a1);
        Diagnostics::error(a2, "re-export ordinal %lld in %s out of range for %s", v40, v43, (const char *)a4);
        return 0;
      }
    }
    if ( v40 <= (unsigned int)dyld4::Loader::dependentCount(a1) )
    {
      v58 = 0;
      v45 = dyld4::Loader::dependent(a1, a3, (unsigned int)(v40 - 1), &v58);
      v46 = v45;
      if ( v45 )
      {
        if ( (_DWORD)a5 == 1 && v42 )
          v47 = 0;
        else
          v47 = (unsigned int)a5;
        if ( a7 == 0 || !v42 )
        {
          LOBYTE(v45) = dyld4::Loader::hasExportedSymbol(v45, a2, a3, v41, v47, v52, a7);
        }
        else
        {
          __chkstk_darwin();
          v49 = *((dyld4::Loader ***)a3 + 6);
          v54 = (dyld4::Loader *)((char *)&v51 - ((v48 + 23) & 0xFFFFFFFFFFFFFFF0LL));
          v55 = v49;
          v56 = 0;
          LOBYTE(v45) = dyld4::Loader::hasExportedSymbol(v46, a2, a3, v41, v50, v52, &v54);
        }
      }
      return (v46 != 0) & (unsigned __int8)v45;
    }
    goto LABEL_46;
  }
  if ( !HIDWORD(v51) )
    return 0;
LABEL_25:
  v29 = dyld4::Loader::dependentCount(a1);
  if ( (_DWORD)v29 )
  {
    v30 = 0;
    while ( 1 )
    {
      LOBYTE(v54) = 0;
      v31 = dyld4::Loader::dependent(a1, a3, v30, &v54);
      if ( v31 )
      {
        v32 = (unsigned __int8)v54 != 3;
        if ( !v17 )
          v32 = (unsigned __int8)v54 == 2;
        if ( v32 && (unsigned int)dyld4::Loader::hasExportedSymbol(v31, a2, a3, a4, v19, v52, a7) )
          break;
      }
      v30 = (unsigned int)(v30 + 1);
      if ( (_DWORD)v29 == (_DWORD)v30 )
        return 0;
    }
    return 1;
  }
  return v29;
}
