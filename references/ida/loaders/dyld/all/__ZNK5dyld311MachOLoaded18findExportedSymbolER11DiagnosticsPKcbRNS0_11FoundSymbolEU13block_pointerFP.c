__int64 __fastcall dyld3::MachOLoaded::findExportedSymbol(
        dyld3::MachOFile *a1,
        Diagnostics *a2,
        const unsigned __int8 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const char *v12; // x4
  _BOOL8 v13; // x21
  unsigned int *v14; // x8
  _DWORD *v15; // x9
  const unsigned __int8 **v16; // x27
  Diagnostics *v17; // x25
  const unsigned __int8 **v18; // x0
  const unsigned __int8 *v19; // x3
  const unsigned __int8 *v20; // x3
  char v21; // w26
  const unsigned __int8 *v22; // x3
  __int64 v23; // x8
  unsigned __int64 v25; // x0
  int v26; // w25
  const unsigned __int8 **v27; // x26
  __int64 v28; // x0
  _QWORD v29[10]; // [xsp+18h] [xbp-278h] BYREF
  char v30; // [xsp+68h] [xbp-228h]
  _QWORD v31[7]; // [xsp+70h] [xbp-220h] BYREF
  __int128 v32; // [xsp+A8h] [xbp-1E8h]
  __int128 v33; // [xsp+B8h] [xbp-1D8h]
  __int128 v34; // [xsp+C8h] [xbp-1C8h]
  __int128 v35; // [xsp+D8h] [xbp-1B8h]
  __int128 v36; // [xsp+E8h] [xbp-1A8h]
  __int128 v37; // [xsp+F8h] [xbp-198h]
  __int128 v38; // [xsp+108h] [xbp-188h]
  _QWORD v39[11]; // [xsp+118h] [xbp-178h] BYREF
  char v40; // [xsp+170h] [xbp-120h]
  __int64 v41; // [xsp+178h] [xbp-118h] BYREF
  __int64 *v42; // [xsp+180h] [xbp-110h]
  __int64 v43; // [xsp+188h] [xbp-108h]
  char v44; // [xsp+190h] [xbp-100h]
  const unsigned __int8 **v45; // [xsp+198h] [xbp-F8h] BYREF
  const unsigned __int8 ***v46; // [xsp+1A0h] [xbp-F0h]
  __int64 v47; // [xsp+1A8h] [xbp-E8h]
  int v48; // [xsp+1B0h] [xbp-E0h]
  _OWORD v49[5]; // [xsp+1B8h] [xbp-D8h] BYREF
  __int128 v50; // [xsp+208h] [xbp-88h]
  __int128 v51; // [xsp+218h] [xbp-78h]

  dyld3::MachOLoaded::getLinkEditPointers((__int64)a1, a2, (__int64)v49);
  if ( Diagnostics::hasError(a2) )
    return 0;
  if ( *((_QWORD *)&v49[0] + 1) )
  {
    v14 = (unsigned int *)(*((_QWORD *)&v49[0] + 1) + 12LL);
    v15 = (_DWORD *)(*((_QWORD *)&v49[0] + 1) + 8LL);
    if ( !a1 )
    {
LABEL_18:
      *(_QWORD *)(a5 + 8) = 0;
      v31[0] = _NSConcreteStackBlock;
      v31[1] = 0x40000000;
      v35 = v49[3];
      v36 = v49[4];
      v37 = v50;
      v38 = v51;
      v32 = v49[0];
      v33 = v49[1];
      v31[2] = ___ZNK5dyld311MachOLoaded18findExportedSymbolER11DiagnosticsPKcbRNS0_11FoundSymbolEU13block_pointerFPKS0_S8_jE_block_invoke_2;
      v31[3] = &__block_descriptor_tmp_43_0;
      v31[4] = a1;
      v31[5] = a3;
      v31[6] = a5;
      v34 = v49[2];
      dyld3::MachOLoaded::forEachGlobalSymbol(a1, a2, (__int64)v31);
      v23 = *(_QWORD *)(a5 + 8);
      if ( !v23 )
      {
        v45 = nullptr;
        v46 = &v45;
        v47 = 0x2000000000LL;
        v48 = 0;
        v29[0] = _NSConcreteStackBlock;
        v29[1] = 0x40000000;
        v29[2] = ___ZNK5dyld311MachOLoaded18findExportedSymbolER11DiagnosticsPKcbRNS0_11FoundSymbolEU13block_pointerFPKS0_S8_jE_block_invoke_3;
        v29[3] = &unk_97A30;
        v29[4] = a6;
        v29[5] = &v45;
        v29[6] = a1;
        v29[7] = a2;
        v30 = a4;
        v29[8] = a3;
        v29[9] = a5;
        dyld3::MachOFile::forEachDependentDylib(a1, (__int64)v29);
        _Block_object_dispose(&v45, 8);
        v23 = *(_QWORD *)(a5 + 8);
      }
      return v23 != 0;
    }
  }
  else
  {
    if ( !*(_QWORD *)&v49[0] )
      goto LABEL_18;
    v14 = (unsigned int *)(*(_QWORD *)&v49[0] + 44LL);
    v15 = (_DWORD *)(*(_QWORD *)&v49[0] + 40LL);
    if ( !a1 )
      goto LABEL_18;
  }
  v16 = (const unsigned __int8 **)((char *)a1 + *((_QWORD *)&v50 + 1) - v50 + (unsigned int)(*v15 - v51));
  v17 = (Diagnostics *)((char *)v16 + *v14);
  v18 = dyld3::MachOFile::trieWalk(a2, v16, v17, a3, v12);
  if ( !v18 )
  {
    v45 = nullptr;
    v46 = &v45;
    v47 = 0x2000000000LL;
    v48 = 0;
    v41 = 0;
    v42 = &v41;
    v43 = 0x2000000000LL;
    v44 = 0;
    v39[0] = _NSConcreteStackBlock;
    v39[1] = 0x40000000;
    v39[2] = ___ZNK5dyld311MachOLoaded18findExportedSymbolER11DiagnosticsPKcbRNS0_11FoundSymbolEU13block_pointerFPKS0_S8_jE_block_invoke;
    v39[3] = &unk_979E8;
    v39[4] = a6;
    v39[5] = &v45;
    v39[8] = a2;
    v39[9] = a3;
    v40 = a4;
    v39[10] = a5;
    v39[6] = &v41;
    v39[7] = a1;
    dyld3::MachOFile::forEachDependentDylib(a1, (__int64)v39);
    v13 = *((_BYTE *)v42 + 24) != 0;
    _Block_object_dispose(&v41, 8);
    _Block_object_dispose(&v45, 8);
    return v13;
  }
  v45 = v18;
  v21 = dyld3::MachOFile::read_uleb128(a2, &v45, (const unsigned __int8 **)v17, v19);
  if ( (v21 & 8) != 0 )
  {
    if ( a6 )
    {
      v25 = dyld3::MachOFile::read_uleb128(a2, &v45, (const unsigned __int8 **)v17, v20);
      v26 = v25;
      if ( *(_BYTE *)v45 )
        v27 = v45;
      else
        v27 = (const unsigned __int8 **)a3;
      if ( v25 && v25 <= (unsigned int)dyld3::MachOFile::dependentDylibCount(a1, nullptr) )
      {
        v28 = (*(__int64 (__fastcall **)(__int64, dyld3::MachOFile *, _QWORD))(a6 + 16))(
                a6,
                a1,
                (unsigned int)(v26 - 1));
        if ( v28 )
          return dyld3::MachOLoaded::findExportedSymbol(v28, a2, v27, a4, a5, a6);
        if ( (a4 & 1) == 0 )
          Diagnostics::error(a2, "dependent dylib %lld not found for re-exported symbol %s");
      }
      else
      {
        Diagnostics::error(a2, "re-export ordinal %lld out of range for %s");
      }
    }
    return 0;
  }
  *(_DWORD *)a5 = 0;
  *(_WORD *)(a5 + 4) = 0;
  *(_QWORD *)(a5 + 8) = a1;
  *(_QWORD *)(a5 + 16) = dyld3::MachOFile::read_uleb128(a2, &v45, (const unsigned __int8 **)v17, v20);
  *(_DWORD *)(a5 + 24) = 0;
  *(_QWORD *)(a5 + 32) = a3;
  v13 = 0;
  if ( Diagnostics::hasError(a2) )
    return v13;
  if ( (v21 & 3) == 2 )
  {
    v13 = 1;
    *(_DWORD *)a5 = 1;
    return v13;
  }
  if ( (v21 & 3) == 1 )
  {
    v13 = 1;
    *(_BYTE *)(a5 + 4) = 1;
    return v13;
  }
  if ( (v21 & 3) != 0 )
  {
    Diagnostics::error(a2, "unsupported exported symbol kind. flags=%llu at node offset=0x%0lX");
    return 0;
  }
  *(_DWORD *)a5 = 0;
  if ( (v21 & 0x10) != 0 )
    *(_DWORD *)(a5 + 24) = dyld3::MachOFile::read_uleb128(a2, &v45, (const unsigned __int8 **)v17, v22);
  v13 = 1;
  if ( (v21 & 4) != 0 )
    *(_BYTE *)(a5 + 5) = 1;
  return v13;
}
