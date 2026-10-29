__int64 __fastcall dyld4::ProcessConfig::DyldCache::makeDataConstWritable(
        dyld4::ProcessConfig::DyldCache *this,
        const dyld4::ProcessConfig::Logging *a2,
        const dyld4::SyscallDelegate *a3,
        int a4)
{
  __int64 v4; // x8
  int v5; // w9
  _QWORD v7[7]; // [xsp+0h] [xbp-40h] BYREF
  int v8; // [xsp+38h] [xbp-8h]

  v4 = *(_QWORD *)this;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 0x40000000;
  v7[2] = ___ZNK5dyld413ProcessConfig9DyldCache21makeDataConstWritableERKNS0_7LoggingERKNS_15SyscallDelegateEb_block_invoke;
  v7[3] = &__block_descriptor_tmp_59;
  v7[4] = this;
  v7[5] = a2;
  if ( a4 )
    v5 = 19;
  else
    v5 = 1;
  v8 = v5;
  v7[6] = a3;
  return DyldSharedCache::forEachCache(v4, v7);
}
