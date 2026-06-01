void __noreturn dyld4::Loader::applyCachePatches()
{
  __assert_rtn(
    "applyCachePatches",
    "Loader.cpp",
    2845,
    "cachePatch->overrideOffsetOfImpl == DylibPatch::endOfPatchTable");
}
