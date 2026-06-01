__int64 __fastcall dyld3::MachOFile::hasExportTrie(dyld3::MachOFile *this, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // x20
  int v7; // w8
  _QWORD v9[6]; // [xsp+0h] [xbp-120h] BYREF
  __int64 v10; // [xsp+30h] [xbp-F0h] BYREF
  __int64 *v11; // [xsp+38h] [xbp-E8h]
  __int64 v12; // [xsp+40h] [xbp-E0h]
  int v13; // [xsp+48h] [xbp-D8h]
  vm_address_t v14; // [xsp+50h] [xbp-D0h] BYREF
  _QWORD v15[7]; // [xsp+58h] [xbp-C8h] BYREF
  __int64 v16; // [xsp+90h] [xbp-90h] BYREF
  __int64 *v17; // [xsp+98h] [xbp-88h]
  __int64 v18; // [xsp+A0h] [xbp-80h]
  __int64 v19; // [xsp+A8h] [xbp-78h]
  __int64 v20; // [xsp+B0h] [xbp-70h] BYREF
  __int64 *v21; // [xsp+B8h] [xbp-68h]
  __int64 v22; // [xsp+C0h] [xbp-60h]
  __int64 v23; // [xsp+C8h] [xbp-58h]
  __int64 v24; // [xsp+D0h] [xbp-50h] BYREF
  __int64 *v25; // [xsp+D8h] [xbp-48h]
  __int64 v26; // [xsp+E0h] [xbp-40h]
  __int64 v27; // [xsp+E8h] [xbp-38h]

  v24 = 0;
  v25 = &v24;
  v26 = 0x2000000000LL;
  v27 = 0;
  v20 = 0;
  v21 = &v20;
  v22 = 0x2000000000LL;
  v23 = 0;
  v16 = 0;
  v17 = &v16;
  v18 = 0x2000000000LL;
  v19 = 0;
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 0x40000000;
  v15[2] = ___ZNK5dyld39MachOFile13hasExportTrieERjS1__block_invoke;
  v15[3] = &unk_977A8;
  v15[4] = &v24;
  v15[5] = &v20;
  v15[6] = &v16;
  dyld3::MachOFile::forEachSegment(this, (__int64)v15);
  Diagnostics::Diagnostics((Diagnostics *)&v14);
  v10 = 0;
  v11 = &v10;
  v12 = 0x2000000000LL;
  v13 = -1;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 0x40000000;
  v9[2] = ___ZNK5dyld39MachOFile13hasExportTrieERjS1__block_invoke_2;
  v9[3] = &unk_977D0;
  v9[4] = &v10;
  v9[5] = a3;
  dyld3::MachOFile::forEachLoadCommand(this, (Diagnostics *)&v14, (__int64)v9);
  v6 = 0;
  if ( !Diagnostics::hasError((Diagnostics *)&v14) )
  {
    v7 = *((_DWORD *)v11 + 6);
    if ( v7 == -1 )
    {
      v6 = 0;
    }
    else
    {
      *a2 = *((_DWORD *)v21 + 6) + v7 - (*((_DWORD *)v17 + 6) + *((_DWORD *)v25 + 6));
      v6 = 1;
    }
  }
  _Block_object_dispose(&v10, 8);
  Diagnostics::~Diagnostics(&v14);
  _Block_object_dispose(&v16, 8);
  _Block_object_dispose(&v20, 8);
  _Block_object_dispose(&v24, 8);
  return v6;
}
