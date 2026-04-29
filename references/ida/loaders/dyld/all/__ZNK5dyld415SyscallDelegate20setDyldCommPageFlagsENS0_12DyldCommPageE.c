__int64 __fastcall dyld4::SyscallDelegate::setDyldCommPageFlags(__int64 a1, __int64 a2)
{
  __int64 v3; // [xsp+8h] [xbp-8h] BYREF

  v3 = a2;
  return sysctlbyname("kern.dyld_flags", nullptr, nullptr, &v3, 8u);
}
