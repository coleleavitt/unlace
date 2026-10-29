__int64 __fastcall PatchTableV3::forEachPatchableGOTUseOfExport(
        __int64 result,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v4; // x8
  __int64 v5; // x9
  unsigned int *v6; // x10
  __int64 v7; // x14
  __int64 v9; // x11
  __int64 v10; // x12
  __int64 v11; // x14
  __int64 v12; // x16
  __int64 v13; // x12
  __int64 v14; // x11
  _DWORD *v15; // x21
  __int64 v16; // x22
  unsigned int v17; // [xsp+8h] [xbp-28h] BYREF

  v4 = *(_QWORD **)result;
  if ( *(_QWORD *)(*(_QWORD *)result + 112LL) > (unsigned __int64)a2 )
  {
    v5 = *(_QWORD *)(result + 8);
    v6 = (unsigned int *)((char *)&v4[a2] + v4[13] - v5);
    v7 = v6[1];
    if ( (_DWORD)v7 )
    {
      v9 = 0;
      v10 = (__int64)v4 + 12 * *v6 + v4[15] - v5;
      v11 = v7 - 1;
      while ( 1 )
      {
        v12 = (v9 + v11) / 2;
        result = *(unsigned int *)((char *)&v4[*(unsigned int *)(v10 + 12LL * (unsigned int)v12)] + v4[3] - v5);
        if ( (_DWORD)result == a3 )
          break;
        if ( (unsigned int)result <= a3 )
          v9 = v12 + 1;
        else
          v11 = v12 - 1;
        if ( v9 > v11 )
          return result;
      }
      v13 = v10 + 12LL * (unsigned int)v12;
      v14 = *(unsigned int *)(v13 + 8);
      if ( (_DWORD)v14 )
      {
        v15 = (_DWORD *)((char *)v4 + v4[17] + 16LL * *(unsigned int *)(v13 + 4) - v5 + 8);
        v16 = 16 * v14;
        do
        {
          dyld3::MachOFile::PointerMetaData::PointerMetaData((dyld3::MachOFile::PointerMetaData *)&v17);
          v17 = v17 & 0xF0000000
              | HIWORD(*v15)
              | (*v15 << 17) & 0xFE0000
              | (*v15 << 12) & 0x1000000
              | (*v15 << 11) & 0x6000000
              | (*v15 << 14) & 0x8000000;
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a4 + 16))(a4, *((_QWORD *)v15 - 1));
          v15 += 4;
          v16 -= 16;
        }
        while ( v16 );
      }
    }
  }
  return result;
}
