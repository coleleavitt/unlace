bool __fastcall dyld4::PrebuiltLoaderSet::hasOptimizedSwift(dyld4::PrebuiltLoaderSet *this)
{
  return *((_DWORD *)this + 16) || *((_DWORD *)this + 17) || *((_DWORD *)this + 18) != 0;
}
