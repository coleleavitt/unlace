__int64 __fastcall dyld4::APIs::NSVersionOfLinkTimeLibrary(dyld4::Loader **this, const char *a2)
{
  dyld3::MachOFile *Address; // x0
  __int64 v5; // x19
  _QWORD v7[6]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v8; // [xsp+40h] [xbp-40h] BYREF
  __int64 *v9; // [xsp+48h] [xbp-38h]
  __int64 v10; // [xsp+50h] [xbp-30h]
  int v11; // [xsp+58h] [xbp-28h]

  v8 = 0;
  v9 = &v8;
  v10 = 0x2000000000LL;
  v11 = -1;
  Address = (dyld3::MachOFile *)dyld4::Loader::loadAddress(*(this + 3), (dyld4::RuntimeState *)this);
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 0x40000000;
  v7[2] = ___ZN5dyld44APIs26NSVersionOfLinkTimeLibraryEPKc_block_invoke;
  v7[3] = &unk_965B0;
  v7[4] = &v8;
  v7[5] = a2;
  dyld3::MachOFile::forEachDependentDylib(Address, (__int64)v7);
  if ( *((_BYTE *)*(this + 1) + 184) )
    dyld4::RuntimeState::log(
      (dyld4::RuntimeState *)this,
      "NSVersionOfLinkTimeLibrary(%s) =>0x%08X\n",
      a2,
      *((_DWORD *)v9 + 6));
  v5 = *((unsigned int *)v9 + 6);
  _Block_object_dispose(&v8, 8);
  return v5;
}
