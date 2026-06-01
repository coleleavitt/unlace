void __fastcall dyld4::JustInTimeLoader::loadDependents(
        __int64 a1,
        Diagnostics *a2,
        dyld4::RuntimeState *a3,
        __int64 a4)
{
  dyld3::MachOFile *v8; // x0
  __int128 v9; // q0
  __int64 v10; // x8
  __int64 *v11; // x8
  unsigned __int64 v12; // x9
  int v13; // w10
  __int64 v14; // x16
  unsigned __int16 v15; // w2
  __int64 v16; // x0
  __int128 v17; // [xsp+0h] [xbp-C0h] BYREF
  _QWORD *v18; // [xsp+10h] [xbp-B0h]
  __int64 v19; // [xsp+18h] [xbp-A8h]
  __int64 v20; // [xsp+20h] [xbp-A0h]
  _QWORD v21[2]; // [xsp+28h] [xbp-98h] BYREF
  _QWORD v22[9]; // [xsp+38h] [xbp-88h] BYREF
  __int64 v23; // [xsp+80h] [xbp-40h] BYREF
  __int64 *v24; // [xsp+88h] [xbp-38h]
  __int64 v25; // [xsp+90h] [xbp-30h]
  int v26; // [xsp+98h] [xbp-28h]

  if ( (*(_BYTE *)(a1 + 18) & 1) == 0 )
  {
    v23 = 0;
    v24 = &v23;
    v25 = 0x2000000000LL;
    v26 = 0;
    v8 = *(dyld3::MachOFile **)(a1 + 8);
    v22[0] = _NSConcreteStackBlock;
    v22[1] = 0x40000000;
    v22[2] = ___ZN5dyld416JustInTimeLoader14loadDependentsER11DiagnosticsRNS_12RuntimeStateERKNS_6Loader11LoadOptionsE_block_invoke;
    v22[3] = &unk_95F70;
    v22[4] = &v23;
    v22[5] = a1;
    v22[6] = a3;
    v22[7] = a4;
    v22[8] = a2;
    dyld3::MachOFile::forEachDependentDylib(v8, (__int64)v22);
    *(_QWORD *)(a1 + 16) |= 0x10000uLL;
    if ( !Diagnostics::hasError(a2) )
    {
      v21[0] = *(_QWORD *)(a4 + 16);
      v21[1] = a1;
      v9 = *(_OWORD *)(a4 + 16);
      v10 = *(_QWORD *)(a4 + 32);
      v17 = *(_OWORD *)a4;
      v19 = *((_QWORD *)&v9 + 1);
      v20 = v10;
      v18 = v21;
      v11 = v24;
      *((_DWORD *)v24 + 6) = 0;
      v12 = *(_QWORD *)(a1 + 16);
      if ( (v12 & 0x7FFF8000000000LL) != 0 )
      {
        v13 = 0;
        do
        {
          v14 = *(_QWORD *)(a1 + 8LL * v13 + 88);
          if ( v14 )
          {
            dyld4::Loader::loadDependents(v14, a2, a3, &v17);
            v11 = v24;
          }
          v13 = *((_DWORD *)v11 + 6) + 1;
          *((_DWORD *)v11 + 6) = v13;
          v12 = *(_QWORD *)(a1 + 16);
        }
        while ( v13 < (unsigned __int16)(v12 >> 39) );
      }
      if ( (v12 & 0x400000) != 0 )
      {
        *(_QWORD *)(a1 + 64) = dyld4::JustInTimeLoader::makePatchTable(
                                 (dyld3::MachOFile **)a1,
                                 a3,
                                 (v12 >> 24) & 0x7FFF);
        *(_QWORD *)(a1 + 72) = 0;
        if ( *(_BYTE *)(*((_QWORD *)a3 + 1) + 157LL) )
        {
          v16 = dyld4::Loader::indexOfUnzipperedTwin(
                  a3,
                  (const dyld4::RuntimeState *)(*(_DWORD *)(a1 + 19) & 0x7FFF),
                  v15);
          if ( (_DWORD)v16 != 0xFFFF )
            *(_QWORD *)(a1 + 72) = dyld4::JustInTimeLoader::makePatchTable((dyld3::MachOFile **)a1, a3, v16);
        }
      }
    }
    _Block_object_dispose(&v23, 8);
  }
}
