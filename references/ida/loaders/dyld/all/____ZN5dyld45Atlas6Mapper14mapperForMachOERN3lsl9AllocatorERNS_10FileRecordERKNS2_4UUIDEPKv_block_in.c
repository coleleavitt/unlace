bool __fastcall ___ZN5dyld45Atlas6Mapper14mapperForMachOERN3lsl9AllocatorERNS_10FileRecordERKNS2_4UUIDEPKv_block_invoke(
        _QWORD *a1,
        int a2,
        int a3,
        dyld3::MachOFile *this,
        __int64 a5,
        _BYTE *a6)
{
  _BOOL8 result; // x0
  __int64 v10; // x8
  int v11; // w11
  int v12; // w12
  __int128 v14; // [xsp+0h] [xbp-50h]
  unsigned __int8 v15[16]; // [xsp+18h] [xbp-38h] BYREF

  memset(v15, 0, sizeof(v15));
  result = dyld3::MachOFile::getUuid(this, v15);
  v10 = 0;
  v14 = *(_OWORD *)v15;
  do
  {
    v11 = *(unsigned __int8 *)(a1[6] + v10);
    v12 = v15[v10 - 8];
  }
  while ( v11 == v12 && v10++ != 15 );
  if ( v11 == v12 )
  {
    *(_QWORD *)(*(_QWORD *)(a1[4] + 8LL) + 24LL) = this;
    *(_QWORD *)(*(_QWORD *)(a1[5] + 8LL) + 24LL) = (char *)this - a1[7];
    *a6 = 1;
  }
  return result;
}
