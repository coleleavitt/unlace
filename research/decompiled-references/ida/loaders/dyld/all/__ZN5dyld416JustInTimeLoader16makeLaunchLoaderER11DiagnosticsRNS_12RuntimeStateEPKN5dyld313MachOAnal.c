__int64 __fastcall dyld4::JustInTimeLoader::makeLaunchLoader(
        dyld4::JustInTimeLoader *this,
        Diagnostics *a2,
        dyld4::RuntimeState *a3,
        const dyld3::MachOAnalyzer *a4,
        const char *a5,
        const mach_o::Layout *a6)
{
  __int64 v9; // x22
  _OWORD v11[2]; // [xsp+10h] [xbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  v9 = dyld4::Loader::getOnDiskBinarySliceOffset(a2, a3, a4, (const char *)a4);
  dyld4::SyscallDelegate::fileExists(*((_QWORD *)a2 + 1), a4);
  return dyld4::JustInTimeLoader::make((__int64)a2, a3, (const char *)a4, v11, v9, 1, 0, 0, 0);
}
