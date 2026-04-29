void __fastcall __noreturn dyld4::Atlas::ProcessSnapshot::addSharedCacheImage(
        dyld4::Atlas::ProcessSnapshot *this,
        const mach_header *a2)
{
  __assert_rtn("addSharedCacheImage", "ProcessAtlas.cpp", 1721, "mh->flags & MH_DYLIB_IN_CACHE");
}
