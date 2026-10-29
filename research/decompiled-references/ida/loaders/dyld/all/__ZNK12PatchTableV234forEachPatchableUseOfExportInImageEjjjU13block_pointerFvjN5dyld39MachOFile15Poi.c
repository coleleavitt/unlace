__int64 __fastcall PatchTableV2::forEachPatchableUseOfExportInImage(
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
  unsigned int *v13; // x8
  __int64 v14; // x10
  __int64 v15; // x9
  _DWORD *v16; // x21
  __int64 v17; // x22
  unsigned int v18; // [xsp+8h] [xbp-38h] BYREF

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
      v16 = (_DWORD *)(v10 + 8LL * *(v13 - 1) - v8 + v7 + 4);
      v17 = 8 * v15;
      do
      {
        dyld3::MachOFile::PointerMetaData::PointerMetaData((dyld3::MachOFile::PointerMetaData *)&v18);
        v18 = v18 & 0xF0000000
            | HIWORD(*v16)
            | (*v16 << 17) & 0xFE0000
            | (*v16 << 12) & 0x1000000
            | (*v16 << 11) & 0x6000000
            | (*v16 << 14) & 0x8000000;
        result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a5 + 16))(a5, (unsigned int)*(v16 - 1));
        v16 += 2;
        v17 -= 8;
      }
      while ( v17 );
    }
  }
  return result;
}
