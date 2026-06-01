__int64 __fastcall dyld4::JustInTimeLoader::handleStrongWeakDefOverrides(
        dyld4::Loader **this,
        dyld4::RuntimeState *a2,
        dyld4::DyldCacheDataConstLazyScopedWriter *a3)
{
  dyld3::MachOFile *v4; // x0
  __int64 result; // x0
  __int64 v6; // x8
  bool v7; // zf
  _QWORD v8[7]; // [xsp+8h] [xbp-88h] BYREF
  _QWORD v9[6]; // [xsp+40h] [xbp-50h] BYREF

  v9[0] = _NSConcreteStackBlock;
  v9[1] = 0x40000000;
  v9[2] = ___ZN5dyld416JustInTimeLoader28handleStrongWeakDefOverridesERNS_12RuntimeStateERNS_34DyldCacheDataConstLazyScopedWriterE_block_invoke;
  v9[3] = &__block_descriptor_tmp_16;
  v9[4] = this;
  v9[5] = a2;
  v4 = (dyld3::MachOFile *)dyld4::Loader::analyzer(*(this + 3), (dyld4::RuntimeState *)this);
  result = dyld3::MachOFile::hasWeakDefs(v4);
  v6 = (__int64)*(this + 3);
  if ( (_DWORD)result )
    v7 = v6 == 0;
  else
    v7 = 1;
  if ( !v7 )
  {
    v8[0] = _NSConcreteStackBlock;
    v8[1] = 0x40000000;
    v8[2] = ___ZN5dyld416JustInTimeLoader28handleStrongWeakDefOverridesERNS_12RuntimeStateERNS_34DyldCacheDataConstLazyScopedWriterE_block_invoke_2;
    v8[3] = &unk_95FB8;
    v8[5] = v6;
    v8[6] = this;
    v8[4] = v9;
    return dyld3::MachOFile::forEachTreatAsWeakDef(v8);
  }
  return result;
}
