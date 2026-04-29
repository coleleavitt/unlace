__int64 __fastcall dyld4::PrebuiltLoader::BindTargetRef::loaderRef(dyld4::PrebuiltLoader::BindTargetRef *this)
{
  __int64 result; // x0

  result = *(_QWORD *)this;
  if ( result < 0 )
    dyld4::PrebuiltLoader::BindTargetRef::loaderRef();
  return result;
}
