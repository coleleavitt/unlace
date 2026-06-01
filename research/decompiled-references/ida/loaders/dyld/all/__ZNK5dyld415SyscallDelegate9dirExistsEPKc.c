bool __fastcall dyld4::SyscallDelegate::dirExists(dyld4::SyscallDelegate *this, dyld3 *a2, stat *a3)
{
  char v5[4]; // [xsp+0h] [xbp-90h] BYREF
  __int16 v6; // [xsp+4h] [xbp-8Ch]

  return !(unsigned int)dyld3::stat(a2, v5, a3) && (v6 & 0xF000) == 0x4000;
}
