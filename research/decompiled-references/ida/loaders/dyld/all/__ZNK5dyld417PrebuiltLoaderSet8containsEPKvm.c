bool __fastcall dyld4::PrebuiltLoaderSet::contains(
        dyld4::PrebuiltLoaderSet *this,
        dyld4::PrebuiltLoaderSet *a2,
        __int64 a3)
{
  return this <= a2 && (char *)a2 + a3 <= (char *)this + *((unsigned int *)this + 2);
}
