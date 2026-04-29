bool __fastcall dyld4::SyscallDelegate::bootVolumeWritable(dyld4::SyscallDelegate *this)
{
  statfs v2; // [xsp+0h] [xbp-890h] BYREF

  return statfs("/", &v2)
      || *(_DWORD *)v2.f_fstypename ^ 0x73667061 | (unsigned __int8)v2.f_fstypename[4]
      || (~v2.f_flags & 0x40000001) != 0;
}
