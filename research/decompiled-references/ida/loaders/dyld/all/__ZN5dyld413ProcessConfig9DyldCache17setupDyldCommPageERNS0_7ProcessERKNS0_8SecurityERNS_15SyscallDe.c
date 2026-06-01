__int64 __fastcall dyld4::ProcessConfig::DyldCache::setupDyldCommPage(
        dyld4::ProcessConfig::DyldCache *this,
        dyld4::ProcessConfig::Process *a2,
        const dyld4::ProcessConfig::Security *a3,
        dyld4::SyscallDelegate *a4)
{
  int v7; // w0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 _28; // [xsp+28h] [xbp+8h]

  v7 = dyld4::SyscallDelegate::bootVolumeWritable(a4);
  v8 = *((_QWORD *)a2 + 16);
  v9 = 0x800000000LL;
  if ( !v7 )
    v9 = 0;
  *((_QWORD *)a2 + 16) = v8 & 0xFFFFFFF7FFFFFFFFLL | v9;
  if ( !*(_BYTE *)a3 )
    *((_QWORD *)a2 + 16) = v8 & 0xFFFFFFE7FFFFFFB8LL | 1;
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return dyld4::SyscallDelegate::setDyldCommPageFlags(a4);
}
