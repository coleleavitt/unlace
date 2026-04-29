__int64 __fastcall dyld3::Map<VMOffset,unsigned int,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetHash,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetEqual>::find(
        _QWORD *a1,
        __int64 a2)
{
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x21
  __int64 v6; // x22
  unsigned __int64 v7; // x24
  unsigned __int64 v8; // x9

  if ( !*(_BYTE *)(a2 + 8) )
    std::__throw_bad_optional_access[abi:v15006]();
  v4 = a1[4];
  v5 = (v4 - 1) & *(_QWORD *)a2;
  if ( v4 <= v5 )
LABEL_8:
    dyld3::Map<VMOffset,unsigned int,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetHash,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetEqual>::find();
  v6 = 1;
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1[2] + 8 * v5);
    if ( v7 == -1 )
      return a1[7] + 24LL * a1[9];
    if ( a1[9] <= v7 )
      dyld3::Map<VMOffset,unsigned int,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetHash,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetEqual>::find();
    if ( (unsigned int)dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetEqual::equal(a1[7] + 24 * v7, a2) )
      break;
    v8 = a1[4];
    v5 = (v8 - 1) & (v5 + v6++);
    if ( v8 <= v5 )
      goto LABEL_8;
  }
  if ( a1[9] <= v7 )
    dyld3::Map<VMOffset,unsigned int,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetHash,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetEqual>::find();
  return a1[7] + 24 * v7;
}
