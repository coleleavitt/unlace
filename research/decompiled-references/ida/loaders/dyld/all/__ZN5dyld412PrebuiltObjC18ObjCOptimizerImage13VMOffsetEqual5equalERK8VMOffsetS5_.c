bool __fastcall dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetEqual::equal(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 8) || !*(_BYTE *)(a2 + 8) )
    std::__throw_bad_optional_access[abi:v15006]();
  return *(_QWORD *)a1 == *(_QWORD *)a2;
}
