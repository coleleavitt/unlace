__int64 __fastcall ___ZN5dyld46Loader26getOnDiskBinarySliceOffsetERNS_12RuntimeStateEPKN5dyld313MachOAnalyzerEPKc_block_invoke(
        _QWORD *a1,
        dyld3::FatFile *this,
        __int64 a3)
{
  __int64 result; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  _QWORD v9[7]; // [xsp+8h] [xbp-58h] BYREF

  result = dyld3::FatFile::isFatFile(this, this);
  if ( result )
  {
    v7 = *(_QWORD *)(a1[4] + 8LL) + 40LL;
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 0x40000000;
    v9[2] = ___ZN5dyld46Loader26getOnDiskBinarySliceOffsetERNS_12RuntimeStateEPKN5dyld313MachOAnalyzerEPKc_block_invoke_2;
    v9[3] = &unk_95EB0;
    v8 = a1[6];
    v9[4] = a1[5];
    v9[5] = v8;
    v9[6] = this;
    return dyld3::FatFile::forEachSlice(result, v7, a3, v9);
  }
  return result;
}
