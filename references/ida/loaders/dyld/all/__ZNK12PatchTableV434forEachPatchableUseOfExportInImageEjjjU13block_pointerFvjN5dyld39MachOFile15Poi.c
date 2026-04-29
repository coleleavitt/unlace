__int64 __fastcall PatchTableV4::forEachPatchableUseOfExportInImage(
        PatchTableV2 *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x24
  __int64 v10; // x23
  __int64 result; // x0
  __int64 v12; // x1
  unsigned int *v13; // x9
  __int64 v14; // x11
  __int64 v15; // x10
  unsigned int *v16; // x20
  unsigned int *v17; // x21
  __int64 v18; // x1
  unsigned int v19; // w8
  __int64 v20; // x3
  unsigned int v21; // [xsp+8h] [xbp-38h] BYREF

  v7 = *(_QWORD *)a1;
  v8 = *((_QWORD *)a1 + 1);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
  result = PatchTableV2::clientsExportsForImageAndClient(a1, a2, a4);
  if ( v12 )
  {
    v13 = (unsigned int *)(result + 8);
    v14 = 12 * v12;
    while ( *(_DWORD *)(v7 + v9 - v8 + 8LL * *(v13 - 2)) != a3 )
    {
      v13 += 3;
      v14 -= 12;
      if ( !v14 )
        return result;
    }
    v15 = *v13;
    if ( (_DWORD)v15 )
    {
      v16 = (unsigned int *)(v7 + v10 - v8 + 8LL * *(v13 - 1));
      v17 = &v16[2 * v15];
      do
      {
        dyld3::MachOFile::PointerMetaData::PointerMetaData((dyld3::MachOFile::PointerMetaData *)&v21);
        dyld_cache_patchable_location_v4::getPMD(v16, &v21);
        v18 = *v16;
        v19 = v16[1];
        v16 += 2;
        if ( (v19 & 1) != 0 )
          v20 = (v19 >> 9) & 0x1F;
        else
          v20 = v19 >> 9;
        result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(a5 + 16))(
                   a5,
                   v18,
                   v21,
                   v20,
                   (v19 >> 8) & 1);
      }
      while ( v16 != v17 );
    }
  }
  return result;
}
